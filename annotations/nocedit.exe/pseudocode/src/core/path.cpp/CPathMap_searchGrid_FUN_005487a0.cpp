// Name: core_path.cpp_CPathMap_searchGrid_FUN_005487a0
// Address: 005487a0
// Address Range: [[005487a0, 00548c28]]
// Convention: __cdecl
// Signature: uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_005487a0(CPathMap *this_ptr,int start_height)

#include "nocturne.h"

uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_005487a0(CPathMap *this_ptr,int start_height)

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
  
  memset(g_PathfindingVisited,0,0x2774);
  g_PathfindingNodesExpanded = 1;
  g_PathfindingQueueHead = 0;
  g_PathfindingQueue[0].x = g_PathfindingCurrentX;
  g_PathfindingQueue[0].z = g_PathfindingCurrentZ;
  g_PathfindingVisited[g_PathfindingCurrentZ][g_PathfindingCurrentX] = '\x01';
  g_PathfindingQueueTail = 1;
  g_PathfindingQueue[0].cost = start_height;
  do {
    if (g_PathfindingVisited[g_PathfindingDestZ][g_PathfindingDestX] != '\0') {
      return 1;
    }
    if (g_PathfindingQueueHead == g_PathfindingQueueTail) {
      g_CurrentFilename = "..\\core\\path.cpp";
      g_CurrentLineNumber = 0xdf;
      core_main_c_displayErrorAndQuit_FUN_00506f10("queuePop - empty queue?!");
    }
    iVar8 = g_PathfindingQueue[g_PathfindingQueueHead].x;
    current_height = g_PathfindingQueue[g_PathfindingQueueHead].cost;
    iVar5 = g_PathfindingQueueHead + 1;
    grid_z = g_PathfindingQueue[g_PathfindingQueueHead].z;
    g_PathfindingQueueHead = iVar5;
    if (4999 < iVar5) {
      g_PathfindingQueueHead = 0;
    }
    iVar5 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                      (this_ptr,grid_z + 1,iVar8,current_height);
    iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                      (this_ptr,grid_z,iVar8 + 1,current_height);
    iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                      (this_ptr,grid_z + -1,iVar8,current_height);
    iVar4 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                      (this_ptr,grid_z,iVar8 + -1,current_height);
    if ((((g_PathfindingCurrentX == iVar8) && (grid_z == g_PathfindingCurrentZ)) ||
        ((iVar8 == g_PathfindingDestX && (grid_z == g_PathfindingDestZ)))) ||
       ((((current_height - iVar5 < g_PathfindingMaxClimbHeight &&
          (current_height - iVar3 < g_PathfindingMaxClimbHeight)) &&
         (current_height - iVar2 < g_PathfindingMaxClimbHeight)) &&
        (current_height - iVar4 < g_PathfindingMaxClimbHeight)))) {
      if (((grid_z < 99) && (g_PathfindingVisited[grid_z + 1][iVar8] == '\0')) &&
         (uVar6 = iVar5 - current_height >> 0x1f,
         (int)((iVar5 - current_height ^ uVar6) - uVar6) < g_PathfindingMaxClimbHeight)) {
        g_PathfindingVisited[grid_z + 1][iVar8] = '\x01';
        g_PathfindingQueue[g_PathfindingQueueTail].x = iVar8;
        iVar7 = g_PathfindingQueueTail + 1;
        g_PathfindingQueue[g_PathfindingQueueTail].cost = iVar5;
        g_PathfindingNodesExpanded = g_PathfindingNodesExpanded + 1;
        pCVar1 = g_PathfindingQueue + g_PathfindingQueueTail;
        g_PathfindingQueueTail = iVar7;
        pCVar1->z = grid_z + 1;
        if (4999 < iVar7) {
          g_PathfindingQueueTail = 0;
        }
      }
      if (((iVar8 < 99) && (g_PathfindingVisited[grid_z][iVar8 + 1] == '\0')) &&
         (uVar6 = iVar2 - current_height >> 0x1f,
         (int)((iVar2 - current_height ^ uVar6) - uVar6) < g_PathfindingMaxClimbHeight)) {
        *(byte *)(grid_z * 100 + 0x30d2859 + iVar8) = 3;
        g_PathfindingQueue[g_PathfindingQueueTail].x = iVar8 + 1;
        iVar5 = g_PathfindingQueueTail + 1;
        g_PathfindingQueue[g_PathfindingQueueTail].cost = iVar2;
        g_PathfindingQueue[g_PathfindingQueueTail].z = grid_z;
        g_PathfindingNodesExpanded = g_PathfindingNodesExpanded + 1;
        g_PathfindingQueueTail = iVar5;
        if (4999 < iVar5) {
          g_PathfindingQueueTail = 0;
        }
      }
      if (((0 < grid_z) && (g_PathfindingVisited[grid_z + -1][iVar8] == '\0')) &&
         (uVar6 = iVar3 - current_height >> 0x1f,
         (int)((iVar3 - current_height ^ uVar6) - uVar6) < g_PathfindingMaxClimbHeight)) {
        g_PathfindingVisited[grid_z + -1][iVar8] = '\x02';
        g_PathfindingQueue[g_PathfindingQueueTail].x = iVar8;
        iVar5 = g_PathfindingQueueTail + 1;
        g_PathfindingQueue[g_PathfindingQueueTail].cost = iVar3;
        g_PathfindingQueue[g_PathfindingQueueTail].z = grid_z + -1;
        g_PathfindingNodesExpanded = g_PathfindingNodesExpanded + 1;
        g_PathfindingQueueTail = iVar5;
        if (4999 < iVar5) {
          g_PathfindingQueueTail = 0;
        }
      }
      if (((0 < iVar8) && ((&DAT_030d2857)[grid_z * 100 + iVar8] == '\0')) &&
         (uVar6 = iVar4 - current_height >> 0x1f,
         (int)((iVar4 - current_height ^ uVar6) - uVar6) < g_PathfindingMaxClimbHeight)) {
        (&DAT_030d2857)[iVar8 + grid_z * 100] = 4;
        g_PathfindingNodesExpanded = g_PathfindingNodesExpanded + 1;
        g_PathfindingQueue[g_PathfindingQueueTail].x = iVar8 + -1;
        iVar8 = g_PathfindingQueueTail + 1;
        g_PathfindingQueue[g_PathfindingQueueTail].cost = iVar4;
        pCVar1 = g_PathfindingQueue + g_PathfindingQueueTail;
        g_PathfindingQueueTail = iVar8;
        pCVar1->z = grid_z;
        if (4999 < iVar8) {
          g_PathfindingQueueTail = 0;
        }
      }
    }
  } while (g_PathfindingQueueHead != g_PathfindingQueueTail);
  return g_PathfindingQueueHead ^ g_PathfindingQueueTail;
}
