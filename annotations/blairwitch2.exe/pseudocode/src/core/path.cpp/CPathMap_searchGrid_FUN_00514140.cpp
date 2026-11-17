// Name: core_path.cpp_CPathMap_searchGrid_FUN_00514140
// Address: 00514140
// Address Range: [[00514140, 005145c8]]
// Convention: __cdecl
// Signature: uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_00514140(CPathMap *this_ptr,int start_height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_00514140(CPathMap *this_ptr,int start_height)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  memset(g_CHAR_ARRAY_01e5ec78,0,0x2774);
  g_INT_01e613ec = 1;
  g_INT_01e5ec6c = 0;
  g_INT_ARRAY_01e5020c[0] = g_INT_01e501fc;
  _DAT_01e50214 = g_INT_01e50200;
  g_CHAR_ARRAY_01e5ec78[g_INT_01e50200 * 100 + g_INT_01e501fc] = '\x01';
  g_INT_01e5ec70 = 1;
  _DAT_01e50210 = start_height;
  do {
    if (g_CHAR_ARRAY_01e5ec78[g_INT_01e50208 * 100 + g_INT_01e50204] != '\0') {
      return 1;
    }
    if (g_INT_01e5ec6c == g_INT_01e5ec70) {
      g_CHAR_PTR_01d046a0 = "..\\core\\path.cpp";
      g_INT_01d046a4 = 0xdf;
      core_main_c_displayErrorAndQuit_FUN_004e4500("queuePop - empty queue?!");
    }
    iVar1 = g_INT_01e5ec6c * 0xc;
    iVar10 = g_INT_ARRAY_01e5020c[g_INT_01e5ec6c * 3];
    iVar8 = *(int *)(&DAT_01e50210 + iVar1);
    g_INT_01e5ec6c = g_INT_01e5ec6c + 1;
    iVar1 = *(int *)(&DAT_01e50214 + iVar1);
    if (4999 < g_INT_01e5ec6c) {
      g_INT_01e5ec6c = 0;
    }
    iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0
                      (this_ptr,iVar1 + 1,iVar10,iVar8);
    iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0
                      (this_ptr,iVar1,iVar10 + 1,iVar8);
    iVar4 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0
                      (this_ptr,iVar1 + -1,iVar10,iVar8);
    iVar5 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0
                      (this_ptr,iVar1,iVar10 + -1,iVar8);
    if ((((g_INT_01e501fc == iVar10) && (iVar1 == g_INT_01e50200)) ||
        ((iVar10 == g_INT_01e50204 && (iVar1 == g_INT_01e50208)))) ||
       ((((iVar8 - iVar2 < g_INT_01e4fed4 && (iVar8 - iVar4 < g_INT_01e4fed4)) &&
         (iVar8 - iVar3 < g_INT_01e4fed4)) && (iVar8 - iVar5 < g_INT_01e4fed4)))) {
      if (((iVar1 < 99) && (g_CHAR_ARRAY_01e5ec78[(iVar1 + 1) * 100 + iVar10] == '\0')) &&
         (uVar6 = iVar2 - iVar8 >> 0x1f, (int)((iVar2 - iVar8 ^ uVar6) - uVar6) < g_INT_01e4fed4)) {
        g_CHAR_ARRAY_01e5ec78[(iVar1 + 1) * 100 + iVar10] = '\x01';
        iVar7 = g_INT_01e5ec70 * 0xc;
        g_INT_ARRAY_01e5020c[g_INT_01e5ec70 * 3] = iVar10;
        iVar9 = g_INT_01e5ec70 + 1;
        *(int *)(&DAT_01e50210 + iVar7) = iVar2;
        g_INT_01e613ec = g_INT_01e613ec + 1;
        g_INT_01e5ec70 = iVar9;
        *(int *)(&DAT_01e50214 + iVar7) = iVar1 + 1;
        if (4999 < iVar9) {
          g_INT_01e5ec70 = 0;
        }
      }
      if (((iVar10 < 99) && (g_CHAR_ARRAY_01e5ec78[iVar1 * 100 + iVar10 + 1] == '\0')) &&
         (uVar6 = iVar3 - iVar8 >> 0x1f, (int)((iVar3 - iVar8 ^ uVar6) - uVar6) < g_INT_01e4fed4)) {
        g_CHAR_ARRAY_01e5ec78[iVar10 + iVar1 * 100 + 1] = '\x03';
        iVar2 = g_INT_01e5ec70 * 0xc;
        g_INT_ARRAY_01e5020c[g_INT_01e5ec70 * 3] = iVar10 + 1;
        g_INT_01e5ec70 = g_INT_01e5ec70 + 1;
        *(int *)(&DAT_01e50210 + iVar2) = iVar3;
        *(int *)(&DAT_01e50214 + iVar2) = iVar1;
        g_INT_01e613ec = g_INT_01e613ec + 1;
        if (4999 < g_INT_01e5ec70) {
          g_INT_01e5ec70 = 0;
        }
      }
      if (((0 < iVar1) && (g_CHAR_ARRAY_01e5ec78[(iVar1 + -1) * 100 + iVar10] == '\0')) &&
         (uVar6 = iVar4 - iVar8 >> 0x1f, (int)((iVar4 - iVar8 ^ uVar6) - uVar6) < g_INT_01e4fed4)) {
        g_CHAR_ARRAY_01e5ec78[(iVar1 + -1) * 100 + iVar10] = '\x02';
        iVar2 = g_INT_01e5ec70 * 0xc;
        g_INT_ARRAY_01e5020c[g_INT_01e5ec70 * 3] = iVar10;
        g_INT_01e5ec70 = g_INT_01e5ec70 + 1;
        *(int *)(&DAT_01e50210 + iVar2) = iVar4;
        *(int *)(&DAT_01e50214 + iVar2) = iVar1 + -1;
        g_INT_01e613ec = g_INT_01e613ec + 1;
        if (4999 < g_INT_01e5ec70) {
          g_INT_01e5ec70 = 0;
        }
      }
      if (((0 < iVar10) && ((&g_UCHAR_01e5ec77)[iVar1 * 100 + iVar10] == '\0')) &&
         (uVar6 = iVar5 - iVar8 >> 0x1f, (int)((iVar5 - iVar8 ^ uVar6) - uVar6) < g_INT_01e4fed4)) {
        (&g_UCHAR_01e5ec77)[iVar10 + iVar1 * 100] = '\x04';
        iVar8 = g_INT_01e5ec70 * 0xc;
        g_INT_01e613ec = g_INT_01e613ec + 1;
        g_INT_ARRAY_01e5020c[g_INT_01e5ec70 * 3] = iVar10 + -1;
        iVar10 = g_INT_01e5ec70 + 1;
        *(int *)(&DAT_01e50210 + iVar8) = iVar5;
        g_INT_01e5ec70 = iVar10;
        *(int *)(&DAT_01e50214 + iVar8) = iVar1;
        if (4999 < iVar10) {
          g_INT_01e5ec70 = 0;
        }
      }
    }
  } while (g_INT_01e5ec6c != g_INT_01e5ec70);
  return g_INT_01e5ec6c ^ g_INT_01e5ec70;
}
