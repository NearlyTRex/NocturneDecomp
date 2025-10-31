// Name: wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0
// Address: 005ed8f0
// Address Range: [[005ed8f0, 005eda17]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0(void)
// Cross-references:
//   engine_2d.c_initGraphicsSystem_FUN_00401010 (00401010) at 00401083 [UNCONDITIONAL_CALL]
//   shape_design.c_loadPalette_FUN_0046e810 (0046e810) at 0046eb51 [UNCONDITIONAL_CALL]
//   shape_design.c_showShapeEditorMenu_FUN_0046f290 (0046f290) at 0046f2ee [UNCONDITIONAL_CALL]
//   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0 (005ecef0) at 005ed250 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_wincore_wddvmem_cpp_006579a8
//   TerminatedCString s_setpal_Unable_to_create__006579bf
//   TerminatedCString s_wincore_wddvmem_cpp_006579e8
//   TerminatedCString s_setpal_Unable_to_set_fro_006579ff
//   int g_BitsPerPixel = 0x8
//   ushort[256] g_ColorTable16
//   char[768] g_SourcePaletteData
//   undefined4 CHAR_ARRAY_02d01f49
//   undefined4 CHAR_ARRAY_02d01f4a
//   undefined4 CHAR_ARRAY_02d01f4b
//   undefined4 CHAR_ARRAY_02d01f4c
//   undefined4 CHAR_ARRAY_02d01f4d
//   int g_UseExternalRenderer
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   APIDLL_setColorTable16* g_APIDLL_setColorTable16
//   IDirectDraw* g_DirectDrawObject
//   IDirectDrawSurface* g_DirectDrawSurface
//   IUnknown* g_DirectDrawUnknown
//   PALETTEENTRY[256] g_DDPaletteBuffer
//   undefined4 g_DDPaletteBuffer[0].green
//   undefined4 g_DDPaletteBuffer[0].blue
//   undefined4 g_DDPaletteBuffer[0].flags
//   undefined4 g_DDPaletteBuffer[1].red
//   undefined4 g_DDPaletteBuffer[1].green
//   undefined4 g_DDPaletteBuffer[1].blue
//   undefined4 g_DDPaletteBuffer[1].flags
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   wincore_wddvmem.cpp_analyzePixelFormat_FUN_005ed730
//   wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_setupColorPalette_FUN_005ed8f0(void)

{
  int iVar1;
  HRESULT HVar2;
  int iVar3;
  int iVar4;
  
  if (g_UseExternalRenderer != 0) {
    (*g_APIDLL_setColorTable16)(g_SourcePaletteData,g_ColorTable16);
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0();
    return;
  }
  if (g_DirectDrawUnknown != (IUnknown *)0x0) {
    (*g_DirectDrawUnknown->vtable->Release)(g_DirectDrawUnknown);
    g_DirectDrawUnknown = (IUnknown *)0x0;
  }
  if (g_BitsPerPixel == 8) {
    iVar4 = 0;
    iVar3 = 0;
    do {
      iVar1 = iVar3 + 4;
      (&g_DDPaletteBuffer[0].red)[iVar3] = g_SourcePaletteData[iVar4];
      (&g_DDPaletteBuffer[0].green)[iVar3] = g_SourcePaletteData[iVar4 + 1];
      (&g_DDPaletteBuffer[0].blue)[iVar3] = g_SourcePaletteData[iVar4 + 2];
      iVar4 = iVar4 + 3;
      (&g_DDPaletteBuffer[0].flags)[iVar3] = '\x01';
      iVar3 = iVar1;
    } while (iVar1 != 0x400);
    HVar2 = (*g_DirectDrawObject->vtable->CreatePalette)
                      (g_DirectDrawObject,4,g_DDPaletteBuffer,
                       (IDirectDrawPalette **)&g_DirectDrawUnknown,(IUnknown *)0x0);
    if (HVar2 != 0) {
      g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
      g_CurrentLineNumber = 0x2f1;
      core_main_c_displayErrorAndQuit_FUN_00506f10("setpal - Unable to create palette object");
    }
    iVar3 = (*(code *)g_DirectDrawSurface->vtable->SetPalette)();
    if (iVar3 != 0) {
      g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
      g_CurrentLineNumber = 0x2f7;
      core_main_c_displayErrorAndQuit_FUN_00506f10("setpal - Unable to set front buffer palette");
    }
  }
  if (g_BitsPerPixel < 9) {
    return;
  }
  wincore_wddvmem_cpp_analyzePixelFormat_FUN_005ed730();
  return;
}


// Assembly code:
// 005ed8f0: PUSH EBX
//   Label: wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0
// 005ed8f1: PUSH EDI
// 005ed8f2: PUSH EBP
// 005ed8f3: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005ed8fa: JNZ 0x005ed9e0
//   XREF to: 005ed9e0 (CONDITIONAL_JUMP)
// 005ed900: MOV ECX,dword ptr [0x03f9592c]
//   XREF to: 03f9592c (READ)
// 005ed906: TEST ECX,ECX
// 005ed908: JNZ 0x005ed9fc
//   XREF to: 005ed9fc (CONDITIONAL_JUMP)
// 005ed90e: CMP dword ptr [0x0067939c],0x8
//   Label: LAB_005ed90e
//   XREF to: 0067939c (READ)
// 005ed915: JNZ 0x005ed9d3
//   XREF to: 005ed9d3 (CONDITIONAL_JUMP)
// 005ed91b: XOR EDX,EDX
// 005ed91d: XOR EAX,EAX
// 005ed91f: ADD EAX,0x4
//   Label: LAB_005ed91f
// 005ed922: MOV BL,byte ptr [EDX + 0x2d01f48]
//   XREF to: 02d01f48 (READ)
//   XREF to: 02d01f4b (READ)
// 005ed928: MOV byte ptr [EAX + 0x3f9593c],BL
//   XREF to: 03f95940 (WRITE)
//   XREF to: 03f95944 (WRITE)
// 005ed92e: MOV BL,byte ptr [EDX + 0x2d01f49]
//   XREF to: 02d01f49 (READ)
//   XREF to: 02d01f4c (READ)
// 005ed934: MOV byte ptr [EAX + 0x3f9593d],BL
//   XREF to: 03f95941 (WRITE)
//   XREF to: 03f95945 (WRITE)
// 005ed93a: MOV BL,byte ptr [EDX + 0x2d01f4a]
//   XREF to: 02d01f4a (READ)
//   XREF to: 02d01f4d (READ)
// 005ed940: MOV byte ptr [EAX + 0x3f9593e],BL
//   XREF to: 03f95942 (WRITE)
//   XREF to: 03f95946 (WRITE)
// 005ed946: MOV BL,0x1
// 005ed948: ADD EDX,0x3
// 005ed94b: MOV byte ptr [EAX + 0x3f9593f],BL
//   XREF to: 03f95943 (WRITE)
//   XREF to: 03f95947 (WRITE)
// 005ed951: CMP EAX,0x400
// 005ed956: JNZ 0x005ed91f
//   XREF to: 005ed91f (CONDITIONAL_JUMP)
// 005ed958: PUSH 0x0
// 005ed95a: PUSH 0x3f9592c
//   XREF to: 03f9592c (DATA)
// 005ed95f: PUSH 0x3f95940
//   XREF to: 03f95940 (DATA)
// 005ed964: MOV EAX,[0x03f95920]
//   XREF to: 03f95920 (READ)
// 005ed969: PUSH 0x4
// 005ed96b: MOV EDX,dword ptr [EAX]
// 005ed96d: PUSH EAX
// 005ed96e: CALL dword ptr [EDX + 0x14]
// 005ed971: TEST EAX,EAX
// 005ed973: JZ 0x005ed998
//   XREF to: 005ed998 (CONDITIONAL_JUMP)
// 005ed975: MOV EDI,0x6579a8
//   XREF to: 006579a8 (DATA)
// 005ed97a: MOV EBP,0x2f1
// 005ed97f: PUSH 0x6579bf
//   XREF to: 006579bf (DATA)
// 005ed984: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005ed98a: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 005ed990: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ed995: ADD ESP,0x4
// 005ed998: MOV ECX,dword ptr [0x03f9592c]
//   Label: LAB_005ed998
//   XREF to: 03f9592c (READ)
// 005ed99e: MOV EAX,[0x03f95924]
//   XREF to: 03f95924 (READ)
// 005ed9a3: PUSH ECX
// 005ed9a4: MOV EDX,dword ptr [EAX]
// 005ed9a6: PUSH EAX
// 005ed9a7: CALL dword ptr [EDX + 0x7c]
// 005ed9aa: TEST EAX,EAX
// 005ed9ac: JZ 0x005ed9d3
//   XREF to: 005ed9d3 (CONDITIONAL_JUMP)
// 005ed9ae: PUSH ESI
// 005ed9af: MOV EBX,0x6579e8
//   XREF to: 006579e8 (PARAM)
// 005ed9b4: MOV ESI,0x2f7
// 005ed9b9: PUSH 0x6579ff
//   XREF to: 006579ff (DATA)
// 005ed9be: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 005ed9c4: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005ed9ca: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ed9cf: ADD ESP,0x4
// 005ed9d2: POP ESI
// 005ed9d3: CMP dword ptr [0x0067939c],0x8
//   Label: LAB_005ed9d3
//   XREF to: 0067939c (READ)
// 005ed9da: JG 0x005eda0f
//   XREF to: 005eda0f (CONDITIONAL_JUMP)
// 005ed9dc: POP EBP
// 005ed9dd: POP EDI
// 005ed9de: POP EBX
// 005ed9df: RET
// 005ed9e0: PUSH 0x2d01020
//   Label: LAB_005ed9e0
//   XREF to: 02d01020 (DATA)
// 005ed9e5: PUSH 0x2d01f48
//   XREF to: 02d01f48 (DATA)
// 005ed9ea: CALL dword ptr [g_APIDLL_setColorTable16]
//   XREF to: 03f6b900 (READ)
// 005ed9f0: ADD ESP,0x8
// 005ed9f3: CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0
//   XREF to: 004f41c0 (UNCONDITIONAL_CALL)
// 005ed9f8: POP EBP
// 005ed9f9: POP EDI
// 005ed9fa: POP EBX
// 005ed9fb: RET
// 005ed9fc: PUSH ECX
//   Label: LAB_005ed9fc
// 005ed9fd: MOV EDX,dword ptr [ECX]
// 005ed9ff: XOR EBX,EBX
// 005eda01: CALL dword ptr [EDX + 0x8]
// 005eda04: MOV dword ptr [0x03f9592c],EBX
//   XREF to: 03f9592c (WRITE)
// 005eda0a: JMP 0x005ed90e
//   XREF to: 005ed90e (UNCONDITIONAL_JUMP)
// 005eda0f: CALL wincore_wddvmem.cpp_analyzePixelFormat_FUN_005ed730
//   Label: LAB_005eda0f
//   XREF to: 005ed730 (UNCONDITIONAL_CALL)
// 005eda14: POP EBP
// 005eda15: POP EDI
// 005eda16: POP EBX
// 005eda17: RET
