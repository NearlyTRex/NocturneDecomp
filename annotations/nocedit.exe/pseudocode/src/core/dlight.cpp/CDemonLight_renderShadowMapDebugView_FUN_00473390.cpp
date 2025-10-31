// Name: core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
// Address: 00473390
// Address Range: [[00473390, 004735b8]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390(CDemonLight * this_ptr, int screen_x, int screen_y, int display_size)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056d190 (0056d190) at 0056d1c6 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 (0057ae50) at 0057b09c [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057c687 [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CGame* g_CGamePtr = 02d81a9c
//   void*[1024] g_ScreenBufferArray
//   CGame g_CGameInstance
//   undefined4 DAT_02d81c80
// Function calls:
//   engine_2d.c_drawTextCenteredXYColor_FUN_00402700

#include "nocturne.h"

void __cdecl
core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
          (CDemonLight *this_ptr,int screen_x,int screen_y,int display_size)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_24;
  uint local_14;
  
  if ((-1 < screen_x) && (-1 < screen_y)) {
    if ((screen_x + display_size <= g_WindowWidth) && (screen_y + display_size <= g_WindowHeight)) {
      iVar1 = (this_ptr->shadow_map_width << 8) / display_size;
      local_14 = 0x20000;
      uVar4 = 0;
      for (local_24 = 0; local_24 < this_ptr->shadow_map_height * 0x100; local_24 = local_24 + iVar1
          ) {
        iVar5 = 0;
        while (iVar5 < this_ptr->shadow_map_width * 0x100) {
          uVar2 = (uint)this_ptr->shadow_depth_buffer
                        [((int)((iVar5 + (iVar5 >> 0x1f) * -0x100) -
                               (uint)((iVar5 >> 0x1f) << 7 < 0)) >> 8) +
                         ((int)((local_24 + (local_24 >> 0x1f) * -0x100) -
                               (uint)((local_24 >> 0x1f) << 7 < 0)) >> 8) *
                         this_ptr->shadow_map_width];
          if ((uVar2 == 0) || (0xfffe < uVar2)) {
LAB_004734b7:
            iVar5 = iVar5 + iVar1;
          }
          else {
            if (uVar2 < local_14) {
              local_14 = uVar2;
            }
            if (uVar2 <= uVar4) goto LAB_004734b7;
            iVar5 = iVar5 + iVar1;
            uVar4 = uVar2;
          }
        }
      }
      if (uVar4 == local_14) {
        uVar4 = local_14 + 1;
      }
      for (iVar5 = 0; iVar5 < this_ptr->shadow_map_height * 0x100; iVar5 = iVar5 + iVar1) {
        for (iVar3 = 0; iVar3 < this_ptr->shadow_map_width * 0x100; iVar3 = iVar3 + iVar1) {
          uVar2 = (uint)this_ptr->shadow_depth_buffer
                        [((int)((iVar3 + (iVar3 >> 0x1f) * -0x100) -
                               (uint)((iVar3 >> 0x1f) << 7 < 0)) >> 8) +
                         ((int)((iVar5 + (iVar5 >> 0x1f) * -0x100) -
                               (uint)((iVar5 >> 0x1f) << 7 < 0)) >> 8) * this_ptr->shadow_map_width]
          ;
          if ((uVar2 < 0xffff) && (uVar2 != 0)) {
            *(int *)((screen_x + iVar3 / iVar1) * 4 +
                    (int)g_ScreenBufferArray[screen_y + iVar5 / iVar1]) =
                 ((int)((uVar2 - local_14) * 0xff) / (int)(uVar4 - local_14)) * 0x10101;
          }
        }
      }
      if (g_CGamePtr->camera_debug_enabled != 0) {
        engine_2d_c_drawTextCenteredXYColor_FUN_00402700
                  (screen_x,screen_x + display_size,screen_y + display_size + -0xb,
                   (this_ptr->base).camera_name);
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 00473390: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
// 00473391: PUSH ESI
// 00473392: PUSH EDI
// 00473393: PUSH EBP
// 00473394: SUB ESP,0x1c
// 00473397: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0047339b: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 0047339f: TEST EDX,EDX
// 004733a1: JL 0x00473583
//   XREF to: 00473583 (CONDITIONAL_JUMP)
// 004733a7: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 004733ab: TEST ECX,ECX
// 004733ad: JL 0x00473583
//   XREF to: 00473583 (CONDITIONAL_JUMP)
// 004733b3: MOV ESI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x10] (READ)
// 004733b7: MOV EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 004733bd: LEA EAX,[EDX + ESI*0x1]
// 004733c0: CMP EAX,EDI
// 004733c2: JG 0x00473583
//   XREF to: 00473583 (CONDITIONAL_JUMP)
// 004733c8: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004733ce: LEA EAX,[ECX + ESI*0x1]
// 004733d1: CMP EAX,EDX
// 004733d3: JG 0x00473583
//   XREF to: 00473583 (CONDITIONAL_JUMP)
// 004733d9: MOV EDX,dword ptr [EBX + 0x1cc0]
// 004733df: SHL EDX,0x8
// 004733e2: MOV EAX,EDX
// 004733e4: SAR EDX,0x1f
// 004733e7: IDIV ESI
// 004733e9: MOV dword ptr [ESP + 0x18],0x20000
//   XREF to: Stack[-0x14] (WRITE)
// 004733f1: XOR ESI,ESI
// 004733f3: MOV EBP,EAX
// 004733f5: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 004733f9: MOV EAX,dword ptr [EBX + 0x1cc4]
//   Label: LAB_004733f9
// 004733ff: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 00473403: SHL EAX,0x8
// 00473406: CMP EAX,EDX
// 00473408: JG 0x00473461
//   XREF to: 00473461 (CONDITIONAL_JUMP)
// 0047340a: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 0047340e: CMP ESI,ECX
// 00473410: JZ 0x004734cf
//   XREF to: 004734cf (CONDITIONAL_JUMP)
// 00473416: SUB ESI,dword ptr [ESP + 0x18]
//   Label: LAB_00473416
//   XREF to: Stack[-0x14] (READ)
// 0047341a: XOR EDI,EDI
// 0047341c: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00473420: MOV EAX,dword ptr [EBX + 0x1cc4]
//   Label: LAB_00473420
// 00473426: SHL EAX,0x8
// 00473429: CMP EDI,EAX
// 0047342b: JGE 0x00473575
//   XREF to: 00473575 (CONDITIONAL_JUMP)
// 00473431: MOV EDX,EDI
// 00473433: MOV EAX,EDI
// 00473435: SAR EDX,0x1f
// 00473438: SHL EDX,0x8
// 0047343b: SBB EAX,EDX
// 0047343d: SAR EAX,0x8
// 00473440: XOR ECX,ECX
// 00473442: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00473446: MOV EAX,dword ptr [EBX + 0x1cc0]
//   Label: LAB_00473446
// 0047344c: SHL EAX,0x8
// 0047344f: CMP ECX,EAX
// 00473451: JL 0x004734d7
//   XREF to: 004734d7 (CONDITIONAL_JUMP)
// 00473457: ADD EDI,EBP
// 00473459: JMP 0x00473420
//   XREF to: 00473420 (UNCONDITIONAL_JUMP)
// 0047345b: ADD dword ptr [ESP + 0x8],EBP
//   Label: LAB_0047345b
//   XREF to: Stack[-0x24] (READ_WRITE)
// 0047345f: JMP 0x004733f9
//   XREF to: 004733f9 (UNCONDITIONAL_JUMP)
// 00473461: MOV EAX,EDX
//   Label: LAB_00473461
// 00473463: SAR EDX,0x1f
// 00473466: SHL EDX,0x8
// 00473469: SBB EAX,EDX
// 0047346b: SAR EAX,0x8
// 0047346e: XOR ECX,ECX
// 00473470: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00473474: MOV EAX,dword ptr [EBX + 0x1cc0]
//   Label: LAB_00473474
// 0047347a: SHL EAX,0x8
// 0047347d: CMP ECX,EAX
// 0047347f: JGE 0x0047345b
//   XREF to: 0047345b (CONDITIONAL_JUMP)
// 00473481: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 00473485: IMUL EDI,dword ptr [EBX + 0x1cc0]
// 0047348c: MOV EDX,ECX
// 0047348e: SAR EDX,0x1f
// 00473491: MOV EAX,ECX
// 00473493: SHL EDX,0x8
// 00473496: SBB EAX,EDX
// 00473498: SAR EAX,0x8
// 0047349b: MOV EDX,dword ptr [EBX + 0x2f94]
// 004734a1: ADD EAX,EDI
// 004734a3: MOV AX,word ptr [EDX + EAX*0x2]
// 004734a7: AND EAX,0xffff
// 004734ac: TEST EAX,EAX
// 004734ae: JLE 0x004734b7
//   XREF to: 004734b7 (CONDITIONAL_JUMP)
// 004734b0: CMP EAX,0xffff
// 004734b5: JL 0x004734bb
//   XREF to: 004734bb (CONDITIONAL_JUMP)
// 004734b7: ADD ECX,EBP
//   Label: LAB_004734b7
// 004734b9: JMP 0x00473474
//   XREF to: 00473474 (UNCONDITIONAL_JUMP)
// 004734bb: CMP EAX,dword ptr [ESP + 0x18]
//   Label: LAB_004734bb
//   XREF to: Stack[-0x14] (READ)
// 004734bf: JGE 0x004734c5
//   XREF to: 004734c5 (CONDITIONAL_JUMP)
// 004734c1: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004734c5: CMP EAX,ESI
//   Label: LAB_004734c5
// 004734c7: JLE 0x004734b7
//   XREF to: 004734b7 (CONDITIONAL_JUMP)
// 004734c9: MOV ESI,EAX
// 004734cb: ADD ECX,EBP
// 004734cd: JMP 0x00473474
//   XREF to: 00473474 (UNCONDITIONAL_JUMP)
// 004734cf: LEA ESI,[ECX + 0x1]
//   Label: LAB_004734cf
// 004734d2: JMP 0x00473416
//   XREF to: 00473416 (UNCONDITIONAL_JUMP)
// 004734d7: MOV ESI,dword ptr [ESP + 0x10]
//   Label: LAB_004734d7
//   XREF to: Stack[-0x1c] (READ)
// 004734db: IMUL ESI,dword ptr [EBX + 0x1cc0]
// 004734e2: MOV EDX,ECX
// 004734e4: SAR EDX,0x1f
// 004734e7: MOV EAX,ECX
// 004734e9: SHL EDX,0x8
// 004734ec: SBB EAX,EDX
// 004734ee: SAR EAX,0x8
// 004734f1: ADD EAX,ESI
// 004734f3: LEA EDX,[EAX + EAX*0x1]
// 004734f6: MOV EAX,dword ptr [EBX + 0x2f94]
// 004734fc: MOV AX,word ptr [EDX + EAX*0x1]
// 00473500: AND EAX,0xffff
// 00473505: CMP EAX,0xffff
// 0047350a: JGE 0x0047356e
//   XREF to: 0047356e (CONDITIONAL_JUMP)
// 0047350c: TEST EAX,EAX
// 0047350e: JLE 0x0047356e
//   XREF to: 0047356e (CONDITIONAL_JUMP)
// 00473510: SUB EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 00473514: IMUL EDX,EAX,0xff
// 0047351a: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 0047351e: MOV EAX,EDX
// 00473520: SAR EDX,0x1f
// 00473523: IDIV ESI
// 00473525: MOV ESI,EAX
// 00473527: MOV EDX,EDI
// 00473529: MOV EAX,EDI
// 0047352b: SAR EDX,0x1f
// 0047352e: IDIV EBP
// 00473530: MOV EDX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 00473534: ADD EDX,EAX
// 00473536: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x2c] (DATA)
// 00473539: MOV EDX,ECX
// 0047353b: MOV EAX,ECX
// 0047353d: SAR EDX,0x1f
// 00473540: IDIV EBP
// 00473542: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x8] (READ)
// 00473546: ADD EDX,EAX
// 00473548: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x2c] (DATA)
// 0047354b: SHL EDX,0x2
// 0047354e: MOV EAX,dword ptr [EAX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00473555: ADD EDX,EAX
// 00473557: MOV EAX,ESI
// 00473559: SHL EAX,0x8
// 0047355c: ADD EAX,ESI
// 0047355e: SHL ESI,0x10
// 00473561: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 00473565: LEA EDX,[ESI + EAX*0x1]
// 00473568: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x28] (READ)
// 0047356c: MOV dword ptr [EAX],EDX
// 0047356e: ADD ECX,EBP
//   Label: LAB_0047356e
// 00473570: JMP 0x00473446
//   XREF to: 00473446 (UNCONDITIONAL_JUMP)
// 00473575: MOV EAX,[0x0067b654]
//   Label: LAB_00473575
//   XREF to: 02d81a9c (DATA)
//   XREF to: 0067b654 (READ)
// 0047357a: CMP dword ptr [EAX + 0x1e4],0x0
//   XREF to: 02d81c80 (READ)
// 00473581: JNZ 0x0047358b
//   XREF to: 0047358b (CONDITIONAL_JUMP)
// 00473583: ADD ESP,0x1c
//   Label: LAB_00473583
// 00473586: POP EBP
//   Label: LAB_00473586
// 00473587: POP EDI
// 00473588: POP ESI
// 00473589: POP EBX
// 0047358a: RET
// 0047358b: ADD EBX,0x40
//   Label: LAB_0047358b
// 0047358e: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0xc] (READ)
// 00473592: PUSH EBX
// 00473593: MOV EBX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x10] (READ)
// 00473597: ADD EAX,EBX
// 00473599: SUB EAX,0xb
// 0047359c: PUSH EAX
// 0047359d: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 004735a1: ADD EAX,EBX
// 004735a3: PUSH EAX
// 004735a4: MOV EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 004735a8: PUSH EDI
// 004735a9: CALL engine_2d.c_drawTextCenteredXYColor_FUN_00402700
//   XREF to: 00402700 (UNCONDITIONAL_CALL)
// 004735ae: ADD ESP,0x10
// 004735b1: ADD ESP,0x1c
// 004735b4: POP EBP
// 004735b5: POP EDI
// 004735b6: POP ESI
// 004735b7: POP EBX
// 004735b8: RET
