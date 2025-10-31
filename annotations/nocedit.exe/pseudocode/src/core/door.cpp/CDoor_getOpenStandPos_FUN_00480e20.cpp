// Name: core_door.cpp_CDoor_getOpenStandPos_FUN_00480e20
// Address: 00480e20
// Address Range: [[00480e20, 00481014]]
// Convention: __cdecl
// Signature: float * core_door.cpp_CDoor_getOpenStandPos_FUN_00480e20(CDoor * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042ca70 (0042ca70) at 0042cb64 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_00480e0c = 00480e74
//   TerminatedCString s_core_door_cpp_006212a9
//   TerminatedCString s_CDoor_getOpenStandPos_in_006212ba
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408e80
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

float * __cdecl core_door_cpp_CDoor_getOpenStandPos_FUN_00480e20(CDoor *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  BADSPACEBASE *in_ESP;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float local_5c;
  float local_58;
  float local_54;
  float local_48 [3];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  
  local_5c = *in_stack_0000000c;
  local_58 = in_stack_0000000c[1];
  local_54 = in_stack_0000000c[2];
  if (local_54 < 0.0) {
    local_38 = -local_5c;
    local_34 = -local_58;
    local_30 = -local_54;
    if (&local_5c != &local_38) {
      local_5c = local_38;
      local_58 = local_34;
      local_54 = local_30;
    }
  }
  switch(this_ptr->door_type) {
  case 0:
  case 1:
  case 2:
    pCVar5 = core_actor_cpp_CDemonActor_FUN_00408f10(&this_ptr->base_actor);
    if (pCVar5->z <= 0.0) {
      pCVar5 = core_actor_cpp_CDemonActor_FUN_00408e80(&this_ptr->base_actor);
      fVar1 = *(float *)(this_ptr->field17_0x9bc + 4);
      fVar2 = pCVar5->y;
      fVar3 = *(float *)(this_ptr->field17_0x9bc + 8);
      fVar4 = pCVar5->z;
      if (in_stack_00000008 != local_48) {
        *in_stack_00000008 = *(float *)this_ptr->field17_0x9bc - pCVar5->x;
        in_stack_00000008[1] = fVar1 - fVar2;
        in_stack_00000008[2] = fVar3 - fVar4;
        in_stack_00000008[1] = (this_ptr->base_actor).location.position.y;
        return in_stack_00000008;
      }
    }
    else {
      pCVar5 = core_actor_cpp_CDemonActor_FUN_00408e80(&this_ptr->base_actor);
      fVar1 = *(float *)(this_ptr->field17_0x9bc + 4);
      fVar2 = pCVar5->y;
      fVar3 = *(float *)(this_ptr->field17_0x9bc + 8);
      fVar4 = pCVar5->z;
      if (in_stack_00000008 != &local_3c) {
        *in_stack_00000008 = *(float *)this_ptr->field17_0x9bc + pCVar5->x;
        in_stack_00000008[1] = fVar1 + fVar2;
        in_stack_00000008[2] = fVar3 + fVar4;
        in_stack_00000008[1] = (this_ptr->base_actor).location.position.y;
        return in_stack_00000008;
      }
    }
    break;
  case 3:
    if (in_stack_00000008 != (float *)this_ptr->field17_0x9bc) {
      *in_stack_00000008 = *(float *)this_ptr->field17_0x9bc;
      in_stack_00000008[1] = *(float *)(this_ptr->field17_0x9bc + 4);
      in_stack_00000008[2] = *(float *)(this_ptr->field17_0x9bc + 8);
      in_stack_00000008[1] = (this_ptr->base_actor).location.position.y;
      return in_stack_00000008;
    }
    break;
  default:
    g_CurrentFilename = "..\\core\\door.cpp";
    g_CurrentLineNumber = 0x340;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDoor::getOpenStandPos - invalid doorType");
    in_stack_00000008[1] = (this_ptr->base_actor).location.position.y;
    return in_stack_00000008;
  }
  in_stack_00000008[1] = (this_ptr->base_actor).location.position.y;
  return in_stack_00000008;
}


// Assembly code:
// 00480e20: PUSH EBX
//   Label: core_door.cpp_CDoor_getOpenStandPos_FUN_00480e20
// 00480e21: PUSH ESI
// 00480e22: PUSH EDI
// 00480e23: PUSH EBP
// 00480e24: MOV EBP,ESP
// 00480e26: SUB ESP,0x54
// 00480e29: AND ESP,0xfffffff8
// 00480e2c: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00480e2f: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00480e32: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00480e35: MOV EAX,dword ptr [ESI]
// 00480e37: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00480e3b: LEA EAX,[ESI + 0x4]
// 00480e3e: MOV EAX,dword ptr [EAX]
// 00480e40: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00480e44: LEA EAX,[ESI + 0x8]
// 00480e47: MOV EAX,dword ptr [EAX]
// 00480e49: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00480e4d: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x54] (READ)
// 00480e51: FLDZ
// 00480e53: FCOMPP
// 00480e55: FNSTSW AX
// 00480e57: SAHF
// 00480e58: JA 0x00480ee0
//   XREF to: 00480ee0 (CONDITIONAL_JUMP)
// 00480e5e: MOV EAX,dword ptr [EDI + 0x2d8]
//   Label: LAB_00480e5e
// 00480e64: CMP EAX,0x3
// 00480e67: JA 0x00480fe3
//   XREF to: 00480fe3 (CONDITIONAL_JUMP)
// 00480e6d: JMP dword ptr [EAX*0x4 + 0x480e0c]
//   Label: switchD
//   XREF to: 00480e74 (COMPUTED_JUMP)
//   XREF to: 00480fb6 (COMPUTED_JUMP)
//   XREF to: 00480e0c (DATA)
// 00480e74: MOV ESI,dword ptr [EBP + 0x20]
//   Label: caseD_2
//   XREF to: Stack[0x10] (READ)
// 00480e77: PUSH ESI
// 00480e78: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x2c] (DATA)
// 00480e7c: PUSH EAX
// 00480e7d: PUSH EDI
// 00480e7e: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 00480e83: FLDZ
// 00480e85: ADD ESP,0xc
// 00480e88: LEA ESI,[EDI + 0x9bc]
// 00480e8e: FCOMP float ptr [EAX + 0x8]
// 00480e91: FNSTSW AX
// 00480e93: SAHF
// 00480e94: JNC 0x00480f58
//   XREF to: 00480f58 (CONDITIONAL_JUMP)
// 00480e9a: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x5c] (DATA)
// 00480e9e: PUSH EAX
// 00480e9f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x68] (DATA)
// 00480ea3: PUSH EAX
// 00480ea4: PUSH EDI
// 00480ea5: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 00480eaa: FLD float ptr [ESI]
// 00480eac: FADD float ptr [EAX]
// 00480eae: ADD ESP,0xc
// 00480eb1: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (WRITE)
// 00480eb5: FLD float ptr [ESI + 0x4]
// 00480eb8: FADD float ptr [EAX + 0x4]
// 00480ebb: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (WRITE)
// 00480ebf: FLD float ptr [ESI + 0x8]
// 00480ec2: FADD float ptr [EAX + 0x8]
// 00480ec5: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x44] (DATA)
// 00480ec9: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x3c] (WRITE)
// 00480ecd: CMP EBX,EAX
// 00480ecf: JNZ 0x00480f35
//   XREF to: 00480f35 (CONDITIONAL_JUMP)
// 00480ed1: FLD float ptr [EDI + 0x24]
//   Label: LAB_00480ed1
// 00480ed4: MOV EAX,EBX
// 00480ed6: FSTP float ptr [EBX + 0x4]
// 00480ed9: MOV ESP,EBP
// 00480edb: POP EBP
// 00480edc: POP EDI
// 00480edd: POP ESI
// 00480ede: POP EBX
// 00480edf: RET
// 00480ee0: FLD float ptr [ESP + 0xc]
//   Label: LAB_00480ee0
//   XREF to: Stack[-0x5c] (READ)
// 00480ee4: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x58] (READ)
// 00480ee8: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x54] (READ)
// 00480eec: LEA ESI,[ESP + 0x30]
//   XREF to: Stack[-0x38] (DATA)
// 00480ef0: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x5c] (DATA)
// 00480ef4: FXCH ST2
// 00480ef6: FCHS
// 00480ef8: FXCH
// 00480efa: FCHS
// 00480efc: FXCH ST2
// 00480efe: FCHS
// 00480f00: FXCH ST2
// 00480f02: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x34] (WRITE)
// 00480f06: FXCH
// 00480f08: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x30] (WRITE)
// 00480f0c: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x38] (WRITE)
// 00480f10: CMP EAX,ESI
// 00480f12: JZ 0x00480e5e
//   XREF to: 00480e5e (CONDITIONAL_JUMP)
// 00480f18: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x38] (READ)
// 00480f1c: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00480f20: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x34] (READ)
// 00480f24: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00480f28: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x30] (READ)
// 00480f2c: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00480f30: JMP 0x00480e5e
//   XREF to: 00480e5e (UNCONDITIONAL_JUMP)
// 00480f35: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00480f35
//   XREF to: Stack[-0x44] (DATA)
// 00480f39: MOV dword ptr [EBX],EAX
// 00480f3b: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (READ)
// 00480f3f: MOV dword ptr [EBX + 0x4],EAX
// 00480f42: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00480f46: MOV dword ptr [EBX + 0x8],EAX
// 00480f49: FLD float ptr [EDI + 0x24]
// 00480f4c: MOV EAX,EBX
// 00480f4e: FSTP float ptr [EBX + 0x4]
// 00480f51: MOV ESP,EBP
// 00480f53: POP EBP
// 00480f54: POP EDI
// 00480f55: POP ESI
// 00480f56: POP EBX
// 00480f57: RET
// 00480f58: LEA EAX,[ESP + 0xc]
//   Label: LAB_00480f58
//   XREF to: Stack[-0x5c] (DATA)
// 00480f5c: PUSH EAX
// 00480f5d: LEA EAX,[ESP + 0x4c]
//   XREF to: Stack[-0x20] (DATA)
// 00480f61: PUSH EAX
// 00480f62: PUSH EDI
// 00480f63: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 00480f68: FLD float ptr [ESI]
// 00480f6a: FSUB float ptr [EAX]
// 00480f6c: ADD ESP,0xc
// 00480f6f: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x50] (WRITE)
// 00480f73: FLD float ptr [ESI + 0x4]
// 00480f76: FSUB float ptr [EAX + 0x4]
// 00480f79: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (WRITE)
// 00480f7d: FLD float ptr [ESI + 0x8]
// 00480f80: FSUB float ptr [EAX + 0x8]
// 00480f83: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x50] (DATA)
// 00480f87: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (WRITE)
// 00480f8b: CMP EBX,EAX
// 00480f8d: JZ 0x00480ed1
//   XREF to: 00480ed1 (CONDITIONAL_JUMP)
// 00480f93: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x50] (DATA)
// 00480f97: MOV dword ptr [EBX],EAX
// 00480f99: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (READ)
// 00480f9d: MOV dword ptr [EBX + 0x4],EAX
// 00480fa0: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (READ)
// 00480fa4: MOV dword ptr [EBX + 0x8],EAX
// 00480fa7: FLD float ptr [EDI + 0x24]
// 00480faa: MOV EAX,EBX
// 00480fac: FSTP float ptr [EBX + 0x4]
// 00480faf: MOV ESP,EBP
// 00480fb1: POP EBP
// 00480fb2: POP EDI
// 00480fb3: POP ESI
// 00480fb4: POP EBX
// 00480fb5: RET
// 00480fb6: LEA EAX,[EDI + 0x9bc]
//   Label: caseD_3
// 00480fbc: CMP EBX,EAX
// 00480fbe: JZ 0x00480ed1
//   XREF to: 00480ed1 (CONDITIONAL_JUMP)
// 00480fc4: MOV EDX,dword ptr [EAX]
// 00480fc6: MOV dword ptr [EBX],EDX
// 00480fc8: MOV EDX,dword ptr [EAX + 0x4]
// 00480fcb: MOV dword ptr [EBX + 0x4],EDX
// 00480fce: MOV EDX,dword ptr [EAX + 0x8]
// 00480fd1: MOV dword ptr [EBX + 0x8],EDX
// 00480fd4: FLD float ptr [EDI + 0x24]
// 00480fd7: MOV EAX,EBX
// 00480fd9: FSTP float ptr [EBX + 0x4]
// 00480fdc: MOV ESP,EBP
// 00480fde: POP EBP
// 00480fdf: POP EDI
// 00480fe0: POP ESI
// 00480fe1: POP EBX
// 00480fe2: RET
// 00480fe3: MOV EDX,0x6212a9
//   Label: default
//   XREF to: 006212a9 (PARAM)
// 00480fe8: MOV ECX,0x340
// 00480fed: PUSH 0x6212ba
//   XREF to: 006212ba (DATA)
// 00480ff2: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00480ff8: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00480ffe: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00481003: ADD ESP,0x4
// 00481006: FLD float ptr [EDI + 0x24]
// 00481009: MOV EAX,EBX
// 0048100b: FSTP float ptr [EBX + 0x4]
// 0048100e: MOV ESP,EBP
// 00481010: POP EBP
// 00481011: POP EDI
// 00481012: POP ESI
// 00481013: POP EBX
// 00481014: RET
