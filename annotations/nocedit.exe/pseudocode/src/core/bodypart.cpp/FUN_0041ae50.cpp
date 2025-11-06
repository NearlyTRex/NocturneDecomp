// Name: core_bodypart.cpp_FUN_0041ae50
// Address: 0041ae50
// Address Range: [[0041ae50, 0041af6e] [0041af82, 0041af87]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_0041ae50()
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042bd30 (0042bd30) at 0042bf1a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CHAR2_RAW_00615e60
//   undefined4 s_HAR2.RAW_00615e61
//   undefined4 s_AR2.RAW_00615e62
//   undefined4 s_R2.RAW_00615e63
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_flame.cpp_FUN_004c9b90

#include "nocturne.h"

void core_bodypart_cpp_FUN_0041ae50(void)

{
  char cVar1;
  CVector3f *pCVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  CVector3f *input_local_point;
  char *pcVar6;
  float *pfVar7;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f local_18;
  
  iVar5 = *(int *)(in_stack_00000004[5].create_event + 0x1c);
  if (iVar5 < 2) {
    input_local_point = (CVector3f *)(in_stack_00000004[iVar5 * 2 + 5].create_event + 0x20);
    *(int *)(in_stack_00000004[5].create_event + 0x1c) = iVar5 + 1;
    if (input_local_point != in_stack_00000008) {
      input_local_point->x = in_stack_00000008->x;
      input_local_point->y = in_stack_00000008->y;
      input_local_point->z = in_stack_00000008->z;
    }
    pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (in_stack_00000004,&local_18,input_local_point);
    input_local_point[3].z = pCVar2->x;
    input_local_point[4].x = pCVar2->y;
    input_local_point[4].y = pCVar2->z;
    core_flame_cpp_FUN_004c9b90();
    input_local_point[0x24].z = 0.0;
    input_local_point[0x1d].z = 1.5;
    input_local_point[0x1e].x = 3.0;
    pfVar7 = &in_stack_00000004[1].orient_matrix.m[0].y;
    input_local_point[0x1e].y = 1.5;
    in_stack_00000004->is_transparent = 1;
    pcVar6 = "CHAR2.RAW";
    in_stack_00000004[1].orient.bank = 1.4013e-45;
    do {
      cVar1 = *pcVar6;
      *(char *)pfVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      *(char *)((int)pfVar7 + 1) = cVar1;
      pfVar7 = (float *)((int)pfVar7 + 2);
    } while (cVar1 != '\0');
    iVar5 = 0;
    if (0 < (int)in_stack_00000004[1].location.position.z) {
      iVar3 = 0;
      do {
        *(undefined4 *)((int)in_stack_00000004[1].orient.pitch + iVar3) = 0;
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar5 < (int)in_stack_00000004[1].location.position.z);
    }
    fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(12.0,20.0);
    *(float *)(in_stack_00000004[9].create_event + 0x38) = fVar4;
  }
  return;
}


// Assembly code:
// 0041ae50: PUSH EBX
//   Label: core_bodypart.cpp_FUN_0041ae50
// 0041ae51: PUSH EBP
// 0041ae52: SUB ESP,0x10
// 0041ae55: MOV EBX,dword ptr [ESP + 0x1c]
// 0041ae59: MOV EAX,dword ptr [ESP + 0x20]
// 0041ae5d: MOV EDX,dword ptr [EBX + 0x74c]
// 0041ae63: CMP EDX,0x2
// 0041ae66: JGE 0x0041af82
//   XREF to: 0041af82 (CONDITIONAL_JUMP)
// 0041ae6c: PUSH EDI
// 0041ae6d: PUSH ESI
// 0041ae6e: MOV EDI,EDX
// 0041ae70: IMUL EDX,EDX,0x2b0
// 0041ae76: LEA ESI,[EBX + 0x750]
// 0041ae7c: INC EDI
// 0041ae7d: ADD ESI,EDX
// 0041ae7f: MOV dword ptr [EBX + 0x74c],EDI
// 0041ae85: CMP ESI,EAX
// 0041ae87: JZ 0x0041ae99
//   XREF to: 0041ae99 (CONDITIONAL_JUMP)
// 0041ae89: MOV EDX,dword ptr [EAX]
// 0041ae8b: MOV dword ptr [ESI],EDX
// 0041ae8d: MOV EDX,dword ptr [EAX + 0x4]
// 0041ae90: MOV dword ptr [ESI + 0x4],EDX
// 0041ae93: MOV EDX,dword ptr [EAX + 0x8]
// 0041ae96: MOV dword ptr [ESI + 0x8],EDX
// 0041ae99: PUSH ESI
//   Label: LAB_0041ae99
// 0041ae9a: LEA EAX,[ESP + 0xc]
// 0041ae9e: PUSH EAX
// 0041ae9f: PUSH EBX
// 0041aea0: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0041aea5: LEA EDX,[ESI + 0x2c]
// 0041aea8: FLD float ptr [EAX]
// 0041aeaa: ADD ESP,0xc
// 0041aead: FSTP float ptr [EDX]
// 0041aeaf: MOV ECX,dword ptr [EAX + 0x4]
// 0041aeb2: MOV dword ptr [EDX + 0x4],ECX
// 0041aeb5: FLD float ptr [EAX + 0x8]
// 0041aeb8: LEA EAX,[ESI + 0xc]
// 0041aebb: PUSH EAX
// 0041aebc: FSTP float ptr [EDX + 0x8]
// 0041aebf: CALL core_flame.cpp_FUN_004c9b90
//   XREF to: 004c9b90 (UNCONDITIONAL_CALL)
// 0041aec4: MOV dword ptr [ESI + 0x1b8],0x0
// 0041aece: MOV dword ptr [ESI + 0x164],0x3fc00000
// 0041aed8: MOV dword ptr [ESI + 0x168],0x40400000
// 0041aee2: LEA EDI,[EBX + 0x198]
// 0041aee8: MOV dword ptr [ESI + 0x16c],0x3fc00000
// 0041aef2: ADD ESP,0x4
// 0041aef5: MOV dword ptr [EBX + 0xfc],0x1
// 0041aeff: MOV ESI,0x615e60
//   XREF to: 00615e60 (DATA)
// 0041af04: MOV dword ptr [EBX + 0x18c],0x1
// 0041af0e: PUSH EDI
// 0041af0f: MOV AL,byte ptr [ESI]
//   Label: LAB_0041af0f
//   XREF to: 00615e60 (READ)
//   XREF to: 00615e62 (READ)
// 0041af11: MOV byte ptr [EDI],AL
// 0041af13: CMP AL,0x0
// 0041af15: JZ 0x0041af27
//   XREF to: 0041af27 (CONDITIONAL_JUMP)
// 0041af17: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00615e61 (READ)
//   XREF to: 00615e63 (READ)
// 0041af1a: ADD ESI,0x2
// 0041af1d: MOV byte ptr [EDI + 0x1],AL
// 0041af20: ADD EDI,0x2
// 0041af23: CMP AL,0x0
// 0041af25: JNZ 0x0041af0f
//   XREF to: 0041af0f (CONDITIONAL_JUMP)
// 0041af27: POP EDI
//   Label: LAB_0041af27
// 0041af28: MOV EBP,dword ptr [EBX + 0x180]
// 0041af2e: XOR EDX,EDX
// 0041af30: TEST EBP,EBP
// 0041af32: JLE 0x0041af60
//   XREF to: 0041af60 (CONDITIONAL_JUMP)
// 0041af34: XOR EAX,EAX
// 0041af36: MOV ECX,dword ptr [EBX + 0x188]
//   Label: LAB_0041af36
// 0041af3c: MOV dword ptr [ECX + EAX*0x1],0x0
// 0041af43: INC EDX
// 0041af44: MOV ECX,dword ptr [EBX + 0x180]
// 0041af4a: ADD EAX,0x4
// 0041af4d: CMP EDX,ECX
// 0041af4f: JL 0x0041af36
//   XREF to: 0041af36 (CONDITIONAL_JUMP)
// 0041af51: LEA EAX,[EAX]
// 0041af57: LEA EDX,[EDX]
// 0041af5d: LEA EAX,[EAX]
// 0041af60: PUSH 0x41a00000
//   Label: LAB_0041af60
// 0041af65: PUSH 0x41400000
// 0041af6a: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 0041af82: ADD ESP,0x10
//   Label: LAB_0041af82
// 0041af85: POP EBP
// 0041af86: POP EBX
// 0041af87: RET
