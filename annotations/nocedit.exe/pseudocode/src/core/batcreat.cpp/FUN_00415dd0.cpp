// Name: core_batcreat.cpp_FUN_00415dd0
// Address: 00415dd0
// Address Range: [[00415dd0, 0041602e]]
// Convention: unknown
// Signature: undefined core_batcreat.cpp_FUN_00415dd0()
// Cross-references:
//   core_batcreat.cpp_FUN_00416030 (00416030) at 004160b6 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_00415db8 = 00415e0d
//   TerminatedCString s_limb_wav_0061567e
//   undefined4 DAT_00615689
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.blood_flag
//   undefined4 g_CGameInstance.field57_0x1e0
// Function calls:
//   core_actor.cpp_FUN_0040cd10
//   core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   core_bodypart.cpp_FUN_0041a050
//   core_charactr.cpp_CCharacter_FUN_0042bcc0
//   core_charactr.cpp_CCharacter_FUN_0042bd30
//   core_charactr.cpp_CCharacter_FUN_0042f300
//   crt_stdlib.c_rand_FUN_005feb5c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_batcreature.cpp_FUN_00415dd0(undefined4 param_1, undefined4
   param_2) */

void core_batcreat_cpp_FUN_00415dd0(void)

{
  int iVar1;
  CCharacter *in_stack_00000004;
  int *in_stack_00000008;
  
  if ((0.0 < (float)in_stack_00000008[0xb]) && (*in_stack_00000008 == -1)) {
    iVar1 = crt_stdlib_c_rand_FUN_005feb5c();
    switch(iVar1 % 6) {
    case 0:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x40);
      break;
    case 1:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x44);
      break;
    case 2:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x48);
      break;
    case 3:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x4c);
      break;
    case 4:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20);
      break;
    case 5:
      iVar1 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24);
      break;
    default:
      goto switchD_00415e06_default;
    }
    *in_stack_00000008 = iVar1;
  }
switchD_00415e06_default:
  iVar1 = *in_stack_00000008;
  if ((((iVar1 != *(int *)(in_stack_00000004[1].base_actor.create_event + 0x40)) &&
       (iVar1 != *(int *)(in_stack_00000004[1].base_actor.create_event + 0x44))) &&
      (iVar1 != *(int *)(in_stack_00000004[1].base_actor.create_event + 0x48))) &&
     (((iVar1 != *(int *)(in_stack_00000004[1].base_actor.create_event + 0x4c) &&
       (iVar1 != *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24))) &&
      (iVar1 != *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20))))) {
    return;
  }
  iVar1 = core_actor_cpp_FUN_0040cd10();
  if (iVar1 == 0) {
    return;
  }
  core_bodypart_cpp_CreateBodyPart_FUN_00418e10();
  core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
  if (*in_stack_00000008 == *(int *)(in_stack_00000004[1].base_actor.create_event + 0x40)) {
    core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
  }
  if (*(int *)(in_stack_00000004[1].base_actor.create_event + 0x48) == *in_stack_00000008) {
    core_charactr_cpp_CCharacter_FUN_0042bd30(in_stack_00000004);
  }
  if (*(int *)(in_stack_00000004[1].base_actor.create_event + 0x24) == *in_stack_00000008) {
    core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
    core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
    core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
    core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
    core_charactr_cpp_CCharacter_FUN_0042bcc0(in_stack_00000004);
  }
  core_charactr_cpp_CCharacter_FUN_0042f300(in_stack_00000004);
  core_bodypart_cpp_FUN_0041a050();
  if (*(int *)((in_stack_00000004->model).padding_0x0 +
              *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20) * 4 + 0x2140) == 0) {
    in_stack_00000008[1] = 0x461c3c00;
  }
  in_stack_00000008[2] = (int)((float)in_stack_00000008[2] * (float)_DAT_00615689);
  return;
}


// Assembly code:
// 00415dd0: PUSH EBX
//   Label: core_batcreat.cpp_FUN_00415dd0
// 00415dd1: PUSH ESI
// 00415dd2: PUSH EDI
// 00415dd3: PUSH EBP
// 00415dd4: SUB ESP,0xc
// 00415dd7: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00415ddb: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00415ddf: FLD float ptr [ESI + 0x2c]
// 00415de2: FLDZ
// 00415de4: FCOMPP
// 00415de6: FNSTSW AX
// 00415de8: SAHF
// 00415de9: JNC 0x00415e15
//   XREF to: 00415e15 (CONDITIONAL_JUMP)
// 00415deb: CMP dword ptr [ESI],-0x1
// 00415dee: JNZ 0x00415e15
//   XREF to: 00415e15 (CONDITIONAL_JUMP)
// 00415df0: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 00415df5: MOV EDX,EAX
// 00415df7: MOV EDI,0x6
// 00415dfc: SAR EDX,0x1f
// 00415dff: IDIV EDI
// 00415e01: CMP EDX,0x5
// 00415e04: JA 0x00415e15
//   XREF to: 00415e15 (CONDITIONAL_JUMP)
// 00415e06: JMP dword ptr [EDX*0x4 + 0x415db8]
//   Label: switchD
//   XREF to: 00415e0d (COMPUTED_JUMP)
//   XREF to: 00415e92 (COMPUTED_JUMP)
//   XREF to: 00415e9d (COMPUTED_JUMP)
//   XREF to: 00415ea8 (COMPUTED_JUMP)
//   XREF to: 00415eb3 (COMPUTED_JUMP)
//   XREF to: 00415ebe (COMPUTED_JUMP)
//   XREF to: 00415db8 (DATA)
// 00415e0d: MOV EAX,dword ptr [EBX + 0xbedc]
//   Label: caseD_0
// 00415e13: MOV dword ptr [ESI],EAX
//   Label: LAB_00415e13
// 00415e15: MOV ECX,dword ptr [EBX + 0xbedc]
//   Label: default
// 00415e1b: MOV EAX,dword ptr [ESI]
// 00415e1d: CMP EAX,ECX
// 00415e1f: JNZ 0x00415ec9
//   XREF to: 00415ec9 (CONDITIONAL_JUMP)
// 00415e25: MOV EAX,dword ptr [ESI + 0x2c]
//   Label: LAB_00415e25
// 00415e28: MOV EBP,dword ptr [EBX + 0xbebc]
// 00415e2e: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00415e32: CMP EBP,dword ptr [ESI]
// 00415e34: JNZ 0x00415e3e
//   XREF to: 00415e3e (CONDITIONAL_JUMP)
// 00415e36: MOV dword ptr [ESP + 0x8],0x3d4ccccd
//   XREF to: Stack[-0x14] (WRITE)
// 00415e3e: MOV EDX,dword ptr [EBX + 0xbec0]
//   Label: LAB_00415e3e
// 00415e44: CMP EDX,dword ptr [ESI]
// 00415e46: JNZ 0x00415e50
//   XREF to: 00415e50 (CONDITIONAL_JUMP)
// 00415e48: MOV dword ptr [ESP + 0x8],0x3ca3d70a
//   XREF to: Stack[-0x14] (WRITE)
// 00415e50: MOV EAX,[0x0067b654]
//   Label: LAB_00415e50
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00415e55: CMP dword ptr [EAX + 0x1e0],0x0
//   XREF to: 02d81c7c (READ)
// 00415e5c: JZ 0x00415e66
//   XREF to: 00415e66 (CONDITIONAL_JUMP)
// 00415e5e: MOV dword ptr [ESP + 0x8],0x3f800000
//   XREF to: Stack[-0x14] (WRITE)
// 00415e66: MOV EAX,[0x0067b654]
//   Label: LAB_00415e66
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00415e6b: MOV EDX,dword ptr [EAX + 0x14]
//   XREF to: 02d81ab0 (READ)
// 00415e6e: TEST EDX,EDX
// 00415e70: JNZ 0x00415e76
//   XREF to: 00415e76 (CONDITIONAL_JUMP)
// 00415e72: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00415e76: PUSH dword ptr [ESP + 0x8]
//   Label: LAB_00415e76
//   XREF to: Stack[-0x14] (READ)
// 00415e7a: CALL core_actor.cpp_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 00415e7f: ADD ESP,0x4
// 00415e82: TEST EAX,EAX
// 00415e84: JNZ 0x00415f0d
//   XREF to: 00415f0d (CONDITIONAL_JUMP)
// 00415e8a: ADD ESP,0xc
// 00415e8d: POP EBP
// 00415e8e: POP EDI
// 00415e8f: POP ESI
// 00415e90: POP EBX
// 00415e91: RET
// 00415e92: MOV EAX,dword ptr [EBX + 0xbee0]
//   Label: caseD_1
// 00415e98: JMP 0x00415e13
//   XREF to: 00415e13 (UNCONDITIONAL_JUMP)
// 00415e9d: MOV EAX,dword ptr [EBX + 0xbee4]
//   Label: caseD_2
// 00415ea3: JMP 0x00415e13
//   XREF to: 00415e13 (UNCONDITIONAL_JUMP)
// 00415ea8: MOV EAX,dword ptr [EBX + 0xbee8]
//   Label: caseD_3
// 00415eae: JMP 0x00415e13
//   XREF to: 00415e13 (UNCONDITIONAL_JUMP)
// 00415eb3: MOV EAX,dword ptr [EBX + 0xbebc]
//   Label: caseD_4
// 00415eb9: JMP 0x00415e13
//   XREF to: 00415e13 (UNCONDITIONAL_JUMP)
// 00415ebe: MOV EAX,dword ptr [EBX + 0xbec0]
//   Label: caseD_5
// 00415ec4: JMP 0x00415e13
//   XREF to: 00415e13 (UNCONDITIONAL_JUMP)
// 00415ec9: CMP EAX,dword ptr [EBX + 0xbee0]
//   Label: LAB_00415ec9
// 00415ecf: JZ 0x00415e25
//   XREF to: 00415e25 (CONDITIONAL_JUMP)
// 00415ed5: CMP EAX,dword ptr [EBX + 0xbee4]
// 00415edb: JZ 0x00415e25
//   XREF to: 00415e25 (CONDITIONAL_JUMP)
// 00415ee1: CMP EAX,dword ptr [EBX + 0xbee8]
// 00415ee7: JZ 0x00415e25
//   XREF to: 00415e25 (CONDITIONAL_JUMP)
// 00415eed: CMP EAX,dword ptr [EBX + 0xbec0]
// 00415ef3: JZ 0x00415e25
//   XREF to: 00415e25 (CONDITIONAL_JUMP)
// 00415ef9: CMP EAX,dword ptr [EBX + 0xbebc]
// 00415eff: JZ 0x00415e25
//   XREF to: 00415e25 (CONDITIONAL_JUMP)
// 00415f05: ADD ESP,0xc
// 00415f08: POP EBP
// 00415f09: POP EDI
// 00415f0a: POP ESI
// 00415f0b: POP EBX
// 00415f0c: RET
// 00415f0d: MOV EDI,dword ptr [EBX + 0x2610]
//   Label: LAB_00415f0d
// 00415f13: PUSH EDI
// 00415f14: PUSH 0x0
// 00415f16: PUSH 0x0
// 00415f18: PUSH EBX
// 00415f19: LEA EAX,[ESI + 0xc]
// 00415f1c: PUSH EAX
// 00415f1d: LEA EAX,[EBX + 0x30]
// 00415f20: PUSH EAX
// 00415f21: LEA EAX,[EBX + 0x20]
// 00415f24: PUSH EAX
// 00415f25: CALL core_bodypart.cpp_CreateBodyPart_FUN_00418e10
//   XREF to: 00418e10 (UNCONDITIONAL_CALL)
// 00415f2a: ADD ESP,0x1c
// 00415f2d: MOV EDI,EAX
// 00415f2f: PUSH 0x0
// 00415f31: MOV EBP,EAX
// 00415f33: MOV EAX,dword ptr [ESI]
// 00415f35: PUSH EAX
// 00415f36: PUSH EDI
// 00415f37: PUSH EBX
// 00415f38: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 00415f3d: MOV EAX,dword ptr [ESI]
// 00415f3f: MOV EDX,dword ptr [EBX + 0xbedc]
// 00415f45: ADD ESP,0x10
// 00415f48: CMP EAX,EDX
// 00415f4a: JNZ 0x00415f5f
//   XREF to: 00415f5f (CONDITIONAL_JUMP)
// 00415f4c: PUSH 0x0
// 00415f4e: MOV ECX,dword ptr [EBX + 0xbee0]
// 00415f54: PUSH ECX
// 00415f55: PUSH EDI
// 00415f56: PUSH EBX
// 00415f57: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 00415f5c: ADD ESP,0x10
// 00415f5f: MOV EDI,dword ptr [EBX + 0xbee4]
//   Label: LAB_00415f5f
// 00415f65: CMP EDI,dword ptr [ESI]
// 00415f67: JNZ 0x00415f7c
//   XREF to: 00415f7c (CONDITIONAL_JUMP)
// 00415f69: PUSH 0x0
// 00415f6b: MOV EAX,dword ptr [EBX + 0xbee8]
// 00415f71: PUSH EAX
// 00415f72: PUSH EBP
// 00415f73: PUSH EBX
// 00415f74: CALL core_charactr.cpp_CCharacter_FUN_0042bd30
//   XREF to: 0042bd30 (UNCONDITIONAL_CALL)
// 00415f79: ADD ESP,0x10
// 00415f7c: MOV EDX,dword ptr [EBX + 0xbec0]
//   Label: LAB_00415f7c
// 00415f82: CMP EDX,dword ptr [ESI]
// 00415f84: JNZ 0x00415fe8
//   XREF to: 00415fe8 (CONDITIONAL_JUMP)
// 00415f86: PUSH 0x0
// 00415f88: LEA EDI,[ESI + 0xc]
// 00415f8b: PUSH EDI
// 00415f8c: MOV ECX,dword ptr [EBX + 0xbee4]
// 00415f92: PUSH ECX
// 00415f93: PUSH EBX
// 00415f94: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 00415f99: ADD ESP,0x10
// 00415f9c: PUSH 0x0
// 00415f9e: PUSH EDI
// 00415f9f: MOV EAX,dword ptr [EBX + 0xbee8]
// 00415fa5: PUSH EAX
// 00415fa6: PUSH EBX
// 00415fa7: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 00415fac: ADD ESP,0x10
// 00415faf: PUSH 0x0
// 00415fb1: PUSH EDI
// 00415fb2: MOV EDX,dword ptr [EBX + 0xbedc]
// 00415fb8: PUSH EDX
// 00415fb9: PUSH EBX
// 00415fba: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 00415fbf: ADD ESP,0x10
// 00415fc2: PUSH 0x0
// 00415fc4: PUSH EDI
// 00415fc5: MOV ECX,dword ptr [EBX + 0xbee0]
// 00415fcb: PUSH ECX
// 00415fcc: PUSH EBX
// 00415fcd: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 00415fd2: ADD ESP,0x10
// 00415fd5: PUSH 0x0
// 00415fd7: PUSH EDI
// 00415fd8: MOV EDI,dword ptr [EBX + 0xbebc]
// 00415fde: PUSH EDI
// 00415fdf: PUSH EBX
// 00415fe0: CALL core_charactr.cpp_CCharacter_FUN_0042bcc0
//   XREF to: 0042bcc0 (UNCONDITIONAL_CALL)
// 00415fe5: ADD ESP,0x10
// 00415fe8: PUSH 0x61567e
//   Label: LAB_00415fe8
//   XREF to: 0061567e (DATA)
// 00415fed: PUSH EBX
// 00415fee: CALL core_charactr.cpp_CCharacter_FUN_0042f300
//   XREF to: 0042f300 (UNCONDITIONAL_CALL)
// 00415ff3: ADD ESP,0x8
// 00415ff6: PUSH EBP
// 00415ff7: CALL core_bodypart.cpp_FUN_0041a050
//   XREF to: 0041a050 (UNCONDITIONAL_CALL)
// 00415ffc: MOV EAX,dword ptr [EBX + 0xbebc]
// 00416002: MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298]
// 00416009: ADD ESP,0x4
// 0041600c: TEST EBP,EBP
// 0041600e: JNZ 0x00416017
//   XREF to: 00416017 (CONDITIONAL_JUMP)
// 00416010: MOV dword ptr [ESI + 0x4],0x461c3c00
// 00416017: FLD float ptr [ESI + 0x8]
//   Label: LAB_00416017
// 0041601a: FLD ST0
// 0041601c: FMUL double ptr [0x00615689]
//   XREF to: 00615689 (READ)
// 00416022: FSTP ST1
// 00416024: FSTP float ptr [ESI + 0x8]
// 00416027: ADD ESP,0xc
// 0041602a: POP EBP
// 0041602b: POP EDI
// 0041602c: POP ESI
// 0041602d: POP EBX
// 0041602e: RET
