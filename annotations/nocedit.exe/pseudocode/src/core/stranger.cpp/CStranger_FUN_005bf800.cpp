// Name: core_stranger.cpp_CStranger_FUN_005bf800
// Address: 005bf800
// Address Range: [[005bf800, 005bfb09]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_FUN_005bf800(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_FUN_005bf800(CStranger *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_stack_00000008;
  float local_34;
  
  this_ptr->unk8[0x3c] = '\0';
  this_ptr->unk8[0x3d] = '\0';
  this_ptr->unk8[0x3e] = '\0';
  this_ptr->unk8[0x3f] = '\0';
  *(uint *)(this_ptr->unk8 + 0x38) = *(uint *)(this_ptr->unk8 + 0x3c);
  *(uint *)(this_ptr->unk8 + 0x34) = *(uint *)(this_ptr->unk8 + 0x38);
  fVar4 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&(this_ptr->base).base.model.motion_controller,0);
  if ((fVar4 <= 0.0) || (1.0 <= *(float *)(this_ptr->unk8 + 0x10))) {
    this_ptr->unk8[0xc] = '\0';
    this_ptr->unk8[0xd] = '\0';
    this_ptr->unk8[0xe] = '\0';
    this_ptr->unk8[0xf] = '\0';
    this_ptr->unk8[0x40] = -1;
    this_ptr->unk8[0x41] = -1;
    this_ptr->unk8[0x42] = -1;
    this_ptr->unk8[0x43] = -1;
    this_ptr->unk8[0x14] = '\0';
    this_ptr->unk8[0x15] = '\0';
    this_ptr->unk8[0x16] = '\0';
    this_ptr->unk8[0x17] = '\0';
    this_ptr->unk8[0x18] = '\0';
    this_ptr->unk8[0x19] = '\0';
    this_ptr->unk8[0x1a] = '\0';
    this_ptr->unk8[0x1b] = '\0';
    this_ptr->unk8[0x10] = '\0';
    this_ptr->unk8[0x11] = '\0';
    this_ptr->unk8[0x12] = '\0';
    this_ptr->unk8[0x13] = '\0';
    return;
  }
  if (fVar4 < 1.0) {
    fVar4 = (1.0 - fVar4) * in_stack_00000008 * (float)10;
    if (fVar4 <= ABS(*(float *)(this_ptr->unk8 + 0xc))) {
      if (0.0 <= *(float *)(this_ptr->unk8 + 0xc)) {
        *(float *)(this_ptr->unk8 + 0xc) = *(float *)(this_ptr->unk8 + 0xc) - fVar4;
      }
      else {
        *(float *)(this_ptr->unk8 + 0xc) = *(float *)(this_ptr->unk8 + 0xc) + fVar4;
      }
    }
    else {
      this_ptr->unk8[0xc] = '\0';
      this_ptr->unk8[0xd] = '\0';
      this_ptr->unk8[0xe] = '\0';
      this_ptr->unk8[0xf] = '\0';
    }
  }
  iVar1 = *(int *)(this_ptr->unk8 + 0x40);
  *(uint *)(this_ptr->unk8 + 0x40) = DAT_03f6bb1c;
  if (*(float *)(this_ptr->unk8 + 0xc) < 0.0) {
    *(uint *)(this_ptr->unk8 + 0x40) = DAT_03f6bb20;
  }
  if (*(float *)(this_ptr->unk8 + 0x10) <= (float)0.20000000000000001) {
    this_ptr->unk8[0x18] = '\0';
    this_ptr->unk8[0x19] = '\0';
    this_ptr->unk8[0x1a] = '\0';
    this_ptr->unk8[0x1b] = '\0';
  }
  else {
    *(float *)(this_ptr->unk8 + 0x18) = *(float *)(this_ptr->unk8 + 0x18) + in_stack_00000008;
  }
  if ((*(float *)(this_ptr->unk8 + 0x14) <= 0.0) &&
     (((float)0.5 <= *(float *)(this_ptr->unk8 + 0x10) ||
      (1.0 < *(float *)(this_ptr->unk8 + 0x18))))) {
    *(float *)(this_ptr->unk8 + 0x14) = (1.0 - *(float *)(this_ptr->unk8 + 0x10)) * 1.6;
  }
  if (*(float *)(this_ptr->unk8 + 0x14) <= 0.0) {
    local_34 = ABS(*(float *)(this_ptr->unk8 + 0xc) * (float)0.31830988619288902);
    if (iVar1 != *(int *)(this_ptr->unk8 + 0x40)) {
      local_34 = 0.0;
    }
    if (1.0 < local_34) {
      local_34 = 1.0;
    }
    fVar4 = (local_34 - *(float *)(this_ptr->unk8 + 0x10)) + *(float *)(this_ptr->unk8 + 0x10);
    *(float *)(this_ptr->unk8 + 0x10) = fVar4;
    if ((float)0.001 < fVar4) {
      *(int *)(this_ptr->unk8 + 0x40) = iVar1;
      return;
    }
  }
  else {
    fVar4 = *(float *)(this_ptr->unk8 + 0x14);
    fVar2 = fVar4 - in_stack_00000008;
    *(float *)(this_ptr->unk8 + 0x14) = fVar2;
    if (0.0 < fVar2) {
      fVar4 = in_stack_00000008 / fVar4;
    }
    else {
      fVar4 = 1.0 - *(float *)(this_ptr->unk8 + 0x10);
      this_ptr->unk8[0x14] = '\0';
      this_ptr->unk8[0x15] = '\0';
      this_ptr->unk8[0x16] = '\0';
      this_ptr->unk8[0x17] = '\0';
    }
    fVar2 = *(float *)(this_ptr->unk8 + 0x10);
    fVar3 = fVar2 + fVar4;
    *(float *)(this_ptr->unk8 + 0x10) = fVar3;
    if (fVar3 < 1.0) {
      *(float *)(this_ptr->unk8 + 0xc) =
           *(float *)(this_ptr->unk8 + 0xc) -
           (*(float *)(this_ptr->unk8 + 0xc) * fVar4) / (1.0 - fVar2);
      return;
    }
    this_ptr->unk8[0xc] = '\0';
    this_ptr->unk8[0xd] = '\0';
    this_ptr->unk8[0xe] = '\0';
    this_ptr->unk8[0xf] = '\0';
    this_ptr->unk8[0x14] = '\0';
    this_ptr->unk8[0x15] = '\0';
    this_ptr->unk8[0x16] = '\0';
    this_ptr->unk8[0x17] = '\0';
    this_ptr->unk8[0x18] = '\0';
    this_ptr->unk8[0x19] = '\0';
    this_ptr->unk8[0x1a] = '\0';
    this_ptr->unk8[0x1b] = '\0';
    this_ptr->unk8[0x10] = '\0';
    this_ptr->unk8[0x11] = '\0';
    this_ptr->unk8[0x12] = -0x80;
    this_ptr->unk8[0x13] = '?';
  }
  return;
}
