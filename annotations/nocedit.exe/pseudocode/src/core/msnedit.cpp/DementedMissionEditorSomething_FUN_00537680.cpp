// Name: core_msnedit.cpp_DementedMissionEditorSomething_FUN_00537680
// Address: 00537680
// Address Range: [[00537680, 005379da]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_DementedMissionEditorSomething_FUN_00537680()
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a733 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_00537658 = 0053789c
//   TerminatedCString s_ON_0063b2f0
//   TerminatedCString s_OFF_0063b2f3
//   TerminatedCString s_Demented_R_Mission_edito_0063b8bf
//   TerminatedCString s_Current_mission_s_msn_0063b8e7
//   TerminatedCString s_No_mission_loaded_0063b8ff
//   undefined4 s_o_mission_loaded_0063b900
//   undefined4 s_mission_loaded_0063b901
//   undefined4 s_mission_loaded_0063b902
//   TerminatedCString s_s_5_Dynamic_render_mode__0063b9ab
//   TerminatedCString s_s_5_Dynamic_render_mode__0063b9ce
//   TerminatedCString s_s_5_Dynamic_render_mode__0063b9f2
//   TerminatedCString s_s_7_Show_waypoint_covera_0063ba36
//   TerminatedCString s_s_7_Show_waypoint_covera_0063ba55
//   TerminatedCString s_s_7_Show_waypoint_covera_0063ba7e
//   CKeys* g_CKeysPtr = 02dcd7d4
//   undefined4 g_DynamicRenderMode
//   int g_ConfirmNewActorNames = 0x1
//   void* g_CKeysPtr
//   int g_DisableMouseHitOnBarrier
// Function calls:
//   core_inivar.cpp_readIniData_FUN_004fbd90
//   core_inivar.cpp_writeIniData_FUN_004fc510
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_DementedMissionEditorSomething(undefined4 param_1) */

void core_msnedit_cpp_DementedMissionEditorSomething_FUN_00537680
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               int param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  char acStack_c8 [8];
  
  core_inivar_cpp_readIniData_FUN_004fbd90();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Demented(R) Mission editor options menu",0,0);
    pcVar5 = &stack0xfffffefc;
    if (*(char *)(param_5 + 0x44) == '\0') {
      pcVar4 = "No mission loaded";
      do {
        cVar1 = *pcVar4;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
    }
    else {
      crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffefc,"Current mission: %s.msn",unaff_EBX);
    }
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff00,0,0x16);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff04,"1. Draw sky in dynamic views: %s");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff08,0,0x2c);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff0c,"2. Draw water in dynamic views: %s");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff10,0,0x37);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff14,"3. Force full lighting in static view: %s");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff18,0,0x42);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff1c,"4. Disable mouse selection of CBarriers: %s");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff20,0,0x4d);
    if (g_DynamicRenderMode < 2) {
LAB_005377d8:
      pcVar5 = "5. Dynamic render mode: flat shade";
      g_DynamicRenderMode = 1;
    }
    else if (g_DynamicRenderMode < 3) {
      pcVar5 = "5. Dynamic render mode: multi-color";
    }
    else {
      if (g_DynamicRenderMode != 3) goto LAB_005377d8;
      pcVar5 = "5. Dynamic render mode: ground types";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff24,pcVar5);
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff28,0,0x58);
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff2c,"6. Confirm new actor names: %s");
    engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff30,0,99);
    uVar2 = *(uint *)(param_5 + 0x40);
    if (uVar2 == 0) {
LAB_00537848:
      pcVar5 = "7. Show waypoint coverage: off";
      *(undefined4 *)(param_5 + 0x40) = 0;
    }
    else if (uVar2 < 2) {
      pcVar5 = "7. Show waypoint coverage: selected only";
    }
    else {
      if (uVar2 != 2) goto LAB_00537848;
      pcVar5 = "7. Show waypoint coverage: all";
    }
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff34,pcVar5);
    engine_2d_c_drawText_FUN_00401fd0(acStack_c8,0,0x6e);
    builtin_strncpy(acStack_c8,"wxS",4);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    builtin_strncpy(acStack_c8 + 4,"|xS",4);
    engine_2d_c_clearInputAndWait_FUN_00403260();
    acStack_c8[4] = -0x78;
    acStack_c8[5] = 'x';
    acStack_c8[6] = 'S';
    acStack_c8[7] = '\0';
    iVar3 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    switch(iVar3) {
    case 0x31:
      *(uint *)(param_5 + 0x30) = (uint)(*(int *)(param_5 + 0x30) == 0);
      break;
    case 0x32:
      *(uint *)(param_5 + 0x34) = (uint)(*(int *)(param_5 + 0x34) == 0);
      break;
    case 0x33:
      *(uint *)(param_5 + 0x38) = (uint)(*(int *)(param_5 + 0x38) == 0);
      break;
    case 0x34:
      g_DisableMouseHitOnBarrier = (int)(g_DisableMouseHitOnBarrier == 0);
      break;
    case 0x35:
      g_DynamicRenderMode = g_DynamicRenderMode + 1;
      break;
    case 0x36:
      g_ConfirmNewActorNames = (int)(g_ConfirmNewActorNames == 0);
      break;
    case 0x37:
      *(int *)(param_5 + 0x40) = *(int *)(param_5 + 0x40) + 1;
    }
    if (iVar3 == 0x1b) {
      core_inivar_cpp_writeIniData_FUN_004fc510();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
  } while( true );
}


// Assembly code:
// 00537680: PUSH EBX
//   Label: core_msnedit.cpp_DementedMissionEditorSomething_FUN_00537680
// 00537681: PUSH ESI
// 00537682: PUSH EDI
// 00537683: PUSH EBP
// 00537684: SUB ESP,0x104
// 0053768a: MOV EBP,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 00537691: CALL core_inivar.cpp_readIniData_FUN_004fbd90
//   XREF to: 004fbd90 (UNCONDITIONAL_CALL)
// 00537696: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0053769b: LEA EAX,[EBP + 0x44]
// 0053769e: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005376a5: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_005376a5
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 005376aa: PUSH 0x0
// 005376ac: PUSH 0x0
// 005376ae: PUSH 0x63b8bf
//   XREF to: 0063b8bf (DATA)
// 005376b3: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005376b8: MOV AH,byte ptr [EBP + 0x44]
// 005376bb: ADD ESP,0xc
// 005376be: TEST AH,AH
// 005376c0: JNZ 0x005378c9
//   XREF to: 005378c9 (CONDITIONAL_JUMP)
// 005376c6: MOV ESI,0x63b8ff
//   XREF to: 0063b8ff (DATA)
// 005376cb: MOV EDI,ESP
// 005376cd: PUSH EDI
// 005376ce: MOV AL,byte ptr [ESI]
//   Label: LAB_005376ce
//   XREF to: 0063b8ff (READ)
//   XREF to: 0063b901 (READ)
// 005376d0: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x114] (DATA)
// 005376d2: CMP AL,0x0
// 005376d4: JZ 0x005376e6
//   XREF to: 005376e6 (CONDITIONAL_JUMP)
// 005376d6: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0063b900 (READ)
//   XREF to: 0063b902 (READ)
// 005376d9: ADD ESI,0x2
// 005376dc: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x113] (WRITE)
// 005376df: ADD EDI,0x2
// 005376e2: CMP AL,0x0
// 005376e4: JNZ 0x005376ce
//   XREF to: 005376ce (CONDITIONAL_JUMP)
// 005376e6: POP EDI
//   Label: LAB_005376e6
// 005376e7: PUSH 0x16
//   Label: LAB_005376e7
// 005376e9: PUSH 0x0
// 005376eb: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 005376ef: PUSH EAX
// 005376f0: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005376f5: MOV EAX,dword ptr [EBP + 0x30]
// 005376f8: ADD ESP,0xc
// 005376fb: TEST EAX,EAX
// 005376fd: JZ 0x005378e8
//   XREF to: 005378e8 (CONDITIONAL_JUMP)
// 00537703: MOV EAX,0x63b2f0
//   XREF to: 0063b2f0 (DATA)
// 00537708: PUSH EAX
//   Label: LAB_00537708
//   XREF to: 0063b2f0 (DATA)
//   XREF to: 0063b2f3 (DATA)
// 00537709: PUSH 0x63b911
//   XREF to: 0063b911 (DATA)
// 0053770e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 00537712: PUSH EAX
// 00537713: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00537718: ADD ESP,0xc
// 0053771b: PUSH 0x2c
// 0053771d: PUSH 0x0
// 0053771f: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 00537723: PUSH EAX
// 00537724: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00537729: MOV EAX,dword ptr [EBP + 0x34]
// 0053772c: ADD ESP,0xc
// 0053772f: TEST EAX,EAX
// 00537731: JZ 0x005378f2
//   XREF to: 005378f2 (CONDITIONAL_JUMP)
// 00537737: MOV EAX,0x63b2f0
//   XREF to: 0063b2f0 (DATA)
// 0053773c: PUSH EAX
//   Label: LAB_0053773c
//   XREF to: 0063b2f0 (DATA)
//   XREF to: 0063b2f3 (DATA)
// 0053773d: PUSH 0x63b932
//   XREF to: 0063b932 (DATA)
// 00537742: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 00537746: PUSH EAX
// 00537747: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053774c: ADD ESP,0xc
// 0053774f: PUSH 0x37
// 00537751: PUSH 0x0
// 00537753: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 00537757: PUSH EAX
// 00537758: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053775d: MOV EAX,dword ptr [EBP + 0x38]
// 00537760: ADD ESP,0xc
// 00537763: TEST EAX,EAX
// 00537765: JZ 0x005378fc
//   XREF to: 005378fc (CONDITIONAL_JUMP)
// 0053776b: MOV EAX,0x63b2f0
//   XREF to: 0063b2f0 (DATA)
// 00537770: PUSH EAX
//   Label: LAB_00537770
//   XREF to: 0063b2f0 (DATA)
//   XREF to: 0063b2f3 (DATA)
// 00537771: PUSH 0x63b955
//   XREF to: 0063b955 (DATA)
// 00537776: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 0053777a: PUSH EAX
// 0053777b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00537780: ADD ESP,0xc
// 00537783: PUSH 0x42
// 00537785: PUSH 0x0
// 00537787: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 0053778b: PUSH EAX
// 0053778c: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00537791: MOV EAX,[0x02f7a020]
//   XREF to: 02f7a020 (READ)
// 00537796: ADD ESP,0xc
// 00537799: TEST EAX,EAX
// 0053779b: JZ 0x00537906
//   XREF to: 00537906 (CONDITIONAL_JUMP)
// 005377a1: MOV EAX,0x63b2f0
//   XREF to: 0063b2f0 (DATA)
// 005377a6: PUSH EAX
//   Label: LAB_005377a6
//   XREF to: 0063b2f0 (DATA)
//   XREF to: 0063b2f3 (DATA)
// 005377a7: PUSH 0x63b97f
//   XREF to: 0063b97f (DATA)
// 005377ac: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 005377b0: PUSH EAX
// 005377b1: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005377b6: ADD ESP,0xc
// 005377b9: PUSH 0x4d
// 005377bb: PUSH 0x0
// 005377bd: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 005377c1: PUSH EAX
// 005377c2: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 005377c7: MOV EAX,[0x00680810]
//   XREF to: 00680810 (READ)
// 005377cc: ADD ESP,0xc
// 005377cf: CMP EAX,0x2
// 005377d2: JNC 0x0053792e
//   XREF to: 0053792e (CONDITIONAL_JUMP)
// 005377d8: PUSH 0x63b9ab
//   Label: LAB_005377d8
//   XREF to: 0063b9ab (DATA)
// 005377dd: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x114] (DATA)
// 005377e1: MOV ECX,0x1
// 005377e6: PUSH EAX
// 005377e7: MOV dword ptr [0x00680810],ECX
//   XREF to: 00680810 (WRITE)
// 005377ed: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   Label: LAB_005377ed
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005377f2: ADD ESP,0x8
// 005377f5: PUSH 0x58
// 005377f7: PUSH 0x0
// 005377f9: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 005377fd: PUSH EAX
// 005377fe: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00537803: MOV EAX,[0x00680814]
//   XREF to: 00680814 (READ)
// 00537808: ADD ESP,0xc
// 0053780b: TEST EAX,EAX
// 0053780d: JZ 0x0053793a
//   XREF to: 0053793a (CONDITIONAL_JUMP)
// 00537813: MOV EAX,0x63b2f0
//   XREF to: 0063b2f0 (DATA)
// 00537818: PUSH EAX
//   Label: LAB_00537818
//   XREF to: 0063b2f0 (DATA)
//   XREF to: 0063b2f3 (DATA)
// 00537819: PUSH 0x63ba17
//   XREF to: 0063ba17 (DATA)
// 0053781e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 00537822: PUSH EAX
// 00537823: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00537828: ADD ESP,0xc
// 0053782b: PUSH 0x63
// 0053782d: PUSH 0x0
// 0053782f: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 00537833: PUSH EAX
// 00537834: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00537839: MOV EAX,dword ptr [EBP + 0x40]
// 0053783c: ADD ESP,0xc
// 0053783f: CMP EAX,0x1
// 00537842: JNC 0x00537962
//   XREF to: 00537962 (CONDITIONAL_JUMP)
// 00537848: PUSH 0x63ba36
//   Label: LAB_00537848
//   XREF to: 0063ba36 (DATA)
// 0053784d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x114] (DATA)
// 00537851: PUSH EAX
// 00537852: MOV dword ptr [EBP + 0x40],0x0
// 00537859: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   Label: LAB_00537859
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0053785e: ADD ESP,0x8
// 00537861: PUSH 0x6e
// 00537863: PUSH 0x0
// 00537865: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 00537869: PUSH EAX
// 0053786a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0053786f: ADD ESP,0xc
// 00537872: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00537877: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0053787c: MOV EBX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 00537882: PUSH EBX
//   XREF to: 02dcd7d4 (DATA)
// 00537883: CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   XREF to: 00502470 (UNCONDITIONAL_CALL)
// 00537888: MOV EDI,EAX
// 0053788a: SUB EAX,0x31
// 0053788d: ADD ESP,0x4
// 00537890: CMP EAX,0x6
// 00537893: JA 0x005378ab
//   XREF to: 005378ab (CONDITIONAL_JUMP)
// 00537895: JMP dword ptr [EAX*0x4 + 0x537658]
//   Label: switchD
//   XREF to: 0053789c (COMPUTED_JUMP)
//   XREF to: 0053796e (COMPUTED_JUMP)
//   XREF to: 00537982 (COMPUTED_JUMP)
//   XREF to: 00537996 (COMPUTED_JUMP)
//   XREF to: 005379af (COMPUTED_JUMP)
//   XREF to: 005379ba (COMPUTED_JUMP)
//   XREF to: 005379d3 (COMPUTED_JUMP)
//   XREF to: 00537658 (DATA)
// 0053789c: CMP dword ptr [EBP + 0x30],0x0
//   Label: caseD_31
// 005378a0: SETZ AL
// 005378a3: AND EAX,0xff
// 005378a8: MOV dword ptr [EBP + 0x30],EAX
// 005378ab: CMP EDI,0x1b
//   Label: default
// 005378ae: JNZ 0x005376a5
//   XREF to: 005376a5 (CONDITIONAL_JUMP)
// 005378b4: CALL core_inivar.cpp_writeIniData_FUN_004fc510
//   XREF to: 004fc510 (UNCONDITIONAL_CALL)
// 005378b9: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 005378be: ADD ESP,0x104
// 005378c4: POP EBP
// 005378c5: POP EDI
// 005378c6: POP ESI
// 005378c7: POP EBX
// 005378c8: RET
// 005378c9: MOV EDX,dword ptr [ESP + 0x100]
//   Label: LAB_005378c9
//   XREF to: Stack[-0x14] (READ)
// 005378d0: PUSH EDX
// 005378d1: PUSH 0x63b8e7
//   XREF to: 0063b8e7 (DATA)
// 005378d6: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x114] (DATA)
// 005378da: PUSH EAX
// 005378db: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005378e0: ADD ESP,0xc
// 005378e3: JMP 0x005376e7
//   XREF to: 005376e7 (UNCONDITIONAL_JUMP)
// 005378e8: MOV EAX,0x63b2f3
//   Label: LAB_005378e8
//   XREF to: 0063b2f3 (DATA)
// 005378ed: JMP 0x00537708
//   XREF to: 00537708 (UNCONDITIONAL_JUMP)
// 005378f2: MOV EAX,0x63b2f3
//   Label: LAB_005378f2
//   XREF to: 0063b2f3 (DATA)
// 005378f7: JMP 0x0053773c
//   XREF to: 0053773c (UNCONDITIONAL_JUMP)
// 005378fc: MOV EAX,0x63b2f3
//   Label: LAB_005378fc
//   XREF to: 0063b2f3 (DATA)
// 00537901: JMP 0x00537770
//   XREF to: 00537770 (UNCONDITIONAL_JUMP)
// 00537906: MOV EAX,0x63b2f3
//   Label: LAB_00537906
//   XREF to: 0063b2f3 (DATA)
// 0053790b: JMP 0x005377a6
//   XREF to: 005377a6 (UNCONDITIONAL_JUMP)
// 00537910: PUSH 0x63b9ce
//   Label: LAB_00537910
//   XREF to: 0063b9ce (DATA)
// 00537915: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x114] (DATA)
// 00537919: PUSH EAX
// 0053791a: JMP 0x005377ed
//   XREF to: 005377ed (UNCONDITIONAL_JUMP)
// 0053791f: PUSH 0x63b9f2
//   Label: LAB_0053791f
//   XREF to: 0063b9f2 (DATA)
// 00537924: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x114] (DATA)
// 00537928: PUSH EAX
// 00537929: JMP 0x005377ed
//   XREF to: 005377ed (UNCONDITIONAL_JUMP)
// 0053792e: JBE 0x00537910
//   Label: LAB_0053792e
//   XREF to: 00537910 (CONDITIONAL_JUMP)
// 00537930: CMP EAX,0x3
// 00537933: JZ 0x0053791f
//   XREF to: 0053791f (CONDITIONAL_JUMP)
// 00537935: JMP 0x005377d8
//   XREF to: 005377d8 (UNCONDITIONAL_JUMP)
// 0053793a: MOV EAX,0x63b2f3
//   Label: LAB_0053793a
//   XREF to: 0063b2f3 (DATA)
// 0053793f: JMP 0x00537818
//   XREF to: 00537818 (UNCONDITIONAL_JUMP)
// 00537944: PUSH 0x63ba55
//   Label: LAB_00537944
//   XREF to: 0063ba55 (DATA)
// 00537949: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x114] (DATA)
// 0053794d: PUSH EAX
// 0053794e: JMP 0x00537859
//   XREF to: 00537859 (UNCONDITIONAL_JUMP)
// 00537953: PUSH 0x63ba7e
//   Label: LAB_00537953
//   XREF to: 0063ba7e (DATA)
// 00537958: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x114] (DATA)
// 0053795c: PUSH EAX
// 0053795d: JMP 0x00537859
//   XREF to: 00537859 (UNCONDITIONAL_JUMP)
// 00537962: JBE 0x00537944
//   Label: LAB_00537962
//   XREF to: 00537944 (CONDITIONAL_JUMP)
// 00537964: CMP EAX,0x2
// 00537967: JZ 0x00537953
//   XREF to: 00537953 (CONDITIONAL_JUMP)
// 00537969: JMP 0x00537848
//   XREF to: 00537848 (UNCONDITIONAL_JUMP)
// 0053796e: CMP dword ptr [EBP + 0x34],0x0
//   Label: caseD_32
// 00537972: SETZ AL
// 00537975: AND EAX,0xff
// 0053797a: MOV dword ptr [EBP + 0x34],EAX
// 0053797d: JMP 0x005378ab
//   XREF to: 005378ab (UNCONDITIONAL_JUMP)
// 00537982: CMP dword ptr [EBP + 0x38],0x0
//   Label: caseD_33
// 00537986: SETZ AL
// 00537989: AND EAX,0xff
// 0053798e: MOV dword ptr [EBP + 0x38],EAX
// 00537991: JMP 0x005378ab
//   XREF to: 005378ab (UNCONDITIONAL_JUMP)
// 00537996: CMP dword ptr [0x02f7a020],0x0
//   Label: caseD_34
//   XREF to: 02f7a020 (READ)
// 0053799d: SETZ AL
// 005379a0: AND EAX,0xff
// 005379a5: MOV [0x02f7a020],EAX
//   XREF to: 02f7a020 (WRITE)
// 005379aa: JMP 0x005378ab
//   XREF to: 005378ab (UNCONDITIONAL_JUMP)
// 005379af: INC dword ptr [0x00680810]
//   Label: caseD_35
//   XREF to: 00680810 (READ_WRITE)
// 005379b5: JMP 0x005378ab
//   XREF to: 005378ab (UNCONDITIONAL_JUMP)
// 005379ba: CMP dword ptr [0x00680814],0x0
//   Label: caseD_36
//   XREF to: 00680814 (READ)
// 005379c1: SETZ AL
// 005379c4: AND EAX,0xff
// 005379c9: MOV [0x00680814],EAX
//   XREF to: 00680814 (WRITE)
// 005379ce: JMP 0x005378ab
//   XREF to: 005378ab (UNCONDITIONAL_JUMP)
// 005379d3: INC dword ptr [EBP + 0x40]
//   Label: caseD_37
// 005379d6: JMP 0x005378ab
//   XREF to: 005378ab (UNCONDITIONAL_JUMP)
