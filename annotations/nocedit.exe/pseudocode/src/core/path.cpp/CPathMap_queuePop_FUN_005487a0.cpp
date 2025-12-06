// Name: core_path.cpp_CPathMap_queuePop_FUN_005487a0
// Address: 005487a0
// Address Range: [[005487a0, 00548c28]]
// Convention: __cdecl
// Signature: uint core_path.cpp_CPathMap_queuePop_FUN_005487a0(CPathMap * this_ptr, int start_height)

#include "nocturne.h"

uint __cdecl core_path_cpp_CPathMap_queuePop_FUN_005487a0(CPathMap *this_ptr,int start_height)

{
  CPathQueueNode *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBX;
  int iVar7;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  CPathMap *in_stack_0000000c;
  CPathMap *in_stack_00000010;
  CPathMap *in_stack_00000014;
  
  crt_memory_c_memset_FUN_005fde40(g_PathfindingVisited,0,0x2774);
  g_PathfindingNodesExpanded = 1;
  g_PathfindingQueueHead = 0;
  g_PathfindingQueue[0].x = g_PathfindingCurrentX;
  g_PathfindingQueue[0].z = g_PathfindingCurrentZ;
  g_PathfindingVisited[g_PathfindingCurrentZ][g_PathfindingCurrentX] = '\x01';
  g_PathfindingQueueTail = 1;
  g_PathfindingQueue[0].cost = (int)in_stack_0000000c;
  do {
    if (g_PathfindingVisited[g_PathfindingDestZ][g_PathfindingDestX] != '\0') {
      return 1;
    }
    if (g_PathfindingQueueHead == g_PathfindingQueueTail) {
      g_CurrentFilename = "..\\core\\path.cpp";
      g_CurrentLineNumber = 0xdf;
      core_main_c_displayErrorAndQuit_FUN_00506f10("queuePop - empty queue?!");
    }
    pCVar1 = g_PathfindingQueue + g_PathfindingQueueHead;
    iVar2 = g_PathfindingQueue[g_PathfindingQueueHead].cost;
    iVar5 = g_PathfindingQueueHead + 1;
    iVar3 = g_PathfindingQueue[g_PathfindingQueueHead].z;
    g_PathfindingQueueHead = iVar5;
    if (4999 < iVar5) {
      g_PathfindingQueueHead = 0;
    }
    iVar5 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                      ((CPathMap *)start_height,iVar3 + 1,pCVar1->x,iVar2);
    iVar2 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                      (in_stack_0000000c,unaff_EBP,iVar2 + 1,iVar3);
    iVar3 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                      (in_stack_00000010,unaff_EDI + -1,iVar3,unaff_EBP);
    iVar4 = core_path_cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
                      (in_stack_00000014,unaff_ESI,unaff_EBP + -1,unaff_EDI);
    if ((((g_PathfindingCurrentX == unaff_EDI) && (unaff_EBX == g_PathfindingCurrentZ)) ||
        ((unaff_EDI == g_PathfindingDestX && (unaff_EBX == g_PathfindingDestZ)))) ||
       ((((unaff_ESI - iVar5 < g_PathfindingMaxClimbHeight &&
          (unaff_ESI - iVar3 < g_PathfindingMaxClimbHeight)) &&
         (unaff_ESI - iVar2 < g_PathfindingMaxClimbHeight)) &&
        (unaff_ESI - iVar4 < g_PathfindingMaxClimbHeight)))) {
      if (((unaff_EBX < 99) && (g_PathfindingVisited[unaff_EBX + 1][unaff_EDI] == '\0')) &&
         (uVar6 = iVar5 - unaff_ESI >> 0x1f,
         (int)((iVar5 - unaff_ESI ^ uVar6) - uVar6) < g_PathfindingMaxClimbHeight)) {
        g_PathfindingVisited[unaff_EBX + 1][unaff_EDI] = '\x01';
        g_PathfindingQueue[g_PathfindingQueueTail].x = unaff_EDI;
        iVar7 = g_PathfindingQueueTail + 1;
        g_PathfindingQueue[g_PathfindingQueueTail].cost = iVar5;
        g_PathfindingNodesExpanded = g_PathfindingNodesExpanded + 1;
        pCVar1 = g_PathfindingQueue + g_PathfindingQueueTail;
        g_PathfindingQueueTail = iVar7;
        pCVar1->z = unaff_EBX + 1;
        if (4999 < iVar7) {
          g_PathfindingQueueTail = 0;
        }
      }
      if (((unaff_EDI < 99) && (g_PathfindingVisited[unaff_EBX][unaff_EDI + 1] == '\0')) &&
         (uVar6 = iVar2 - unaff_ESI >> 0x1f,
         (int)((iVar2 - unaff_ESI ^ uVar6) - uVar6) < g_PathfindingMaxClimbHeight)) {
        *(byte *)(unaff_EBX * 100 + 0x30d2859 + unaff_EDI) = 3;
        g_PathfindingQueue[g_PathfindingQueueTail].x = unaff_EDI + 1;
        iVar5 = g_PathfindingQueueTail + 1;
        g_PathfindingQueue[g_PathfindingQueueTail].cost = iVar2;
        g_PathfindingQueue[g_PathfindingQueueTail].z = unaff_EBX;
        g_PathfindingNodesExpanded = g_PathfindingNodesExpanded + 1;
        g_PathfindingQueueTail = iVar5;
        if (4999 < iVar5) {
          g_PathfindingQueueTail = 0;
        }
      }
      if (((0 < unaff_EBX) && (g_PathfindingVisited[unaff_EBX + -1][unaff_EDI] == '\0')) &&
         (uVar6 = iVar3 - unaff_ESI >> 0x1f,
         (int)((iVar3 - unaff_ESI ^ uVar6) - uVar6) < g_PathfindingMaxClimbHeight)) {
        g_PathfindingVisited[unaff_EBX + -1][unaff_EDI] = '\x02';
        g_PathfindingQueue[g_PathfindingQueueTail].x = unaff_EDI;
        iVar2 = g_PathfindingQueueTail + 1;
        g_PathfindingQueue[g_PathfindingQueueTail].cost = iVar3;
        g_PathfindingQueue[g_PathfindingQueueTail].z = unaff_EBX + -1;
        g_PathfindingNodesExpanded = g_PathfindingNodesExpanded + 1;
        g_PathfindingQueueTail = iVar2;
        if (4999 < iVar2) {
          g_PathfindingQueueTail = 0;
        }
      }
      if (((0 < unaff_EDI) && ((&DAT_030d2857)[unaff_EBX * 100 + unaff_EDI] == '\0')) &&
         (uVar6 = iVar4 - unaff_ESI >> 0x1f,
         (int)((iVar4 - unaff_ESI ^ uVar6) - uVar6) < g_PathfindingMaxClimbHeight)) {
        (&DAT_030d2857)[unaff_EDI + unaff_EBX * 100] = 4;
        g_PathfindingNodesExpanded = g_PathfindingNodesExpanded + 1;
        g_PathfindingQueue[g_PathfindingQueueTail].x = unaff_EDI + -1;
        iVar2 = g_PathfindingQueueTail + 1;
        g_PathfindingQueue[g_PathfindingQueueTail].cost = iVar4;
        pCVar1 = g_PathfindingQueue + g_PathfindingQueueTail;
        g_PathfindingQueueTail = iVar2;
        pCVar1->z = unaff_EBX;
        if (4999 < iVar2) {
          g_PathfindingQueueTail = 0;
        }
      }
    }
  } while (g_PathfindingQueueHead != g_PathfindingQueueTail);
  return g_PathfindingQueueHead ^ g_PathfindingQueueTail;
}
