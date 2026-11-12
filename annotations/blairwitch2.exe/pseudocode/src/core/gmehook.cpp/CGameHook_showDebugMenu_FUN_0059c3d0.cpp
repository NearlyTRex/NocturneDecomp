// Name: core_gmehook.cpp_CGameHook_showDebugMenu_FUN_0059c3d0
// Address: 0059c3d0
// Address Range: [[0059c3d0, 0059c573]]
// Convention: __cdecl
// Signature: void __cdecl core_gmehook_cpp_CGameHook_showDebugMenu_FUN_0059c3d0(CGameHook *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gmehook_cpp_CGameHook_showDebugMenu_FUN_0059c3d0(CGameHook *this_ptr)

{
  int iVar1;
  CPickList CStack_4d0;
  char acStack_110 [256];
  
  shape_edittool_cpp_CPickList_ctor_FUN_00481fc0(&CStack_4d0);
  iVar1 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
  if ((iVar1 != 0) && (iVar1 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x4a), iVar1 != 0)) {
    core_gmehook_cpp_CGameHook_formatFlag_FUN_0059c380
              (this_ptr,"DebugStateDisplay",this_ptr->debug_state_display,acStack_110);
    shape_edittool_cpp_CStrList_add_FUN_00480e70(&CStack_4d0.base,acStack_110);
    core_gmehook_cpp_CGameHook_formatFlag_FUN_0059c380
              (this_ptr,"DebugBarrierDisplay",this_ptr->debug_barrier_display,acStack_110);
    shape_edittool_cpp_CStrList_add_FUN_00480e70(&CStack_4d0.base,acStack_110);
    core_gmehook_cpp_CGameHook_formatFlag_FUN_0059c380
              (this_ptr,"DebugWayPointDisplay",this_ptr->debug_waypoint_display,acStack_110
              );
    shape_edittool_cpp_CStrList_add_FUN_00480e70(&CStack_4d0.base,acStack_110);
    core_gmehook_cpp_CGameHook_formatFlag_FUN_0059c380
              (this_ptr,"DebugFollowSlotDisplay",this_ptr->debug_follow_slot_display,
               acStack_110);
    shape_edittool_cpp_CStrList_add_FUN_00480e70(&CStack_4d0.base,acStack_110);
    _DAT_02668128 =
         shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250
                   (&CStack_4d0,"-- Select Debug Flag --",_DAT_02668128,0);
    switch(_DAT_02668128) {
    case 0:
      this_ptr->debug_state_display = (uint)(this_ptr->debug_state_display == 0);
      break;
    case 1:
      this_ptr->debug_barrier_display = (uint)(this_ptr->debug_barrier_display == 0);
      break;
    case 2:
      this_ptr->debug_waypoint_display = (uint)(this_ptr->debug_waypoint_display == 0);
      break;
    case 3:
      this_ptr->debug_follow_slot_display = (uint)(this_ptr->debug_follow_slot_display == 0);
      break;
    case -1:
      _DAT_02668128 = 0;
    }
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&CStack_4d0,0);
  return;
}
