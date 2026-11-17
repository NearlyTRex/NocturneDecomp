// Name: core_path.cpp_CPathMap_searchGrid_FUN_004f20a0
// Address: 004f20a0
// Address Range: [[004f20a0, 004f2528]]
// Convention: __cdecl
// Signature: uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_004f20a0(CPathMap *this_ptr,int start_height)

#include "nocturne.h"

uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_004f20a0(CPathMap *this_ptr,int start_height)

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
  
  memset(g_CHAR_ARRAY_ARRAY_01e40098,0,0x2774);
  g_INT_01e4280c = 1;
  g_INT_01e4008c = 0;
  g_CPathQueueNode_ARRAY_01e3162c[0].x = g_INT_01e3161c;
  g_CPathQueueNode_ARRAY_01e3162c[0].z = g_INT_01e31620;
  g_CHAR_ARRAY_ARRAY_01e40098[g_INT_01e31620][g_INT_01e3161c] = '\x01';
  g_INT_01e40090 = 1;
  g_CPathQueueNode_ARRAY_01e3162c[0].cost = start_height;
  do {
    if (g_CHAR_ARRAY_ARRAY_01e40098[g_INT_01e31628][g_INT_01e31624] != '\0') {
      return 1;
    }
    if (g_INT_01e4008c == g_INT_01e40090) {
      g_CurrentFilename = "..\\core\\path.cpp";
      g_CurrentLineNumber = 223;
      core_main_c_displayErrorAndQuit_FUN_004c8440("queuePop - empty queue?!");
    }
    iVar8 = g_CPathQueueNode_ARRAY_01e3162c[g_INT_01e4008c].x;
    current_height = g_CPathQueueNode_ARRAY_01e3162c[g_INT_01e4008c].cost;
    iVar5 = g_INT_01e4008c + 1;
    grid_z = g_CPathQueueNode_ARRAY_01e3162c[g_INT_01e4008c].z;
    g_INT_01e4008c = iVar5;
    if (4999 < iVar5) {
      g_INT_01e4008c = 0;
    }
    iVar5 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0
                      (this_ptr,grid_z + 1,iVar8,current_height);
    iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0
                      (this_ptr,grid_z,iVar8 + 1,current_height);
    iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0
                      (this_ptr,grid_z + -1,iVar8,current_height);
    iVar4 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0
                      (this_ptr,grid_z,iVar8 + -1,current_height);
    if ((((g_INT_01e3161c == iVar8) && (grid_z == g_INT_01e31620)) ||
        ((iVar8 == g_INT_01e31624 && (grid_z == g_INT_01e31628)))) ||
       ((((current_height - iVar5 < g_INT_01e312f4 && (current_height - iVar3 < g_INT_01e312f4)) &&
         (current_height - iVar2 < g_INT_01e312f4)) && (current_height - iVar4 < g_INT_01e312f4))))
    {
      if (((grid_z < 99) && (g_CHAR_ARRAY_ARRAY_01e40098[grid_z + 1][iVar8] == '\0')) &&
         (uVar6 = iVar5 - current_height >> 0x1f,
         (int)((iVar5 - current_height ^ uVar6) - uVar6) < g_INT_01e312f4)) {
        g_CHAR_ARRAY_ARRAY_01e40098[grid_z + 1][iVar8] = '\x01';
        g_CPathQueueNode_ARRAY_01e3162c[g_INT_01e40090].x = iVar8;
        iVar7 = g_INT_01e40090 + 1;
        g_CPathQueueNode_ARRAY_01e3162c[g_INT_01e40090].cost = iVar5;
        g_INT_01e4280c = g_INT_01e4280c + 1;
        pCVar1 = g_CPathQueueNode_ARRAY_01e3162c + g_INT_01e40090;
        g_INT_01e40090 = iVar7;
        pCVar1->z = grid_z + 1;
        if (4999 < iVar7) {
          g_INT_01e40090 = 0;
        }
      }
      if (((iVar8 < 99) && (g_CHAR_ARRAY_ARRAY_01e40098[grid_z][iVar8 + 1] == '\0')) &&
         (uVar6 = iVar2 - current_height >> 0x1f,
         (int)((iVar2 - current_height ^ uVar6) - uVar6) < g_INT_01e312f4)) {
        *(byte *)(grid_z * 100 + 0x1e40099 + iVar8) = 3;
        g_CPathQueueNode_ARRAY_01e3162c[g_INT_01e40090].x = iVar8 + 1;
        iVar5 = g_INT_01e40090 + 1;
        g_CPathQueueNode_ARRAY_01e3162c[g_INT_01e40090].cost = iVar2;
        g_CPathQueueNode_ARRAY_01e3162c[g_INT_01e40090].z = grid_z;
        g_INT_01e4280c = g_INT_01e4280c + 1;
        g_INT_01e40090 = iVar5;
        if (4999 < iVar5) {
          g_INT_01e40090 = 0;
        }
      }
      if (((0 < grid_z) && (g_CHAR_ARRAY_ARRAY_01e40098[grid_z + -1][iVar8] == '\0')) &&
         (uVar6 = iVar3 - current_height >> 0x1f,
         (int)((iVar3 - current_height ^ uVar6) - uVar6) < g_INT_01e312f4)) {
        g_CHAR_ARRAY_ARRAY_01e40098[grid_z + -1][iVar8] = '\x02';
        g_CPathQueueNode_ARRAY_01e3162c[g_INT_01e40090].x = iVar8;
        iVar5 = g_INT_01e40090 + 1;
        g_CPathQueueNode_ARRAY_01e3162c[g_INT_01e40090].cost = iVar3;
        g_CPathQueueNode_ARRAY_01e3162c[g_INT_01e40090].z = grid_z + -1;
        g_INT_01e4280c = g_INT_01e4280c + 1;
        g_INT_01e40090 = iVar5;
        if (4999 < iVar5) {
          g_INT_01e40090 = 0;
        }
      }
      if (((0 < iVar8) && ((&g_UCHAR_01e40097)[grid_z * 100 + iVar8] == '\0')) &&
         (uVar6 = iVar4 - current_height >> 0x1f,
         (int)((iVar4 - current_height ^ uVar6) - uVar6) < g_INT_01e312f4)) {
        (&g_UCHAR_01e40097)[iVar8 + grid_z * 100] = '\x04';
        g_INT_01e4280c = g_INT_01e4280c + 1;
        g_CPathQueueNode_ARRAY_01e3162c[g_INT_01e40090].x = iVar8 + -1;
        iVar8 = g_INT_01e40090 + 1;
        g_CPathQueueNode_ARRAY_01e3162c[g_INT_01e40090].cost = iVar4;
        pCVar1 = g_CPathQueueNode_ARRAY_01e3162c + g_INT_01e40090;
        g_INT_01e40090 = iVar8;
        pCVar1->z = grid_z;
        if (4999 < iVar8) {
          g_INT_01e40090 = 0;
        }
      }
    }
  } while (g_INT_01e4008c != g_INT_01e40090);
  return g_INT_01e4008c ^ g_INT_01e40090;
}
