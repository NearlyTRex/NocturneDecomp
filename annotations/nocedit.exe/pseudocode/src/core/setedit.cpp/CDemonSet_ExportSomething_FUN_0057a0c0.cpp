// Name: core_setedit.cpp_CDemonSet_ExportSomething_FUN_0057a0c0
// Address: 0057a0c0
// Address Range: [[0057a0c0, 0057a26f]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_ExportSomething_FUN_0057a0c0(CDemonSet * this_ptr)
// Cross-references:
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584c2a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_lc_0064730f
//   TerminatedCString s_Exporting_lights_and_cam_00647312
//   TerminatedCString s_wt_00647335
//   TerminatedCString s_models_00647338
//   TerminatedCString s_core_setedit_cpp_0064733f
//   TerminatedCString s_Can_t_create_models_s_00647353
//   TerminatedCString s_version_0064736a
//   TerminatedCString s_s_1_00647376
//   TerminatedCString s_lightCount_cameraCount_00647379
//   TerminatedCString s_d_d_00647394
//   TerminatedCString s_light_list_0064739b
//   TerminatedCString s_camera_list_006473aa
//   TerminatedCString s_core_setedit_cpp_006473ba
//   TerminatedCString s_Exported_s_OK_006473ce
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_setutil.cpp_C3DSCamera_exportS3D_FUN_00586190
//   core_setutil.cpp_C3DSLight_exportS3D_FUN_00587850
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_splitPath_FUN_00481f20
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_ExportSomething_FUN_0057a0c0(CDemonSet *this_ptr)

{
  FILE *file;
  int iVar1;
  C3DSCamera *this_ptr_00;
  BADSPACEBASE *in_ESP;
  C3DSLight *this_ptr_01;
  char local_110 [4];
  char acStack_10c [252];
  
  engine_dosio_c_splitPath_FUN_00481f20
            (this_ptr->geometry_filename,(char *)0x0,(char *)0x0,local_110,(char *)0x0);
  engine_dosio_c_makePath_FUN_00481f50
            (&stack0xfffffdf0,(char *)0x0,(char *)0x0,acStack_10c,"lc");
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Exporting lights and cameras to %s");
  file = engine_dosio_c_getFile_FUN_00481a50("models",&stack0xfffffdf8,"wt");
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x659;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create models\\%s");
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"1\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// lightCount,cameraCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d,%d\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// light list\n");
  if (0 < this_ptr->light_count) {
    this_ptr_01 = this_ptr->lights;
    do {
      iVar1 = iVar1 + 1;
      core_setutil_cpp_C3DSLight_exportS3D_FUN_00587850(this_ptr_01,file);
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar1 < this_ptr->light_count);
  }
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// camera list\n");
  if (0 < this_ptr->camera_count) {
    this_ptr_00 = this_ptr->cameras;
    do {
      iVar1 = iVar1 + 1;
      core_setutil_cpp_C3DSCamera_exportS3D_FUN_00586190(this_ptr_00,file);
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar1 < this_ptr->camera_count);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\setedit.cpp",0x672);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Exported %s OK.");
  return;
}


// Assembly code:
// 0057a0c0: PUSH EBX
//   Label: core_setedit.cpp_CDemonSet_ExportSomething_FUN_0057a0c0
// 0057a0c1: PUSH ESI
// 0057a0c2: PUSH EDI
// 0057a0c3: PUSH EBP
// 0057a0c4: SUB ESP,0x204
// 0057a0ca: MOV EBP,dword ptr [ESP + 0x218]
//   XREF to: Stack[0x4] (READ)
// 0057a0d1: PUSH 0x0
// 0057a0d3: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x110] (DATA)
// 0057a0da: PUSH EAX
// 0057a0db: PUSH 0x0
// 0057a0dd: PUSH 0x0
// 0057a0df: LEA EAX,[EBP + 0x14d0f0]
// 0057a0e5: PUSH EAX
// 0057a0e6: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 0057a0eb: ADD ESP,0x14
// 0057a0ee: PUSH 0x64730f
//   XREF to: 0064730f (DATA)
// 0057a0f3: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x110] (DATA)
// 0057a0fa: PUSH EAX
// 0057a0fb: PUSH 0x0
// 0057a0fd: PUSH 0x0
// 0057a0ff: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x214] (DATA)
// 0057a103: PUSH EAX
// 0057a104: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 0057a109: ADD ESP,0x14
// 0057a10c: MOV EAX,ESP
// 0057a10e: PUSH EAX
// 0057a10f: PUSH 0x647312
//   XREF to: 00647312 (DATA)
// 0057a114: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057a11a: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0057a11b: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0057a120: ADD ESP,0xc
// 0057a123: PUSH 0x647335
//   XREF to: 00647335 (DATA)
// 0057a128: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x214] (DATA)
// 0057a12c: PUSH EAX
// 0057a12d: PUSH 0x647338
//   XREF to: 00647338 (DATA)
// 0057a132: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0057a137: ADD ESP,0xc
// 0057a13a: MOV EDI,EAX
// 0057a13c: TEST EAX,EAX
// 0057a13e: JZ 0x0057a245
//   XREF to: 0057a245 (CONDITIONAL_JUMP)
// 0057a144: PUSH 0x64736a
//   Label: LAB_0057a144
//   XREF to: 0064736a (DATA)
// 0057a149: PUSH EDI
// 0057a14a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a14f: ADD ESP,0x8
// 0057a152: PUSH 0x647376
//   XREF to: 00647376 (DATA)
// 0057a157: PUSH EDI
// 0057a158: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a15d: ADD ESP,0x8
// 0057a160: PUSH 0x647379
//   XREF to: 00647379 (DATA)
// 0057a165: PUSH EDI
// 0057a166: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a16b: ADD ESP,0x8
// 0057a16e: MOV ESI,dword ptr [EBP]
// 0057a171: PUSH ESI
// 0057a172: MOV EAX,dword ptr [EBP + 0x19a2c]
// 0057a178: PUSH EAX
// 0057a179: PUSH 0x647394
//   XREF to: 00647394 (DATA)
// 0057a17e: PUSH EDI
// 0057a17f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a184: ADD ESP,0x10
// 0057a187: PUSH 0x64739b
//   XREF to: 0064739b (DATA)
// 0057a18c: PUSH EDI
// 0057a18d: XOR EBX,EBX
// 0057a18f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a194: MOV EDX,dword ptr [EBP + 0x19a2c]
// 0057a19a: ADD ESP,0x8
// 0057a19d: TEST EDX,EDX
// 0057a19f: JLE 0x0057a1d0
//   XREF to: 0057a1d0 (CONDITIONAL_JUMP)
// 0057a1a1: LEA ESI,[EBP + 0x19a30]
// 0057a1a7: PUSH EDI
//   Label: LAB_0057a1a7
// 0057a1a8: PUSH ESI
// 0057a1a9: INC EBX
// 0057a1aa: CALL core_setutil.cpp_C3DSLight_exportS3D_FUN_00587850
//   XREF to: 00587850 (UNCONDITIONAL_CALL)
// 0057a1af: ADD ESP,0x8
// 0057a1b2: MOV ECX,dword ptr [EBP + 0x19a2c]
// 0057a1b8: ADD ESI,0x1898
// 0057a1be: CMP EBX,ECX
// 0057a1c0: JL 0x0057a1a7
//   XREF to: 0057a1a7 (CONDITIONAL_JUMP)
// 0057a1c2: LEA EAX,[EAX]
// 0057a1c8: LEA EDX,[EDX]
// 0057a1ce: MOV EAX,EAX
// 0057a1d0: PUSH 0x6473aa
//   Label: LAB_0057a1d0
//   XREF to: 006473aa (DATA)
// 0057a1d5: PUSH EDI
// 0057a1d6: XOR ESI,ESI
// 0057a1d8: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057a1dd: MOV EBX,dword ptr [EBP]
// 0057a1e0: ADD ESP,0x8
// 0057a1e3: TEST EBX,EBX
// 0057a1e5: JLE 0x0057a210
//   XREF to: 0057a210 (CONDITIONAL_JUMP)
// 0057a1e7: LEA EBX,[EBP + 0x4]
// 0057a1ea: PUSH EDI
//   Label: LAB_0057a1ea
// 0057a1eb: PUSH EBX
// 0057a1ec: INC ESI
// 0057a1ed: CALL core_setutil.cpp_C3DSCamera_exportS3D_FUN_00586190
//   XREF to: 00586190 (UNCONDITIONAL_CALL)
// 0057a1f2: ADD ESP,0x8
// 0057a1f5: MOV EAX,dword ptr [EBP]
// 0057a1f8: ADD EBX,0x1a4
// 0057a1fe: CMP ESI,EAX
// 0057a200: JL 0x0057a1ea
//   XREF to: 0057a1ea (CONDITIONAL_JUMP)
// 0057a202: LEA EAX,[EAX]
// 0057a208: LEA EDX,[EDX]
// 0057a20e: MOV EAX,EAX
// 0057a210: PUSH 0x672
//   Label: LAB_0057a210
// 0057a215: PUSH 0x6473ba
//   XREF to: 006473ba (DATA)
// 0057a21a: PUSH EDI
// 0057a21b: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0057a220: ADD ESP,0xc
// 0057a223: MOV EAX,ESP
// 0057a225: PUSH EAX
// 0057a226: PUSH 0x6473ce
//   XREF to: 006473ce (DATA)
// 0057a22b: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057a231: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 0057a232: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0057a237: ADD ESP,0xc
// 0057a23a: ADD ESP,0x204
// 0057a240: POP EBP
// 0057a241: POP EDI
// 0057a242: POP ESI
// 0057a243: POP EBX
// 0057a244: RET
// 0057a245: MOV EAX,ESP
//   Label: LAB_0057a245
// 0057a247: PUSH EAX
// 0057a248: MOV ECX,0x64733f
//   XREF to: 0064733f (PARAM)
// 0057a24d: MOV EBX,0x659
// 0057a252: PUSH 0x647353
//   XREF to: 00647353 (DATA)
// 0057a257: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0057a25d: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0057a263: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057a268: ADD ESP,0x8
// 0057a26b: JMP 0x0057a144
//   XREF to: 0057a144 (UNCONDITIONAL_JUMP)
