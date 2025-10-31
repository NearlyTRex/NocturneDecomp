// Name: core_chain.cpp_FUN_00430eb0
// Address: 00430eb0
// Address Range: [[00430eb0, 00430fd6]]
// Convention: unknown
// Signature: undefined core_chain.cpp_FUN_00430eb0()
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408f10

#include "nocturne.h"

/* Signature: undefined1 actors_other_chain.cpp_FUN_00430eb0(undefined4 param_1, undefined4 param_2)
    */

CVector3f * core_chain_cpp_FUN_00430eb0(void)

{
  CVector3f *pCVar1;
  int iVar2;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  float local_40;
  float local_3c;
  float local_38;
  float local_1c;
  float local_18;
  float local_14;
  
  local_18 = 9999.0;
  local_14 = 9999.0;
  local_40 = -9999.0;
  local_3c = -9999.0;
  local_38 = -9999.0;
  local_1c = 9999.0;
  iVar2 = 0;
  if (0 < *(int *)in_stack_00000004[1].actor_name) {
    pCVar1 = &in_stack_00000004[1].metadata.runtime_vector2;
    do {
      if (pCVar1->x < local_1c) {
        local_1c = pCVar1->x;
      }
      if (pCVar1->y < local_18) {
        local_18 = pCVar1->y;
      }
      if (pCVar1->z < local_14) {
        local_14 = pCVar1->z;
      }
      if (local_40 < pCVar1->x) {
        local_40 = pCVar1->x;
      }
      if (local_3c < pCVar1->y) {
        local_3c = pCVar1->y;
      }
      if (local_38 < pCVar1->z) {
        local_38 = pCVar1->z;
      }
      iVar2 = iVar2 + 1;
      pCVar1 = pCVar1 + 3;
    } while (iVar2 < *(int *)in_stack_00000004[1].actor_name);
  }
  pCVar1 = core_actor_cpp_CDemonActor_FUN_00408f10(in_stack_00000004);
  if (in_stack_00000008 != pCVar1) {
    in_stack_00000008->x = pCVar1->x;
    in_stack_00000008->y = pCVar1->y;
    in_stack_00000008->z = pCVar1->z;
  }
  pCVar1 = core_actor_cpp_CDemonActor_FUN_00408f10(in_stack_00000004);
  if (in_stack_00000008 + 1 == pCVar1) {
    return in_stack_00000008;
  }
  in_stack_00000008[1].x = pCVar1->x;
  in_stack_00000008[1].y = pCVar1->y;
  in_stack_00000008[1].z = pCVar1->z;
  return in_stack_00000008;
}


// Assembly code:
// 00430eb0: PUSH EBX
//   Label: core_chain.cpp_FUN_00430eb0
// 00430eb1: PUSH ESI
// 00430eb2: PUSH EDI
// 00430eb3: PUSH EBP
// 00430eb4: SUB ESP,0x30
// 00430eb7: MOV ESI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x4] (READ)
// 00430ebb: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 00430ebf: MOV EDX,0x461c3c00
// 00430ec4: MOV EBP,0xc61c3c00
// 00430ec9: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00430ecd: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00430ed1: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x40] (DATA)
// 00430ed4: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x3c] (WRITE)
// 00430ed8: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x38] (WRITE)
// 00430edc: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00430ee0: MOV EBX,EDX
// 00430ee2: MOV ECX,dword ptr [ESI + 0x158]
// 00430ee8: XOR EBX,EDX
// 00430eea: TEST ECX,ECX
// 00430eec: JLE 0x00430f74
//   XREF to: 00430f74 (CONDITIONAL_JUMP)
// 00430ef2: LEA ECX,[ESI + 0x28c]
// 00430ef8: FLD float ptr [ECX]
//   Label: LAB_00430ef8
// 00430efa: MOV EDX,ECX
// 00430efc: FCOMP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x1c] (READ)
// 00430f00: FNSTSW AX
// 00430f02: SAHF
// 00430f03: JNC 0x00430f0b
//   XREF to: 00430f0b (CONDITIONAL_JUMP)
// 00430f05: MOV EAX,dword ptr [ECX]
// 00430f07: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00430f0b: FLD float ptr [EDX + 0x4]
//   Label: LAB_00430f0b
// 00430f0e: FCOMP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x18] (READ)
// 00430f12: FNSTSW AX
// 00430f14: SAHF
// 00430f15: JNC 0x00430f1e
//   XREF to: 00430f1e (CONDITIONAL_JUMP)
// 00430f17: MOV EAX,dword ptr [EDX + 0x4]
// 00430f1a: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00430f1e: FLD float ptr [EDX + 0x8]
//   Label: LAB_00430f1e
// 00430f21: FCOMP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x14] (READ)
// 00430f25: FNSTSW AX
// 00430f27: SAHF
// 00430f28: JNC 0x00430f31
//   XREF to: 00430f31 (CONDITIONAL_JUMP)
// 00430f2a: MOV EAX,dword ptr [EDX + 0x8]
// 00430f2d: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00430f31: FLD float ptr [EDX]
//   Label: LAB_00430f31
// 00430f33: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00430f36: FNSTSW AX
// 00430f38: SAHF
// 00430f39: JBE 0x00430f40
//   XREF to: 00430f40 (CONDITIONAL_JUMP)
// 00430f3b: MOV EAX,dword ptr [EDX]
// 00430f3d: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x40] (DATA)
// 00430f40: FLD float ptr [EDX + 0x4]
//   Label: LAB_00430f40
// 00430f43: FCOMP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x3c] (READ)
// 00430f47: FNSTSW AX
// 00430f49: SAHF
// 00430f4a: JBE 0x00430f53
//   XREF to: 00430f53 (CONDITIONAL_JUMP)
// 00430f4c: MOV EAX,dword ptr [EDX + 0x4]
// 00430f4f: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00430f53: FLD float ptr [EDX + 0x8]
//   Label: LAB_00430f53
// 00430f56: FCOMP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x38] (READ)
// 00430f5a: FNSTSW AX
// 00430f5c: SAHF
// 00430f5d: JBE 0x00430f66
//   XREF to: 00430f66 (CONDITIONAL_JUMP)
// 00430f5f: MOV EAX,dword ptr [EDX + 0x8]
// 00430f62: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00430f66: INC EBX
//   Label: LAB_00430f66
// 00430f67: MOV EBP,dword ptr [ESI + 0x158]
// 00430f6d: ADD ECX,0x24
// 00430f70: CMP EBX,EBP
// 00430f72: JL 0x00430ef8
//   XREF to: 00430ef8 (CONDITIONAL_JUMP)
// 00430f74: LEA EAX,[ESP + 0x24]
//   Label: LAB_00430f74
//   XREF to: Stack[-0x1c] (DATA)
// 00430f78: PUSH EAX
// 00430f79: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x34] (DATA)
// 00430f7d: PUSH EAX
// 00430f7e: PUSH ESI
// 00430f7f: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 00430f84: ADD ESP,0xc
// 00430f87: CMP EDI,EAX
// 00430f89: JZ 0x00430f9b
//   XREF to: 00430f9b (CONDITIONAL_JUMP)
// 00430f8b: MOV EDX,dword ptr [EAX]
// 00430f8d: MOV dword ptr [EDI],EDX
// 00430f8f: MOV EDX,dword ptr [EAX + 0x4]
// 00430f92: MOV dword ptr [EDI + 0x4],EDX
// 00430f95: MOV EDX,dword ptr [EAX + 0x8]
// 00430f98: MOV dword ptr [EDI + 0x8],EDX
// 00430f9b: MOV EAX,ESP
//   Label: LAB_00430f9b
// 00430f9d: PUSH EAX
// 00430f9e: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x28] (DATA)
// 00430fa2: PUSH EAX
// 00430fa3: PUSH ESI
// 00430fa4: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 00430fa9: LEA EDX,[EDI + 0xc]
// 00430fac: ADD ESP,0xc
// 00430faf: CMP EDX,EAX
// 00430fb1: JNZ 0x00430fbd
//   XREF to: 00430fbd (CONDITIONAL_JUMP)
// 00430fb3: MOV EAX,EDI
// 00430fb5: ADD ESP,0x30
// 00430fb8: POP EBP
// 00430fb9: POP EDI
// 00430fba: POP ESI
// 00430fbb: POP EBX
// 00430fbc: RET
// 00430fbd: MOV ECX,dword ptr [EAX]
//   Label: LAB_00430fbd
// 00430fbf: MOV dword ptr [EDX],ECX
// 00430fc1: MOV ECX,dword ptr [EAX + 0x4]
// 00430fc4: MOV dword ptr [EDX + 0x4],ECX
// 00430fc7: MOV ECX,dword ptr [EAX + 0x8]
// 00430fca: MOV dword ptr [EDX + 0x8],ECX
// 00430fcd: MOV EAX,EDI
// 00430fcf: ADD ESP,0x30
// 00430fd2: POP EBP
// 00430fd3: POP EDI
// 00430fd4: POP ESI
// 00430fd5: POP EBX
// 00430fd6: RET
