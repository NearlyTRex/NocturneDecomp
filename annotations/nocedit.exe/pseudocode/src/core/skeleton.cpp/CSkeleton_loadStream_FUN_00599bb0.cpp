// Name: core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0
// Address: 00599bb0
// Address Range: [[00599bb0, 00599fb6]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0(CSkeleton * this_ptr, FILE * file_handle)
// Cross-references:
//   core_skeleton.cpp_CSkeleton_load_FUN_00599b10 (00599b10) at 00599b5c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_0064e2f0
//   TerminatedCString s_core_skeleton_cpp_0064e2f4
//   TerminatedCString s_Invalid_skeleton_version_0064e309
//   TerminatedCString s_core_skeleton_cpp_0064e322
//   TerminatedCString s_Old_skeleton_version_d_n_0064e337
//   TerminatedCString s_core_skeleton_cpp_0064e35d
//   TerminatedCString s_Skeleton_version_d_is_ne_0064e372
//   TerminatedCString s_d_d_0064e3c2
//   TerminatedCString s_d_0064e3c9
//   TerminatedCString s_f_f_f_f_0064e3d5
//   TerminatedCString s_f_f_f_0064e3e2
//   TerminatedCString s_f_f_f_0064e3ec
//   TerminatedCString s_core_skeleton_cpp_0064e3f6
//   TerminatedCString s_CSkeleton_loadStream_err_0064e40b
//   TerminatedCString s_f_f_f_0064e437
//   TerminatedCString s_core_skeleton_cpp_0064e441
//   TerminatedCString s_CSkeleton_loadStream_err_0064e456
//   undefined4 g_CSkeletonVersion
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_motion.cpp_CMotionList_load_FUN_0052cd70
//   core_skeleton.cpp_CSkeleton_allocMemory_FUN_00599910
//   core_skeleton.cpp_CSkeleton_free_FUN_00599a50
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CSkeleton_loadStream_FUN_00599bb0(CSkeleton *this_ptr,FILE *file_handle)

{
  int iVar1;
  int unaff_EBX;
  int unaff_ESI;
  FILE *in_stack_0000000c;
  FILE *in_stack_00000010;
  FILE *in_stack_00000018;
  CSkeleton *in_stack_0000001c;
  CMotionList *in_stack_00000020;
  FILE *in_stack_00000024;
  FILE *in_stack_00000028;
  int in_stack_ffffffe8;
  int in_stack_ffffffec;
  
  core_skeleton_cpp_CSkeleton_free_FUN_00599a50(this_ptr);
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_0000000c);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%d\n");
  if (in_stack_ffffffe8 < 1) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x10d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid skeleton version");
  }
  if (in_stack_ffffffec < 2) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x10e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Old skeleton version %d not supported");
  }
  if (g_CSkeletonVersion < in_stack_ffffffec) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x10f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Skeleton version %d is newer than .EXE, which can only process up to version %d");
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000018);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)in_stack_0000001c,"%d,%d\n");
  core_skeleton_cpp_CSkeleton_allocMemory_FUN_00599910(in_stack_0000001c,unaff_ESI,unaff_EBX);
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000024);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < (int)in_stack_00000024[0x170c]._link) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000024,"\"%[^\"]\",%d\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_stack_00000020[1].state_names[2] + 0x10));
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000024);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  if (0 < (int)in_stack_00000024[0x178d]._ptr) {
    do {
      iVar1 = 0;
      if (0 < *(int *)(in_stack_00000020[1].state_names[2] + 0x10)) {
        do {
          iVar1 = iVar1 + 1;
          crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000024,"%f,%f,%f,%f\n");
        } while (iVar1 < *(int *)(in_stack_00000020[1].state_names[2] + 0x10));
      }
      this_ptr = (CSkeleton *)((int)&(this_ptr->motion_list).state_count + 1);
    } while ((int)this_ptr < in_stack_00000020[1].motions[0].signals[10].value);
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000024);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < (int)in_stack_00000024[0x178d]._ptr) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000024,"%f,%f,%f\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < in_stack_00000020[1].motions[0].signals[10].value);
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000024);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < (int)in_stack_00000024[0x178d]._ptr) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000024,"%f,%f,%f\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < in_stack_00000020[1].motions[0].signals[10].value);
  }
  if ((in_stack_00000024->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x144;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CSkeleton::loadStream - error reading file.");
  }
  core_motion_cpp_CMotionList_load_FUN_0052cd70(in_stack_00000020,in_stack_00000024);
  if (unaff_EBX < 3) {
    in_stack_00000024[0x178d]._handle = -0x383cb080;
  }
  else {
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000028);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = 0;
    if (0 < (int)in_stack_00000024[0x170c]._link) {
      do {
        crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000028,"%f,%f,%f\n");
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)in_stack_00000024[0x170c]._link);
    }
  }
  if ((in_stack_00000028->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0x15f;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CSkeleton::loadStream - error reading file.");
    return;
  }
  return;
}


// Assembly code:
// 00599bb0: PUSH EBX
//   Label: core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0
// 00599bb1: PUSH ESI
// 00599bb2: PUSH EDI
// 00599bb3: PUSH EBP
// 00599bb4: SUB ESP,0x14
// 00599bb7: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00599bbb: PUSH EDX
// 00599bbc: CALL core_skeleton.cpp_CSkeleton_free_FUN_00599a50
//   XREF to: 00599a50 (UNCONDITIONAL_CALL)
// 00599bc1: ADD ESP,0x4
// 00599bc4: MOV ECX,0xffffffff
// 00599bc9: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 00599bcd: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x24] (DATA)
// 00599bd0: PUSH EBX
//   Label: LAB_00599bd0
// 00599bd1: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00599bd6: ADD ESP,0x4
// 00599bd9: TEST EAX,EAX
// 00599bdb: JL 0x00599be2
//   XREF to: 00599be2 (CONDITIONAL_JUMP)
// 00599bdd: CMP EAX,0xa
// 00599be0: JNZ 0x00599bd0
//   XREF to: 00599bd0 (CONDITIONAL_JUMP)
// 00599be2: MOV EAX,ESP
//   Label: LAB_00599be2
// 00599be4: PUSH EAX
// 00599be5: PUSH 0x64e2f0
//   XREF to: 0064e2f0 (DATA)
// 00599bea: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 00599bee: PUSH EBX
// 00599bef: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00599bf4: ADD ESP,0xc
// 00599bf7: CMP dword ptr [ESP],0x1
//   XREF to: Stack[-0x24] (DATA)
// 00599bfb: JGE 0x00599c20
//   XREF to: 00599c20 (CONDITIONAL_JUMP)
// 00599bfd: MOV EDI,0x64e2f4
//   XREF to: 0064e2f4 (DATA)
// 00599c02: MOV EBP,0x10d
// 00599c07: PUSH 0x64e309
//   XREF to: 0064e309 (DATA)
// 00599c0c: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00599c12: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00599c18: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00599c1d: ADD ESP,0x4
// 00599c20: MOV EAX,dword ptr [ESP]
//   Label: LAB_00599c20
//   XREF to: Stack[-0x24] (DATA)
// 00599c23: CMP EAX,0x2
// 00599c26: JGE 0x00599c4c
//   XREF to: 00599c4c (CONDITIONAL_JUMP)
// 00599c28: PUSH EAX
// 00599c29: MOV EDX,0x64e322
//   XREF to: 0064e322 (PARAM)
// 00599c2e: MOV ECX,0x10e
// 00599c33: PUSH 0x64e337
//   XREF to: 0064e337 (DATA)
// 00599c38: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00599c3e: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00599c44: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00599c49: ADD ESP,0x8
// 00599c4c: MOV EAX,dword ptr [ESP]
//   Label: LAB_00599c4c
//   XREF to: Stack[-0x24] (DATA)
// 00599c4f: MOV ESI,dword ptr [0x00681860]
//   XREF to: 00681860 (READ)
// 00599c55: CMP EAX,ESI
// 00599c57: JG 0x00599f52
//   XREF to: 00599f52 (CONDITIONAL_JUMP)
// 00599c5d: MOV EBX,dword ptr [ESP + 0x2c]
//   Label: LAB_00599c5d
//   XREF to: Stack[0x8] (READ)
// 00599c61: PUSH EBX
//   Label: LAB_00599c61
// 00599c62: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00599c67: ADD ESP,0x4
// 00599c6a: TEST EAX,EAX
// 00599c6c: JL 0x00599c73
//   XREF to: 00599c73 (CONDITIONAL_JUMP)
// 00599c6e: CMP EAX,0xa
// 00599c71: JNZ 0x00599c61
//   XREF to: 00599c61 (CONDITIONAL_JUMP)
// 00599c73: LEA EAX,[ESP + 0x8]
//   Label: LAB_00599c73
//   XREF to: Stack[-0x1c] (DATA)
// 00599c77: PUSH EAX
// 00599c78: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x20] (DATA)
// 00599c7c: PUSH EAX
// 00599c7d: PUSH 0x64e3c2
//   XREF to: 0064e3c2 (DATA)
// 00599c82: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 00599c86: PUSH ECX
// 00599c87: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00599c8c: ADD ESP,0x10
// 00599c8f: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 00599c93: PUSH EBX
// 00599c94: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00599c98: PUSH ESI
// 00599c99: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 00599c9d: PUSH EDI
// 00599c9e: CALL core_skeleton.cpp_CSkeleton_allocMemory_FUN_00599910
//   XREF to: 00599910 (UNCONDITIONAL_CALL)
// 00599ca3: ADD ESP,0xc
// 00599ca6: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 00599caa: PUSH EBX
//   Label: LAB_00599caa
// 00599cab: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00599cb0: ADD ESP,0x4
// 00599cb3: TEST EAX,EAX
// 00599cb5: JL 0x00599cbc
//   XREF to: 00599cbc (CONDITIONAL_JUMP)
// 00599cb7: CMP EAX,0xa
// 00599cba: JNZ 0x00599caa
//   XREF to: 00599caa (CONDITIONAL_JUMP)
// 00599cbc: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_00599cbc
//   XREF to: Stack[0x4] (READ)
// 00599cc0: MOV EBP,dword ptr [EAX + 0x28558]
// 00599cc6: XOR EBX,EBX
// 00599cc8: TEST EBP,EBP
// 00599cca: JLE 0x00599d10
//   XREF to: 00599d10 (CONDITIONAL_JUMP)
// 00599ccc: LEA EDI,[EAX + 0x2855c]
// 00599cd2: LEA ESI,[EAX + 0x2857c]
// 00599cd8: IMUL EAX,EBX,0x24
//   Label: LAB_00599cd8
// 00599cdb: PUSH ESI
// 00599cdc: ADD EAX,EDI
// 00599cde: PUSH EAX
// 00599cdf: PUSH 0x64e3c9
//   XREF to: 0064e3c9 (DATA)
// 00599ce4: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 00599ce8: PUSH EAX
// 00599ce9: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00599cee: ADD ESP,0x10
// 00599cf1: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00599cf5: INC EBX
// 00599cf6: MOV EDX,dword ptr [EAX + 0x28558]
// 00599cfc: ADD ESI,0x24
// 00599cff: CMP EBX,EDX
// 00599d01: JL 0x00599cd8
//   XREF to: 00599cd8 (CONDITIONAL_JUMP)
// 00599d03: LEA EAX,[EAX]
// 00599d09: LEA EDX,[EDX]
// 00599d0f: NOP
// 00599d10: MOV ESI,dword ptr [ESP + 0x2c]
//   Label: LAB_00599d10
//   XREF to: Stack[0x8] (READ)
// 00599d14: PUSH ESI
//   Label: LAB_00599d14
// 00599d15: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00599d1a: ADD ESP,0x4
// 00599d1d: TEST EAX,EAX
// 00599d1f: JL 0x00599d26
//   XREF to: 00599d26 (CONDITIONAL_JUMP)
// 00599d21: CMP EAX,0xa
// 00599d24: JNZ 0x00599d14
//   XREF to: 00599d14 (CONDITIONAL_JUMP)
// 00599d26: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_00599d26
//   XREF to: Stack[0x4] (READ)
// 00599d2a: XOR ECX,ECX
// 00599d2c: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00599d30: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00599d34: MOV ESI,dword ptr [EAX + 0x2936c]
// 00599d3a: MOV EBX,dword ptr [EBX + 0x29370]
// 00599d40: TEST ESI,ESI
// 00599d42: JLE 0x00599db5
//   XREF to: 00599db5 (CONDITIONAL_JUMP)
// 00599d44: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_00599d44
//   XREF to: Stack[0x4] (READ)
// 00599d48: MOV EDX,dword ptr [EAX + 0x28558]
// 00599d4e: XOR EBP,EBP
// 00599d50: TEST EDX,EDX
// 00599d52: JLE 0x00599d9e
//   XREF to: 00599d9e (CONDITIONAL_JUMP)
// 00599d54: LEA ESI,[EBX + 0x4]
// 00599d57: LEA EAX,[EBX + 0x8]
// 00599d5a: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00599d5e: LEA EDI,[EBX + 0xc]
// 00599d61: PUSH EDI
//   Label: LAB_00599d61
// 00599d62: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00599d66: PUSH EAX
// 00599d67: PUSH ESI
// 00599d68: PUSH EBX
// 00599d69: PUSH 0x64e3d5
//   XREF to: 0064e3d5 (DATA)
// 00599d6e: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 00599d72: PUSH EDX
// 00599d73: INC EBP
// 00599d74: ADD EDI,0x10
// 00599d77: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00599d7c: ADD ESP,0x18
// 00599d7f: ADD ESI,0x10
// 00599d82: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 00599d86: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00599d8a: ADD EBX,0x10
// 00599d8d: ADD ECX,0x10
// 00599d90: MOV EDX,dword ptr [EAX + 0x28558]
// 00599d96: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 00599d9a: CMP EBP,EDX
// 00599d9c: JL 0x00599d61
//   XREF to: 00599d61 (CONDITIONAL_JUMP)
// 00599d9e: MOV EDI,dword ptr [ESP + 0xc]
//   Label: LAB_00599d9e
//   XREF to: Stack[-0x18] (READ)
// 00599da2: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00599da6: INC EDI
// 00599da7: MOV EBP,dword ptr [ESI + 0x2936c]
// 00599dad: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 00599db1: CMP EDI,EBP
// 00599db3: JL 0x00599d44
//   XREF to: 00599d44 (CONDITIONAL_JUMP)
// 00599db5: MOV EBP,dword ptr [ESP + 0x2c]
//   Label: LAB_00599db5
//   XREF to: Stack[0x8] (READ)
// 00599db9: PUSH EBP
//   Label: LAB_00599db9
// 00599dba: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00599dbf: ADD ESP,0x4
// 00599dc2: TEST EAX,EAX
// 00599dc4: JL 0x00599dcb
//   XREF to: 00599dcb (CONDITIONAL_JUMP)
// 00599dc6: CMP EAX,0xa
// 00599dc9: JNZ 0x00599db9
//   XREF to: 00599db9 (CONDITIONAL_JUMP)
// 00599dcb: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_00599dcb
//   XREF to: Stack[0x4] (READ)
// 00599dcf: MOV ECX,dword ptr [EAX + 0x2936c]
// 00599dd5: XOR EBX,EBX
// 00599dd7: TEST ECX,ECX
// 00599dd9: JLE 0x00599e20
//   XREF to: 00599e20 (CONDITIONAL_JUMP)
// 00599ddb: XOR ESI,ESI
// 00599ddd: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_00599ddd
//   XREF to: Stack[0x4] (READ)
// 00599de1: MOV EAX,dword ptr [EAX + 0x29374]
// 00599de7: ADD EAX,ESI
// 00599de9: LEA EDI,[EAX + 0x8]
// 00599dec: PUSH EDI
// 00599ded: LEA EDI,[EAX + 0x4]
// 00599df0: PUSH EDI
// 00599df1: PUSH EAX
// 00599df2: PUSH 0x64e3e2
//   XREF to: 0064e3e2 (DATA)
// 00599df7: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 00599dfb: PUSH EDI
// 00599dfc: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00599e01: ADD ESP,0x14
// 00599e04: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00599e08: INC EBX
// 00599e09: MOV EBP,dword ptr [EAX + 0x2936c]
// 00599e0f: ADD ESI,0xc
// 00599e12: CMP EBX,EBP
// 00599e14: JL 0x00599ddd
//   XREF to: 00599ddd (CONDITIONAL_JUMP)
// 00599e16: LEA EAX,[EAX]
// 00599e1c: LEA EDX,[EDX]
// 00599e20: MOV ESI,dword ptr [ESP + 0x2c]
//   Label: LAB_00599e20
//   XREF to: Stack[0x8] (READ)
// 00599e24: PUSH ESI
//   Label: LAB_00599e24
// 00599e25: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00599e2a: ADD ESP,0x4
// 00599e2d: TEST EAX,EAX
// 00599e2f: JL 0x00599e36
//   XREF to: 00599e36 (CONDITIONAL_JUMP)
// 00599e31: CMP EAX,0xa
// 00599e34: JNZ 0x00599e24
//   XREF to: 00599e24 (CONDITIONAL_JUMP)
// 00599e36: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_00599e36
//   XREF to: Stack[0x4] (READ)
// 00599e3a: MOV EDX,dword ptr [EAX + 0x2936c]
// 00599e40: XOR EBX,EBX
// 00599e42: TEST EDX,EDX
// 00599e44: JLE 0x00599e90
//   XREF to: 00599e90 (CONDITIONAL_JUMP)
// 00599e46: XOR ESI,ESI
// 00599e48: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_00599e48
//   XREF to: Stack[0x4] (READ)
// 00599e4c: MOV EAX,dword ptr [EAX + 0x29378]
// 00599e52: ADD EAX,ESI
// 00599e54: LEA EDI,[EAX + 0x8]
// 00599e57: PUSH EDI
// 00599e58: LEA EDI,[EAX + 0x4]
// 00599e5b: PUSH EDI
// 00599e5c: PUSH EAX
// 00599e5d: PUSH 0x64e3ec
//   XREF to: 0064e3ec (DATA)
// 00599e62: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 00599e66: PUSH ECX
// 00599e67: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00599e6c: ADD ESP,0x14
// 00599e6f: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00599e73: INC EBX
// 00599e74: MOV EDI,dword ptr [EAX + 0x2936c]
// 00599e7a: ADD ESI,0xc
// 00599e7d: CMP EBX,EDI
// 00599e7f: JL 0x00599e48
//   XREF to: 00599e48 (CONDITIONAL_JUMP)
// 00599e81: LEA EAX,[EAX]
// 00599e87: LEA EDX,[EDX]
// 00599e8d: LEA EAX,[EAX]
// 00599e90: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_00599e90
//   XREF to: Stack[0x8] (READ)
// 00599e94: TEST byte ptr [EAX + 0xc],0x20
// 00599e98: JZ 0x00599ebc
//   XREF to: 00599ebc (CONDITIONAL_JUMP)
// 00599e9a: MOV EBP,0x64e3f6
//   XREF to: 0064e3f6 (DATA)
// 00599e9f: MOV EAX,0x144
// 00599ea4: PUSH 0x64e40b
//   XREF to: 0064e40b (DATA)
// 00599ea9: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00599eaf: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00599eb4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00599eb9: ADD ESP,0x4
// 00599ebc: MOV EDX,dword ptr [ESP + 0x2c]
//   Label: LAB_00599ebc
//   XREF to: Stack[0x8] (READ)
// 00599ec0: PUSH EDX
// 00599ec1: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00599ec5: PUSH ECX
// 00599ec6: CALL core_motion.cpp_CMotionList_load_FUN_0052cd70
//   XREF to: 0052cd70 (UNCONDITIONAL_CALL)
// 00599ecb: ADD ESP,0x8
// 00599ece: CMP dword ptr [ESP],0x3
//   XREF to: Stack[-0x24] (DATA)
// 00599ed2: JL 0x00599f7c
//   XREF to: 00599f7c (CONDITIONAL_JUMP)
// 00599ed8: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 00599edc: PUSH ESI
//   Label: LAB_00599edc
// 00599edd: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00599ee2: ADD ESP,0x4
// 00599ee5: TEST EAX,EAX
// 00599ee7: JL 0x00599eee
//   XREF to: 00599eee (CONDITIONAL_JUMP)
// 00599ee9: CMP EAX,0xa
// 00599eec: JNZ 0x00599edc
//   XREF to: 00599edc (CONDITIONAL_JUMP)
// 00599eee: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_00599eee
//   XREF to: Stack[0x4] (READ)
// 00599ef2: MOV ESI,dword ptr [EAX + 0x28558]
// 00599ef8: XOR EBX,EBX
// 00599efa: TEST ESI,ESI
// 00599efc: JLE 0x00599f40
//   XREF to: 00599f40 (CONDITIONAL_JUMP)
// 00599efe: LEA EBP,[EAX + 0x2937c]
// 00599f04: LEA ESI,[EAX + 0x29380]
// 00599f0a: LEA EDI,[EAX + 0x29384]
// 00599f10: IMUL EAX,EBX,0xc
//   Label: LAB_00599f10
// 00599f13: PUSH EDI
// 00599f14: PUSH ESI
// 00599f15: ADD EAX,EBP
// 00599f17: PUSH EAX
// 00599f18: PUSH 0x64e437
//   XREF to: 0064e437 (DATA)
// 00599f1d: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 00599f21: PUSH EAX
// 00599f22: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00599f27: ADD ESP,0x14
// 00599f2a: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00599f2e: ADD EDI,0xc
// 00599f31: INC EBX
// 00599f32: MOV EDX,dword ptr [EAX + 0x28558]
// 00599f38: ADD ESI,0xc
// 00599f3b: CMP EBX,EDX
// 00599f3d: JL 0x00599f10
//   XREF to: 00599f10 (CONDITIONAL_JUMP)
// 00599f3f: NOP
// 00599f40: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_00599f40
//   XREF to: Stack[0x8] (READ)
// 00599f44: TEST byte ptr [EAX + 0xc],0x20
// 00599f48: JNZ 0x00599f8c
//   XREF to: 00599f8c (CONDITIONAL_JUMP)
// 00599f4a: ADD ESP,0x14
// 00599f4d: POP EBP
// 00599f4e: POP EDI
// 00599f4f: POP ESI
// 00599f50: POP EBX
// 00599f51: RET
// 00599f52: PUSH ESI
//   Label: LAB_00599f52
// 00599f53: PUSH EAX
// 00599f54: MOV EDI,0x64e35d
//   XREF to: 0064e35d (DATA)
// 00599f59: MOV EBP,0x10f
// 00599f5e: PUSH 0x64e372
//   XREF to: 0064e372 (DATA)
// 00599f63: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00599f69: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00599f6f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00599f74: ADD ESP,0xc
// 00599f77: JMP 0x00599c5d
//   XREF to: 00599c5d (UNCONDITIONAL_JUMP)
// 00599f7c: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_00599f7c
//   XREF to: Stack[0x4] (READ)
// 00599f80: MOV dword ptr [EAX + 0x2937c],0xc7c34f80
// 00599f8a: JMP 0x00599f40
//   XREF to: 00599f40 (UNCONDITIONAL_JUMP)
// 00599f8c: MOV ECX,0x64e441
//   Label: LAB_00599f8c
//   XREF to: 0064e441 (PARAM)
// 00599f91: MOV EBX,0x15f
// 00599f96: PUSH 0x64e456
//   XREF to: 0064e456 (DATA)
// 00599f9b: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00599fa1: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00599fa7: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00599fac: ADD ESP,0x4
// 00599faf: ADD ESP,0x14
// 00599fb2: POP EBP
// 00599fb3: POP EDI
// 00599fb4: POP ESI
// 00599fb5: POP EBX
// 00599fb6: RET
