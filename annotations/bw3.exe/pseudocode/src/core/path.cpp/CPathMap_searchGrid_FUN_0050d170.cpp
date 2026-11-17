// Name: core_path.cpp_CPathMap_searchGrid_FUN_0050d170
// Address: 0050d170
// Address Range: [[0050d170, 0050d5f8]]
// Convention: __cdecl
// Signature: uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_0050d170(CPathMap *this_ptr,int start_height)

#include "nocturne.h"

uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_0050d170(CPathMap *this_ptr,int start_height)

{
  int current_height;
  int grid_z;
  CPathQueueNode *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  memset(g_CHAR_ARRAY_ARRAY_01ed02b8,0,0x2774);
  g_INT_01ed2a2c = 1;
  g_INT_01ed02ac = 0;
  g_CPathQueueNode_ARRAY_01ec184c[0].x = g_INT_01ec183c;
  g_CPathQueueNode_ARRAY_01ec184c[0].z = g_INT_01ec1840;
  g_CHAR_ARRAY_ARRAY_01ed02b8[g_INT_01ec1840][g_INT_01ec183c] = '\x01';
  g_INT_01ed02b0 = 1;
  g_CPathQueueNode_ARRAY_01ec184c[0].cost = start_height;
  do {
    if (g_CHAR_ARRAY_ARRAY_01ed02b8[g_INT_01ec1848][g_INT_01ec1844] != '\0') {
      return 1;
    }
    if (g_INT_01ed02ac == g_INT_01ed02b0) {
      g_CHAR_PTR_01d71de0 = "..\\core\\path.cpp";
      g_INT_01d71de4 = 0xdf;
      core_main_c_displayErrorAndQuit_FUN_004e4330("queuePop - empty queue?!");
    }
    iVar8 = g_CPathQueueNode_ARRAY_01ec184c[g_INT_01ed02ac].x;
    current_height = g_CPathQueueNode_ARRAY_01ec184c[g_INT_01ed02ac].cost;
    iVar5 = g_INT_01ed02ac + 1;
    grid_z = g_CPathQueueNode_ARRAY_01ec184c[g_INT_01ed02ac].z;
    g_INT_01ed02ac = iVar5;
    if (4999 < iVar5) {
      g_INT_01ed02ac = 0;
    }
    iVar5 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_0050b320
                      (this_ptr,grid_z + 1,iVar8,current_height);
    iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_0050b320
                      (this_ptr,grid_z,iVar8 + 1,current_height);
    iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_0050b320
                      (this_ptr,grid_z + -1,iVar8,current_height);
    iVar4 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_0050b320
                      (this_ptr,grid_z,iVar8 + -1,current_height);
    if ((((g_INT_01ec183c == iVar8) && (grid_z == g_INT_01ec1840)) ||
        ((iVar8 == g_INT_01ec1844 && (grid_z == g_INT_01ec1848)))) ||
       ((((current_height - iVar5 < g_INT_01ec1514 && (current_height - iVar3 < g_INT_01ec1514)) &&
         (current_height - iVar2 < g_INT_01ec1514)) && (current_height - iVar4 < g_INT_01ec1514))))
    {
      if (((grid_z < 99) && (g_CHAR_ARRAY_ARRAY_01ed02b8[grid_z + 1][iVar8] == '\0')) &&
         (uVar6 = iVar5 - current_height >> 0x1f,
         (int)((iVar5 - current_height ^ uVar6) - uVar6) < g_INT_01ec1514)) {
        g_CHAR_ARRAY_ARRAY_01ed02b8[grid_z + 1][iVar8] = '\x01';
        g_CPathQueueNode_ARRAY_01ec184c[g_INT_01ed02b0].x = iVar8;
        iVar7 = g_INT_01ed02b0 + 1;
        g_CPathQueueNode_ARRAY_01ec184c[g_INT_01ed02b0].cost = iVar5;
        g_INT_01ed2a2c = g_INT_01ed2a2c + 1;
        pCVar1 = g_CPathQueueNode_ARRAY_01ec184c + g_INT_01ed02b0;
        g_INT_01ed02b0 = iVar7;
        pCVar1->z = grid_z + 1;
        if (4999 < iVar7) {
          g_INT_01ed02b0 = 0;
        }
      }
      if (((iVar8 < 99) && (g_CHAR_ARRAY_ARRAY_01ed02b8[grid_z][iVar8 + 1] == '\0')) &&
         (uVar6 = iVar2 - current_height >> 0x1f,
         (int)((iVar2 - current_height ^ uVar6) - uVar6) < g_INT_01ec1514)) {
        *(byte *)(grid_z * 100 + 0x1ed02b9 + iVar8) = 3;
        g_CPathQueueNode_ARRAY_01ec184c[g_INT_01ed02b0].x = iVar8 + 1;
        iVar5 = g_INT_01ed02b0 + 1;
        g_CPathQueueNode_ARRAY_01ec184c[g_INT_01ed02b0].cost = iVar2;
        g_CPathQueueNode_ARRAY_01ec184c[g_INT_01ed02b0].z = grid_z;
        g_INT_01ed2a2c = g_INT_01ed2a2c + 1;
        g_INT_01ed02b0 = iVar5;
        if (4999 < iVar5) {
          g_INT_01ed02b0 = 0;
        }
      }
      if (((0 < grid_z) && (g_CHAR_ARRAY_ARRAY_01ed02b8[grid_z + -1][iVar8] == '\0')) &&
         (uVar6 = iVar3 - current_height >> 0x1f,
         (int)((iVar3 - current_height ^ uVar6) - uVar6) < g_INT_01ec1514)) {
        g_CHAR_ARRAY_ARRAY_01ed02b8[grid_z + -1][iVar8] = '\x02';
        g_CPathQueueNode_ARRAY_01ec184c[g_INT_01ed02b0].x = iVar8;
        iVar5 = g_INT_01ed02b0 + 1;
        g_CPathQueueNode_ARRAY_01ec184c[g_INT_01ed02b0].cost = iVar3;
        g_CPathQueueNode_ARRAY_01ec184c[g_INT_01ed02b0].z = grid_z + -1;
        g_INT_01ed2a2c = g_INT_01ed2a2c + 1;
        g_INT_01ed02b0 = iVar5;
        if (4999 < iVar5) {
          g_INT_01ed02b0 = 0;
        }
      }
      if (((0 < iVar8) && ((&g_UCHAR_01ed02b7)[grid_z * 100 + iVar8] == '\0')) &&
         (uVar6 = iVar4 - current_height >> 0x1f,
         (int)((iVar4 - current_height ^ uVar6) - uVar6) < g_INT_01ec1514)) {
        (&g_UCHAR_01ed02b7)[iVar8 + grid_z * 100] = '\x04';
        g_INT_01ed2a2c = g_INT_01ed2a2c + 1;
        g_CPathQueueNode_ARRAY_01ec184c[g_INT_01ed02b0].x = iVar8 + -1;
        iVar8 = g_INT_01ed02b0 + 1;
        g_CPathQueueNode_ARRAY_01ec184c[g_INT_01ed02b0].cost = iVar4;
        pCVar1 = g_CPathQueueNode_ARRAY_01ec184c + g_INT_01ed02b0;
        g_INT_01ed02b0 = iVar8;
        pCVar1->z = grid_z;
        if (4999 < iVar8) {
          g_INT_01ed02b0 = 0;
        }
      }
    }
  } while (g_INT_01ed02ac != g_INT_01ed02b0);
  return g_INT_01ed02ac ^ g_INT_01ed02b0;
}
