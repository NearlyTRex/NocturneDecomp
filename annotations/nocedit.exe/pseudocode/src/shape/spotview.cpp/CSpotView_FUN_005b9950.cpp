// Name: shape_spotview.cpp_CSpotView_FUN_005b9950
// Address: 005b9950
// Address Range: [[005b9950, 005b9a10]]
// Convention: __cdecl
// Signature: void shape_spotview.cpp_CSpotView_FUN_005b9950(CSpotView * this_ptr)

#include "nocturne.h"

void __cdecl shape_spotview_cpp_CSpotView_FUN_005b9950(CSpotView *this_ptr)

{
  if (*(float *)(this_ptr->field0_0x0 + 0x28) < (float)3.1415926535000001) {
    *(float *)(this_ptr->field0_0x0 + 0x28) =
         *(float *)(this_ptr->field0_0x0 + 0x28) + 6.283185f;
  }
  if ((float)3.1415926535000001 < *(float *)(this_ptr->field0_0x0 + 0x28)) {
    *(float *)(this_ptr->field0_0x0 + 0x28) =
         *(float *)(this_ptr->field0_0x0 + 0x28) + -6.283185f;
  }
  if (*(float *)(this_ptr->field0_0x0 + 0x24) < (float)-1.57079632675) {
    this_ptr->field0_0x0[0x24] = -0x25;
    this_ptr->field0_0x0[0x25] = '\x0f';
    this_ptr->field0_0x0[0x26] = -0x37;
    this_ptr->field0_0x0[0x27] = -0x41;
  }
  if ((float)1.57079632675 < *(float *)(this_ptr->field0_0x0 + 0x24)) {
    this_ptr->field0_0x0[0x24] = -0x25;
    this_ptr->field0_0x0[0x25] = '\x0f';
    this_ptr->field0_0x0[0x26] = -0x37;
    this_ptr->field0_0x0[0x27] = '?';
  }
  if (*(float *)(this_ptr->field0_0x0 + 0x2c) < (float)0.10000000000000001) {
    this_ptr->field0_0x0[0x2c] = -0x33;
    this_ptr->field0_0x0[0x2d] = -0x34;
    this_ptr->field0_0x0[0x2e] = -0x34;
    this_ptr->field0_0x0[0x2f] = '=';
  }
  if ((float)10000 < *(float *)(this_ptr->field0_0x0 + 0x2c)) {
    this_ptr->field0_0x0[0x2c] = '\0';
    this_ptr->field0_0x0[0x2d] = '@';
    this_ptr->field0_0x0[0x2e] = '\x1c';
    this_ptr->field0_0x0[0x2f] = 'F';
  }
  if (*(float *)(this_ptr->field0_0x0 + 0x38) < (float)0.01) {
    this_ptr->field0_0x0[0x38] = '\n';
    this_ptr->field0_0x0[0x39] = -0x29;
    this_ptr->field0_0x0[0x3a] = '#';
    this_ptr->field0_0x0[0x3b] = '<';
  }
  if (*(float *)(this_ptr->field0_0x0 + 0x38) <= (float)100) {
    return;
  }
  this_ptr->field0_0x0[0x38] = '\0';
  this_ptr->field0_0x0[0x39] = '\0';
  this_ptr->field0_0x0[0x3a] = -0x38;
  this_ptr->field0_0x0[0x3b] = 'B';
  return;
}
