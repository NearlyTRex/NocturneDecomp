// Name: core_hero.cpp_CHero_FUN_004f37d0
// Address: 004f37d0
// Address Range: [[004f37d0, 004f388b]]
// Convention: __cdecl
// Signature: int core_hero.cpp_CHero_FUN_004f37d0(CHero * this_ptr)
// Globals:
//   double DOUBLE_0062ecc6 = 0.100000000000000

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_FUN_004f37d0(CHero *this_ptr)

{
  int iVar1;
  SCollisionInfo *unaff_EBX;
  
  iVar1 = (*(this_ptr->base_character).base_actor.metadata.vtable[1].hasCollision)
                    ((CDemonActor *)this_ptr,unaff_EBX);
  if (iVar1 < 2) {
    if (iVar1 == 1) {
      return 1;
    }
    if ((((((*(int *)this_ptr->field3_0xbe2c != 0) || (*(int *)(this_ptr->field3_0xbe2c + 4) != 0))
          || (*(int *)(this_ptr->field3_0xbe2c + 0xc) != 0)) ||
         ((*(int *)(this_ptr->field3_0xbe2c + 0x10) != 0 ||
          (*(int *)(this_ptr->field3_0xbe2c + 0x14) != 0)))) ||
        ((*(int *)(this_ptr->field3_0xbe2c + 0x18) != 0 ||
         ((*(int *)(this_ptr->field3_0xbe2c + 0x1c) != 0 ||
          ((float)DOUBLE_0062ecc6 < ABS(*(float *)(this_ptr->field3_0xbe2c + 0x20)))))))) ||
       (((float)DOUBLE_0062ecc6 < ABS(*(float *)(this_ptr->field3_0xbe2c + 0x24)) ||
        (((float)DOUBLE_0062ecc6 < ABS(*(float *)(this_ptr->field3_0xbe2c + 0x28)) ||
         (*(int *)((this_ptr->base_character).field2_0x240c + 4) == 0)))))) {
      return 1;
    }
  }
  return 0;
}


// Assembly code:
// 004f37d0: PUSH EBX
//   Label: core_hero.cpp_CHero_FUN_004f37d0
// 004f37d1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f37d5: PUSH EBX
// 004f37d6: MOV EAX,dword ptr [EBX + 0x154]
// 004f37dc: CALL dword ptr [EAX + 0x120]
// 004f37e2: ADD ESP,0x4
// 004f37e5: CMP EAX,0x1
// 004f37e8: JG 0x004f3881
//   XREF to: 004f3881 (CONDITIONAL_JUMP)
// 004f37ee: JZ 0x004f3883
//   XREF to: 004f3883 (CONDITIONAL_JUMP)
// 004f37f4: CMP dword ptr [EBX + 0xbe2c],0x0
// 004f37fb: JNZ 0x004f3885
//   XREF to: 004f3885 (CONDITIONAL_JUMP)
// 004f3801: CMP dword ptr [EBX + 0xbe30],0x0
// 004f3808: JNZ 0x004f3885
//   XREF to: 004f3885 (CONDITIONAL_JUMP)
// 004f380e: CMP dword ptr [EBX + 0xbe38],0x0
// 004f3815: JNZ 0x004f3885
//   XREF to: 004f3885 (CONDITIONAL_JUMP)
// 004f381b: CMP dword ptr [EBX + 0xbe3c],0x0
// 004f3822: JNZ 0x004f3885
//   XREF to: 004f3885 (CONDITIONAL_JUMP)
// 004f3824: CMP dword ptr [EBX + 0xbe40],0x0
// 004f382b: JNZ 0x004f3885
//   XREF to: 004f3885 (CONDITIONAL_JUMP)
// 004f382d: CMP dword ptr [EBX + 0xbe44],0x0
// 004f3834: JNZ 0x004f3885
//   XREF to: 004f3885 (CONDITIONAL_JUMP)
// 004f3836: CMP dword ptr [EBX + 0xbe48],0x0
// 004f383d: JNZ 0x004f3885
//   XREF to: 004f3885 (CONDITIONAL_JUMP)
// 004f383f: FLD float ptr [EBX + 0xbe4c]
// 004f3845: FABS
// 004f3847: FCOMP double ptr [0x0062ecc6]
//   XREF to: 0062ecc6 (READ)
// 004f384d: FNSTSW AX
// 004f384f: SAHF
// 004f3850: JA 0x004f3885
//   XREF to: 004f3885 (CONDITIONAL_JUMP)
// 004f3852: FLD float ptr [EBX + 0xbe50]
// 004f3858: FABS
// 004f385a: FCOMP double ptr [0x0062ecc6]
//   XREF to: 0062ecc6 (READ)
// 004f3860: FNSTSW AX
// 004f3862: SAHF
// 004f3863: JA 0x004f3885
//   XREF to: 004f3885 (CONDITIONAL_JUMP)
// 004f3865: FLD float ptr [EBX + 0xbe54]
// 004f386b: FABS
// 004f386d: FCOMP double ptr [0x0062ecc6]
//   XREF to: 0062ecc6 (READ)
// 004f3873: FNSTSW AX
// 004f3875: SAHF
// 004f3876: JA 0x004f3885
//   XREF to: 004f3885 (CONDITIONAL_JUMP)
// 004f3878: CMP dword ptr [EBX + 0x2410],0x0
// 004f387f: JZ 0x004f3885
//   XREF to: 004f3885 (CONDITIONAL_JUMP)
// 004f3881: XOR EAX,EAX
//   Label: LAB_004f3881
// 004f3883: POP EBX
//   Label: LAB_004f3883
// 004f3884: RET
// 004f3885: MOV EAX,0x1
//   Label: LAB_004f3885
// 004f388a: POP EBX
// 004f388b: RET
