// Name: core_enemy.cpp_CEnemy_FUN_004a99d0
// Address: 004a99d0
// Address Range: [[004a99d0, 004a9a4e]]
// Convention: __cdecl
// Signature: float * core_enemy.cpp_CEnemy_FUN_004a99d0(CEnemy * this_ptr)
// Globals:
//   undefined4 DAT_006243aa
//   double DOUBLE_006243b2 = 0.166666666666667

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __cdecl core_enemy_cpp_CEnemy_FUN_004a99d0(CEnemy *this_ptr)

{
  float fVar1;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  float *in_stack_00000008;
  CBoundingBox3D CStack_30;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  (*((this_ptr->base_character).base_actor.vtable)->getBoundingBox)
            ((CDemonActor *)this_ptr,&CStack_30);
  fVar1 = _DAT_006243aa;
  *in_stack_00000008 = (CStack_30.max.z + fStack_10) * _DAT_006243aa;
  in_stack_00000008[1] = (fStack_18 + fStack_c) * fVar1;
  in_stack_00000008[2] = fVar1 * (fStack_14 + unaff_EBP);
  in_stack_00000008[1] = fStack_c - (fStack_c - fStack_18) * (float)DOUBLE_006243b2;
  return in_stack_00000008;
}


// Assembly code:
// 004a99d0: PUSH EBX
//   Label: core_enemy.cpp_CEnemy_FUN_004a99d0
// 004a99d1: PUSH EBP
// 004a99d2: MOV EBP,ESP
// 004a99d4: SUB ESP,0x24
// 004a99d7: AND ESP,0xfffffff8
// 004a99da: MOV ECX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004a99dd: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004a99e0: MOV EAX,ESP
// 004a99e2: PUSH EAX
// 004a99e3: MOV EDX,dword ptr [ECX + 0x154]
// 004a99e9: PUSH ECX
// 004a99ea: CALL dword ptr [EDX + 0x14]
// 004a99ed: ADD ESP,0x8
// 004a99f0: FLD float ptr [ESP]
// 004a99f3: FADD float ptr [ESP + 0xc]
// 004a99f7: FST float ptr [ESP + 0x18]
// 004a99fb: FLD float ptr [0x006243aa]
//   XREF to: 006243aa (READ)
// 004a9a01: FXCH
// 004a9a03: FMUL ST1
// 004a9a05: FLD float ptr [ESP + 0x8]
// 004a9a09: FLD float ptr [ESP + 0x4]
// 004a9a0d: FADD float ptr [ESP + 0x10]
// 004a9a11: FXCH
// 004a9a13: FADD float ptr [ESP + 0x14]
// 004a9a17: FXCH
// 004a9a19: FSTP float ptr [ESP + 0x1c]
// 004a9a1d: FSTP float ptr [ESP + 0x20]
// 004a9a21: FSTP float ptr [EBX]
// 004a9a23: FLD float ptr [ESP + 0x1c]
// 004a9a27: FMUL ST1
// 004a9a29: FSTP float ptr [EBX + 0x4]
// 004a9a2c: FMUL float ptr [ESP + 0x20]
// 004a9a30: FSTP float ptr [EBX + 0x8]
// 004a9a33: FLD float ptr [ESP + 0x10]
// 004a9a37: FSUB float ptr [ESP + 0x4]
// 004a9a3b: FMUL double ptr [0x006243b2]
//   XREF to: 006243b2 (READ)
// 004a9a41: FSUBR float ptr [ESP + 0x10]
// 004a9a45: MOV EAX,EBX
// 004a9a47: FSTP float ptr [EBX + 0x4]
// 004a9a4a: MOV ESP,EBP
// 004a9a4c: POP EBP
// 004a9a4d: POP EBX
// 004a9a4e: RET
