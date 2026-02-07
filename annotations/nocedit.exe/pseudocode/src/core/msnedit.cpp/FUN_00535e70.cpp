// Name: core_msnedit.cpp_FUN_00535e70
// Address: 00535e70
// Address Range: [[00535e70, 00536bbc]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_FUN_00535e70(void)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_FUN_00535e70(void)

{
  CDemonActor *this_ptr;
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  int right_pos;
  int bottom_pos;
  CEdScrollBar local_48;
  uint local_14;
  
  shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0(&local_48);
  while( true ) {
    local_14 = -local_48.scroll_position;
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Master editor keys:",g_ClipLeft,local_14);
    local_14 = local_14 + 0x16;
    engine_2d_c_drawText_FUN_00401fd0("F1",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Show this help screen",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0x16;
    engine_2d_c_drawText_FUN_00401fd0("C",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Next camera",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("SHIFT+C",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Prev camera",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("E",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Toggle virtual director",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("V",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0("Next View",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("SHIFT+V",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Previous View",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0x16;
    engine_2d_c_drawText_FUN_00401fd0("TAB",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0("Next actor",g_WindowWidth / 8 + g_ClipLeft,local_14)
    ;
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("SHIFT+TAB",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Previous actor",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("N",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Select actor by name",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0x16;
    engine_2d_c_drawText_FUN_00401fd0("I",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Insert actor",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("D",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Delete actor",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("Shift+D",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Delete multiple actors",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("R",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Replicate actor",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("T",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Change Type of selected actor",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0x16;
    engine_2d_c_drawText_FUN_00401fd0("O",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Mission editor Options",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("CTRL+S",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Save mission",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("W",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Full screen toggle",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("BackSpc",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Undo actor changes made since actor was last selected",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0x16;
    engine_2d_c_drawText_FUN_00401fd0("H",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Hide selected actor",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("Shift+H",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Hide multiple actors",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("U",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Unhide actors by name",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("Shift+U",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Unhide all actors",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0x16;
    engine_2d_c_drawText_FUN_00401fd0("Mouse controls:",g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("Alt+Click",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Type actor name or hilited property into editor",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("Ctrl+Click",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Copy actor property text to clipboard",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("Shift+Click",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Envoke alternate editing function for many types of actor properties",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0x16;
    engine_2d_c_drawText_FUN_00401fd0("Script editor keys:",g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("F2",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Toggle script editor",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("CTRL+G",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Goto line number",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("CTRL+F",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0("Find",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("F3",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0("Find next",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("Shift+F3",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0("Find prev",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("F4",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Context-sensative selection",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("F6",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Jump to actor/label/camera under cursor",g_WindowWidth / 8 + g_ClipLeft,local_14);
    local_14 = local_14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("F7",g_ClipLeft,local_14);
    engine_2d_c_drawText_FUN_00401fd0
              ("Syntax check",g_WindowWidth / 8 + g_ClipLeft,local_14);
    this_ptr = g_CDemonMissionPtr->selected_actor;
    uVar1 = local_14 + 0x16;
    if (this_ptr != (CDemonActor *)0x0) {
      local_14 = local_14 + 0x21;
      if ((local_14 < 0x80000000) && ((int)local_14 <= g_ClipBottom)) {
        g_ActiveRenderColor = 0xff;
        engine_2d_c_drawLine_FUN_004011b0(g_ClipLeft,local_14,g_ClipRight,local_14);
      }
      local_14 = local_14 + 0xb;
      pcVar2 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(this_ptr);
      sprintf
                (&stack0xfffffef0,"Actor-specific help for selected actor %s (type %s):",this_ptr,pcVar2);
      engine_2d_c_drawText_FUN_00401fd0(&stack0xfffffef0,g_ClipLeft,local_14);
      local_14 = local_14 + 0x16;
      (*((this_ptr->vtable)._ub)->showEditorHelp)(this_ptr,(int *)&local_14);
      uVar1 = local_14;
    }
    local_14 = uVar1;
    local_14 = local_14 + 0xb;
    iVar4 = g_ClipTop;
    right_pos = g_ClipRight;
    bottom_pos = g_ClipBottom;
    iVar3 = shape_edittool_cpp_calculateGridWidth_FUN_004a6490();
    shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
              (&local_48,g_WindowWidth - iVar3,iVar4,right_pos,bottom_pos);
    local_48.current_value = local_14 + local_48.scroll_position;
    local_48.max_value = (g_ClipBottom - g_ClipTop) + -1;
    shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10(&local_48);
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(&local_48);
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,1);
    if (iVar4 != 0) break;
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x50);
    if (iVar4 != 0) {
      local_48.orientation = local_48.orientation + 0xb;
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x48);
    if (iVar4 != 0) {
      local_48.bounds_top = local_48.bounds_top + -0xb;
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x51);
    if (iVar4 != 0) {
      local_48.bounds_bottom = local_48.bounds_bottom + local_48.track_end;
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x49);
    if (iVar4 != 0) {
      local_48.track_end = local_48.track_end - local_48.thumb_end;
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x47);
    if (iVar4 != 0) {
      local_48.thumb_end = 0;
    }
    if ((int)(local_14 - unaff_EBP) < local_48.thumb_end) {
      local_48.thumb_end = local_14 - unaff_EBP;
    }
    if (0x7fffffff < (uint)local_48.thumb_end) {
      local_48.thumb_end = 0;
    }
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0((CEdScrollBar *)&local_48.thumb_end);
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20((CEdScrollBar *)&local_48.max_value);
  return;
}
