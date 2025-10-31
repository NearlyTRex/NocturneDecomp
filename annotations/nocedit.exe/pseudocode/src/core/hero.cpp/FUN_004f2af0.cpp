// Name: core_hero.cpp_FUN_004f2af0
// Address: 004f2af0
// Address Range: [[004f2af0, 004f2c33]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f2af0()
// Cross-references:
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fdb7 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d3fc8 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f1244 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f85c3 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5b90 (005c5b90) at 005c5d54 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d907f [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0062ec0a = 0.5
//   CDemonSet* g_CDemonSetPtr = 03114278
//   undefined4 g_CDemonSetInstance.actor_list_ptr
//   undefined4 g_CDemonSetInstance.actor_list_data[0]
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_hero.cpp_FUN_004f2af0(undefined4 param_1) */

undefined4 core_hero_cpp_FUN_004f2af0(void)

{
  CBoundingBox3D *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  float fVar4;
  CDemonActor *in_stack_00000004;
  CBoundingBox3D local_64;
  undefined1 auStack_44 [12];
  undefined4 uStack_38;
  float fStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  pCVar1 = (*((in_stack_00000004->metadata).vtable)->getBoundingBox)(in_stack_00000004,&local_64);
  fStack_2c = (pCVar1->min).x + (pCVar1->max).x;
  fStack_28 = (pCVar1->min).y + (pCVar1->max).y;
  fStack_20 = fStack_2c * FLOAT_0062ec0a;
  fStack_24 = (pCVar1->min).z + (pCVar1->max).z;
  fStack_34 = fStack_28 * FLOAT_0062ec0a;
  fStack_18 = fStack_24 * FLOAT_0062ec0a;
  local_64.min.x = (float)&uStack_38;
  uStack_38 = 0;
  uStack_30 = 0x3fc00000;
  iVar2 = 0;
  fStack_1c = fStack_34;
  core_actor_cpp_CDemonActor_FUN_00408ec0(in_stack_00000004);
  fStack_14 = 1e+30;
  fVar4 = 0.0;
  for (iVar3 = 0; iVar3 < (int)g_CDemonSetPtr->actor_list_ptr; iVar3 = iVar3 + 1) {
    local_64.min.x = (float)auStack_44;
    local_64.min.y =
         (float)(**(code **)(*(int *)(*(int *)(g_CDemonSetPtr->actor_list_data + iVar2) + 0x154) +
                            0x58))();
    if ((0.0 <= local_64.min.y) && (local_64.min.y < fStack_14)) {
      fVar4 = *(float *)(g_CDemonSetPtr->actor_list_data + iVar2);
      fStack_14 = local_64.min.y;
    }
    iVar2 = iVar2 + 4;
  }
  if (fVar4 != 0.0) {
    local_64.min.x = fVar4;
    iVar2 = (**(code **)(*(int *)((int)fVar4 + 0x154) + 0x5c))();
    if (iVar2 != 0) {
      in_stack_00000004[0x8d].create_event[0x48] = '\0';
      in_stack_00000004[0x8d].create_event[0x49] = '\0';
      in_stack_00000004[0x8d].create_event[0x4a] = '\0';
      in_stack_00000004[0x8d].create_event[0x4b] = '\0';
    }
    return 1;
  }
  return 0;
}


// Assembly code:
// 004f2af0: PUSH EBX
//   Label: core_hero.cpp_FUN_004f2af0
// 004f2af1: PUSH ESI
// 004f2af2: PUSH EDI
// 004f2af3: PUSH EBP
// 004f2af4: MOV EBP,ESP
// 004f2af6: SUB ESP,0x54
// 004f2af9: AND ESP,0xfffffff8
// 004f2afc: LEA EDX,[ESP + 0x4]
//   XREF to: Stack[-0x64] (DATA)
// 004f2b00: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f2b03: PUSH EDX
// 004f2b04: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f2b07: MOV EAX,dword ptr [EAX + 0x154]
// 004f2b0d: PUSH EDX
// 004f2b0e: CALL dword ptr [EAX + 0x14]
// 004f2b11: LEA EDX,[EAX + 0xc]
// 004f2b14: FLD float ptr [EAX]
// 004f2b16: FADD float ptr [EDX]
// 004f2b18: ADD ESP,0x8
// 004f2b1b: FST float ptr [ESP + 0x34]
// 004f2b1f: FLD float ptr [EAX + 0x4]
// 004f2b22: FADD float ptr [EDX + 0x4]
// 004f2b25: FXCH
// 004f2b27: FLD float ptr [0x0062ec0a]
//   XREF to: 0062ec0a (READ)
// 004f2b2d: FXCH
// 004f2b2f: FMUL ST1
// 004f2b31: FXCH ST2
// 004f2b33: FST float ptr [ESP + 0x38]
// 004f2b37: FLD float ptr [EAX + 0x8]
// 004f2b3a: FADD float ptr [EDX + 0x8]
// 004f2b3d: FXCH
// 004f2b3f: FMUL ST2
// 004f2b41: FXCH
// 004f2b43: FST float ptr [ESP + 0x3c]
// 004f2b47: FMULP ST2
// 004f2b49: MOV EBX,0x3fc00000
// 004f2b4e: MOV EDI,0x7149f2ca
// 004f2b53: XOR ECX,ECX
// 004f2b55: FSTP float ptr [ESP + 0x44]
// 004f2b59: MOV EAX,dword ptr [ESP + 0x44]
// 004f2b5d: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f2b60: MOV dword ptr [ESP + 0x2c],EAX
// 004f2b64: LEA EAX,[ESP + 0x28]
// 004f2b68: FXCH
// 004f2b6a: FSTP float ptr [ESP + 0x40]
// 004f2b6e: PUSH EAX
// 004f2b6f: LEA EAX,[ESP + 0x20]
// 004f2b73: MOV dword ptr [ESP + 0x2c],ECX
// 004f2b77: PUSH EAX
// 004f2b78: MOV dword ptr [ESP + 0x38],EBX
// 004f2b7c: XOR EBX,EBX
// 004f2b7e: PUSH ESI
// 004f2b7f: FSTP float ptr [ESP + 0x54]
// 004f2b83: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004f2b88: ADD ESP,0xc
// 004f2b8b: XOR ESI,ESI
// 004f2b8d: MOV dword ptr [ESP + 0x4c],EDI
// 004f2b91: XOR EDI,EDI
// 004f2b93: MOV EAX,[0x006810c8]
//   Label: LAB_004f2b93
//   XREF to: 006810c8 (READ)
// 004f2b98: CMP ESI,dword ptr [EAX + 0x14d154]
//   XREF to: 032613cc (READ)
// 004f2b9e: JL 0x004f2bd2
//   XREF to: 004f2bd2 (CONDITIONAL_JUMP)
// 004f2ba0: TEST EDI,EDI
// 004f2ba2: JZ 0x004f2c2b
//   XREF to: 004f2c2b (CONDITIONAL_JUMP)
// 004f2ba8: PUSH EDI
// 004f2ba9: MOV EAX,dword ptr [EDI + 0x154]
// 004f2baf: CALL dword ptr [EAX + 0x5c]
// 004f2bb2: ADD ESP,0x4
// 004f2bb5: TEST EAX,EAX
// 004f2bb7: JZ 0x004f2bc6
//   XREF to: 004f2bc6 (CONDITIONAL_JUMP)
// 004f2bb9: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f2bbc: MOV dword ptr [EAX + 0xbe38],0x0
// 004f2bc6: MOV EAX,0x1
//   Label: LAB_004f2bc6
// 004f2bcb: MOV ESP,EBP
// 004f2bcd: POP EBP
// 004f2bce: POP EDI
// 004f2bcf: POP ESI
// 004f2bd0: POP EBX
// 004f2bd1: RET
// 004f2bd2: LEA EDX,[ESP + 0x1c]
//   Label: LAB_004f2bd2
// 004f2bd6: PUSH EDX
// 004f2bd7: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f2bda: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
// 004f2be1: PUSH EDX
// 004f2be2: MOV ECX,dword ptr [EAX + 0x154]
// 004f2be8: PUSH EAX
// 004f2be9: CALL dword ptr [ECX + 0x58]
// 004f2bec: MOV dword ptr [ESP + 0x5c],EAX
// 004f2bf0: FLD float ptr [ESP + 0x5c]
// 004f2bf4: ADD ESP,0xc
// 004f2bf7: FST float ptr [ESP]
// 004f2bfa: FLDZ
// 004f2bfc: FCOMPP
// 004f2bfe: FNSTSW AX
// 004f2c00: SAHF
// 004f2c01: JA 0x004f2c22
//   XREF to: 004f2c22 (CONDITIONAL_JUMP)
// 004f2c03: FLD float ptr [ESP]
// 004f2c06: FCOMP float ptr [ESP + 0x4c]
// 004f2c0a: FNSTSW AX
// 004f2c0c: SAHF
// 004f2c0d: JNC 0x004f2c22
//   XREF to: 004f2c22 (CONDITIONAL_JUMP)
// 004f2c0f: MOV EAX,dword ptr [ESP]
// 004f2c12: MOV dword ptr [ESP + 0x4c],EAX
// 004f2c16: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 004f2c1b: MOV EDI,dword ptr [EBX + EAX*0x1 + 0x14d158]
//   XREF to: 032613d0 (READ)
// 004f2c22: INC ESI
//   Label: LAB_004f2c22
// 004f2c23: ADD EBX,0x4
// 004f2c26: JMP 0x004f2b93
//   XREF to: 004f2b93 (UNCONDITIONAL_JUMP)
// 004f2c2b: XOR EAX,EAX
//   Label: LAB_004f2c2b
// 004f2c2d: MOV ESP,EBP
// 004f2c2f: POP EBP
// 004f2c30: POP EDI
// 004f2c31: POP ESI
// 004f2c32: POP EBX
// 004f2c33: RET
