// Name: core_charactr.cpp_CCharacter_FUN_0042bc20
// Address: 0042bc20
// Address Range: [[0042bc20, 0042bcb0]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042bc20(CCharacter * this_ptr)
// Cross-references:
//   core_armour.cpp_CArmour_FUN_00412450 (00412450) at 0041245a [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_FUN_00416290 (00416290) at 0041629a [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_FUN_00417cb0 (00417cb0) at 00417cc6 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_FUN_00418c60 (00418c60) at 00418c6a [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041d970 (0041d970) at 0041d986 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00485bc0 (00485bc0) at 00485bd6 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_FUN_004e5ad0 (004e5ad0) at 004e5ada [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f79b0 (004f79b0) at 004f79ba [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fb0f0 (004fb0f0) at 004fb0fa [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_005279d0 (005279d0) at 005279da [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568ef0 (00568ef0) at 00568efa [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a37f0 (005a37f0) at 005a37fa [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c7790 (005c7790) at 005c779a [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e75f0 (005e75f0) at 005e7641 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042bc20(CCharacter *this_ptr)

{
  int iVar1;
  SCollisionInfo *unaff_ESI;
  int *in_stack_00000008;
  
  if (*in_stack_00000008 != 2) {
    iVar1 = (*(this_ptr->base_actor).metadata.vtable[1].hasCollision)
                      (&this_ptr->base_actor,unaff_ESI);
    if (iVar1 < 2) {
      if ((*in_stack_00000008 != 1) && (*in_stack_00000008 != 3)) {
        in_stack_00000008[6] =
             (int)(*(float *)(this_ptr->cloth_data + 0x358) * this_ptr->size_scale);
        in_stack_00000008[5] =
             (int)(*(float *)(this_ptr->cloth_data + 0x354) * this_ptr->size_scale);
        if ((float)in_stack_00000008[6] < (float)in_stack_00000008[5]) {
          in_stack_00000008[6] = *(int *)((this_ptr->model).padding_0x0 + 0x2248);
        }
        in_stack_00000008[7] =
             (int)(*(float *)(this_ptr->cloth_data + 0x348) * this_ptr->size_scale);
        return 2;
      }
      in_stack_00000008[8] = (int)&this_ptr->model;
      return 1;
    }
  }
  return 0;
}


// Assembly code:
// 0042bc20: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042bc20
// 0042bc21: PUSH ESI
// 0042bc22: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0042bc26: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0042bc2a: CMP dword ptr [ESI],0x2
// 0042bc2d: JNZ 0x0042bc34
//   XREF to: 0042bc34 (CONDITIONAL_JUMP)
// 0042bc2f: XOR EAX,EAX
//   Label: LAB_0042bc2f
// 0042bc31: POP ESI
// 0042bc32: POP EBX
// 0042bc33: RET
// 0042bc34: PUSH EBX
//   Label: LAB_0042bc34
// 0042bc35: MOV EAX,dword ptr [EBX + 0x154]
// 0042bc3b: CALL dword ptr [EAX + 0x120]
// 0042bc41: ADD ESP,0x4
// 0042bc44: CMP EAX,0x1
// 0042bc47: JG 0x0042bc2f
//   XREF to: 0042bc2f (CONDITIONAL_JUMP)
// 0042bc49: MOV ECX,dword ptr [ESI]
// 0042bc4b: CMP ECX,0x1
// 0042bc4e: JZ 0x0042bca0
//   XREF to: 0042bca0 (CONDITIONAL_JUMP)
// 0042bc50: CMP ECX,0x3
// 0042bc53: JZ 0x0042bca0
//   XREF to: 0042bca0 (CONDITIONAL_JUMP)
// 0042bc55: FLD float ptr [EBX + 0x2df0]
// 0042bc5b: FMUL float ptr [EBX + 0x261c]
// 0042bc61: FSTP float ptr [ESI + 0x18]
// 0042bc64: FLD float ptr [EBX + 0x2dec]
// 0042bc6a: FMUL float ptr [EBX + 0x261c]
// 0042bc70: FLD float ptr [ESI + 0x18]
// 0042bc73: FXCH
// 0042bc75: FSTP float ptr [ESI + 0x14]
// 0042bc78: FCOMP float ptr [ESI + 0x14]
// 0042bc7b: FNSTSW AX
// 0042bc7d: SAHF
// 0042bc7e: JNC 0x0042bc89
//   XREF to: 0042bc89 (CONDITIONAL_JUMP)
// 0042bc80: MOV EAX,dword ptr [EBX + 0x23a0]
// 0042bc86: MOV dword ptr [ESI + 0x18],EAX
// 0042bc89: FLD float ptr [EBX + 0x2de0]
//   Label: LAB_0042bc89
// 0042bc8f: FMUL float ptr [EBX + 0x261c]
// 0042bc95: MOV EAX,0x2
// 0042bc9a: FSTP float ptr [ESI + 0x1c]
// 0042bc9d: POP ESI
// 0042bc9e: POP EBX
// 0042bc9f: RET
// 0042bca0: ADD EBX,0x158
//   Label: LAB_0042bca0
// 0042bca6: MOV EAX,0x1
// 0042bcab: MOV dword ptr [ESI + 0x20],EBX
// 0042bcae: POP ESI
// 0042bcaf: POP EBX
// 0042bcb0: RET
