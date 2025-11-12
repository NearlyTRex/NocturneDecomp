// Name: crt_stdio.c_vsprintf_FUN_005fdba8
// Address: 005fdba8
// Address Range: [[005fdba8, 005fdbce]]
// Convention: __cdecl
// Signature: int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t * args)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790 (00489790) at 004897bc [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_00489bb0 (00489bb0) at 00489bdb [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40 (00489c40) at 00489c6a [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00489af0 (00489af0) at 00489b1b [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940 (00489940) at 0048996d [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30 (00489a30) at 00489a5d [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860 (00489860) at 0048988d [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0 (004895f0) at 0048961c [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450 (00489450) at 0048947c [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0 (004896c0) at 004896ec [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520 (00489520) at 0048954c [UNCONDITIONAL_CALL]
//   core_event.cpp_FUN_004aa2a0 (004aa2a0) at 004aa2b7 [UNCONDITIONAL_CALL]
//   core_main.c_displayErrorAndQuit_FUN_00506f10 (00506f10) at 00506f44 [UNCONDITIONAL_CALL]
//   crt_stdio.c_sprintf_FUN_005fdbd0 (005fdbd0) at 005fdbe8 [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextCenteredAtColorFormatted_FUN_00402650 (00402650) at 0040267b [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextCenteredAtFormatted_FUN_004022e0 (004022e0) at 0040230b [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextCenteredColorFormatted_FUN_00402730 (00402730) at 0040275c [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextCenteredFormatted_FUN_004023c0 (004023c0) at 004023ec [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextColorFormatted_FUN_004024c0 (004024c0) at 004024eb [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextFormatted_FUN_00402150 (00402150) at 0040217b [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextRightAlignedColorFormatted_FUN_00402580 (00402580) at 004025ab [UNCONDITIONAL_CALL]
//   engine_2d.c_drawTextRightAlignedFormatted_FUN_00402210 (00402210) at 0040223b [UNCONDITIONAL_CALL]
//   engine_2d.c_getStringWidthFormatted_FUN_004027a0 (004027a0) at 004027c9 [UNCONDITIONAL_CALL]
//   engine_console.cpp_CConsole_printf_FUN_00441890 (00441890) at 004418c8 [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_drawTextCenterF_FUN_004cde70 (004cde70) at 004cde8f [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_drawTextCenterInBoundsF_FUN_004cdf80 (004cdf80) at 004cdf9f [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_drawTextCenterInClipF_FUN_004ce090 (004ce090) at 004ce0af [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_drawTextF_FUN_004cdc70 (004cdc70) at 004cdc8f [UNCONDITIONAL_CALL]
//   engine_font.cpp_CBitFont_printfRight_FUN_004cdd70 (004cdd70) at 004cdd8f [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790 (0049e790) at 0049e7db [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870 (0049e870) at 0049e8b9 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060 (0049f060) at 0049f07b [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f180 (0049f180) at 0049f19b [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740 (0049e740) at 0049e758 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 (0049e6a0) at 0049e6b8 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0 (0049e6f0) at 0049e708 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0 (0049f0f0) at 0049f10b [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_logSoundError_FUN_005adba0 (005adba0) at 005adbcb [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_FormatEngine_FUN_00602950

#include "nocturne.h"

int __cdecl crt_stdio_c_vsprintf_FUN_005fdba8(char *buffer,char *format,va_list_t *args)

{
  int iVar1;
  
  iVar1 = crt_stdio_c_FormatEngine_FUN_00602950
                    (buffer,format,(va_list_t)args,crt_stdio_c_StringBufferCallback_FUN_005fdb90);
  format[iVar1] = '\0';
  return iVar1;
}


// Assembly code:
// 005fdba8: PUSH EBX
//   Label: crt_stdio.c_vsprintf_FUN_005fdba8
// 005fdba9: PUSH 0x5fdb90
//   XREF to: 005fdb90 (DATA)
// 005fdbae: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 005fdbb2: PUSH EDX
// 005fdbb3: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005fdbb7: PUSH EBX
// 005fdbb8: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005fdbbc: PUSH ECX
// 005fdbbd: CALL crt_stdio.c_FormatEngine_FUN_00602950
//   XREF to: 00602950 (UNCONDITIONAL_CALL)
// 005fdbc2: ADD ESP,0x10
// 005fdbc5: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005fdbc9: MOV byte ptr [EDX + EAX*0x1],0x0
// 005fdbcd: POP EBX
// 005fdbce: RET
