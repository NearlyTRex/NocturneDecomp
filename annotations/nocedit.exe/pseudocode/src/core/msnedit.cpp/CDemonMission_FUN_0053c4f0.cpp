// Name: core_msnedit.cpp_CDemonMission_FUN_0053c4f0
// Address: 0053c4f0
// Address Range: [[0053c4f0, 0053c72a]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c4f0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c4f0(CDemonMission *this_ptr)

{
  int iVar1;
  int iVar2;
  CDemonRenderer *unaff_EDI;
  char acStack_13c [300];
  int iStack_10;
  
  core_actor_cpp_FUN_0040e150();
  DAT_02f7c528 = -1;
  DAT_02f7c538 = 0;
  if (*(int *)(this_ptr->unk2 + 0x1c) == 0) {
    return;
  }
  (**(code **)(*(int *)(*(int *)(this_ptr->unk2 + 0x1c) + 0x154) + 0xd4))();
  if ((DAT_02f79818 & 1) == 0) {
    DAT_02f79818 = DAT_02f79818 | 1;
    shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0(&DAT_02f797e4);
    _atexit(&DAT_0068064c);
  }
  iVar1 = g_WindowWidth;
  if (*(int *)(this_ptr->unk2 + 0x18) != 0) {
    iStack_10 = 0x141;
    engine_matrix_c_pushViewport_FUN_0050e320(0x141,0,g_WindowWidth + -0x14c,0xf0);
    iVar2 = iVar1 + -0xc;
    core_actor_cpp_CActorPropertyList_FUN_0040e770
              ((CActorPropertyList *)&DAT_02f7a024,0x141,0,iVar2);
    shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
              (&DAT_02f797e4,iVar1 + -0xb,1,iVar1 + -1,0xee);
    DAT_02f797e4.max_value = 0xf0;
    DAT_02f797e4.current_value = INT_02f7c510;
    DAT_02f797e4.scroll_increment = INT_02f7c510 / INT_02f7a028;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(&DAT_02f797e4);
    core_actor_cpp_CActorPropertyList_FUN_0040e770
              ((CActorPropertyList *)&DAT_02f7a024,0x141,-DAT_02f797e4.scroll_position,iVar2);
    if ((((g_ActiveButton == (CEdButton *)0x0) && (0x140 < g_MouseX)) && (g_MouseX <= iVar2)) &&
       ((-1 < g_MouseY && (g_MouseY < 0xf0)))) {
      DAT_02f7c528 = core_actor_cpp_CActorPropertyList_FUN_0040e9c0();
    }
    core_actor_cpp_CActorPropertyList_FUN_0040e850();
    engine_matrix_c_popViewport_FUN_0050e480(unaff_EDI);
    shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10(&DAT_02f797e4);
    iVar2 = iStack_10 + -1;
    g_ActiveRenderColor = 7;
    engine_2d_c_drawVLine_FUN_00402ff0(iVar2,0,0xf0);
    engine_2d_c_drawHLine_FUN_00402ee0(iVar2,0xf0,iVar1 + -1);
    core_msnedit_cpp_FUN_00536e20();
    return;
  }
  sprintf
            (acStack_13c,"Selected: %s",*(uint *)(this_ptr->unk2 + 0x1c));
  engine_2d_c_drawText_FUN_00401fd0(acStack_13c,0,g_WindowHeight + -0xb);
  shape_edittool_cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40(&DAT_02f797e4);
  core_msnedit_cpp_FUN_00536e20();
  return;
}
