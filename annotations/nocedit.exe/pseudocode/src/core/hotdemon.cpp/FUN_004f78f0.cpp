// Name: core_hotdemon.cpp_FUN_004f78f0
// Address: 004f78f0
// Address Range: [[004f78f0, 004f79aa]]
// Convention: unknown
// Signature: undefined core_hotdemon.cpp_FUN_004f78f0()
// Globals:
//   undefined4 DAT_02db88c8
//   undefined4 DAT_02db88ec
//   undefined4 DAT_02db88f4
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_hotdemon.cpp_FUN_004f78f0(undefined4 param_1, undefined4
   param_2) */

undefined4 core_hotdemon_cpp_FUN_004f78f0(void)

{
  undefined4 *puVar1;
  undefined4 *in_stack_00000008;
  
  puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
  if (in_stack_00000008 != puVar1) {
    *in_stack_00000008 = *puVar1;
    in_stack_00000008[1] = puVar1[1];
    in_stack_00000008[2] = puVar1[2];
  }
  puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
  if (in_stack_00000008 + 3 != puVar1) {
    in_stack_00000008[3] = *puVar1;
    in_stack_00000008[4] = puVar1[1];
    in_stack_00000008[5] = puVar1[2];
  }
  puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
  if (in_stack_00000008 + 6 == puVar1) {
    return 3;
  }
  in_stack_00000008[6] = *puVar1;
  in_stack_00000008[7] = puVar1[1];
  in_stack_00000008[8] = puVar1[2];
  return 3;
}


// Assembly code:
// 004f78f0: PUSH EBX
//   Label: core_hotdemon.cpp_FUN_004f78f0
// 004f78f1: PUSH ESI
// 004f78f2: PUSH EDI
// 004f78f3: PUSH EBP
// 004f78f4: SUB ESP,0x24
// 004f78f7: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 004f78fb: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 004f78ff: MOV EDX,dword ptr [0x02db88c8]
//   XREF to: 02db88c8 (READ)
// 004f7905: PUSH EDX
// 004f7906: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x28] (DATA)
// 004f790a: PUSH EAX
// 004f790b: LEA EAX,[EDI + 0x158]
// 004f7911: PUSH EAX
// 004f7912: MOV ESI,0x3
// 004f7917: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004f791c: ADD ESP,0xc
// 004f791f: CMP EBX,EAX
// 004f7921: JZ 0x004f7933
//   XREF to: 004f7933 (CONDITIONAL_JUMP)
// 004f7923: MOV EDX,dword ptr [EAX]
// 004f7925: MOV dword ptr [EBX],EDX
// 004f7927: MOV EDX,dword ptr [EAX + 0x4]
// 004f792a: MOV dword ptr [EBX + 0x4],EDX
// 004f792d: MOV EDX,dword ptr [EAX + 0x8]
// 004f7930: MOV dword ptr [EBX + 0x8],EDX
// 004f7933: MOV ECX,dword ptr [0x02db88ec]
//   Label: LAB_004f7933
//   XREF to: 02db88ec (READ)
// 004f7939: PUSH ECX
// 004f793a: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x1c] (DATA)
// 004f793e: PUSH EAX
// 004f793f: LEA EAX,[EDI + 0x158]
// 004f7945: PUSH EAX
// 004f7946: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004f794b: LEA EDX,[EBX + 0xc]
// 004f794e: ADD ESP,0xc
// 004f7951: CMP EDX,EAX
// 004f7953: JZ 0x004f7965
//   XREF to: 004f7965 (CONDITIONAL_JUMP)
// 004f7955: MOV ECX,dword ptr [EAX]
// 004f7957: MOV dword ptr [EDX],ECX
// 004f7959: MOV ECX,dword ptr [EAX + 0x4]
// 004f795c: MOV dword ptr [EDX + 0x4],ECX
// 004f795f: MOV ECX,dword ptr [EAX + 0x8]
// 004f7962: MOV dword ptr [EDX + 0x8],ECX
// 004f7965: MOV EBP,dword ptr [0x02db88f4]
//   Label: LAB_004f7965
//   XREF to: 02db88f4 (READ)
// 004f796b: PUSH EBP
// 004f796c: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x34] (DATA)
// 004f7970: PUSH EAX
// 004f7971: LEA EAX,[EDI + 0x158]
// 004f7977: PUSH EAX
// 004f7978: ADD EBX,0x18
// 004f797b: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004f7980: ADD ESP,0xc
// 004f7983: CMP EBX,EAX
// 004f7985: JNZ 0x004f7991
//   XREF to: 004f7991 (CONDITIONAL_JUMP)
// 004f7987: MOV EAX,ESI
// 004f7989: ADD ESP,0x24
// 004f798c: POP EBP
// 004f798d: POP EDI
// 004f798e: POP ESI
// 004f798f: POP EBX
// 004f7990: RET
// 004f7991: MOV EDX,dword ptr [EAX]
//   Label: LAB_004f7991
// 004f7993: MOV dword ptr [EBX],EDX
// 004f7995: MOV EDX,dword ptr [EAX + 0x4]
// 004f7998: MOV dword ptr [EBX + 0x4],EDX
// 004f799b: MOV EDX,dword ptr [EAX + 0x8]
// 004f799e: MOV dword ptr [EBX + 0x8],EDX
// 004f79a1: MOV EAX,ESI
// 004f79a3: ADD ESP,0x24
// 004f79a6: POP EBP
// 004f79a7: POP EDI
// 004f79a8: POP ESI
// 004f79a9: POP EBX
// 004f79aa: RET
