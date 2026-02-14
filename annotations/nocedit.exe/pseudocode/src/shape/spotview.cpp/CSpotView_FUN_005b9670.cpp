// Name: shape_spotview.cpp_CSpotView_FUN_005b9670
// Address: 005b9670
// Address Range: [[005b9670, 005b994c]]
// Convention: __cdecl
// Signature: void __cdecl shape_spotview_cpp_CSpotView_FUN_005b9670(CSpotView *this_ptr)

#include "nocturne.h"

void __cdecl shape_spotview_cpp_CSpotView_FUN_005b9670(CSpotView *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint in_stack_00000008;
  float local_20;
  float fStack_1c;
  float fStack_c;
  
  local_20 = 1.0;
  iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
  if (iVar4 == 0) {
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    if (iVar4 != 0) {
      local_20 = 4.0;
    }
  }
  else {
    local_20 = 0.05;
  }
  fVar3 = (float)1.1000000000000001;
  fVar1 = g_CGamePtr->delta_time_float * local_20;
  fStack_1c = *(float *)(this_ptr->unk + 0x2c) * (float)1.5;
  fVar2 = fVar1 * (float)3.1415926535000001;
  if (fStack_1c < 1.0) {
    fStack_1c = 1.0;
  }
  fStack_c = *(float *)(this_ptr->unk + 0x2c);
  if (*(float *)(this_ptr->unk + 0x2c) < 1.0) {
    fStack_c = 1.0;
  }
  fStack_c = fStack_c * fVar1;
  if ((in_stack_00000008 & 2) != 0) {
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x52);
    if (iVar4 != 0) {
      *(float *)(this_ptr->unk + 0x28) = *(float *)(this_ptr->unk + 0x28) + fVar2;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x53);
    if (iVar4 != 0) {
      *(float *)(this_ptr->unk + 0x28) = *(float *)(this_ptr->unk + 0x28) - fVar2;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x35);
    if (iVar4 != 0) {
      *(float *)(this_ptr->unk + 0x28) = *(float *)(this_ptr->unk + 0x28) + fVar2;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x37);
    if (iVar4 != 0) {
      *(float *)(this_ptr->unk + 0x28) = *(float *)(this_ptr->unk + 0x28) - fVar2;
    }
  }
  if ((in_stack_00000008 & 1) != 0) {
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4a);
    if (iVar4 != 0) {
      *(float *)(this_ptr->unk + 0x24) = *(float *)(this_ptr->unk + 0x24) + fVar2;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4e);
    if (iVar4 != 0) {
      *(float *)(this_ptr->unk + 0x24) = *(float *)(this_ptr->unk + 0x24) - fVar2;
    }
  }
  if ((in_stack_00000008 & 8) != 0) {
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar4 != 0) {
      *(float *)(this_ptr->unk + 0x30) = *(float *)(this_ptr->unk + 0x30) - fStack_c;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar4 != 0) {
      *(float *)(this_ptr->unk + 0x30) = *(float *)(this_ptr->unk + 0x30) + fStack_c;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
    if (iVar4 != 0) {
      *(float *)(this_ptr->unk + 0x34) = *(float *)(this_ptr->unk + 0x34) + fStack_c;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
    if (iVar4 != 0) {
      *(float *)(this_ptr->unk + 0x34) = *(float *)(this_ptr->unk + 0x34) - fStack_c;
    }
  }
  if ((in_stack_00000008 & 4) != 0) {
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
    if (iVar4 != 0) {
      *(float *)(this_ptr->unk + 0x2c) = *(float *)(this_ptr->unk + 0x2c) - fStack_1c * fVar1;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
    if (iVar4 != 0) {
      *(float *)(this_ptr->unk + 0x2c) = *(float *)(this_ptr->unk + 0x2c) + fStack_1c * fVar1;
    }
  }
  if ((in_stack_00000008 & 0x10) != 0) {
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xd);
    if (iVar4 != 0) {
      *(float *)(this_ptr->unk + 0x38) = *(float *)(this_ptr->unk + 0x38) / (local_20 * fVar3);
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xc);
    if (iVar4 != 0) {
      *(float *)(this_ptr->unk + 0x38) = *(float *)(this_ptr->unk + 0x38) * local_20 * fVar3;
    }
  }
  iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4c);
  if (iVar4 == 0) {
    shape_spotview_cpp_CSpotView_FUN_005b9950(this_ptr);
    return;
  }
  shape_spotview_cpp_CSpotView_FUN_005b9620(this_ptr);
  shape_spotview_cpp_CSpotView_FUN_005b9950(this_ptr);
  return;
}
