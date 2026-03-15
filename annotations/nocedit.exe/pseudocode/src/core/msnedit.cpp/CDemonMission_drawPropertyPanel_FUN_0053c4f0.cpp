// Name: core_msnedit.cpp_CDemonMission_drawPropertyPanel_FUN_0053c4f0
// Address: 0053c4f0
// Address Range: [[0053c4f0, 0053c72a]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_drawPropertyPanel_FUN_0053c4f0(CDemonMission *this_ptr)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_drawPropertyPanel_FUN_0053c4f0(CDemonMission *this_ptr)

{
  CDemonActor *this_ptr_00;
  int iVar1;
  int iVar2;
  char acStack_13c [300];
  int iStack_10;
  
  core_actor_cpp_CActorPropertyList_resetSelection_FUN_0040e150(&g_MsnEditPropertyList);
  this_ptr_00 = this_ptr->selected_actor;
  INT_02f7c528 = -1;
  INT_02f7c538 = 0;
  if (this_ptr_00 == (CDemonActor *)0x0) {
    return;
  }
  (*((this_ptr_00->vtable)._ub)->getPropertyList)(this_ptr_00,&g_MsnEditPropertyList);
  if ((g_MsnEditPropertyScrollBarInitGuard & 1) == 0) {
    g_MsnEditPropertyScrollBarInitGuard = g_MsnEditPropertyScrollBarInitGuard | 1;
    shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0(&g_MsnEditPropertyScrollBar);
    _atexit(&WatcomStaticDestructorNode_0068064c);
  }
  iVar1 = g_WindowWidth;
  if (this_ptr->show_3d_viewport != 0) {
    iStack_10 = 0x141;
    engine_matrix_c_pushViewport_FUN_0050e320(0x141,0,g_WindowWidth + -0x14c,0xf0);
    iVar2 = iVar1 + -0xc;
    core_actor_cpp_CActorPropertyList_calculateLayout_FUN_0040e770
              (&g_MsnEditPropertyList,0x141,0,iVar2);
    shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
              (&g_MsnEditPropertyScrollBar,iVar1 + -0xb,1,iVar1 + -1,0xee);
    g_MsnEditPropertyScrollBar.max_value = 0xf0;
    g_MsnEditPropertyScrollBar.current_value = g_MsnEditPropertyList.total_height;
    g_MsnEditPropertyScrollBar.scroll_increment =
         g_MsnEditPropertyList.total_height / g_MsnEditPropertyList.count;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(&g_MsnEditPropertyScrollBar);
    core_actor_cpp_CActorPropertyList_calculateLayout_FUN_0040e770
              (&g_MsnEditPropertyList,0x141,-g_MsnEditPropertyScrollBar.scroll_position,iVar2);
    if ((((g_ActiveControl == (void *)0x0) && (0x140 < g_MouseX)) && (g_MouseX <= iVar2)) &&
       ((-1 < g_MouseY && (g_MouseY < 0xf0)))) {
      INT_02f7c528 = core_actor_cpp_CActorPropertyList_hitTest_FUN_0040e9c0
                               (&g_MsnEditPropertyList,g_MouseX,g_MouseY);
    }
    core_actor_cpp_CActorPropertyList_render_FUN_0040e850(&g_MsnEditPropertyList,INT_02f7c528);
    engine_matrix_c_popViewport_FUN_0050e480();
    shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10(&g_MsnEditPropertyScrollBar);
    iVar2 = iStack_10 + -1;
    g_ActiveRenderColor = 7;
    engine_2d_c_drawVLine_FUN_00402ff0(iVar2,0,0xf0);
    engine_2d_c_drawHLine_FUN_00402ee0(iVar2,0xf0,iVar1 + -1);
    core_msnedit_cpp_drawMotionBar_FUN_00536e20();
    return;
  }
  _sprintf(acStack_13c,"Selected: %s",this_ptr->selected_actor);
  engine_2d_c_drawText_FUN_00401fd0(acStack_13c,0,g_WindowHeight + -0xb);
  shape_edittool_cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40(&g_MsnEditPropertyScrollBar)
  ;
  core_msnedit_cpp_drawMotionBar_FUN_00536e20();
  return;
}
