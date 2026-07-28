// Name: engine_drender.cpp_CDemonRenderer_popViewport_FUN_00460e70
// Address: 00460e70
// Address Range: [[00460e70, 00460e74]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_popViewport_FUN_00460e70(CDemonRenderer *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_popViewport_FUN_00460e70(CDemonRenderer *this_ptr)

{
  _DAT_01cc53d0 = _DAT_01cc53d0 + -1;
  if (_DAT_01cc53d0 < 0) {
    PTR_01cc4800 = "..\\engine\\matrix.c";
    INT_01cc4804 = 0x569;
    core_main_c_FUN_004c8440("3D Window unbalance");
  }
  _DAT_01c039c4 = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc549c);
  _DAT_01c039c8 = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc54c4);
  _DAT_01c039cc = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc54ec);
  _DAT_01c039d0 = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc5514);
  _DAT_01c039d4 = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc553c);
  _DAT_01c039d8 = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc5564);
  _DAT_01c039dc = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc558c);
  _DAT_01c039e0 = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc55b4);
  _DAT_01c039e4 = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc55dc);
  _DAT_01c00c48 = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc53d4);
  _DAT_01c00c4c = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc53fc);
  _DAT_01c00c50 = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc5424);
  _DAT_01c00c54 = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc544c);
  DAT_005b7648 = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc5474);
  _DAT_01c00c58 = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc5604);
  _DAT_01c00c60 = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc562c);
  _DAT_01c00c5c = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc5654);
  _DAT_01c00c64 = *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc567c);
  return;
}
