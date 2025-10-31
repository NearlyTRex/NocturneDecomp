// Name: core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80
// Address: 00472f80
// Address Range: [[00472f80, 0047326c]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80(CDemonLight * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c6d7 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 (0056ae50) at 0056aee9 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dlight_cpp_0061f0db
//   TerminatedCString s_CDemonLight_blitZBuffer__0061f0ee
//   int g_DirtySpanCount
//   int[256] g_DirtySpanStarts
//   undefined4 DAT_026a6adc
//   int[256] g_DirtySpanEnds
//   undefined4 DAT_026a6edc
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dlight.cpp_CDemonLight_blitZBuffer_FUN_00472c70
//   core_dstrender.cpp_memcpyMMX_FUN_00492001
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80(CDemonLight *this_ptr)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  CRect *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((this_ptr->base).skip_clear_buffer_flag != 0) {
    if (0x100 < (this_ptr->base).rect_array_count) {
      core_dlight_cpp_CDemonLight_blitZBuffer_FUN_00472c70(this_ptr,(CRect *)&stack0xffffffcc);
      (this_ptr->base).rect_array_count = 0;
      return;
    }
    if (this_ptr->restore_memory_size == 0) {
      g_CurrentFilename = "..\\core\\dlight.cpp";
      g_CurrentLineNumber = 0x202;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonLight::blitZBuffer - No master Z buffer");
    }
    iVar7 = 0;
    if (0 < (this_ptr->base).rect_array_count) {
      pCVar4 = (this_ptr->base).rect_array;
      do {
        if (pCVar4->left < 0) {
          pCVar4->left = 0;
        }
        iVar8 = this_ptr->shadow_map_width + -1;
        if (iVar8 < pCVar4->top) {
          pCVar4->top = iVar8;
        }
        if (pCVar4->right < 0) {
          pCVar4->right = 0;
        }
        iVar8 = this_ptr->shadow_map_height + -1;
        if (iVar8 < pCVar4->bottom) {
          pCVar4->bottom = iVar8;
        }
        iVar7 = iVar7 + 1;
        pCVar4 = pCVar4 + 1;
      } while (iVar7 < (this_ptr->base).rect_array_count);
    }
    local_14 = this_ptr->shadow_map_height;
    iVar7 = 0;
    local_1c = 0;
    if (0 < (this_ptr->base).rect_array_count) {
      pCVar4 = (this_ptr->base).rect_array;
      do {
        if (pCVar4->right < local_14) {
          local_14 = pCVar4->right;
        }
        if (local_1c < pCVar4->bottom) {
          local_1c = pCVar4->bottom;
        }
        iVar7 = iVar7 + 1;
        pCVar4 = pCVar4 + 1;
      } while (iVar7 < (this_ptr->base).rect_array_count);
    }
    if (local_14 <= local_1c) {
      do {
        local_18 = 0;
        g_DirtySpanCount = 0;
        if (0 < (this_ptr->base).rect_array_count) {
          iVar7 = 0;
          pCVar4 = (this_ptr->base).rect_array;
          do {
            iVar8 = g_DirtySpanCount;
            if ((pCVar4->right <= local_14) && (local_14 <= pCVar4->bottom)) {
              bVar3 = false;
              if (0 < g_DirtySpanCount) {
                iVar6 = g_DirtySpanCount * 4;
                iVar5 = 0;
                do {
                  if ((*(int *)((int)g_DirtySpanStarts + iVar5) <= pCVar4->top) &&
                     (pCVar4->left <= *(int *)((int)g_DirtySpanEnds + iVar5))) {
                    if ((*(int *)((int)g_DirtySpanStarts + iVar5) <= pCVar4->left) &&
                       (pCVar4->top <= *(int *)((int)g_DirtySpanEnds + iVar5))) goto LAB_004730f9;
                    if (pCVar4->left < *(int *)((int)g_DirtySpanStarts + iVar5)) {
                      bVar3 = true;
                      *(int *)((int)g_DirtySpanStarts + iVar5) = pCVar4->left;
                    }
                    if (*(int *)((int)g_DirtySpanEnds + iVar5) < pCVar4->top) {
                      *(int *)((int)g_DirtySpanEnds + iVar5) = pCVar4->top;
                      goto LAB_004730f9;
                    }
                    if (bVar3) break;
                  }
                  iVar5 = iVar5 + 4;
                } while (SBORROW4(iVar5,iVar6) != iVar5 + iVar8 * -4 < 0);
              }
              if (!bVar3) {
                *(int *)((int)g_DirtySpanStarts + iVar7) = pCVar4->left;
                *(int *)((int)g_DirtySpanEnds + iVar7) = pCVar4->top;
                g_DirtySpanCount = g_DirtySpanCount + 1;
                iVar7 = iVar7 + 4;
              }
            }
LAB_004730f9:
            pCVar4 = pCVar4 + 1;
            local_18 = local_18 + 1;
          } while (local_18 < (this_ptr->base).rect_array_count);
        }
        iVar7 = 0;
        if (0 < g_DirtySpanCount) {
          iVar8 = 0;
          do {
            piVar1 = (int *)((int)g_DirtySpanStarts + iVar8);
            iVar6 = local_14 * this_ptr->shadow_map_width + *(int *)((int)g_DirtySpanStarts + iVar8)
            ;
            piVar2 = (int *)((int)g_DirtySpanEnds + iVar8);
            iVar8 = iVar8 + 4;
            iVar7 = iVar7 + 1;
            core_dstrender_cpp_memcpyMMX_FUN_00492001
                      (this_ptr->shadow_depth_buffer + iVar6,
                       (void *)(this_ptr->restore_memory_size + iVar6 * 2),
                       (*piVar2 - *piVar1) * 2 + 2);
          } while (iVar7 < g_DirtySpanCount);
        }
        local_14 = local_14 + 1;
      } while (local_14 <= local_1c);
    }
  }
  (this_ptr->base).rect_array_count = 0;
  return;
}


// Assembly code:
// 00472f80: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_00472f80
// 00472f81: PUSH ESI
// 00472f82: PUSH EDI
// 00472f83: PUSH EBP
// 00472f84: SUB ESP,0x24
// 00472f87: MOV EBP,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 00472f8b: CMP dword ptr [EBP + 0x168],0x0
// 00472f92: JZ 0x00473182
//   XREF to: 00473182 (CONDITIONAL_JUMP)
// 00472f98: CMP dword ptr [EBP + 0x1d0],0x100
// 00472fa2: JG 0x00473194
//   XREF to: 00473194 (CONDITIONAL_JUMP)
// 00472fa8: CMP dword ptr [EBP + 0x2f9c],0x0
// 00472faf: JZ 0x004731d1
//   XREF to: 004731d1 (CONDITIONAL_JUMP)
// 00472fb5: MOV EAX,dword ptr [EBP + 0x1d0]
//   Label: LAB_00472fb5
// 00472fbb: XOR ECX,ECX
// 00472fbd: TEST EAX,EAX
// 00472fbf: JLE 0x0047300d
//   XREF to: 0047300d (CONDITIONAL_JUMP)
// 00472fc1: LEA EDX,[EBP + 0x1d4]
// 00472fc7: MOV EBX,dword ptr [EDX]
//   Label: LAB_00472fc7
// 00472fc9: MOV EAX,EDX
// 00472fcb: TEST EBX,EBX
// 00472fcd: JL 0x004731f9
//   XREF to: 004731f9 (CONDITIONAL_JUMP)
// 00472fd3: MOV EBX,dword ptr [EBP + 0x1cc0]
//   Label: LAB_00472fd3
// 00472fd9: MOV ESI,dword ptr [EAX + 0x4]
// 00472fdc: DEC EBX
// 00472fdd: CMP EBX,ESI
// 00472fdf: JGE 0x00472fe4
//   XREF to: 00472fe4 (CONDITIONAL_JUMP)
// 00472fe1: MOV dword ptr [EAX + 0x4],EBX
// 00472fe4: CMP dword ptr [EAX + 0x8],0x0
//   Label: LAB_00472fe4
// 00472fe8: JL 0x00473204
//   XREF to: 00473204 (CONDITIONAL_JUMP)
// 00472fee: MOV EBX,dword ptr [EBP + 0x1cc4]
//   Label: LAB_00472fee
// 00472ff4: MOV ESI,dword ptr [EAX + 0xc]
// 00472ff7: DEC EBX
// 00472ff8: CMP EBX,ESI
// 00472ffa: JGE 0x00472fff
//   XREF to: 00472fff (CONDITIONAL_JUMP)
// 00472ffc: MOV dword ptr [EAX + 0xc],EBX
// 00472fff: INC ECX
//   Label: LAB_00472fff
// 00473000: MOV EBX,dword ptr [EBP + 0x1d0]
// 00473006: ADD EDX,0x10
// 00473009: CMP ECX,EBX
// 0047300b: JL 0x00472fc7
//   XREF to: 00472fc7 (CONDITIONAL_JUMP)
// 0047300d: MOV EDI,dword ptr [EBP + 0x1d0]
//   Label: LAB_0047300d
// 00473013: MOV EBX,dword ptr [EBP + 0x1cc4]
// 00473019: XOR ESI,ESI
// 0047301b: XOR EDX,EDX
// 0047301d: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00473021: TEST EDI,EDI
// 00473023: JLE 0x00473053
//   XREF to: 00473053 (CONDITIONAL_JUMP)
// 00473025: LEA EAX,[EBP + 0x1d4]
// 0047302b: MOV ESI,dword ptr [EAX + 0x8]
//   Label: LAB_0047302b
// 0047302e: MOV ECX,EAX
// 00473030: CMP EBX,ESI
// 00473032: JLE 0x00473036
//   XREF to: 00473036 (CONDITIONAL_JUMP)
// 00473034: MOV EBX,ESI
// 00473036: MOV EDI,dword ptr [ESP + 0x14]
//   Label: LAB_00473036
//   XREF to: Stack[-0x20] (READ)
// 0047303a: MOV ESI,dword ptr [ECX + 0xc]
// 0047303d: CMP ESI,EDI
// 0047303f: JLE 0x00473045
//   XREF to: 00473045 (CONDITIONAL_JUMP)
// 00473041: MOV dword ptr [ESP + 0x14],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00473045: INC EDX
//   Label: LAB_00473045
// 00473046: MOV EDI,dword ptr [EBP + 0x1d0]
// 0047304c: ADD EAX,0x10
// 0047304f: CMP EDX,EDI
// 00473051: JL 0x0047302b
//   XREF to: 0047302b (CONDITIONAL_JUMP)
// 00473053: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_00473053
//   XREF to: Stack[-0x20] (READ)
// 00473057: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 0047305b: CMP EBX,EAX
// 0047305d: JG 0x00473182
//   XREF to: 00473182 (CONDITIONAL_JUMP)
// 00473063: LEA EAX,[EBP + 0x1d4]
// 00473069: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0047306d: XOR ECX,ECX
//   Label: LAB_0047306d
// 0047306f: MOV ESI,dword ptr [EBP + 0x1d0]
// 00473075: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00473079: MOV dword ptr [0x026a6ad4],ECX
//   XREF to: 026a6ad4 (WRITE)
// 0047307f: TEST ESI,ESI
// 00473081: JLE 0x0047310f
//   XREF to: 0047310f (CONDITIONAL_JUMP)
// 00473087: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x24] (READ)
// 0047308b: MOV dword ptr [ESP + 0x20],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0047308f: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0047308f
//   XREF to: Stack[-0x18] (READ)
// 00473093: MOV ESI,dword ptr [EDI + 0x8]
// 00473096: MOV EDX,EDI
// 00473098: CMP EAX,ESI
// 0047309a: JL 0x004730f9
//   XREF to: 004730f9 (CONDITIONAL_JUMP)
// 0047309c: CMP EAX,dword ptr [EDI + 0xc]
// 0047309f: JG 0x004730f9
//   XREF to: 004730f9 (CONDITIONAL_JUMP)
// 004730a1: MOV EBX,dword ptr [0x026a6ad4]
//   XREF to: 026a6ad4 (READ)
// 004730a7: XOR ECX,ECX
// 004730a9: TEST EBX,EBX
// 004730ab: JLE 0x004730cc
//   XREF to: 004730cc (CONDITIONAL_JUMP)
// 004730ad: LEA ESI,[EBX*0x4 + 0x0]
// 004730b4: XOR EAX,EAX
// 004730b6: MOV EBX,dword ptr [EDX + 0x4]
//   Label: LAB_004730b6
// 004730b9: CMP EBX,dword ptr [EAX + 0x26a6ad8]
//   XREF to: 026a6ad8 (READ)
//   XREF to: 026a6adc (READ)
// 004730bf: JGE 0x00473210
//   XREF to: 00473210 (CONDITIONAL_JUMP)
// 004730c5: ADD EAX,0x4
//   Label: LAB_004730c5
// 004730c8: CMP EAX,ESI
// 004730ca: JL 0x004730b6
//   XREF to: 004730b6 (CONDITIONAL_JUMP)
// 004730cc: TEST ECX,ECX
//   Label: LAB_004730cc
// 004730ce: JNZ 0x004730f9
//   XREF to: 004730f9 (CONDITIONAL_JUMP)
// 004730d0: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 004730d4: MOV EAX,dword ptr [EDX]
// 004730d6: MOV dword ptr [ECX + 0x26a6ad8],EAX
//   XREF to: 026a6ad8 (DATA)
//   XREF to: 026a6adc (DATA)
// 004730dc: MOV EAX,dword ptr [EDX + 0x4]
// 004730df: LEA EDX,[ECX + 0x4]
// 004730e2: MOV dword ptr [ECX + 0x26a6ed8],EAX
//   XREF to: 026a6ed8 (DATA)
//   XREF to: 026a6edc (DATA)
// 004730e8: MOV ECX,dword ptr [0x026a6ad4]
//   XREF to: 026a6ad4 (READ)
// 004730ee: INC ECX
// 004730ef: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004730f3: MOV dword ptr [0x026a6ad4],ECX
//   XREF to: 026a6ad4 (WRITE)
// 004730f9: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_004730f9
//   XREF to: Stack[-0x1c] (READ)
// 004730fd: ADD EDI,0x10
// 00473100: INC EAX
// 00473101: MOV EDX,dword ptr [EBP + 0x1d0]
// 00473107: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0047310b: CMP EAX,EDX
// 0047310d: JL 0x0047308f
//   XREF to: 0047308f (CONDITIONAL_JUMP)
// 0047310f: MOV ECX,dword ptr [0x026a6ad4]
//   Label: LAB_0047310f
//   XREF to: 026a6ad4 (READ)
// 00473115: XOR EDI,EDI
// 00473117: TEST ECX,ECX
// 00473119: JLE 0x0047316d
//   XREF to: 0047316d (CONDITIONAL_JUMP)
// 0047311b: XOR ESI,ESI
// 0047311d: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0047311d
//   XREF to: Stack[-0x18] (READ)
// 00473121: IMUL EAX,dword ptr [EBP + 0x1cc0]
// 00473128: MOV ECX,dword ptr [ESI + 0x26a6ad8]
//   XREF to: 026a6ad8 (READ)
//   XREF to: 026a6adc (READ)
// 0047312e: MOV EBX,dword ptr [ESI + 0x26a6ad8]
//   XREF to: 026a6ad8 (READ)
//   XREF to: 026a6adc (READ)
// 00473134: ADD EAX,ECX
// 00473136: MOV EDX,dword ptr [EBP + 0x2f94]
// 0047313c: ADD EAX,EAX
// 0047313e: MOV ECX,dword ptr [EBP + 0x2f9c]
// 00473144: ADD EDX,EAX
// 00473146: ADD ECX,EAX
// 00473148: MOV EAX,dword ptr [ESI + 0x26a6ed8]
//   XREF to: 026a6ed8 (READ)
//   XREF to: 026a6edc (READ)
// 0047314e: SUB EAX,EBX
// 00473150: ADD EAX,EAX
// 00473152: ADD EAX,0x2
// 00473155: PUSH EAX
// 00473156: PUSH ECX
// 00473157: PUSH EDX
// 00473158: ADD ESI,0x4
// 0047315b: INC EDI
// 0047315c: CALL core_dstrender.cpp_memcpyMMX_FUN_00492001
//   XREF to: 00492001 (UNCONDITIONAL_CALL)
// 00473161: MOV EAX,[0x026a6ad4]
//   XREF to: 026a6ad4 (READ)
// 00473166: ADD ESP,0xc
// 00473169: CMP EDI,EAX
// 0047316b: JL 0x0047311d
//   XREF to: 0047311d (CONDITIONAL_JUMP)
// 0047316d: MOV EAX,dword ptr [ESP + 0x1c]
//   Label: LAB_0047316d
//   XREF to: Stack[-0x18] (READ)
// 00473171: INC EAX
// 00473172: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x20] (READ)
// 00473176: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0047317a: CMP EAX,EDX
// 0047317c: JLE 0x0047306d
//   XREF to: 0047306d (CONDITIONAL_JUMP)
// 00473182: MOV dword ptr [EBP + 0x1d0],0x0
//   Label: LAB_00473182
// 0047318c: ADD ESP,0x24
// 0047318f: POP EBP
// 00473190: POP EDI
// 00473191: POP ESI
// 00473192: POP EBX
// 00473193: RET
// 00473194: XOR EDX,EDX
//   Label: LAB_00473194
// 00473196: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x34] (DATA)
// 00473199: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 0047319d: MOV EAX,dword ptr [EBP + 0x1cc0]
// 004731a3: DEC EAX
// 004731a4: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004731a8: MOV EAX,dword ptr [EBP + 0x1cc4]
// 004731ae: DEC EAX
// 004731af: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004731b3: MOV EAX,ESP
// 004731b5: PUSH EAX
// 004731b6: PUSH EBP
// 004731b7: CALL core_dlight.cpp_CDemonLight_blitZBuffer_FUN_00472c70
//   XREF to: 00472c70 (UNCONDITIONAL_CALL)
// 004731bc: ADD ESP,0x8
// 004731bf: MOV dword ptr [EBP + 0x1d0],0x0
// 004731c9: ADD ESP,0x24
// 004731cc: POP EBP
// 004731cd: POP EDI
// 004731ce: POP ESI
// 004731cf: POP EBX
// 004731d0: RET
// 004731d1: MOV ESI,0x61f0db
//   Label: LAB_004731d1
//   XREF to: 0061f0db (DATA)
// 004731d6: MOV EDI,0x202
// 004731db: PUSH 0x61f0ee
//   XREF to: 0061f0ee (DATA)
// 004731e0: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 004731e6: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004731ec: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004731f1: ADD ESP,0x4
// 004731f4: JMP 0x00472fb5
//   XREF to: 00472fb5 (UNCONDITIONAL_JUMP)
// 004731f9: MOV dword ptr [EDX],0x0
//   Label: LAB_004731f9
// 004731ff: JMP 0x00472fd3
//   XREF to: 00472fd3 (UNCONDITIONAL_JUMP)
// 00473204: MOV dword ptr [EAX + 0x8],0x0
//   Label: LAB_00473204
// 0047320b: JMP 0x00472fee
//   XREF to: 00472fee (UNCONDITIONAL_JUMP)
// 00473210: MOV EBX,dword ptr [EDX]
//   Label: LAB_00473210
// 00473212: CMP EBX,dword ptr [EAX + 0x26a6ed8]
//   XREF to: 026a6edc (READ)
// 00473218: JG 0x004730c5
//   XREF to: 004730c5 (CONDITIONAL_JUMP)
// 0047321e: CMP EBX,dword ptr [EAX + 0x26a6ad8]
//   XREF to: 026a6adc (READ)
// 00473224: JL 0x00473235
//   XREF to: 00473235 (CONDITIONAL_JUMP)
// 00473226: MOV EBX,dword ptr [EDX + 0x4]
// 00473229: CMP EBX,dword ptr [EAX + 0x26a6ed8]
//   XREF to: 026a6edc (READ)
// 0047322f: JLE 0x004730f9
//   XREF to: 004730f9 (CONDITIONAL_JUMP)
// 00473235: MOV EBX,dword ptr [EDX]
//   Label: LAB_00473235
// 00473237: CMP EBX,dword ptr [EAX + 0x26a6ad8]
//   XREF to: 026a6adc (READ)
// 0047323d: JGE 0x0047324a
//   XREF to: 0047324a (CONDITIONAL_JUMP)
// 0047323f: MOV ECX,0x1
// 00473244: MOV dword ptr [EAX + 0x26a6ad8],EBX
//   XREF to: 026a6adc (WRITE)
// 0047324a: MOV EBX,dword ptr [EDX + 0x4]
//   Label: LAB_0047324a
// 0047324d: CMP EBX,dword ptr [EAX + 0x26a6ed8]
//   XREF to: 026a6edc (READ)
// 00473253: JLE 0x00473260
//   XREF to: 00473260 (CONDITIONAL_JUMP)
// 00473255: MOV dword ptr [EAX + 0x26a6ed8],EBX
//   XREF to: 026a6edc (WRITE)
// 0047325b: JMP 0x004730f9
//   XREF to: 004730f9 (UNCONDITIONAL_JUMP)
// 00473260: TEST ECX,ECX
//   Label: LAB_00473260
// 00473262: JNZ 0x004730cc
//   XREF to: 004730cc (CONDITIONAL_JUMP)
// 00473268: JMP 0x004730c5
//   XREF to: 004730c5 (UNCONDITIONAL_JUMP)
