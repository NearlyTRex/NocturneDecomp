// Name: wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0
// Address: 005f2fd0
// Address Range: [[005f2fd0, 005f30be]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0(void)
// Cross-references:
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50 (0057ae50) at 0057b1ea [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 (0057e7c0) at 0057ea4c [UNCONDITIONAL_CALL]
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580adb [UNCONDITIONAL_CALL]
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057c992 [UNCONDITIONAL_CALL]
//   shape_design.c_showPointEditor_FUN_0045c6c0 (0045c6c0) at 0045ca7b [UNCONDITIONAL_CALL]
// Globals:
//   int g_BrightnessDirection = 0x8
//   int g_MouseX
//   int g_MouseY
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   int g_ActiveRenderColor
//   int g_CrosshairBrightness
// Function calls:
//   engine_2d.c_plotPixel_FUN_00401140

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0(void)

{
  int x;
  int y;
  int iVar1;
  
  x = g_MouseX;
  g_CrosshairBrightness = g_CrosshairBrightness + g_BrightnessDirection;
  if (g_CrosshairBrightness < 0x100) {
    if (g_CrosshairBrightness < 0) {
      g_BrightnessDirection = 8;
      g_CrosshairBrightness = 0;
    }
  }
  else {
    g_BrightnessDirection = -8;
    g_CrosshairBrightness = 0xff;
  }
  iVar1 = -5;
  g_ActiveRenderColor = 1;
  do {
    y = g_MouseY + iVar1;
    if ((((g_ClipLeft < x) && (g_ClipTop < y)) && (x < g_ClipRight)) && (y < g_ClipBottom)) {
      engine_2d_c_plotPixel_FUN_00401140(x,y);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  iVar1 = x + -5;
  do {
    while (((g_ClipLeft < iVar1 && (g_ClipTop < g_MouseY)) &&
           ((iVar1 < g_ClipRight && (g_MouseY < g_ClipBottom))))) {
      engine_2d_c_plotPixel_FUN_00401140(iVar1,g_MouseY);
      iVar1 = iVar1 + 1;
      if (iVar1 == x + 6) {
        return;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != x + 6);
  return;
}


// Assembly code:
// 005f2fd0: PUSH EBX
//   Label: wincore_winrun.cpp_drawCrosshair_FUN_005f2fd0
// 005f2fd1: PUSH ESI
// 005f2fd2: PUSH EDI
// 005f2fd3: PUSH EBP
// 005f2fd4: MOV EAX,[0x00684998]
//   XREF to: 00684998 (READ)
// 005f2fd9: MOV EDX,dword ptr [0x03f96c28]
//   XREF to: 03f96c28 (READ)
// 005f2fdf: ADD EDX,EAX
// 005f2fe1: MOV ESI,dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 005f2fe7: MOV dword ptr [0x03f96c28],EDX
//   XREF to: 03f96c28 (WRITE)
// 005f2fed: CMP EDX,0xff
// 005f2ff3: JG 0x005f303f
//   XREF to: 005f303f (CONDITIONAL_JUMP)
// 005f2ff5: TEST EDX,EDX
// 005f2ff7: JL 0x005f3056
//   XREF to: 005f3056 (CONDITIONAL_JUMP)
// 005f2ff9: MOV ECX,0x1
//   Label: LAB_005f2ff9
// 005f2ffe: MOV EBX,0xfffffffb
// 005f3003: MOV dword ptr [0x02d02570],ECX
//   XREF to: 02d02570 (WRITE)
// 005f3009: MOV EAX,[0x02cf6a90]
//   Label: LAB_005f3009
//   XREF to: 02cf6a90 (READ)
// 005f300e: MOV EDI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 005f3014: ADD EAX,EBX
// 005f3016: CMP ESI,EDI
// 005f3018: JG 0x005f306b
//   XREF to: 005f306b (CONDITIONAL_JUMP)
// 005f301a: INC EBX
//   Label: LAB_005f301a
// 005f301b: CMP EBX,0x5
// 005f301e: JLE 0x005f3009
//   XREF to: 005f3009 (CONDITIONAL_JUMP)
// 005f3020: LEA EBX,[ESI + -0x5]
// 005f3023: ADD ESI,0x6
// 005f3026: MOV EDI,dword ptr [0x02d02558]
//   Label: LAB_005f3026
//   XREF to: 02d02558 (READ)
// 005f302c: MOV EAX,[0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 005f3031: CMP EBX,EDI
// 005f3033: JG 0x005f308f
//   XREF to: 005f308f (CONDITIONAL_JUMP)
// 005f3035: INC EBX
//   Label: LAB_005f3035
// 005f3036: CMP EBX,ESI
// 005f3038: JNZ 0x005f3026
//   XREF to: 005f3026 (CONDITIONAL_JUMP)
// 005f303a: POP EBP
// 005f303b: POP EDI
// 005f303c: POP ESI
// 005f303d: POP EBX
// 005f303e: RET
// 005f303f: MOV EDX,0xfffffff8
//   Label: LAB_005f303f
// 005f3044: MOV EAX,0xff
// 005f3049: MOV dword ptr [0x00684998],EDX
//   XREF to: 00684998 (WRITE)
// 005f304f: MOV [0x03f96c28],EAX
//   XREF to: 03f96c28 (WRITE)
// 005f3054: JMP 0x005f2ff9
//   XREF to: 005f2ff9 (UNCONDITIONAL_JUMP)
// 005f3056: MOV EBP,0x8
//   Label: LAB_005f3056
// 005f305b: XOR EDI,EDI
// 005f305d: MOV dword ptr [0x00684998],EBP
//   XREF to: 00684998 (WRITE)
// 005f3063: MOV dword ptr [0x03f96c28],EDI
//   XREF to: 03f96c28 (WRITE)
// 005f3069: JMP 0x005f2ff9
//   XREF to: 005f2ff9 (UNCONDITIONAL_JUMP)
// 005f306b: CMP EAX,dword ptr [0x02d0255c]
//   Label: LAB_005f306b
//   XREF to: 02d0255c (READ)
// 005f3071: JLE 0x005f301a
//   XREF to: 005f301a (CONDITIONAL_JUMP)
// 005f3073: CMP ESI,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 005f3079: JGE 0x005f301a
//   XREF to: 005f301a (CONDITIONAL_JUMP)
// 005f307b: CMP EAX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 005f3081: JGE 0x005f301a
//   XREF to: 005f301a (CONDITIONAL_JUMP)
// 005f3083: PUSH EAX
// 005f3084: PUSH ESI
// 005f3085: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 005f308a: ADD ESP,0x8
// 005f308d: JMP 0x005f301a
//   XREF to: 005f301a (UNCONDITIONAL_JUMP)
// 005f308f: CMP EAX,dword ptr [0x02d0255c]
//   Label: LAB_005f308f
//   XREF to: 02d0255c (READ)
// 005f3095: JLE 0x005f3035
//   XREF to: 005f3035 (CONDITIONAL_JUMP)
// 005f3097: CMP EBX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 005f309d: JGE 0x005f3035
//   XREF to: 005f3035 (CONDITIONAL_JUMP)
// 005f309f: CMP EAX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 005f30a5: JGE 0x005f3035
//   XREF to: 005f3035 (CONDITIONAL_JUMP)
// 005f30a7: PUSH EAX
// 005f30a8: PUSH EBX
// 005f30a9: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 005f30ae: ADD ESP,0x8
// 005f30b1: INC EBX
// 005f30b2: CMP EBX,ESI
// 005f30b4: JNZ 0x005f3026
//   XREF to: 005f3026 (CONDITIONAL_JUMP)
// 005f30ba: POP EBP
// 005f30bb: POP EDI
// 005f30bc: POP ESI
// 005f30bd: POP EBX
// 005f30be: RET
