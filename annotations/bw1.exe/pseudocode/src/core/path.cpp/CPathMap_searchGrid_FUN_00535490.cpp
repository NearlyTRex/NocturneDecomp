// Name: core_path.cpp_CPathMap_searchGrid_FUN_00535490
// Address: 00535490
// Address Range: [[00535490, 00535918]]
// Convention: __cdecl
// Signature: uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_00535490(CPathMap *this_ptr,int start_height)

#include "nocturne.h"

uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_00535490(CPathMap *this_ptr,int start_height)

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
  
  memset(g_CHAR_ARRAY_ARRAY_01e7abe8,0,0x2774);
  g_INT_01e7d35c = 1;
  g_INT_01e7abdc = 0;
  g_CPathQueueNode_ARRAY_01e6c17c[0].x = g_INT_01e6c16c;
  g_CPathQueueNode_ARRAY_01e6c17c[0].z = g_INT_01e6c170;
  g_CHAR_ARRAY_ARRAY_01e7abe8[g_INT_01e6c170][g_INT_01e6c16c] = '\x01';
  g_INT_01e7abe0 = 1;
  g_CPathQueueNode_ARRAY_01e6c17c[0].cost = start_height;
  do {
    if (g_CHAR_ARRAY_ARRAY_01e7abe8[g_INT_01e6c178][g_INT_01e6c174] != '\0') {
      return 1;
    }
    if (g_INT_01e7abdc == g_INT_01e7abe0) {
      g_CHAR_PTR_01d1d400 = "..\\core\\path.cpp";
      g_INT_01d1d404 = 0xdf;
      core_main_c_displayErrorAndQuit_FUN_005030e0("queuePop - empty queue?!");
    }
    iVar8 = g_CPathQueueNode_ARRAY_01e6c17c[g_INT_01e7abdc].x;
    current_height = g_CPathQueueNode_ARRAY_01e6c17c[g_INT_01e7abdc].cost;
    iVar5 = g_INT_01e7abdc + 1;
    grid_z = g_CPathQueueNode_ARRAY_01e6c17c[g_INT_01e7abdc].z;
    g_INT_01e7abdc = iVar5;
    if (4999 < iVar5) {
      g_INT_01e7abdc = 0;
    }
    iVar5 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00533640
                      (this_ptr,grid_z + 1,iVar8,current_height);
    iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00533640
                      (this_ptr,grid_z,iVar8 + 1,current_height);
    iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00533640
                      (this_ptr,grid_z + -1,iVar8,current_height);
    iVar4 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00533640
                      (this_ptr,grid_z,iVar8 + -1,current_height);
    if ((((g_INT_01e6c16c == iVar8) && (grid_z == g_INT_01e6c170)) ||
        ((iVar8 == g_INT_01e6c174 && (grid_z == g_INT_01e6c178)))) ||
       ((((current_height - iVar5 < g_INT_01e6be44 && (current_height - iVar3 < g_INT_01e6be44)) &&
         (current_height - iVar2 < g_INT_01e6be44)) && (current_height - iVar4 < g_INT_01e6be44))))
    {
      if (((grid_z < 99) && (g_CHAR_ARRAY_ARRAY_01e7abe8[grid_z + 1][iVar8] == '\0')) &&
         (uVar6 = iVar5 - current_height >> 0x1f,
         (int)((iVar5 - current_height ^ uVar6) - uVar6) < g_INT_01e6be44)) {
        g_CHAR_ARRAY_ARRAY_01e7abe8[grid_z + 1][iVar8] = '\x01';
        g_CPathQueueNode_ARRAY_01e6c17c[g_INT_01e7abe0].x = iVar8;
        iVar7 = g_INT_01e7abe0 + 1;
        g_CPathQueueNode_ARRAY_01e6c17c[g_INT_01e7abe0].cost = iVar5;
        g_INT_01e7d35c = g_INT_01e7d35c + 1;
        pCVar1 = g_CPathQueueNode_ARRAY_01e6c17c + g_INT_01e7abe0;
        g_INT_01e7abe0 = iVar7;
        pCVar1->z = grid_z + 1;
        if (4999 < iVar7) {
          g_INT_01e7abe0 = 0;
        }
      }
      if (((iVar8 < 99) && (g_CHAR_ARRAY_ARRAY_01e7abe8[grid_z][iVar8 + 1] == '\0')) &&
         (uVar6 = iVar2 - current_height >> 0x1f,
         (int)((iVar2 - current_height ^ uVar6) - uVar6) < g_INT_01e6be44)) {
        *(byte *)(grid_z * 100 + 0x1e7abe9 + iVar8) = 3;
        g_CPathQueueNode_ARRAY_01e6c17c[g_INT_01e7abe0].x = iVar8 + 1;
        iVar5 = g_INT_01e7abe0 + 1;
        g_CPathQueueNode_ARRAY_01e6c17c[g_INT_01e7abe0].cost = iVar2;
        g_CPathQueueNode_ARRAY_01e6c17c[g_INT_01e7abe0].z = grid_z;
        g_INT_01e7d35c = g_INT_01e7d35c + 1;
        g_INT_01e7abe0 = iVar5;
        if (4999 < iVar5) {
          g_INT_01e7abe0 = 0;
        }
      }
      if (((0 < grid_z) && (g_CHAR_ARRAY_ARRAY_01e7abe8[grid_z + -1][iVar8] == '\0')) &&
         (uVar6 = iVar3 - current_height >> 0x1f,
         (int)((iVar3 - current_height ^ uVar6) - uVar6) < g_INT_01e6be44)) {
        g_CHAR_ARRAY_ARRAY_01e7abe8[grid_z + -1][iVar8] = '\x02';
        g_CPathQueueNode_ARRAY_01e6c17c[g_INT_01e7abe0].x = iVar8;
        iVar5 = g_INT_01e7abe0 + 1;
        g_CPathQueueNode_ARRAY_01e6c17c[g_INT_01e7abe0].cost = iVar3;
        g_CPathQueueNode_ARRAY_01e6c17c[g_INT_01e7abe0].z = grid_z + -1;
        g_INT_01e7d35c = g_INT_01e7d35c + 1;
        g_INT_01e7abe0 = iVar5;
        if (4999 < iVar5) {
          g_INT_01e7abe0 = 0;
        }
      }
      if (((0 < iVar8) && ((&g_UCHAR_01e7abe7)[grid_z * 100 + iVar8] == '\0')) &&
         (uVar6 = iVar4 - current_height >> 0x1f,
         (int)((iVar4 - current_height ^ uVar6) - uVar6) < g_INT_01e6be44)) {
        (&g_UCHAR_01e7abe7)[iVar8 + grid_z * 100] = '\x04';
        g_INT_01e7d35c = g_INT_01e7d35c + 1;
        g_CPathQueueNode_ARRAY_01e6c17c[g_INT_01e7abe0].x = iVar8 + -1;
        iVar8 = g_INT_01e7abe0 + 1;
        g_CPathQueueNode_ARRAY_01e6c17c[g_INT_01e7abe0].cost = iVar4;
        pCVar1 = g_CPathQueueNode_ARRAY_01e6c17c + g_INT_01e7abe0;
        g_INT_01e7abe0 = iVar8;
        pCVar1->z = grid_z;
        if (4999 < iVar8) {
          g_INT_01e7abe0 = 0;
        }
      }
    }
  } while (g_INT_01e7abdc != g_INT_01e7abe0);
  return g_INT_01e7abdc ^ g_INT_01e7abe0;
}
