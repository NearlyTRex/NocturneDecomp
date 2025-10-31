// Name: core_gore.cpp_FUN_004ed0d0
// Address: 004ed0d0
// Address Range: [[004ed0d0, 004ed15b]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ed0d0()
// Cross-references:
//   core_gore.cpp_FUN_004ede30 (004ede30) at 004ede52 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0062e39a = 0.1000000
//   undefined4 DAT_0065f024
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_actor.cpp_FUN_0040cc70
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_gore.cpp_FUN_004ed0d0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_gore_cpp_FUN_004ed0d0(void)

{
  CDemonSet *this_ptr;
  undefined4 uVar1;
  float fVar2;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  undefined4 in_stack_00000014;
  
  uVar1 = core_actor_cpp_FUN_0040cc70();
  this_ptr = g_CDemonSetPtr;
  *(undefined4 *)(in_stack_00000004 + 0x14) = uVar1;
  *(float *)(in_stack_00000004 + 4) = in_stack_00000008->x;
  fVar2 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                    (this_ptr,in_stack_00000008,0.0);
  *(float *)(in_stack_00000004 + 8) = fVar2;
  *(float *)(in_stack_00000004 + 0xc) = in_stack_00000008->z;
  *(undefined4 *)(in_stack_00000004 + 0x18) = 0;
  *(float *)(in_stack_00000004 + 8) = *(float *)(in_stack_00000004 + 8) + FLOAT_0062e39a;
  *(int *)(in_stack_00000004 + 0x1c) = (int)ROUND(*(float *)(in_stack_00000004 + 4) * _DAT_0065f024)
  ;
  *(int *)(in_stack_00000004 + 0x20) = (int)ROUND(*(float *)(in_stack_00000004 + 8) * _DAT_0065f024)
  ;
  *(int *)(in_stack_00000004 + 0x24) =
       (int)ROUND(*(float *)(in_stack_00000004 + 0xc) * _DAT_0065f024);
  *(undefined4 *)(in_stack_00000004 + 0x10) = in_stack_00000014;
  return;
}


// Assembly code:
// 004ed0d0: PUSH EBX
//   Label: core_gore.cpp_FUN_004ed0d0
// 004ed0d1: PUSH ESI
// 004ed0d2: SUB ESP,0x4
// 004ed0d5: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004ed0d9: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004ed0dd: PUSH 0x3
// 004ed0df: PUSH 0x0
// 004ed0e1: CALL core_actor.cpp_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 004ed0e6: ADD ESP,0x8
// 004ed0e9: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004ed0ef: PUSH 0x0
// 004ed0f1: MOV dword ptr [ESI + 0x14],EAX
// 004ed0f4: PUSH EBX
// 004ed0f5: FLD float ptr [EBX]
// 004ed0f7: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004ed0f8: FSTP float ptr [ESI + 0x4]
// 004ed0fb: CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
//   XREF to: 005716b0 (UNCONDITIONAL_CALL)
// 004ed100: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 004ed104: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0xc] (READ)
// 004ed108: LEA EAX,[ESI + 0x4]
// 004ed10b: FSTP float ptr [ESI + 0x8]
// 004ed10e: ADD ESP,0xc
// 004ed111: FLD float ptr [ESI + 0x8]
// 004ed114: MOV EDX,dword ptr [EBX + 0x8]
// 004ed117: MOV dword ptr [ESI + 0xc],EDX
// 004ed11a: MOV dword ptr [ESI + 0x18],0x0
// 004ed121: FADD float ptr [0x0062e39a]
//   XREF to: 0062e39a (READ)
// 004ed127: LEA EBX,[ESI + 0x1c]
// 004ed12a: FSTP float ptr [ESI + 0x8]
// 004ed12d: FLD float ptr [EAX]
// 004ed12f: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ed135: FISTP dword ptr [EBX]
// 004ed137: FLD float ptr [EAX + 0x4]
// 004ed13a: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ed140: FISTP dword ptr [EBX + 0x4]
// 004ed143: FLD float ptr [EAX + 0x8]
// 004ed146: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ed14c: FISTP dword ptr [EBX + 0x8]
// 004ed14f: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004ed153: MOV dword ptr [ESI + 0x10],EAX
// 004ed156: ADD ESP,0x4
// 004ed159: POP ESI
// 004ed15a: POP EBX
// 004ed15b: RET
