// Name: core_path.cpp_CPathMap_searchGrid_FUN_00535490
// Address: 00535490
// Address Range: [[00535490, 00535918]]
// Convention: __cdecl
// Signature: uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_00535490(CPathMap *this_ptr,int start_height)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_00535490(CPathMap *this_ptr,int start_height)

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
  
  memset(g_CHAR_ARRAY_01e7abe8,0,0x2774);
  g_INT_01e7d35c = 1;
  g_INT_01e7abdc = 0;
  g_INT_ARRAY_01e6c17c[0] = g_INT_01e6c16c;
  _DAT_01e6c184 = g_INT_01e6c170;
  g_CHAR_ARRAY_01e7abe8[g_INT_01e6c170 * 100 + g_INT_01e6c16c] = '\x01';
  g_INT_01e7abe0 = 1;
  _DAT_01e6c180 = start_height;
  do {
    if (g_CHAR_ARRAY_01e7abe8[g_INT_01e6c178 * 100 + g_INT_01e6c174] != '\0') {
      return 1;
    }
    if (g_INT_01e7abdc == g_INT_01e7abe0) {
      g_CHAR_PTR_01d1d400 = "..\\core\\path.cpp";
      g_INT_01d1d404 = 0xdf;
      core_main_c_displayErrorAndQuit_FUN_005030e0("queuePop - empty queue?!");
    }
    iVar1 = g_INT_01e7abdc * 0xc;
    iVar10 = g_INT_ARRAY_01e6c17c[g_INT_01e7abdc * 3];
    iVar8 = *(int *)(&DAT_01e6c180 + iVar1);
    g_INT_01e7abdc = g_INT_01e7abdc + 1;
    iVar1 = *(int *)(&DAT_01e6c184 + iVar1);
    if (4999 < g_INT_01e7abdc) {
      g_INT_01e7abdc = 0;
    }
    iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00533640
                      (this_ptr,iVar1 + 1,iVar10,iVar8);
    iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00533640
                      (this_ptr,iVar1,iVar10 + 1,iVar8);
    iVar4 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00533640
                      (this_ptr,iVar1 + -1,iVar10,iVar8);
    iVar5 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00533640
                      (this_ptr,iVar1,iVar10 + -1,iVar8);
    if ((((g_INT_01e6c16c == iVar10) && (iVar1 == g_INT_01e6c170)) ||
        ((iVar10 == g_INT_01e6c174 && (iVar1 == g_INT_01e6c178)))) ||
       ((((iVar8 - iVar2 < g_INT_01e6be44 && (iVar8 - iVar4 < g_INT_01e6be44)) &&
         (iVar8 - iVar3 < g_INT_01e6be44)) && (iVar8 - iVar5 < g_INT_01e6be44)))) {
      if (((iVar1 < 99) && (g_CHAR_ARRAY_01e7abe8[(iVar1 + 1) * 100 + iVar10] == '\0')) &&
         (uVar6 = iVar2 - iVar8 >> 0x1f, (int)((iVar2 - iVar8 ^ uVar6) - uVar6) < g_INT_01e6be44)) {
        g_CHAR_ARRAY_01e7abe8[(iVar1 + 1) * 100 + iVar10] = '\x01';
        iVar7 = g_INT_01e7abe0 * 0xc;
        g_INT_ARRAY_01e6c17c[g_INT_01e7abe0 * 3] = iVar10;
        iVar9 = g_INT_01e7abe0 + 1;
        *(int *)(&DAT_01e6c180 + iVar7) = iVar2;
        g_INT_01e7d35c = g_INT_01e7d35c + 1;
        g_INT_01e7abe0 = iVar9;
        *(int *)(&DAT_01e6c184 + iVar7) = iVar1 + 1;
        if (4999 < iVar9) {
          g_INT_01e7abe0 = 0;
        }
      }
      if (((iVar10 < 99) && (g_CHAR_ARRAY_01e7abe8[iVar1 * 100 + iVar10 + 1] == '\0')) &&
         (uVar6 = iVar3 - iVar8 >> 0x1f, (int)((iVar3 - iVar8 ^ uVar6) - uVar6) < g_INT_01e6be44)) {
        g_CHAR_ARRAY_01e7abe8[iVar10 + iVar1 * 100 + 1] = '\x03';
        iVar2 = g_INT_01e7abe0 * 0xc;
        g_INT_ARRAY_01e6c17c[g_INT_01e7abe0 * 3] = iVar10 + 1;
        g_INT_01e7abe0 = g_INT_01e7abe0 + 1;
        *(int *)(&DAT_01e6c180 + iVar2) = iVar3;
        *(int *)(&DAT_01e6c184 + iVar2) = iVar1;
        g_INT_01e7d35c = g_INT_01e7d35c + 1;
        if (4999 < g_INT_01e7abe0) {
          g_INT_01e7abe0 = 0;
        }
      }
      if (((0 < iVar1) && (g_CHAR_ARRAY_01e7abe8[(iVar1 + -1) * 100 + iVar10] == '\0')) &&
         (uVar6 = iVar4 - iVar8 >> 0x1f, (int)((iVar4 - iVar8 ^ uVar6) - uVar6) < g_INT_01e6be44)) {
        g_CHAR_ARRAY_01e7abe8[(iVar1 + -1) * 100 + iVar10] = '\x02';
        iVar2 = g_INT_01e7abe0 * 0xc;
        g_INT_ARRAY_01e6c17c[g_INT_01e7abe0 * 3] = iVar10;
        g_INT_01e7abe0 = g_INT_01e7abe0 + 1;
        *(int *)(&DAT_01e6c180 + iVar2) = iVar4;
        *(int *)(&DAT_01e6c184 + iVar2) = iVar1 + -1;
        g_INT_01e7d35c = g_INT_01e7d35c + 1;
        if (4999 < g_INT_01e7abe0) {
          g_INT_01e7abe0 = 0;
        }
      }
      if (((0 < iVar10) && ((&g_UCHAR_01e7abe7)[iVar1 * 100 + iVar10] == '\0')) &&
         (uVar6 = iVar5 - iVar8 >> 0x1f, (int)((iVar5 - iVar8 ^ uVar6) - uVar6) < g_INT_01e6be44)) {
        (&g_UCHAR_01e7abe7)[iVar10 + iVar1 * 100] = '\x04';
        iVar8 = g_INT_01e7abe0 * 0xc;
        g_INT_01e7d35c = g_INT_01e7d35c + 1;
        g_INT_ARRAY_01e6c17c[g_INT_01e7abe0 * 3] = iVar10 + -1;
        iVar10 = g_INT_01e7abe0 + 1;
        *(int *)(&DAT_01e6c180 + iVar8) = iVar5;
        g_INT_01e7abe0 = iVar10;
        *(int *)(&DAT_01e6c184 + iVar8) = iVar1;
        if (4999 < iVar10) {
          g_INT_01e7abe0 = 0;
        }
      }
    }
  } while (g_INT_01e7abdc != g_INT_01e7abe0);
  return g_INT_01e7abdc ^ g_INT_01e7abe0;
}
