// Name: core_stranger.cpp_CStranger_FUN_005c6220
// Address: 005c6220
// Address Range: [[005c6220, 005c658b]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005c6220(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005c6220(CStranger *this_ptr)

{
  float fVar1;
  CCloth *this_ptr_00;
  bool bVar2;
  bool bVar3;
  int iVar4;
  SMotion *pSVar5;
  CCloth *pCVar6;
  
  if (0 < (this_ptr->base).base.cloth_count) {
    bVar2 = false;
    iVar4 = (*(((this_ptr->base).base.base.vtable._uc)->_uc).isDamageable)((CCharacter *)this_ptr);
    bVar3 = false;
    if (iVar4 < 2) {
      if ((*(int *)((this_ptr->base).base.unk3 + 0x46c) == 0) &&
         ((float)0.69999999999999996 < *(float *)((this_ptr->base).base.unk3 + 0x470))) {
        bVar3 = true;
      }
      if ((*(int *)((this_ptr->base).base.unk3 + 0x46c) == 1) &&
         (*(float *)((this_ptr->base).base.unk3 + 0x470) < (float)0.29999999999999999)) {
        bVar3 = true;
      }
      if ((*(int *)((this_ptr->base).base.unk3 + 0x46c) == 2) &&
         ((float)0.5 < *(float *)((this_ptr->base).base.unk3 + 0x470))) {
        bVar2 = true;
      }
      if ((*(int *)((this_ptr->base).base.unk3 + 0x46c) == 3) &&
         (*(float *)((this_ptr->base).base.unk3 + 0x470) < (float)0.5)) {
        bVar2 = true;
      }
      if ((*(int *)((this_ptr->base).base.unk3 + 0x46c) == 4) &&
         (*(float *)((this_ptr->base).base.unk3 + 0x470) < (float)0.40000000000000002)) {
        bVar2 = true;
      }
      if ((*(int *)((this_ptr->base).base.unk3 + 0x46c) == 5) &&
         ((float)0.59999999999999998 < *(float *)((this_ptr->base).base.unk3 + 0x470))) {
        bVar2 = true;
      }
      if ((*(int *)((this_ptr->base).base.unk3 + 0x46c) == 9) &&
         (*(float *)((this_ptr->base).base.unk3 + 0x470) < (float)0.40000000000000002)) {
        bVar2 = true;
      }
      if (((*(int *)((this_ptr->base).base.unk3 + 0x46c) == 0xf) &&
          (fVar1 = *(float *)((this_ptr->base).base.unk3 + 0x470), (float)0.29999999999999999 < fVar1))
         && ((double)fVar1 < 0.80000000000000004)) {
        bVar2 = true;
      }
    }
    this_ptr_00 = *(CCloth **)((this_ptr->base).base.cloth_data + 400);
    if (bVar3) {
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00);
    }
    else {
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
    }
    if (bVar2) {
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr_00);
    }
    else {
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
    }
    pCVar6 = this_ptr_00 + 1;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(this_ptr->base).base.model.motion_controller);
    if (pSVar5->state_index == 0x2a) {
      if (pCVar6 != (CCloth *)&stack0xffffffdc) {
        this_ptr_00[1].unk[4] = '\0';
        this_ptr_00[1].unk[5] = '\0';
        this_ptr_00[1].unk[6] = '\0';
        this_ptr_00[1].unk[7] = '\0';
        pCVar6->unk[0] = '\0';
        pCVar6->unk[1] = '\0';
        pCVar6->unk[2] = '\0';
        pCVar6->unk[3] = '\0';
        this_ptr_00[1].unk[8] = '\0';
        this_ptr_00[1].unk[9] = '\0';
        this_ptr_00[1].unk[10] = -0x60;
        this_ptr_00[1].unk[0xb] = -0x3f;
        return;
      }
    }
    else if (pSVar5->state_index == 0x2b) {
      if (pCVar6 != (CCloth *)&stack0xffffffe8) {
        this_ptr_00[1].unk[4] = '\0';
        this_ptr_00[1].unk[5] = '\0';
        this_ptr_00[1].unk[6] = '\0';
        this_ptr_00[1].unk[7] = '\0';
        pCVar6->unk[0] = '\0';
        pCVar6->unk[1] = '\0';
        pCVar6->unk[2] = '\0';
        pCVar6->unk[3] = '\0';
        this_ptr_00[1].unk[8] = '\0';
        this_ptr_00[1].unk[9] = '\0';
        this_ptr_00[1].unk[10] = -0x60;
        this_ptr_00[1].unk[0xb] = 'A';
        return;
      }
    }
  }
  return;
}
