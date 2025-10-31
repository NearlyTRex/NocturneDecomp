// Name: core_box.cpp_CBox_loadFromFile_FUN_0041fe90
// Address: 0041fe90
// Address Range: [[0041fe90, 0042001b]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBox_loadFromFile_FUN_0041fe90(CBox * this_ptr, FILE * file_handle)
// Cross-references:
//   core_actor.cpp_serializeSimBox_FUN_0040bd70 (0040bd70) at 0040bda9 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_00616527
//   TerminatedCString s_f_f_f_0061652c
//   TerminatedCString s_f_f_f_00616537
//   TerminatedCString s_f_f_f_00616542
//   TerminatedCString s_f_0061654d
//   TerminatedCString s_f_f_f_00616552
//   TerminatedCString s_f_f_f_0061655d
//   TerminatedCString s_d_00616568
// Function calls:
//   core_box.cpp_CBox_setupCorners_FUN_0041dd20
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_loadFromFile_FUN_0041fe90(CBox *this_ptr,FILE *file_handle)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  CVector3f local_28 [2];
  
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffebc,0xff,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle," %d\n");
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffec4,0xff,file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle," %f,%f,%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle," %f,%f,%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle," %f,%f,%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle," %f\n");
  core_box_cpp_CBox_setupCorners_FUN_0041dd20
            (this_ptr,(CVector3f *)&stack0xfffffffc,(CVector3f *)&stack0xfffffff0,local_28,
             (float)file_handle);
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle," %f,%f,%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle," %f,%f,%f\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(file_handle," %d\n");
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     (&this_ptr->rotation_matrix,(CVector3f *)&stack0xfffffff4,
                      &this_ptr->external_force);
  if (&this_ptr->linear_velocity == pCVar1) {
    return;
  }
  (this_ptr->linear_velocity).x = pCVar1->x;
  (this_ptr->linear_velocity).y = pCVar1->y;
  (this_ptr->linear_velocity).z = pCVar1->z;
  return;
}


// Assembly code:
// 0041fe90: PUSH EBX
//   Label: core_box.cpp_CBox_loadFromFile_FUN_0041fe90
// 0041fe91: PUSH ESI
// 0041fe92: PUSH EDI
// 0041fe93: SUB ESP,0x138
// 0041fe99: MOV ESI,dword ptr [ESP + 0x148]
//   XREF to: Stack[0x4] (READ)
// 0041fea0: MOV EBX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[0x8] (READ)
// 0041fea7: PUSH EBX
// 0041fea8: PUSH 0xff
// 0041fead: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x144] (DATA)
// 0041feb1: PUSH EAX
// 0041feb2: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0041feb7: ADD ESP,0xc
// 0041feba: LEA EAX,[ESP + 0x134]
//   XREF to: Stack[-0x10] (DATA)
// 0041fec1: PUSH EAX
// 0041fec2: PUSH 0x616527
//   XREF to: 00616527 (DATA)
// 0041fec7: PUSH EBX
// 0041fec8: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0041fecd: ADD ESP,0xc
// 0041fed0: PUSH EBX
// 0041fed1: PUSH 0xff
// 0041fed6: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x144] (DATA)
// 0041feda: PUSH EAX
// 0041fedb: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0041fee0: ADD ESP,0xc
// 0041fee3: LEA EAX,[ESP + 0x12c]
//   XREF to: Stack[-0x18] (DATA)
// 0041feea: PUSH EAX
// 0041feeb: LEA EAX,[ESP + 0x12c]
//   XREF to: Stack[-0x1c] (DATA)
// 0041fef2: PUSH EAX
// 0041fef3: LEA EAX,[ESP + 0x12c]
//   XREF to: Stack[-0x20] (DATA)
// 0041fefa: PUSH EAX
// 0041fefb: PUSH 0x61652c
//   XREF to: 0061652c (DATA)
// 0041ff00: PUSH EBX
// 0041ff01: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0041ff06: ADD ESP,0x14
// 0041ff09: LEA EAX,[ESP + 0x11c]
//   XREF to: Stack[-0x28] (DATA)
// 0041ff10: PUSH EAX
// 0041ff11: LEA EAX,[ESP + 0x124]
//   XREF to: Stack[-0x24] (DATA)
// 0041ff18: PUSH EAX
// 0041ff19: LEA EAX,[ESP + 0x120]
//   XREF to: Stack[-0x2c] (DATA)
// 0041ff20: PUSH EAX
// 0041ff21: PUSH 0x616537
//   XREF to: 00616537 (DATA)
// 0041ff26: PUSH EBX
// 0041ff27: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0041ff2c: ADD ESP,0x14
// 0041ff2f: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x3c] (DATA)
// 0041ff36: PUSH EAX
// 0041ff37: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x40] (DATA)
// 0041ff3e: PUSH EAX
// 0041ff3f: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x44] (DATA)
// 0041ff46: PUSH EAX
// 0041ff47: PUSH 0x616542
//   XREF to: 00616542 (DATA)
// 0041ff4c: PUSH EBX
// 0041ff4d: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0041ff52: ADD ESP,0x14
// 0041ff55: LEA EAX,[ESP + 0x130]
//   XREF to: Stack[-0x14] (DATA)
// 0041ff5c: PUSH EAX
// 0041ff5d: PUSH 0x61654d
//   XREF to: 0061654d (DATA)
// 0041ff62: PUSH EBX
// 0041ff63: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0041ff68: ADD ESP,0xc
// 0041ff6b: LEA EAX,[ESP + 0x100]
//   XREF to: Stack[-0x44] (DATA)
// 0041ff72: PUSH dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x14] (READ)
// 0041ff79: PUSH EAX
// 0041ff7a: LEA EAX,[ESP + 0x120]
//   XREF to: Stack[-0x2c] (DATA)
// 0041ff81: PUSH EAX
// 0041ff82: LEA EAX,[ESP + 0x130]
//   XREF to: Stack[-0x20] (DATA)
// 0041ff89: PUSH EAX
// 0041ff8a: PUSH ESI
// 0041ff8b: CALL core_box.cpp_CBox_setupCorners_FUN_0041dd20
//   XREF to: 0041dd20 (UNCONDITIONAL_CALL)
// 0041ff90: ADD ESP,0x14
// 0041ff93: LEA EAX,[ESI + 0x54]
// 0041ff96: PUSH EAX
// 0041ff97: LEA EAX,[ESI + 0x50]
// 0041ff9a: PUSH EAX
// 0041ff9b: LEA EDI,[ESI + 0x4c]
// 0041ff9e: PUSH EDI
// 0041ff9f: PUSH 0x616552
//   XREF to: 00616552 (DATA)
// 0041ffa4: PUSH EBX
// 0041ffa5: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0041ffaa: ADD ESP,0x14
// 0041ffad: LEA EAX,[ESI + 0x78]
// 0041ffb0: PUSH EAX
// 0041ffb1: LEA EAX,[ESI + 0x74]
// 0041ffb4: PUSH EAX
// 0041ffb5: LEA EAX,[ESI + 0x70]
// 0041ffb8: PUSH EAX
// 0041ffb9: PUSH 0x61655d
//   XREF to: 0061655d (DATA)
// 0041ffbe: PUSH EBX
// 0041ffbf: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0041ffc4: ADD ESP,0x14
// 0041ffc7: LEA EAX,[ESI + 0x254]
// 0041ffcd: PUSH EAX
// 0041ffce: PUSH 0x616568
//   XREF to: 00616568 (DATA)
// 0041ffd3: PUSH EBX
// 0041ffd4: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0041ffd9: ADD ESP,0xc
// 0041ffdc: PUSH EDI
// 0041ffdd: LEA EAX,[ESP + 0x110]
//   XREF to: Stack[-0x38] (DATA)
// 0041ffe4: PUSH EAX
// 0041ffe5: LEA EAX,[ESI + 0x18]
// 0041ffe8: PUSH EAX
// 0041ffe9: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 0041ffee: ADD ESI,0x40
// 0041fff1: ADD ESP,0xc
// 0041fff4: CMP ESI,EAX
// 0041fff6: JNZ 0x00420002
//   XREF to: 00420002 (CONDITIONAL_JUMP)
// 0041fff8: ADD ESP,0x138
// 0041fffe: POP EDI
// 0041ffff: POP ESI
// 00420000: POP EBX
// 00420001: RET
// 00420002: MOV EDX,dword ptr [EAX]
//   Label: LAB_00420002
// 00420004: MOV dword ptr [ESI],EDX
// 00420006: MOV EDX,dword ptr [EAX + 0x4]
// 00420009: MOV dword ptr [ESI + 0x4],EDX
// 0042000c: MOV EDX,dword ptr [EAX + 0x8]
// 0042000f: MOV dword ptr [ESI + 0x8],EDX
// 00420012: ADD ESP,0x138
// 00420018: POP EDI
// 00420019: POP ESI
// 0042001a: POP EBX
// 0042001b: RET
