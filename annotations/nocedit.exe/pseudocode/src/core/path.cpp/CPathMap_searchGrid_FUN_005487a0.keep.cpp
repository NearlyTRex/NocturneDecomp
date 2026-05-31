// Name: core_path.cpp_CPathMap_searchGrid_FUN_005487a0
// Address: 005487a0
// MANUAL RECONSTRUCTION
// Address Range: [[005487a0, 00548c28]]
// Convention: __cdecl
// Signature: uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_005487a0(CPathMap *this_ptr,int start_height)

#include "nocturne.h"

uint __cdecl core_path_cpp_CPathMap_searchGrid_FUN_005487a0(CPathMap *this_ptr,int start_height)

{
  int grid_x;
  CPathQueueNode *pCVar2;
  int iVar6;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar7;
  int iVar8;
  int current_height;
  CPathQueueNode *pCVar1;
  int grid_z;
  
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
    grid_x = g_PathfindingQueue[g_PathfindingQueueHead].x;
    current_height = g_PathfindingQueue[g_PathfindingQueueHead].cost;
    iVar5 = g_PathfindingQueueHead + 1;
    grid_z = g_PathfindingQueue[g_PathfindingQueueHead].z;
    g_PathfindingQueueHead = iVar5;
    if (4999 < iVar5) {
      g_PathfindingQueueHead = 0;
    }
    iVar6 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                      (this_ptr,grid_z + 1,grid_x,current_height);
    iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                      (this_ptr,grid_z,grid_x + 1,current_height);
    iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                      (this_ptr,grid_z + -1,grid_x,current_height);
    iVar4 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                      (this_ptr,grid_z,grid_x + -1,current_height);
    if ((((g_PathfindingCurrentX == grid_x) && (grid_z == g_PathfindingCurrentZ)) ||
        ((grid_x == g_PathfindingDestX && (grid_z == g_PathfindingDestZ)))) ||
       ((((current_height - iVar6 < g_PathfindingMaxClimbHeight &&
          (current_height - iVar3 < g_PathfindingMaxClimbHeight)) &&
         (current_height - iVar2 < g_PathfindingMaxClimbHeight)) &&
        (current_height - iVar4 < g_PathfindingMaxClimbHeight)))) {
      if (((grid_z < 99) && (g_PathfindingVisited[grid_z + 1][grid_x] == '\0')) &&
         (ABS(iVar6 - current_height) < g_PathfindingMaxClimbHeight)) {
        g_PathfindingVisited[grid_z + 1][grid_x] = '\x01';
        g_PathfindingQueue[g_PathfindingQueueTail].x = grid_x;
        iVar7 = g_PathfindingQueueTail + 1;
        g_PathfindingQueue[g_PathfindingQueueTail].cost = iVar6;
        g_PathfindingNodesExpanded = g_PathfindingNodesExpanded + 1;
        pCVar1 = g_PathfindingQueue + g_PathfindingQueueTail;
        g_PathfindingQueueTail = iVar7;
        pCVar1->z = grid_z + 1;
        if (4999 < iVar7) {
          g_PathfindingQueueTail = 0;
        }
      }
      if (((grid_x < 99) && (g_PathfindingVisited[grid_z][grid_x + 1] == '\0')) &&
         (ABS(iVar2 - current_height) < g_PathfindingMaxClimbHeight)) {
        g_PathfindingVisited[grid_z][grid_x + 1] = '\x03';
        g_PathfindingQueue[g_PathfindingQueueTail].x = grid_x + 1;
        iVar6 = g_PathfindingQueueTail + 1;
        g_PathfindingQueue[g_PathfindingQueueTail].cost = iVar2;
        g_PathfindingQueue[g_PathfindingQueueTail].z = grid_z;
        g_PathfindingNodesExpanded = g_PathfindingNodesExpanded + 1;
        g_PathfindingQueueTail = iVar6;
        if (4999 < iVar6) {
          g_PathfindingQueueTail = 0;
        }
      }
      if (((0 < grid_z) && (g_PathfindingVisited[grid_z + -1][grid_x] == '\0')) &&
         (ABS(iVar3 - current_height) < g_PathfindingMaxClimbHeight)) {
        g_PathfindingVisited[grid_z + -1][grid_x] = '\x02';
        g_PathfindingQueue[g_PathfindingQueueTail].x = grid_x;
        iVar6 = g_PathfindingQueueTail + 1;
        g_PathfindingQueue[g_PathfindingQueueTail].cost = iVar3;
        g_PathfindingQueue[g_PathfindingQueueTail].z = grid_z + -1;
        g_PathfindingNodesExpanded = g_PathfindingNodesExpanded + 1;
        g_PathfindingQueueTail = iVar6;
        if (4999 < iVar6) {
          g_PathfindingQueueTail = 0;
        }
      }
      if (((0 < grid_x) && (g_PathfindingVisited[grid_z][grid_x + -1] == '\0')) &&
         (ABS(iVar4 - current_height) < g_PathfindingMaxClimbHeight)) {
        g_PathfindingVisited[grid_z][grid_x + -1] = '\x04';
        g_PathfindingNodesExpanded = g_PathfindingNodesExpanded + 1;
        g_PathfindingQueue[g_PathfindingQueueTail].x = grid_x + -1;
        iVar8 = g_PathfindingQueueTail + 1;
        g_PathfindingQueue[g_PathfindingQueueTail].cost = iVar4;
        pCVar2 = g_PathfindingQueue + g_PathfindingQueueTail;
        g_PathfindingQueueTail = iVar8;
        pCVar2->z = grid_z;
        if (4999 < iVar8) {
          g_PathfindingQueueTail = 0;
        }
      }
    }
  } while (g_PathfindingQueueHead != g_PathfindingQueueTail);
  return g_PathfindingQueueHead ^ g_PathfindingQueueTail;
}
