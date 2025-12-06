// Name: core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70
// Address: 00535e70
// Address Range: [[00535e70, 00536bbc]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70()

#include "nocturne.h"

/* Signature: byte core_msnedit.cpp_MasterEditorKeysHelpScreen() */

void core_msnedit_cpp_MasterEditorKeysHelpScreen_FUN_00535e70
               (uint param_1,uint param_2,char *unaff_EBX,uint param_4,
               char *param_5,int param_6,char *param_7,int param_8,CDemonActor *param_9,
               int *param_10,int param_11,CEdScrollBar *param_12,int param_13,int param_14,
               int param_15,int param_16,int param_17,CEditorTools *param_18,int param_19,
               CKeys *param_20,int param_21,int param_22,int param_23,int param_24,CKeys *param_25,
               int param_26,int param_27,int param_28,int param_29,CKeys *param_30,int param_31,
               int param_32,int param_33,int param_34,CKeys *param_35,int param_36,int param_37,
               int param_38,int param_39,CKeys *param_40,int param_41,int param_42,int param_43,
               int param_44,CKeys *param_45,int param_46,int param_47,int param_48,int param_49,
               int param_50,CEdScrollBar *param_51,int param_52,int param_53,int param_54,
               int param_55,int param_56,int param_57,int param_58,int param_59,int param_60,
               int param_61,int param_62,int param_63,int param_64,int param_65,int param_66,
               int param_67,int param_68,char *param_69,int param_70,int param_71,
               uint param_72,int param_73,int param_74)

{
  CDemonActor *this_ptr;
  int right_pos;
  int iVar1;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  int unaff_EDI;
  int unaff_retaddr;
  int in_stack_0000012c;
  int in_stack_00000134;
  int in_stack_00000138;
  int in_stack_0000014c;
  int in_stack_00000160;
  int in_stack_00000168;
  int in_stack_00000174;
  int in_stack_0000017c;
  int in_stack_00000188;
  int in_stack_0000018c;
  int in_stack_00000190;
  
  shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0((CEdScrollBar *)&stack0xffffffb8);
  while( true ) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Master editor keys:",g_ClipLeft,unaff_EDI);
    engine_2d_c_drawText_FUN_00401fd0("F1",g_ClipLeft,unaff_ESI + 0x16);
    engine_2d_c_drawText_FUN_00401fd0
              ("Show this help screen",g_WindowWidth / 8 + g_ClipLeft,(int)unaff_EBX);
    engine_2d_c_drawText_FUN_00401fd0("C",g_ClipLeft,unaff_retaddr + 0x16);
    engine_2d_c_drawText_FUN_00401fd0
              ("Next camera",g_WindowWidth / 8 + g_ClipLeft,(int)param_5);
    param_6 = param_6 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("SHIFT+C",g_ClipLeft,param_6);
    engine_2d_c_drawText_FUN_00401fd0
              ("Prev camera",g_WindowWidth / 8 + g_ClipLeft,(int)param_7);
    param_8 = param_8 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("E",g_ClipLeft,param_8);
    engine_2d_c_drawText_FUN_00401fd0
              ("Toggle virtual director",g_WindowWidth / 8 + g_ClipLeft,(int)param_9);
    param_10 = (int *)((int)param_10 + 0xb);
    engine_2d_c_drawText_FUN_00401fd0("V",g_ClipLeft,(int)param_10);
    engine_2d_c_drawText_FUN_00401fd0("Next View",g_WindowWidth / 8 + g_ClipLeft,param_11);
    engine_2d_c_drawText_FUN_00401fd0
              ("SHIFT+V",g_ClipLeft,(int)((int)&param_12->max_value + 3));
    engine_2d_c_drawText_FUN_00401fd0
              ("Previous View",g_WindowWidth / 8 + g_ClipLeft,param_13);
    engine_2d_c_drawText_FUN_00401fd0("TAB",g_ClipLeft,param_14 + 0x16);
    engine_2d_c_drawText_FUN_00401fd0("Next actor",g_WindowWidth / 8 + g_ClipLeft,param_15)
    ;
    engine_2d_c_drawText_FUN_00401fd0("SHIFT+TAB",g_ClipLeft,param_16 + 0xb);
    engine_2d_c_drawText_FUN_00401fd0
              ("Previous actor",g_WindowWidth / 8 + g_ClipLeft,param_17);
    engine_2d_c_drawText_FUN_00401fd0("N",g_ClipLeft,(int)(param_18 + 0xb));
    engine_2d_c_drawText_FUN_00401fd0
              ("Select actor by name",g_WindowWidth / 8 + g_ClipLeft,param_19);
    engine_2d_c_drawText_FUN_00401fd0("I",g_ClipLeft,(int)((int)&param_20[5].vtable + 2));
    engine_2d_c_drawText_FUN_00401fd0
              ("Insert actor",g_WindowWidth / 8 + g_ClipLeft,param_21);
    param_22 = param_22 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("D",g_ClipLeft,param_22);
    engine_2d_c_drawText_FUN_00401fd0
              ("Delete actor",g_WindowWidth / 8 + g_ClipLeft,param_23);
    engine_2d_c_drawText_FUN_00401fd0("Shift+D",g_ClipLeft,param_24 + 0xb);
    engine_2d_c_drawText_FUN_00401fd0
              ("Delete multiple actors",g_WindowWidth / 8 + g_ClipLeft,(int)param_25);
    engine_2d_c_drawText_FUN_00401fd0("R",g_ClipLeft,param_26 + 0xb);
    engine_2d_c_drawText_FUN_00401fd0
              ("Replicate actor",g_WindowWidth / 8 + g_ClipLeft,param_27);
    param_28 = param_28 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("T",g_ClipLeft,param_28);
    engine_2d_c_drawText_FUN_00401fd0
              ("Change Type of selected actor",g_WindowWidth / 8 + g_ClipLeft,param_29);
    engine_2d_c_drawText_FUN_00401fd0("O",g_ClipLeft,(int)((int)&param_30[5].vtable + 2));
    engine_2d_c_drawText_FUN_00401fd0
              ("Mission editor Options",g_WindowWidth / 8 + g_ClipLeft,param_31);
    param_32 = param_32 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("CTRL+S",g_ClipLeft,param_32);
    engine_2d_c_drawText_FUN_00401fd0
              ("Save mission",g_WindowWidth / 8 + g_ClipLeft,param_33);
    engine_2d_c_drawText_FUN_00401fd0("W",g_ClipLeft,param_34 + 0xb);
    engine_2d_c_drawText_FUN_00401fd0
              ("Full screen toggle",g_WindowWidth / 8 + g_ClipLeft,(int)param_35);
    engine_2d_c_drawText_FUN_00401fd0("BackSpc",g_ClipLeft,param_36 + 0xb);
    engine_2d_c_drawText_FUN_00401fd0
              ("Undo actor changes made since actor was last selected",g_WindowWidth / 8 + g_ClipLeft,param_37);
    param_38 = param_38 + 0x16;
    engine_2d_c_drawText_FUN_00401fd0("H",g_ClipLeft,param_38);
    engine_2d_c_drawText_FUN_00401fd0
              ("Hide selected actor",g_WindowWidth / 8 + g_ClipLeft,param_39);
    engine_2d_c_drawText_FUN_00401fd0
              ("Shift+H",g_ClipLeft,(int)((int)&param_40[2].vtable + 3));
    engine_2d_c_drawText_FUN_00401fd0
              ("Hide multiple actors",g_WindowWidth / 8 + g_ClipLeft,param_41);
    param_42 = param_42 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("U",g_ClipLeft,param_42);
    engine_2d_c_drawText_FUN_00401fd0
              ("Unhide actors by name",g_WindowWidth / 8 + g_ClipLeft,param_43);
    engine_2d_c_drawText_FUN_00401fd0("Shift+U",g_ClipLeft,param_44 + 0xb);
    engine_2d_c_drawText_FUN_00401fd0
              ("Unhide all actors",g_WindowWidth / 8 + g_ClipLeft,(int)param_45);
    engine_2d_c_drawText_FUN_00401fd0("Mouse controls:",g_ClipLeft,param_46 + 0x16);
    param_47 = param_47 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("Alt+Click",g_ClipLeft,param_47);
    engine_2d_c_drawText_FUN_00401fd0
              ("Type actor name or hilited property into editor",g_WindowWidth / 8 + g_ClipLeft,param_48);
    param_49 = param_49 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("Ctrl+Click",g_ClipLeft,param_49);
    engine_2d_c_drawText_FUN_00401fd0
              ("Copy actor property text to clipboard",g_WindowWidth / 8 + g_ClipLeft,param_50);
    engine_2d_c_drawText_FUN_00401fd0
              ("Shift+Click",g_ClipLeft,(int)((int)&param_51->max_value + 3));
    engine_2d_c_drawText_FUN_00401fd0
              ("Envoke alternate editing function for many types of actor properties",g_WindowWidth / 8 + g_ClipLeft,param_52);
    param_53 = param_53 + 0x16;
    engine_2d_c_drawText_FUN_00401fd0("Script editor keys:",g_ClipLeft,param_53);
    param_54 = param_54 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("F2",g_ClipLeft,param_54);
    engine_2d_c_drawText_FUN_00401fd0
              ("Toggle script editor",g_WindowWidth / 8 + g_ClipLeft,param_55);
    param_56 = param_56 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("CTRL+G",g_ClipLeft,param_56);
    engine_2d_c_drawText_FUN_00401fd0
              ("Goto line number",g_WindowWidth / 8 + g_ClipLeft,param_57);
    param_58 = param_58 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("CTRL+F",g_ClipLeft,param_58);
    engine_2d_c_drawText_FUN_00401fd0("Find",g_WindowWidth / 8 + g_ClipLeft,param_59);
    param_60 = param_60 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("F3",g_ClipLeft,param_60);
    engine_2d_c_drawText_FUN_00401fd0("Find next",g_WindowWidth / 8 + g_ClipLeft,param_61);
    param_62 = param_62 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("Shift+F3",g_ClipLeft,param_62);
    engine_2d_c_drawText_FUN_00401fd0("Find prev",g_WindowWidth / 8 + g_ClipLeft,param_63);
    param_64 = param_64 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("F4",g_ClipLeft,param_64);
    engine_2d_c_drawText_FUN_00401fd0
              ("Context-sensative selection",g_WindowWidth / 8 + g_ClipLeft,param_65);
    param_66 = param_66 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("F6",g_ClipLeft,param_66);
    engine_2d_c_drawText_FUN_00401fd0
              ("Jump to actor/label/camera under cursor",g_WindowWidth / 8 + g_ClipLeft,param_67);
    param_68 = param_68 + 0xb;
    unaff_EDI = 0x536903;
    engine_2d_c_drawText_FUN_00401fd0("F7",g_ClipLeft,param_68);
    param_5 = param_69;
    unaff_retaddr = g_WindowWidth / 8 + g_ClipLeft;
    unaff_EBX = "Syntax check";
    unaff_ESI = 0x53692d;
    engine_2d_c_drawText_FUN_00401fd0("Syntax check",unaff_retaddr,(int)param_69);
    this_ptr = *(CDemonActor **)(g_CDemonMissionPtr->field2_0xc + 0x1c);
    iVar1 = param_70 + 0x16;
    if (this_ptr != (CDemonActor *)0x0) {
      param_70 = param_70 + 0x21;
      if ((-1 < param_70) && (param_70 <= g_ClipBottom)) {
        g_ActiveRenderColor = 0xff;
        unaff_ESI = 0x53698e;
        unaff_EBX = (char *)g_ClipLeft;
        engine_2d_c_drawLine_FUN_004011b0(g_ClipLeft,param_70,g_ClipRight,param_70);
      }
      param_71 = param_71 + 0xb;
      core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(this_ptr);
      param_5 = &stack0x00000014;
      unaff_retaddr = 0x5369bb;
      crt_stdio_c_sprintf_FUN_005fdbd0(param_5,"Actor-specific help for selected actor %s (type %s):");
      param_9 = (CDemonActor *)param_73;
      param_7 = &stack0x00000018;
      param_6 = 0x5369d7;
      engine_2d_c_drawText_FUN_00401fd0(param_7,g_ClipLeft,param_73);
      param_10 = &param_74;
      param_74 = param_74 + 0x16;
      param_8 = 0x536a00;
      param_9 = this_ptr;
      (*this_ptr->vtable->showEditorHelp)(this_ptr,param_10);
      iVar1 = param_70;
    }
    param_70 = iVar1;
    right_pos = g_ClipBottom;
    iVar1 = g_ClipRight;
    param_15 = g_ClipBottom;
    param_14 = g_ClipRight;
    in_stack_0000012c = in_stack_0000012c + 0xb;
    param_13 = shape_edittool_cpp_calculateGridWidth_FUN_004a6490();
    param_13 = g_WindowWidth - param_13;
    param_12 = (CEdScrollBar *)&param_67;
    param_11 = 0x536a42;
    shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
              (param_12,param_13,iVar1,right_pos,param_16 + 0xb);
    param_69 = (char *)(in_stack_00000134 + param_68);
    param_70 = (g_ClipBottom - g_ClipTop) + -1;
    param_16 = 0x536a7c;
    shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10((CEdScrollBar *)&param_68);
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0((CEdScrollBar *)&param_69);
    param_18 = g_CEditorToolsPtr;
    param_17 = 0x536a9c;
    shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380(g_CEditorToolsPtr,false);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    param_21 = 1;
    param_20 = g_CKeysPtr;
    param_19 = 0x536ab1;
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar1 != 0) break;
    param_26 = 0x50;
    param_25 = g_CKeysPtr;
    param_24 = 0x536ac9;
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      in_stack_00000138 = in_stack_00000138 + 0xb;
    }
    param_31 = 0x48;
    param_30 = g_CKeysPtr;
    param_29 = 0x536ae4;
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      in_stack_0000014c = in_stack_0000014c + -0xb;
    }
    param_36 = 0x51;
    param_35 = g_CKeysPtr;
    param_34 = 0x536b00;
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x51);
    if (iVar1 != 0) {
      in_stack_00000160 = in_stack_00000160 + in_stack_00000168;
    }
    param_41 = 0x49;
    param_40 = g_CKeysPtr;
    param_39 = 0x536b22;
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x49);
    if (iVar1 != 0) {
      in_stack_00000174 = in_stack_00000174 - in_stack_0000017c;
    }
    param_46 = 0x47;
    param_45 = g_CKeysPtr;
    param_44 = 0x536b44;
    iVar1 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x47);
    if (iVar1 != 0) {
      in_stack_00000188 = 0;
    }
    if (in_stack_0000018c - in_stack_00000190 < in_stack_00000188) {
      in_stack_00000188 = in_stack_0000018c - in_stack_00000190;
    }
    if (in_stack_00000188 < 0) {
      in_stack_00000188 = 0;
    }
    param_51 = (CEdScrollBar *)&stack0x00000188;
    param_50 = 0x536b8a;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0(param_51);
  }
  engine_2d_c_clearInputAndWait_FUN_00403260();
  shape_edittool_cpp_CEdScrollBar_dtor_FUN_004a5b20((CEdScrollBar *)&stack0x00000128);
  return;
}
