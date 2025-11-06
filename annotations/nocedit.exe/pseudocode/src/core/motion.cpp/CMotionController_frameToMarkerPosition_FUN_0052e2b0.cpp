// Name: core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
// Address: 0052e2b0
// Address Range: [[0052e2b0, 0052e391]]
// Convention: __cdecl
// Signature: float core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(CMotionController * this_ptr)
// Cross-references:
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d3525 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e7c72 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051fcc0 (0051fcc0) at 005201b9 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 00597644 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc3f0 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bfb60 (005bfb60) at 005bfcbd [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005fada1 [UNCONDITIONAL_CALL]

#include "nocturne.h"

float __cdecl
core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0(CMotionController *this_ptr)

{
  int iVar1;
  SMotion *pSVar2;
  SMotion *pSVar3;
  int iVar4;
  float local_1c;
  
  pSVar3 = this_ptr->motion_list_ptr->motions + this_ptr->current_motion_index;
  if (this_ptr->current_frame_number <= 0.0) {
    local_1c = 0.0;
  }
  else if ((float)pSVar3->frame_count <= this_ptr->current_frame_number) {
    local_1c = (float)(pSVar3->marker_count + 1);
  }
  else {
    iVar1 = 0;
    iVar4 = 0;
    pSVar2 = pSVar3;
    if (0 < pSVar3->marker_count) {
      do {
        if (this_ptr->current_frame_number < (float)pSVar2->markers[0]) {
          return (float)iVar1 +
                 (this_ptr->current_frame_number - (float)iVar4) /
                 (float)(pSVar2->markers[0] - iVar4);
        }
        iVar1 = iVar1 + 1;
        iVar4 = pSVar2->markers[0];
        pSVar2 = (SMotion *)(pSVar2->motion_name + 4);
      } while (iVar1 < pSVar3->marker_count);
    }
    local_1c = (float)pSVar3->marker_count +
               (this_ptr->current_frame_number - (float)iVar4) /
               (float)(pSVar3->frame_count - iVar4);
  }
  return local_1c;
}


// Assembly code:
// 0052e2b0: PUSH EBX
//   Label: core_motion.cpp_CMotionController_frameToMarkerPosition_FUN_0052e2b0
// 0052e2b1: PUSH ESI
// 0052e2b2: PUSH EDI
// 0052e2b3: PUSH EBP
// 0052e2b4: SUB ESP,0xc
// 0052e2b7: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0052e2bb: IMUL EBX,dword ptr [EDI + 0x4],0x54c
// 0052e2c2: MOV EDX,dword ptr [EDI]
// 0052e2c4: FLD float ptr [EDI + 0x8]
// 0052e2c7: ADD EDX,0x968
// 0052e2cd: FLDZ
// 0052e2cf: ADD EBX,EDX
// 0052e2d1: FCOMPP
// 0052e2d3: FNSTSW AX
// 0052e2d5: SAHF
// 0052e2d6: JNC 0x0052e345
//   XREF to: 0052e345 (CONDITIONAL_JUMP)
// 0052e2d8: FILD dword ptr [EBX + 0x64]
// 0052e2db: FCOMP float ptr [EDI + 0x8]
// 0052e2de: FNSTSW AX
// 0052e2e0: SAHF
// 0052e2e1: JBE 0x0052e34c
//   XREF to: 0052e34c (CONDITIONAL_JUMP)
// 0052e2e3: MOV EBP,dword ptr [EBX + 0x520]
// 0052e2e9: XOR ECX,ECX
// 0052e2eb: XOR ESI,ESI
// 0052e2ed: TEST EBP,EBP
// 0052e2ef: JLE 0x0052e315
//   XREF to: 0052e315 (CONDITIONAL_JUMP)
// 0052e2f1: MOV EDX,EBX
// 0052e2f3: FILD dword ptr [EDX + 0x524]
//   Label: LAB_0052e2f3
// 0052e2f9: FCOMP float ptr [EDI + 0x8]
// 0052e2fc: FNSTSW AX
// 0052e2fe: SAHF
// 0052e2ff: JA 0x0052e35d
//   XREF to: 0052e35d (CONDITIONAL_JUMP)
// 0052e301: ADD EDX,0x4
// 0052e304: INC ECX
// 0052e305: MOV EBP,dword ptr [EBX + 0x520]
// 0052e30b: MOV ESI,dword ptr [EDX + 0x520]
// 0052e311: CMP ECX,EBP
// 0052e313: JL 0x0052e2f3
//   XREF to: 0052e2f3 (CONDITIONAL_JUMP)
// 0052e315: MOV dword ptr [ESP + 0x4],ESI
//   Label: LAB_0052e315
//   XREF to: Stack[-0x18] (WRITE)
// 0052e319: MOV EDX,dword ptr [EBX + 0x64]
// 0052e31c: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 0052e320: SUB EDX,ESI
// 0052e322: FSUBR float ptr [EDI + 0x8]
// 0052e325: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0052e329: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 0052e32d: FDIVP
// 0052e32f: FILD dword ptr [EBX + 0x520]
// 0052e335: FADDP
// 0052e337: FSTP float ptr [ESP]
//   Label: LAB_0052e337
//   XREF to: Stack[-0x1c] (DATA)
// 0052e33a: MOV EAX,dword ptr [ESP]
//   Label: LAB_0052e33a
//   XREF to: Stack[-0x1c] (DATA)
// 0052e33d: ADD ESP,0xc
// 0052e340: POP EBP
// 0052e341: POP EDI
// 0052e342: POP ESI
// 0052e343: POP EBX
// 0052e344: RET
// 0052e345: XOR EAX,EAX
//   Label: LAB_0052e345
// 0052e347: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1c] (DATA)
// 0052e34a: JMP 0x0052e33a
//   XREF to: 0052e33a (UNCONDITIONAL_JUMP)
// 0052e34c: MOV EDX,dword ptr [EBX + 0x520]
//   Label: LAB_0052e34c
// 0052e352: INC EDX
// 0052e353: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0052e357: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 0052e35b: JMP 0x0052e337
//   XREF to: 0052e337 (UNCONDITIONAL_JUMP)
// 0052e35d: MOV EDX,dword ptr [EDX + 0x524]
//   Label: LAB_0052e35d
// 0052e363: SUB EDX,ESI
// 0052e365: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0052e369: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0052e36d: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 0052e371: FILD dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 0052e375: FSUBR float ptr [EDI + 0x8]
// 0052e378: FDIVRP
// 0052e37a: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0052e37e: FILD dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 0052e382: FADDP
// 0052e384: FSTP float ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 0052e387: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 0052e38a: ADD ESP,0xc
// 0052e38d: POP EBP
// 0052e38e: POP EDI
// 0052e38f: POP ESI
// 0052e390: POP EBX
// 0052e391: RET
