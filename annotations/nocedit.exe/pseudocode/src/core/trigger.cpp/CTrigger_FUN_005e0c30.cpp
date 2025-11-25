// Name: core_trigger.cpp_CTrigger_FUN_005e0c30
// Address: 005e0c30
// Address Range: [[005e0c30, 005e0cc6]]
// Convention: __cdecl
// Signature: int core_trigger.cpp_CTrigger_FUN_005e0c30(CTrigger * this_ptr)
// Globals:
//   float FLOAT_006557d4 = 0.5

#include "nocturne.h"

int __cdecl core_trigger_cpp_CTrigger_FUN_005e0c30(CTrigger *this_ptr)

{
  float fVar1;
  float fVar2;
  CBoundingBox3D *pCVar3;
  BADSPACEBASE *in_ESP;
  float *in_stack_00000008;
  CBoundingBox3D CStack_34;
  float fStack_8;
  
  if (*(int *)(this_ptr->field1_0x158 + 0x1c) != 4) {
    return 0;
  }
  pCVar3 = (*((this_ptr->base_actor).vtable)->getBoundingBox)(&this_ptr->base_actor,&CStack_34);
  fVar1 = ((pCVar3->min).y + (pCVar3->max).y) * FLOAT_006557d4;
  fVar2 = ((pCVar3->min).z + (pCVar3->max).z) * FLOAT_006557d4;
  if (in_stack_00000008 != &fStack_8) {
    *in_stack_00000008 = ((pCVar3->min).x + (pCVar3->max).x) * FLOAT_006557d4;
    in_stack_00000008[1] = fVar1;
    in_stack_00000008[2] = fVar2;
  }
  return 1;
}


// Assembly code:
// 005e0c30: PUSH EBX
//   Label: core_trigger.cpp_CTrigger_FUN_005e0c30
// 005e0c31: SUB ESP,0x30
// 005e0c34: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005e0c38: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 005e0c3c: CMP dword ptr [ECX + 0x174],0x4
// 005e0c43: JZ 0x005e0c4c
//   XREF to: 005e0c4c (CONDITIONAL_JUMP)
// 005e0c45: XOR EAX,EAX
// 005e0c47: ADD ESP,0x30
// 005e0c4a: POP EBX
// 005e0c4b: RET
// 005e0c4c: MOV EAX,ESP
//   Label: LAB_005e0c4c
// 005e0c4e: PUSH EAX
// 005e0c4f: MOV EDX,dword ptr [ECX + 0x154]
// 005e0c55: PUSH ECX
// 005e0c56: CALL dword ptr [EDX + 0x14]
// 005e0c59: LEA EDX,[EAX + 0xc]
// 005e0c5c: FLD float ptr [EAX]
// 005e0c5e: FADD float ptr [EDX]
// 005e0c60: ADD ESP,0x8
// 005e0c63: FST float ptr [ESP + 0x24]
// 005e0c67: FLD float ptr [EAX + 0x4]
// 005e0c6a: FADD float ptr [EDX + 0x4]
// 005e0c6d: FXCH
// 005e0c6f: FLD float ptr [0x006557d4]
//   XREF to: 006557d4 (READ)
// 005e0c75: FXCH
// 005e0c77: FMUL ST1
// 005e0c79: FXCH ST2
// 005e0c7b: FST float ptr [ESP + 0x28]
// 005e0c7f: FLD float ptr [EAX + 0x8]
// 005e0c82: FADD float ptr [EDX + 0x8]
// 005e0c85: FXCH
// 005e0c87: FMUL ST2
// 005e0c89: FXCH
// 005e0c8b: FST float ptr [ESP + 0x2c]
// 005e0c8f: FMULP ST2
// 005e0c91: LEA EAX,[ESP + 0x18]
// 005e0c95: FXCH ST2
// 005e0c97: FSTP float ptr [ESP + 0x18]
// 005e0c9b: FXCH
// 005e0c9d: FSTP float ptr [ESP + 0x1c]
// 005e0ca1: FSTP float ptr [ESP + 0x20]
// 005e0ca5: CMP EBX,EAX
// 005e0ca7: JZ 0x005e0cbd
//   XREF to: 005e0cbd (CONDITIONAL_JUMP)
// 005e0ca9: MOV EAX,dword ptr [ESP + 0x18]
// 005e0cad: MOV dword ptr [EBX],EAX
// 005e0caf: MOV EAX,dword ptr [ESP + 0x1c]
// 005e0cb3: MOV dword ptr [EBX + 0x4],EAX
// 005e0cb6: MOV EAX,dword ptr [ESP + 0x20]
// 005e0cba: MOV dword ptr [EBX + 0x8],EAX
// 005e0cbd: MOV EAX,0x1
//   Label: LAB_005e0cbd
// 005e0cc2: ADD ESP,0x30
// 005e0cc5: POP EBX
// 005e0cc6: RET
