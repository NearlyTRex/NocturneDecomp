// Name: core_vampboss.cpp_CVampireBoss_FUN_005e7280
// Address: 005e7280
// Address Range: [[005e7280, 005e7310]]
// Convention: __cdecl
// Signature: int core_vampboss.cpp_CVampireBoss_FUN_005e7280(CVampireBoss * this_ptr)
// Globals:
//   undefined4 DAT_00656cab

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e7280(CVampireBoss *this_ptr)

{
  CVampireBoss *pCVar1;
  CVampireBoss *pCVar2;
  CBoundingBox3D *pCVar3;
  BADSPACEBASE *in_ESP;
  CVampireBoss **in_stack_00000008;
  CBoundingBox3D aCStack_34 [2];
  
  pCVar3 = (*((this_ptr->base_enemy).base_character.base_actor.metadata.vtable)->getBoundingBox)
                     ((CDemonActor *)this_ptr,aCStack_34);
  pCVar1 = (CVampireBoss *)(((pCVar3->min).y + (pCVar3->max).y) * _DAT_00656cab);
  pCVar2 = (CVampireBoss *)(((pCVar3->min).z + (pCVar3->max).z) * _DAT_00656cab);
  if (in_stack_00000008 == &this_ptr) {
    return 1;
  }
  *in_stack_00000008 = (CVampireBoss *)(((pCVar3->min).x + (pCVar3->max).x) * _DAT_00656cab);
  in_stack_00000008[1] = pCVar1;
  in_stack_00000008[2] = pCVar2;
  return 1;
}


// Assembly code:
// 005e7280: PUSH EBX
//   Label: core_vampboss.cpp_CVampireBoss_FUN_005e7280
// 005e7281: SUB ESP,0x30
// 005e7284: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005e7288: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 005e728c: MOV EDX,ESP
// 005e728e: PUSH EDX
// 005e728f: MOV EAX,dword ptr [ECX + 0x154]
// 005e7295: PUSH ECX
// 005e7296: CALL dword ptr [EAX + 0x14]
// 005e7299: LEA EDX,[EAX + 0xc]
// 005e729c: FLD float ptr [EAX]
// 005e729e: FADD float ptr [EDX]
// 005e72a0: ADD ESP,0x8
// 005e72a3: FST float ptr [ESP + 0x18]
// 005e72a7: FLD float ptr [EAX + 0x4]
// 005e72aa: FADD float ptr [EDX + 0x4]
// 005e72ad: FXCH
// 005e72af: FLD float ptr [0x00656cab]
//   XREF to: 00656cab (READ)
// 005e72b5: FXCH
// 005e72b7: FMUL ST1
// 005e72b9: FXCH ST2
// 005e72bb: FST float ptr [ESP + 0x1c]
// 005e72bf: FLD float ptr [EAX + 0x8]
// 005e72c2: FADD float ptr [EDX + 0x8]
// 005e72c5: FXCH
// 005e72c7: FMUL ST2
// 005e72c9: FXCH
// 005e72cb: FST float ptr [ESP + 0x20]
// 005e72cf: FMULP ST2
// 005e72d1: LEA EAX,[ESP + 0x24]
// 005e72d5: FXCH ST2
// 005e72d7: FSTP float ptr [ESP + 0x24]
// 005e72db: FXCH
// 005e72dd: FSTP float ptr [ESP + 0x28]
// 005e72e1: FSTP float ptr [ESP + 0x2c]
// 005e72e5: CMP EBX,EAX
// 005e72e7: JNZ 0x005e72f3
//   XREF to: 005e72f3 (CONDITIONAL_JUMP)
// 005e72e9: MOV EAX,0x1
// 005e72ee: ADD ESP,0x30
// 005e72f1: POP EBX
// 005e72f2: RET
// 005e72f3: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_005e72f3
// 005e72f7: MOV dword ptr [EBX],EAX
// 005e72f9: MOV EAX,dword ptr [ESP + 0x28]
// 005e72fd: MOV dword ptr [EBX + 0x4],EAX
// 005e7300: MOV EAX,dword ptr [ESP + 0x2c]
// 005e7304: MOV dword ptr [EBX + 0x8],EAX
// 005e7307: MOV EAX,0x1
// 005e730c: ADD ESP,0x30
// 005e730f: POP EBX
// 005e7310: RET
