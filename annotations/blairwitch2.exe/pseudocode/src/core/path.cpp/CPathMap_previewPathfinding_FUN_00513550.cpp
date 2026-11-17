// Name: core_path.cpp_CPathMap_previewPathfinding_FUN_00513550
// Address: 00513550
// Address Range: [[00513550, 00513640]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_previewPathfinding_FUN_00513550(CPathMap *this_ptr)

#include "nocturne.h"

void __cdecl core_path_cpp_CPathMap_previewPathfinding_FUN_00513550(CPathMap *this_ptr)

{
  int x;
  int iVar1;
  int iVar2;
  int iVar3;
  char acStack_11c [256];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar2 = 0;
  iStack_18 = 0;
  iStack_14 = 0x441;
  do {
    iVar3 = 0;
    iVar1 = 0;
    iStack_1c = iStack_14;
    do {
      _sprintf(acStack_11c,"%s");
      if ((iVar1 == g_INT_01e501fc) && (iVar2 == g_INT_01e50200)) {
        acStack_11c[0] = 's';
      }
      if ((iVar1 == g_INT_01e50204) && (iVar2 == g_INT_01e50208)) {
        acStack_11c[0] = 'd';
      }
      x = g_INT_006141b8 / 2 + iVar3;
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xe;
      engine_2d_c_drawText_FUN_00401fe0(acStack_11c,x,iStack_1c);
    } while (iVar1 < 100);
    iVar2 = iVar2 + 1;
    iStack_14 = iStack_14 + -0xb;
    iStack_18 = iStack_18 + 100;
  } while (iVar2 < 100);
  return;
}
