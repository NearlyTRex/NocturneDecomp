// Name: core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450
// Address: 00494450
// Address Range: [[00494450, 004945f8]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450(CDemonRaytrace * this_ptr)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 (004947a0) at 00494ac8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Consolidating_raytrace_g_00622670
//   TerminatedCString s_core_dtrace_cpp_0062269a
//   TerminatedCString s_core_dtrace_cpp_006226ad
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char* g_CurrentDebugFilename = 0067d200
//   CEditorTools g_CEditorToolsPtr
//   int g_CurrentDebugLine
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600
//   core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690
//   crt_memory.c_free_FUN_005fe659
//   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_consolidateTriList_FUN_00494450(CDemonRaytrace *this_ptr)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  float *pfVar7;
  uchar *puVar8;
  CDemonTriangle *pCVar9;
  uchar *puVar10;
  byte bVar11;
  int local_14;
  
  bVar11 = 0;
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Consolidating raytrace geometry arrays...");
  core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_00494690(this_ptr);
  this_ptr->triangle_count = 0;
  iVar5 = 0;
  for (iVar2 = 0;
      iVar2 < (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z;
      iVar2 = iVar2 + 1) {
    iVar1 = iVar5 + -0x14;
    iVar5 = iVar5 + 0x58;
    this_ptr->triangle_count =
         this_ptr->triangle_count + *(int *)((int)this_ptr->cube_list->voxel_data + iVar1);
  }
  core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_00494600(this_ptr);
  iVar2 = 0;
  local_14 = 0;
  while (0 < (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z) {
    puVar6 = (uint *)((int)this_ptr->cube_list->voxel_data + local_14 + -0x14);
    if (0 < (int)*puVar6) {
      pfVar7 = (float *)puVar6[1];
      pCVar9 = this_ptr->triangle_list + iVar2;
      for (uVar3 = *puVar6 * 0x38 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        (pCVar9->vertex1).x = *pfVar7;
        pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
        pCVar9 = (CDemonTriangle *)((int)pCVar9 + (uint)bVar11 * -8 + 4);
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)&(pCVar9->vertex1).x = *(undefined1 *)pfVar7;
        pfVar7 = (float *)((int)pfVar7 + (uint)bVar11 * -2 + 1);
        pCVar9 = (CDemonTriangle *)((int)pCVar9 + (uint)bVar11 * -2 + 1);
      }
      uVar3 = *puVar6;
      puVar8 = (uchar *)puVar6[0x15];
      puVar10 = this_ptr->triangle_flags + iVar2;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)puVar10 = *(undefined4 *)puVar8;
        puVar8 = puVar8 + (uint)bVar11 * -8 + 4;
        puVar10 = puVar10 + (uint)bVar11 * -8 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
      }
      g_CurrentDebugFilename = "..\\core\\dtrace.cpp";
      g_CurrentDebugLine = 0xe0;
      if (puVar6[1] != 0) {
        crt_memory_c_free_FUN_005fe659((void *)(puVar6[1] - 4));
      }
      g_CurrentDebugFilename = "..\\core\\dtrace.cpp";
      g_CurrentDebugLine = 0xe1;
      crt_memory_c_free_FUN_005fe659((void *)puVar6[0x15]);
      puVar6[1] = (uint)(this_ptr->triangle_list + iVar2);
      puVar6[0x15] = (uint)(this_ptr->triangle_flags + iVar2);
    }
    iVar2 = 1;
    shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
              (g_CEditorToolsPtr,1.0,
               (float)((this_ptr->grid_coord).x * (this_ptr->grid_coord).y *
                      (this_ptr->grid_coord).z));
    local_14 = local_14 + 0x58;
  }
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  return;
}


// Assembly code:
// 00494450: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450
// 00494451: PUSH ESI
// 00494452: PUSH EDI
// 00494453: PUSH EBP
// 00494454: SUB ESP,0x10
// 00494457: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0049445b: PUSH 0x622670
//   XREF to: 00622670 (DATA)
// 00494460: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00494466: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00494467: CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
//   XREF to: 004a0430 (UNCONDITIONAL_CALL)
// 0049446c: ADD ESP,0x8
// 0049446f: PUSH EBX
// 00494470: CALL core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690
//   XREF to: 00494690 (UNCONDITIONAL_CALL)
// 00494475: ADD ESP,0x4
// 00494478: MOV dword ptr [EBX + 0x4],0x0
// 0049447f: XOR EAX,EAX
// 00494481: XOR EDX,EDX
// 00494483: MOV ECX,dword ptr [EBX + 0x44]
//   Label: LAB_00494483
// 00494486: MOV EBP,dword ptr [EBX + 0x40]
// 00494489: IMUL EBP,ECX
// 0049448c: IMUL EBP,dword ptr [EBX + 0x48]
// 00494490: CMP EAX,EBP
// 00494492: JGE 0x004944a8
//   XREF to: 004944a8 (CONDITIONAL_JUMP)
// 00494494: MOV ECX,dword ptr [EBX + 0x4c]
// 00494497: MOV ESI,dword ptr [EBX + 0x4]
// 0049449a: MOV ECX,dword ptr [ECX + EDX*0x1]
// 0049449d: ADD EDX,0x58
// 004944a0: ADD ESI,ECX
// 004944a2: INC EAX
// 004944a3: MOV dword ptr [EBX + 0x4],ESI
// 004944a6: JMP 0x00494483
//   XREF to: 00494483 (UNCONDITIONAL_JUMP)
// 004944a8: PUSH EBX
//   Label: LAB_004944a8
// 004944a9: CALL core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600
//   XREF to: 00494600 (UNCONDITIONAL_CALL)
// 004944ae: XOR EDI,EDI
// 004944b0: ADD ESP,0x4
// 004944b3: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 004944b7: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 004944bb: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x20] (DATA)
// 004944be: MOV EDI,dword ptr [EBX + 0x44]
//   Label: LAB_004944be
// 004944c1: MOV EBP,dword ptr [EBX + 0x40]
// 004944c4: IMUL EBP,EDI
// 004944c7: IMUL EBP,dword ptr [EBX + 0x48]
// 004944cb: CMP EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 004944cf: JLE 0x004945e2
//   XREF to: 004945e2 (CONDITIONAL_JUMP)
// 004944d5: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004944d8: MOV EBP,dword ptr [EBX + 0x4c]
// 004944db: ADD EBP,ECX
// 004944dd: MOV ESI,dword ptr [EBP]
// 004944e0: TEST ESI,ESI
// 004944e2: JLE 0x00494593
//   XREF to: 00494593 (CONDITIONAL_JUMP)
// 004944e8: IMUL ECX,ESI,0x38
// 004944eb: IMUL EDI,dword ptr [ESP + 0x8],0x38
//   XREF to: Stack[-0x18] (READ)
// 004944f0: MOV EAX,dword ptr [EBX + 0x8]
// 004944f3: MOV ESI,dword ptr [EBP + 0x4]
// 004944f6: ADD EDI,EAX
// 004944f8: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 004944fc: PUSH EDI
// 004944fd: MOV EAX,ECX
// 004944ff: SHR ECX,0x2
// 00494502: MOVSD.REP ES:EDI,ESI
// 00494504: MOV CL,AL
// 00494506: AND CL,0x3
// 00494509: MOVSB.REP ES:EDI,ESI
// 0049450b: POP EDI
// 0049450c: MOV ECX,dword ptr [EBP]
// 0049450f: MOV EDI,dword ptr [EBX + 0xc]
// 00494512: MOV ESI,dword ptr [EBP + 0x54]
// 00494515: ADD EDI,EDX
// 00494517: PUSH EDI
// 00494518: MOV EAX,ECX
// 0049451a: SHR ECX,0x2
// 0049451d: MOVSD.REP ES:EDI,ESI
// 0049451f: MOV CL,AL
// 00494521: AND CL,0x3
// 00494524: MOVSB.REP ES:EDI,ESI
// 00494526: POP EDI
// 00494527: MOV ECX,0x62269a
//   XREF to: 0062269a (PARAM)
// 0049452c: MOV ESI,0xe0
// 00494531: MOV EAX,dword ptr [EBP + 0x4]
// 00494534: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 0049453a: MOV dword ptr [0x02f0d944],ESI
//   XREF to: 02f0d944 (WRITE)
// 00494540: TEST EAX,EAX
// 00494542: JZ 0x00494550
//   XREF to: 00494550 (CONDITIONAL_JUMP)
// 00494544: SUB EAX,0x4
// 00494547: PUSH EAX
// 00494548: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0049454d: ADD ESP,0x4
// 00494550: MOV EDI,0x6226ad
//   Label: LAB_00494550
//   XREF to: 006226ad (DATA)
// 00494555: MOV EDX,dword ptr [EBP + 0x54]
// 00494558: MOV EAX,0xe1
// 0049455d: PUSH EDX
// 0049455e: MOV dword ptr [0x0067d20c],EDI
//   XREF to: 0067d20c (WRITE)
// 00494564: MOV [0x02f0d944],EAX
//   XREF to: 02f0d944 (WRITE)
// 00494569: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0049456e: ADD ESP,0x4
// 00494571: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 00494575: IMUL EAX,ECX,0x38
// 00494578: MOV EDX,dword ptr [EBX + 0x8]
// 0049457b: ADD EDX,EAX
// 0049457d: MOV dword ptr [EBP + 0x4],EDX
// 00494580: MOV EAX,dword ptr [EBX + 0xc]
// 00494583: LEA EDX,[ECX + EAX*0x1]
// 00494586: MOV EAX,dword ptr [EBP]
// 00494589: LEA ESI,[ECX + EAX*0x1]
// 0049458c: MOV dword ptr [EBP + 0x54],EDX
// 0049458f: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00494593: MOV EBP,dword ptr [EBX + 0x40]
//   Label: LAB_00494593
// 00494596: IMUL EBP,dword ptr [EBX + 0x44]
// 0049459a: MOV EAX,dword ptr [EBX + 0x48]
// 0049459d: IMUL EBP,EAX
// 004945a0: MOV dword ptr [ESP + 0xc],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 004945a4: FILD dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 004945a8: SUB ESP,0x4
// 004945ab: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 004945af: INC ESI
// 004945b0: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 004945b4: FSTP float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004945b7: FILD dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 004945bb: SUB ESP,0x4
// 004945be: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004945c4: FSTP float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004945c7: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004945c8: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 004945cd: ADD ESP,0xc
// 004945d0: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004945d3: ADD ECX,0x58
// 004945d6: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 004945da: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x20] (DATA)
// 004945dd: JMP 0x004944be
//   XREF to: 004944be (UNCONDITIONAL_JUMP)
// 004945e2: MOV EBX,dword ptr [0x00678a60]
//   Label: LAB_004945e2
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004945e8: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004945e9: CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
//   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
// 004945ee: ADD ESP,0x4
// 004945f1: ADD ESP,0x10
// 004945f4: POP EBP
// 004945f5: POP EDI
// 004945f6: POP ESI
// 004945f7: POP EBX
// 004945f8: RET
