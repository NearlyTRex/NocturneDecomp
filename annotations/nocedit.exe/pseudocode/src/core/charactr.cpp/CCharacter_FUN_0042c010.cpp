// Name: core_charactr.cpp_CCharacter_FUN_0042c010
// Address: 0042c010
// Address Range: [[0042c010, 0042c10e]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042c010(CCharacter * this_ptr)
// Globals:
//   double DOUBLE_0061718a = 5
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 g_CGameInstance.delta_time_float
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042c010(CCharacter *this_ptr)

{
  float fVar1;
  float fVar2;
  int iVar3;
  CVector3f *pCVar4;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  float local_2c;
  float local_20;
  float local_18;
  
  if (in_stack_00000008 == (CDemonActor *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(this_ptr->base_actor).vtable[1].getGroundType)(&this_ptr->base_actor);
    if (iVar3 != 0) {
      pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (in_stack_00000008,(CVector3f *)&stack0xffffffbc,in_stack_0000000c);
      local_2c = local_20 - pCVar4->x;
      fVar1 = local_18 - pCVar4->z;
      fVar1 = SQRT(fVar1 * fVar1 + local_2c * local_2c);
      fVar2 = g_CGamePtr->delta_time_float * (float)DOUBLE_0061718a;
      if (fVar2 < fVar1) {
        local_2c = local_2c * (fVar2 / fVar1);
      }
      (*in_stack_00000008->vtable->setPositionAndOrientation)
                (in_stack_00000008,(CVector3f *)&stack0xffffffc8,
                 (CVector3f *)((in_stack_00000008->location).position.x + local_2c));
      return 1;
    }
  }
  return iVar3;
}


// Assembly code:
// 0042c010: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042c010
// 0042c011: PUSH EBP
// 0042c012: MOV EBP,ESP
// 0042c014: SUB ESP,0x3c
// 0042c017: MOV ECX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0042c01a: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0042c01d: TEST EBX,EBX
// 0042c01f: JNZ 0x0042c028
//   XREF to: 0042c028 (CONDITIONAL_JUMP)
// 0042c021: XOR EAX,EAX
// 0042c023: MOV ESP,EBP
//   Label: LAB_0042c023
// 0042c025: POP EBP
// 0042c026: POP EBX
// 0042c027: RET
// 0042c028: LEA EAX,[EBP + -0x18]
//   Label: LAB_0042c028
//   XREF to: Stack[-0x20] (DATA)
// 0042c02b: PUSH EAX
// 0042c02c: MOV EDX,dword ptr [ECX + 0x154]
// 0042c032: PUSH ECX
// 0042c033: CALL dword ptr [EDX + 0x128]
// 0042c039: ADD ESP,0x8
// 0042c03c: TEST EAX,EAX
// 0042c03e: JZ 0x0042c023
//   XREF to: 0042c023 (CONDITIONAL_JUMP)
// 0042c040: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0042c043: PUSH EDX
// 0042c044: LEA EAX,[EBP + -0x3c]
//   XREF to: Stack[-0x44] (DATA)
// 0042c047: PUSH EAX
// 0042c048: PUSH EBX
// 0042c049: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0042c04e: FLD float ptr [EBP + -0x14]
//   XREF to: Stack[-0x1c] (READ)
// 0042c051: FLD float ptr [EBP + -0x18]
//   XREF to: Stack[-0x20] (READ)
// 0042c054: FSUB float ptr [EAX]
// 0042c056: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x18] (READ)
// 0042c059: FXCH
// 0042c05b: FSTP float ptr [EBP + -0x24]
//   XREF to: Stack[-0x2c] (WRITE)
// 0042c05e: FXCH
// 0042c060: FSUB float ptr [EAX + 0x4]
// 0042c063: FLD float ptr [EBP + -0x24]
//   XREF to: Stack[-0x2c] (READ)
// 0042c066: FXCH
// 0042c068: FSTP float ptr [EBP + -0x20]
//   XREF to: Stack[-0x28] (WRITE)
// 0042c06b: FXCH
// 0042c06d: FSUB float ptr [EAX + 0x8]
// 0042c070: FXCH
// 0042c072: FMUL float ptr [EBP + -0x24]
//   XREF to: Stack[-0x2c] (READ)
// 0042c075: FXCH
// 0042c077: FST float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x24] (WRITE)
// 0042c07a: FMUL float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x24] (READ)
// 0042c07d: XOR ECX,ECX
// 0042c07f: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0042c084: MOV dword ptr [EBP + -0x20],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0042c087: FADDP
// 0042c089: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 0042c08f: FXCH
// 0042c091: FSQRT
// 0042c093: FXCH
// 0042c095: FMUL double ptr [0x0061718a]
//   XREF to: 0061718a (READ)
// 0042c09b: ADD ESP,0xc
// 0042c09e: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x14] (WRITE)
// 0042c0a1: FST float ptr [EBP + -0x8]
//   XREF to: Stack[-0x10] (WRITE)
// 0042c0a4: FCOMP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x14] (READ)
// 0042c0a7: FNSTSW AX
// 0042c0a9: SAHF
// 0042c0aa: JBE 0x0042c0d3
//   XREF to: 0042c0d3 (CONDITIONAL_JUMP)
// 0042c0ac: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x14] (READ)
// 0042c0af: FDIV float ptr [EBP + -0x8]
//   XREF to: Stack[-0x10] (READ)
// 0042c0b2: FLD float ptr [EBP + -0x24]
//   XREF to: Stack[-0x2c] (READ)
// 0042c0b5: FXCH
// 0042c0b7: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0xc] (WRITE)
// 0042c0ba: FMUL float ptr [EBP + -0x4]
//   XREF to: Stack[-0xc] (READ)
// 0042c0bd: FLDZ
// 0042c0bf: FMUL float ptr [EBP + -0x4]
//   XREF to: Stack[-0xc] (READ)
// 0042c0c2: FLD float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x24] (READ)
// 0042c0c5: FMUL float ptr [EBP + -0x4]
//   XREF to: Stack[-0xc] (READ)
// 0042c0c8: FXCH ST2
// 0042c0ca: FSTP float ptr [EBP + -0x24]
//   XREF to: Stack[-0x2c] (WRITE)
// 0042c0cd: FSTP float ptr [EBP + -0x20]
//   XREF to: Stack[-0x28] (WRITE)
// 0042c0d0: FSTP float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x24] (WRITE)
// 0042c0d3: LEA EAX,[EBX + 0x30]
//   Label: LAB_0042c0d3
// 0042c0d6: PUSH EAX
// 0042c0d7: LEA EAX,[EBX + 0x20]
// 0042c0da: FLD float ptr [EAX]
// 0042c0dc: FADD float ptr [EBP + -0x24]
//   XREF to: Stack[-0x2c] (READ)
// 0042c0df: MOV EDX,dword ptr [EBX + 0x154]
// 0042c0e5: FSTP float ptr [EBP + -0x30]
//   XREF to: Stack[-0x38] (WRITE)
// 0042c0e8: FLD float ptr [EAX + 0x4]
// 0042c0eb: FADD float ptr [EBP + -0x20]
//   XREF to: Stack[-0x28] (READ)
// 0042c0ee: FSTP float ptr [EBP + -0x2c]
//   XREF to: Stack[-0x34] (WRITE)
// 0042c0f1: FLD float ptr [EAX + 0x8]
// 0042c0f4: LEA EAX,[EBP + -0x30]
//   XREF to: Stack[-0x38] (DATA)
// 0042c0f7: PUSH EAX
// 0042c0f8: FADD float ptr [EBP + -0x1c]
//   XREF to: Stack[-0x24] (READ)
// 0042c0fb: PUSH EBX
// 0042c0fc: FSTP float ptr [EBP + -0x28]
//   XREF to: Stack[-0x30] (WRITE)
// 0042c0ff: CALL dword ptr [EDX + 0x60]
// 0042c102: MOV EAX,0x1
// 0042c107: ADD ESP,0xc
// 0042c10a: MOV ESP,EBP
// 0042c10c: POP EBP
// 0042c10d: POP EBX
// 0042c10e: RET
