// Name: core_path.cpp_FUN_0051354e
// Address: 0051354e
// Address Range: [[0051354e, 00513640]]
// Convention: unknown
// Signature: void core_path_cpp_FUN_0051354e(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_path_cpp_FUN_0051354e(void)

{
  int x;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
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
    iVar4 = iStack_18;
    do {
      FUN_005b7790
                (acStack_11c,0x5e1825,(&PTR_DAT_0061b370)[*(byte *)(iVar4 + 0x1e5ec78)]);
      if ((iVar1 == _DAT_01e501fc) && (iVar2 == _DAT_01e50200)) {
        acStack_11c[0] = 's';
      }
      if ((iVar1 == _DAT_01e50204) && (iVar2 == _DAT_01e50208)) {
        acStack_11c[0] = 'd';
      }
      x = DAT_006141b8 / 2 + iVar3;
      iVar4 = iVar4 + 1;
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
