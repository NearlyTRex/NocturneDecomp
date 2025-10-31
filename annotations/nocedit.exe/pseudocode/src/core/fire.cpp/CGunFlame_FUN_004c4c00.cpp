// Name: core_fire.cpp_CGunFlame_FUN_004c4c00
// Address: 004c4c00
// Address Range: [[004c4c00, 004c4d48]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CGunFlame_FUN_004c4c00(CGunFlame * this_ptr)
// Cross-references:
//   core_fire.cpp_CGunFlame_process_FUN_004c4f60 (004c4f60) at 004c5066 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00629f23 = 25
//   double DOUBLE_00629f2b = 25
//   undefined4 DAT_02d13eb4
//   undefined4 DAT_02d13eb8
//   undefined4 DAT_02d13ebc
//   undefined4 DAT_02d13f80
//   undefined4 DAT_02d13f84
//   undefined4 DAT_02d13f88
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_charactr.cpp_CCharacter_FUN_0042b5b0
//   core_flamecan.cpp_FUN_004cb340
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0

#include "nocturne.h"

void __cdecl core_fire_cpp_CGunFlame_FUN_004c4c00(CGunFlame *this_ptr)

{
  CCharacter *this_ptr_00;
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int local_20;
  
  iVar5 = 0;
  if (0 < DAT_02d13eb4) {
    local_20 = 0;
    do {
      this_ptr_00 = *(CCharacter **)((int)&DAT_02d13eb8 + local_20);
      if (((*(int *)(this_ptr->field0_0x0 + 0x20) == 2) ||
          (*(int *)(this_ptr_00->field13_0x2620 + 4) != 0)) &&
         (fVar2 = (this_ptr_00->base_actor).location.position.x -
                  *(float *)(this_ptr->field0_0x0 + 4),
         fVar4 = (this_ptr_00->base_actor).location.position.y -
                 *(float *)(this_ptr->field0_0x0 + 8),
         fVar3 = (this_ptr_00->base_actor).location.position.z -
                 *(float *)(this_ptr->field0_0x0 + 0xc),
         fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= FLOAT_00629f23)) {
        core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
        core_actor_cpp_CDemonActor_FUN_00408f10(&this_ptr_00->base_actor);
        core_charactr_cpp_CCharacter_FUN_0042b5b0(this_ptr_00);
      }
      local_20 = local_20 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_02d13eb4);
  }
  iVar5 = 0;
  if (0 < DAT_02d13f80) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)((int)&DAT_02d13f84 + iVar6);
      fVar2 = *(float *)(iVar1 + 0x20) - *(float *)(this_ptr->field0_0x0 + 4);
      fVar4 = *(float *)(iVar1 + 0x24) - *(float *)(this_ptr->field0_0x0 + 8);
      fVar3 = *(float *)(iVar1 + 0x28) - *(float *)(this_ptr->field0_0x0 + 0xc);
      if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= (float)DOUBLE_00629f2b) {
        core_flamecan_cpp_FUN_004cb340();
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < DAT_02d13f80);
  }
  return;
}


// Assembly code:
// 004c4c00: PUSH EBX
//   Label: core_fire.cpp_CGunFlame_FUN_004c4c00
// 004c4c01: PUSH ESI
// 004c4c02: PUSH EDI
// 004c4c03: PUSH EBP
// 004c4c04: MOV EBP,ESP
// 004c4c06: SUB ESP,0x2c
// 004c4c09: AND ESP,0xfffffff8
// 004c4c0c: MOV EDX,dword ptr [0x02d13eb4]
//   XREF to: 02d13eb4 (READ)
// 004c4c12: XOR EDI,EDI
// 004c4c14: TEST EDX,EDX
// 004c4c16: JLE 0x004c4c5e
//   XREF to: 004c4c5e (CONDITIONAL_JUMP)
// 004c4c18: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004c4c1b: MOV dword ptr [ESP + 0x20],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 004c4c1f: ADD ESI,0x4
// 004c4c22: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004c4c22
//   XREF to: Stack[0x4] (READ)
// 004c4c25: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x20] (READ)
// 004c4c29: MOV EDX,dword ptr [EAX + 0x20]
// 004c4c2c: MOV EBX,dword ptr [EBX + 0x2d13eb8]
//   XREF to: 02d13eb8 (DATA)
//   XREF to: 02d13ebc (DATA)
// 004c4c32: CMP EDX,0x2
// 004c4c35: JZ 0x004c4cc3
//   XREF to: 004c4cc3 (CONDITIONAL_JUMP)
// 004c4c3b: CMP dword ptr [EBX + 0x2624],0x0
// 004c4c42: JNZ 0x004c4cc3
//   XREF to: 004c4cc3 (CONDITIONAL_JUMP)
// 004c4c48: MOV ECX,dword ptr [ESP + 0x20]
//   Label: LAB_004c4c48
//   XREF to: Stack[-0x20] (READ)
// 004c4c4c: MOV EBX,dword ptr [0x02d13eb4]
//   Label: LAB_004c4c4c
//   XREF to: 02d13eb4 (READ)
// 004c4c52: ADD ECX,0x4
// 004c4c55: INC EDI
// 004c4c56: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 004c4c5a: CMP EDI,EBX
// 004c4c5c: JL 0x004c4c22
//   XREF to: 004c4c22 (CONDITIONAL_JUMP)
// 004c4c5e: MOV EDI,dword ptr [0x02d13f80]
//   Label: LAB_004c4c5e
//   XREF to: 02d13f80 (READ)
// 004c4c64: XOR ESI,ESI
// 004c4c66: TEST EDI,EDI
// 004c4c68: JLE 0x004c4cbc
//   XREF to: 004c4cbc (CONDITIONAL_JUMP)
// 004c4c6a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004c4c6d: ADD EAX,0x4
// 004c4c70: XOR EDI,EDI
// 004c4c72: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004c4c76: MOV EDX,dword ptr [EDI + 0x2d13f84]
//   Label: LAB_004c4c76
//   XREF to: 02d13f84 (READ)
//   XREF to: 02d13f88 (READ)
// 004c4c7c: LEA EBX,[EDX + 0x20]
// 004c4c7f: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x24] (READ)
// 004c4c83: FLD float ptr [EBX]
// 004c4c85: FSUB float ptr [EAX]
// 004c4c87: FMUL ST0
// 004c4c89: FLD float ptr [EBX + 0x4]
// 004c4c8c: FSUB float ptr [EAX + 0x4]
// 004c4c8f: FMUL ST0
// 004c4c91: FLD float ptr [EBX + 0x8]
// 004c4c94: FXCH
// 004c4c96: FADDP ST2,ST0
// 004c4c98: FSUB float ptr [EAX + 0x8]
// 004c4c9b: FMUL ST0
// 004c4c9d: FADDP
// 004c4c9f: FCOMP double ptr [0x00629f2b]
//   XREF to: 00629f2b (READ)
// 004c4ca5: FNSTSW AX
// 004c4ca7: SAHF
// 004c4ca8: JBE 0x004c4d3b
//   XREF to: 004c4d3b (CONDITIONAL_JUMP)
// 004c4cae: MOV ECX,dword ptr [0x02d13f80]
//   Label: LAB_004c4cae
//   XREF to: 02d13f80 (READ)
// 004c4cb4: INC ESI
// 004c4cb5: ADD EDI,0x4
// 004c4cb8: CMP ESI,ECX
// 004c4cba: JL 0x004c4c76
//   XREF to: 004c4c76 (CONDITIONAL_JUMP)
// 004c4cbc: MOV ESP,EBP
//   Label: LAB_004c4cbc
// 004c4cbe: POP EBP
// 004c4cbf: POP EDI
// 004c4cc0: POP ESI
// 004c4cc1: POP EBX
// 004c4cc2: RET
// 004c4cc3: LEA EAX,[EBX + 0x20]
//   Label: LAB_004c4cc3
// 004c4cc6: FLD float ptr [EAX]
// 004c4cc8: FSUB float ptr [ESI]
// 004c4cca: FMUL ST0
// 004c4ccc: FLD float ptr [EAX + 0x4]
// 004c4ccf: FSUB float ptr [ESI + 0x4]
// 004c4cd2: FMUL ST0
// 004c4cd4: FLD float ptr [EAX + 0x8]
// 004c4cd7: FXCH
// 004c4cd9: FADDP ST2,ST0
// 004c4cdb: FSUB float ptr [ESI + 0x8]
// 004c4cde: FMUL ST0
// 004c4ce0: FADDP
// 004c4ce2: FCOMP float ptr [0x00629f23]
//   XREF to: 00629f23 (READ)
// 004c4ce8: FNSTSW AX
// 004c4cea: SAHF
// 004c4ceb: JA 0x004c4c48
//   XREF to: 004c4c48 (CONDITIONAL_JUMP)
// 004c4cf1: LEA EAX,[EBX + 0x158]
// 004c4cf7: PUSH EAX
// 004c4cf8: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 004c4cfd: ADD ESP,0x4
// 004c4d00: PUSH ESI
// 004c4d01: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x40] (DATA)
// 004c4d05: PUSH EAX
// 004c4d06: PUSH EBX
// 004c4d07: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 004c4d0c: ADD ESP,0xc
// 004c4d0f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004c4d12: CMP dword ptr [EAX + 0x20],0x2
// 004c4d16: SETZ AL
// 004c4d19: AND EAX,0xff
// 004c4d1e: PUSH EAX
// 004c4d1f: PUSH 0x3f800000
// 004c4d24: PUSH 0x0
// 004c4d26: PUSH 0x0
// 004c4d28: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x40] (DATA)
// 004c4d2c: PUSH EAX
// 004c4d2d: PUSH EBX
// 004c4d2e: CALL core_charactr.cpp_CCharacter_FUN_0042b5b0
//   XREF to: 0042b5b0 (UNCONDITIONAL_CALL)
// 004c4d33: ADD ESP,0x18
// 004c4d36: JMP 0x004c4c48
//   XREF to: 004c4c48 (UNCONDITIONAL_JUMP)
// 004c4d3b: PUSH EDX
//   Label: LAB_004c4d3b
// 004c4d3c: CALL core_flamecan.cpp_FUN_004cb340
//   XREF to: 004cb340 (UNCONDITIONAL_CALL)
// 004c4d41: ADD ESP,0x4
// 004c4d44: JMP 0x004c4cae
//   XREF to: 004c4cae (UNCONDITIONAL_JUMP)
