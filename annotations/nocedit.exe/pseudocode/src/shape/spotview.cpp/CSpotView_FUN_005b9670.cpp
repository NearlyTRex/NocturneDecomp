// Name: shape_spotview.cpp_CSpotView_FUN_005b9670
// Address: 005b9670
// Address Range: [[005b9670, 005b994c]]
// Convention: __cdecl
// Signature: void shape_spotview.cpp_CSpotView_FUN_005b9670(CSpotView * this_ptr)

#include "nocturne.h"

void __cdecl shape_spotview_cpp_CSpotView_FUN_005b9670(CSpotView *this_ptr)

{
  char *pcVar1;
  CSpotView *this_ptr_00;
  int iVar2;
  float in_stack_00000008;
  float in_stack_0000000c;
  float in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  float in_stack_0000001c;
  float in_stack_00000020;
  float in_stack_00000024;
  float in_stack_fffffff0;
  float fVar3;
  
  this_ptr_00 = this_ptr;
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
  if ((iVar2 == 0) && (iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a), iVar2 != 0)) {
    in_stack_fffffff0 = 4.0;
  }
  fVar3 = in_stack_fffffff0 * (float)1.1000000000000001;
  pcVar1 = this_ptr->field0_0x0;
  this_ptr = *(CSpotView **)(this_ptr->field0_0x0 + 0x2c);
  if (*(float *)(pcVar1 + 0x2c) < 1.0) {
    this_ptr = (CSpotView *)0x3f800000;
  }
  this_ptr = (CSpotView *)((float)this_ptr * g_CGamePtr->delta_time_float * in_stack_fffffff0);
  if (((uint)in_stack_00000008 & 2) != 0) {
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x52);
    if (iVar2 != 0) {
      *(float *)(this_ptr_00->field0_0x0 + 0x28) =
           *(float *)(this_ptr_00->field0_0x0 + 0x28) + in_stack_00000008;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x53);
    if (iVar2 != 0) {
      *(float *)(this_ptr_00->field0_0x0 + 0x28) =
           *(float *)(this_ptr_00->field0_0x0 + 0x28) - in_stack_00000010;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x35);
    if (iVar2 != 0) {
      *(float *)(this_ptr_00->field0_0x0 + 0x28) =
           *(float *)(this_ptr_00->field0_0x0 + 0x28) + in_stack_00000018;
    }
    this_ptr = (CSpotView *)0x37;
    fVar3 = 8.411417e-39;
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x37);
    if (iVar2 != 0) {
      *(float *)(this_ptr_00->field0_0x0 + 0x28) =
           *(float *)(this_ptr_00->field0_0x0 + 0x28) - in_stack_00000020;
    }
  }
  if (((uint)in_stack_00000008 & 1) != 0) {
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4a);
    if (iVar2 != 0) {
      *(float *)(this_ptr_00->field0_0x0 + 0x24) =
           *(float *)(this_ptr_00->field0_0x0 + 0x24) + in_stack_00000008;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4e);
    if (iVar2 != 0) {
      *(float *)(this_ptr_00->field0_0x0 + 0x24) =
           *(float *)(this_ptr_00->field0_0x0 + 0x24) - in_stack_00000010;
    }
  }
  if (((uint)in_stack_00000008 & 8) != 0) {
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar2 != 0) {
      *(float *)(this_ptr_00->field0_0x0 + 0x30) =
           *(float *)(this_ptr_00->field0_0x0 + 0x30) - in_stack_0000000c;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar2 != 0) {
      *(float *)(this_ptr_00->field0_0x0 + 0x30) =
           *(float *)(this_ptr_00->field0_0x0 + 0x30) + in_stack_00000014;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
    if (iVar2 != 0) {
      *(float *)(this_ptr_00->field0_0x0 + 0x34) =
           *(float *)(this_ptr_00->field0_0x0 + 0x34) + in_stack_0000001c;
    }
    this_ptr = (CSpotView *)0x1e;
    fVar3 = 8.411684e-39;
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
    if (iVar2 != 0) {
      *(float *)(this_ptr_00->field0_0x0 + 0x34) =
           *(float *)(this_ptr_00->field0_0x0 + 0x34) - in_stack_00000024;
    }
  }
  if (((uint)in_stack_00000008 & 4) != 0) {
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
    if (iVar2 != 0) {
      *(float *)(this_ptr_00->field0_0x0 + 0x2c) =
           *(float *)(this_ptr_00->field0_0x0 + 0x2c) - fVar3;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
    if (iVar2 != 0) {
      *(float *)(this_ptr_00->field0_0x0 + 0x2c) =
           *(float *)(this_ptr_00->field0_0x0 + 0x2c) + (float)this_ptr;
    }
  }
  if (((uint)in_stack_00000008 & 0x10) != 0) {
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xd);
    if (iVar2 != 0) {
      *(float *)(this_ptr_00->field0_0x0 + 0x38) =
           *(float *)(this_ptr_00->field0_0x0 + 0x38) / (float)this_ptr;
    }
    iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0xc);
    if (iVar2 != 0) {
      *(float *)(this_ptr_00->field0_0x0 + 0x38) =
           *(float *)(this_ptr_00->field0_0x0 + 0x38) * in_stack_0000000c;
    }
  }
  iVar2 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,0x4c);
  if (iVar2 == 0) {
    shape_spotview_cpp_CSpotView_FUN_005b9950(this_ptr_00);
    return;
  }
  shape_spotview_cpp_CSpotView_FUN_005b9620(this_ptr_00);
  shape_spotview_cpp_CSpotView_FUN_005b9950(this_ptr_00);
  return;
}
