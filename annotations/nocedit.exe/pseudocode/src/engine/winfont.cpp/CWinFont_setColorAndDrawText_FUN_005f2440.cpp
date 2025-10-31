// Name: engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005f2440
// Address: 005f2440
// Address Range: [[005f2440, 005f285c]]
// Convention: __cdecl
// Signature: void engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005f2440(CWinFont * this_ptr, HDC device_context, int x_position, int y_position, char * text_string, int foreground_color, int background_color)
// Cross-references:
//   engine_winfont.cpp_CWinFont_drawText_FUN_005f23f0 (005f23f0) at 005f242a [UNCONDITIONAL_CALL]
// Globals:
//   SetTextColor* SetTextColor = 00211800
//   TextOutA* TextOutA = 00211810
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   int g_RedBitPosition
//   int g_RedBitCount
//   int g_GreenBitPosition
//   int g_GreenBitCount
//   int g_BlueBitPosition
//   int g_BlueBitCount
//   char[768] g_SourcePaletteData
//   undefined4 CHAR_ARRAY_02d01f49
//   undefined4 CHAR_ARRAY_02d01f4a
// Function calls:
//   crt_string.c_strcmp_FUN_005fef20
//   engine_font.cpp_getDefaultTextColor_FUN_004ce220
//   SetTextColor
//   TextOutA

#include "nocturne.h"

void __cdecl
engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_005f2440
          (CWinFont *this_ptr,HDC device_context,int x_position,int y_position,char *text_string,
          int foreground_color,int background_color)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  ushort *puVar9;
  int *piVar10;
  char *pcVar11;
  byte bVar12;
  int in_stack_00000020;
  COLORREF CStack_6c;
  COLORREF in_stack_ffffffac;
  int local_28;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar12 = 0;
  if (((foreground_color != this_ptr->cached_foreground_color) ||
      (background_color != this_ptr->cached_background_color)) ||
     (iVar3 = crt_string_c_strcmp_FUN_005fef20(this_ptr->text_cache,(char *)x_position), iVar3 != 0)
     ) {
    this_ptr->cached_foreground_color = foreground_color;
    this_ptr->cached_background_color = in_stack_00000020;
    if (foreground_color < 0) {
      engine_font_cpp_getDefaultTextColor_FUN_004ce220();
    }
    pcVar8 = (char *)x_position;
    pcVar11 = this_ptr->text_cache;
    do {
      cVar1 = *pcVar8;
      *pcVar11 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar11[1] = cVar1;
      pcVar11 = pcVar11 + 2;
    } while (cVar1 != '\0');
    iVar3 = (*((this_ptr->base_font).vtable)->getStringWidth)
                      (&this_ptr->base_font,(char *)x_position);
    this_ptr->cached_string_width = iVar3;
    iVar3 = (*((this_ptr->base_font).vtable)->getStringHeight)
                      (&this_ptr->base_font,(char *)x_position);
    this_ptr->cached_string_height = iVar3;
    uVar7 = 0xffffffff;
    pcVar8 = this_ptr->text_cache;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + (uint)bVar12 * -2 + 1;
    } while (cVar1 != '\0');
    if (local_28 != -1) {
      (*SetTextColor)(this_ptr->deviceContextHandle,CStack_6c);
      (*TextOutA)(this_ptr->deviceContextHandle,1,1,(LPCSTR)x_position,~uVar7 - 1);
    }
    (*SetTextColor)(this_ptr->deviceContextHandle,in_stack_ffffffac);
    (*TextOutA)(this_ptr->deviceContextHandle,0,0,(LPCSTR)x_position,~uVar7 - 1);
  }
  if ((int)(text_string + this_ptr->right) < g_WindowWidth) {
    iVar3 = this_ptr->right;
  }
  else {
    iVar3 = g_WindowWidth - (int)text_string;
  }
  if (this_ptr->top + foreground_color < g_WindowHeight) {
    iStack_20 = this_ptr->top;
  }
  else {
    iStack_20 = g_WindowHeight - foreground_color;
  }
  if (this_ptr->cached_string_width < iVar3) {
    iVar3 = this_ptr->cached_string_width;
  }
  if (this_ptr->cached_string_height < iStack_20) {
    iStack_20 = this_ptr->cached_string_height;
  }
  if (g_BitsPerPixel == 0x10) {
    iStack_14 = 0;
    if (0 < iStack_20) {
      iStack_18 = foreground_color;
      do {
        iVar4 = iStack_18 + this_ptr->yOffset1;
        if ((-1 < iVar4) && (iVar4 < g_WindowHeight)) {
          iVar5 = 0;
          if (0 < iVar3) {
            puVar9 = (ushort *)((int)g_ScreenBufferArray[iVar4] + (int)text_string * 2);
            do {
              uVar2 = *(ushort *)
                       ((int)this_ptr->ppvBits + (iStack_14 * this_ptr->right + iVar5) * 2);
              if (uVar2 != 0x7c1f) {
                *puVar9 = (ushort)((byte)((char)uVar2 << 3) >> ((byte)g_BlueBitCount & 0x1f)) <<
                          ((byte)g_BlueBitPosition & 0x1f) |
                          (ushort)(((((int)(uint)uVar2 >> 10 & 0x1fU) << 3) >>
                                   ((byte)g_RedBitCount & 0x1f)) << ((byte)g_RedBitPosition & 0x1f))
                          | (ushort)(((((int)(uint)uVar2 >> 5 & 0x1fU) << 3) >>
                                     ((byte)g_GreenBitCount & 0x1f)) <<
                                    ((byte)g_GreenBitPosition & 0x1f));
              }
              iVar5 = iVar5 + 1;
              puVar9 = puVar9 + 1;
            } while (iVar5 < iVar3);
          }
        }
        iStack_18 = iStack_18 + 1;
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < iStack_20);
    }
  }
  else {
    iVar4 = 0;
    if (0 < iStack_20) {
      iStack_1c = foreground_color;
      do {
        iVar5 = iStack_1c + this_ptr->yOffset1;
        if ((-1 < iVar5) && (iVar5 < g_WindowHeight)) {
          iVar6 = 0;
          if (0 < iVar3) {
            piVar10 = (int *)((int)text_string * 4 + (int)g_ScreenBufferArray[iVar5]);
            do {
              if ((char *)this_ptr->ppvBits[this_ptr->right * iVar4 + iVar6] !=
                  g_LightBufferPool[0xd] + 0x6ef7) {
                *piVar10 = (int)this_ptr->ppvBits[this_ptr->right * iVar4 + iVar6];
              }
              iVar6 = iVar6 + 1;
              piVar10 = piVar10 + 1;
            } while (iVar6 < iVar3);
          }
        }
        iStack_1c = iStack_1c + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iStack_20);
    }
  }
  return;
}


// Assembly code:
// 005f2440: PUSH EBX
//   Label: engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005f2440
// 005f2441: PUSH ESI
// 005f2442: PUSH EDI
// 005f2443: PUSH EBP
// 005f2444: SUB ESP,0x24
// 005f2447: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005f244b: MOV EBP,dword ptr [ESP + 0x40]
//   XREF to: Stack[0xc] (READ)
// 005f244f: MOV ESI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x18] (READ)
// 005f2453: CMP ESI,dword ptr [EBX + 0x12c]
// 005f2459: JNZ 0x005f246b
//   XREF to: 005f246b (CONDITIONAL_JUMP)
// 005f245b: MOV ECX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x1c] (READ)
// 005f245f: CMP ECX,dword ptr [EBX + 0x130]
// 005f2465: JZ 0x005f264f
//   XREF to: 005f264f (CONDITIONAL_JUMP)
// 005f246b: MOV EAX,dword ptr [ESP + 0x50]
//   Label: LAB_005f246b
//   XREF to: Stack[0x1c] (READ)
// 005f246f: XOR EDI,EDI
// 005f2471: MOV dword ptr [EBX + 0x12c],ESI
// 005f2477: MOV dword ptr [ESP + 0xc],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 005f247b: MOV dword ptr [EBX + 0x130],EAX
// 005f2481: TEST ESI,ESI
// 005f2483: JL 0x005f2669
//   XREF to: 005f2669 (CONDITIONAL_JUMP)
// 005f2489: MOV EDX,ESI
// 005f248b: LEA EAX,[ESI*0x4 + 0x0]
// 005f2492: SUB EAX,ESI
// 005f2494: XOR EDX,ESI
// 005f2496: XOR ECX,ECX
// 005f2498: MOV DL,byte ptr [EAX + 0x2d01f49]
//   XREF to: 02d01f49 (DATA)
// 005f249e: MOV CL,byte ptr [EAX + 0x2d01f48]
//   XREF to: 02d01f48 (DATA)
// 005f24a4: SHL EDX,0x8
// 005f24a7: MOV AL,byte ptr [EAX + 0x2d01f4a]
//   XREF to: 02d01f4a (DATA)
// 005f24ad: OR EDX,ECX
// 005f24af: AND EAX,0xff
// 005f24b4: SHL EAX,0x10
// 005f24b7: OR EDX,EAX
//   Label: LAB_005f24b7
// 005f24b9: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x34] (DATA)
// 005f24bc: MOV ECX,dword ptr [ESP + 0x50]
//   Label: LAB_005f24bc
//   XREF to: Stack[0x1c] (READ)
// 005f24c0: CMP ECX,-0x1
// 005f24c3: JZ 0x005f24f9
//   XREF to: 005f24f9 (CONDITIONAL_JUMP)
// 005f24c5: MOV EDX,ECX
// 005f24c7: LEA EAX,[ECX*0x4 + 0x0]
// 005f24ce: SUB EAX,ECX
// 005f24d0: XOR EDX,ECX
// 005f24d2: MOV DL,byte ptr [EAX + 0x2d01f49]
//   XREF to: 02d01f49 (DATA)
// 005f24d8: XOR ECX,ECX
// 005f24da: SHL EDX,0x8
// 005f24dd: MOV CL,byte ptr [EAX + 0x2d01f48]
//   XREF to: 02d01f48 (DATA)
// 005f24e3: MOV AL,byte ptr [EAX + 0x2d01f4a]
//   XREF to: 02d01f4a (DATA)
// 005f24e9: OR EDX,ECX
// 005f24eb: AND EAX,0xff
// 005f24f0: SHL EAX,0x10
// 005f24f3: OR EDX,EAX
// 005f24f5: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005f24f9: LEA EAX,[EBX + 0x18]
//   Label: LAB_005f24f9
// 005f24fc: MOV ESI,EBP
// 005f24fe: MOV EDI,EAX
// 005f2500: PUSH EDI
// 005f2501: MOV AL,byte ptr [ESI]
//   Label: LAB_005f2501
// 005f2503: MOV byte ptr [EDI],AL
// 005f2505: CMP AL,0x0
// 005f2507: JZ 0x005f2519
//   XREF to: 005f2519 (CONDITIONAL_JUMP)
// 005f2509: MOV AL,byte ptr [ESI + 0x1]
// 005f250c: ADD ESI,0x2
// 005f250f: MOV byte ptr [EDI + 0x1],AL
// 005f2512: ADD EDI,0x2
// 005f2515: CMP AL,0x0
// 005f2517: JNZ 0x005f2501
//   XREF to: 005f2501 (CONDITIONAL_JUMP)
// 005f2519: POP EDI
//   Label: LAB_005f2519
// 005f251a: PUSH EBP
// 005f251b: MOV EAX,dword ptr [EBX]
// 005f251d: PUSH EBX
// 005f251e: CALL dword ptr [EAX + 0x8]
// 005f2521: ADD ESP,0x8
// 005f2524: MOV dword ptr [EBX + 0x118],EAX
// 005f252a: PUSH EBP
// 005f252b: MOV EAX,dword ptr [EBX]
// 005f252d: PUSH EBX
// 005f252e: CALL dword ptr [EAX + 0xc]
// 005f2531: ADD ESP,0x8
// 005f2534: MOV dword ptr [EBX + 0x11c],EAX
// 005f253a: SUB ECX,ECX
// 005f253c: DEC ECX
// 005f253d: XOR EAX,EAX
// 005f253f: SCASB.REPNE ES:EDI
// 005f2541: NOT ECX
// 005f2543: DEC ECX
// 005f2544: MOV EAX,dword ptr [ESP + 0x50]
// 005f2548: MOV ESI,ECX
// 005f254a: MOV EDI,ECX
// 005f254c: CMP EAX,-0x1
// 005f254f: JZ 0x005f2572
//   XREF to: 005f2572 (CONDITIONAL_JUMP)
// 005f2551: MOV EDX,dword ptr [ESP + 0xc]
// 005f2555: PUSH EDX
// 005f2556: MOV ECX,dword ptr [EBX + 0x4]
// 005f2559: PUSH ECX
// 005f255a: CALL dword ptr CS:[0x6113f8]
//   XREF to: EXTERNAL:0000000d (COMPUTED_CALL)
//   XREF to: 006113f8 (READ)
// 005f2561: PUSH ESI
// 005f2562: PUSH EBP
// 005f2563: PUSH 0x1
// 005f2565: PUSH 0x1
// 005f2567: MOV ESI,dword ptr [EBX + 0x4]
// 005f256a: PUSH ESI
// 005f256b: CALL dword ptr CS:[0x6113fc]
//   XREF to: EXTERNAL:0000000e (COMPUTED_CALL)
//   XREF to: 006113fc (READ)
// 005f2572: MOV EAX,dword ptr [ESP]
//   Label: LAB_005f2572
// 005f2575: PUSH EAX
// 005f2576: MOV EDX,dword ptr [EBX + 0x4]
// 005f2579: PUSH EDX
// 005f257a: CALL dword ptr CS:[0x6113f8]
//   XREF to: EXTERNAL:0000000d (COMPUTED_CALL)
//   XREF to: 006113f8 (READ)
// 005f2581: PUSH EDI
// 005f2582: PUSH EBP
// 005f2583: PUSH 0x0
// 005f2585: PUSH 0x0
// 005f2587: MOV ECX,dword ptr [EBX + 0x4]
// 005f258a: PUSH ECX
// 005f258b: CALL dword ptr CS:[0x6113fc]
//   XREF to: EXTERNAL:0000000e (COMPUTED_CALL)
//   XREF to: 006113fc (READ)
// 005f2592: MOV ESI,dword ptr [ESP + 0x44]
//   Label: LAB_005f2592
//   XREF to: Stack[0x10] (READ)
// 005f2596: MOV EAX,dword ptr [EBX + 0x120]
// 005f259c: MOV EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 005f25a2: ADD EAX,ESI
// 005f25a4: CMP EAX,EDI
// 005f25a6: JL 0x005f26e5
//   XREF to: 005f26e5 (CONDITIONAL_JUMP)
// 005f25ac: MOV EBP,EDI
// 005f25ae: SUB EBP,ESI
// 005f25b0: MOV EDX,dword ptr [ESP + 0x48]
//   Label: LAB_005f25b0
//   XREF to: Stack[0x14] (READ)
// 005f25b4: MOV EAX,dword ptr [EBX + 0x124]
// 005f25ba: MOV ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005f25c0: ADD EAX,EDX
// 005f25c2: CMP EAX,ECX
// 005f25c4: JL 0x005f26f0
//   XREF to: 005f26f0 (CONDITIONAL_JUMP)
// 005f25ca: MOV EAX,ECX
// 005f25cc: SUB EAX,EDX
// 005f25ce: MOV EDI,dword ptr [EBX + 0x118]
//   Label: LAB_005f25ce
// 005f25d4: MOV dword ptr [ESP + 0x10],EAX
// 005f25d8: CMP EBP,EDI
// 005f25da: JLE 0x005f25de
//   XREF to: 005f25de (CONDITIONAL_JUMP)
// 005f25dc: MOV EBP,EDI
// 005f25de: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_005f25de
// 005f25e2: MOV EDX,dword ptr [EBX + 0x11c]
// 005f25e8: CMP EAX,EDX
// 005f25ea: JLE 0x005f25f0
//   XREF to: 005f25f0 (CONDITIONAL_JUMP)
// 005f25ec: MOV dword ptr [ESP + 0x10],EDX
// 005f25f0: CMP dword ptr [0x0067939c],0x10
//   Label: LAB_005f25f0
//   XREF to: 0067939c (READ)
// 005f25f7: JNZ 0x005f27d7
//   XREF to: 005f27d7 (CONDITIONAL_JUMP)
// 005f25fd: XOR EDI,EDI
// 005f25ff: MOV EAX,dword ptr [ESP + 0x10]
// 005f2603: MOV dword ptr [ESP + 0x1c],EDI
// 005f2607: TEST EAX,EAX
// 005f2609: JLE 0x005f2647
//   XREF to: 005f2647 (CONDITIONAL_JUMP)
// 005f260b: MOV EAX,dword ptr [ESP + 0x48]
// 005f260f: MOV dword ptr [ESP + 0x18],EAX
// 005f2613: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_005f2613
// 005f2617: ADD EAX,dword ptr [EBX + 0x134]
// 005f261d: TEST EAX,EAX
// 005f261f: JL 0x005f262d
//   XREF to: 005f262d (CONDITIONAL_JUMP)
// 005f2621: CMP EAX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005f2627: JL 0x005f26fb
//   XREF to: 005f26fb (CONDITIONAL_JUMP)
// 005f262d: MOV ECX,dword ptr [ESP + 0x18]
//   Label: LAB_005f262d
// 005f2631: MOV ESI,dword ptr [ESP + 0x1c]
// 005f2635: MOV EDI,dword ptr [ESP + 0x10]
// 005f2639: INC ECX
// 005f263a: INC ESI
// 005f263b: MOV dword ptr [ESP + 0x18],ECX
// 005f263f: MOV dword ptr [ESP + 0x1c],ESI
// 005f2643: CMP ESI,EDI
// 005f2645: JL 0x005f2613
//   XREF to: 005f2613 (CONDITIONAL_JUMP)
// 005f2647: ADD ESP,0x24
//   Label: LAB_005f2647
// 005f264a: POP EBP
// 005f264b: POP EDI
// 005f264c: POP ESI
// 005f264d: POP EBX
// 005f264e: RET
// 005f264f: PUSH EBP
//   Label: LAB_005f264f
// 005f2650: LEA EAX,[EBX + 0x18]
// 005f2653: PUSH EAX
// 005f2654: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 005f2659: ADD ESP,0x8
// 005f265c: TEST EAX,EAX
// 005f265e: JNZ 0x005f246b
//   XREF to: 005f246b (CONDITIONAL_JUMP)
// 005f2664: JMP 0x005f2592
//   XREF to: 005f2592 (UNCONDITIONAL_JUMP)
// 005f2669: CALL engine_font.cpp_getDefaultTextColor_FUN_004ce220
//   Label: LAB_005f2669
//   XREF to: 004ce220 (UNCONDITIONAL_CALL)
// 005f266e: MOV EDX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 005f2674: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x34] (DATA)
// 005f2677: CMP EDX,0x10
// 005f267a: JNZ 0x005f24bc
//   XREF to: 005f24bc (CONDITIONAL_JUMP)
// 005f2680: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 005f2686: MOV EDX,EAX
// 005f2688: SHR EDX,CL
// 005f268a: MOV CL,byte ptr [0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 005f2690: SHL EDX,CL
// 005f2692: AND EDX,0xff
// 005f2698: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 005f269e: MOV ESI,EDX
// 005f26a0: MOV EDX,EAX
// 005f26a2: SHR EDX,CL
// 005f26a4: MOV CL,byte ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 005f26aa: SHL EDX,CL
// 005f26ac: AND EDX,0xff
// 005f26b2: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 005f26b8: MOV EDI,EDX
// 005f26ba: SHR EAX,CL
// 005f26bc: MOV CL,byte ptr [0x02d01f44]
//   XREF to: 02d01f44 (READ)
// 005f26c2: XOR EDX,EDX
// 005f26c4: SHL EAX,CL
// 005f26c6: XOR ECX,ECX
// 005f26c8: MOV DX,SI
// 005f26cb: MOV CX,DI
// 005f26ce: SHL EDX,0x10
// 005f26d1: SHL ECX,0x8
// 005f26d4: AND EAX,0xff
// 005f26d9: OR EDX,ECX
// 005f26db: AND EAX,0xffff
// 005f26e0: JMP 0x005f24b7
//   XREF to: 005f24b7 (UNCONDITIONAL_JUMP)
// 005f26e5: MOV EBP,dword ptr [EBX + 0x120]
//   Label: LAB_005f26e5
// 005f26eb: JMP 0x005f25b0
//   XREF to: 005f25b0 (UNCONDITIONAL_JUMP)
// 005f26f0: MOV EAX,dword ptr [EBX + 0x124]
//   Label: LAB_005f26f0
// 005f26f6: JMP 0x005f25ce
//   XREF to: 005f25ce (UNCONDITIONAL_JUMP)
// 005f26fb: MOV ESI,dword ptr [EAX*0x4 + 0x2cf6a9c]
//   Label: LAB_005f26fb
//   XREF to: 02cf6a9c (DATA)
// 005f2702: XOR EAX,EAX
// 005f2704: TEST EBP,EBP
// 005f2706: JLE 0x005f262d
//   XREF to: 005f262d (CONDITIONAL_JUMP)
// 005f270c: MOV EDX,dword ptr [ESP + 0x44]
// 005f2710: ADD EDX,EDX
// 005f2712: ADD ESI,EDX
// 005f2714: MOV EDX,dword ptr [ESP + 0x1c]
//   Label: LAB_005f2714
// 005f2718: IMUL EDX,dword ptr [EBX + 0x120]
// 005f271f: MOV ECX,dword ptr [EBX + 0x14]
// 005f2722: ADD EDX,EAX
// 005f2724: MOV DX,word ptr [ECX + EDX*0x2]
// 005f2728: CMP DX,0x7c1f
// 005f272d: JZ 0x005f27c6
//   XREF to: 005f27c6 (CONDITIONAL_JUMP)
// 005f2733: XOR ECX,ECX
// 005f2735: MOV CX,DX
// 005f2738: MOV EDI,ECX
// 005f273a: SAR EDI,0xa
// 005f273d: SAR ECX,0x5
// 005f2740: SHL ECX,0x3
// 005f2743: SHL EDI,0x3
// 005f2746: AND ECX,0xff
// 005f274c: AND EDI,0xff
// 005f2752: MOV dword ptr [ESP + 0x20],ECX
// 005f2756: MOV dword ptr [ESP + 0x4],EDI
// 005f275a: XOR ECX,ECX
// 005f275c: MOV EDI,dword ptr [ESP + 0x4]
// 005f2760: MOV CX,DI
// 005f2763: MOV dword ptr [ESP + 0x4],ECX
// 005f2767: MOV EDI,dword ptr [ESP + 0x4]
// 005f276b: MOV CL,byte ptr [0x02d01f2c]
//   XREF to: 02d01f2c (READ)
// 005f2771: SHR EDI,CL
// 005f2773: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 005f2779: SHL EDI,CL
// 005f277b: XOR ECX,ECX
// 005f277d: MOV CX,word ptr [ESP + 0x20]
// 005f2782: MOV dword ptr [ESP + 0x4],ECX
// 005f2786: MOV dword ptr [ESP + 0x8],EDI
// 005f278a: MOV EDI,dword ptr [ESP + 0x4]
// 005f278e: MOV CL,byte ptr [0x02d01f38]
//   XREF to: 02d01f38 (READ)
// 005f2794: SHR EDI,CL
// 005f2796: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 005f279c: SHL EDI,CL
// 005f279e: SHL EDX,0x3
// 005f27a1: MOV ECX,EDI
// 005f27a3: MOV EDI,dword ptr [ESP + 0x8]
// 005f27a7: XOR DH,DH
// 005f27a9: OR EDI,ECX
// 005f27ab: MOV CL,byte ptr [0x02d01f44]
//   XREF to: 02d01f44 (READ)
// 005f27b1: AND EDX,0xffff
// 005f27b7: SHR EDX,CL
// 005f27b9: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 005f27bf: SHL EDX,CL
// 005f27c1: OR EDX,EDI
// 005f27c3: MOV word ptr [ESI],DX
// 005f27c6: INC EAX
//   Label: LAB_005f27c6
// 005f27c7: ADD ESI,0x2
// 005f27ca: CMP EAX,EBP
// 005f27cc: JGE 0x005f262d
//   XREF to: 005f262d (CONDITIONAL_JUMP)
// 005f27d2: JMP 0x005f2714
//   XREF to: 005f2714 (UNCONDITIONAL_JUMP)
// 005f27d7: MOV ESI,dword ptr [ESP + 0x10]
//   Label: LAB_005f27d7
// 005f27db: XOR EDI,EDI
// 005f27dd: TEST ESI,ESI
// 005f27df: JLE 0x005f2647
//   XREF to: 005f2647 (CONDITIONAL_JUMP)
// 005f27e5: MOV EAX,dword ptr [ESP + 0x48]
// 005f27e9: MOV dword ptr [ESP + 0x14],EAX
// 005f27ed: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_005f27ed
// 005f27f1: ADD EAX,dword ptr [EBX + 0x134]
// 005f27f7: TEST EAX,EAX
// 005f27f9: JL 0x005f2803
//   XREF to: 005f2803 (CONDITIONAL_JUMP)
// 005f27fb: CMP EAX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005f2801: JL 0x005f281b
//   XREF to: 005f281b (CONDITIONAL_JUMP)
// 005f2803: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_005f2803
// 005f2807: MOV ECX,dword ptr [ESP + 0x10]
// 005f280b: INC EDX
// 005f280c: INC EDI
// 005f280d: MOV dword ptr [ESP + 0x14],EDX
// 005f2811: CMP EDI,ECX
// 005f2813: JGE 0x005f2647
//   XREF to: 005f2647 (CONDITIONAL_JUMP)
// 005f2819: JMP 0x005f27ed
//   XREF to: 005f27ed (UNCONDITIONAL_JUMP)
// 005f281b: MOV EDX,dword ptr [EAX*0x4 + 0x2cf6a9c]
//   Label: LAB_005f281b
//   XREF to: 02cf6a9c (DATA)
// 005f2822: XOR EAX,EAX
// 005f2824: TEST EBP,EBP
// 005f2826: JLE 0x005f2803
//   XREF to: 005f2803 (CONDITIONAL_JUMP)
// 005f2828: MOV ESI,dword ptr [ESP + 0x44]
// 005f282c: SHL ESI,0x2
// 005f282f: ADD ESI,EDX
// 005f2831: MOV EDX,dword ptr [EBX + 0x120]
//   Label: LAB_005f2831
// 005f2837: IMUL EDX,EDI
// 005f283a: ADD EDX,EAX
// 005f283c: LEA ECX,[EDX*0x4 + 0x0]
// 005f2843: MOV EDX,dword ptr [EBX + 0x14]
// 005f2846: MOV EDX,dword ptr [ECX + EDX*0x1]
// 005f2849: CMP EDX,0xff00ff
// 005f284f: JZ 0x005f2853
//   XREF to: 005f2853 (CONDITIONAL_JUMP)
// 005f2851: MOV dword ptr [ESI],EDX
// 005f2853: INC EAX
//   Label: LAB_005f2853
// 005f2854: ADD ESI,0x4
// 005f2857: CMP EAX,EBP
// 005f2859: JGE 0x005f2803
//   XREF to: 005f2803 (CONDITIONAL_JUMP)
// 005f285b: JMP 0x005f2831
//   XREF to: 005f2831 (UNCONDITIONAL_JUMP)
