// Name: shape_design.c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0
// Address: 0045bbc0
// Address Range: [[0045bbc0, 0045bd0a]]
// Convention: __cdecl
// Signature: void shape_design.c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0(void)
// Cross-references:
//   shape_design.c_showPointEditor_FUN_0045c6c0 (0045c6c0) at 0045c86e [UNCONDITIONAL_CALL]
// Globals:
//   double g_MouseAspectRatioMultiplier = 3
//   double g_AspectRatioCorrection = 0.25
//   double g_MouseViewportCenterOffset = 0.5
//   float g_MouseWorldScaleFactor = 0.00390625
//   TerminatedCString s_f_f_f_0061b2e2
//   int g_MouseReferenceY = 0x64
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_ZoomLevel
//   int g_StoredWorldYCoordinate
//   int g_MouseX
//   int g_MouseY
//   int g_MouseButtonFlags
//   int g_ActiveRenderColor
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_drawLine_FUN_004011b0
//   engine_2d.c_drawText_FUN_00401fd0

#include "nocturne.h"

void __cdecl shape_design_c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  
  fVar4 = (float)g_WindowWidth;
  fVar3 = (float)g_MouseAspectRatioMultiplier;
  fVar2 = (float)g_WindowHeight;
  fVar1 = (float)g_AspectRatioCorrection;
  fVar5 = (float)g_ZoomLevel *
          (((float)g_MouseX - (float)g_WindowWidth * (float)g_MouseViewportCenterOffset) /
          ((float)g_WindowWidth * (float)g_MouseViewportCenterOffset)) * g_MouseWorldScaleFactor;
  fVar6 = (float)g_ZoomLevel *
          (-((float)g_MouseY - (float)g_WindowHeight * (float)g_MouseViewportCenterOffset) /
          ((float)g_WindowHeight * (float)g_MouseViewportCenterOffset)) * g_MouseWorldScaleFactor;
  if ((((byte)g_MouseButtonFlags & 1) != 0) && (g_MouseX < 7)) {
    g_MouseReferenceY = g_MouseY;
    g_StoredWorldYCoordinate = (int)fVar6;
  }
  iVar7 = g_StoredWorldYCoordinate;
  g_ActiveRenderColor = 0x1f;
  engine_2d_c_drawLine_FUN_004011b0(0,g_MouseReferenceY,6,g_MouseReferenceY);
  crt_stdio_c_sprintf_FUN_005fdbd0
            (&stack0xffffff90,"%f,%f,%f",(double)(fVar5 * ((fVar4 * fVar3) / fVar2) * fVar1),
             (double)fVar6,(double)(float)iVar7);
  engine_2d_c_drawText_FUN_00401fd0(&stack0xffffff90,g_WindowWidth / 2 + 2,g_WindowHeight + -0xb);
  return;
}


// Assembly code:
// 0045bbc0: PUSH EBX
//   Label: shape_design.c_drawMouseCoordinatesAndReferenceLine_FUN_0045bbc0
// 0045bbc1: PUSH ESI
// 0045bbc2: PUSH EDI
// 0045bbc3: PUSH EBP
// 0045bbc4: MOV EBP,ESP
// 0045bbc6: SUB ESP,0x60
// 0045bbcc: FILD dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0045bbd2: FMUL double ptr [0x0061b2c6]
//   XREF to: 0061b2c6 (READ)
// 0045bbd8: FILD dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0045bbde: FDIVP
// 0045bbe0: FMUL double ptr [0x0061b2ce]
//   XREF to: 0061b2ce (READ)
// 0045bbe6: FSTP float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 0045bbe9: FILD dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0045bbef: FMUL double ptr [0x0061b2d6]
//   XREF to: 0061b2d6 (READ)
// 0045bbf5: FILD dword ptr [0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 0045bbfb: FSUBRP
// 0045bbfd: FILD dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0045bc03: FMUL double ptr [0x0061b2d6]
//   XREF to: 0061b2d6 (READ)
// 0045bc09: FDIVP
// 0045bc0b: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 0045bc0e: FILD dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0045bc14: FMUL double ptr [0x0061b2d6]
//   XREF to: 0061b2d6 (READ)
// 0045bc1a: FILD dword ptr [0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 0045bc20: FSUBRP
// 0045bc22: FCHS
// 0045bc24: FILD dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0045bc2a: FMUL double ptr [0x0061b2d6]
//   XREF to: 0061b2d6 (READ)
// 0045bc30: FDIVP
// 0045bc32: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0045bc35: FILD dword ptr [0x01626344]
//   XREF to: 01626344 (READ)
// 0045bc3b: FMUL float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045bc3e: FMUL float ptr [0x0061b2de]
//   XREF to: 0061b2de (READ)
// 0045bc44: FMUL float ptr [EBP + -0x8]
//   XREF to: Stack[-0x18] (READ)
// 0045bc47: FSTP float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 0045bc4a: FILD dword ptr [0x01626344]
//   XREF to: 01626344 (READ)
// 0045bc50: FMUL float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045bc53: FMUL float ptr [0x0061b2de]
//   XREF to: 0061b2de (READ)
// 0045bc59: FSTP float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0045bc5c: TEST byte ptr [0x02cf6a94],0x1
//   XREF to: 02cf6a94 (READ)
// 0045bc63: JZ 0x0045bc6e
//   XREF to: 0045bc6e (CONDITIONAL_JUMP)
// 0045bc65: CMP dword ptr [0x02cf6a8c],0x7
//   XREF to: 02cf6a8c (READ)
// 0045bc6c: JL 0x0045bc70
//   XREF to: 0045bc70 (CONDITIONAL_JUMP)
// 0045bc6e: JMP 0x0045bc82
//   Label: LAB_0045bc6e
//   XREF to: 0045bc82 (UNCONDITIONAL_JUMP)
// 0045bc70: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_0045bc70
//   XREF to: Stack[-0x1c] (READ)
// 0045bc73: MOV [0x01626360],EAX
//   XREF to: 01626360 (WRITE)
// 0045bc78: MOV EAX,[0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 0045bc7d: MOV [0x0066eda4],EAX
//   XREF to: 0066eda4 (WRITE)
// 0045bc82: MOV EAX,[0x01626360]
//   Label: LAB_0045bc82
//   XREF to: 01626360 (READ)
// 0045bc87: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0045bc8a: MOV dword ptr [0x02d02570],0x1f
//   XREF to: 02d02570 (WRITE)
// 0045bc94: PUSH dword ptr [0x0066eda4]
//   XREF to: 0066eda4 (READ)
// 0045bc9a: PUSH 0x6
// 0045bc9c: PUSH dword ptr [0x0066eda4]
//   XREF to: 0066eda4 (READ)
// 0045bca2: PUSH 0x0
// 0045bca4: CALL engine_2d.c_drawLine_FUN_004011b0
//   XREF to: 004011b0 (UNCONDITIONAL_CALL)
// 0045bca9: ADD ESP,0x10
// 0045bcac: FLD float ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0045bcaf: SUB ESP,0x8
// 0045bcb2: FSTP double ptr [ESP]
//   XREF to: Stack[-0x78] (DATA)
// 0045bcb5: FLD float ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0045bcb8: SUB ESP,0x8
// 0045bcbb: FSTP double ptr [ESP]
//   XREF to: Stack[-0x80] (DATA)
// 0045bcbe: FLD float ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0045bcc1: SUB ESP,0x8
// 0045bcc4: FSTP double ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 0045bcc7: MOV EAX,0x61b2e2
//   XREF to: 0061b2e2 (DATA)
// 0045bccc: PUSH EAX
//   XREF to: 0061b2e2 (DATA)
// 0045bccd: LEA EAX,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 0045bcd0: PUSH EAX
// 0045bcd1: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0045bcd6: ADD ESP,0x20
// 0045bcd9: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0045bcde: SUB EAX,0xb
// 0045bce1: PUSH EAX
// 0045bce2: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0045bce7: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0045bced: SAR EDX,0x1f
// 0045bcf0: SUB EAX,EDX
// 0045bcf2: SAR EAX,0x1
// 0045bcf4: ADD EAX,0x2
// 0045bcf7: PUSH EAX
// 0045bcf8: LEA EAX,[EBP + -0x60]
//   XREF to: Stack[-0x70] (DATA)
// 0045bcfb: PUSH EAX
// 0045bcfc: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0045bd01: ADD ESP,0xc
// 0045bd04: MOV ESP,EBP
// 0045bd06: POP EBP
// 0045bd07: POP EDI
// 0045bd08: POP ESI
// 0045bd09: POP EBX
// 0045bd0a: RET
