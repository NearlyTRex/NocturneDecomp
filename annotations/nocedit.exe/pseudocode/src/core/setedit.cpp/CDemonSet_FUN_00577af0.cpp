// Name: core_setedit.cpp_CDemonSet_FUN_00577af0
// Address: 00577af0
// Address Range: [[00577af0, 00578193]]
// Convention: __cdecl
// Signature: int core_setedit.cpp_CDemonSet_FUN_00577af0(CDemonSet * this_ptr)
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053956e [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 (0057ae50) at 0057b0aa [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057ea20 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580a39 [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   WatcomStaticDestructorNode DAT_006816b0
//   int g_MouseX
//   int g_MouseY
//   int g_MouseButtonFlags
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   uchar[32768] g_ColorCubeLookup
//   int g_ActiveRenderColor
//   undefined4 DAT_03364ce0
//   undefined4 DAT_03364ce4
//   undefined4 DAT_03364ce8
//   undefined1 DAT_03364d14
//   undefined4 DAT_03365cc0
//   undefined4 DAT_03365cc4
//   undefined4 DAT_03365dc0
// Function calls:
//   crt_stdlib.c_atexit_FUN_005ff060
//   engine_2d.c_drawRect_FUN_00403120
//   engine_2d.c_drawTextXY_FUN_00402130
//   engine_font.cpp_packPixelNative_FUN_004d1170
//   engine_font.cpp_packPixelScaled_FUN_004d1110
//   shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
//   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
//   shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
//   shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_setedit_cpp_CDemonSet_FUN_00577af0(CDemonSet *this_ptr)

{
  int iVar1;
  CDemonSet *pCVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int x_pos;
  uchar *puVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int *in_stack_00000018;
  int *in_stack_0000001c;
  int local_88;
  int local_80;
  int local_7c;
  int *local_78;
  int *local_74;
  char *local_6c;
  int local_68;
  int local_5c;
  int local_58;
  int local_54;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar7 = -1;
  if (0x1df < g_WindowHeight) {
    iVar7 = 0;
    iVar8 = 0;
    iVar10 = 0;
    pCVar2 = this_ptr;
    if (0 < this_ptr->camera_count) {
      do {
        if (pCVar2->cameras[0].is_panning == 0) {
          iVar10 = iVar10 + 1;
        }
        else {
          iVar7 = iVar7 + 1;
        }
        iVar8 = iVar8 + 1;
        pCVar2 = (CDemonSet *)&pCVar2->cameras[0].field17_0x1a0;
      } while (iVar8 < this_ptr->camera_count);
    }
    if ((DAT_03364d14 & 1) == 0) {
      DAT_03364d14 = DAT_03364d14 | 1;
      shape_edittool_cpp_CEdScrollBar_ctor_FUN_004a5ae0((CEdScrollBar *)&DAT_03364ce0);
      crt_stdlib_c_atexit_FUN_005ff060(&DAT_006816b0);
    }
    shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004a5b60
              ((CEdScrollBar *)&DAT_03364ce0,0,g_WindowHeight + -10,g_WindowWidth + -1,
               g_WindowHeight + -1);
    _DAT_03364ce8 =
         (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -0x40) -
              (uint)((g_WindowWidth >> 0x1f) << 5 < 0)) >> 6;
    _DAT_03364ce4 = (iVar10 + 3) / 4 + ((iVar7 + 3) / 4) * 4;
    shape_edittool_cpp_CEdScrollBar_handleInput_FUN_004a5fc0((CEdScrollBar *)&DAT_03364ce0);
    shape_edittool_cpp_CEdScrollBar_render_FUN_004a5c10((CEdScrollBar *)&DAT_03364ce0);
    local_68 = 0;
    local_58 = 0;
    local_7c = 0;
    do {
      local_5c = 0;
      local_6c = (char *)0x0;
      if (0 < *in_stack_00000018) {
        local_74 = in_stack_00000018;
        local_78 = in_stack_0000001c;
        do {
          if (local_74[0x51] == 0) {
            local_54 = 1;
            if (local_7c != 1) goto LAB_00577d41;
          }
          else {
            local_54 = 4;
            if (local_7c != 0) {
LAB_00577d41:
              iVar7 = local_68 - _DAT_03364ce0;
              if ((0 < iVar7 + local_54) &&
                 (iVar7 < (int)((g_WindowWidth + (g_WindowWidth >> 0x1f) * -0x40) -
                               (uint)((g_WindowWidth >> 0x1f) << 5 < 0)) >> 6)) {
                iVar7 = iVar7 * 0x40;
                g_ActiveRenderColor = 0;
                iVar8 = g_WindowHeight + -10 + (local_80 - local_58) * -0x30;
                if ((in_stack_0000001c != (int *)0x0) && (*local_78 != 0)) {
                  g_ActiveRenderColor = 2;
                }
                if (local_5c == in_stack_00000018[0x56ba9]) {
                  g_ActiveRenderColor = 1;
                }
                x_pos = iVar7 + local_54 * 0x40;
                pcVar12 = local_6c;
                for (iVar10 = iVar7; iVar10 < x_pos; iVar10 = iVar10 + 0x40) {
                  if ((((-1 < iVar10) && (-1 < iVar8)) && (iVar10 + 0x40 <= g_WindowWidth)) &&
                     (iVar8 + 0x30 <= g_WindowHeight)) {
                    iVar3 = (int)pcVar12 * 0x3000;
                    iVar1 = iVar3 + 0x3000;
                    local_18 = iVar8 * 4;
                    local_20 = iVar3 + 0x100;
                    if (g_BitsPerPixel == 8) {
                      do {
                        puVar9 = (uchar *)(*(int *)((int)g_ScreenBufferArray + local_18) + iVar10);
                        iVar11 = iVar3;
                        do {
                          puVar9 = puVar9 + 1;
                          uVar5 = *(uint *)(&DAT_03365cc0 + iVar11);
                          iVar11 = iVar11 + 4;
                          *puVar9 = g_ColorCubeLookup
                                    [((uVar5 & 0xff) >> 3) * 0x400 +
                                     ((uVar5 >> 8 & 0xff) >> 3) * 0x20 +
                                     ((uVar5 >> 0x10 & 0xff) >> 3)];
                        } while (iVar11 != local_20);
                        local_18 = local_18 + 4;
                        iVar3 = iVar3 + 0x100;
                        local_20 = local_20 + 0x100;
                      } while (iVar3 != iVar1);
                    }
                    else if (g_BitsPerPixel == 0x10) {
                      local_14 = local_20;
                      do {
                        puVar4 = (undefined2 *)
                                 (*(int *)((int)g_ScreenBufferArray + local_18) + iVar10 * 2);
                        iVar11 = iVar3;
                        do {
                          puVar4 = puVar4 + 1;
                          uVar5 = *(uint *)(&DAT_03365cc0 + iVar11);
                          iVar11 = iVar11 + 4;
                          uVar5 = engine_font_cpp_packPixelScaled_FUN_004d1110
                                            (uVar5 & 0xff,uVar5 >> 8 & 0xff,uVar5 >> 0x10 & 0xff);
                          *puVar4 = (short)uVar5;
                        } while (iVar11 != local_14);
                        local_18 = local_18 + 4;
                        iVar3 = iVar3 + 0x100;
                        local_14 = local_14 + 0x100;
                      } while (iVar3 != iVar1);
                    }
                    else if (g_BitsPerPixel == 0x20) {
                      local_1c = local_20;
                      do {
                        puVar6 = (uint *)(*(int *)((int)g_ScreenBufferArray + local_18) + iVar10 * 4
                                         );
                        iVar11 = iVar3;
                        do {
                          puVar6 = puVar6 + 1;
                          uVar5 = *(uint *)(&DAT_03365cc0 + iVar11);
                          iVar11 = iVar11 + 4;
                          uVar5 = engine_font_cpp_packPixelNative_FUN_004d1170
                                            (uVar5 & 0xff,uVar5 >> 8 & 0xff,uVar5 >> 0x10 & 0xff);
                          *puVar6 = uVar5;
                        } while (iVar11 != local_1c);
                        local_18 = local_18 + 4;
                        iVar3 = iVar3 + 0x100;
                        local_1c = local_1c + 0x100;
                      } while (iVar3 != iVar1);
                    }
                  }
                  pcVar12 = pcVar12 + 1;
                }
                iVar10 = local_54 * 0x40 + iVar7;
                engine_2d_c_drawRect_FUN_00403120(iVar7,iVar8,iVar10 + -1,iVar8 + 0x2f);
                if (((iVar7 <= g_MouseX) && (g_MouseX < iVar10)) &&
                   ((iVar8 <= g_MouseY && (g_MouseY < iVar8)))) {
                  if (x_pos < 0) {
                    x_pos = 0;
                  }
                  engine_2d_c_drawTextXY_FUN_00402130(x_pos,iVar7,local_6c);
                }
              }
              local_58 = local_58 + 1;
              if (local_80 <= local_58) {
                local_68 = local_68 + local_54;
                local_58 = 0;
              }
            }
          }
          local_74 = local_74 + 0x69;
          local_78 = local_78 + 1;
          local_5c = local_5c + 1;
          local_6c = local_6c + local_54;
        } while (local_5c < *in_stack_00000018);
      }
      if (0 < local_58) {
        local_68 = local_68 + 1;
        local_58 = 0;
      }
      local_7c = local_7c + 1;
    } while (local_7c < 2);
    if ((local_88 < 0) || ((g_MouseButtonFlags & 1U) == 0)) {
      return -1;
    }
    g_MouseButtonFlags = 0;
    iVar7 = local_88;
  }
  return iVar7;
}


// Assembly code:
// 00577af0: PUSH EBX
//   Label: core_setedit.cpp_CDemonSet_FUN_00577af0
// 00577af1: PUSH ESI
// 00577af2: PUSH EDI
// 00577af3: PUSH EBP
// 00577af4: SUB ESP,0x90
// 00577afa: MOV EDX,0xffffffff
// 00577aff: MOV ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00577b05: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x9c] (WRITE)
// 00577b09: CMP ECX,0x1e0
// 00577b0f: JL 0x00577cef
//   XREF to: 00577cef (CONDITIONAL_JUMP)
// 00577b15: MOV EBX,0x4
// 00577b1a: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[0x4] (READ)
// 00577b21: XOR ECX,ECX
// 00577b23: XOR EDX,EDX
// 00577b25: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x94] (WRITE)
// 00577b29: MOV ESI,dword ptr [EAX]
// 00577b2b: XOR EBX,EBX
// 00577b2d: TEST ESI,ESI
// 00577b2f: JLE 0x00577b52
//   XREF to: 00577b52 (CONDITIONAL_JUMP)
// 00577b31: CMP dword ptr [EAX + 0x144],0x0
//   Label: LAB_00577b31
// 00577b38: JZ 0x00577cfc
//   XREF to: 00577cfc (CONDITIONAL_JUMP)
// 00577b3e: INC ECX
// 00577b3f: MOV ESI,dword ptr [ESP + 0xa4]
//   Label: LAB_00577b3f
//   XREF to: Stack[0x4] (READ)
// 00577b46: INC EDX
// 00577b47: MOV EDI,dword ptr [ESI]
// 00577b49: ADD EAX,0x1a4
// 00577b4e: CMP EDX,EDI
// 00577b50: JL 0x00577b31
//   XREF to: 00577b31 (CONDITIONAL_JUMP)
// 00577b52: MOV EDX,dword ptr [ESP + 0xc]
//   Label: LAB_00577b52
//   XREF to: Stack[-0x94] (READ)
// 00577b56: ADD EDX,ECX
// 00577b58: DEC EDX
// 00577b59: MOV EBP,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x94] (READ)
// 00577b5d: MOV EAX,EDX
// 00577b5f: SAR EDX,0x1f
// 00577b62: IDIV EBP
// 00577b64: LEA EDX,[EBX + EBP*0x1]
// 00577b67: LEA ECX,[EAX*0x4 + 0x0]
// 00577b6e: DEC EDX
// 00577b6f: MOV EAX,EDX
// 00577b71: SAR EDX,0x1f
// 00577b74: IDIV EBP
// 00577b76: LEA EBX,[EAX + ECX*0x1]
// 00577b79: MOV AH,byte ptr [0x03364d14]
//   XREF to: 03364d14 (READ)
// 00577b7f: TEST AH,0x1
// 00577b82: JZ 0x00577d02
//   XREF to: 00577d02 (CONDITIONAL_JUMP)
// 00577b88: MOV EAX,[0x00679398]
//   Label: LAB_00577b88
//   XREF to: 00679398 (READ)
// 00577b8d: DEC EAX
// 00577b8e: PUSH EAX
// 00577b8f: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00577b94: DEC EAX
// 00577b95: PUSH EAX
// 00577b96: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 00577b9b: SUB EAX,0xa
// 00577b9e: PUSH EAX
// 00577b9f: PUSH 0x0
// 00577ba1: PUSH 0x3364ce0
//   XREF to: 03364ce0 (DATA)
// 00577ba6: CALL shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60
//   XREF to: 004a5b60 (UNCONDITIONAL_CALL)
// 00577bab: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00577bb1: MOV EAX,EDX
// 00577bb3: SAR EDX,0x1f
// 00577bb6: SHL EDX,0x6
// 00577bb9: SBB EAX,EDX
// 00577bbb: SAR EAX,0x6
// 00577bbe: ADD ESP,0x14
// 00577bc1: PUSH 0x3364ce0
//   XREF to: 03364ce0 (DATA)
// 00577bc6: MOV dword ptr [0x03364ce4],EBX
//   XREF to: 03364ce4 (WRITE)
// 00577bcc: MOV [0x03364ce8],EAX
//   XREF to: 03364ce8 (WRITE)
// 00577bd1: CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
//   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)
// 00577bd6: ADD ESP,0x4
// 00577bd9: PUSH 0x3364ce0
//   XREF to: 03364ce0 (DATA)
// 00577bde: CALL shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
//   XREF to: 004a5c10 (UNCONDITIONAL_CALL)
// 00577be3: ADD ESP,0x4
// 00577be6: XOR ESI,ESI
// 00577be8: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[0x4] (READ)
// 00577bef: MOV dword ptr [ESP + 0x24],ESI
//   XREF to: Stack[-0x7c] (WRITE)
// 00577bf3: MOV dword ptr [ESP + 0x34],ESI
//   XREF to: Stack[-0x6c] (WRITE)
// 00577bf7: ADD EAX,0x4
// 00577bfa: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x90] (WRITE)
// 00577bfe: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0xa0] (DATA)
// 00577c01: XOR EDI,EDI
//   Label: LAB_00577c01
// 00577c03: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[0x4] (READ)
// 00577c0a: MOV dword ptr [ESP + 0x30],EDI
//   XREF to: Stack[-0x70] (WRITE)
// 00577c0e: MOV EDX,dword ptr [EAX]
// 00577c10: MOV dword ptr [ESP + 0x20],EDI
//   XREF to: Stack[-0x80] (WRITE)
// 00577c14: TEST EDX,EDX
// 00577c16: JLE 0x00577ca3
//   XREF to: 00577ca3 (CONDITIONAL_JUMP)
// 00577c1c: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 00577c20: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[0x8] (READ)
// 00577c27: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 00577c2b: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 00577c2e: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 00577c32: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_00577c32
//   XREF to: Stack[-0x88] (READ)
// 00577c36: CMP dword ptr [EAX + 0x144],0x0
// 00577c3d: JZ 0x00577d2c
//   XREF to: 00577d2c (CONDITIONAL_JUMP)
// 00577c43: MOV EBP,0x4
// 00577c48: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x90] (READ)
// 00577c4c: MOV dword ptr [ESP + 0x38],EBP
//   XREF to: Stack[-0x68] (WRITE)
// 00577c50: TEST EAX,EAX
// 00577c52: JNZ 0x00577d41
//   XREF to: 00577d41 (CONDITIONAL_JUMP)
// 00577c58: MOV ECX,dword ptr [ESP + 0x18]
//   Label: LAB_00577c58
//   XREF to: Stack[-0x88] (READ)
// 00577c5c: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x8c] (READ)
// 00577c60: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x84] (READ)
// 00577c64: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x70] (READ)
// 00577c68: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x68] (READ)
// 00577c6c: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x80] (READ)
// 00577c70: MOV EDX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[0x4] (READ)
// 00577c77: ADD ECX,0x1a4
// 00577c7d: ADD EBX,0x4
// 00577c80: ADD ESI,0x1a4
// 00577c86: INC EDI
// 00577c87: ADD EBP,EAX
// 00577c89: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x88] (WRITE)
// 00577c8d: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x8c] (WRITE)
// 00577c91: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x84] (WRITE)
// 00577c95: MOV dword ptr [ESP + 0x30],EDI
//   XREF to: Stack[-0x70] (WRITE)
// 00577c99: MOV ECX,dword ptr [EDX]
// 00577c9b: MOV dword ptr [ESP + 0x20],EBP
//   XREF to: Stack[-0x80] (WRITE)
// 00577c9f: CMP EDI,ECX
// 00577ca1: JL 0x00577c32
//   XREF to: 00577c32 (CONDITIONAL_JUMP)
// 00577ca3: CMP dword ptr [ESP + 0x34],0x0
//   Label: LAB_00577ca3
//   XREF to: Stack[-0x6c] (READ)
// 00577ca8: JLE 0x00577cb9
//   XREF to: 00577cb9 (CONDITIONAL_JUMP)
// 00577caa: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x7c] (READ)
// 00577cae: XOR ESI,ESI
// 00577cb0: INC EDI
// 00577cb1: MOV dword ptr [ESP + 0x34],ESI
//   XREF to: Stack[-0x6c] (WRITE)
// 00577cb5: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0x7c] (WRITE)
// 00577cb9: MOV EBP,dword ptr [ESP + 0x10]
//   Label: LAB_00577cb9
//   XREF to: Stack[-0x90] (READ)
// 00577cbd: INC EBP
// 00577cbe: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0x90] (WRITE)
// 00577cc2: CMP EBP,0x2
// 00577cc5: JL 0x00577c01
//   XREF to: 00577c01 (CONDITIONAL_JUMP)
// 00577ccb: CMP dword ptr [ESP + 0x4],0x0
//   XREF to: Stack[-0x9c] (READ)
// 00577cd0: JL 0x00578182
//   XREF to: 00578182 (CONDITIONAL_JUMP)
// 00577cd6: TEST byte ptr [0x02cf6a94],0x1
//   XREF to: 02cf6a94 (READ)
// 00577cdd: JZ 0x00578182
//   XREF to: 00578182 (CONDITIONAL_JUMP)
// 00577ce3: XOR ECX,ECX
// 00577ce5: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x9c] (READ)
// 00577ce9: MOV dword ptr [0x02cf6a94],ECX
//   XREF to: 02cf6a94 (WRITE)
// 00577cef: MOV EAX,EDX
//   Label: LAB_00577cef
// 00577cf1: ADD ESP,0x90
// 00577cf7: POP EBP
// 00577cf8: POP EDI
// 00577cf9: POP ESI
// 00577cfa: POP EBX
// 00577cfb: RET
// 00577cfc: INC EBX
//   Label: LAB_00577cfc
// 00577cfd: JMP 0x00577b3f
//   XREF to: 00577b3f (UNCONDITIONAL_JUMP)
// 00577d02: MOV DL,AH
//   Label: LAB_00577d02
// 00577d04: OR DL,0x1
// 00577d07: PUSH 0x3364ce0
//   XREF to: 03364ce0 (DATA)
// 00577d0c: MOV byte ptr [0x03364d14],DL
//   XREF to: 03364d14 (WRITE)
// 00577d12: CALL shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
//   XREF to: 004a5ae0 (UNCONDITIONAL_CALL)
// 00577d17: ADD ESP,0x4
// 00577d1a: PUSH 0x6816b0
//   XREF to: 006816b0 (DATA)
// 00577d1f: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00577d24: ADD ESP,0x4
// 00577d27: JMP 0x00577b88
//   XREF to: 00577b88 (UNCONDITIONAL_JUMP)
// 00577d2c: MOV ESI,0x1
//   Label: LAB_00577d2c
// 00577d31: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x90] (READ)
// 00577d35: MOV dword ptr [ESP + 0x38],ESI
//   XREF to: Stack[-0x68] (WRITE)
// 00577d39: CMP EDI,ESI
// 00577d3b: JZ 0x00577c58
//   XREF to: 00577c58 (CONDITIONAL_JUMP)
// 00577d41: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00577d41
//   XREF to: Stack[-0x7c] (READ)
// 00577d45: SUB EAX,dword ptr [0x03364ce0]
//   XREF to: 03364ce0 (READ)
// 00577d4b: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x68] (READ)
// 00577d4f: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 00577d53: ADD EAX,ECX
// 00577d55: TEST EAX,EAX
// 00577d57: JLE 0x00577d73
//   XREF to: 00577d73 (CONDITIONAL_JUMP)
// 00577d59: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00577d5e: MOV EDX,EAX
// 00577d60: SAR EDX,0x1f
// 00577d63: SHL EDX,0x6
// 00577d66: SBB EAX,EDX
// 00577d68: SAR EAX,0x6
// 00577d6b: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x64] (READ)
// 00577d6f: CMP EAX,EBX
// 00577d71: JG 0x00577da1
//   XREF to: 00577da1 (CONDITIONAL_JUMP)
// 00577d73: MOV ECX,dword ptr [ESP + 0x34]
//   Label: LAB_00577d73
//   XREF to: Stack[-0x6c] (READ)
// 00577d77: INC ECX
// 00577d78: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x94] (READ)
// 00577d7c: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: Stack[-0x6c] (WRITE)
// 00577d80: CMP ECX,EBX
// 00577d82: JL 0x00577c58
//   XREF to: 00577c58 (CONDITIONAL_JUMP)
// 00577d88: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x68] (READ)
// 00577d8c: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x7c] (READ)
// 00577d90: XOR ESI,ESI
// 00577d92: ADD EDI,EAX
// 00577d94: MOV dword ptr [ESP + 0x34],ESI
//   XREF to: Stack[-0x6c] (WRITE)
// 00577d98: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0x7c] (WRITE)
// 00577d9c: JMP 0x00577c58
//   XREF to: 00577c58 (UNCONDITIONAL_JUMP)
// 00577da1: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_00577da1
//   XREF to: Stack[-0x94] (READ)
// 00577da5: SUB EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x6c] (READ)
// 00577da9: IMUL EAX,EAX,0x30
// 00577dac: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00577db2: MOV ESI,EBX
// 00577db4: XOR EBP,EBP
// 00577db6: SHL ESI,0x6
// 00577db9: SUB EDX,0xa
// 00577dbc: MOV dword ptr [0x02d02570],EBP
//   XREF to: 02d02570 (WRITE)
// 00577dc2: MOV dword ptr [ESP + 0x3c],ESI
//   XREF to: Stack[-0x64] (WRITE)
// 00577dc6: SUB EDX,EAX
// 00577dc8: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[0x8] (READ)
// 00577dcf: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x78] (WRITE)
// 00577dd3: TEST EAX,EAX
// 00577dd5: JZ 0x00577dea
//   XREF to: 00577dea (CONDITIONAL_JUMP)
// 00577dd7: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x8c] (READ)
// 00577ddb: CMP dword ptr [EAX],0x0
// 00577dde: JZ 0x00577dea
//   XREF to: 00577dea (CONDITIONAL_JUMP)
// 00577de0: MOV dword ptr [0x02d02570],0x2
//   XREF to: 02d02570 (WRITE)
// 00577dea: MOV EDX,dword ptr [ESP + 0xa4]
//   Label: LAB_00577dea
//   XREF to: Stack[0x4] (READ)
// 00577df1: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x70] (READ)
// 00577df5: CMP EAX,dword ptr [EDX + 0x15aea4]
// 00577dfb: JNZ 0x00577e07
//   XREF to: 00577e07 (CONDITIONAL_JUMP)
// 00577dfd: MOV dword ptr [0x02d02570],0x1
//   XREF to: 02d02570 (WRITE)
// 00577e07: MOV EAX,dword ptr [ESP + 0x38]
//   Label: LAB_00577e07
//   XREF to: Stack[-0x68] (READ)
// 00577e0b: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 00577e0f: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x64] (READ)
// 00577e13: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 00577e17: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x78] (READ)
// 00577e1b: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00577e1f: ADD EAX,0x30
// 00577e22: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00577e26: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x80] (READ)
// 00577e2a: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00577e2e: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x64] (READ)
// 00577e32: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00577e36: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x68] (READ)
// 00577e3a: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x64] (READ)
// 00577e3e: SHL EAX,0x6
// 00577e41: ADD EDX,EAX
// 00577e43: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x64] (READ)
// 00577e47: MOV dword ptr [ESP + 0x40],EDX
//   XREF to: Stack[-0x60] (WRITE)
// 00577e4b: CMP EAX,EDX
// 00577e4d: JGE 0x00577e8b
//   XREF to: 00577e8b (CONDITIONAL_JUMP)
// 00577e4f: MOV EBP,dword ptr [ESP + 0x50]
//   Label: LAB_00577e4f
//   XREF to: Stack[-0x50] (READ)
// 00577e53: TEST EBP,EBP
// 00577e55: JL 0x00577e6f
//   XREF to: 00577e6f (CONDITIONAL_JUMP)
// 00577e57: CMP dword ptr [ESP + 0x48],0x0
//   XREF to: Stack[-0x58] (READ)
// 00577e5c: JL 0x00577e6f
//   XREF to: 00577e6f (CONDITIONAL_JUMP)
// 00577e5e: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00577e64: LEA EAX,[EBP + 0x40]
// 00577e67: CMP EAX,EDX
// 00577e69: JLE 0x00577f0c
//   XREF to: 00577f0c (CONDITIONAL_JUMP)
// 00577e6f: MOV EBP,dword ptr [ESP + 0x4c]
//   Label: LAB_00577e6f
//   XREF to: Stack[-0x54] (READ)
// 00577e73: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x50] (READ)
// 00577e77: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x60] (READ)
// 00577e7b: INC EBP
// 00577e7c: ADD EAX,0x40
// 00577e7f: MOV dword ptr [ESP + 0x4c],EBP
//   XREF to: Stack[-0x54] (WRITE)
// 00577e83: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00577e87: CMP EAX,EDX
// 00577e89: JL 0x00577e4f
//   XREF to: 00577e4f (CONDITIONAL_JUMP)
// 00577e8b: MOV EBX,dword ptr [ESP + 0x8]
//   Label: LAB_00577e8b
//   XREF to: Stack[-0x98] (READ)
// 00577e8f: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x74] (READ)
// 00577e93: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x58] (READ)
// 00577e97: SHL EBX,0x6
// 00577e9a: ADD EAX,0x2f
// 00577e9d: ADD EBX,ECX
// 00577e9f: PUSH EAX
// 00577ea0: LEA EAX,[EBX + -0x1]
// 00577ea3: PUSH EAX
// 00577ea4: MOV ESI,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x58] (READ)
// 00577ea8: PUSH ESI
// 00577ea9: MOV EDI,ECX
// 00577eab: PUSH ECX
// 00577eac: MOV EBP,EDI
// 00577eae: CALL engine_2d.c_drawRect_FUN_00403120
//   XREF to: 00403120 (UNCONDITIONAL_CALL)
// 00577eb3: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 00577eb8: ADD ESP,0x10
// 00577ebb: CMP EAX,EBP
// 00577ebd: JL 0x00577d73
//   XREF to: 00577d73 (CONDITIONAL_JUMP)
// 00577ec3: CMP EBX,EAX
// 00577ec5: JLE 0x00577d73
//   XREF to: 00577d73 (CONDITIONAL_JUMP)
// 00577ecb: MOV EAX,[0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 00577ed0: CMP EAX,ESI
// 00577ed2: JL 0x00577d73
//   XREF to: 00577d73 (CONDITIONAL_JUMP)
// 00577ed8: CMP EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x5c] (READ)
// 00577edc: JGE 0x00577d73
//   XREF to: 00577d73 (CONDITIONAL_JUMP)
// 00577ee2: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x70] (READ)
// 00577ee6: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x9c] (WRITE)
// 00577eea: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x64] (READ)
// 00577eee: TEST EAX,EAX
// 00577ef0: JGE 0x00577ef4
//   XREF to: 00577ef4 (CONDITIONAL_JUMP)
// 00577ef2: XOR EAX,EAX
// 00577ef4: MOV ESI,dword ptr [ESP + 0x1c]
//   Label: LAB_00577ef4
//   XREF to: Stack[-0x84] (READ)
// 00577ef8: PUSH ESI
// 00577ef9: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x78] (READ)
// 00577efd: PUSH EDI
// 00577efe: PUSH EAX
// 00577eff: CALL engine_2d.c_drawTextXY_FUN_00402130
//   XREF to: 00402130 (UNCONDITIONAL_CALL)
// 00577f04: ADD ESP,0xc
// 00577f07: JMP 0x00577d73
//   XREF to: 00577d73 (UNCONDITIONAL_JUMP)
// 00577f0c: MOV EAX,dword ptr [ESP + 0x44]
//   Label: LAB_00577f0c
//   XREF to: Stack[-0x5c] (READ)
// 00577f10: CMP EAX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00577f16: JG 0x00577e6f
//   XREF to: 00577e6f (CONDITIONAL_JUMP)
// 00577f1c: IMUL EAX,dword ptr [ESP + 0x4c],0x3000
//   XREF to: Stack[-0x54] (READ)
// 00577f24: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x58] (READ)
// 00577f28: MOV ESI,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00577f2e: LEA EBX,[EAX + 0x3000]
// 00577f34: SHL EDX,0x2
// 00577f37: LEA ECX,[EAX + 0x100]
// 00577f3d: CMP ESI,0x8
// 00577f40: JNZ 0x0057800d
//   XREF to: 0057800d (CONDITIONAL_JUMP)
// 00577f46: MOV dword ptr [ESP + 0x6c],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 00577f4a: MOV dword ptr [ESP + 0x80],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00577f51: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00577f58: MOV dword ptr [ESP + 0x54],EBX
//   XREF to: Stack[-0x4c] (WRITE)
// 00577f5c: MOV dword ptr [ESP + 0x60],EBP
//   XREF to: Stack[-0x40] (WRITE)
// 00577f60: MOV EDX,dword ptr [ESP + 0x80]
//   Label: LAB_00577f60
//   XREF to: Stack[-0x20] (READ)
// 00577f67: MOV ESI,dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x40] (READ)
// 00577f6b: MOV EDX,dword ptr [EDX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00577f71: MOV EBX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x18] (READ)
// 00577f78: ADD EDX,ESI
// 00577f7a: MOV EBP,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x34] (READ)
// 00577f7e: INC EDX
// 00577f7f: MOV EAX,dword ptr [EBX + 0x3365cc0]
//   Label: LAB_00577f7f
//   XREF to: 03365cc0 (DATA)
//   XREF to: 03365cc4 (DATA)
//   XREF to: 03365dc0 (DATA)
// 00577f85: MOV EDI,EAX
// 00577f87: MOV ESI,EAX
// 00577f89: MOV ECX,EAX
// 00577f8b: AND EDI,0xff
// 00577f91: SHR ESI,0x8
// 00577f94: SHR ECX,0x10
// 00577f97: MOV EAX,EDI
// 00577f99: AND ESI,0xff
// 00577f9f: SHR EAX,0x3
// 00577fa2: SHR ESI,0x3
// 00577fa5: SHL EAX,0xa
// 00577fa8: SHL ESI,0x5
// 00577fab: AND ECX,0xff
// 00577fb1: ADD EAX,ESI
// 00577fb3: MOV ESI,ECX
// 00577fb5: SHR ESI,0x3
// 00577fb8: INC EDX
// 00577fb9: MOV AL,byte ptr [ESI + EAX*0x1 + 0x2cf9020]
//   XREF to: 02cf9020 (DATA)
// 00577fc0: ADD EBX,0x4
// 00577fc3: MOV byte ptr [EDX + -0x1],AL
// 00577fc6: CMP EBX,EBP
// 00577fc8: JNZ 0x00577f7f
//   XREF to: 00577f7f (CONDITIONAL_JUMP)
// 00577fca: MOV EBP,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x20] (READ)
// 00577fd1: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x18] (READ)
// 00577fd8: MOV EDI,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x34] (READ)
// 00577fdc: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x4c] (READ)
// 00577fe0: ADD EBP,0x4
// 00577fe3: ADD EAX,0x100
// 00577fe8: ADD EDI,0x100
// 00577fee: MOV dword ptr [ESP + 0x80],EBP
//   XREF to: Stack[-0x20] (WRITE)
// 00577ff5: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00577ffc: MOV dword ptr [ESP + 0x6c],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 00578000: CMP EAX,EDX
// 00578002: JZ 0x00577e6f
//   XREF to: 00577e6f (CONDITIONAL_JUMP)
// 00578008: JMP 0x00577f60
//   XREF to: 00577f60 (UNCONDITIONAL_JUMP)
// 0057800d: CMP ESI,0x10
//   Label: LAB_0057800d
// 00578010: JNZ 0x005780c6
//   XREF to: 005780c6 (CONDITIONAL_JUMP)
// 00578016: MOV dword ptr [ESP + 0x78],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0057801a: MOV dword ptr [ESP + 0x74],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 0057801e: LEA ESI,[EBP + EBP*0x1]
// 00578022: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00578029: MOV dword ptr [ESP + 0x58],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 0057802d: MOV dword ptr [ESP + 0x64],EBX
//   XREF to: Stack[-0x3c] (WRITE)
// 00578031: MOV EBP,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x48] (READ)
// 00578035: MOV EAX,dword ptr [ESP + 0x74]
//   Label: LAB_00578035
//   XREF to: Stack[-0x2c] (READ)
// 00578039: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 0057803f: MOV EBX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x14] (READ)
// 00578046: ADD EAX,EBP
// 00578048: MOV EDI,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x28] (READ)
// 0057804c: LEA ESI,[EAX + 0x2]
// 0057804f: MOV EAX,dword ptr [EBX + 0x3365cc0]
//   Label: LAB_0057804f
//   XREF to: 03365cc0 (DATA)
//   XREF to: 03365cc4 (DATA)
//   XREF to: 03365dc0 (DATA)
// 00578055: MOV ECX,EAX
// 00578057: MOV EDX,EAX
// 00578059: SHR EAX,0x10
// 0057805c: AND EAX,0xff
// 00578061: SHR EDX,0x8
// 00578064: PUSH EAX
// 00578065: AND EDX,0xff
// 0057806b: PUSH EDX
// 0057806c: AND ECX,0xff
// 00578072: PUSH ECX
// 00578073: ADD ESI,0x2
// 00578076: ADD EBX,0x4
// 00578079: CALL engine_font.cpp_packPixelScaled_FUN_004d1110
//   XREF to: 004d1110 (UNCONDITIONAL_CALL)
// 0057807e: ADD ESP,0xc
// 00578081: MOV word ptr [ESI + -0x2],AX
// 00578085: CMP EBX,EDI
// 00578087: JNZ 0x0057804f
//   XREF to: 0057804f (CONDITIONAL_JUMP)
// 00578089: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x2c] (READ)
// 0057808d: MOV ECX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x14] (READ)
// 00578094: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x28] (READ)
// 00578098: MOV EBX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x3c] (READ)
// 0057809c: ADD EDX,0x4
// 0057809f: ADD ECX,0x100
// 005780a5: ADD EAX,0x100
// 005780aa: MOV dword ptr [ESP + 0x74],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 005780ae: MOV dword ptr [ESP + 0x8c],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005780b5: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005780b9: CMP ECX,EBX
// 005780bb: JZ 0x00577e6f
//   XREF to: 00577e6f (CONDITIONAL_JUMP)
// 005780c1: JMP 0x00578035
//   XREF to: 00578035 (UNCONDITIONAL_JUMP)
// 005780c6: CMP ESI,0x20
//   Label: LAB_005780c6
// 005780c9: JNZ 0x00577e6f
//   XREF to: 00577e6f (CONDITIONAL_JUMP)
// 005780cf: LEA ESI,[EBP*0x4 + 0x0]
// 005780d6: MOV dword ptr [ESP + 0x70],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 005780da: MOV dword ptr [ESP + 0x7c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 005780de: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005780e5: MOV dword ptr [ESP + 0x68],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 005780e9: MOV dword ptr [ESP + 0x5c],ESI
//   XREF to: Stack[-0x44] (WRITE)
// 005780ed: MOV EAX,dword ptr [ESP + 0x7c]
//   Label: LAB_005780ed
//   XREF to: Stack[-0x24] (READ)
// 005780f1: MOV EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x44] (READ)
// 005780f5: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 005780fb: MOV EBX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x1c] (READ)
// 00578102: ADD EAX,EDX
// 00578104: MOV EDI,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x30] (READ)
// 00578108: LEA ESI,[EAX + 0x4]
// 0057810b: MOV EAX,dword ptr [EBX + 0x3365cc0]
//   Label: LAB_0057810b
//   XREF to: 03365cc0 (DATA)
//   XREF to: 03365cc4 (DATA)
//   XREF to: 03365dc0 (DATA)
// 00578111: MOV EDX,EAX
// 00578113: MOV ECX,EAX
// 00578115: SHR EAX,0x10
// 00578118: AND EAX,0xff
// 0057811d: SHR ECX,0x8
// 00578120: PUSH EAX
// 00578121: AND ECX,0xff
// 00578127: PUSH ECX
// 00578128: AND EDX,0xff
// 0057812e: PUSH EDX
// 0057812f: ADD ESI,0x4
// 00578132: ADD EBX,0x4
// 00578135: CALL engine_font.cpp_packPixelNative_FUN_004d1170
//   XREF to: 004d1170 (UNCONDITIONAL_CALL)
// 0057813a: ADD ESP,0xc
// 0057813d: MOV dword ptr [ESI + -0x4],EAX
// 00578140: CMP EBX,EDI
// 00578142: JNZ 0x0057810b
//   XREF to: 0057810b (CONDITIONAL_JUMP)
// 00578144: MOV EBX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x24] (READ)
// 00578148: MOV ESI,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x1c] (READ)
// 0057814f: MOV ECX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x30] (READ)
// 00578153: MOV EDI,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x38] (READ)
// 00578157: ADD EBX,0x4
// 0057815a: ADD ESI,0x100
// 00578160: ADD ECX,0x100
// 00578166: MOV dword ptr [ESP + 0x7c],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0057816a: MOV dword ptr [ESP + 0x84],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 00578171: MOV dword ptr [ESP + 0x70],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 00578175: CMP ESI,EDI
// 00578177: JZ 0x00577e6f
//   XREF to: 00577e6f (CONDITIONAL_JUMP)
// 0057817d: JMP 0x005780ed
//   XREF to: 005780ed (UNCONDITIONAL_JUMP)
// 00578182: MOV EDX,0xffffffff
//   Label: LAB_00578182
// 00578187: MOV EAX,EDX
// 00578189: ADD ESP,0x90
// 0057818f: POP EBP
// 00578190: POP EDI
// 00578191: POP ESI
// 00578192: POP EBX
// 00578193: RET
