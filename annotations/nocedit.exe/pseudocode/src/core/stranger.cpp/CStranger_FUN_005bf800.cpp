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
  
  this_ptr->unk2[0x44] = '\0';
  this_ptr->unk2[0x45] = '\0';
  this_ptr->unk2[0x46] = '\0';
  this_ptr->unk2[0x47] = '\0';
  *(uint *)(this_ptr->unk2 + 0x40) = *(uint *)(this_ptr->unk2 + 0x44);
  *(uint *)(this_ptr->unk2 + 0x3c) = *(uint *)(this_ptr->unk2 + 0x40);
  fVar4 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&(this_ptr->base).base.model.motion_controller,0);
  if ((fVar4 <= 0.0) || (1.0 <= *(float *)(this_ptr->unk2 + 0x18))) {
    this_ptr->unk2[0x14] = '\0';
    this_ptr->unk2[0x15] = '\0';
    this_ptr->unk2[0x16] = '\0';
    this_ptr->unk2[0x17] = '\0';
    this_ptr->unk2[0x48] = -1;
    this_ptr->unk2[0x49] = -1;
    this_ptr->unk2[0x4a] = -1;
    this_ptr->unk2[0x4b] = -1;
    this_ptr->unk2[0x1c] = '\0';
    this_ptr->unk2[0x1d] = '\0';
    this_ptr->unk2[0x1e] = '\0';
    this_ptr->unk2[0x1f] = '\0';
    this_ptr->unk2[0x20] = '\0';
    this_ptr->unk2[0x21] = '\0';
    this_ptr->unk2[0x22] = '\0';
    this_ptr->unk2[0x23] = '\0';
    this_ptr->unk2[0x18] = '\0';
    this_ptr->unk2[0x19] = '\0';
    this_ptr->unk2[0x1a] = '\0';
    this_ptr->unk2[0x1b] = '\0';
    return;
  }
  if (fVar4 < 1.0) {
    fVar4 = (1.0 - fVar4) * in_stack_00000008 * (float)10;
    if (fVar4 <= ABS(*(float *)(this_ptr->unk2 + 0x14))) {
      if (0.0 <= *(float *)(this_ptr->unk2 + 0x14)) {
        *(float *)(this_ptr->unk2 + 0x14) = *(float *)(this_ptr->unk2 + 0x14) - fVar4;
      }
      else {
        *(float *)(this_ptr->unk2 + 0x14) = *(float *)(this_ptr->unk2 + 0x14) + fVar4;
      }
    }
    else {
      this_ptr->unk2[0x14] = '\0';
      this_ptr->unk2[0x15] = '\0';
      this_ptr->unk2[0x16] = '\0';
      this_ptr->unk2[0x17] = '\0';
    }
  }
  iVar1 = *(int *)(this_ptr->unk2 + 0x48);
  *(uint *)(this_ptr->unk2 + 0x48) = DAT_03f6bb1c;
  if (*(float *)(this_ptr->unk2 + 0x14) < 0.0) {
    *(uint *)(this_ptr->unk2 + 0x48) = DAT_03f6bb20;
  }
  if (*(float *)(this_ptr->unk2 + 0x18) <= (float)0.20000000000000001) {
    this_ptr->unk2[0x20] = '\0';
    this_ptr->unk2[0x21] = '\0';
    this_ptr->unk2[0x22] = '\0';
    this_ptr->unk2[0x23] = '\0';
  }
  else {
    *(float *)(this_ptr->unk2 + 0x20) = *(float *)(this_ptr->unk2 + 0x20) + in_stack_00000008;
  }
  if ((*(float *)(this_ptr->unk2 + 0x1c) <= 0.0) &&
     (((float)0.5 <= *(float *)(this_ptr->unk2 + 0x18) ||
      (1.0 < *(float *)(this_ptr->unk2 + 0x20))))) {
    *(float *)(this_ptr->unk2 + 0x1c) = (1.0 - *(float *)(this_ptr->unk2 + 0x18)) * 1.6;
  }
  if (*(float *)(this_ptr->unk2 + 0x1c) <= 0.0) {
    local_34 = ABS(*(float *)(this_ptr->unk2 + 0x14) * (float)0.31830988619288902);
    if (iVar1 != *(int *)(this_ptr->unk2 + 0x48)) {
      local_34 = 0.0;
    }
    if (1.0 < local_34) {
      local_34 = 1.0;
    }
    fVar4 = (local_34 - *(float *)(this_ptr->unk2 + 0x18)) + *(float *)(this_ptr->unk2 + 0x18);
    *(float *)(this_ptr->unk2 + 0x18) = fVar4;
    if ((float)0.001 < fVar4) {
      *(int *)(this_ptr->unk2 + 0x48) = iVar1;
      return;
    }
  }
  else {
    fVar4 = *(float *)(this_ptr->unk2 + 0x1c);
    fVar2 = fVar4 - in_stack_00000008;
    *(float *)(this_ptr->unk2 + 0x1c) = fVar2;
    if (0.0 < fVar2) {
      fVar4 = in_stack_00000008 / fVar4;
    }
    else {
      fVar4 = 1.0 - *(float *)(this_ptr->unk2 + 0x18);
      this_ptr->unk2[0x1c] = '\0';
      this_ptr->unk2[0x1d] = '\0';
      this_ptr->unk2[0x1e] = '\0';
      this_ptr->unk2[0x1f] = '\0';
    }
    fVar2 = *(float *)(this_ptr->unk2 + 0x18);
    fVar3 = fVar2 + fVar4;
    *(float *)(this_ptr->unk2 + 0x18) = fVar3;
    if (fVar3 < 1.0) {
      *(float *)(this_ptr->unk2 + 0x14) =
           *(float *)(this_ptr->unk2 + 0x14) -
           (*(float *)(this_ptr->unk2 + 0x14) * fVar4) / (1.0 - fVar2);
      return;
    }
    this_ptr->unk2[0x14] = '\0';
    this_ptr->unk2[0x15] = '\0';
    this_ptr->unk2[0x16] = '\0';
    this_ptr->unk2[0x17] = '\0';
    this_ptr->unk2[0x1c] = '\0';
    this_ptr->unk2[0x1d] = '\0';
    this_ptr->unk2[0x1e] = '\0';
    this_ptr->unk2[0x1f] = '\0';
    this_ptr->unk2[0x20] = '\0';
    this_ptr->unk2[0x21] = '\0';
    this_ptr->unk2[0x22] = '\0';
    this_ptr->unk2[0x23] = '\0';
    this_ptr->unk2[0x18] = '\0';
    this_ptr->unk2[0x19] = '\0';
    this_ptr->unk2[0x1a] = -0x80;
    this_ptr->unk2[0x1b] = '?';
  }
  return;
}
