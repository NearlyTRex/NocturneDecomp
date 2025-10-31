// Name: core_path.cpp_CPathMap_queuePop_FUN_005487a0
// Address: 005487a0
// Address Range: [[005487a0, 00548c28]]
// Convention: __cdecl
// Signature: uint core_path.cpp_CPathMap_queuePop_FUN_005487a0(CPathMap * this_ptr, int start_height)
// Cross-references:
//   core_path.cpp_CPathMap_CallToQueuePop_FUN_00548750 (00548750) at 0054878e [UNCONDITIONAL_CALL]
//   core_path.cpp_CPathMap_findPathToDestination_FUN_00547320 (00547320) at 00547942 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_path_cpp_0063e878
//   TerminatedCString s_queuePop_empty_queue_0063e889
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_PathfindingMaxClimbHeight
//   int g_PathfindingCurrentX
//   int g_PathfindingCurrentZ
//   int g_PathfindingDestX
//   int g_PathfindingDestZ
//   CPathQueueNode[5000] g_PathfindingQueue
//   undefined4 g_PathfindingQueue[0].cost
//   undefined4 g_PathfindingQueue[0].z
//   undefined4 DAT_030c3df8
//   undefined4 DAT_030c3dfc
//   undefined4 DAT_030c3e00
//   undefined4 DAT_030c3e04
//   undefined4 DAT_030c3e08
//   undefined4 DAT_030c3e0c
//   undefined4 DAT_030c3e10
//   undefined4 DAT_030c3e14
//   undefined4 DAT_030c3e18
//   undefined4 DAT_030c3e1c
//   undefined4 DAT_030c3e20
//   undefined4 DAT_030c3e24
//   int g_PathfindingQueueHead
//   int g_PathfindingQueueTail
//   undefined4 DAT_030d2857
//   char[101][100] g_PathfindingVisited
//   undefined4 DAT_030d2859
//   int g_PathfindingNodesExpanded
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   crt_memory.c_memset_FUN_005fde40

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
        *(undefined1 *)(unaff_EBX * 100 + 0x30d2859 + unaff_EDI) = 3;
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


// Assembly code:
// 005487a0: PUSH EBX
//   Label: core_path.cpp_CPathMap_queuePop_FUN_005487a0
// 005487a1: PUSH ESI
// 005487a2: PUSH EDI
// 005487a3: PUSH EBP
// 005487a4: SUB ESP,0x18
// 005487a7: MOV EBX,dword ptr [0x030d2850]
//   XREF to: 030d2850 (READ)
// 005487ad: PUSH 0x2774
// 005487b2: PUSH 0x0
// 005487b4: PUSH 0x30d2858
//   XREF to: 030d2858 (DATA)
// 005487b9: MOV ESI,0x1
// 005487be: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005487c3: MOV ECX,dword ptr [0x030c3ddc]
//   XREF to: 030c3ddc (READ)
// 005487c9: MOV EBX,dword ptr [0x030c3de0]
//   XREF to: 030c3de0 (READ)
// 005487cf: ADD ESP,0xc
// 005487d2: MOV dword ptr [0x030d4fcc],ESI
//   XREF to: 030d4fcc (WRITE)
// 005487d8: XOR EDX,EDX
// 005487da: LEA EAX,[EBX*0x4 + 0x0]
// 005487e1: MOV dword ptr [0x030d284c],EDX
//   XREF to: 030d284c (WRITE)
// 005487e7: SUB EAX,EBX
// 005487e9: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 005487ed: SHL EAX,0x3
// 005487f0: MOV dword ptr [0x030c3dec],ECX
//   XREF to: 030c3dec (WRITE)
// 005487f6: ADD EAX,EBX
// 005487f8: MOV DL,byte ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 005487fc: MOV dword ptr [0x030c3df4],EBX
//   XREF to: 030c3df4 (WRITE)
// 00548802: MOV byte ptr [ECX + EAX*0x4 + 0x30d2858],DL
//   XREF to: 030d2858 (DATA)
// 00548809: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0054880d: MOV EBX,ESI
// 0054880f: MOV [0x030c3df0],EAX
//   XREF to: 030c3df0 (WRITE)
// 00548814: IMUL EAX,dword ptr [0x030c3de8],0x64
//   Label: LAB_00548814
//   XREF to: 030c3de8 (READ)
// 0054881b: ADD EAX,dword ptr [0x030c3de4]
//   XREF to: 030c3de4 (READ)
// 00548821: CMP byte ptr [EAX + 0x30d2858],0x0
//   XREF to: 030d2858 (DATA)
// 00548828: JNZ 0x00548959
//   XREF to: 00548959 (CONDITIONAL_JUMP)
// 0054882e: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x1c] (DATA)
// 00548832: LEA EBP,[ESP + 0x10]
//   XREF to: Stack[-0x18] (DATA)
// 00548836: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x20] (DATA)
// 0054883a: MOV EAX,[0x030d284c]
//   XREF to: 030d284c (READ)
// 0054883f: MOV dword ptr [0x030d2850],EBX
//   XREF to: 030d2850 (WRITE)
// 00548845: CMP EAX,EBX
// 00548847: JZ 0x00548960
//   XREF to: 00548960 (CONDITIONAL_JUMP)
// 0054884d: IMUL EAX,dword ptr [0x030d284c],0xc
//   Label: LAB_0054884d
//   XREF to: 030d284c (READ)
// 00548854: MOV EDX,dword ptr [EAX + 0x30c3dec]
//   XREF to: 030c3dec (READ)
//   XREF to: 030c3df8 (READ)
// 0054885a: MOV dword ptr [EDI],EDX
//   XREF to: Stack[-0x20] (DATA)
// 0054885c: MOV EDX,dword ptr [EAX + 0x30c3df0]
//   XREF to: 030c3df0 (READ)
//   XREF to: 030c3dfc (READ)
// 00548862: MOV ECX,dword ptr [0x030d284c]
//   XREF to: 030d284c (READ)
// 00548868: MOV dword ptr [ESI],EDX
//   XREF to: Stack[-0x1c] (DATA)
// 0054886a: INC ECX
// 0054886b: MOV EAX,dword ptr [EAX + 0x30c3df4]
//   XREF to: 030c3df4 (READ)
//   XREF to: 030c3e00 (READ)
// 00548871: MOV dword ptr [0x030d284c],ECX
//   XREF to: 030d284c (WRITE)
// 00548877: MOV dword ptr [EBP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 0054887a: CMP ECX,0x1388
// 00548880: JL 0x0054888a
//   XREF to: 0054888a (CONDITIONAL_JUMP)
// 00548882: XOR EDI,EDI
// 00548884: MOV dword ptr [0x030d284c],EDI
//   XREF to: 030d284c (WRITE)
// 0054888a: MOV EBP,dword ptr [ESP + 0xc]
//   Label: LAB_0054888a
//   XREF to: Stack[-0x1c] (READ)
// 0054888e: PUSH EBP
// 0054888f: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 00548893: PUSH EAX
// 00548894: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 00548898: INC EAX
// 00548899: PUSH EAX
// 0054889a: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0054889e: PUSH EDX
// 0054889f: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 005488a4: ADD ESP,0x10
// 005488a7: MOV EBP,EAX
// 005488a9: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 005488ad: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 005488b1: PUSH ECX
// 005488b2: INC EAX
// 005488b3: PUSH EAX
// 005488b4: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 005488b8: PUSH ESI
// 005488b9: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005488bd: PUSH EDI
// 005488be: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 005488c3: ADD ESP,0x10
// 005488c6: MOV EDI,EAX
// 005488c8: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 005488cc: PUSH EAX
// 005488cd: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 005488d1: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 005488d5: PUSH EDX
// 005488d6: DEC EAX
// 005488d7: PUSH EAX
// 005488d8: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005488dc: PUSH ECX
// 005488dd: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 005488e2: ADD ESP,0x10
// 005488e5: MOV ESI,EAX
// 005488e7: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 005488eb: PUSH EAX
// 005488ec: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 005488f0: DEC EAX
// 005488f1: PUSH EAX
// 005488f2: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 005488f6: PUSH EDX
// 005488f7: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005488fb: PUSH ECX
// 005488fc: CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
//   XREF to: 00546ba0 (UNCONDITIONAL_CALL)
// 00548901: MOV EDX,dword ptr [0x030c3ddc]
//   XREF to: 030c3ddc (READ)
// 00548907: ADD ESP,0x10
// 0054890a: MOV ECX,EAX
// 0054890c: CMP EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00548910: JZ 0x00548987
//   XREF to: 00548987 (CONDITIONAL_JUMP)
// 00548912: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_00548912
//   XREF to: Stack[-0x20] (READ)
// 00548916: CMP EAX,dword ptr [0x030c3de4]
//   XREF to: 030c3de4 (READ)
// 0054891c: JZ 0x00548be5
//   XREF to: 00548be5 (CONDITIONAL_JUMP)
// 00548922: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_00548922
//   XREF to: Stack[-0x1c] (READ)
// 00548926: MOV EDX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 0054892c: SUB EAX,EBP
// 0054892e: CMP EAX,EDX
// 00548930: JL 0x00548bfa
//   XREF to: 00548bfa (CONDITIONAL_JUMP)
// 00548936: MOV EBX,dword ptr [0x030d2850]
//   Label: LAB_00548936
//   XREF to: 030d2850 (READ)
// 0054893c: MOV EAX,[0x030d284c]
//   XREF to: 030d284c (READ)
// 00548941: CMP EAX,EBX
// 00548943: JNZ 0x00548814
//   XREF to: 00548814 (CONDITIONAL_JUMP)
// 00548949: XOR EAX,EBX
// 0054894b: MOV dword ptr [0x030d2850],EBX
//   Label: LAB_0054894b
//   XREF to: 030d2850 (WRITE)
// 00548951: ADD ESP,0x18
// 00548954: POP EBP
// 00548955: POP EDI
// 00548956: POP ESI
// 00548957: POP EBX
// 00548958: RET
// 00548959: MOV EAX,0x1
//   Label: LAB_00548959
// 0054895e: JMP 0x0054894b
//   XREF to: 0054894b (UNCONDITIONAL_JUMP)
// 00548960: MOV ECX,0x63e878
//   Label: LAB_00548960
//   XREF to: 0063e878 (PARAM)
// 00548965: MOV EAX,0xdf
// 0054896a: PUSH 0x63e889
//   XREF to: 0063e889 (DATA)
// 0054896f: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00548975: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0054897a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0054897f: ADD ESP,0x4
// 00548982: JMP 0x0054884d
//   XREF to: 0054884d (UNCONDITIONAL_JUMP)
// 00548987: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_00548987
//   XREF to: Stack[-0x18] (READ)
// 0054898b: CMP EAX,dword ptr [0x030c3de0]
//   XREF to: 030c3de0 (READ)
// 00548991: JNZ 0x00548912
//   XREF to: 00548912 (CONDITIONAL_JUMP)
// 00548997: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_00548997
//   XREF to: Stack[-0x18] (READ)
// 0054899b: CMP EAX,0x63
// 0054899e: JGE 0x00548a30
//   XREF to: 00548a30 (CONDITIONAL_JUMP)
// 005489a4: INC EAX
// 005489a5: IMUL EAX,EAX,0x64
// 005489a8: ADD EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 005489ac: CMP byte ptr [EAX + 0x30d2858],0x0
//   XREF to: 030d2858 (DATA)
// 005489b3: JNZ 0x00548a30
//   XREF to: 00548a30 (CONDITIONAL_JUMP)
// 005489b9: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 005489bd: MOV EAX,EBP
// 005489bf: SUB EAX,EDX
// 005489c1: CDQ
// 005489c2: XOR EAX,EDX
// 005489c4: SUB EAX,EDX
// 005489c6: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 005489cc: JGE 0x00548a30
//   XREF to: 00548a30 (CONDITIONAL_JUMP)
// 005489ce: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 005489d2: INC EAX
// 005489d3: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005489d7: IMUL EAX,EAX,0x64
// 005489da: ADD EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 005489de: MOV EDX,0x1
// 005489e3: MOV EBX,dword ptr [0x030d2850]
//   XREF to: 030d2850 (READ)
// 005489e9: MOV byte ptr [EAX + 0x30d2858],DL
//   XREF to: 030d2858 (DATA)
// 005489ef: IMUL EDX,EBX,0xc
// 005489f2: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 005489f6: MOV dword ptr [EDX + 0x30c3dec],EAX
//   XREF to: 030c3df8 (WRITE)
// 005489fc: INC EBX
// 005489fd: MOV dword ptr [EDX + 0x30c3df0],EBP
//   XREF to: 030c3dfc (WRITE)
// 00548a03: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00548a07: MOV EBP,dword ptr [0x030d4fcc]
//   XREF to: 030d4fcc (READ)
// 00548a0d: MOV dword ptr [0x030d2850],EBX
//   XREF to: 030d2850 (WRITE)
// 00548a13: INC EBP
// 00548a14: MOV dword ptr [EDX + 0x30c3df4],EAX
//   XREF to: 030c3e00 (WRITE)
// 00548a1a: MOV dword ptr [0x030d4fcc],EBP
//   XREF to: 030d4fcc (WRITE)
// 00548a20: CMP EBX,0x1388
// 00548a26: JL 0x00548a30
//   XREF to: 00548a30 (CONDITIONAL_JUMP)
// 00548a28: XOR EBX,EBX
// 00548a2a: MOV dword ptr [0x030d2850],EBX
//   XREF to: 030d2850 (WRITE)
// 00548a30: CMP dword ptr [ESP + 0x8],0x63
//   Label: LAB_00548a30
//   XREF to: Stack[-0x20] (READ)
// 00548a35: JGE 0x00548ab7
//   XREF to: 00548ab7 (CONDITIONAL_JUMP)
// 00548a3b: IMUL EAX,dword ptr [ESP + 0x10],0x64
//   XREF to: Stack[-0x18] (READ)
// 00548a40: ADD EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00548a44: CMP byte ptr [EAX + 0x30d2859],0x0
//   XREF to: 030d2859 (DATA)
// 00548a4b: JNZ 0x00548ab7
//   XREF to: 00548ab7 (CONDITIONAL_JUMP)
// 00548a4d: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00548a51: MOV EAX,EDI
// 00548a53: SUB EAX,EDX
// 00548a55: CDQ
// 00548a56: XOR EAX,EDX
// 00548a58: SUB EAX,EDX
// 00548a5a: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 00548a60: JGE 0x00548ab7
//   XREF to: 00548ab7 (CONDITIONAL_JUMP)
// 00548a62: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 00548a66: IMUL EBX,EBP,0x64
// 00548a69: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00548a6d: MOV EDX,0x3
// 00548a72: MOV byte ptr [EBX + EAX*0x1 + 0x30d2859],DL
//   XREF to: 030d2859 (DATA)
// 00548a79: MOV EBX,dword ptr [0x030d2850]
//   XREF to: 030d2850 (READ)
// 00548a7f: IMUL EDX,EBX,0xc
// 00548a82: INC EAX
// 00548a83: MOV dword ptr [EDX + 0x30c3dec],EAX
//   XREF to: 030c3dec (WRITE)
//   XREF to: 030c3e04 (WRITE)
// 00548a89: INC EBX
// 00548a8a: MOV dword ptr [EDX + 0x30c3df0],EDI
//   XREF to: 030c3df0 (WRITE)
//   XREF to: 030c3e08 (WRITE)
// 00548a90: MOV EAX,[0x030d4fcc]
//   XREF to: 030d4fcc (READ)
// 00548a95: MOV dword ptr [EDX + 0x30c3df4],EBP
//   XREF to: 030c3df4 (WRITE)
//   XREF to: 030c3e0c (WRITE)
// 00548a9b: INC EAX
// 00548a9c: MOV dword ptr [0x030d2850],EBX
//   XREF to: 030d2850 (WRITE)
// 00548aa2: MOV [0x030d4fcc],EAX
//   XREF to: 030d4fcc (WRITE)
// 00548aa7: CMP EBX,0x1388
// 00548aad: JL 0x00548ab7
//   XREF to: 00548ab7 (CONDITIONAL_JUMP)
// 00548aaf: XOR EBX,EBX
// 00548ab1: MOV dword ptr [0x030d2850],EBX
//   XREF to: 030d2850 (WRITE)
// 00548ab7: MOV EDX,dword ptr [ESP + 0x10]
//   Label: LAB_00548ab7
//   XREF to: Stack[-0x18] (READ)
// 00548abb: TEST EDX,EDX
// 00548abd: JLE 0x00548b45
//   XREF to: 00548b45 (CONDITIONAL_JUMP)
// 00548ac3: LEA EAX,[EDX + -0x1]
// 00548ac6: IMUL EAX,EAX,0x64
// 00548ac9: ADD EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00548acd: CMP byte ptr [EAX + 0x30d2858],0x0
//   XREF to: 030d2858 (DATA)
// 00548ad4: JNZ 0x00548b45
//   XREF to: 00548b45 (CONDITIONAL_JUMP)
// 00548ad6: MOV EBP,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00548ada: MOV EAX,ESI
// 00548adc: SUB EAX,EBP
// 00548ade: CDQ
// 00548adf: XOR EAX,EDX
// 00548ae1: SUB EAX,EDX
// 00548ae3: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 00548ae9: JGE 0x00548b45
//   XREF to: 00548b45 (CONDITIONAL_JUMP)
// 00548aeb: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 00548aef: DEC EDI
// 00548af0: IMUL EDX,EDI,0x64
// 00548af3: ADD EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00548af7: MOV EAX,0x2
// 00548afc: MOV EBX,dword ptr [0x030d2850]
//   XREF to: 030d2850 (READ)
// 00548b02: MOV byte ptr [EDX + 0x30d2858],AL
//   XREF to: 030d2858 (DATA)
// 00548b08: IMUL EDX,EBX,0xc
// 00548b0b: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00548b0f: MOV dword ptr [EDX + 0x30c3dec],EAX
//   XREF to: 030c3dec (WRITE)
//   XREF to: 030c3e10 (WRITE)
// 00548b15: INC EBX
// 00548b16: MOV dword ptr [EDX + 0x30c3df0],ESI
//   XREF to: 030c3df0 (WRITE)
//   XREF to: 030c3e14 (WRITE)
// 00548b1c: MOV ESI,dword ptr [0x030d4fcc]
//   XREF to: 030d4fcc (READ)
// 00548b22: MOV dword ptr [EDX + 0x30c3df4],EDI
//   XREF to: 030c3df4 (WRITE)
//   XREF to: 030c3e18 (WRITE)
// 00548b28: INC ESI
// 00548b29: MOV dword ptr [0x030d2850],EBX
//   XREF to: 030d2850 (WRITE)
// 00548b2f: MOV dword ptr [0x030d4fcc],ESI
//   XREF to: 030d4fcc (WRITE)
// 00548b35: CMP EBX,0x1388
// 00548b3b: JL 0x00548b45
//   XREF to: 00548b45 (CONDITIONAL_JUMP)
// 00548b3d: XOR EBX,EBX
// 00548b3f: MOV dword ptr [0x030d2850],EBX
//   XREF to: 030d2850 (WRITE)
// 00548b45: MOV EDI,dword ptr [ESP + 0x8]
//   Label: LAB_00548b45
//   XREF to: Stack[-0x20] (READ)
// 00548b49: TEST EDI,EDI
// 00548b4b: JLE 0x00548936
//   XREF to: 00548936 (CONDITIONAL_JUMP)
// 00548b51: IMUL EAX,dword ptr [ESP + 0x10],0x64
//   XREF to: Stack[-0x18] (READ)
// 00548b56: ADD EAX,EDI
// 00548b58: CMP byte ptr [EAX + 0x30d2857],0x0
//   XREF to: 030d2857 (DATA)
// 00548b5f: JNZ 0x00548936
//   XREF to: 00548936 (CONDITIONAL_JUMP)
// 00548b65: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00548b69: MOV EAX,ECX
// 00548b6b: SUB EAX,ESI
// 00548b6d: CDQ
// 00548b6e: XOR EAX,EDX
// 00548b70: SUB EAX,EDX
// 00548b72: CMP EAX,dword ptr [0x030c3ab4]
//   XREF to: 030c3ab4 (READ)
// 00548b78: JGE 0x00548936
//   XREF to: 00548936 (CONDITIONAL_JUMP)
// 00548b7e: IMUL EDX,dword ptr [ESP + 0x10],0x64
//   XREF to: Stack[-0x18] (READ)
// 00548b83: MOV dword ptr [ESP],0x4
//   XREF to: Stack[-0x28] (DATA)
// 00548b8a: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00548b8e: MOV BL,byte ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00548b91: MOV byte ptr [EDX + EAX*0x1 + 0x30d2857],BL
//   XREF to: 030d2857 (DATA)
// 00548b98: MOV EBX,dword ptr [0x030d2850]
//   XREF to: 030d2850 (READ)
// 00548b9e: IMUL EDX,EBX,0xc
// 00548ba1: MOV ESI,dword ptr [0x030d4fcc]
//   XREF to: 030d4fcc (READ)
// 00548ba7: INC ESI
// 00548ba8: DEC EAX
// 00548ba9: MOV dword ptr [0x030d4fcc],ESI
//   XREF to: 030d4fcc (WRITE)
// 00548baf: MOV dword ptr [EDX + 0x30c3dec],EAX
//   XREF to: 030c3dec (WRITE)
//   XREF to: 030c3e1c (WRITE)
// 00548bb5: INC EBX
// 00548bb6: MOV dword ptr [EDX + 0x30c3df0],ECX
//   XREF to: 030c3df0 (WRITE)
//   XREF to: 030c3e20 (WRITE)
// 00548bbc: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 00548bc0: MOV dword ptr [0x030d2850],EBX
//   XREF to: 030d2850 (WRITE)
// 00548bc6: MOV dword ptr [EDX + 0x30c3df4],EAX
//   XREF to: 030c3df4 (WRITE)
//   XREF to: 030c3e24 (WRITE)
// 00548bcc: CMP EBX,0x1388
// 00548bd2: JL 0x00548936
//   XREF to: 00548936 (CONDITIONAL_JUMP)
// 00548bd8: XOR EBX,EBX
// 00548bda: MOV dword ptr [0x030d2850],EBX
//   XREF to: 030d2850 (WRITE)
// 00548be0: JMP 0x00548936
//   XREF to: 00548936 (UNCONDITIONAL_JUMP)
// 00548be5: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_00548be5
//   XREF to: Stack[-0x18] (READ)
// 00548be9: CMP EAX,dword ptr [0x030c3de8]
//   XREF to: 030c3de8 (READ)
// 00548bef: JNZ 0x00548922
//   XREF to: 00548922 (CONDITIONAL_JUMP)
// 00548bf5: JMP 0x00548997
//   XREF to: 00548997 (UNCONDITIONAL_JUMP)
// 00548bfa: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_00548bfa
//   XREF to: Stack[-0x1c] (READ)
// 00548bfe: SUB EAX,ESI
// 00548c00: CMP EAX,EDX
// 00548c02: JGE 0x00548936
//   XREF to: 00548936 (CONDITIONAL_JUMP)
// 00548c08: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00548c0c: SUB EAX,EDI
// 00548c0e: CMP EAX,EDX
// 00548c10: JGE 0x00548936
//   XREF to: 00548936 (CONDITIONAL_JUMP)
// 00548c16: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00548c1a: SUB EAX,ECX
// 00548c1c: CMP EAX,EDX
// 00548c1e: JGE 0x00548936
//   XREF to: 00548936 (CONDITIONAL_JUMP)
// 00548c24: JMP 0x00548997
//   XREF to: 00548997 (UNCONDITIONAL_JUMP)
