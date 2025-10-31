// Name: core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_00476670
// Address: 00476670
// Address Range: [[00476670, 00476a5e]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_00476670(CDemonLight * this_ptr, int screen_x, int screen_y, int brightness_offset)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056cc86 [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   int g_NoiseTableIndex
//   int[100] g_NoiseTable
//   undefined4 DAT_026a72ec
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   int g_RedBitPosition
//   int g_RedScaleFactor
//   int g_GreenBitPosition
//   int g_GreenScaleFactor
//   int g_BlueBitPosition
//   int g_BlueScaleFactor
// Function calls:
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdlib.c_rand_FUN_005feb5c

#include "nocturne.h"

void __cdecl
core_dlight_cpp_CDemonLight_drawShadowDepthBuffer_FUN_00476670
          (CDemonLight *this_ptr,int screen_x,int screen_y,int brightness_offset)

{
  undefined4 *puVar1;
  int *piVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  ushort *puVar9;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  ushort *local_18;
  ushort *local_14;
  
  g_NoiseTableIndex = 0;
  iVar7 = 0;
  do {
    uVar4 = crt_stdlib_c_rand_FUN_005feb5c();
    iVar6 = iVar7 + 4;
    *(uint *)((int)g_NoiseTable + iVar7) = (uVar4 & 0x1f) - 0x10;
    iVar7 = iVar6;
  } while (iVar6 != 400);
  iVar7 = 0;
  if (0 < g_WindowHeight) {
    iVar6 = 0;
    do {
      iVar5 = g_WindowWidth * g_BitsPerPixel >> 0x1f;
      puVar1 = (undefined4 *)((int)g_ScreenBufferArray + iVar6);
      iVar6 = iVar6 + 4;
      iVar7 = iVar7 + 1;
      crt_memory_c_memset_FUN_005fde40
                ((void *)*puVar1,0,
                 (int)((g_WindowWidth * g_BitsPerPixel + iVar5 * -8) - (uint)(iVar5 << 2 < 0)) >> 3)
      ;
    } while (iVar7 < g_WindowHeight);
  }
  if (g_BitsPerPixel == 0x20) {
    local_30 = 0;
    if (0 < this_ptr->shadow_map_height) {
      do {
        iVar7 = local_30;
        if (0xf0 < g_WindowHeight) {
          iVar7 = local_30 * 2;
        }
        iVar7 = iVar7 + screen_y;
        if ((-1 < iVar7) && (iVar7 < g_WindowHeight)) {
          puVar8 = (uint *)((int)g_ScreenBufferArray[iVar7] + screen_x * 4);
          local_18 = this_ptr->shadow_depth_buffer + local_30 * this_ptr->shadow_map_width;
          local_24 = 0;
          local_20 = 0;
          if (0 < this_ptr->shadow_map_width) {
            do {
              iVar7 = g_WindowWidth;
              if (*local_18 != 0) {
                piVar2 = g_NoiseTable + g_NoiseTableIndex;
                g_NoiseTableIndex = g_NoiseTableIndex + 1;
                uVar4 = (uint)(*local_18 >> 6) + *piVar2;
                if (99 < g_NoiseTableIndex) {
                  g_NoiseTableIndex = 0;
                }
                if (0x7f < uVar4) {
                  uVar4 = 0x7f;
                }
                uVar4 = uVar4 ^ 0x7f;
                if ((0 < brightness_offset) && (uVar4 = uVar4 + brightness_offset, 0xff < uVar4)) {
                  uVar4 = 0xff;
                }
                local_24 = uVar4 + local_24 >> 1;
                uVar4 = local_24 * 3 >> 2;
                if (g_BitsPerPixel == 0x20) {
                  uVar4 = local_24 << ((byte)g_BlueBitPosition & 0x1f) |
                          uVar4 << ((byte)g_GreenBitPosition & 0x1f) |
                          uVar4 << ((byte)g_RedBitPosition & 0x1f);
                }
                else {
                  uVar4 = uVar4 << 0x10 | uVar4 << 8 | local_24;
                }
                *puVar8 = uVar4;
                if (0x140 < iVar7) {
                  puVar8[1] = uVar4;
                }
              }
              local_18 = local_18 + 1;
              if (g_WindowWidth < 0x141) {
                puVar8 = puVar8 + 1;
              }
              else {
                puVar8 = puVar8 + 2;
              }
              local_20 = local_20 + 1;
            } while (local_20 < this_ptr->shadow_map_width);
          }
        }
        local_30 = local_30 + 1;
      } while (local_30 < this_ptr->shadow_map_height);
    }
  }
  else {
    local_2c = 0;
    if (0 < this_ptr->shadow_map_height) {
      do {
        iVar7 = local_2c;
        if (0xf0 < g_WindowHeight) {
          iVar7 = local_2c * 2;
        }
        iVar7 = iVar7 + screen_y;
        if ((-1 < iVar7) && (iVar7 < g_WindowHeight)) {
          puVar9 = (ushort *)((int)g_ScreenBufferArray[iVar7] + screen_x * 2);
          local_14 = this_ptr->shadow_depth_buffer + local_2c * this_ptr->shadow_map_width;
          local_28 = 0;
          local_1c = 0;
          if (0 < this_ptr->shadow_map_width) {
            do {
              if (*local_14 != 0) {
                piVar2 = g_NoiseTable + g_NoiseTableIndex;
                g_NoiseTableIndex = g_NoiseTableIndex + 1;
                uVar4 = (uint)(*local_14 >> 6) + *piVar2;
                if (99 < g_NoiseTableIndex) {
                  g_NoiseTableIndex = 0;
                }
                if (0x7f < uVar4) {
                  uVar4 = 0x7f;
                }
                uVar4 = uVar4 ^ 0x7f;
                if ((0 < brightness_offset) && (uVar4 = uVar4 + brightness_offset, 0xff < uVar4)) {
                  uVar4 = 0xff;
                }
                local_28 = uVar4 + local_28 >> 1;
                uVar4 = local_28 * 3 >> 2;
                uVar3 = (ushort)(local_28 / (uint)g_BlueScaleFactor <<
                                ((byte)g_BlueBitPosition & 0x1f)) |
                        (ushort)(uVar4 / (uint)g_RedScaleFactor << ((byte)g_RedBitPosition & 0x1f))
                        | (ushort)(uVar4 / (uint)g_GreenScaleFactor <<
                                  ((byte)g_GreenBitPosition & 0x1f));
                *puVar9 = uVar3;
                if (0x140 < g_WindowWidth) {
                  puVar9[1] = uVar3;
                }
              }
              local_14 = local_14 + 1;
              if (g_WindowWidth < 0x141) {
                puVar9 = puVar9 + 1;
              }
              else {
                puVar9 = puVar9 + 2;
              }
              local_1c = local_1c + 1;
            } while (local_1c < this_ptr->shadow_map_width);
          }
        }
        local_2c = local_2c + 1;
      } while (local_2c < this_ptr->shadow_map_height);
    }
  }
  return;
}


// Assembly code:
// 00476670: PUSH EBX
//   Label: core_dlight.cpp_CDemonLight_drawShadowDepthBuffer_FUN_00476670
// 00476671: PUSH ESI
// 00476672: PUSH EDI
// 00476673: PUSH EBP
// 00476674: SUB ESP,0x34
// 00476677: MOV EBP,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x10] (READ)
// 0047667b: XOR ESI,ESI
// 0047667d: XOR EBX,EBX
// 0047667f: MOV dword ptr [0x026a72e4],ESI
//   XREF to: 026a72e4 (WRITE)
// 00476685: CALL crt_stdlib.c_rand_FUN_005feb5c
//   Label: LAB_00476685
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 0047668a: AND EAX,0x1f
// 0047668d: ADD EBX,0x4
// 00476690: SUB EAX,0x10
// 00476693: MOV dword ptr [EBX + 0x26a72e4],EAX
//   XREF to: 026a72e8 (WRITE)
//   XREF to: 026a72ec (WRITE)
// 00476699: CMP EBX,0x190
// 0047669f: JNZ 0x00476685
//   XREF to: 00476685 (CONDITIONAL_JUMP)
// 004766a1: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004766a7: XOR EBX,EBX
// 004766a9: TEST EDX,EDX
// 004766ab: JLE 0x004766f0
//   XREF to: 004766f0 (CONDITIONAL_JUMP)
// 004766ad: XOR EDI,EDI
// 004766af: MOV EDX,dword ptr [0x00679394]
//   Label: LAB_004766af
//   XREF to: 00679394 (READ)
// 004766b5: MOV ECX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 004766bb: IMUL EDX,ECX
// 004766be: MOV EAX,EDX
// 004766c0: SAR EDX,0x1f
// 004766c3: SHL EDX,0x3
// 004766c6: SBB EAX,EDX
// 004766c8: SAR EAX,0x3
// 004766cb: PUSH EAX
// 004766cc: PUSH 0x0
// 004766ce: MOV EAX,dword ptr [EDI + 0x2cf6a9c]
//   XREF to: 02cf6a9c (READ)
//   XREF to: 02cf6aa0 (READ)
// 004766d4: PUSH EAX
// 004766d5: ADD EDI,0x4
// 004766d8: INC EBX
// 004766d9: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004766de: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004766e4: ADD ESP,0xc
// 004766e7: CMP EBX,EDX
// 004766e9: JL 0x004766af
//   XREF to: 004766af (CONDITIONAL_JUMP)
// 004766eb: LEA EAX,[EAX]
// 004766ee: MOV ECX,ECX
// 004766f0: MOV ECX,dword ptr [0x0067939c]
//   Label: LAB_004766f0
//   XREF to: 0067939c (READ)
// 004766f6: MOV ESI,dword ptr [0x026a72e4]
//   XREF to: 026a72e4 (READ)
// 004766fc: CMP ECX,0x20
// 004766ff: JNZ 0x004768a3
//   XREF to: 004768a3 (CONDITIONAL_JUMP)
// 00476705: XOR EAX,EAX
// 00476707: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0047670b: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 0047670f: CMP dword ptr [EAX + 0x1cc4],0x0
// 00476716: JLE 0x0047675e
//   XREF to: 0047675e (CONDITIONAL_JUMP)
// 00476718: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x8] (READ)
// 0047671c: SHL EAX,0x2
// 0047671f: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00476723: CMP dword ptr [0x00679398],0xf0
//   Label: LAB_00476723
//   XREF to: 00679398 (READ)
// 0047672d: JLE 0x0047676c
//   XREF to: 0047676c (CONDITIONAL_JUMP)
// 0047672f: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x30] (READ)
// 00476733: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0xc] (READ)
// 00476737: ADD EAX,EAX
// 00476739: ADD EAX,ECX
// 0047673b: TEST EAX,EAX
//   Label: LAB_0047673b
// 0047673d: JL 0x00476747
//   XREF to: 00476747 (CONDITIONAL_JUMP)
// 0047673f: CMP EAX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00476745: JL 0x00476776
//   XREF to: 00476776 (CONDITIONAL_JUMP)
// 00476747: MOV EBX,dword ptr [ESP + 0x14]
//   Label: LAB_00476747
//   XREF to: Stack[-0x30] (READ)
// 0047674b: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 0047674f: INC EBX
// 00476750: MOV EDI,dword ptr [EDX + 0x1cc4]
// 00476756: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 0047675a: CMP EBX,EDI
// 0047675c: JL 0x00476723
//   XREF to: 00476723 (CONDITIONAL_JUMP)
// 0047675e: MOV dword ptr [0x026a72e4],ESI
//   Label: LAB_0047675e
//   XREF to: 026a72e4 (WRITE)
// 00476764: ADD ESP,0x34
// 00476767: POP EBP
// 00476768: POP EDI
// 00476769: POP ESI
// 0047676a: POP EBX
// 0047676b: RET
// 0047676c: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_0047676c
//   XREF to: Stack[-0x30] (READ)
// 00476770: ADD EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0xc] (READ)
// 00476774: JMP 0x0047673b
//   XREF to: 0047673b (UNCONDITIONAL_JUMP)
// 00476776: MOV EDX,dword ptr [ESP + 0x48]
//   Label: LAB_00476776
//   XREF to: Stack[0x4] (READ)
// 0047677a: MOV EDI,dword ptr [EAX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00476781: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x38] (READ)
// 00476785: MOV ECX,dword ptr [EDX + 0x1cc0]
// 0047678b: ADD EDI,EAX
// 0047678d: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x30] (READ)
// 00476791: IMUL EAX,ECX
// 00476794: LEA EDX,[EAX + EAX*0x1]
// 00476797: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 0047679b: MOV EAX,dword ptr [EAX + 0x2f94]
// 004767a1: ADD EAX,EDX
// 004767a3: XOR EBX,EBX
// 004767a5: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004767a9: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 004767ad: MOV dword ptr [ESP + 0x20],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 004767b1: MOV EDX,dword ptr [EAX + 0x1cc0]
// 004767b7: MOV dword ptr [ESP + 0x24],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 004767bb: TEST EDX,EDX
// 004767bd: JLE 0x00476747
//   XREF to: 00476747 (CONDITIONAL_JUMP)
// 004767bf: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_004767bf
//   XREF to: Stack[-0x18] (READ)
// 004767c3: XOR EBX,EBX
// 004767c5: MOV BX,word ptr [EAX]
// 004767c8: TEST EBX,EBX
// 004767ca: JZ 0x00476854
//   XREF to: 00476854 (CONDITIONAL_JUMP)
// 004767d0: SHR EBX,0x6
// 004767d3: MOV EAX,dword ptr [ESI*0x4 + 0x26a72e8]
//   XREF to: 026a72e8 (READ)
//   XREF to: 026a72ec (READ)
// 004767da: INC ESI
// 004767db: ADD EBX,EAX
// 004767dd: CMP ESI,0x64
// 004767e0: JL 0x004767e4
//   XREF to: 004767e4 (CONDITIONAL_JUMP)
// 004767e2: XOR ESI,ESI
// 004767e4: CMP EBX,0x7f
//   Label: LAB_004767e4
// 004767e7: JBE 0x004767ee
//   XREF to: 004767ee (CONDITIONAL_JUMP)
// 004767e9: MOV EBX,0x7f
// 004767ee: XOR BL,0x7f
//   Label: LAB_004767ee
// 004767f1: TEST EBP,EBP
// 004767f3: JLE 0x00476804
//   XREF to: 00476804 (CONDITIONAL_JUMP)
// 004767f5: ADD EBX,EBP
// 004767f7: CMP EBX,0xff
// 004767fd: JBE 0x00476804
//   XREF to: 00476804 (CONDITIONAL_JUMP)
// 004767ff: MOV EBX,0xff
// 00476804: ADD EBX,dword ptr [ESP + 0x20]
//   Label: LAB_00476804
//   XREF to: Stack[-0x24] (READ)
// 00476808: SHR EBX,0x1
// 0047680a: MOV dword ptr [ESP + 0x20],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0047680e: LEA EAX,[EBX + EBX*0x1]
// 00476811: ADD EAX,EBX
// 00476813: MOV ECX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00476819: SHR EAX,0x2
// 0047681c: CMP ECX,0x20
// 0047681f: JNZ 0x00476890
//   XREF to: 00476890 (CONDITIONAL_JUMP)
// 00476821: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 00476827: MOV EDX,EAX
// 00476829: SHL EDX,CL
// 0047682b: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 00476831: SHL EAX,CL
// 00476833: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 00476839: SHL EBX,CL
// 0047683b: OR EAX,EDX
// 0047683d: MOV ECX,EBX
// 0047683f: OR ECX,EAX
// 00476841: MOV EBX,dword ptr [0x00679394]
//   Label: LAB_00476841
//   XREF to: 00679394 (READ)
// 00476847: MOV dword ptr [EDI],ECX
// 00476849: CMP EBX,0x140
// 0047684f: JLE 0x00476854
//   XREF to: 00476854 (CONDITIONAL_JUMP)
// 00476851: MOV dword ptr [EDI + 0x4],ECX
// 00476854: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_00476854
//   XREF to: Stack[-0x18] (READ)
// 00476858: ADD EAX,0x2
// 0047685b: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00476861: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00476865: CMP EDX,0x140
// 0047686b: JLE 0x0047689e
//   XREF to: 0047689e (CONDITIONAL_JUMP)
// 0047686d: ADD EDI,0x8
// 00476870: MOV ECX,dword ptr [ESP + 0x24]
//   Label: LAB_00476870
//   XREF to: Stack[-0x20] (READ)
// 00476874: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 00476878: INC ECX
// 00476879: MOV EBX,dword ptr [EDX + 0x1cc0]
// 0047687f: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 00476883: CMP ECX,EBX
// 00476885: JGE 0x00476747
//   XREF to: 00476747 (CONDITIONAL_JUMP)
// 0047688b: JMP 0x004767bf
//   XREF to: 004767bf (UNCONDITIONAL_JUMP)
// 00476890: MOV ECX,EAX
//   Label: LAB_00476890
// 00476892: SHL EAX,0x8
// 00476895: SHL ECX,0x10
// 00476898: OR ECX,EAX
// 0047689a: OR ECX,EBX
// 0047689c: JMP 0x00476841
//   XREF to: 00476841 (UNCONDITIONAL_JUMP)
// 0047689e: ADD EDI,0x4
//   Label: LAB_0047689e
// 004768a1: JMP 0x00476870
//   XREF to: 00476870 (UNCONDITIONAL_JUMP)
// 004768a3: MOV EAX,dword ptr [ESP + 0x48]
//   Label: LAB_004768a3
//   XREF to: Stack[0x4] (READ)
// 004768a7: XOR EBX,EBX
// 004768a9: MOV EDI,dword ptr [EAX + 0x1cc4]
// 004768af: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 004768b3: TEST EDI,EDI
// 004768b5: JLE 0x0047675e
//   XREF to: 0047675e (CONDITIONAL_JUMP)
// 004768bb: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x8] (READ)
// 004768bf: ADD EAX,EAX
// 004768c1: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004768c5: CMP dword ptr [0x00679398],0xf0
//   Label: LAB_004768c5
//   XREF to: 00679398 (READ)
// 004768cf: JLE 0x00476906
//   XREF to: 00476906 (CONDITIONAL_JUMP)
// 004768d1: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x2c] (READ)
// 004768d5: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0xc] (READ)
// 004768d9: ADD EAX,EAX
// 004768db: ADD EAX,ECX
// 004768dd: TEST EAX,EAX
//   Label: LAB_004768dd
// 004768df: JL 0x004768e9
//   XREF to: 004768e9 (CONDITIONAL_JUMP)
// 004768e1: CMP EAX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 004768e7: JL 0x00476910
//   XREF to: 00476910 (CONDITIONAL_JUMP)
// 004768e9: MOV ECX,dword ptr [ESP + 0x18]
//   Label: LAB_004768e9
//   XREF to: Stack[-0x2c] (READ)
// 004768ed: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 004768f1: INC ECX
// 004768f2: MOV EBX,dword ptr [EDX + 0x1cc4]
// 004768f8: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 004768fc: CMP ECX,EBX
// 004768fe: JGE 0x0047675e
//   XREF to: 0047675e (CONDITIONAL_JUMP)
// 00476904: JMP 0x004768c5
//   XREF to: 004768c5 (UNCONDITIONAL_JUMP)
// 00476906: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_00476906
//   XREF to: Stack[-0x2c] (READ)
// 0047690a: ADD EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0xc] (READ)
// 0047690e: JMP 0x004768dd
//   XREF to: 004768dd (UNCONDITIONAL_JUMP)
// 00476910: MOV EDX,dword ptr [ESP + 0x48]
//   Label: LAB_00476910
//   XREF to: Stack[0x4] (READ)
// 00476914: MOV EDI,dword ptr [EAX*0x4 + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 0047691b: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x34] (READ)
// 0047691f: MOV ECX,dword ptr [EDX + 0x1cc0]
// 00476925: ADD EDI,EAX
// 00476927: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x2c] (READ)
// 0047692b: IMUL EAX,ECX
// 0047692e: MOV EDX,dword ptr [EDX + 0x2f94]
// 00476934: ADD EAX,EAX
// 00476936: XOR EBX,EBX
// 00476938: ADD EDX,EAX
// 0047693a: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 0047693e: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 00476942: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00476946: MOV EDX,dword ptr [EAX + 0x1cc0]
// 0047694c: MOV dword ptr [ESP + 0x28],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 00476950: TEST EDX,EDX
// 00476952: JLE 0x004768e9
//   XREF to: 004768e9 (CONDITIONAL_JUMP)
// 00476954: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_00476954
//   XREF to: Stack[-0x14] (READ)
// 00476958: XOR EBX,EBX
// 0047695a: MOV BX,word ptr [EAX]
// 0047695d: TEST EBX,EBX
// 0047695f: JZ 0x00476a1e
//   XREF to: 00476a1e (CONDITIONAL_JUMP)
// 00476965: SHR EBX,0x6
// 00476968: MOV EAX,dword ptr [ESI*0x4 + 0x26a72e8]
//   XREF to: 026a72e8 (READ)
//   XREF to: 026a72ec (READ)
// 0047696f: INC ESI
// 00476970: ADD EBX,EAX
// 00476972: CMP ESI,0x64
// 00476975: JL 0x00476979
//   XREF to: 00476979 (CONDITIONAL_JUMP)
// 00476977: XOR ESI,ESI
// 00476979: CMP EBX,0x7f
//   Label: LAB_00476979
// 0047697c: JBE 0x00476983
//   XREF to: 00476983 (CONDITIONAL_JUMP)
// 0047697e: MOV EBX,0x7f
// 00476983: XOR BL,0x7f
//   Label: LAB_00476983
// 00476986: TEST EBP,EBP
// 00476988: JLE 0x00476999
//   XREF to: 00476999 (CONDITIONAL_JUMP)
// 0047698a: ADD EBX,EBP
// 0047698c: CMP EBX,0xff
// 00476992: JBE 0x00476999
//   XREF to: 00476999 (CONDITIONAL_JUMP)
// 00476994: MOV EBX,0xff
// 00476999: ADD EBX,dword ptr [ESP + 0x1c]
//   Label: LAB_00476999
//   XREF to: Stack[-0x28] (READ)
// 0047699d: SHR EBX,0x1
// 0047699f: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 004769a3: LEA ECX,[EBX + EBX*0x1]
// 004769a6: ADD ECX,EBX
// 004769a8: SHR ECX,0x2
// 004769ab: XOR EDX,EDX
// 004769ad: MOV EAX,ECX
// 004769af: DIV dword ptr [0x02d01f28]
//   XREF to: 02d01f28 (READ)
// 004769b5: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x44] (DATA)
// 004769b8: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x40] (WRITE)
// 004769bc: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x44] (DATA)
// 004769bf: XOR EDX,EDX
// 004769c1: MOV EAX,ECX
// 004769c3: DIV dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 004769c9: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x3c] (WRITE)
// 004769cd: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004769d1: XOR EDX,EDX
// 004769d3: MOV EAX,EBX
// 004769d5: DIV dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 004769db: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 004769e1: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x44] (DATA)
// 004769e4: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 004769e8: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x40] (READ)
// 004769ec: SHL EBX,CL
// 004769ee: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 004769f4: SHL EAX,CL
// 004769f6: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 004769fc: OR EBX,EAX
// 004769fe: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x3c] (READ)
// 00476a02: SHL EAX,CL
// 00476a04: OR EAX,EBX
// 00476a06: XOR EBX,EBX
// 00476a08: MOV word ptr [EDI],AX
// 00476a0b: MOV BX,AX
// 00476a0e: CMP dword ptr [0x00679394],0x140
//   XREF to: 00679394 (READ)
// 00476a18: JLE 0x00476a1e
//   XREF to: 00476a1e (CONDITIONAL_JUMP)
// 00476a1a: MOV word ptr [EDI + 0x2],BX
// 00476a1e: MOV EDX,dword ptr [ESP + 0x30]
//   Label: LAB_00476a1e
//   XREF to: Stack[-0x14] (READ)
// 00476a22: ADD EDX,0x2
// 00476a25: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00476a2b: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00476a2f: CMP ECX,0x140
// 00476a35: JLE 0x00476a5a
//   XREF to: 00476a5a (CONDITIONAL_JUMP)
// 00476a37: ADD EDI,0x4
// 00476a3a: MOV ECX,dword ptr [ESP + 0x28]
//   Label: LAB_00476a3a
//   XREF to: Stack[-0x1c] (READ)
// 00476a3e: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x4] (READ)
// 00476a42: INC ECX
// 00476a43: MOV EBX,dword ptr [EDX + 0x1cc0]
// 00476a49: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00476a4d: CMP ECX,EBX
// 00476a4f: JGE 0x004768e9
//   XREF to: 004768e9 (CONDITIONAL_JUMP)
// 00476a55: JMP 0x00476954
//   XREF to: 00476954 (UNCONDITIONAL_JUMP)
// 00476a5a: ADD EDI,0x2
//   Label: LAB_00476a5a
// 00476a5d: JMP 0x00476a3a
//   XREF to: 00476a3a (UNCONDITIONAL_JUMP)
