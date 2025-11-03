// Name: core_cloth.cpp_FUN_0043ddf0
// Address: 0043ddf0
// Address Range: [[0043ddf0, 0043e097]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043ddf0()
// Globals:
//   void* switchdataD_0043ddd4 = 0043decc
//   undefined4 s_Demented(R)_Cloth_Editor_00618976
//   TerminatedCString s_s_1_Load_cloth_file_0061898f
//   TerminatedCString s_s_2_Save_cloth_file_006189a3
//   TerminatedCString s_s_3_Locked_vertex_editor_006189b7
//   TerminatedCString s_s_4_Load_skeleton_006189d0
//   TerminatedCString s_s_5_Bone_editor_006189e2
//   TerminatedCString s_s_6_Edit_transparency_006189f2
//   TerminatedCString s_s_7_Create_cloth_from_KF_00618a08
//   TerminatedCString s_cth_00618a23
//   TerminatedCString s_models_00618a29
//   TerminatedCString s_Load_cloth_file_00618a30
//   TerminatedCString s_cth_00618a40
//   TerminatedCString s_models_00618a44
//   TerminatedCString s_Save_cloth_file_00618a4b
//   TerminatedCString s_dfm_00618a5b
//   TerminatedCString s_models_00618a61
//   TerminatedCString s_Select_deformable_model_00618a68
//   TerminatedCString s_Enter_transparency_0_1_0_00618a80
//   TerminatedCString s_kfm_00618a9c
//   TerminatedCString s_models_00618aa2
//   TerminatedCString s_Create_cloth_file_from_K_00618aa9
//   undefined1 DAT_00618ac4
//   undefined1 DAT_00618ac5
//   undefined1 DAT_00618ac6
//   undefined1 DAT_00618ac7
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CDeformableModelInstance g_CDeformableModelInstanceInstance
//   CEditorTools g_CEditorToolsPtr
//   void* g_CKeysPtr
// Function calls:
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880
//   core_cloth.cpp_CCloth_load_FUN_00438cf0
//   core_cloth.cpp_FUN_0043dcc0
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590
//   core_cloth.cpp_ParseClothFile_FUN_00439260
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   crt_string.c_splitpath_FUN_005ff178
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void core_cloth_cpp_FUN_0043ddf0(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  char *pcVar6;
  byte bVar8;
  CCloth *in_stack_00000004;
  float *in_stack_00000018;
  CCloth *in_stack_fffffdb4;
  char acStack_14c [4];
  char acStack_148 [4];
  char acStack_144 [248];
  undefined1 auStack_4c [4];
  char acStack_48 [52];
  char *local_14;
  char *pcVar7;
  
  bVar8 = 0;
  local_14 = in_stack_00000004->padding_0x0 + 0x3ce88;
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("?Demented(R) Cloth Editor" + 1,0,0);
    engine_2d_c_drawText_FUN_00401fd0("1.  Load cloth file",0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("2.  Save cloth file",0,0x21);
    engine_2d_c_drawText_FUN_00401fd0("3.  Locked vertex editor",0,0x2c);
    engine_2d_c_drawText_FUN_00401fd0("4.  Load skeleton",0,0x37);
    engine_2d_c_drawText_FUN_00401fd0("5.  Bone editor",0,0x42);
    engine_2d_c_drawText_FUN_00401fd0("6.  Edit transparency",0,0x4d);
    engine_2d_c_drawText_FUN_00401fd0("7.  Create cloth from .KFM",0,0x58);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar3 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    switch(iVar3) {
    case 0x31:
      iVar4 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                        (g_CEditorToolsPtr,"Load cloth file","models",
                         "*.cth",SUB41(acStack_14c,0));
      if (iVar4 != 0) {
        in_stack_fffffdb4 = in_stack_00000004;
        core_cloth_cpp_CCloth_load_FUN_00438cf0(in_stack_00000004,acStack_144);
      }
      break;
    case 0x32:
      bVar2 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                        (g_CEditorToolsPtr,"Save cloth file","models",0x618a40,
                         SUB41(acStack_14c,0));
      if (CONCAT31(extraout_var,bVar2) != 0) {
        in_stack_fffffdb4 = in_stack_00000004;
        core_cloth_cpp_ParseClothFile_FUN_00439260();
      }
      break;
    case 0x33:
      core_cloth_cpp_LockVerticesMaybe_FUN_0043d590();
      break;
    case 0x34:
      iVar4 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                        (g_CEditorToolsPtr,"Select deformable model","models",
                         "*.dfm",SUB41(&stack0xfffffdb4,0));
      if (iVar4 != 0) {
        core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840(&g_CDeformableModelInstanceInstance)
        ;
        in_stack_fffffdb4 = (CCloth *)0x43dfaf;
        core_skeleton_cpp_CDeformableModelInstance_FUN_005a0450(&g_CDeformableModelInstanceInstance)
        ;
      }
      break;
    case 0x35:
      if (((char)in_stack_fffffdb4 != '\0') && (acStack_14c[0] != '\0')) {
        core_cloth_cpp_BoneAndClothEditor_FUN_0043c880();
      }
      break;
    case 0x36:
      shape_edittool_cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
                (g_CEditorToolsPtr,"Enter transparency (0..1.0)",in_stack_00000018,true,0.0,
                 1.0,true);
      break;
    case 0x37:
      iVar4 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                        (g_CEditorToolsPtr,"Create cloth file from KFM","models",
                         "*.kfm",SUB41(auStack_4c,0));
      if (iVar4 != 0) {
        crt_string_c_splitpath_FUN_005ff178
                  (acStack_48,(char *)0x0,(char *)0x0,acStack_148,(char *)0x0);
        pcVar5 = &DAT_00618ac4;
        iVar4 = -1;
        pcVar7 = acStack_144;
        do {
          pcVar6 = pcVar7;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar7 + (uint)bVar8 * -2 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar6;
        } while (cVar1 != '\0');
        pcVar6 = pcVar6 + -1;
        do {
          cVar1 = *pcVar5;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          pcVar6[1] = cVar1;
          pcVar6 = pcVar6 + 2;
        } while (cVar1 != '\0');
        in_stack_fffffdb4 = in_stack_00000004;
        core_cloth_cpp_FUN_0043dcc0();
      }
    }
    if (iVar3 == 0x1b) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      return;
    }
  } while( true );
}


// Assembly code:
// 0043ddf0: PUSH EBX
//   Label: core_cloth.cpp_FUN_0043ddf0
// 0043ddf1: PUSH ESI
// 0043ddf2: PUSH EDI
// 0043ddf3: PUSH EBP
// 0043ddf4: SUB ESP,0x268
// 0043ddfa: MOV EBP,dword ptr [ESP + 0x27c]
//   XREF to: Stack[0x4] (READ)
// 0043de01: XOR AH,AH
// 0043de03: MOV byte ptr [ESP + 0x100],AH
//   XREF to: Stack[-0x178] (WRITE)
// 0043de0a: MOV byte ptr [ESP],AH
//   XREF to: Stack[-0x278] (DATA)
// 0043de0d: LEA EAX,[EBP + 0x3ce88]
// 0043de13: MOV dword ptr [ESP + 0x264],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0043de1a: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_0043de1a
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 0043de1f: PUSH 0x0
// 0043de21: PUSH 0x0
// 0043de23: PUSH 0x618976
//   XREF to: 00618976 (DATA)
// 0043de28: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0043de2d: ADD ESP,0xc
// 0043de30: PUSH 0x16
// 0043de32: PUSH 0x0
// 0043de34: PUSH 0x61898f
//   XREF to: 0061898f (DATA)
// 0043de39: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0043de3e: ADD ESP,0xc
// 0043de41: PUSH 0x21
// 0043de43: PUSH 0x0
// 0043de45: PUSH 0x6189a3
//   XREF to: 006189a3 (DATA)
// 0043de4a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0043de4f: ADD ESP,0xc
// 0043de52: PUSH 0x2c
// 0043de54: PUSH 0x0
// 0043de56: PUSH 0x6189b7
//   XREF to: 006189b7 (DATA)
// 0043de5b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0043de60: ADD ESP,0xc
// 0043de63: PUSH 0x37
// 0043de65: PUSH 0x0
// 0043de67: PUSH 0x6189d0
//   XREF to: 006189d0 (DATA)
// 0043de6c: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0043de71: ADD ESP,0xc
// 0043de74: PUSH 0x42
// 0043de76: PUSH 0x0
// 0043de78: PUSH 0x6189e2
//   XREF to: 006189e2 (DATA)
// 0043de7d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0043de82: ADD ESP,0xc
// 0043de85: PUSH 0x4d
// 0043de87: PUSH 0x0
// 0043de89: PUSH 0x6189f2
//   XREF to: 006189f2 (DATA)
// 0043de8e: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0043de93: ADD ESP,0xc
// 0043de96: PUSH 0x58
// 0043de98: PUSH 0x0
// 0043de9a: PUSH 0x618a08
//   XREF to: 00618a08 (DATA)
// 0043de9f: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0043dea4: ADD ESP,0xc
// 0043dea7: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0043deac: MOV EDX,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0043deb2: PUSH EDX
//   XREF to: 02dcd7d4 (DATA)
// 0043deb3: CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   XREF to: 00502470 (UNCONDITIONAL_CALL)
// 0043deb8: MOV EBX,EAX
// 0043deba: SUB EAX,0x31
// 0043debd: ADD ESP,0x4
// 0043dec0: CMP EAX,0x6
// 0043dec3: JA 0x0043df09
//   XREF to: 0043df09 (CONDITIONAL_JUMP)
// 0043dec5: JMP dword ptr [EAX*0x4 + 0x43ddd4]
//   Label: switchD
//   XREF to: 0043decc (COMPUTED_JUMP)
//   XREF to: 0043df22 (COMPUTED_JUMP)
//   XREF to: 0043df5e (COMPUTED_JUMP)
//   XREF to: 0043df69 (COMPUTED_JUMP)
//   XREF to: 0043dfb7 (COMPUTED_JUMP)
//   XREF to: 0043dfdd (COMPUTED_JUMP)
//   XREF to: 0043e009 (COMPUTED_JUMP)
//   XREF to: 0043ddd4 (DATA)
// 0043decc: PUSH 0x0
//   Label: caseD_31
// 0043dece: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x178] (DATA)
// 0043ded5: PUSH EAX
// 0043ded6: PUSH 0x618a23
//   XREF to: 00618a23 (DATA)
// 0043dedb: PUSH 0x618a29
//   XREF to: 00618a29 (DATA)
// 0043dee0: PUSH 0x618a30
//   XREF to: 00618a30 (DATA)
// 0043dee5: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0043deeb: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0043deec: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 0043def1: ADD ESP,0x18
// 0043def4: TEST EAX,EAX
// 0043def6: JZ 0x0043df09
//   XREF to: 0043df09 (CONDITIONAL_JUMP)
// 0043def8: LEA EAX,[ESP + 0x100]
//   XREF to: Stack[-0x178] (DATA)
// 0043deff: PUSH EAX
// 0043df00: PUSH EBP
// 0043df01: CALL core_cloth.cpp_CCloth_load_FUN_00438cf0
//   XREF to: 00438cf0 (UNCONDITIONAL_CALL)
// 0043df06: ADD ESP,0x8
//   Label: LAB_0043df06
// 0043df09: CMP EBX,0x1b
//   Label: default
// 0043df0c: JNZ 0x0043de1a
//   XREF to: 0043de1a (CONDITIONAL_JUMP)
// 0043df12: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0043df17: ADD ESP,0x268
// 0043df1d: POP EBP
// 0043df1e: POP EDI
// 0043df1f: POP ESI
// 0043df20: POP EBX
// 0043df21: RET
// 0043df22: PUSH 0x1
//   Label: caseD_32
// 0043df24: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x178] (DATA)
// 0043df2b: PUSH EAX
// 0043df2c: PUSH 0x618a40
//   XREF to: 00618a40 (DATA)
// 0043df31: PUSH 0x618a44
//   XREF to: 00618a44 (DATA)
// 0043df36: PUSH 0x618a4b
//   XREF to: 00618a4b (DATA)
// 0043df3b: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0043df41: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0043df42: CALL shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
//   XREF to: 0049fb70 (UNCONDITIONAL_CALL)
// 0043df47: ADD ESP,0x18
// 0043df4a: TEST EAX,EAX
// 0043df4c: JZ 0x0043df09
//   XREF to: 0043df09 (CONDITIONAL_JUMP)
// 0043df4e: LEA EAX,[ESP + 0x100]
//   XREF to: Stack[-0x178] (DATA)
// 0043df55: PUSH EAX
// 0043df56: PUSH EBP
// 0043df57: CALL core_cloth.cpp_ParseClothFile_FUN_00439260
//   XREF to: 00439260 (UNCONDITIONAL_CALL)
// 0043df5c: JMP 0x0043df06
//   XREF to: 0043df06 (UNCONDITIONAL_JUMP)
// 0043df5e: PUSH EBP
//   Label: caseD_33
// 0043df5f: CALL core_cloth.cpp_LockVerticesMaybe_FUN_0043d590
//   XREF to: 0043d590 (UNCONDITIONAL_CALL)
// 0043df64: ADD ESP,0x4
// 0043df67: JMP 0x0043df09
//   XREF to: 0043df09 (UNCONDITIONAL_JUMP)
// 0043df69: PUSH 0x0
//   Label: caseD_34
// 0043df6b: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x278] (DATA)
// 0043df6f: PUSH EAX
// 0043df70: PUSH 0x618a5b
//   XREF to: 00618a5b (DATA)
// 0043df75: PUSH 0x618a61
//   XREF to: 00618a61 (DATA)
// 0043df7a: PUSH 0x618a68
//   XREF to: 00618a68 (DATA)
// 0043df7f: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 0043df84: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0043df85: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 0043df8a: ADD ESP,0x18
// 0043df8d: TEST EAX,EAX
// 0043df8f: JZ 0x0043df09
//   XREF to: 0043df09 (CONDITIONAL_JUMP)
// 0043df95: MOV EAX,ESP
// 0043df97: PUSH EAX
// 0043df98: PUSH 0x838e58
//   XREF to: 00838e58 (DATA)
// 0043df9d: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 0043dfa2: ADD ESP,0x8
// 0043dfa5: PUSH 0x838e58
//   XREF to: 00838e58 (DATA)
// 0043dfaa: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 0043dfaf: ADD ESP,0x4
// 0043dfb2: JMP 0x0043df09
//   XREF to: 0043df09 (UNCONDITIONAL_JUMP)
// 0043dfb7: CMP byte ptr [ESP],0x0
//   Label: caseD_35
//   XREF to: Stack[-0x278] (DATA)
// 0043dfbb: JZ 0x0043df09
//   XREF to: 0043df09 (CONDITIONAL_JUMP)
// 0043dfc1: CMP byte ptr [ESP + 0x100],0x0
//   XREF to: Stack[-0x178] (READ)
// 0043dfc9: JZ 0x0043df09
//   XREF to: 0043df09 (CONDITIONAL_JUMP)
// 0043dfcf: PUSH EBP
// 0043dfd0: CALL core_cloth.cpp_BoneAndClothEditor_FUN_0043c880
//   XREF to: 0043c880 (UNCONDITIONAL_CALL)
// 0043dfd5: ADD ESP,0x4
// 0043dfd8: JMP 0x0043df09
//   XREF to: 0043df09 (UNCONDITIONAL_JUMP)
// 0043dfdd: PUSH 0x1
//   Label: caseD_36
// 0043dfdf: PUSH 0x3f800000
// 0043dfe4: PUSH 0x0
// 0043dfe6: PUSH 0x1
// 0043dfe8: MOV ESI,dword ptr [ESP + 0x274]
//   XREF to: Stack[-0x14] (READ)
// 0043dfef: PUSH ESI
// 0043dff0: PUSH 0x618a80
//   XREF to: 00618a80 (DATA)
// 0043dff5: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0043dffb: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0043dffc: CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
//   XREF to: 004a00f0 (UNCONDITIONAL_CALL)
// 0043e001: ADD ESP,0x1c
// 0043e004: JMP 0x0043df09
//   XREF to: 0043df09 (UNCONDITIONAL_JUMP)
// 0043e009: PUSH 0x0
//   Label: caseD_37
// 0043e00b: LEA EAX,[ESP + 0x204]
//   XREF to: Stack[-0x78] (DATA)
// 0043e012: PUSH EAX
// 0043e013: PUSH 0x618a9c
//   XREF to: 00618a9c (DATA)
// 0043e018: PUSH 0x618aa2
//   XREF to: 00618aa2 (DATA)
// 0043e01d: PUSH 0x618aa9
//   XREF to: 00618aa9 (DATA)
// 0043e022: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0043e028: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0043e029: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 0043e02e: ADD ESP,0x18
// 0043e031: TEST EAX,EAX
// 0043e033: JZ 0x0043df09
//   XREF to: 0043df09 (CONDITIONAL_JUMP)
// 0043e039: PUSH 0x0
// 0043e03b: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x178] (DATA)
// 0043e042: PUSH EAX
// 0043e043: PUSH 0x0
// 0043e045: PUSH 0x0
// 0043e047: LEA EAX,[ESP + 0x210]
//   XREF to: Stack[-0x78] (DATA)
// 0043e04e: PUSH EAX
// 0043e04f: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 0043e054: ADD ESP,0x14
// 0043e057: MOV ESI,0x618ac4
//   XREF to: 00618ac4 (DATA)
// 0043e05c: LEA EDI,[ESP + 0x100]
//   XREF to: Stack[-0x178] (DATA)
// 0043e063: PUSH EDI
// 0043e064: SUB ECX,ECX
// 0043e066: DEC ECX
// 0043e067: MOV AL,0x0
// 0043e069: SCASB.REPNE ES:EDI
// 0043e06b: DEC EDI
// 0043e06c: MOV AL,byte ptr [ESI]
//   Label: LAB_0043e06c
//   XREF to: 00618ac4 (READ)
//   XREF to: 00618ac6 (READ)
// 0043e06e: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x178] (DATA)
// 0043e070: CMP AL,0x0
// 0043e072: JZ 0x0043e084
//   XREF to: 0043e084 (CONDITIONAL_JUMP)
// 0043e074: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00618ac5 (READ)
//   XREF to: 00618ac7 (READ)
// 0043e077: ADD ESI,0x2
// 0043e07a: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x177] (WRITE)
// 0043e07d: ADD EDI,0x2
// 0043e080: CMP AL,0x0
// 0043e082: JNZ 0x0043e06c
//   XREF to: 0043e06c (CONDITIONAL_JUMP)
// 0043e084: POP EDI
//   Label: LAB_0043e084
// 0043e085: LEA EAX,[ESP + 0x200]
//   XREF to: Stack[-0x78] (DATA)
// 0043e08c: PUSH EAX
// 0043e08d: PUSH EBP
// 0043e08e: CALL core_cloth.cpp_FUN_0043dcc0
//   XREF to: 0043dcc0 (UNCONDITIONAL_CALL)
// 0043e093: JMP 0x0043df06
//   XREF to: 0043df06 (UNCONDITIONAL_JUMP)
