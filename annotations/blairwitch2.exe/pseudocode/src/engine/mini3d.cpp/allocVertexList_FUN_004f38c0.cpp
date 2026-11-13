// Name: engine_mini3d.cpp_allocVertexList_FUN_004f38c0
// Address: 004f38c0
// Address Range: [[004f38c0, 004f3919]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_allocVertexList_FUN_004f38c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_allocVertexList_FUN_004f38c0(void)

{
  if (_DAT_01d09b78 != (void *)0x0) {
    return;
  }
  _DAT_01d09b78 = malloc(0x9c440);
  if (_DAT_01d09b78 == (void *)0x0) {
    _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
    _DAT_01d046a4 = 0x692;
    core_main_c_FUN_004e4500("CMini3D::allocVertexList - Out of memory!");
  }
  _DAT_01d09b7c = (int)_DAT_01d09b78 + 0x3fU & 0xffffffc0;
  _DAT_01d09b80 = _DAT_01d09b7c;
  return;
}
