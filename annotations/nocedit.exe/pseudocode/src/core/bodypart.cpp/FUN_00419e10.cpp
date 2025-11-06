// Name: core_bodypart.cpp_FUN_00419e10
// Address: 00419e10
// Address Range: [[00419e10, 00419f41]]
// Convention: unknown
// Signature: undefined core_bodypart.cpp_FUN_00419e10()
// Cross-references:
//   core_bodypart.cpp_CBodyPart_process_FUN_00419be0 (00419be0) at 00419cd5 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00615e14 = 1.5
//   double DOUBLE_00615e1c = 3
//   double DOUBLE_00615e24 = 0.200000000000000
//   double DOUBLE_00615e2c = 5
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_flame.cpp_FUN_004c9c00

#include "nocturne.h"

void core_bodypart_cpp_FUN_00419e10(void)

{
  float fVar1;
  CVector3f *pCVar2;
  CVector3f *input_local_point;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  int iVar4;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  CVector3f local_2c [2];
  char *local_14;
  
  if (*(int *)(in_stack_00000004[5].create_event + 0x1c) != 0) {
    in_stack_00000008 = *(float *)(in_stack_00000004[9].create_event + 0x38) - in_stack_00000008;
    *(float *)(in_stack_00000004[9].create_event + 0x38) = in_stack_00000008;
    if (in_stack_00000008 < 0.0) {
      in_stack_00000004[5].create_event[0x1c] = '\0';
      in_stack_00000004[5].create_event[0x1d] = '\0';
      in_stack_00000004[5].create_event[0x1e] = '\0';
      in_stack_00000004[5].create_event[0x1f] = '\0';
      in_stack_00000004[9].create_event[0x38] = '\0';
      in_stack_00000004[9].create_event[0x39] = '\0';
      in_stack_00000004[9].create_event[0x3a] = '\0';
      in_stack_00000004[9].create_event[0x3b] = '\0';
      return;
    }
    iVar4 = 0;
    if (0 < *(int *)(in_stack_00000004[5].create_event + 0x1c)) {
      local_14 = in_stack_00000004[5].create_event + 0x20;
      pcVar3 = in_stack_00000004[5].create_event + 0x4c;
      do {
        input_local_point = (CVector3f *)(local_14 + iVar4 * 0x2b0);
        pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (in_stack_00000004,local_2c,input_local_point);
        *(float *)pcVar3 = pCVar2->x;
        local_2c[0].x = 1.0;
        *(float *)(pcVar3 + 4) = pCVar2->y;
        *(float *)(pcVar3 + 8) = pCVar2->z;
        if (*(float *)(in_stack_00000004[9].create_event + 0x38) < (float)DOUBLE_00615e2c) {
          local_2c[0].x =
               *(float *)(in_stack_00000004[9].create_event + 0x38) * (float)DOUBLE_00615e24;
        }
        local_14 = (char *)(local_2c[0].x * (float)DOUBLE_00615e14);
        fVar1 = (float)DOUBLE_00615e1c;
        input_local_point[0x1d].z = (float)local_14;
        input_local_point[0x1e].x = local_2c[0].x * fVar1;
        input_local_point[0x1e].y = (float)local_14;
        core_flame_cpp_FUN_004c9c00();
        iVar4 = iVar4 + 1;
        pcVar3 = pcVar3 + 0x2b0;
      } while (iVar4 < *(int *)(in_stack_00000004[5].create_event + 0x1c));
    }
  }
  return;
}


// Assembly code:
// 00419e10: PUSH EBX
//   Label: core_bodypart.cpp_FUN_00419e10
// 00419e11: PUSH ESI
// 00419e12: PUSH EDI
// 00419e13: PUSH EBP
// 00419e14: MOV EBP,ESP
// 00419e16: SUB ESP,0x28
// 00419e19: AND ESP,0xfffffff8
// 00419e1c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00419e1f: CMP dword ptr [EAX + 0x74c],0x0
// 00419e26: JZ 0x00419f1d
//   XREF to: 00419f1d (CONDITIONAL_JUMP)
// 00419e2c: FLD float ptr [EAX + 0xcc8]
// 00419e32: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00419e35: FST float ptr [EAX + 0xcc8]
// 00419e3b: FLDZ
// 00419e3d: FCOMPP
// 00419e3f: FNSTSW AX
// 00419e41: SAHF
// 00419e42: JA 0x00419f24
//   XREF to: 00419f24 (CONDITIONAL_JUMP)
// 00419e48: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00419e4b: MOV ECX,dword ptr [EAX + 0x74c]
// 00419e51: XOR EDI,EDI
// 00419e53: TEST ECX,ECX
// 00419e55: JLE 0x00419f1d
//   XREF to: 00419f1d (CONDITIONAL_JUMP)
// 00419e5b: ADD EAX,0x750
// 00419e60: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00419e63: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00419e67: ADD ESI,0x77c
// 00419e6d: IMUL EBX,EDI,0x2b0
//   Label: LAB_00419e6d
// 00419e73: ADD EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x14] (READ)
// 00419e77: PUSH EBX
// 00419e78: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x2c] (DATA)
// 00419e7c: PUSH EAX
// 00419e7d: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00419e80: PUSH EDX
// 00419e81: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00419e86: FLD float ptr [EAX]
// 00419e88: MOV ECX,0x3f800000
// 00419e8d: ADD ESP,0xc
// 00419e90: FSTP float ptr [ESI]
// 00419e92: FLD float ptr [EAX + 0x4]
// 00419e95: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 00419e99: FSTP float ptr [ESI + 0x4]
// 00419e9c: FLD float ptr [EAX + 0x8]
// 00419e9f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00419ea2: FSTP float ptr [ESI + 0x8]
// 00419ea5: FLD float ptr [EAX + 0xcc8]
// 00419eab: FST double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00419eae: FCOMP double ptr [0x00615e2c]
//   XREF to: 00615e2c (READ)
// 00419eb4: FNSTSW AX
// 00419eb6: SAHF
// 00419eb7: JNC 0x00419ec6
//   XREF to: 00419ec6 (CONDITIONAL_JUMP)
// 00419eb9: FLD double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00419ebc: FMUL double ptr [0x00615e24]
//   XREF to: 00615e24 (READ)
// 00419ec2: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x30] (WRITE)
// 00419ec6: FLD float ptr [ESP + 0x8]
//   Label: LAB_00419ec6
//   XREF to: Stack[-0x30] (READ)
// 00419eca: FLD ST0
// 00419ecc: FMUL double ptr [0x00615e14]
//   XREF to: 00615e14 (READ)
// 00419ed2: FXCH
// 00419ed4: FMUL double ptr [0x00615e1c]
//   XREF to: 00615e1c (READ)
// 00419eda: ADD EBX,0xc
// 00419edd: FXCH
// 00419edf: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (WRITE)
// 00419ee3: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 00419ee7: PUSH dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00419eea: MOV dword ptr [EBX + 0x158],EAX
// 00419ef0: PUSH EBX
// 00419ef1: FSTP float ptr [EBX + 0x15c]
// 00419ef7: MOV dword ptr [EBX + 0x160],EAX
// 00419efd: CALL core_flame.cpp_FUN_004c9c00
//   XREF to: 004c9c00 (UNCONDITIONAL_CALL)
// 00419f02: ADD ESP,0x8
// 00419f05: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00419f08: INC EDI
// 00419f09: MOV EBX,dword ptr [EAX + 0x74c]
// 00419f0f: ADD ESI,0x2b0
// 00419f15: CMP EDI,EBX
// 00419f17: JL 0x00419e6d
//   XREF to: 00419e6d (CONDITIONAL_JUMP)
// 00419f1d: MOV ESP,EBP
//   Label: LAB_00419f1d
// 00419f1f: POP EBP
// 00419f20: POP EDI
// 00419f21: POP ESI
// 00419f22: POP EBX
// 00419f23: RET
// 00419f24: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00419f24
//   XREF to: Stack[0x4] (READ)
// 00419f27: MOV dword ptr [EAX + 0x74c],0x0
// 00419f31: MOV dword ptr [EAX + 0xcc8],0x0
// 00419f3b: MOV ESP,EBP
// 00419f3d: POP EBP
// 00419f3e: POP EDI
// 00419f3f: POP ESI
// 00419f40: POP EBX
// 00419f41: RET
