disableSerialization;
params ["_show"];

_disp = findDisplay 9228;
if (f_cam_reinforcement_menuWorking) exitWith {};
if (_show && !f_cam_reinforcement_menuShown) then {
  f_cam_reinforcement_menuWorking = true;
  f_cam_reinforcement_menuShown = true;
  {
    _pos = ctrlPosition (_disp displayCtrl _x);
    _pos set [1, (_pos select 1) + 0.03];
    (_disp displayCtrl _x) ctrlSetPosition _pos;
    nil
  } count f_cam_reinforcement_menuControls;
  { (_disp displayCtrl _x) ctrlCommit 0.6; nil } count f_cam_reinforcement_menuControls;
  waitUntil { ctrlCommitted (_disp displayCtrl (f_cam_reinforcement_menuControls select 0)) };
  f_cam_reinforcement_menuWorking = false;
};

if (!_show && f_cam_reinforcement_menuShown) then {
    f_cam_reinforcement_menuWorking = true;
    f_cam_reinforcement_menuShown = false;
    {
      _pos = ctrlPosition (_disp displayCtrl _x);
      _pos set [1,(_pos select 1) - 0.03];
      (_disp displayCtrl _x) ctrlSetPosition _pos;
      nil
    } count f_cam_reinforcement_menuControls;
    { (_disp displayCtrl _x) ctrlCommit 0.6; nil } count f_cam_reinforcement_menuControls;
    waitUntil { ctrlCommitted (_disp displayCtrl (f_cam_reinforcement_menuControls select 0)) };
    f_cam_reinforcement_menuWorking = false;
};
