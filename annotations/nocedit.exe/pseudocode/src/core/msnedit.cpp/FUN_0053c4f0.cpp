// Name: core_msnedit.cpp_FUN_0053c4f0
// Address: 0053c4f0
// Address Range: [[0053c4f0, 0053c72a]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053c4f0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_msnedit_cpp_FUN_0053c4f0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  CDemonRenderer *unaff_EDI;
  int x;
  int in_stack_00000004;
  char acStack_13c [300];
  int iStack_10;
  
  core_actor_cpp_FUN_0040e150();
  DAT_02f7c528 = 0xffffffff;
  DAT_02f7c538 = 0;
  if (*(int *)(in_stack_00000004 + 0x28) == 0) {
    return;
  }
  (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x28) + 0x154) + 0xd4))();
  if ((DAT_02f79818 & 1) == 0) {
    DAT_02f79818 = DAT_02f79818 | 1;
    shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0((CEdScrollBar *)&DAT_02f797e4);
    crt_stdlib_c_atexit_FUN_005ff060(&DAT_0068064c);
  }
  iVar1 = g_WindowWidth;
  if (*(int *)(in_stack_00000004 + 0x24) != 0) {
    iStack_10 = 0x141;
    engine_matrix_c_pushViewport_FUN_0050e320(0x141,0,g_WindowWidth + -0x14c,0xf0);
    core_actor_cpp_CActorPropertyList_FUN_0040e770();
    shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
              ((CEdScrollBar *)&DAT_02f797e4,iVar1 + -0xb,1,iVar1 + -1,0xee);
    _DAT_02f797ec = 0xf0;
    _DAT_02f797e8 = DAT_02f7c510;
    _DAT_02f797f0 = DAT_02f7c510 / _DAT_02f7a028;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0((CEdScrollBar *)&DAT_02f797e4);
    core_actor_cpp_CActorPropertyList_FUN_0040e770();
    if ((((g_ActiveButton == (CEdButton *)0x0) && (0x140 < g_MouseX)) && (g_MouseX <= iVar1 + -0xc))
       && ((-1 < g_MouseY && (g_MouseY < 0xf0)))) {
      DAT_02f7c528 = core_actor_cpp_CActorPropertyList_FUN_0040e9c0();
    }
    core_actor_cpp_CActorPropertyList_FUN_0040e850();
    engine_matrix_c_popViewport_FUN_0050e480(unaff_EDI);
    shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10((CEdScrollBar *)&DAT_02f797e4);
    x = iStack_10 + -1;
    g_ActiveRenderColor = 7;
    engine_2d_c_drawVLine_FUN_00402ff0(x,0,0xf0);
    engine_2d_c_drawHLine_FUN_00402ee0(x,0xf0,iVar1 + -1);
    core_msnedit_cpp_FUN_00536e20();
    return;
  }
  crt_stdio_c_sprintf_FUN_005fdbd0
            (acStack_13c,"Selected: %s",*(uint *)(in_stack_00000004 + 0x28));
  engine_2d_c_drawText_FUN_00401fd0(acStack_13c,0,g_WindowHeight + -0xb);
  shape_edittool_cpp_CEdScrollBar_clearActiveButtonIfMatch_FUN_004a5b40
            ((CEdScrollBar *)&DAT_02f797e4);
  core_msnedit_cpp_FUN_00536e20();
  return;
}
