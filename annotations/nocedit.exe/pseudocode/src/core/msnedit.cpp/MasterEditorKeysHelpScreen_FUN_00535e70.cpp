// Name: core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70
// Address: 00535e70
// Address Range: [[00535e70, 00536bbc]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70()
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a9cb [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Master_editor_keys_0063b2f7
//   TerminatedCString s_Show_this_help_screen_0063b30b
//   TerminatedCString s_F1_0063b321
//   TerminatedCString s_Next_camera_0063b324
//   TerminatedCString s_C_0063b330
//   TerminatedCString s_Prev_camera_0063b332
//   TerminatedCString s_SHIFT_C_0063b33e
//   TerminatedCString s_Toggle_virtual_director_0063b346
//   TerminatedCString s_E_0063b35e
//   TerminatedCString s_Next_View_0063b360
//   TerminatedCString s_V_0063b36a
//   TerminatedCString s_Previous_View_0063b36c
//   TerminatedCString s_SHIFT_V_0063b37a
//   TerminatedCString s_Next_actor_0063b382
//   TerminatedCString s_TAB_0063b38d
//   TerminatedCString s_Previous_actor_0063b391
//   TerminatedCString s_SHIFT_TAB_0063b3a0
//   TerminatedCString s_Select_actor_by_name_0063b3aa
//   TerminatedCString s_N_0063b3bf
//   TerminatedCString s_Insert_actor_0063b3c1
//   TerminatedCString s_I_0063b3ce
//   TerminatedCString s_Delete_actor_0063b3d0
//   TerminatedCString s_D_0063b3dd
//   TerminatedCString s_Delete_multiple_actors_0063b3df
//   TerminatedCString s_Shift_D_0063b3f6
//   TerminatedCString s_Replicate_actor_0063b3fe
//   TerminatedCString s_R_0063b40e
//   TerminatedCString s_Change_Type_of_selected__0063b410
//   TerminatedCString s_T_0063b42e
//   TerminatedCString s_Mission_editor_Options_0063b430
//   TerminatedCString s_O_0063b447
//   TerminatedCString s_Save_mission_0063b449
//   TerminatedCString s_CTRL_S_0063b456
//   TerminatedCString s_Full_screen_toggle_0063b45d
//   TerminatedCString s_W_0063b470
//   TerminatedCString s_Undo_actor_changes_made__0063b472
//   TerminatedCString s_BackSpc_0063b4a8
//   TerminatedCString s_Hide_selected_actor_0063b4b0
//   TerminatedCString s_H_0063b4c4
//   TerminatedCString s_Hide_multiple_actors_0063b4c6
//   TerminatedCString s_Shift_H_0063b4db
//   TerminatedCString s_Unhide_actors_by_name_0063b4e3
//   TerminatedCString s_U_0063b4f9
//   TerminatedCString s_Unhide_all_actors_0063b4fb
//   TerminatedCString s_Shift_U_0063b50d
//   TerminatedCString s_Mouse_controls_0063b515
//   TerminatedCString s_Type_actor_name_or_hilit_0063b525
//   TerminatedCString s_Alt_Click_0063b555
//   TerminatedCString s_Copy_actor_property_text_0063b55f
//   TerminatedCString s_Ctrl_Click_0063b585
//   TerminatedCString s_Envoke_alternate_editing_0063b590
//   TerminatedCString s_Shift_Click_0063b5d5
//   TerminatedCString s_Script_editor_keys_0063b5e1
//   TerminatedCString s_Toggle_script_editor_0063b5f5
//   TerminatedCString s_F2_0063b60a
//   TerminatedCString s_Goto_line_number_0063b60d
//   TerminatedCString s_CTRL_G_0063b61e
//   TerminatedCString s_Find_0063b625
//   TerminatedCString s_CTRL_F_0063b62a
//   TerminatedCString s_Find_next_0063b631
//   TerminatedCString s_F3_0063b63b
//   TerminatedCString s_Find_prev_0063b63e
//   TerminatedCString s_Shift_F3_0063b648
//   TerminatedCString s_Context_sensative_select_0063b651
//   TerminatedCString s_F4_0063b66d
//   TerminatedCString s_Jump_to_actor_label_came_0063b670
//   TerminatedCString s_F6_0063b698
//   TerminatedCString s_Syntax_check_0063b69b
//   TerminatedCString s_F7_0063b6a8
//   TerminatedCString s_Actor_specific_help_for__0063b6ab
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   int g_WindowWidth = 0x140
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CEditorTools g_CEditorToolsPtr
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   int g_ActiveRenderColor
//   void* g_CKeysPtr
//   undefined4 DAT_02f33768
// Function calls:
//   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawLine_FUN_004011b0
//   engine_2d.c_drawText_FUN_00401fd0
//   shape_edittool.cpp_calculateGridWidth_FUN_004a6490
//   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
//   shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20
//   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
//   shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
//   shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_MasterEditorKeysHelpScreen() */

void core_msnedit_cpp_MasterEditorKeysHelpScreen_FUN_00535e70
               (undefined4 param_1,undefined4 param_2,char *unaff_EBX,undefined4 param_4,
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
               undefined4 param_72,int param_73,int param_74)

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


// Assembly code:
// 00535e70: PUSH EBX
//   Label: core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70
// 00535e71: PUSH ESI
// 00535e72: PUSH EDI
// 00535e73: PUSH EBP
// 00535e74: SUB ESP,0x100
// 00535e7a: LEA EAX,[ESP + 0xc8]
//   XREF to: Stack[-0x48] (DATA)
// 00535e81: PUSH EAX
// 00535e82: CALL shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
//   XREF to: 004a5ae0 (UNCONDITIONAL_CALL)
// 00535e87: ADD ESP,0x4
// 00535e8a: MOV ESI,0x8
// 00535e8f: MOV EDI,0xb
// 00535e94: XOR EBP,EBP
// 00535e96: MOV EAX,dword ptr [ESP + 0xc8]
//   Label: LAB_00535e96
//   XREF to: Stack[-0x48] (READ)
// 00535e9d: MOV EDX,EAX
// 00535e9f: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00535ea6: NEG EDX
// 00535ea8: MOV dword ptr [ESP + 0xfc],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00535eaf: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00535eb4: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00535ebb: PUSH ECX
// 00535ebc: MOV EBX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00535ec2: PUSH EBX
// 00535ec3: PUSH 0x63b2f7
//   XREF to: 0063b2f7 (DATA)
// 00535ec8: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00535ecd: ADD ESP,0xc
// 00535ed0: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00535ed7: ADD EAX,0x16
// 00535eda: PUSH EAX
// 00535edb: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00535ee1: PUSH ECX
// 00535ee2: PUSH 0x63b321
//   XREF to: 0063b321 (DATA)
// 00535ee7: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00535eee: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00535ef3: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00535ef8: MOV EDX,EAX
// 00535efa: SAR EDX,0x1f
// 00535efd: IDIV ESI
// 00535eff: ADD ESP,0xc
// 00535f02: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00535f09: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00535f0f: PUSH EBX
// 00535f10: ADD EAX,EDX
// 00535f12: PUSH EAX
// 00535f13: PUSH 0x63b30b
//   XREF to: 0063b30b (DATA)
// 00535f18: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00535f1d: ADD ESP,0xc
// 00535f20: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00535f27: ADD ECX,0x16
// 00535f2a: PUSH ECX
// 00535f2b: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 00535f30: PUSH EAX
// 00535f31: PUSH 0x63b330
//   XREF to: 0063b330 (DATA)
// 00535f36: MOV dword ptr [ESP + 0x108],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00535f3d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00535f42: ADD ESP,0xc
// 00535f45: MOV EDX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00535f4c: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00535f51: PUSH EDX
// 00535f52: MOV EDX,EAX
// 00535f54: SAR EDX,0x1f
// 00535f57: IDIV ESI
// 00535f59: ADD EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00535f5f: PUSH EAX
// 00535f60: PUSH 0x63b324
//   XREF to: 0063b324 (DATA)
// 00535f65: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00535f6a: ADD ESP,0xc
// 00535f6d: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00535f74: ADD EBX,EDI
// 00535f76: PUSH EBX
// 00535f77: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00535f7d: PUSH EDX
// 00535f7e: PUSH 0x63b33e
//   XREF to: 0063b33e (DATA)
// 00535f83: MOV dword ptr [ESP + 0x108],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 00535f8a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00535f8f: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00535f94: MOV EDX,EAX
// 00535f96: SAR EDX,0x1f
// 00535f99: IDIV ESI
// 00535f9b: ADD ESP,0xc
// 00535f9e: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00535fa5: MOV EBX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00535fab: PUSH ECX
// 00535fac: ADD EAX,EBX
// 00535fae: PUSH EAX
// 00535faf: PUSH 0x63b332
//   XREF to: 0063b332 (DATA)
// 00535fb4: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00535fb9: ADD ESP,0xc
// 00535fbc: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00535fc3: ADD EAX,EDI
// 00535fc5: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00535fcc: PUSH EAX
// 00535fcd: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00535fd3: PUSH ECX
// 00535fd4: PUSH 0x63b35e
//   XREF to: 0063b35e (DATA)
// 00535fd9: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00535fde: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00535fe3: MOV EDX,EAX
// 00535fe5: SAR EDX,0x1f
// 00535fe8: IDIV ESI
// 00535fea: ADD ESP,0xc
// 00535fed: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00535ff4: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00535ffa: PUSH EBX
// 00535ffb: ADD EAX,EDX
// 00535ffd: PUSH EAX
// 00535ffe: PUSH 0x63b346
//   XREF to: 0063b346 (DATA)
// 00536003: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536008: ADD ESP,0xc
// 0053600b: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536012: ADD ECX,EDI
// 00536014: PUSH ECX
// 00536015: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 0053601a: PUSH EAX
// 0053601b: PUSH 0x63b36a
//   XREF to: 0063b36a (DATA)
// 00536020: MOV dword ptr [ESP + 0x108],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00536027: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053602c: ADD ESP,0xc
// 0053602f: MOV EDX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536036: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0053603b: PUSH EDX
// 0053603c: MOV EDX,EAX
// 0053603e: SAR EDX,0x1f
// 00536041: IDIV ESI
// 00536043: ADD EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536049: PUSH EAX
// 0053604a: PUSH 0x63b360
//   XREF to: 0063b360 (DATA)
// 0053604f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536054: ADD ESP,0xc
// 00536057: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 0053605e: ADD EBX,EDI
// 00536060: PUSH EBX
// 00536061: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536067: PUSH EDX
// 00536068: PUSH 0x63b37a
//   XREF to: 0063b37a (DATA)
// 0053606d: MOV dword ptr [ESP + 0x108],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 00536074: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536079: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0053607e: MOV EDX,EAX
// 00536080: SAR EDX,0x1f
// 00536083: IDIV ESI
// 00536085: ADD ESP,0xc
// 00536088: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 0053608f: MOV EBX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536095: PUSH ECX
// 00536096: ADD EAX,EBX
// 00536098: PUSH EAX
// 00536099: PUSH 0x63b36c
//   XREF to: 0063b36c (DATA)
// 0053609e: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005360a3: ADD ESP,0xc
// 005360a6: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005360ad: ADD EAX,0x16
// 005360b0: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005360b7: PUSH EAX
// 005360b8: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005360be: PUSH ECX
// 005360bf: PUSH 0x63b38d
//   XREF to: 0063b38d (DATA)
// 005360c4: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005360c9: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005360ce: MOV EDX,EAX
// 005360d0: SAR EDX,0x1f
// 005360d3: IDIV ESI
// 005360d5: ADD ESP,0xc
// 005360d8: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005360df: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005360e5: PUSH EBX
// 005360e6: ADD EAX,EDX
// 005360e8: PUSH EAX
// 005360e9: PUSH 0x63b382
//   XREF to: 0063b382 (DATA)
// 005360ee: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005360f3: ADD ESP,0xc
// 005360f6: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005360fd: ADD ECX,EDI
// 005360ff: PUSH ECX
// 00536100: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536105: PUSH EAX
// 00536106: PUSH 0x63b3a0
//   XREF to: 0063b3a0 (DATA)
// 0053610b: MOV dword ptr [ESP + 0x108],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00536112: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536117: ADD ESP,0xc
// 0053611a: MOV EDX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536121: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00536126: PUSH EDX
// 00536127: MOV EDX,EAX
// 00536129: SAR EDX,0x1f
// 0053612c: IDIV ESI
// 0053612e: ADD EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536134: PUSH EAX
// 00536135: PUSH 0x63b391
//   XREF to: 0063b391 (DATA)
// 0053613a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053613f: ADD ESP,0xc
// 00536142: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536149: ADD EBX,EDI
// 0053614b: PUSH EBX
// 0053614c: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536152: PUSH EDX
// 00536153: PUSH 0x63b3bf
//   XREF to: 0063b3bf (DATA)
// 00536158: MOV dword ptr [ESP + 0x108],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0053615f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536164: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00536169: MOV EDX,EAX
// 0053616b: SAR EDX,0x1f
// 0053616e: IDIV ESI
// 00536170: ADD ESP,0xc
// 00536173: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 0053617a: MOV EBX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536180: PUSH ECX
// 00536181: ADD EAX,EBX
// 00536183: PUSH EAX
// 00536184: PUSH 0x63b3aa
//   XREF to: 0063b3aa (DATA)
// 00536189: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053618e: ADD ESP,0xc
// 00536191: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536198: ADD EAX,0x16
// 0053619b: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005361a2: PUSH EAX
// 005361a3: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005361a9: PUSH ECX
// 005361aa: PUSH 0x63b3ce
//   XREF to: 0063b3ce (DATA)
// 005361af: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005361b4: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005361b9: MOV EDX,EAX
// 005361bb: SAR EDX,0x1f
// 005361be: IDIV ESI
// 005361c0: ADD ESP,0xc
// 005361c3: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005361ca: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005361d0: PUSH EBX
// 005361d1: ADD EAX,EDX
// 005361d3: PUSH EAX
// 005361d4: PUSH 0x63b3c1
//   XREF to: 0063b3c1 (DATA)
// 005361d9: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005361de: ADD ESP,0xc
// 005361e1: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005361e8: ADD ECX,EDI
// 005361ea: PUSH ECX
// 005361eb: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 005361f0: PUSH EAX
// 005361f1: PUSH 0x63b3dd
//   XREF to: 0063b3dd (DATA)
// 005361f6: MOV dword ptr [ESP + 0x108],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005361fd: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536202: ADD ESP,0xc
// 00536205: MOV EDX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 0053620c: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00536211: PUSH EDX
// 00536212: MOV EDX,EAX
// 00536214: SAR EDX,0x1f
// 00536217: IDIV ESI
// 00536219: ADD EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0053621f: PUSH EAX
// 00536220: PUSH 0x63b3d0
//   XREF to: 0063b3d0 (DATA)
// 00536225: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053622a: ADD ESP,0xc
// 0053622d: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536234: ADD EBX,EDI
// 00536236: PUSH EBX
// 00536237: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0053623d: PUSH EDX
// 0053623e: PUSH 0x63b3f6
//   XREF to: 0063b3f6 (DATA)
// 00536243: MOV dword ptr [ESP + 0x108],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0053624a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053624f: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00536254: MOV EDX,EAX
// 00536256: SAR EDX,0x1f
// 00536259: IDIV ESI
// 0053625b: ADD ESP,0xc
// 0053625e: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536265: MOV EBX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0053626b: PUSH ECX
// 0053626c: ADD EAX,EBX
// 0053626e: PUSH EAX
// 0053626f: PUSH 0x63b3df
//   XREF to: 0063b3df (DATA)
// 00536274: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536279: ADD ESP,0xc
// 0053627c: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536283: ADD EAX,EDI
// 00536285: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0053628c: PUSH EAX
// 0053628d: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536293: PUSH ECX
// 00536294: PUSH 0x63b40e
//   XREF to: 0063b40e (DATA)
// 00536299: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053629e: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005362a3: MOV EDX,EAX
// 005362a5: SAR EDX,0x1f
// 005362a8: IDIV ESI
// 005362aa: ADD ESP,0xc
// 005362ad: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005362b4: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005362ba: PUSH EBX
// 005362bb: ADD EAX,EDX
// 005362bd: PUSH EAX
// 005362be: PUSH 0x63b3fe
//   XREF to: 0063b3fe (DATA)
// 005362c3: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005362c8: ADD ESP,0xc
// 005362cb: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005362d2: ADD ECX,EDI
// 005362d4: PUSH ECX
// 005362d5: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 005362da: PUSH EAX
// 005362db: PUSH 0x63b42e
//   XREF to: 0063b42e (DATA)
// 005362e0: MOV dword ptr [ESP + 0x108],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005362e7: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005362ec: ADD ESP,0xc
// 005362ef: MOV EDX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005362f6: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005362fb: PUSH EDX
// 005362fc: MOV EDX,EAX
// 005362fe: SAR EDX,0x1f
// 00536301: IDIV ESI
// 00536303: ADD EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536309: PUSH EAX
// 0053630a: PUSH 0x63b410
//   XREF to: 0063b410 (DATA)
// 0053630f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536314: ADD ESP,0xc
// 00536317: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 0053631e: ADD EBX,0x16
// 00536321: PUSH EBX
// 00536322: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536328: PUSH EDX
// 00536329: PUSH 0x63b447
//   XREF to: 0063b447 (DATA)
// 0053632e: MOV dword ptr [ESP + 0x108],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 00536335: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053633a: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0053633f: MOV EDX,EAX
// 00536341: SAR EDX,0x1f
// 00536344: IDIV ESI
// 00536346: ADD ESP,0xc
// 00536349: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536350: MOV EBX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536356: PUSH ECX
// 00536357: ADD EAX,EBX
// 00536359: PUSH EAX
// 0053635a: PUSH 0x63b430
//   XREF to: 0063b430 (DATA)
// 0053635f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536364: ADD ESP,0xc
// 00536367: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 0053636e: ADD EAX,EDI
// 00536370: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00536377: PUSH EAX
// 00536378: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0053637e: PUSH ECX
// 0053637f: PUSH 0x63b456
//   XREF to: 0063b456 (DATA)
// 00536384: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536389: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0053638e: MOV EDX,EAX
// 00536390: SAR EDX,0x1f
// 00536393: IDIV ESI
// 00536395: ADD ESP,0xc
// 00536398: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 0053639f: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005363a5: PUSH EBX
// 005363a6: ADD EAX,EDX
// 005363a8: PUSH EAX
// 005363a9: PUSH 0x63b449
//   XREF to: 0063b449 (DATA)
// 005363ae: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005363b3: ADD ESP,0xc
// 005363b6: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005363bd: ADD ECX,EDI
// 005363bf: PUSH ECX
// 005363c0: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 005363c5: PUSH EAX
// 005363c6: PUSH 0x63b470
//   XREF to: 0063b470 (DATA)
// 005363cb: MOV dword ptr [ESP + 0x108],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005363d2: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005363d7: ADD ESP,0xc
// 005363da: MOV EDX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005363e1: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005363e6: PUSH EDX
// 005363e7: MOV EDX,EAX
// 005363e9: SAR EDX,0x1f
// 005363ec: IDIV ESI
// 005363ee: ADD EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005363f4: PUSH EAX
// 005363f5: PUSH 0x63b45d
//   XREF to: 0063b45d (DATA)
// 005363fa: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005363ff: ADD ESP,0xc
// 00536402: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536409: ADD EBX,EDI
// 0053640b: PUSH EBX
// 0053640c: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536412: PUSH EDX
// 00536413: PUSH 0x63b4a8
//   XREF to: 0063b4a8 (DATA)
// 00536418: MOV dword ptr [ESP + 0x108],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0053641f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536424: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00536429: MOV EDX,EAX
// 0053642b: SAR EDX,0x1f
// 0053642e: IDIV ESI
// 00536430: ADD ESP,0xc
// 00536433: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 0053643a: MOV EBX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536440: PUSH ECX
// 00536441: ADD EAX,EBX
// 00536443: PUSH EAX
// 00536444: PUSH 0x63b472
//   XREF to: 0063b472 (DATA)
// 00536449: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053644e: ADD ESP,0xc
// 00536451: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536458: ADD EAX,0x16
// 0053645b: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00536462: PUSH EAX
// 00536463: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536469: PUSH ECX
// 0053646a: PUSH 0x63b4c4
//   XREF to: 0063b4c4 (DATA)
// 0053646f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536474: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00536479: MOV EDX,EAX
// 0053647b: SAR EDX,0x1f
// 0053647e: IDIV ESI
// 00536480: ADD ESP,0xc
// 00536483: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 0053648a: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536490: PUSH EBX
// 00536491: ADD EAX,EDX
// 00536493: PUSH EAX
// 00536494: PUSH 0x63b4b0
//   XREF to: 0063b4b0 (DATA)
// 00536499: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053649e: ADD ESP,0xc
// 005364a1: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005364a8: ADD ECX,EDI
// 005364aa: PUSH ECX
// 005364ab: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 005364b0: PUSH EAX
// 005364b1: PUSH 0x63b4db
//   XREF to: 0063b4db (DATA)
// 005364b6: MOV dword ptr [ESP + 0x108],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005364bd: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005364c2: ADD ESP,0xc
// 005364c5: MOV EDX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005364cc: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005364d1: PUSH EDX
// 005364d2: MOV EDX,EAX
// 005364d4: SAR EDX,0x1f
// 005364d7: IDIV ESI
// 005364d9: ADD EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005364df: PUSH EAX
// 005364e0: PUSH 0x63b4c6
//   XREF to: 0063b4c6 (DATA)
// 005364e5: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005364ea: ADD ESP,0xc
// 005364ed: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005364f4: ADD EBX,EDI
// 005364f6: PUSH EBX
// 005364f7: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005364fd: PUSH EDX
// 005364fe: PUSH 0x63b4f9
//   XREF to: 0063b4f9 (DATA)
// 00536503: MOV dword ptr [ESP + 0x108],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 0053650a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053650f: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00536514: MOV EDX,EAX
// 00536516: SAR EDX,0x1f
// 00536519: IDIV ESI
// 0053651b: ADD ESP,0xc
// 0053651e: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536525: MOV EBX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0053652b: PUSH ECX
// 0053652c: ADD EAX,EBX
// 0053652e: PUSH EAX
// 0053652f: PUSH 0x63b4e3
//   XREF to: 0063b4e3 (DATA)
// 00536534: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536539: ADD ESP,0xc
// 0053653c: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536543: ADD EAX,EDI
// 00536545: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0053654c: PUSH EAX
// 0053654d: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536553: PUSH ECX
// 00536554: PUSH 0x63b50d
//   XREF to: 0063b50d (DATA)
// 00536559: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053655e: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00536563: MOV EDX,EAX
// 00536565: SAR EDX,0x1f
// 00536568: IDIV ESI
// 0053656a: ADD ESP,0xc
// 0053656d: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536574: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0053657a: PUSH EBX
// 0053657b: ADD EAX,EDX
// 0053657d: PUSH EAX
// 0053657e: PUSH 0x63b4fb
//   XREF to: 0063b4fb (DATA)
// 00536583: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536588: ADD ESP,0xc
// 0053658b: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536592: ADD ECX,0x16
// 00536595: PUSH ECX
// 00536596: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 0053659b: PUSH EAX
// 0053659c: PUSH 0x63b515
//   XREF to: 0063b515 (DATA)
// 005365a1: MOV dword ptr [ESP + 0x108],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005365a8: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005365ad: ADD ESP,0xc
// 005365b0: MOV EDX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005365b7: ADD EDX,EDI
// 005365b9: PUSH EDX
// 005365ba: MOV EBX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005365c0: PUSH EBX
// 005365c1: PUSH 0x63b555
//   XREF to: 0063b555 (DATA)
// 005365c6: MOV dword ptr [ESP + 0x108],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005365cd: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005365d2: ADD ESP,0xc
// 005365d5: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005365dc: PUSH EAX
// 005365dd: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005365e2: MOV EDX,EAX
// 005365e4: SAR EDX,0x1f
// 005365e7: IDIV ESI
// 005365e9: ADD EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005365ef: PUSH EAX
// 005365f0: PUSH 0x63b525
//   XREF to: 0063b525 (DATA)
// 005365f5: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005365fa: ADD ESP,0xc
// 005365fd: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536604: ADD ECX,EDI
// 00536606: PUSH ECX
// 00536607: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 0053660c: PUSH EAX
// 0053660d: PUSH 0x63b585
//   XREF to: 0063b585 (DATA)
// 00536612: MOV dword ptr [ESP + 0x108],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00536619: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053661e: ADD ESP,0xc
// 00536621: MOV EDX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536628: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0053662d: PUSH EDX
// 0053662e: MOV EDX,EAX
// 00536630: SAR EDX,0x1f
// 00536633: IDIV ESI
// 00536635: ADD EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0053663b: PUSH EAX
// 0053663c: PUSH 0x63b55f
//   XREF to: 0063b55f (DATA)
// 00536641: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536646: ADD ESP,0xc
// 00536649: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536650: ADD EBX,EDI
// 00536652: MOV dword ptr [ESP + 0xfc],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 00536659: PUSH EBX
// 0053665a: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536660: PUSH EDX
// 00536661: PUSH 0x63b5d5
//   XREF to: 0063b5d5 (DATA)
// 00536666: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053666b: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00536670: MOV EDX,EAX
// 00536672: SAR EDX,0x1f
// 00536675: IDIV ESI
// 00536677: ADD ESP,0xc
// 0053667a: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536681: MOV EBX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536687: PUSH ECX
// 00536688: ADD EAX,EBX
// 0053668a: PUSH EAX
// 0053668b: PUSH 0x63b590
//   XREF to: 0063b590 (DATA)
// 00536690: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536695: ADD ESP,0xc
// 00536698: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 0053669f: ADD EAX,0x16
// 005366a2: PUSH EAX
// 005366a3: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005366a9: PUSH ECX
// 005366aa: PUSH 0x63b5e1
//   XREF to: 0063b5e1 (DATA)
// 005366af: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005366b6: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005366bb: ADD ESP,0xc
// 005366be: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005366c5: ADD EBX,EDI
// 005366c7: PUSH EBX
// 005366c8: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005366ce: PUSH EDX
// 005366cf: PUSH 0x63b60a
//   XREF to: 0063b60a (DATA)
// 005366d4: MOV dword ptr [ESP + 0x108],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 005366db: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005366e0: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005366e5: MOV EDX,EAX
// 005366e7: SAR EDX,0x1f
// 005366ea: IDIV ESI
// 005366ec: ADD ESP,0xc
// 005366ef: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005366f6: MOV EBX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005366fc: PUSH ECX
// 005366fd: ADD EAX,EBX
// 005366ff: PUSH EAX
// 00536700: PUSH 0x63b5f5
//   XREF to: 0063b5f5 (DATA)
// 00536705: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053670a: ADD ESP,0xc
// 0053670d: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536714: ADD EAX,EDI
// 00536716: PUSH EAX
// 00536717: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0053671d: PUSH ECX
// 0053671e: PUSH 0x63b61e
//   XREF to: 0063b61e (DATA)
// 00536723: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0053672a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053672f: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00536734: MOV EDX,EAX
// 00536736: SAR EDX,0x1f
// 00536739: IDIV ESI
// 0053673b: ADD ESP,0xc
// 0053673e: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536745: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0053674b: PUSH EBX
// 0053674c: ADD EAX,EDX
// 0053674e: PUSH EAX
// 0053674f: PUSH 0x63b60d
//   XREF to: 0063b60d (DATA)
// 00536754: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536759: ADD ESP,0xc
// 0053675c: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536763: ADD ECX,EDI
// 00536765: MOV dword ptr [ESP + 0xfc],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0053676c: PUSH ECX
// 0053676d: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536772: PUSH EAX
// 00536773: PUSH 0x63b62a
//   XREF to: 0063b62a (DATA)
// 00536778: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053677d: ADD ESP,0xc
// 00536780: MOV EDX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536787: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0053678c: PUSH EDX
// 0053678d: MOV EDX,EAX
// 0053678f: SAR EDX,0x1f
// 00536792: IDIV ESI
// 00536794: ADD EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0053679a: PUSH EAX
// 0053679b: PUSH 0x63b625
//   XREF to: 0063b625 (DATA)
// 005367a0: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005367a5: ADD ESP,0xc
// 005367a8: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005367af: ADD EBX,EDI
// 005367b1: PUSH EBX
// 005367b2: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005367b8: PUSH EDX
// 005367b9: PUSH 0x63b63b
//   XREF to: 0063b63b (DATA)
// 005367be: MOV dword ptr [ESP + 0x108],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 005367c5: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005367ca: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005367cf: MOV EDX,EAX
// 005367d1: SAR EDX,0x1f
// 005367d4: IDIV ESI
// 005367d6: ADD ESP,0xc
// 005367d9: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005367e0: MOV EBX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005367e6: PUSH ECX
// 005367e7: ADD EAX,EBX
// 005367e9: PUSH EAX
// 005367ea: PUSH 0x63b631
//   XREF to: 0063b631 (DATA)
// 005367ef: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005367f4: ADD ESP,0xc
// 005367f7: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005367fe: ADD EAX,EDI
// 00536800: PUSH EAX
// 00536801: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536807: PUSH ECX
// 00536808: PUSH 0x63b648
//   XREF to: 0063b648 (DATA)
// 0053680d: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00536814: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536819: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0053681e: MOV EDX,EAX
// 00536820: SAR EDX,0x1f
// 00536823: IDIV ESI
// 00536825: ADD ESP,0xc
// 00536828: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 0053682f: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536835: PUSH EBX
// 00536836: ADD EAX,EDX
// 00536838: PUSH EAX
// 00536839: PUSH 0x63b63e
//   XREF to: 0063b63e (DATA)
// 0053683e: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536843: ADD ESP,0xc
// 00536846: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 0053684d: ADD ECX,EDI
// 0053684f: MOV dword ptr [ESP + 0xfc],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00536856: PUSH ECX
// 00536857: MOV EAX,[0x02d02558]
//   XREF to: 02d02558 (READ)
// 0053685c: PUSH EAX
// 0053685d: PUSH 0x63b66d
//   XREF to: 0063b66d (DATA)
// 00536862: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536867: ADD ESP,0xc
// 0053686a: MOV EDX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536871: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00536876: PUSH EDX
// 00536877: MOV EDX,EAX
// 00536879: SAR EDX,0x1f
// 0053687c: IDIV ESI
// 0053687e: ADD EAX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00536884: PUSH EAX
// 00536885: PUSH 0x63b651
//   XREF to: 0063b651 (DATA)
// 0053688a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053688f: ADD ESP,0xc
// 00536892: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536899: ADD EBX,EDI
// 0053689b: PUSH EBX
// 0053689c: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005368a2: PUSH EDX
// 005368a3: PUSH 0x63b698
//   XREF to: 0063b698 (DATA)
// 005368a8: MOV dword ptr [ESP + 0x108],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 005368af: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005368b4: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 005368b9: MOV EDX,EAX
// 005368bb: SAR EDX,0x1f
// 005368be: IDIV ESI
// 005368c0: ADD ESP,0xc
// 005368c3: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005368ca: MOV EBX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005368d0: PUSH ECX
// 005368d1: ADD EAX,EBX
// 005368d3: PUSH EAX
// 005368d4: PUSH 0x63b670
//   XREF to: 0063b670 (DATA)
// 005368d9: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005368de: ADD ESP,0xc
// 005368e1: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005368e8: ADD EAX,EDI
// 005368ea: PUSH EAX
// 005368eb: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005368f1: PUSH ECX
// 005368f2: PUSH 0x63b6a8
//   XREF to: 0063b6a8 (DATA)
// 005368f7: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005368fe: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00536903: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00536908: MOV EDX,EAX
// 0053690a: SAR EDX,0x1f
// 0053690d: IDIV ESI
// 0053690f: ADD ESP,0xc
// 00536912: MOV EBX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536919: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0053691f: PUSH EBX
// 00536920: ADD EAX,EDX
// 00536922: PUSH EAX
// 00536923: PUSH 0x63b69b
//   XREF to: 0063b69b (DATA)
// 00536928: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053692d: ADD ESP,0xc
// 00536930: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 00536937: ADD ECX,0x16
// 0053693a: MOV EBX,dword ptr [0x0067d550]
//   XREF to: 0067d550 (READ)
// 00536940: MOV dword ptr [ESP + 0xfc],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00536947: MOV EBX,dword ptr [EBX + 0x28]
//   XREF to: 02f33768 (READ)
// 0053694a: TEST EBX,EBX
// 0053694c: JZ 0x00536a03
//   XREF to: 00536a03 (CONDITIONAL_JUMP)
// 00536952: LEA EAX,[ECX + EDI*0x1]
// 00536955: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0053695c: CMP EBP,EAX
// 0053695e: JG 0x00536991
//   XREF to: 00536991 (CONDITIONAL_JUMP)
// 00536960: CMP EAX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 00536966: JG 0x00536991
//   XREF to: 00536991 (CONDITIONAL_JUMP)
// 00536968: MOV EDX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 0053696f: PUSH EDX
// 00536970: MOV ECX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 00536976: PUSH ECX
// 00536977: PUSH EDX
// 00536978: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0053697e: MOV EAX,0xff
// 00536983: PUSH EDX
// 00536984: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 00536989: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 0053698e: ADD ESP,0x10
// 00536991: MOV ECX,dword ptr [ESP + 0xfc]
//   Label: LAB_00536991
//   XREF to: Stack[-0x14] (READ)
// 00536998: ADD ECX,EDI
// 0053699a: PUSH EBX
// 0053699b: MOV dword ptr [ESP + 0x100],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005369a2: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 005369a7: ADD ESP,0x4
// 005369aa: PUSH EAX
// 005369ab: PUSH EBX
// 005369ac: PUSH 0x63b6ab
//   XREF to: 0063b6ab (DATA)
// 005369b1: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x110] (DATA)
// 005369b5: PUSH EAX
// 005369b6: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005369bb: ADD ESP,0x10
// 005369be: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005369c5: PUSH EAX
// 005369c6: MOV EDX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005369cc: PUSH EDX
// 005369cd: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 005369d1: PUSH EAX
// 005369d2: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005369d7: ADD ESP,0xc
// 005369da: MOV ECX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x14] (READ)
// 005369e1: LEA EDX,[ESP + 0xfc]
//   XREF to: Stack[-0x14] (DATA)
// 005369e8: ADD ECX,0x16
// 005369eb: PUSH EDX
// 005369ec: MOV dword ptr [ESP + 0x100],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005369f3: PUSH EBX
// 005369f4: MOV EAX,dword ptr [EBX + 0x154]
// 005369fa: CALL dword ptr [EAX + 0xdc]
// 00536a00: ADD ESP,0x8
// 00536a03: MOV EBX,dword ptr [0x02d02564]
//   Label: LAB_00536a03
//   XREF to: 02d02564 (READ)
// 00536a09: PUSH EBX
// 00536a0a: MOV EAX,[0x02d02560]
//   XREF to: 02d02560 (READ)
// 00536a0f: MOV ECX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x14] (READ)
// 00536a16: PUSH EAX
// 00536a17: MOV EDX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 00536a1d: ADD ECX,EDI
// 00536a1f: PUSH EDX
// 00536a20: MOV dword ptr [ESP + 0x108],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00536a27: CALL shape_edittool.cpp_calculateGridWidth_FUN_004a6490
//   XREF to: 004a6490 (UNCONDITIONAL_CALL)
// 00536a2c: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00536a32: SUB EDX,EAX
// 00536a34: PUSH EDX
// 00536a35: LEA EAX,[ESP + 0xd8]
// 00536a3c: PUSH EAX
// 00536a3d: CALL shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60
//   XREF to: 004a5b60 (UNCONDITIONAL_CALL)
// 00536a42: ADD ESP,0x14
// 00536a45: MOV EAX,dword ptr [ESP + 0xfc]
// 00536a4c: ADD EAX,dword ptr [ESP + 0xc8]
// 00536a53: MOV EDX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 00536a59: MOV dword ptr [ESP + 0xcc],EAX
// 00536a60: MOV EAX,[0x02d02564]
//   XREF to: 02d02564 (READ)
// 00536a65: SUB EAX,EDX
// 00536a67: DEC EAX
// 00536a68: MOV dword ptr [ESP + 0xd0],EAX
// 00536a6f: LEA EAX,[ESP + 0xc8]
// 00536a76: PUSH EAX
// 00536a77: CALL shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
//   XREF to: 004a5c10 (UNCONDITIONAL_CALL)
// 00536a7c: ADD ESP,0x4
// 00536a7f: LEA EAX,[ESP + 0xc8]
// 00536a86: PUSH EAX
// 00536a87: CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
//   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)
// 00536a8c: ADD ESP,0x4
// 00536a8f: PUSH EBP
// 00536a90: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00536a96: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00536a97: CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
//   XREF to: 004a1380 (UNCONDITIONAL_CALL)
// 00536a9c: ADD ESP,0x8
// 00536a9f: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00536aa4: PUSH 0x1
// 00536aa6: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00536aab: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00536aac: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00536aae: CALL dword ptr [EBX + 0x4]
// 00536ab1: ADD ESP,0x8
// 00536ab4: TEST EAX,EAX
// 00536ab6: JNZ 0x00536b9b
//   XREF to: 00536b9b (CONDITIONAL_JUMP)
// 00536abc: PUSH 0x50
// 00536abe: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00536ac3: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00536ac4: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00536ac6: CALL dword ptr [EBX + 0x4]
// 00536ac9: ADD ESP,0x8
// 00536acc: TEST EAX,EAX
// 00536ace: JZ 0x00536ad7
//   XREF to: 00536ad7 (CONDITIONAL_JUMP)
// 00536ad0: ADD dword ptr [ESP + 0xc8],EDI
// 00536ad7: PUSH 0x48
//   Label: LAB_00536ad7
// 00536ad9: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00536ade: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00536adf: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00536ae1: CALL dword ptr [EBX + 0x4]
// 00536ae4: ADD ESP,0x8
// 00536ae7: TEST EAX,EAX
// 00536ae9: JZ 0x00536af3
//   XREF to: 00536af3 (CONDITIONAL_JUMP)
// 00536aeb: SUB dword ptr [ESP + 0xc8],0xb
// 00536af3: PUSH 0x51
//   Label: LAB_00536af3
// 00536af5: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00536afa: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00536afb: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00536afd: CALL dword ptr [EDX + 0x4]
// 00536b00: ADD ESP,0x8
// 00536b03: TEST EAX,EAX
// 00536b05: JZ 0x00536b15
//   XREF to: 00536b15 (CONDITIONAL_JUMP)
// 00536b07: MOV EAX,dword ptr [ESP + 0xd0]
// 00536b0e: ADD dword ptr [ESP + 0xc8],EAX
// 00536b15: PUSH 0x49
//   Label: LAB_00536b15
// 00536b17: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00536b1c: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00536b1d: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00536b1f: CALL dword ptr [EBX + 0x4]
// 00536b22: ADD ESP,0x8
// 00536b25: TEST EAX,EAX
// 00536b27: JZ 0x00536b37
//   XREF to: 00536b37 (CONDITIONAL_JUMP)
// 00536b29: MOV EAX,dword ptr [ESP + 0xd0]
// 00536b30: SUB dword ptr [ESP + 0xc8],EAX
// 00536b37: PUSH 0x47
//   Label: LAB_00536b37
// 00536b39: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00536b3e: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00536b3f: MOV EBX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00536b41: CALL dword ptr [EBX + 0x4]
// 00536b44: ADD ESP,0x8
// 00536b47: TEST EAX,EAX
// 00536b49: JZ 0x00536b52
//   XREF to: 00536b52 (CONDITIONAL_JUMP)
// 00536b4b: MOV dword ptr [ESP + 0xc8],EBP
// 00536b52: MOV EAX,dword ptr [ESP + 0xcc]
//   Label: LAB_00536b52
// 00536b59: MOV EBX,dword ptr [ESP + 0xd0]
// 00536b60: MOV EDX,dword ptr [ESP + 0xc8]
// 00536b67: SUB EAX,EBX
// 00536b69: CMP EAX,EDX
// 00536b6b: JGE 0x00536b74
//   XREF to: 00536b74 (CONDITIONAL_JUMP)
// 00536b6d: MOV dword ptr [ESP + 0xc8],EAX
// 00536b74: CMP EBP,dword ptr [ESP + 0xc8]
//   Label: LAB_00536b74
// 00536b7b: JG 0x00536b92
//   XREF to: 00536b92 (CONDITIONAL_JUMP)
// 00536b7d: LEA EAX,[ESP + 0xc8]
//   Label: LAB_00536b7d
// 00536b84: PUSH EAX
// 00536b85: CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
//   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)
// 00536b8a: ADD ESP,0x4
// 00536b8d: JMP 0x00535e96
//   XREF to: 00535e96 (UNCONDITIONAL_JUMP)
// 00536b92: MOV dword ptr [ESP + 0xc8],EBP
//   Label: LAB_00536b92
// 00536b99: JMP 0x00536b7d
//   XREF to: 00536b7d (UNCONDITIONAL_JUMP)
// 00536b9b: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   Label: LAB_00536b9b
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00536ba0: PUSH 0x0
// 00536ba2: LEA EAX,[ESP + 0xcc]
// 00536ba9: PUSH EAX
// 00536baa: CALL shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20
//   XREF to: 004a5b20 (UNCONDITIONAL_CALL)
// 00536baf: ADD ESP,0x8
// 00536bb2: ADD ESP,0x100
// 00536bb8: POP EBP
// 00536bb9: POP EDI
// 00536bba: POP ESI
// 00536bbb: POP EBX
// 00536bbc: RET
