// Name: core_dfilter.cpp_CFilterFX_process_FUN_004708e0
// Address: 004708e0
// Address Range: [[004708e0, 00470970]]
// Convention: __cdecl
// Signature: void core_dfilter.cpp_CFilterFX_process_FUN_004708e0(CFilterFx * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_process_FUN_004e3190 (004e3190) at 004e31f7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_movscrn_raw_0061e84e
//   double g_MovieFrameRateMultiplier = 30
//   CFilterCache* g_CFilterCachePtr = 020a4c08
//   CGame* g_CGamePtr = 02d81a9c
//   CFilterCache g_CFilterCacheInstance
//   undefined4 g_CGameInstance.delta_time_float
// Function calls:
//   core_dfilter.cpp_CFilterCache_findFilter_FUN_004701a0
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl core_dfilter_cpp_CFilterFX_process_FUN_004708e0(CFilterFx *this_ptr)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  CDemonFilter *pCVar4;
  uint extraout_ECX;
  uint uVar5;
  undefined4 extraout_EDX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte bVar8;
  float10 fVar9;
  
  bVar8 = 0;
  pCVar4 = core_dfilter_cpp_CFilterCache_findFilter_FUN_004701a0
                     (g_CFilterCachePtr,"movscrn.raw");
  if ((pCVar4 != (CDemonFilter *)0x0) && (this_ptr->movie_data != (void *)0x0)) {
    piVar1 = &this_ptr->current_frame;
    *piVar1 = (int)(g_CGamePtr->delta_time_float * (float)g_MovieFrameRateMultiplier +
                   (float)*piVar1);
    fVar3 = (float)this_ptr->frame_count;
    fVar2 = (float)this_ptr->current_frame;
    if (fVar3 < fVar2 || (fVar3 == fVar2) != 0) {
      this_ptr->current_frame = 0;
    }
    fVar9 = (float10)(float)this_ptr->current_frame;
    crt_math_c_round_FUN_005fe6b0
              ((double)CONCAT44(extraout_EDX,
                                CONCAT22((short)((uint)piVar1 >> 0x10),
                                         (ushort)(fVar3 < fVar2) << 8 |
                                         (ushort)(NAN(fVar3) || NAN(fVar2)) << 10 |
                                         (ushort)(fVar3 == fVar2) << 0xe)));
    puVar6 = (undefined4 *)((int)this_ptr->movie_data + (int)ROUND(fVar9) * 0x2000);
    puVar7 = (undefined4 *)((int)pCVar4->data_buffer + 0x1000);
    for (uVar5 = extraout_ECX >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
      puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
    }
    for (uVar5 = extraout_ECX & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar8 * -2 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + (uint)bVar8 * -2 + 1);
    }
  }
  return;
}


// Assembly code:
// 004708e0: PUSH EBX
//   Label: core_dfilter.cpp_CFilterFX_process_FUN_004708e0
// 004708e1: PUSH EDI
// 004708e2: SUB ESP,0xc
// 004708e5: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004708e9: PUSH 0x61e84e
//   XREF to: 0061e84e (DATA)
// 004708ee: MOV EDX,dword ptr [0x0066efcc]
//   XREF to: 020a4c08 (PARAM)
//   XREF to: 0066efcc (READ)
// 004708f4: PUSH EDX
//   XREF to: 020a4c08 (DATA)
// 004708f5: CALL core_dfilter.cpp_CFilterCache_findFilter_FUN_004701a0
//   XREF to: 004701a0 (UNCONDITIONAL_CALL)
// 004708fa: ADD ESP,0x8
// 004708fd: MOV EDI,EAX
// 004708ff: TEST EAX,EAX
// 00470901: JZ 0x0047096b
//   XREF to: 0047096b (CONDITIONAL_JUMP)
// 00470903: CMP dword ptr [EBX + 0x4],0x0
// 00470907: JZ 0x0047096b
//   XREF to: 0047096b (CONDITIONAL_JUMP)
// 00470909: PUSH ESI
// 0047090a: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 00470910: FLD float ptr [ESI + 0x264]
//   XREF to: 02d81d00 (READ)
// 00470916: FMUL double ptr [0x0061e85e]
//   XREF to: 0061e85e (READ)
// 0047091c: LEA EAX,[EBX + 0x8]
// 0047091f: FADD float ptr [EAX]
// 00470921: FSTP float ptr [EAX]
// 00470923: FILD dword ptr [EBX]
// 00470925: FCOMP float ptr [EBX + 0x8]
// 00470928: FNSTSW AX
// 0047092a: SAHF
// 0047092b: JA 0x00470934
//   XREF to: 00470934 (CONDITIONAL_JUMP)
// 0047092d: MOV dword ptr [EBX + 0x8],0x0
// 00470934: FLD float ptr [EBX + 0x8]
//   Label: LAB_00470934
// 00470937: MOV ECX,0x2000
// 0047093c: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00470941: MOV EDI,dword ptr [EDI + 0x48]
// 00470944: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xc] (WRITE)
// 00470948: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xc] (READ)
// 0047094c: MOV ESI,dword ptr [EBX + 0x4]
// 0047094f: SHL EAX,0xd
// 00470952: ADD EDI,0x1000
// 00470958: ADD ESI,EAX
// 0047095a: PUSH EDI
// 0047095b: MOV EAX,ECX
// 0047095d: SHR ECX,0x2
// 00470960: MOVSD.REP ES:EDI,ESI
// 00470962: MOV CL,AL
// 00470964: AND CL,0x3
// 00470967: MOVSB.REP ES:EDI,ESI
// 00470969: POP EDI
// 0047096a: POP ESI
// 0047096b: ADD ESP,0xc
//   Label: LAB_0047096b
// 0047096e: POP EDI
// 0047096f: POP EBX
// 00470970: RET
