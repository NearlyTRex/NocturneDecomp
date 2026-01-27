// Name: core_stranger.cpp_CStranger_FUN_005c6220
// Address: 005c6220
// Address Range: [[005c6220, 005c658b]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c6220()

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c6220(int* param_1) */

void core_stranger_cpp_CStranger_FUN_005c6220(void)

{
  CCloth *this_ptr;
  bool bVar1;
  bool bVar2;
  int iVar3;
  SMotion *pSVar4;
  CCloth *pCVar5;
  int in_stack_00000004;
  
  if (0 < *(int *)(in_stack_00000004 + 0x2a94)) {
    bVar1 = false;
    iVar3 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x120))();
    bVar2 = false;
    if (iVar3 < 2) {
      if (*(int *)(in_stack_00000004 + 0x2a8c) == 0) {
        if ((float)0.69999999999999996 < *(float *)(in_stack_00000004 + 0x2a90)) {
          bVar2 = true;
        }
      }
      if (*(int *)(in_stack_00000004 + 0x2a8c) == 1) {
        if (*(float *)(in_stack_00000004 + 0x2a90) < (float)0.29999999999999999) {
          bVar2 = true;
        }
      }
      if (*(int *)(in_stack_00000004 + 0x2a8c) == 2) {
        if ((float)0.5 < *(float *)(in_stack_00000004 + 0x2a90)) {
          bVar1 = true;
        }
      }
      if (*(int *)(in_stack_00000004 + 0x2a8c) == 3) {
        if (*(float *)(in_stack_00000004 + 0x2a90) < (float)0.5) {
          bVar1 = true;
        }
      }
      if (*(int *)(in_stack_00000004 + 0x2a8c) == 4) {
        if (*(float *)(in_stack_00000004 + 0x2a90) < (float)0.40000000000000002) {
          bVar1 = true;
        }
      }
      if (*(int *)(in_stack_00000004 + 0x2a8c) == 5) {
        if ((float)0.59999999999999998 < *(float *)(in_stack_00000004 + 0x2a90)) {
          bVar1 = true;
        }
      }
      if (*(int *)(in_stack_00000004 + 0x2a8c) == 9) {
        if (*(float *)(in_stack_00000004 + 0x2a90) < (float)0.40000000000000002) {
          bVar1 = true;
        }
      }
      if (*(int *)(in_stack_00000004 + 0x2a8c) == 0xf) {
        if ((float)0.29999999999999999 < *(float *)(in_stack_00000004 + 0x2a90)) {
          if ((double)*(float *)(in_stack_00000004 + 0x2a90) < 0.80000000000000004) {
            bVar1 = true;
          }
        }
      }
    }
    this_ptr = *(CCloth **)(in_stack_00000004 + 0x2c28);
    if (bVar2) {
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
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
    if (bVar1) {
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
      core_cloth_cpp_CCloth_grabCloth_FUN_0043e0d0(this_ptr);
    }
    else {
      core_cloth_cpp_FUN_0043e170();
      core_cloth_cpp_FUN_0043e170();
    }
    pCVar5 = this_ptr + 1;
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       ((CMotionController *)(in_stack_00000004 + 0x158));
    if (pSVar4->state_index == 0x2a) {
      if (pCVar5 != (CCloth *)&stack0xffffffd8) {
        this_ptr[1].unk[4] = '\0';
        this_ptr[1].unk[5] = '\0';
        this_ptr[1].unk[6] = '\0';
        this_ptr[1].unk[7] = '\0';
        pCVar5->unk[0] = '\0';
        pCVar5->unk[1] = '\0';
        pCVar5->unk[2] = '\0';
        pCVar5->unk[3] = '\0';
        this_ptr[1].unk[8] = '\0';
        this_ptr[1].unk[9] = '\0';
        this_ptr[1].unk[10] = -0x60;
        this_ptr[1].unk[0xb] = -0x3f;
        return;
      }
    }
    else if (pSVar4->state_index == 0x2b) {
      if (pCVar5 != (CCloth *)&stack0xffffffe4) {
        this_ptr[1].unk[4] = '\0';
        this_ptr[1].unk[5] = '\0';
        this_ptr[1].unk[6] = '\0';
        this_ptr[1].unk[7] = '\0';
        pCVar5->unk[0] = '\0';
        pCVar5->unk[1] = '\0';
        pCVar5->unk[2] = '\0';
        pCVar5->unk[3] = '\0';
        this_ptr[1].unk[8] = '\0';
        this_ptr[1].unk[9] = '\0';
        this_ptr[1].unk[10] = -0x60;
        this_ptr[1].unk[0xb] = 'A';
        return;
      }
    }
  }
  return;
}
