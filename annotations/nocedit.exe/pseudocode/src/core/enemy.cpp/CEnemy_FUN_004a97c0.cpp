// Name: core_enemy.cpp_CEnemy_FUN_004a97c0
// Address: 004a97c0
// Address Range: [[004a97c0, 004a9870]]
// Convention: __cdecl
// Signature: int core_enemy.cpp_CEnemy_FUN_004a97c0(CEnemy * this_ptr)
// Globals:
//   undefined4 DAT_0062437e
//   undefined4 DAT_00624382

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_enemy_cpp_CEnemy_FUN_004a97c0(CEnemy *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  BADSPACEBASE *in_ESP;
  float *in_stack_00000008;
  CBoundingBox3D CStack_40;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float afStack_14 [3];
  
  (*((this_ptr->base_character).base_actor.metadata.vtable)->getBoundingBox)
            ((CDemonActor *)this_ptr,&CStack_40);
  fVar3 = (float)_DAT_00624382;
  fVar1 = (fStack_28 + fStack_1c) * _DAT_0062437e;
  fVar2 = (fStack_24 + fStack_18) * _DAT_0062437e;
  if (in_stack_00000008 == afStack_14) {
    return 1;
  }
  *in_stack_00000008 = (CStack_40.max.z + fStack_20) * _DAT_0062437e;
  in_stack_00000008[1] = (fStack_1c - fStack_28) * fVar3 + fVar1;
  in_stack_00000008[2] = fVar2;
  return 1;
}


// Assembly code:
// 004a97c0: PUSH EBX
//   Label: core_enemy.cpp_CEnemy_FUN_004a97c0
// 004a97c1: PUSH EBP
// 004a97c2: MOV EBP,ESP
// 004a97c4: SUB ESP,0x38
// 004a97c7: AND ESP,0xfffffff8
// 004a97ca: MOV ECX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004a97cd: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004a97d0: MOV EAX,ESP
// 004a97d2: PUSH EAX
// 004a97d3: MOV EDX,dword ptr [ECX + 0x154]
// 004a97d9: PUSH ECX
// 004a97da: CALL dword ptr [EDX + 0x14]
// 004a97dd: ADD ESP,0x8
// 004a97e0: FLD float ptr [ESP]
// 004a97e3: FLD float ptr [ESP + 0x10]
// 004a97e7: FSUB float ptr [ESP + 0x4]
// 004a97eb: FXCH
// 004a97ed: FADD float ptr [ESP + 0xc]
// 004a97f1: FXCH
// 004a97f3: FMUL double ptr [0x00624382]
//   XREF to: 00624382 (READ)
// 004a97f9: FXCH
// 004a97fb: FST float ptr [ESP + 0x24]
// 004a97ff: FLD float ptr [0x0062437e]
//   XREF to: 0062437e (READ)
// 004a9805: FXCH
// 004a9807: FMUL ST1
// 004a9809: FLD float ptr [ESP + 0x8]
// 004a980d: FLD float ptr [ESP + 0x4]
// 004a9811: FADD float ptr [ESP + 0x10]
// 004a9815: FXCH
// 004a9817: FADD float ptr [ESP + 0x14]
// 004a981b: FXCH
// 004a981d: FST float ptr [ESP + 0x28]
// 004a9821: FMUL ST3
// 004a9823: FXCH
// 004a9825: FST float ptr [ESP + 0x2c]
// 004a9829: FMULP ST3
// 004a982b: LEA EAX,[ESP + 0x18]
// 004a982f: FXCH
// 004a9831: FSTP float ptr [ESP + 0x18]
// 004a9835: FXCH ST2
// 004a9837: FADD ST0,ST2
// 004a9839: FXCH
// 004a983b: FSTP float ptr [ESP + 0x20]
// 004a983f: FSTP ST1
// 004a9841: FSTP float ptr [ESP + 0x1c]
// 004a9845: CMP EBX,EAX
// 004a9847: JNZ 0x004a9853
//   XREF to: 004a9853 (CONDITIONAL_JUMP)
// 004a9849: MOV EAX,0x1
// 004a984e: MOV ESP,EBP
// 004a9850: POP EBP
// 004a9851: POP EBX
// 004a9852: RET
// 004a9853: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_004a9853
// 004a9857: MOV dword ptr [EBX],EAX
// 004a9859: MOV EAX,dword ptr [ESP + 0x1c]
// 004a985d: MOV dword ptr [EBX + 0x4],EAX
// 004a9860: MOV EAX,dword ptr [ESP + 0x20]
// 004a9864: MOV dword ptr [EBX + 0x8],EAX
// 004a9867: MOV EAX,0x1
// 004a986c: MOV ESP,EBP
// 004a986e: POP EBP
// 004a986f: POP EBX
// 004a9870: RET
