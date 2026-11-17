// Name: core_gmehook.cpp_CGameHook_showDebugMenu_FUN_0059c3d0
// Address: 0059c3d0
// Address Range: [[0059c3d0, 0059c573]]
// Convention: __cdecl
// Signature: void __cdecl core_gmehook_cpp_CGameHook_showDebugMenu_FUN_0059c3d0(CGameHook *this_ptr)

#include "nocturne.h"

void __cdecl core_gmehook_cpp_CGameHook_showDebugMenu_FUN_0059c3d0(CGameHook *this_ptr)

{
  int iVar1;
  CPickList CStack_4d0;
  char acStack_110 [256];
  
  shape_edittool_cpp_CPickList_ctor_FUN_00481fc0(&CStack_4d0);
  iVar1 = (*g_CKeys_PTR_00617dd4->vtable->getKeyState)(g_CKeys_PTR_00617dd4,DIK_LCONTROL);
  if ((iVar1 != 0) &&
     (iVar1 = (*g_CKeys_PTR_00617dd4->vtable->getAndClearKeyState)
                        (g_CKeys_PTR_00617dd4,DIK_SUBTRACT), iVar1 != 0)) {
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
    g_INT_02668128 =
         shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250
                   (&CStack_4d0,"-- Select Debug Flag --",g_INT_02668128,0);
    switch(g_INT_02668128) {
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
      g_INT_02668128 = 0;
    }
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&CStack_4d0,0);
  return;
}
