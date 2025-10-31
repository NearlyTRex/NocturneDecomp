// Name: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110
// Address: 00477110
// Address Range: [[00477110, 0047768b]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110(CKeyFramedModel * this_ptr, FILE * file)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0 (00476db0) at 00476e79 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_0061f3e7
//   TerminatedCString s_core_dmodel_cpp_0061f3eb
//   TerminatedCString s_KFM_file_is_invalid_vers_0061f3fe
//   TerminatedCString s_core_dmodel_cpp_0061f41d
//   TerminatedCString s_KFM_file_is_version_d_th_0061f430
//   TerminatedCString s_d_d_d_d_d_0061f473
//   TerminatedCString s_d_0061f483
//   TerminatedCString s_d_0061f487
//   TerminatedCString s_d_0061f48b
//   TerminatedCString s_d_0061f48f
//   TerminatedCString s_d_d_d_0061f493
//   TerminatedCString s_d_d_0061f49d
//   TerminatedCString s_d_d_d_0061f4a3
//   TerminatedCString s_anon_0061f4ae
//   TerminatedCString s_core_dmodel_cpp_0061f4b0
//   TerminatedCString s_core_dmodel_cpp_0061f4c3
//   TerminatedCString s_Out_of_memory_for_envMap_0061f4d6
//   TerminatedCString s_d_0061f4f7
//   TerminatedCString s_anon_0061f4fb
//   TerminatedCString s_d_d_0061f502
//   TerminatedCString s_core_dmodel_cpp_0061f509
//   TerminatedCString s_Error_reading_KFM_model_0061f51c
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0
//   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004775bb) */
/* WARNING: Removing unreachable block (ram,0x00477650) */
/* WARNING: Removing unreachable block (ram,0x004775e6) */
/* WARNING: Removing unreachable block (ram,0x004775ed) */
/* WARNING: Removing unreachable block (ram,0x004775fa) */
/* WARNING: Removing unreachable block (ram,0x004775ff) */
/* WARNING: Removing unreachable block (ram,0x00477604) */
/* WARNING: Removing unreachable block (ram,0x00477618) */
/* WARNING: Removing unreachable block (ram,0x0047764b) */

void __cdecl
core_dmodel_cpp_CKeyFramedModel_readTextModel_FUN_00477110(CKeyFramedModel *this_ptr,FILE *file)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CKeyFramedModel *in_stack_00000018;
  CKeyFramedModel *in_stack_00000024;
  int in_stack_00000028;
  undefined4 uVar3;
  int in_stack_ffffffc4;
  int in_stack_ffffffc8;
  int in_stack_ffffffd4;
  int in_stack_ffffffd8;
  int in_stack_ffffffdc;
  int local_20;
  int local_1c;
  
  iVar2 = 1;
  uVar3 = 0xffffffff;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n",&stack0xffffffc0,uVar3);
  if (in_stack_ffffffc4 < 5) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x128;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("KFM file is invalid version %d",in_stack_ffffffc4);
  }
  if (8 < in_stack_ffffffc8) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 299;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("KFM file is version %d, this .exe can only handle up to version %d",in_stack_ffffffc8);
  }
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file,"%d,%d,%d,%d,%d\n",&stack0xffffffd0,&stack0xffffffd4,&stack0xffffffd8);
  core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0
            (in_stack_00000018,in_stack_ffffffd4,in_stack_ffffffd8,in_stack_ffffffdc,local_20,
             local_1c);
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n");
  if (in_stack_ffffffdc < 6) {
    in_stack_00000024->transparent_pixel_flag = 0;
  }
  else {
    iVar2 = 1;
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
    crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n");
  }
  if (in_stack_ffffffdc < 8) {
    in_stack_00000024->disable_backface_culling = 0;
  }
  else {
    iVar2 = 1;
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
    crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n");
  }
  if (6 < in_stack_ffffffdc) {
    iVar2 = 1;
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
    crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d\n");
  }
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  for (iVar2 = 0; iVar2 < in_stack_00000024->vertex_count * in_stack_00000024->frame_count;
      iVar2 = iVar2 + 1) {
    crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d,%d,%d\n");
  }
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  if (0 < *(int *)(in_stack_00000028 + 0x110)) {
    this_ptr = (CKeyFramedModel *)0x0;
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d,%d");
      iVar2 = 0;
      if (0 < iRam00000004) {
        this_ptr = (CKeyFramedModel *)0x18;
        do {
          crt_stdio_c_fscanf_FUN_005fe7c0(file,", %d,%d,%d");
          iVar2 = iVar2 + 1;
        } while (iVar2 < iRam00000004);
      }
      crt_stdio_c_fscanf_FUN_005fe7c0(file,"\n");
      this_ptr = (CKeyFramedModel *)(this_ptr->model_filename + 1);
    } while ((int)this_ptr < in_stack_00000024->poly_count);
  }
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000028 + 0x120)) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(file,"%[^\n]\n");
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_stack_00000024->texture_count);
  }
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000028 + 0x5584)) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(file,"%d,%d\n");
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_stack_00000024->part_count);
  }
  if ((file->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x197;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading KFM model");
  }
  if (in_stack_ffffffd8 == 0) {
    return;
  }
  core_dmodel_cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830(in_stack_00000024);
  return;
}


// Assembly code:
// 00477110: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110
// 00477111: PUSH ESI
// 00477112: PUSH EDI
// 00477113: PUSH EBP
// 00477114: SUB ESP,0x38
// 00477117: MOV EBP,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 0047711b: MOV EDX,0xffffffff
// 00477120: MOV EBX,0x1
// 00477125: MOV ESI,EBP
// 00477127: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 0047712b: PUSH ESI
//   Label: LAB_0047712b
// 0047712c: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00477131: ADD ESP,0x4
// 00477134: TEST EAX,EAX
// 00477136: JL 0x00477142
//   XREF to: 00477142 (CONDITIONAL_JUMP)
// 00477138: CMP EAX,0xa
// 0047713b: JNZ 0x0047712b
//   XREF to: 0047712b (CONDITIONAL_JUMP)
// 0047713d: DEC EBX
// 0047713e: TEST EBX,EBX
// 00477140: JG 0x0047712b
//   XREF to: 0047712b (CONDITIONAL_JUMP)
// 00477142: LEA EAX,[ESP + 0x4]
//   Label: LAB_00477142
//   XREF to: Stack[-0x44] (DATA)
// 00477146: PUSH EAX
// 00477147: PUSH 0x61f3e7
//   XREF to: 0061f3e7 (DATA)
// 0047714c: PUSH EBP
// 0047714d: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00477152: ADD ESP,0xc
// 00477155: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x44] (READ)
// 00477159: CMP ECX,0x5
// 0047715c: JGE 0x00477182
//   XREF to: 00477182 (CONDITIONAL_JUMP)
// 0047715e: PUSH ECX
// 0047715f: MOV EBX,0x61f3eb
//   XREF to: 0061f3eb (PARAM)
// 00477164: MOV ESI,0x128
// 00477169: PUSH 0x61f3fe
//   XREF to: 0061f3fe (DATA)
// 0047716e: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00477174: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0047717a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0047717f: ADD ESP,0x8
// 00477182: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00477182
//   XREF to: Stack[-0x44] (READ)
// 00477186: CMP EAX,0x8
// 00477189: JG 0x0047734d
//   XREF to: 0047734d (CONDITIONAL_JUMP)
// 0047718f: MOV EBX,0x1
//   Label: LAB_0047718f
// 00477194: MOV ESI,EBP
// 00477196: PUSH ESI
//   Label: LAB_00477196
// 00477197: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0047719c: ADD ESP,0x4
// 0047719f: TEST EAX,EAX
// 004771a1: JL 0x004771ad
//   XREF to: 004771ad (CONDITIONAL_JUMP)
// 004771a3: CMP EAX,0xa
// 004771a6: JNZ 0x00477196
//   XREF to: 00477196 (CONDITIONAL_JUMP)
// 004771a8: DEC EBX
// 004771a9: TEST EBX,EBX
// 004771ab: JG 0x00477196
//   XREF to: 00477196 (CONDITIONAL_JUMP)
// 004771ad: LEA EAX,[ESP + 0x18]
//   Label: LAB_004771ad
//   XREF to: Stack[-0x30] (DATA)
// 004771b1: PUSH EAX
// 004771b2: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x34] (DATA)
// 004771b6: PUSH EAX
// 004771b7: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x38] (DATA)
// 004771bb: PUSH EAX
// 004771bc: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x3c] (DATA)
// 004771c0: PUSH EAX
// 004771c1: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x40] (DATA)
// 004771c5: PUSH EAX
// 004771c6: PUSH 0x61f473
//   XREF to: 0061f473 (DATA)
// 004771cb: PUSH EBP
// 004771cc: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004771d1: ADD ESP,0x1c
// 004771d4: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x30] (READ)
// 004771d8: PUSH ESI
// 004771d9: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x34] (READ)
// 004771dd: PUSH EDI
// 004771de: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x38] (READ)
// 004771e2: PUSH EAX
// 004771e3: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x3c] (READ)
// 004771e7: PUSH EDX
// 004771e8: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (READ)
// 004771ec: PUSH ECX
// 004771ed: MOV EBX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x4] (READ)
// 004771f1: PUSH EBX
// 004771f2: MOV ESI,EBP
// 004771f4: CALL core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0
//   XREF to: 00477bf0 (UNCONDITIONAL_CALL)
// 004771f9: MOV EBX,0x1
// 004771fe: ADD ESP,0x18
// 00477201: PUSH ESI
//   Label: LAB_00477201
// 00477202: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00477207: ADD ESP,0x4
// 0047720a: TEST EAX,EAX
// 0047720c: JL 0x00477218
//   XREF to: 00477218 (CONDITIONAL_JUMP)
// 0047720e: CMP EAX,0xa
// 00477211: JNZ 0x00477201
//   XREF to: 00477201 (CONDITIONAL_JUMP)
// 00477213: DEC EBX
// 00477214: TEST EBX,EBX
// 00477216: JG 0x00477201
//   XREF to: 00477201 (CONDITIONAL_JUMP)
// 00477218: MOV EAX,ESP
//   Label: LAB_00477218
// 0047721a: PUSH EAX
// 0047721b: PUSH 0x61f483
//   XREF to: 0061f483 (DATA)
// 00477220: PUSH EBP
// 00477221: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00477226: ADD ESP,0xc
// 00477229: CMP dword ptr [ESP + 0x4],0x6
//   XREF to: Stack[-0x44] (READ)
// 0047722e: JL 0x00477378
//   XREF to: 00477378 (CONDITIONAL_JUMP)
// 00477234: MOV EBX,0x1
// 00477239: MOV ESI,EBP
// 0047723b: PUSH ESI
//   Label: LAB_0047723b
// 0047723c: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00477241: ADD ESP,0x4
// 00477244: TEST EAX,EAX
// 00477246: JL 0x00477252
//   XREF to: 00477252 (CONDITIONAL_JUMP)
// 00477248: CMP EAX,0xa
// 0047724b: JNZ 0x0047723b
//   XREF to: 0047723b (CONDITIONAL_JUMP)
// 0047724d: DEC EBX
// 0047724e: TEST EBX,EBX
// 00477250: JG 0x0047723b
//   XREF to: 0047723b (CONDITIONAL_JUMP)
// 00477252: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_00477252
//   XREF to: Stack[0x4] (READ)
// 00477256: ADD EAX,0x569c
// 0047725b: PUSH EAX
// 0047725c: PUSH 0x61f487
//   XREF to: 0061f487 (DATA)
// 00477261: PUSH EBP
// 00477262: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00477267: ADD ESP,0xc
// 0047726a: CMP dword ptr [ESP + 0x4],0x8
//   Label: LAB_0047726a
//   XREF to: Stack[-0x44] (READ)
// 0047726f: JL 0x0047738b
//   XREF to: 0047738b (CONDITIONAL_JUMP)
// 00477275: MOV EBX,0x1
// 0047727a: MOV ESI,EBP
// 0047727c: PUSH ESI
//   Label: LAB_0047727c
// 0047727d: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00477282: ADD ESP,0x4
// 00477285: TEST EAX,EAX
// 00477287: JL 0x00477293
//   XREF to: 00477293 (CONDITIONAL_JUMP)
// 00477289: CMP EAX,0xa
// 0047728c: JNZ 0x0047727c
//   XREF to: 0047727c (CONDITIONAL_JUMP)
// 0047728e: DEC EBX
// 0047728f: TEST EBX,EBX
// 00477291: JG 0x0047727c
//   XREF to: 0047727c (CONDITIONAL_JUMP)
// 00477293: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_00477293
//   XREF to: Stack[0x4] (READ)
// 00477297: ADD EAX,0x56a0
// 0047729c: PUSH EAX
// 0047729d: PUSH 0x61f48b
//   XREF to: 0061f48b (DATA)
// 004772a2: PUSH EBP
// 004772a3: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004772a8: ADD ESP,0xc
// 004772ab: XOR EAX,EAX
//   Label: LAB_004772ab
// 004772ad: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x44] (READ)
// 004772b1: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004772b5: CMP EDX,0x7
// 004772b8: JL 0x004772eb
//   XREF to: 004772eb (CONDITIONAL_JUMP)
// 004772ba: MOV EBX,0x1
// 004772bf: MOV ESI,EBP
// 004772c1: PUSH ESI
//   Label: LAB_004772c1
// 004772c2: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004772c7: ADD ESP,0x4
// 004772ca: TEST EAX,EAX
// 004772cc: JL 0x004772d8
//   XREF to: 004772d8 (CONDITIONAL_JUMP)
// 004772ce: CMP EAX,0xa
// 004772d1: JNZ 0x004772c1
//   XREF to: 004772c1 (CONDITIONAL_JUMP)
// 004772d3: DEC EBX
// 004772d4: TEST EBX,EBX
// 004772d6: JG 0x004772c1
//   XREF to: 004772c1 (CONDITIONAL_JUMP)
// 004772d8: LEA EAX,[ESP + 0x1c]
//   Label: LAB_004772d8
//   XREF to: Stack[-0x2c] (DATA)
// 004772dc: PUSH EAX
// 004772dd: PUSH 0x61f48f
//   XREF to: 0061f48f (DATA)
// 004772e2: PUSH EBP
// 004772e3: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004772e8: ADD ESP,0xc
// 004772eb: MOV EBX,0x1
//   Label: LAB_004772eb
// 004772f0: MOV ESI,EBP
// 004772f2: PUSH ESI
//   Label: LAB_004772f2
// 004772f3: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004772f8: ADD ESP,0x4
// 004772fb: TEST EAX,EAX
// 004772fd: JL 0x00477309
//   XREF to: 00477309 (CONDITIONAL_JUMP)
// 004772ff: CMP EAX,0xa
// 00477302: JNZ 0x004772f2
//   XREF to: 004772f2 (CONDITIONAL_JUMP)
// 00477304: DEC EBX
// 00477305: TEST EBX,EBX
// 00477307: JG 0x004772f2
//   XREF to: 004772f2 (CONDITIONAL_JUMP)
// 00477309: XOR ESI,ESI
//   Label: LAB_00477309
// 0047730b: XOR EBX,EBX
// 0047730d: MOV EDI,dword ptr [ESP + 0x4c]
//   Label: LAB_0047730d
//   XREF to: Stack[0x4] (READ)
// 00477311: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 00477315: MOV ECX,dword ptr [EDI + 0x100]
// 0047731b: MOV EAX,dword ptr [EAX + 0x104]
// 00477321: IMUL EAX,ECX
// 00477324: CMP EBX,EAX
// 00477326: JGE 0x0047739e
//   XREF to: 0047739e (CONDITIONAL_JUMP)
// 00477328: MOV EAX,dword ptr [EDI + 0x10c]
// 0047732e: ADD EAX,ESI
// 00477330: LEA EDI,[EAX + 0x8]
// 00477333: PUSH EDI
// 00477334: LEA EDI,[EAX + 0x4]
// 00477337: PUSH EDI
// 00477338: PUSH EAX
// 00477339: PUSH 0x61f493
//   XREF to: 0061f493 (DATA)
// 0047733e: PUSH EBP
// 0047733f: INC EBX
// 00477340: ADD ESI,0xc
// 00477343: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00477348: ADD ESP,0x14
// 0047734b: JMP 0x0047730d
//   XREF to: 0047730d (UNCONDITIONAL_JUMP)
// 0047734d: PUSH 0x8
//   Label: LAB_0047734d
// 0047734f: PUSH EAX
// 00477350: MOV EDX,0x61f41d
//   XREF to: 0061f41d (PARAM)
// 00477355: MOV ECX,0x12b
// 0047735a: PUSH 0x61f430
//   XREF to: 0061f430 (DATA)
// 0047735f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00477365: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0047736b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00477370: ADD ESP,0xc
// 00477373: JMP 0x0047718f
//   XREF to: 0047718f (UNCONDITIONAL_JUMP)
// 00477378: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_00477378
//   XREF to: Stack[0x4] (READ)
// 0047737c: MOV dword ptr [EAX + 0x569c],0x0
// 00477386: JMP 0x0047726a
//   XREF to: 0047726a (UNCONDITIONAL_JUMP)
// 0047738b: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_0047738b
//   XREF to: Stack[0x4] (READ)
// 0047738f: MOV dword ptr [EAX + 0x56a0],0x0
// 00477399: JMP 0x004772ab
//   XREF to: 004772ab (UNCONDITIONAL_JUMP)
// 0047739e: MOV EBX,0x1
//   Label: LAB_0047739e
// 004773a3: MOV EDI,EBP
// 004773a5: PUSH EDI
//   Label: LAB_004773a5
// 004773a6: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004773ab: ADD ESP,0x4
// 004773ae: TEST EAX,EAX
// 004773b0: JL 0x004773bc
//   XREF to: 004773bc (CONDITIONAL_JUMP)
// 004773b2: CMP EAX,0xa
// 004773b5: JNZ 0x004773a5
//   XREF to: 004773a5 (CONDITIONAL_JUMP)
// 004773b7: DEC EBX
// 004773b8: TEST EBX,EBX
// 004773ba: JG 0x004773a5
//   XREF to: 004773a5 (CONDITIONAL_JUMP)
// 004773bc: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_004773bc
//   XREF to: Stack[0x4] (READ)
// 004773c0: XOR EBX,EBX
// 004773c2: MOV ESI,dword ptr [EAX + 0x110]
// 004773c8: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 004773cc: TEST ESI,ESI
// 004773ce: JLE 0x004774a0
//   XREF to: 004774a0 (CONDITIONAL_JUMP)
// 004773d4: MOV dword ptr [ESP + 0x28],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 004773d8: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 004773dc: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_004773dc
//   XREF to: Stack[0x4] (READ)
// 004773e0: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x20] (READ)
// 004773e4: MOV EAX,dword ptr [EAX + 0x114]
// 004773ea: ADD EBX,EAX
// 004773ec: MOV dword ptr [ESP + 0x34],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 004773f0: LEA EAX,[EBX + 0x4]
// 004773f3: PUSH EAX
// 004773f4: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 004773f8: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x24] (READ)
// 004773fc: MOV EAX,dword ptr [EAX + 0x118]
// 00477402: ADD EAX,ESI
// 00477404: PUSH EAX
// 00477405: PUSH 0x61f49d
//   XREF to: 0061f49d (DATA)
// 0047740a: PUSH EBP
// 0047740b: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00477410: ADD ESP,0x10
// 00477413: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (READ)
// 00477417: MOV EDI,dword ptr [EAX + 0x4]
// 0047741a: XOR EBX,EBX
// 0047741c: TEST EDI,EDI
// 0047741e: JLE 0x00477461
//   XREF to: 00477461 (CONDITIONAL_JUMP)
// 00477420: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (READ)
// 00477424: MOV EDI,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (READ)
// 00477428: ADD EAX,0x18
// 0047742b: ADD ESI,0x1c
// 0047742e: ADD EDI,0x20
// 00477431: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00477435: IMUL EAX,EBX,0xc
//   Label: LAB_00477435
// 00477438: PUSH EDI
// 00477439: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x18] (READ)
// 0047743d: PUSH ESI
// 0047743e: ADD EAX,EDX
// 00477440: PUSH EAX
// 00477441: PUSH 0x61f4a3
//   XREF to: 0061f4a3 (DATA)
// 00477446: PUSH EBP
// 00477447: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0047744c: ADD ESP,0x14
// 0047744f: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (READ)
// 00477453: ADD EDI,0xc
// 00477456: INC EBX
// 00477457: MOV ECX,dword ptr [EAX + 0x4]
// 0047745a: ADD ESI,0xc
// 0047745d: CMP EBX,ECX
// 0047745f: JL 0x00477435
//   XREF to: 00477435 (CONDITIONAL_JUMP)
// 00477461: PUSH 0x61f4ae
//   Label: LAB_00477461
//   XREF to: 0061f4ae (DATA)
// 00477466: PUSH EBP
// 00477467: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0047746c: ADD ESP,0x8
// 0047746f: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x24] (READ)
// 00477473: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x20] (READ)
// 00477477: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x1c] (READ)
// 0047747b: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 0047747f: ADD EDI,0x4
// 00477482: ADD EAX,0x48
// 00477485: INC EDX
// 00477486: MOV ECX,dword ptr [EBX + 0x110]
// 0047748c: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 00477490: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00477494: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00477498: CMP EDX,ECX
// 0047749a: JL 0x004773dc
//   XREF to: 004773dc (CONDITIONAL_JUMP)
// 004774a0: CMP dword ptr [ESP + 0x1c],0x0
//   Label: LAB_004774a0
//   XREF to: Stack[-0x2c] (READ)
// 004774a5: JNZ 0x004775bb
//   XREF to: 004775bb (CONDITIONAL_JUMP)
// 004774ab: LEA EAX,[EAX]
// 004774ae: MOV ECX,ECX
// 004774b0: MOV EBX,0x1
//   Label: LAB_004774b0
// 004774b5: MOV ESI,EBP
// 004774b7: PUSH ESI
//   Label: LAB_004774b7
// 004774b8: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004774bd: ADD ESP,0x4
// 004774c0: TEST EAX,EAX
// 004774c2: JL 0x004774ce
//   XREF to: 004774ce (CONDITIONAL_JUMP)
// 004774c4: CMP EAX,0xa
// 004774c7: JNZ 0x004774b7
//   XREF to: 004774b7 (CONDITIONAL_JUMP)
// 004774c9: DEC EBX
// 004774ca: TEST EBX,EBX
// 004774cc: JG 0x004774b7
//   XREF to: 004774b7 (CONDITIONAL_JUMP)
// 004774ce: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_004774ce
//   XREF to: Stack[0x4] (READ)
// 004774d2: MOV EBX,dword ptr [EAX + 0x120]
// 004774d8: XOR ESI,ESI
// 004774da: TEST EBX,EBX
// 004774dc: JLE 0x00477510
//   XREF to: 00477510 (CONDITIONAL_JUMP)
// 004774de: LEA EBX,[EAX + 0x12c]
// 004774e4: PUSH EBX
//   Label: LAB_004774e4
// 004774e5: PUSH 0x61f4fb
//   XREF to: 0061f4fb (DATA)
// 004774ea: PUSH EBP
// 004774eb: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004774f0: ADD ESP,0xc
// 004774f3: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 004774f7: INC ESI
// 004774f8: MOV EDI,dword ptr [EAX + 0x120]
// 004774fe: ADD EBX,0x48
// 00477501: CMP ESI,EDI
// 00477503: JL 0x004774e4
//   XREF to: 004774e4 (CONDITIONAL_JUMP)
// 00477505: LEA EAX,[EAX]
// 0047750b: LEA EDX,[EDX]
// 0047750e: MOV EBX,EBX
// 00477510: MOV EBX,0x1
//   Label: LAB_00477510
// 00477515: MOV ESI,EBP
// 00477517: PUSH ESI
//   Label: LAB_00477517
// 00477518: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0047751d: ADD ESP,0x4
// 00477520: TEST EAX,EAX
// 00477522: JL 0x0047752e
//   XREF to: 0047752e (CONDITIONAL_JUMP)
// 00477524: CMP EAX,0xa
// 00477527: JNZ 0x00477517
//   XREF to: 00477517 (CONDITIONAL_JUMP)
// 00477529: DEC EBX
// 0047752a: TEST EBX,EBX
// 0047752c: JG 0x00477517
//   XREF to: 00477517 (CONDITIONAL_JUMP)
// 0047752e: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_0047752e
//   XREF to: Stack[0x4] (READ)
// 00477532: MOV EDX,dword ptr [EAX + 0x5584]
// 00477538: XOR EBX,EBX
// 0047753a: TEST EDX,EDX
// 0047753c: JLE 0x00477580
//   XREF to: 00477580 (CONDITIONAL_JUMP)
// 0047753e: LEA EDI,[EAX + 0x5588]
// 00477544: LEA ESI,[EAX + 0x558c]
// 0047754a: LEA EAX,[EBX*0x8 + 0x0]
//   Label: LAB_0047754a
// 00477551: PUSH ESI
// 00477552: ADD EAX,EDI
// 00477554: PUSH EAX
// 00477555: PUSH 0x61f502
//   XREF to: 0061f502 (DATA)
// 0047755a: PUSH EBP
// 0047755b: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00477560: ADD ESP,0x10
// 00477563: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 00477567: INC EBX
// 00477568: MOV ECX,dword ptr [EAX + 0x5584]
// 0047756e: ADD ESI,0x8
// 00477571: CMP EBX,ECX
// 00477573: JL 0x0047754a
//   XREF to: 0047754a (CONDITIONAL_JUMP)
// 00477575: LEA EAX,[EAX]
// 0047757b: LEA EDX,[EDX]
// 0047757e: MOV EBX,EBX
// 00477580: TEST byte ptr [EBP + 0xc],0x20
//   Label: LAB_00477580
// 00477584: JZ 0x004775a9
//   XREF to: 004775a9 (CONDITIONAL_JUMP)
// 00477586: MOV EBX,0x61f509
//   XREF to: 0061f509 (PARAM)
// 0047758b: MOV ESI,0x197
// 00477590: PUSH 0x61f51c
//   XREF to: 0061f51c (DATA)
// 00477595: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 0047759b: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004775a1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004775a6: ADD ESP,0x4
// 004775a9: CMP dword ptr [ESP],0x0
//   Label: LAB_004775a9
//   XREF to: Stack[-0x48] (DATA)
// 004775ad: JNZ 0x00477677
//   XREF to: 00477677 (CONDITIONAL_JUMP)
// 004775b3: ADD ESP,0x38
// 004775b6: POP EBP
// 004775b7: POP EDI
// 004775b8: POP ESI
// 004775b9: POP EBX
// 004775ba: RET
// 004775bb: PUSH 0x177
//   Label: LAB_004775bb
// 004775c0: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 004775c4: PUSH 0x61f4b0
//   XREF to: 0061f4b0 (DATA)
// 004775c9: MOV ESI,dword ptr [EAX + 0x110]
// 004775cf: PUSH ESI
// 004775d0: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 004775d5: ADD ESP,0xc
// 004775d8: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 004775dc: MOV dword ptr [EBX + 0x11c],EAX
// 004775e2: TEST EAX,EAX
// 004775e4: JZ 0x00477650
//   XREF to: 00477650 (CONDITIONAL_JUMP)
// 004775e6: MOV EBX,0x1
//   Label: LAB_004775e6
// 004775eb: MOV ESI,EBP
// 004775ed: PUSH ESI
//   Label: LAB_004775ed
// 004775ee: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004775f3: ADD ESP,0x4
// 004775f6: TEST EAX,EAX
// 004775f8: JL 0x00477604
//   XREF to: 00477604 (CONDITIONAL_JUMP)
// 004775fa: CMP EAX,0xa
// 004775fd: JNZ 0x004775ed
//   XREF to: 004775ed (CONDITIONAL_JUMP)
// 004775ff: DEC EBX
// 00477600: TEST EBX,EBX
// 00477602: JG 0x004775ed
//   XREF to: 004775ed (CONDITIONAL_JUMP)
// 00477604: MOV EAX,dword ptr [ESP + 0x4c]
//   Label: LAB_00477604
//   XREF to: Stack[0x4] (READ)
// 00477608: MOV EDX,dword ptr [EAX + 0x110]
// 0047760e: XOR EBX,EBX
// 00477610: TEST EDX,EDX
// 00477612: JLE 0x004774b0
//   XREF to: 004774b0 (CONDITIONAL_JUMP)
// 00477618: LEA EAX,[ESP + 0x20]
//   Label: LAB_00477618
//   XREF to: Stack[-0x28] (DATA)
// 0047761c: PUSH EAX
// 0047761d: PUSH 0x61f4f7
//   XREF to: 0061f4f7 (DATA)
// 00477622: PUSH EBP
// 00477623: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00477628: ADD ESP,0xc
// 0047762b: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 0047762f: MOV EAX,dword ptr [EAX + 0x11c]
// 00477635: LEA ESI,[EAX + EBX*0x1]
// 00477638: MOV AL,byte ptr [ESP + 0x20]
//   XREF to: Stack[-0x28] (READ)
// 0047763c: MOV byte ptr [ESI],AL
// 0047763e: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 00477642: INC EBX
// 00477643: CMP EBX,dword ptr [EAX + 0x110]
// 00477649: JL 0x00477618
//   XREF to: 00477618 (CONDITIONAL_JUMP)
// 0047764b: JMP 0x004774b0
//   XREF to: 004774b0 (UNCONDITIONAL_JUMP)
// 00477650: MOV EAX,0x61f4c3
//   Label: LAB_00477650
//   XREF to: 0061f4c3 (PARAM)
// 00477655: MOV EDX,0x178
// 0047765a: PUSH 0x61f4d6
//   XREF to: 0061f4d6 (DATA)
// 0047765f: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00477664: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0047766a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0047766f: ADD ESP,0x4
// 00477672: JMP 0x004775e6
//   XREF to: 004775e6 (UNCONDITIONAL_JUMP)
// 00477677: MOV EBP,dword ptr [ESP + 0x4c]
//   Label: LAB_00477677
//   XREF to: Stack[0x4] (READ)
// 0047767b: PUSH EBP
// 0047767c: CALL core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830
//   XREF to: 00478830 (UNCONDITIONAL_CALL)
// 00477681: ADD ESP,0x4
// 00477684: ADD ESP,0x38
// 00477687: POP EBP
// 00477688: POP EDI
// 00477689: POP ESI
// 0047768a: POP EBX
// 0047768b: RET
