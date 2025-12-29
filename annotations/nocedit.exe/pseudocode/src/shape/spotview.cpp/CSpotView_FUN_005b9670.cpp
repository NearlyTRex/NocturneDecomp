// Name: shape_spotview.cpp_CSpotView_FUN_005b9670
// Address: 005b9670
// Address Range: [[005b9670, 005b994c]]
// Convention: __cdecl
// Signature: void shape_spotview.cpp_CSpotView_FUN_005b9670(CSpotView * this_ptr)

#include "nocturne.h"

void __cdecl shape_spotview_cpp_CSpotView_FUN_005b9670(CSpotView *this_ptr)

{
  int iVar1;
  float unaff_EBP;
  CKeys *pCVar2;
  float in_stack_00000008;
  float fStack0000000c;
  float fStack00000010;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_stack_fffffff0;
  float fStack_c;
  
  fVar6 = 7.84727e-44;
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
  if (iVar1 == 0) {
    in_stack_fffffff0 = 5.88545e-44;
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
    if (iVar1 != 0) {
      in_stack_00000008 = 4.0;
    }
  }
  else {
    fStack_c = 0.05;
  }
  fVar3 = in_stack_00000008 * (float)1.1000000000000001;
  fStack00000010 = g_CGamePtr->delta_time_float * in_stack_00000008;
  fStack0000000c = *(float *)(this_ptr->field0_0x0 + 0x2c) * (float)1.5;
  fVar4 = fStack00000010 * (float)3.1415926535000001;
  if (fStack0000000c < 1.0) {
    fStack0000000c = 1.0;
  }
  fStack0000000c = fStack0000000c * fStack00000010;
  fVar5 = *(float *)(this_ptr->field0_0x0 + 0x2c);
  if (*(float *)(this_ptr->field0_0x0 + 0x2c) < 1.0) {
    fVar5 = 1.0;
  }
  fVar5 = fVar5 * fStack00000010;
  if (((uint)in_stack_00000008 & 2) != 0) {
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x52);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field0_0x0 + 0x28) = *(float *)(this_ptr->field0_0x0 + 0x28) + fVar6;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x53);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field0_0x0 + 0x28) =
           *(float *)(this_ptr->field0_0x0 + 0x28) - in_stack_fffffff0;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x35);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field0_0x0 + 0x28) =
           *(float *)(this_ptr->field0_0x0 + 0x28) + 1.14906e-43;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x37);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field0_0x0 + 0x28) = *(float *)(this_ptr->field0_0x0 + 0x28) - fVar4;
    }
  }
  if (((uint)in_stack_00000008 & 1) != 0) {
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4a);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field0_0x0 + 0x24) =
           *(float *)(this_ptr->field0_0x0 + 0x24) + 1.03696e-43;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4e);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field0_0x0 + 0x24) = *(float *)(this_ptr->field0_0x0 + 0x24) - fVar4;
    }
  }
  if (((uint)in_stack_00000008 & 8) != 0) {
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field0_0x0 + 0x30) = *(float *)(this_ptr->field0_0x0 + 0x30) - 1.0;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field0_0x0 + 0x30) = *(float *)(this_ptr->field0_0x0 + 0x30) + fStack_c;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field0_0x0 + 0x34) =
           *(float *)(this_ptr->field0_0x0 + 0x34) + in_stack_00000008;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field0_0x0 + 0x34) = *(float *)(this_ptr->field0_0x0 + 0x34) - fVar5;
    }
  }
  if (((uint)in_stack_00000008 & 4) != 0) {
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field0_0x0 + 0x2c) = *(float *)(this_ptr->field0_0x0 + 0x2c) - unaff_EBP;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field0_0x0 + 0x2c) =
           *(float *)(this_ptr->field0_0x0 + 0x2c) + fStack0000000c;
    }
  }
  if (((uint)in_stack_00000008 & 0x10) != 0) {
    pCVar2 = g_CKeysPtr;
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xd);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field0_0x0 + 0x38) =
           *(float *)(this_ptr->field0_0x0 + 0x38) / (float)pCVar2;
    }
    iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xc);
    if (iVar1 != 0) {
      *(float *)(this_ptr->field0_0x0 + 0x38) = *(float *)(this_ptr->field0_0x0 + 0x38) * fVar3;
    }
  }
  iVar1 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4c);
  if (iVar1 == 0) {
    shape_spotview_cpp_CSpotView_FUN_005b9950(this_ptr);
    return;
  }
  fStack00000010 = 8.412e-39;
  shape_spotview_cpp_CSpotView_FUN_005b9620(this_ptr);
  shape_spotview_cpp_CSpotView_FUN_005b9950(this_ptr);
  return;
}
