// Name: engine_2d.c_drawHLine_FUN_00402ee0
// Address: 00402ee0
// Address Range: [[00402ee0, 00402fe7]]
// Convention: __cdecl
// Signature: void engine_2d.c_drawHLine_FUN_00402ee0(int x1, int y, int x2)
// Cross-references:
//   core_msnedit.cpp_FUN_0053c4f0 (0053c4f0) at 0053c69f [UNCONDITIONAL_CALL]
//   core_netgame.cpp_FUN_00541390 (00541390) at 0054150e [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005645d0 (005645d0) at 005647c4 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawRect_FUN_00403120 (00403120) at 00403142 [UNCONDITIONAL_CALL]
//   engine_2d.c_fillRectColor_FUN_00403170 (00403170) at 004031d4 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 (004a65e0) at 004a6810 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_drawWindowSeparator_FUN_004a1230 (004a1230) at 004a1315 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_paintCurrentWindow_FUN_004a0f80 (004a0f80) at 004a1204 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 (004a0530) at 004a06a2 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_draw3DBorder_FUN_004a58f0 (004a58f0) at 004a5951 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0 (004a59a0) at 004a5a07 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_2d_c_006131d7
//   TerminatedCString s_hLine_invalid_bitsPerPix_006131e6
//   int g_BitsPerPixel = 0x8
//   void*[1024] g_ScreenBufferArray
//   ushort[256] g_ColorTable16
//   uint[256] g_ColorTable32
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   int g_ActiveRenderColor
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

void __cdecl engine_2d_c_drawHLine_FUN_00402ee0(int x1,int y,int x2)

{
  ushort uVar1;
  uint uVar2;
  ulong count;
  ushort *puVar3;
  uint *puVar4;
  
  if ((g_ClipTop <= y) && (y <= g_ClipBottom)) {
    if (x1 < g_ClipLeft) {
      x1 = g_ClipLeft;
    }
    if (g_ClipRight < x2) {
      x2 = g_ClipRight;
    }
    count = (x2 - x1) + 1;
    if (0 < (int)count) {
      if ((uint)g_BitsPerPixel < 0x10) {
        if (g_BitsPerPixel != 8) {
LAB_00402fc2:
          g_CurrentFilename = "..\\engine\\2d.c";
          g_CurrentLineNumber = 0x8a6;
          core_main_c_displayErrorAndQuit_FUN_00506f10("hLine - invalid bitsPerPixel");
          return;
        }
        crt_memory_c_memset_FUN_005fde40
                  ((void *)(x1 + (int)g_ScreenBufferArray[y]),g_ActiveRenderColor,count);
      }
      else if ((uint)g_BitsPerPixel < 0x11) {
        uVar1 = g_ColorTable16[g_ActiveRenderColor];
        puVar3 = (ushort *)(x1 * 2 + (int)g_ScreenBufferArray[y]);
        if (0 < (int)count) {
          do {
            count = count - 1;
            *puVar3 = uVar1;
            puVar3 = puVar3 + 1;
          } while (0 < (int)count);
          return;
        }
      }
      else {
        if (g_BitsPerPixel != 0x20) goto LAB_00402fc2;
        uVar2 = g_ColorTable32[g_ActiveRenderColor];
        puVar4 = (uint *)(x1 * 4 + (int)g_ScreenBufferArray[y]);
        if (0 < (int)count) {
          do {
            count = count - 1;
            *puVar4 = uVar2;
            puVar4 = puVar4 + 1;
          } while (0 < (int)count);
          return;
        }
      }
    }
  }
  return;
}


// Assembly code:
// 00402ee0: PUSH EBX
//   Label: engine_2d.c_drawHLine_FUN_00402ee0
// 00402ee1: PUSH EDI
// 00402ee2: PUSH EBP
// 00402ee3: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00402ee7: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00402eeb: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 00402eef: CMP ECX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 00402ef5: JL 0x00402f60
//   XREF to: 00402f60 (CONDITIONAL_JUMP)
// 00402ef7: CMP ECX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 00402efd: JG 0x00402f60
//   XREF to: 00402f60 (CONDITIONAL_JUMP)
// 00402eff: MOV EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 00402f05: CMP EDX,EDI
// 00402f07: JGE 0x00402f0b
//   XREF to: 00402f0b (CONDITIONAL_JUMP)
// 00402f09: MOV EDX,EDI
// 00402f0b: MOV EBP,dword ptr [0x02d02560]
//   Label: LAB_00402f0b
//   XREF to: 02d02560 (READ)
// 00402f11: CMP EAX,EBP
// 00402f13: JLE 0x00402f17
//   XREF to: 00402f17 (CONDITIONAL_JUMP)
// 00402f15: MOV EAX,EBP
// 00402f17: SUB EAX,EDX
//   Label: LAB_00402f17
// 00402f19: INC EAX
// 00402f1a: CMP EAX,0x1
// 00402f1d: JL 0x00402f60
//   XREF to: 00402f60 (CONDITIONAL_JUMP)
// 00402f1f: MOV EBX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00402f25: SHL ECX,0x2
// 00402f28: CMP EBX,0x10
// 00402f2b: JNC 0x00402fbb
//   XREF to: 00402fbb (CONDITIONAL_JUMP)
// 00402f31: CMP EBX,0x8
// 00402f34: JNZ 0x00402fc2
//   XREF to: 00402fc2 (CONDITIONAL_JUMP)
// 00402f3a: PUSH EAX
// 00402f3b: MOV EBX,dword ptr [0x02d02570]
//   XREF to: 02d02570 (READ)
// 00402f41: MOV EAX,dword ptr [ECX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00402f47: PUSH EBX
// 00402f48: ADD EDX,EAX
// 00402f4a: PUSH EDX
// 00402f4b: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00402f50: ADD ESP,0xc
// 00402f53: LEA EAX,[EAX]
// 00402f59: LEA EDX,[EDX]
// 00402f5f: NOP
// 00402f60: POP EBP
//   Label: LAB_00402f60
// 00402f61: POP EDI
// 00402f62: POP EBX
// 00402f63: RET
// 00402f64: MOV EBX,dword ptr [0x02d02570]
//   Label: LAB_00402f64
//   XREF to: 02d02570 (READ)
// 00402f6a: MOV ECX,dword ptr [ECX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00402f70: ADD EDX,EDX
// 00402f72: MOV BX,word ptr [EBX*0x2 + 0x2d01020]
//   XREF to: 02d01020 (DATA)
// 00402f7a: ADD EDX,ECX
// 00402f7c: TEST EAX,EAX
// 00402f7e: JLE 0x00402f60
//   XREF to: 00402f60 (CONDITIONAL_JUMP)
// 00402f80: ADD EDX,0x2
//   Label: LAB_00402f80
// 00402f83: DEC EAX
// 00402f84: MOV word ptr [EDX + -0x2],BX
// 00402f88: TEST EAX,EAX
// 00402f8a: JG 0x00402f80
//   XREF to: 00402f80 (CONDITIONAL_JUMP)
// 00402f8c: POP EBP
// 00402f8d: POP EDI
// 00402f8e: POP EBX
// 00402f8f: RET
// 00402f90: MOV EBX,dword ptr [0x02d02570]
//   Label: LAB_00402f90
//   XREF to: 02d02570 (READ)
// 00402f96: SHL EDX,0x2
// 00402f99: MOV ECX,dword ptr [ECX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
// 00402f9f: MOV EBX,dword ptr [EBX*0x4 + 0x2d01220]
//   XREF to: 02d01220 (DATA)
// 00402fa6: ADD EDX,ECX
// 00402fa8: TEST EAX,EAX
// 00402faa: JLE 0x00402f60
//   XREF to: 00402f60 (CONDITIONAL_JUMP)
// 00402fac: ADD EDX,0x4
//   Label: LAB_00402fac
// 00402faf: DEC EAX
// 00402fb0: MOV dword ptr [EDX + -0x4],EBX
// 00402fb3: TEST EAX,EAX
// 00402fb5: JG 0x00402fac
//   XREF to: 00402fac (CONDITIONAL_JUMP)
// 00402fb7: POP EBP
// 00402fb8: POP EDI
// 00402fb9: POP EBX
// 00402fba: RET
// 00402fbb: JBE 0x00402f64
//   Label: LAB_00402fbb
//   XREF to: 00402f64 (CONDITIONAL_JUMP)
// 00402fbd: CMP EBX,0x20
// 00402fc0: JZ 0x00402f90
//   XREF to: 00402f90 (CONDITIONAL_JUMP)
// 00402fc2: MOV EAX,0x6131d7
//   Label: LAB_00402fc2
//   XREF to: 006131d7 (PARAM)
// 00402fc7: MOV EDX,0x8a6
// 00402fcc: PUSH 0x6131e6
//   XREF to: 006131e6 (DATA)
// 00402fd1: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00402fd6: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00402fdc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00402fe1: ADD ESP,0x4
// 00402fe4: POP EBP
// 00402fe5: POP EDI
// 00402fe6: POP EBX
// 00402fe7: RET
