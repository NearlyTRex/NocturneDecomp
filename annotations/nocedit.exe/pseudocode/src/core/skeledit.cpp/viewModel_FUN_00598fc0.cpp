// Name: core_skeledit.cpp_viewModel_FUN_00598fc0
// Address: 00598fc0
// Address Range: [[00598fc0, 00599473]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_viewModel_FUN_00598fc0()
// Cross-references:
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0 (005073a0) at 005078ff [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeledit_cpp_00649d0a
//   TerminatedCString s_rt_00649d1f
//   TerminatedCString s_d_00649d22
//   TerminatedCString s_core_skeledit_cpp_00649d26
//   TerminatedCString s_Deleting_old_s_file_00649d3b
//   TerminatedCString s_core_skeledit_cpp_00649d51
//   TerminatedCString s_core_skeledit_cpp_00649d66
//   TerminatedCString s_wt_00649d7b
//   TerminatedCString s_version_00649d7e
//   TerminatedCString s_d_00649d8a
//   TerminatedCString s_lastPOSimported_00649d8e
//   TerminatedCString s_s_00649da2
//   TerminatedCString s_lastMOTimported_00649da8
//   TerminatedCString s_s_00649dbc
//   TerminatedCString s_lastTestSkeletonDir_00649dc2
//   TerminatedCString s_s_00649dda
//   TerminatedCString s_core_skeledit_cpp_00649de0
//   undefined4 s_..\core\skeledit.cpp_0064e0d2
//   TerminatedCString s_core_skeledit_cpp_0064e0e7
//   TerminatedCString s_viewModel_out_of_memory_0064e0fc
//   TerminatedCString s_core_skeledit_cpp_0064e117
//   TerminatedCString s_z_meshlod_0064e12c
//   undefined4 s_:\meshlod_0064e12d
//   undefined4 s_meshlod_0064e12f
//   TerminatedCString s_Nocturne_R_Skeleton_syst_0064e137
//   TerminatedCString s_s_3_View_a_deformable_mo_0064e15f
//   TerminatedCString s_dfm_0064e186
//   TerminatedCString s_models_0064e18c
//   TerminatedCString s_Select_model_to_view_0064e193
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CKeys* g_CKeysPtr = 02dcd7d4
//   char* g_CurrentDebugFilename = 0067d200
//   TerminatedCString s_meshlod_0067d3a0
//   undefined4 s_eshlod_0067d3a1
//   undefined4 s_shlod_0067d3a2
//   undefined4 s_hlod_0067d3a3
//   TerminatedCString s_skeledit_ini_00681868
//   CEditorTools g_CEditorToolsPtr
//   void* g_CKeysPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
//   undefined1 DAT_03670848
//   undefined1 DAT_03670849
//   undefined1 DAT_03670950
//   undefined1 DAT_03670951
//   undefined1 DAT_03670a58
//   undefined1 DAT_03670a59
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0
//   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   core_skeleton.cpp_freeAllModels_FUN_005a1dc0
//   core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

/* Signature: void core_skeledit.cpp_viewModel(undefined4 param_1) */

void core_skeledit_cpp_viewModel_FUN_00598fc0(void)

{
  char cVar1;
  FILE *pFVar2;
  int iVar3;
  CDeformableModelInstance *this_ptr;
  int iVar4;
  undefined1 *puVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_118 [260];
  int local_14;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x134);
  pFVar2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("skeledit.ini",(char *)0x0,"rt","..\\core\\skeledit.cpp"
                      ,0x124);
  if (pFVar2 == (FILE *)0x0) goto LAB_00599119;
  iVar4 = 1;
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar2,"%d\n",&local_14);
  if (local_14 != 1) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\skeledit.cpp",0x12d);
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"Deleting old %s file.","skeledit.ini");
    crt_io_c_deleteFile_FUN_005ff9d0("skeledit.ini");
    goto LAB_00599119;
  }
  iVar4 = 1;
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  DAT_03670848 = 0;
  do {
    iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if ((iVar4 < 0) || (iVar4 == 10)) goto LAB_00599080;
    puVar5 = &DAT_03670848;
  } while (iVar4 != 0x22);
  while ((iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2), -1 < iVar4 && (iVar4 != 10))) {
    if (iVar4 == 0x22) {
      iVar4 = 1;
      goto LAB_005992fc;
    }
    *puVar5 = (char)iVar4;
    puVar5[1] = 0;
    puVar5 = puVar5 + 1;
  }
  goto LAB_00599080;
  while ((iVar3 != 10 || (iVar4 = iVar4 + -1, 0 < iVar4))) {
LAB_00599354:
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar3 < 0) break;
  }
  goto LAB_005990c3;
  while ((iVar3 != 10 || (iVar4 = iVar4 + -1, 0 < iVar4))) {
LAB_005993ac:
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar3 < 0) break;
  }
  goto LAB_00599106;
  while ((iVar3 != 10 || (iVar4 = iVar4 + -1, 0 < iVar4))) {
LAB_005992fc:
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar3 < 0) break;
  }
LAB_00599080:
  iVar4 = 1;
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  DAT_03670950 = 0;
  do {
    iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if ((iVar4 < 0) || (iVar4 == 10)) goto LAB_005990c3;
    puVar5 = &DAT_03670950;
  } while (iVar4 != 0x22);
  while ((iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2), -1 < iVar4 && (iVar4 != 10))) {
    if (iVar4 == 0x22) {
      iVar4 = 1;
      goto LAB_00599354;
    }
    *puVar5 = (char)iVar4;
    puVar5[1] = 0;
    puVar5 = puVar5 + 1;
  }
LAB_005990c3:
  iVar4 = 1;
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
  DAT_03670a58 = 0;
  do {
    iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
    if ((iVar4 < 0) || (iVar4 == 10)) goto LAB_00599106;
    puVar5 = &DAT_03670a58;
  } while (iVar4 != 0x22);
  while ((iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2), -1 < iVar4 && (iVar4 != 10))) {
    if (iVar4 == 0x22) {
      iVar4 = 1;
      goto LAB_005993ac;
    }
    *puVar5 = (char)iVar4;
    puVar5[1] = 0;
    puVar5 = puVar5 + 1;
  }
LAB_00599106:
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\skeledit.cpp",0x13f);
LAB_00599119:
  pcVar6 = "z:\\meshlod";
  pcVar7 = "meshlod";
  do {
    cVar1 = *pcVar6;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Nocturne(R) Skeleton system editor menu",0,0);
    engine_2d_c_drawText_FUN_00401fd0("3.  View a deformable model in action!",0,0x2c);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    core_skeleton_cpp_freeAllSkeletons_FUN_005a1ea0();
    core_skeleton_cpp_freeAllModels_FUN_005a1dc0();
    iVar4 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    if ((iVar4 == 0x33) &&
       (iVar3 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                          (g_CEditorToolsPtr,"Select model to view","models",
                           "*.dfm",SUB41(local_118,0)), iVar3 != 0)) {
      this_ptr = (CDeformableModelInstance *)
                 shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                           (0x22b4,"L=..\\core\\skeledit.cpp" + 2,0x1b79);
      if (this_ptr != (CDeformableModelInstance *)0x0) {
        this_ptr = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(this_ptr);
      }
      if (this_ptr == (CDeformableModelInstance *)0x0) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x1b7a;
        core_main_c_displayErrorAndQuit_FUN_00506f10("viewModel - out of memory!");
      }
      core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840(this_ptr);
      core_skeleton_cpp_CDeformableModelInstance_FUN_005a0450(this_ptr);
      core_skeledit_cpp_CDeformableModelInstance_FUN_005968b0(this_ptr);
      g_CurrentDebugLine = 0x1b7e;
      g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
      if (this_ptr != (CDeformableModelInstance *)0x0) {
        (*(code *)((this_ptr->motion_controller).vtable)->dtor)();
      }
    }
  } while (iVar4 != 0x1b);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  pFVar2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("skeledit.ini",(char *)0x0,"wt","..\\core\\skeledit.cpp"
                      ,0x144);
  if (pFVar2 != (FILE *)0x0) {
    crt_stdio_c_fprintf_FUN_005fe6d0(pFVar2,"// version\n");
    crt_stdio_c_fprintf_FUN_005fe6d0(pFVar2,"%d\n",1);
    crt_stdio_c_fprintf_FUN_005fe6d0(pFVar2,"// lastPOSimported\n");
    crt_stdio_c_fprintf_FUN_005fe6d0(pFVar2,"\"%s\"\n",&DAT_03670848);
    crt_stdio_c_fprintf_FUN_005fe6d0(pFVar2,"// lastMOTimported\n");
    crt_stdio_c_fprintf_FUN_005fe6d0(pFVar2,"\"%s\"\n",&DAT_03670950);
    crt_stdio_c_fprintf_FUN_005fe6d0(pFVar2,"// lastTestSkeletonDir\n");
    crt_stdio_c_fprintf_FUN_005fe6d0(pFVar2,"\"%s\"\n",&DAT_03670a58);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\skeledit.cpp",0x154);
    return;
  }
  return;
}


// Assembly code:
// 00598fc0: PUSH 0x134
//   Label: core_skeledit.cpp_viewModel_FUN_00598fc0
// 00598fc5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 00598fca: PUSH EBX
// 00598fcb: PUSH ESI
// 00598fcc: PUSH EDI
// 00598fcd: PUSH EBP
// 00598fce: SUB ESP,0x108
// 00598fd4: PUSH 0x124
// 00598fd9: PUSH 0x649d0a
//   XREF to: 00649d0a (DATA)
// 00598fde: PUSH 0x649d1f
//   XREF to: 00649d1f (DATA)
// 00598fe3: PUSH 0x0
// 00598fe5: PUSH 0x681868
//   XREF to: 00681868 (DATA)
// 00598fea: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00598fef: ADD ESP,0x14
// 00598ff2: MOV EDI,EAX
// 00598ff4: TEST EAX,EAX
// 00598ff6: JZ 0x00599119
//   XREF to: 00599119 (CONDITIONAL_JUMP)
// 00598ffc: MOV EBX,0x1
// 00599001: MOV ESI,EAX
// 00599003: PUSH ESI
//   Label: LAB_00599003
// 00599004: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00599009: ADD ESP,0x4
// 0059900c: TEST EAX,EAX
// 0059900e: JL 0x0059901a
//   XREF to: 0059901a (CONDITIONAL_JUMP)
// 00599010: CMP EAX,0xa
// 00599013: JNZ 0x00599003
//   XREF to: 00599003 (CONDITIONAL_JUMP)
// 00599015: DEC EBX
// 00599016: TEST EBX,EBX
// 00599018: JG 0x00599003
//   XREF to: 00599003 (CONDITIONAL_JUMP)
// 0059901a: LEA EAX,[ESP + 0x104]
//   Label: LAB_0059901a
//   XREF to: Stack[-0x14] (DATA)
// 00599021: PUSH EAX
// 00599022: PUSH 0x649d22
//   XREF to: 00649d22 (DATA)
// 00599027: PUSH EDI
// 00599028: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0059902d: ADD ESP,0xc
// 00599030: MOV EDX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x14] (READ)
// 00599037: CMP EDX,0x1
// 0059903a: JNZ 0x0059928f
//   XREF to: 0059928f (CONDITIONAL_JUMP)
// 00599040: MOV EBX,EDX
// 00599042: MOV ESI,EDI
// 00599044: PUSH ESI
//   Label: LAB_00599044
// 00599045: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0059904a: ADD ESP,0x4
// 0059904d: TEST EAX,EAX
// 0059904f: JL 0x0059905b
//   XREF to: 0059905b (CONDITIONAL_JUMP)
// 00599051: CMP EAX,0xa
// 00599054: JNZ 0x00599044
//   XREF to: 00599044 (CONDITIONAL_JUMP)
// 00599056: DEC EBX
// 00599057: TEST EBX,EBX
// 00599059: JG 0x00599044
//   XREF to: 00599044 (CONDITIONAL_JUMP)
// 0059905b: MOV EBX,0x3670848
//   Label: LAB_0059905b
//   XREF to: 03670848 (PARAM)
// 00599060: XOR AH,AH
// 00599062: MOV ESI,EDI
// 00599064: MOV byte ptr [0x03670848],AH
//   XREF to: 03670848 (WRITE)
// 0059906a: PUSH ESI
//   Label: LAB_0059906a
// 0059906b: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00599070: ADD ESP,0x4
// 00599073: TEST EAX,EAX
// 00599075: JL 0x00599080
//   XREF to: 00599080 (CONDITIONAL_JUMP)
// 00599077: CMP EAX,0xa
// 0059907a: JNZ 0x005992cd
//   XREF to: 005992cd (CONDITIONAL_JUMP)
// 00599080: MOV EBX,0x1
//   Label: LAB_00599080
// 00599085: MOV ESI,EDI
// 00599087: PUSH ESI
//   Label: LAB_00599087
// 00599088: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0059908d: ADD ESP,0x4
// 00599090: TEST EAX,EAX
// 00599092: JL 0x0059909e
//   XREF to: 0059909e (CONDITIONAL_JUMP)
// 00599094: CMP EAX,0xa
// 00599097: JNZ 0x00599087
//   XREF to: 00599087 (CONDITIONAL_JUMP)
// 00599099: DEC EBX
// 0059909a: TEST EBX,EBX
// 0059909c: JG 0x00599087
//   XREF to: 00599087 (CONDITIONAL_JUMP)
// 0059909e: MOV EBX,0x3670950
//   Label: LAB_0059909e
//   XREF to: 03670950 (PARAM)
// 005990a3: XOR DL,DL
// 005990a5: MOV ESI,EDI
// 005990a7: MOV byte ptr [0x03670950],DL
//   XREF to: 03670950 (WRITE)
// 005990ad: PUSH ESI
//   Label: LAB_005990ad
// 005990ae: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005990b3: ADD ESP,0x4
// 005990b6: TEST EAX,EAX
// 005990b8: JL 0x005990c3
//   XREF to: 005990c3 (CONDITIONAL_JUMP)
// 005990ba: CMP EAX,0xa
// 005990bd: JNZ 0x00599325
//   XREF to: 00599325 (CONDITIONAL_JUMP)
// 005990c3: MOV EBX,0x1
//   Label: LAB_005990c3
// 005990c8: MOV ESI,EDI
// 005990ca: PUSH ESI
//   Label: LAB_005990ca
// 005990cb: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005990d0: ADD ESP,0x4
// 005990d3: TEST EAX,EAX
// 005990d5: JL 0x005990e1
//   XREF to: 005990e1 (CONDITIONAL_JUMP)
// 005990d7: CMP EAX,0xa
// 005990da: JNZ 0x005990ca
//   XREF to: 005990ca (CONDITIONAL_JUMP)
// 005990dc: DEC EBX
// 005990dd: TEST EBX,EBX
// 005990df: JG 0x005990ca
//   XREF to: 005990ca (CONDITIONAL_JUMP)
// 005990e1: MOV EBX,0x3670a58
//   Label: LAB_005990e1
//   XREF to: 03670a58 (PARAM)
// 005990e6: XOR DH,DH
// 005990e8: MOV ESI,EDI
// 005990ea: MOV byte ptr [0x03670a58],DH
//   XREF to: 03670a58 (WRITE)
// 005990f0: PUSH ESI
//   Label: LAB_005990f0
// 005990f1: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005990f6: ADD ESP,0x4
// 005990f9: TEST EAX,EAX
// 005990fb: JL 0x00599106
//   XREF to: 00599106 (CONDITIONAL_JUMP)
// 005990fd: CMP EAX,0xa
// 00599100: JNZ 0x0059937d
//   XREF to: 0059937d (CONDITIONAL_JUMP)
// 00599106: PUSH 0x13f
//   Label: LAB_00599106
// 0059910b: PUSH 0x649d51
//   XREF to: 00649d51 (DATA)
// 00599110: PUSH EDI
// 00599111: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00599116: ADD ESP,0xc
// 00599119: MOV ESI,0x64e12c
//   Label: LAB_00599119
//   XREF to: 0064e12c (DATA)
// 0059911e: MOV EDI,0x67d3a0
//   XREF to: 0067d3a0 (DATA)
// 00599123: PUSH EDI
//   XREF to: 0067d3a0 (DATA)
// 00599124: MOV AL,byte ptr [ESI]
//   Label: LAB_00599124
//   XREF to: 0064e12c (READ)
//   XREF to: 0064e12e (READ)
// 00599126: MOV byte ptr [EDI],AL
//   XREF to: 0067d3a0 (WRITE)
//   XREF to: 0067d3a2 (WRITE)
// 00599128: CMP AL,0x0
// 0059912a: JZ 0x0059913c
//   XREF to: 0059913c (CONDITIONAL_JUMP)
// 0059912c: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0064e12d (READ)
//   XREF to: 0064e12f (READ)
// 0059912f: ADD ESI,0x2
// 00599132: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 0067d3a1 (WRITE)
//   XREF to: 0067d3a3 (WRITE)
// 00599135: ADD EDI,0x2
// 00599138: CMP AL,0x0
// 0059913a: JNZ 0x00599124
//   XREF to: 00599124 (CONDITIONAL_JUMP)
// 0059913c: POP EDI
//   Label: LAB_0059913c
// 0059913d: XOR EBP,EBP
// 0059913f: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_0059913f
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00599144: PUSH EBP
// 00599145: PUSH EBP
// 00599146: PUSH 0x64e137
//   XREF to: 0064e137 (DATA)
// 0059914b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00599150: ADD ESP,0xc
// 00599153: PUSH 0x2c
// 00599155: PUSH EBP
// 00599156: PUSH 0x64e15f
//   XREF to: 0064e15f (DATA)
// 0059915b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00599160: ADD ESP,0xc
// 00599163: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00599168: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0059916d: CALL core_skeleton.cpp_freeAllSkeletons_FUN_005a1ea0
//   XREF to: 005a1ea0 (UNCONDITIONAL_CALL)
// 00599172: CALL core_skeleton.cpp_freeAllModels_FUN_005a1dc0
//   XREF to: 005a1dc0 (UNCONDITIONAL_CALL)
// 00599177: MOV EBX,dword ptr [0x0067cf44]
//   XREF to: 02dcd7d4 (PARAM)
//   XREF to: 0067cf44 (READ)
// 0059917d: PUSH EBX
//   XREF to: 02dcd7d4 (DATA)
// 0059917e: CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
//   XREF to: 00502470 (UNCONDITIONAL_CALL)
// 00599183: ADD ESP,0x4
// 00599186: MOV ESI,EAX
// 00599188: CMP EAX,0x33
// 0059918b: JNZ 0x0059924e
//   XREF to: 0059924e (CONDITIONAL_JUMP)
// 00599191: PUSH EBP
// 00599192: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x118] (DATA)
// 00599196: PUSH EAX
// 00599197: PUSH 0x64e186
//   XREF to: 0064e186 (DATA)
// 0059919c: PUSH 0x64e18c
//   XREF to: 0064e18c (DATA)
// 005991a1: PUSH 0x64e193
//   XREF to: 0064e193 (DATA)
// 005991a6: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005991ac: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 005991ad: CALL shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
//   XREF to: 0049f270 (UNCONDITIONAL_CALL)
// 005991b2: ADD ESP,0x18
// 005991b5: TEST EAX,EAX
// 005991b7: JZ 0x0059924e
//   XREF to: 0059924e (CONDITIONAL_JUMP)
// 005991bd: PUSH 0x1b79
// 005991c2: PUSH 0x64e0d2
//   XREF to: 0064e0d2 (DATA)
// 005991c7: PUSH 0x22b4
// 005991cc: LEA EDI,[ESP + 0xc]
//   XREF to: Stack[-0x118] (DATA)
// 005991d0: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005991d5: ADD ESP,0xc
// 005991d8: TEST EAX,EAX
// 005991da: JZ 0x005991e5
//   XREF to: 005991e5 (CONDITIONAL_JUMP)
// 005991dc: PUSH EAX
// 005991dd: CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
//   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)
// 005991e2: ADD ESP,0x4
// 005991e5: MOV EBX,EAX
//   Label: LAB_005991e5
// 005991e7: TEST EAX,EAX
// 005991e9: JNZ 0x0059920d
//   XREF to: 0059920d (CONDITIONAL_JUMP)
// 005991eb: MOV EAX,0x64e0e7
//   XREF to: 0064e0e7 (PARAM)
// 005991f0: MOV EDX,0x1b7a
// 005991f5: PUSH 0x64e0fc
//   XREF to: 0064e0fc (DATA)
// 005991fa: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005991ff: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00599205: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059920a: ADD ESP,0x4
// 0059920d: PUSH EDI
//   Label: LAB_0059920d
// 0059920e: PUSH EBX
// 0059920f: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 00599214: ADD ESP,0x8
// 00599217: PUSH EBX
// 00599218: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 0059921d: ADD ESP,0x4
// 00599220: PUSH EBX
// 00599221: MOV EDI,0x1b7e
// 00599226: CALL core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0
//   XREF to: 005968b0 (UNCONDITIONAL_CALL)
// 0059922b: MOV ECX,0x64e117
//   XREF to: 0064e117 (PARAM)
// 00599230: ADD ESP,0x4
// 00599233: MOV dword ptr [0x02f0d944],EDI
//   XREF to: 02f0d944 (WRITE)
// 00599239: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 0059923f: TEST EBX,EBX
// 00599241: JZ 0x0059924e
//   XREF to: 0059924e (CONDITIONAL_JUMP)
// 00599243: PUSH 0x2
// 00599245: MOV EAX,dword ptr [EBX + 0x50]
// 00599248: PUSH EBX
// 00599249: CALL dword ptr [EAX]
// 0059924b: ADD ESP,0x8
// 0059924e: CMP ESI,0x1b
//   Label: LAB_0059924e
// 00599251: JNZ 0x0059913f
//   XREF to: 0059913f (CONDITIONAL_JUMP)
// 00599257: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0059925c: PUSH 0x144
// 00599261: PUSH 0x649d66
//   XREF to: 00649d66 (DATA)
// 00599266: PUSH 0x649d7b
//   XREF to: 00649d7b (DATA)
// 0059926b: PUSH 0x0
// 0059926d: PUSH 0x681868
//   XREF to: 00681868 (DATA)
// 00599272: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00599277: MOV EBX,EAX
// 00599279: ADD ESP,0x14
// 0059927c: TEST EAX,EAX
// 0059927e: JNZ 0x005993d5
//   XREF to: 005993d5 (CONDITIONAL_JUMP)
// 00599284: ADD ESP,0x108
// 0059928a: POP EBP
// 0059928b: POP EDI
// 0059928c: POP ESI
// 0059928d: POP EBX
// 0059928e: RET
// 0059928f: PUSH 0x12d
//   Label: LAB_0059928f
// 00599294: PUSH 0x649d26
//   XREF to: 00649d26 (DATA)
// 00599299: PUSH EDI
// 0059929a: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0059929f: ADD ESP,0xc
// 005992a2: PUSH 0x681868
//   XREF to: 00681868 (DATA)
// 005992a7: PUSH 0x649d3b
//   XREF to: 00649d3b (DATA)
// 005992ac: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005992b2: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 005992b3: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 005992b8: ADD ESP,0xc
// 005992bb: PUSH 0x681868
//   XREF to: 00681868 (DATA)
// 005992c0: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 005992c5: ADD ESP,0x4
// 005992c8: JMP 0x00599119
//   XREF to: 00599119 (UNCONDITIONAL_JUMP)
// 005992cd: CMP EAX,0x22
//   Label: LAB_005992cd
// 005992d0: JNZ 0x0059906a
//   XREF to: 0059906a (CONDITIONAL_JUMP)
// 005992d6: PUSH ESI
//   Label: LAB_005992d6
// 005992d7: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005992dc: ADD ESP,0x4
// 005992df: MOV EDX,EAX
// 005992e1: TEST EAX,EAX
// 005992e3: JL 0x00599080
//   XREF to: 00599080 (CONDITIONAL_JUMP)
// 005992e9: CMP EAX,0xa
// 005992ec: JZ 0x00599080
//   XREF to: 00599080 (CONDITIONAL_JUMP)
// 005992f2: CMP EAX,0x22
// 005992f5: JNZ 0x0059931c
//   XREF to: 0059931c (CONDITIONAL_JUMP)
// 005992f7: MOV EBX,0x1
// 005992fc: PUSH ESI
//   Label: LAB_005992fc
// 005992fd: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00599302: ADD ESP,0x4
// 00599305: TEST EAX,EAX
// 00599307: JL 0x00599080
//   XREF to: 00599080 (CONDITIONAL_JUMP)
// 0059930d: CMP EAX,0xa
// 00599310: JNZ 0x005992fc
//   XREF to: 005992fc (CONDITIONAL_JUMP)
// 00599312: DEC EBX
// 00599313: TEST EBX,EBX
// 00599315: JG 0x005992fc
//   XREF to: 005992fc (CONDITIONAL_JUMP)
// 00599317: JMP 0x00599080
//   XREF to: 00599080 (UNCONDITIONAL_JUMP)
// 0059931c: INC EBX
//   Label: LAB_0059931c
//   XREF to: 03670849 (PARAM)
// 0059931d: MOV byte ptr [EBX + -0x1],DL
//   XREF to: 03670848 (WRITE)
// 00599320: MOV byte ptr [EBX],0x0
//   XREF to: 03670849 (WRITE)
// 00599323: JMP 0x005992d6
//   XREF to: 005992d6 (UNCONDITIONAL_JUMP)
// 00599325: CMP EAX,0x22
//   Label: LAB_00599325
// 00599328: JNZ 0x005990ad
//   XREF to: 005990ad (CONDITIONAL_JUMP)
// 0059932e: PUSH ESI
//   Label: LAB_0059932e
// 0059932f: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00599334: ADD ESP,0x4
// 00599337: MOV EDX,EAX
// 00599339: TEST EAX,EAX
// 0059933b: JL 0x005990c3
//   XREF to: 005990c3 (CONDITIONAL_JUMP)
// 00599341: CMP EAX,0xa
// 00599344: JZ 0x005990c3
//   XREF to: 005990c3 (CONDITIONAL_JUMP)
// 0059934a: CMP EAX,0x22
// 0059934d: JNZ 0x00599374
//   XREF to: 00599374 (CONDITIONAL_JUMP)
// 0059934f: MOV EBX,0x1
// 00599354: PUSH ESI
//   Label: LAB_00599354
// 00599355: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0059935a: ADD ESP,0x4
// 0059935d: TEST EAX,EAX
// 0059935f: JL 0x005990c3
//   XREF to: 005990c3 (CONDITIONAL_JUMP)
// 00599365: CMP EAX,0xa
// 00599368: JNZ 0x00599354
//   XREF to: 00599354 (CONDITIONAL_JUMP)
// 0059936a: DEC EBX
// 0059936b: TEST EBX,EBX
// 0059936d: JG 0x00599354
//   XREF to: 00599354 (CONDITIONAL_JUMP)
// 0059936f: JMP 0x005990c3
//   XREF to: 005990c3 (UNCONDITIONAL_JUMP)
// 00599374: INC EBX
//   Label: LAB_00599374
//   XREF to: 03670951 (PARAM)
// 00599375: MOV byte ptr [EBX + -0x1],DL
//   XREF to: 03670950 (WRITE)
// 00599378: MOV byte ptr [EBX],0x0
//   XREF to: 03670951 (WRITE)
// 0059937b: JMP 0x0059932e
//   XREF to: 0059932e (UNCONDITIONAL_JUMP)
// 0059937d: CMP EAX,0x22
//   Label: LAB_0059937d
// 00599380: JNZ 0x005990f0
//   XREF to: 005990f0 (CONDITIONAL_JUMP)
// 00599386: PUSH ESI
//   Label: LAB_00599386
// 00599387: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0059938c: ADD ESP,0x4
// 0059938f: MOV EDX,EAX
// 00599391: TEST EAX,EAX
// 00599393: JL 0x00599106
//   XREF to: 00599106 (CONDITIONAL_JUMP)
// 00599399: CMP EAX,0xa
// 0059939c: JZ 0x00599106
//   XREF to: 00599106 (CONDITIONAL_JUMP)
// 005993a2: CMP EAX,0x22
// 005993a5: JNZ 0x005993cc
//   XREF to: 005993cc (CONDITIONAL_JUMP)
// 005993a7: MOV EBX,0x1
// 005993ac: PUSH ESI
//   Label: LAB_005993ac
// 005993ad: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005993b2: ADD ESP,0x4
// 005993b5: TEST EAX,EAX
// 005993b7: JL 0x00599106
//   XREF to: 00599106 (CONDITIONAL_JUMP)
// 005993bd: CMP EAX,0xa
// 005993c0: JNZ 0x005993ac
//   XREF to: 005993ac (CONDITIONAL_JUMP)
// 005993c2: DEC EBX
// 005993c3: TEST EBX,EBX
// 005993c5: JG 0x005993ac
//   XREF to: 005993ac (CONDITIONAL_JUMP)
// 005993c7: JMP 0x00599106
//   XREF to: 00599106 (UNCONDITIONAL_JUMP)
// 005993cc: INC EBX
//   Label: LAB_005993cc
//   XREF to: 03670a59 (PARAM)
// 005993cd: MOV byte ptr [EBX + -0x1],DL
//   XREF to: 03670a58 (WRITE)
// 005993d0: MOV byte ptr [EBX],0x0
//   XREF to: 03670a59 (WRITE)
// 005993d3: JMP 0x00599386
//   XREF to: 00599386 (UNCONDITIONAL_JUMP)
// 005993d5: PUSH 0x649d7e
//   Label: LAB_005993d5
//   XREF to: 00649d7e (DATA)
// 005993da: PUSH EAX
// 005993db: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005993e0: ADD ESP,0x8
// 005993e3: PUSH 0x1
// 005993e5: PUSH 0x649d8a
//   XREF to: 00649d8a (DATA)
// 005993ea: PUSH EBX
// 005993eb: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005993f0: ADD ESP,0xc
// 005993f3: PUSH 0x649d8e
//   XREF to: 00649d8e (DATA)
// 005993f8: PUSH EBX
// 005993f9: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005993fe: ADD ESP,0x8
// 00599401: PUSH 0x3670848
//   XREF to: 03670848 (DATA)
// 00599406: PUSH 0x649da2
//   XREF to: 00649da2 (DATA)
// 0059940b: PUSH EBX
// 0059940c: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00599411: ADD ESP,0xc
// 00599414: PUSH 0x649da8
//   XREF to: 00649da8 (DATA)
// 00599419: PUSH EBX
// 0059941a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0059941f: ADD ESP,0x8
// 00599422: PUSH 0x3670950
//   XREF to: 03670950 (DATA)
// 00599427: PUSH 0x649dbc
//   XREF to: 00649dbc (DATA)
// 0059942c: PUSH EBX
// 0059942d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00599432: ADD ESP,0xc
// 00599435: PUSH 0x649dc2
//   XREF to: 00649dc2 (DATA)
// 0059943a: PUSH EBX
// 0059943b: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00599440: ADD ESP,0x8
// 00599443: PUSH 0x3670a58
//   XREF to: 03670a58 (DATA)
// 00599448: PUSH 0x649dda
//   XREF to: 00649dda (DATA)
// 0059944d: PUSH EBX
// 0059944e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00599453: ADD ESP,0xc
// 00599456: PUSH 0x154
// 0059945b: PUSH 0x649de0
//   XREF to: 00649de0 (DATA)
// 00599460: PUSH EBX
// 00599461: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00599466: ADD ESP,0xc
// 00599469: ADD ESP,0x108
// 0059946f: POP EBP
// 00599470: POP EDI
// 00599471: POP ESI
// 00599472: POP EBX
// 00599473: RET
