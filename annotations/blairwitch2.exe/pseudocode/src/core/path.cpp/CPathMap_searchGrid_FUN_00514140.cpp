// Name: core_path.cpp_CPathMap_searchGrid_FUN_00514140
// Address: 00514140
// Address Range: [[00514140, 005145c8]]
// Convention: __cdecl
// Signature: uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_00514140(CPathMap *this_ptr,int start_height)

#include "nocturne.h"

uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_00514140(CPathMap *this_ptr,int start_height)

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
  
  memset(g_CHAR_ARRAY_ARRAY_01e5ec78,0,0x2774);
  g_INT_01e613ec = 1;
  g_INT_01e5ec6c = 0;
  g_CPathQueueNode_ARRAY_01e5020c[0].x = g_INT_01e501fc;
  g_CPathQueueNode_ARRAY_01e5020c[0].z = g_INT_01e50200;
  g_CHAR_ARRAY_ARRAY_01e5ec78[g_INT_01e50200][g_INT_01e501fc] = '\x01';
  g_INT_01e5ec70 = 1;
  g_CPathQueueNode_ARRAY_01e5020c[0].cost = start_height;
  do {
    if (g_CHAR_ARRAY_ARRAY_01e5ec78[g_INT_01e50208][g_INT_01e50204] != '\0') {
      return 1;
    }
    if (g_INT_01e5ec6c == g_INT_01e5ec70) {
      g_CHAR_PTR_01d046a0 = "..\\core\\path.cpp";
      g_INT_01d046a4 = 0xdf;
      core_main_c_displayErrorAndQuit_FUN_004e4500("queuePop - empty queue?!");
    }
    iVar8 = g_CPathQueueNode_ARRAY_01e5020c[g_INT_01e5ec6c].x;
    current_height = g_CPathQueueNode_ARRAY_01e5020c[g_INT_01e5ec6c].cost;
    iVar5 = g_INT_01e5ec6c + 1;
    grid_z = g_CPathQueueNode_ARRAY_01e5020c[g_INT_01e5ec6c].z;
    g_INT_01e5ec6c = iVar5;
    if (4999 < iVar5) {
      g_INT_01e5ec6c = 0;
    }
    iVar5 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0
                      (this_ptr,grid_z + 1,iVar8,current_height);
    iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0
                      (this_ptr,grid_z,iVar8 + 1,current_height);
    iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0
                      (this_ptr,grid_z + -1,iVar8,current_height);
    iVar4 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0
                      (this_ptr,grid_z,iVar8 + -1,current_height);
    if ((((g_INT_01e501fc == iVar8) && (grid_z == g_INT_01e50200)) ||
        ((iVar8 == g_INT_01e50204 && (grid_z == g_INT_01e50208)))) ||
       ((((current_height - iVar5 < g_INT_01e4fed4 && (current_height - iVar3 < g_INT_01e4fed4)) &&
         (current_height - iVar2 < g_INT_01e4fed4)) && (current_height - iVar4 < g_INT_01e4fed4))))
    {
      if (((grid_z < 99) && (g_CHAR_ARRAY_ARRAY_01e5ec78[grid_z + 1][iVar8] == '\0')) &&
         (uVar6 = iVar5 - current_height >> 0x1f,
         (int)((iVar5 - current_height ^ uVar6) - uVar6) < g_INT_01e4fed4)) {
        g_CHAR_ARRAY_ARRAY_01e5ec78[grid_z + 1][iVar8] = '\x01';
        g_CPathQueueNode_ARRAY_01e5020c[g_INT_01e5ec70].x = iVar8;
        iVar7 = g_INT_01e5ec70 + 1;
        g_CPathQueueNode_ARRAY_01e5020c[g_INT_01e5ec70].cost = iVar5;
        g_INT_01e613ec = g_INT_01e613ec + 1;
        pCVar1 = g_CPathQueueNode_ARRAY_01e5020c + g_INT_01e5ec70;
        g_INT_01e5ec70 = iVar7;
        pCVar1->z = grid_z + 1;
        if (4999 < iVar7) {
          g_INT_01e5ec70 = 0;
        }
      }
      if (((iVar8 < 99) && (g_CHAR_ARRAY_ARRAY_01e5ec78[grid_z][iVar8 + 1] == '\0')) &&
         (uVar6 = iVar2 - current_height >> 0x1f,
         (int)((iVar2 - current_height ^ uVar6) - uVar6) < g_INT_01e4fed4)) {
        *(byte *)(grid_z * 100 + 0x1e5ec79 + iVar8) = 3;
        g_CPathQueueNode_ARRAY_01e5020c[g_INT_01e5ec70].x = iVar8 + 1;
        iVar5 = g_INT_01e5ec70 + 1;
        g_CPathQueueNode_ARRAY_01e5020c[g_INT_01e5ec70].cost = iVar2;
        g_CPathQueueNode_ARRAY_01e5020c[g_INT_01e5ec70].z = grid_z;
        g_INT_01e613ec = g_INT_01e613ec + 1;
        g_INT_01e5ec70 = iVar5;
        if (4999 < iVar5) {
          g_INT_01e5ec70 = 0;
        }
      }
      if (((0 < grid_z) && (g_CHAR_ARRAY_ARRAY_01e5ec78[grid_z + -1][iVar8] == '\0')) &&
         (uVar6 = iVar3 - current_height >> 0x1f,
         (int)((iVar3 - current_height ^ uVar6) - uVar6) < g_INT_01e4fed4)) {
        g_CHAR_ARRAY_ARRAY_01e5ec78[grid_z + -1][iVar8] = '\x02';
        g_CPathQueueNode_ARRAY_01e5020c[g_INT_01e5ec70].x = iVar8;
        iVar5 = g_INT_01e5ec70 + 1;
        g_CPathQueueNode_ARRAY_01e5020c[g_INT_01e5ec70].cost = iVar3;
        g_CPathQueueNode_ARRAY_01e5020c[g_INT_01e5ec70].z = grid_z + -1;
        g_INT_01e613ec = g_INT_01e613ec + 1;
        g_INT_01e5ec70 = iVar5;
        if (4999 < iVar5) {
          g_INT_01e5ec70 = 0;
        }
      }
      if (((0 < iVar8) && ((&g_UCHAR_01e5ec77)[grid_z * 100 + iVar8] == '\0')) &&
         (uVar6 = iVar4 - current_height >> 0x1f,
         (int)((iVar4 - current_height ^ uVar6) - uVar6) < g_INT_01e4fed4)) {
        (&g_UCHAR_01e5ec77)[iVar8 + grid_z * 100] = '\x04';
        g_INT_01e613ec = g_INT_01e613ec + 1;
        g_CPathQueueNode_ARRAY_01e5020c[g_INT_01e5ec70].x = iVar8 + -1;
        iVar8 = g_INT_01e5ec70 + 1;
        g_CPathQueueNode_ARRAY_01e5020c[g_INT_01e5ec70].cost = iVar4;
        pCVar1 = g_CPathQueueNode_ARRAY_01e5020c + g_INT_01e5ec70;
        g_INT_01e5ec70 = iVar8;
        pCVar1->z = grid_z;
        if (4999 < iVar8) {
          g_INT_01e5ec70 = 0;
        }
      }
    }
  } while (g_INT_01e5ec6c != g_INT_01e5ec70);
  return g_INT_01e5ec6c ^ g_INT_01e5ec70;
}
