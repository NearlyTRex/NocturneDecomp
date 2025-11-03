// Name: core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0
// Address: 004c74a0
// Address Range: [[004c74a0, 004c761a]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0(CFireEffect * this_ptr, int render_mode, int render_completeness)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c5dc [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056b737 [UNCONDITIONAL_CALL]
//   core_set.cpp_FUN_00571380 (00571380) at 005713a6 [UNCONDITIONAL_CALL]
//   core_set.cpp_FUN_005713c0 (005713c0) at 005713fe [UNCONDITIONAL_CALL]
// Globals:
//   int g_BulletHoleActiveCount
//   CBulletHole[256] g_BulletHolePool
//   undefined4 DAT_02d2a200
//   undefined4 DAT_02d2a204
//   undefined4 DAT_02d2a230
//   undefined4 DAT_02d2a23c
//   undefined4 DAT_02d2a240
//   int g_StakeActiveCount
//   CStake[256] g_StakePool
//   undefined4 DAT_02d2e054
//   undefined4 DAT_02d2e05c
//   undefined4 DAT_02d2e2b4
//   CCrater[20] g_CraterPool
//   undefined4 DAT_02d6c6a8
//   undefined4 DAT_02d6c714
//   undefined4 DAT_02d6c718
//   CCrater* g_CraterActiveListHead
// Function calls:
//   core_fire.cpp_CBulletHole_initRender_FUN_004bfa40
//   core_fire.cpp_CBulletHole_render_FUN_004bfac0
//   core_fire.cpp_CCrater_render_FUN_004c4620
//   core_fire.cpp_CStake_render_FUN_004c0140

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004c75bd) */
/* WARNING: Removing unreachable block (ram,0x004c7604) */

void __cdecl
core_fire_cpp_CFireEffect_renderDecals_FUN_004c74a0
          (CFireEffect *this_ptr,int render_mode,int render_completeness)

{
  int iVar1;
  CCrater *this_ptr_00;
  int iVar2;
  CStake *pCVar3;
  
  core_fire_cpp_CBulletHole_initRender_FUN_004bfa40(g_BulletHolePool);
  if (render_completeness == 0) {
    iVar2 = 0;
    if (0 < g_BulletHoleActiveCount) {
      iVar1 = 0;
      do {
        if ((*(int *)((int)&g_BulletHolePool[0].active + iVar1) != 0) &&
           (*(int *)((int)&g_BulletHolePool[0].actor_ptr + iVar1) == 0)) {
          core_fire_cpp_CBulletHole_render_FUN_004bfac0
                    ((CBulletHole *)((int)&g_BulletHolePool[0].position.x + iVar1));
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x3c;
      } while (iVar2 < g_BulletHoleActiveCount);
    }
  }
  else {
    iVar2 = 0;
    if (0 < g_BulletHoleActiveCount) {
      iVar1 = 0;
      do {
        if (*(int *)((int)&g_BulletHolePool[0].actor_ptr + iVar1) == 0) {
          core_fire_cpp_CBulletHole_render_FUN_004bfac0
                    ((CBulletHole *)((int)&g_BulletHolePool[0].position.x + iVar1));
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x3c;
      } while (iVar2 < g_BulletHoleActiveCount);
    }
  }
  if ((render_completeness != 0) && (iVar2 = 0, 0 < g_StakeActiveCount)) {
    pCVar3 = g_StakePool;
    iVar1 = 0;
    do {
      if ((pCVar3->box).is_valid == 0) {
        *(undefined4 *)((int)g_StakePool[0].box.rotation_matrix.m + iVar1 + -0x1c) = 1;
LAB_004c7525:
        core_fire_cpp_CStake_render_FUN_004c0140
                  ((CStake *)((int)g_StakePool[0].box.rotation_matrix.m + iVar1 + -0x1c));
      }
      else if (*(int *)((int)g_StakePool[0].box.rotation_matrix.m + iVar1 + -0x1c) != 0)
      goto LAB_004c7525;
      iVar1 = iVar1 + 0x260;
      iVar2 = iVar2 + 1;
      pCVar3 = pCVar3 + 1;
    } while (iVar2 < g_StakeActiveCount);
  }
  if (render_completeness == 0) {
    iVar2 = 0;
    do {
      if (*(int *)(g_CraterPool[0].field0_0x0 + iVar2 + 4) != 0) {
        core_fire_cpp_CCrater_render_FUN_004c4620((CCrater *)(g_CraterPool[0].field0_0x0 + iVar2));
      }
      iVar2 = iVar2 + 0x70;
    } while (iVar2 != 0x8c0);
  }
  else {
    this_ptr_00 = g_CraterPool;
    do {
      core_fire_cpp_CCrater_render_FUN_004c4620(this_ptr_00);
      this_ptr_00 = this_ptr_00 + 1;
    } while (this_ptr_00 != (CCrater *)&g_CraterActiveListHead);
  }
  return;
}


// Assembly code:
// 004c74a0: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0
// 004c74a1: PUSH ESI
// 004c74a2: PUSH EDI
// 004c74a3: PUSH EBP
// 004c74a4: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004c74a8: PUSH 0x2d2a1f4
//   XREF to: 02d2a1f4 (DATA)
// 004c74ad: CALL core_fire.cpp_CBulletHole_initRender_FUN_004bfa40
//   XREF to: 004bfa40 (UNCONDITIONAL_CALL)
// 004c74b2: ADD ESP,0x4
// 004c74b5: CMP dword ptr [ESP + 0x18],0x0
//   XREF to: Stack[0x8] (READ)
// 004c74ba: JZ 0x004c7585
//   XREF to: 004c7585 (CONDITIONAL_JUMP)
// 004c74c0: MOV EBX,dword ptr [0x02d2a1ec]
//   XREF to: 02d2a1ec (READ)
// 004c74c6: XOR ESI,ESI
// 004c74c8: TEST EBX,EBX
// 004c74ca: JLE 0x004c74f4
//   XREF to: 004c74f4 (CONDITIONAL_JUMP)
// 004c74cc: XOR EBX,EBX
// 004c74ce: CMP dword ptr [EBX + 0x2d2a204],0x0
//   Label: LAB_004c74ce
//   XREF to: 02d2a204 (READ)
//   XREF to: 02d2a240 (READ)
// 004c74d5: JNZ 0x004c74e7
//   XREF to: 004c74e7 (CONDITIONAL_JUMP)
// 004c74d7: MOV EAX,0x2d2a1f4
//   XREF to: 02d2a1f4 (DATA)
// 004c74dc: ADD EAX,EBX
//   XREF to: 02d2a1f4 (PARAM)
//   XREF to: 02d2a230 (PARAM)
// 004c74de: PUSH EAX
//   XREF to: 02d2a1f4 (DATA)
//   XREF to: 02d2a230 (DATA)
// 004c74df: CALL core_fire.cpp_CBulletHole_render_FUN_004bfac0
//   XREF to: 004bfac0 (UNCONDITIONAL_CALL)
// 004c74e4: ADD ESP,0x4
// 004c74e7: MOV EAX,[0x02d2a1ec]
//   Label: LAB_004c74e7
//   XREF to: 02d2a1ec (READ)
// 004c74ec: INC ESI
// 004c74ed: ADD EBX,0x3c
// 004c74f0: CMP ESI,EAX
// 004c74f2: JL 0x004c74ce
//   XREF to: 004c74ce (CONDITIONAL_JUMP)
// 004c74f4: CMP dword ptr [ESP + 0x18],0x0
//   Label: LAB_004c74f4
//   XREF to: Stack[0x8] (READ)
// 004c74f9: JZ 0x004c754c
//   XREF to: 004c754c (CONDITIONAL_JUMP)
// 004c74fb: MOV ECX,dword ptr [0x02d2ddf4]
//   XREF to: 02d2ddf4 (READ)
// 004c7501: XOR ESI,ESI
// 004c7503: TEST ECX,ECX
// 004c7505: JLE 0x004c754c
//   XREF to: 004c754c (CONDITIONAL_JUMP)
// 004c7507: MOV EDI,0x2d2ddfc
//   XREF to: 02d2ddfc (DATA)
// 004c750c: XOR EBX,EBX
// 004c750e: MOV EAX,dword ptr [EDI + 0x258]
//   Label: LAB_004c750e
//   XREF to: 02d2e054 (READ)
//   XREF to: 02d2e2b4 (READ)
// 004c7514: TEST EAX,EAX
// 004c7516: JZ 0x004c75d7
//   XREF to: 004c75d7 (CONDITIONAL_JUMP)
// 004c751c: CMP dword ptr [EBX + 0x2d2ddfc],0x0
//   XREF to: 02d2ddfc (READ)
//   XREF to: 02d2e05c (READ)
// 004c7523: JZ 0x004c7535
//   XREF to: 004c7535 (CONDITIONAL_JUMP)
// 004c7525: MOV EAX,0x2d2ddfc
//   Label: LAB_004c7525
//   XREF to: 02d2ddfc (DATA)
// 004c752a: ADD EAX,EBX
//   XREF to: 02d2ddfc (PARAM)
//   XREF to: 02d2e05c (PARAM)
// 004c752c: PUSH EAX
//   XREF to: 02d2ddfc (DATA)
//   XREF to: 02d2e05c (DATA)
// 004c752d: CALL core_fire.cpp_CStake_render_FUN_004c0140
//   XREF to: 004c0140 (UNCONDITIONAL_CALL)
// 004c7532: ADD ESP,0x4
// 004c7535: MOV ECX,dword ptr [0x02d2ddf4]
//   Label: LAB_004c7535
//   XREF to: 02d2ddf4 (READ)
// 004c753b: ADD EBX,0x260
// 004c7541: INC ESI
// 004c7542: ADD EDI,0x260
// 004c7548: CMP ESI,ECX
// 004c754a: JL 0x004c750e
//   XREF to: 004c750e (CONDITIONAL_JUMP)
// 004c754c: MOV EBX,dword ptr [ESP + 0x18]
//   Label: LAB_004c754c
//   XREF to: Stack[0x8] (READ)
// 004c7550: TEST EBX,EBX
// 004c7552: JZ 0x004c75e6
//   XREF to: 004c75e6 (CONDITIONAL_JUMP)
// 004c7558: MOV EBX,0x2d6c6a4
//   XREF to: 02d6c6a4 (PARAM)
// 004c755d: LEA ESI,[EBX + 0x8c0]
//   XREF to: 02d6cf64 (DATA)
// 004c7563: PUSH EBX
//   Label: LAB_004c7563
//   XREF to: 02d6c6a4 (DATA)
//   XREF to: 02d6c714 (DATA)
// 004c7564: CALL core_fire.cpp_CCrater_render_FUN_004c4620
//   XREF to: 004c4620 (UNCONDITIONAL_CALL)
// 004c7569: ADD EBX,0x70
//   XREF to: 02d6c714 (PARAM)
// 004c756c: ADD ESP,0x4
// 004c756f: CMP EBX,ESI
// 004c7571: JNZ 0x004c7563
//   XREF to: 004c7563 (CONDITIONAL_JUMP)
// 004c7573: LEA EAX,[EAX]
// 004c7579: LEA EDX,[EDX]
// 004c757f: NOP
// 004c7580: POP EBP
//   Label: LAB_004c7580
// 004c7581: POP EDI
// 004c7582: POP ESI
// 004c7583: POP EBX
// 004c7584: RET
// 004c7585: MOV ECX,dword ptr [0x02d2a1ec]
//   Label: LAB_004c7585
//   XREF to: 02d2a1ec (READ)
// 004c758b: XOR ESI,ESI
// 004c758d: TEST ECX,ECX
// 004c758f: JLE 0x004c74f4
//   XREF to: 004c74f4 (CONDITIONAL_JUMP)
// 004c7595: XOR EBX,EBX
// 004c7597: XOR EDI,EDI
// 004c7599: CMP EDI,dword ptr [EBX + 0x2d2a200]
//   Label: LAB_004c7599
//   XREF to: 02d2a200 (READ)
//   XREF to: 02d2a23c (READ)
// 004c759f: JZ 0x004c75c3
//   XREF to: 004c75c3 (CONDITIONAL_JUMP)
// 004c75a1: CMP EDI,dword ptr [EBX + 0x2d2a204]
//   XREF to: 02d2a204 (READ)
//   XREF to: 02d2a240 (READ)
// 004c75a7: JNZ 0x004c75c3
//   XREF to: 004c75c3 (CONDITIONAL_JUMP)
// 004c75a9: MOV EAX,0x2d2a1f4
//   XREF to: 02d2a1f4 (DATA)
// 004c75ae: ADD EAX,EBX
//   XREF to: 02d2a1f4 (PARAM)
//   XREF to: 02d2a230 (PARAM)
// 004c75b0: PUSH EAX
//   XREF to: 02d2a1f4 (DATA)
//   XREF to: 02d2a230 (DATA)
// 004c75b1: CALL core_fire.cpp_CBulletHole_render_FUN_004bfac0
//   XREF to: 004bfac0 (UNCONDITIONAL_CALL)
// 004c75b6: ADD ESP,0x4
// 004c75b9: TEST EBP,EBP
// 004c75bb: JZ 0x004c75c3
//   XREF to: 004c75c3 (CONDITIONAL_JUMP)
// 004c75bd: MOV dword ptr [EBX + 0x2d2a200],EDI
//   XREF to: 02d2a200 (WRITE)
// 004c75c3: MOV ECX,dword ptr [0x02d2a1ec]
//   Label: LAB_004c75c3
//   XREF to: 02d2a1ec (READ)
// 004c75c9: INC ESI
// 004c75ca: ADD EBX,0x3c
// 004c75cd: CMP ESI,ECX
// 004c75cf: JGE 0x004c74f4
//   XREF to: 004c74f4 (CONDITIONAL_JUMP)
// 004c75d5: JMP 0x004c7599
//   XREF to: 004c7599 (UNCONDITIONAL_JUMP)
// 004c75d7: MOV dword ptr [EBX + 0x2d2ddfc],0x1
//   Label: LAB_004c75d7
//   XREF to: 02d2e05c (WRITE)
// 004c75e1: JMP 0x004c7525
//   XREF to: 004c7525 (UNCONDITIONAL_JUMP)
// 004c75e6: XOR EDI,EDI
//   Label: LAB_004c75e6
// 004c75e8: CMP EDI,dword ptr [EBX + 0x2d6c6a8]
//   Label: LAB_004c75e8
//   XREF to: 02d6c6a8 (DATA)
//   XREF to: 02d6c718 (DATA)
// 004c75ee: JZ 0x004c760a
//   XREF to: 004c760a (CONDITIONAL_JUMP)
// 004c75f0: MOV ESI,0x2d6c6a4
//   XREF to: 02d6c6a4 (DATA)
// 004c75f5: ADD ESI,EBX
// 004c75f7: PUSH ESI
// 004c75f8: CALL core_fire.cpp_CCrater_render_FUN_004c4620
//   XREF to: 004c4620 (UNCONDITIONAL_CALL)
// 004c75fd: ADD ESP,0x4
// 004c7600: TEST EBP,EBP
// 004c7602: JZ 0x004c760a
//   XREF to: 004c760a (CONDITIONAL_JUMP)
// 004c7604: MOV dword ptr [EBX + 0x2d6c6a8],EDI
//   XREF to: 02d6c6a8 (DATA)
// 004c760a: ADD EBX,0x70
//   Label: LAB_004c760a
// 004c760d: CMP EBX,0x8c0
// 004c7613: JZ 0x004c7580
//   XREF to: 004c7580 (CONDITIONAL_JUMP)
// 004c7619: JMP 0x004c75e8
//   XREF to: 004c75e8 (UNCONDITIONAL_JUMP)
