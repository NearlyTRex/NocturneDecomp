// Name: core_stairs.cpp_FUN_005ba590
// Address: 005ba590
// Address Range: [[005ba590, 005ba659]]
// Convention: unknown
// Signature: undefined core_stairs.cpp_FUN_005ba590()
// Function calls:
//   core_dtri.cpp_rayTriangleIntersection_FUN_0049a800

#include "nocturne.h"

/* Signature: undefined1 actors_other_stairs.cpp_FUN_005ba590(undefined4 param_1, undefined4
   param_2, undefined4 param_3, undefined4 param_4) */

float core_stairs_cpp_FUN_005ba590(void)

{
  float fVar1;
  CDemonTriangle *triangle;
  BADSPACEBASE *in_ESP;
  int iVar2;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  float *in_stack_00000010;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_18 = 1.01;
  triangle = (CDemonTriangle *)(in_stack_00000004 + 0x170);
  for (iVar2 = 0;
      SBORROW4(iVar2,*(int *)(in_stack_00000004 + 0x16c) * 2) !=
      iVar2 + *(int *)(in_stack_00000004 + 0x16c) * -2 < 0; iVar2 = iVar2 + 1) {
    fVar1 = core_dtri_cpp_rayTriangleIntersection_FUN_0049a800
                      (triangle,in_stack_00000008,in_stack_0000000c);
    if (((0.0 <= fVar1) && (fVar1 < local_14)) && (fVar1 <= 1.0)) {
      local_20 = -(triangle->normal).x;
      local_1c = -(triangle->normal).y;
      local_18 = -(triangle->normal).z;
      local_14 = fVar1;
      if (in_stack_00000010 != &local_20) {
        *in_stack_00000010 = local_20;
        in_stack_00000010[1] = local_1c;
        in_stack_00000010[2] = local_18;
      }
    }
    triangle = triangle + 1;
  }
  return local_18;
}


// Assembly code:
// 005ba590: PUSH EBX
//   Label: core_stairs.cpp_FUN_005ba590
// 005ba591: PUSH ESI
// 005ba592: PUSH EDI
// 005ba593: PUSH EBP
// 005ba594: MOV EBP,ESP
// 005ba596: SUB ESP,0x20
// 005ba599: AND ESP,0xfffffff8
// 005ba59c: MOV ESI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005ba59f: MOV EDX,0x3f8147ae
// 005ba5a4: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ba5a7: XOR EDI,EDI
// 005ba5a9: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005ba5ad: ADD EBX,0x170
// 005ba5b3: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005ba5b3
//   XREF to: Stack[0x4] (READ)
// 005ba5b6: MOV EAX,dword ptr [EAX + 0x16c]
// 005ba5bc: ADD EAX,EAX
// 005ba5be: CMP EDI,EAX
// 005ba5c0: JL 0x005ba5cd
//   XREF to: 005ba5cd (CONDITIONAL_JUMP)
// 005ba5c2: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 005ba5c6: MOV ESP,EBP
// 005ba5c8: POP EBP
// 005ba5c9: POP EDI
// 005ba5ca: POP ESI
// 005ba5cb: POP EBX
// 005ba5cc: RET
// 005ba5cd: MOV ECX,dword ptr [EBP + 0x1c]
//   Label: LAB_005ba5cd
//   XREF to: Stack[0xc] (READ)
// 005ba5d0: PUSH ECX
// 005ba5d1: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ba5d4: PUSH EAX
// 005ba5d5: PUSH EBX
// 005ba5d6: CALL core_dtri.cpp_rayTriangleIntersection_FUN_0049a800
//   XREF to: 0049a800 (UNCONDITIONAL_CALL)
// 005ba5db: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005ba5df: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 005ba5e3: ADD ESP,0xc
// 005ba5e6: FLDZ
// 005ba5e8: FXCH
// 005ba5ea: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 005ba5ee: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005ba5f1: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005ba5f4: FNSTSW AX
// 005ba5f6: SAHF
// 005ba5f7: JA 0x005ba651
//   XREF to: 005ba651 (CONDITIONAL_JUMP)
// 005ba5f9: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 005ba5fd: FCOMP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 005ba601: FNSTSW AX
// 005ba603: SAHF
// 005ba604: JNC 0x005ba651
//   XREF to: 005ba651 (CONDITIONAL_JUMP)
// 005ba606: FLD1
// 005ba608: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005ba60b: FNSTSW AX
// 005ba60d: SAHF
// 005ba60e: JC 0x005ba651
//   XREF to: 005ba651 (CONDITIONAL_JUMP)
// 005ba610: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 005ba614: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005ba618: LEA EAX,[EBX + 0x24]
// 005ba61b: FLD float ptr [EAX]
// 005ba61d: FCHS
// 005ba61f: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (WRITE)
// 005ba623: FLD float ptr [EAX + 0x4]
// 005ba626: FCHS
// 005ba628: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 005ba62c: FLD float ptr [EAX + 0x8]
// 005ba62f: FCHS
// 005ba631: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x24] (DATA)
// 005ba635: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (WRITE)
// 005ba639: CMP ESI,EAX
// 005ba63b: JZ 0x005ba651
//   XREF to: 005ba651 (CONDITIONAL_JUMP)
// 005ba63d: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (DATA)
// 005ba641: MOV dword ptr [ESI],EAX
// 005ba643: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 005ba647: MOV dword ptr [ESI + 0x4],EAX
// 005ba64a: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 005ba64e: MOV dword ptr [ESI + 0x8],EAX
// 005ba651: INC EDI
//   Label: LAB_005ba651
// 005ba652: ADD EBX,0x38
// 005ba655: JMP 0x005ba5b3
//   XREF to: 005ba5b3 (UNCONDITIONAL_JUMP)
