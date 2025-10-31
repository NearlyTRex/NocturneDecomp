// Name: wincore_wddvmem.cpp_analyzePixelFormat_FUN_005ed730
// Address: 005ed730
// Address Range: [[005ed730, 005ed8e4]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_analyzePixelFormat_FUN_005ed730(void)
// Cross-references:
//   wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0 (005ed8f0) at 005eda0f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_wincore_wddvmem_cpp_0065791c
//   TerminatedCString s_setColorTable16_Unable_t_00657933
//   TerminatedCString s_wincore_wddvmem_cpp_00657961
//   TerminatedCString s_setColorTable16_Unable_t_00657978
//   int g_RedBitPosition
//   int g_RedScaleFactor
//   int g_RedBitCount
//   int g_GreenBitPosition
//   int g_GreenScaleFactor
//   int g_GreenBitCount
//   int g_BlueBitPosition
//   int g_BlueScaleFactor
//   int g_BlueBitCount
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   IDirectDrawSurface* g_SoftwareRenderSurface
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40
//   wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_analyzePixelFormat_FUN_005ed730(void)

{
  HRESULT HVar1;
  uint uVar2;
  uint uVar3;
  BADSPACEBASE *in_ESP;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  DWORD DStack_6c;
  DDSURFACEDESC_union1 DStack_5c;
  
  crt_memory_c_memset_FUN_005fde40(&stack0xffffff90,0,0x6c);
  DStack_6c = 0x6c;
  HVar1 = (*g_SoftwareRenderSurface->vtable->Lock)
                    (g_SoftwareRenderSurface,(RECT *)0x0,(DDSURFACEDESC *)&DStack_6c,1,(void *)0x0);
  if (HVar1 != 0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 0x2ae;
    DStack_5c.lPitch = 0x5ed810;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setColorTable16 - Unable to lock back buffer!");
  }
  DStack_5c.lPitch = 0x5ed77c;
  HVar1 = (*g_SoftwareRenderSurface->vtable->Unlock)(g_SoftwareRenderSurface,(void *)0x0);
  if (HVar1 != 0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 0x2b0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setColorTable16 - Unable to unlock back buffer!");
  }
  g_RedBitPosition = 0;
  uVar3 = in_stack_00000018 & 1;
  uVar2 = in_stack_00000018;
  while (uVar3 == 0) {
    uVar2 = uVar2 >> 1;
    g_RedBitPosition = g_RedBitPosition + 1;
    uVar3 = uVar2 & 1;
  }
  g_RedScaleFactor = (int)(0xff / (ulonglong)(in_stack_00000018 >> ((byte)g_RedBitPosition & 0x1f)))
  ;
  g_RedBitCount = 0;
  uVar3 = g_RedScaleFactor;
  if (g_RedScaleFactor == 0) {
    g_RedBitCount = 0x20;
  }
  else {
    for (; 1 < uVar3; uVar3 = uVar3 >> 1) {
      g_RedBitCount = g_RedBitCount + 1;
    }
  }
  g_GreenBitPosition = 0;
  uVar3 = in_stack_0000001c & 1;
  uVar2 = in_stack_0000001c;
  while (uVar3 == 0) {
    uVar2 = uVar2 >> 1;
    g_GreenBitPosition = g_GreenBitPosition + 1;
    uVar3 = uVar2 & 1;
  }
  g_GreenScaleFactor =
       (int)(0xff / (ulonglong)(in_stack_0000001c >> ((byte)g_GreenBitPosition & 0x1f)));
  g_GreenBitCount = 0;
  uVar3 = g_GreenScaleFactor;
  if (g_GreenScaleFactor == 0) {
    g_GreenBitCount = 0x20;
  }
  else {
    for (; 1 < uVar3; uVar3 = uVar3 >> 1) {
      g_GreenBitCount = g_GreenBitCount + 1;
    }
  }
  g_BlueBitPosition = 0;
  uVar3 = in_stack_00000020 & 1;
  uVar2 = in_stack_00000020;
  while (uVar3 == 0) {
    uVar2 = uVar2 >> 1;
    g_BlueBitPosition = g_BlueBitPosition + 1;
    uVar3 = uVar2 & 1;
  }
  g_BlueScaleFactor =
       (int)(0xff / (ulonglong)(in_stack_00000020 >> ((byte)g_BlueBitPosition & 0x1f)));
  g_BlueBitCount = 0;
  uVar3 = g_BlueScaleFactor;
  if (g_BlueScaleFactor == 0) {
    g_BlueBitCount = 0x20;
    wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0();
    return;
  }
  for (; 1 < uVar3; uVar3 = uVar3 >> 1) {
    g_BlueBitCount = g_BlueBitCount + 1;
  }
  wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0();
  return;
}


// Assembly code:
// 005ed730: PUSH EBX
//   Label: wincore_wddvmem.cpp_analyzePixelFormat_FUN_005ed730
// 005ed731: SUB ESP,0x6c
// 005ed734: PUSH 0x6c
// 005ed736: PUSH 0x0
// 005ed738: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x70] (DATA)
// 005ed73c: PUSH EAX
// 005ed73d: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005ed742: ADD ESP,0xc
// 005ed745: PUSH 0x0
// 005ed747: PUSH 0x1
// 005ed749: LEA ECX,[ESP + 0x8]
//   XREF to: Stack[-0x70] (DATA)
// 005ed74d: MOV EDX,0x6c
// 005ed752: PUSH ECX
// 005ed753: MOV EAX,[0x03f95928]
//   XREF to: 03f95928 (READ)
// 005ed758: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x70] (WRITE)
// 005ed75c: PUSH 0x0
// 005ed75e: MOV EDX,dword ptr [EAX]
// 005ed760: PUSH EAX
// 005ed761: CALL dword ptr [EDX + 0x64]
// 005ed764: TEST EAX,EAX
// 005ed766: JNZ 0x005ed7f0
//   XREF to: 005ed7f0 (CONDITIONAL_JUMP)
// 005ed76c: PUSH 0x0
//   Label: LAB_005ed76c
// 005ed76e: MOV EAX,[0x03f95928]
//   XREF to: 03f95928 (READ)
// 005ed773: PUSH EAX
// 005ed774: MOV ECX,dword ptr [EAX]
// 005ed776: CALL dword ptr [ECX + 0x80]
// 005ed77c: TEST EAX,EAX
// 005ed77e: JZ 0x005ed7a7
//   XREF to: 005ed7a7 (CONDITIONAL_JUMP)
// 005ed780: PUSH EDI
// 005ed781: PUSH ESI
// 005ed782: MOV ESI,0x657961
//   XREF to: 00657961 (DATA)
// 005ed787: MOV EDI,0x2b0
// 005ed78c: PUSH 0x657978
//   XREF to: 00657978 (DATA)
// 005ed791: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005ed797: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005ed79d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ed7a2: ADD ESP,0x4
// 005ed7a5: POP ESI
// 005ed7a6: POP EDI
// 005ed7a7: MOV EAX,dword ptr [ESP + 0x58]
//   Label: LAB_005ed7a7
// 005ed7ab: MOV DL,byte ptr [ESP + 0x58]
// 005ed7af: XOR ECX,ECX
// 005ed7b1: TEST DL,0x1
// 005ed7b4: JNZ 0x005ed7c0
//   XREF to: 005ed7c0 (CONDITIONAL_JUMP)
// 005ed7b6: SHR EAX,0x1
//   Label: LAB_005ed7b6
// 005ed7b8: INC ECX
// 005ed7b9: TEST AL,0x1
// 005ed7bb: JZ 0x005ed7b6
//   XREF to: 005ed7b6 (CONDITIONAL_JUMP)
// 005ed7bd: LEA EAX,[EAX]
// 005ed7c0: MOV EAX,dword ptr [ESP + 0x58]
//   Label: LAB_005ed7c0
// 005ed7c4: MOV dword ptr [0x02d01f24],ECX
//   XREF to: 02d01f24 (WRITE)
// 005ed7ca: SHR EAX,CL
// 005ed7cc: XOR EDX,EDX
// 005ed7ce: MOV ECX,EAX
// 005ed7d0: MOV EAX,0xff
// 005ed7d5: DIV ECX
// 005ed7d7: MOV [0x02d01f28],EAX
//   XREF to: 02d01f28 (WRITE)
// 005ed7dc: XOR ECX,ECX
// 005ed7de: TEST EAX,EAX
// 005ed7e0: JZ 0x005ed818
//   XREF to: 005ed818 (CONDITIONAL_JUMP)
// 005ed7e2: CMP EAX,0x1
//   Label: LAB_005ed7e2
// 005ed7e5: JBE 0x005ed86c
//   XREF to: 005ed86c (CONDITIONAL_JUMP)
// 005ed7eb: INC ECX
// 005ed7ec: SHR EAX,0x1
// 005ed7ee: JMP 0x005ed7e2
//   XREF to: 005ed7e2 (UNCONDITIONAL_JUMP)
// 005ed7f0: MOV ECX,0x65791c
//   Label: LAB_005ed7f0
//   XREF to: 0065791c (PARAM)
// 005ed7f5: MOV EBX,0x2ae
// 005ed7fa: PUSH 0x657933
//   XREF to: 00657933 (DATA)
// 005ed7ff: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005ed805: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005ed80b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ed810: ADD ESP,0x4
// 005ed813: JMP 0x005ed76c
//   XREF to: 005ed76c (UNCONDITIONAL_JUMP)
// 005ed818: MOV EAX,0x20
//   Label: LAB_005ed818
// 005ed81d: MOV DH,byte ptr [ESP + 0x5c]
//   Label: LAB_005ed81d
// 005ed821: MOV [0x02d01f2c],EAX
//   XREF to: 02d01f2c (WRITE)
// 005ed826: XOR ECX,ECX
// 005ed828: MOV EAX,dword ptr [ESP + 0x5c]
// 005ed82c: TEST DH,0x1
// 005ed82f: JNZ 0x005ed840
//   XREF to: 005ed840 (CONDITIONAL_JUMP)
// 005ed831: SHR EAX,0x1
//   Label: LAB_005ed831
// 005ed833: INC ECX
// 005ed834: TEST AL,0x1
// 005ed836: JZ 0x005ed831
//   XREF to: 005ed831 (CONDITIONAL_JUMP)
// 005ed838: LEA EAX,[EAX]
// 005ed83e: MOV EDX,EDX
// 005ed840: MOV EAX,dword ptr [ESP + 0x5c]
//   Label: LAB_005ed840
// 005ed844: MOV dword ptr [0x02d01f30],ECX
//   XREF to: 02d01f30 (WRITE)
// 005ed84a: SHR EAX,CL
// 005ed84c: XOR EDX,EDX
// 005ed84e: MOV ECX,EAX
// 005ed850: MOV EAX,0xff
// 005ed855: DIV ECX
// 005ed857: MOV [0x02d01f34],EAX
//   XREF to: 02d01f34 (WRITE)
// 005ed85c: XOR ECX,ECX
// 005ed85e: TEST EAX,EAX
// 005ed860: JZ 0x005ed870
//   XREF to: 005ed870 (CONDITIONAL_JUMP)
// 005ed862: CMP EAX,0x1
//   Label: LAB_005ed862
// 005ed865: JBE 0x005ed8bc
//   XREF to: 005ed8bc (CONDITIONAL_JUMP)
// 005ed867: INC ECX
// 005ed868: SHR EAX,0x1
// 005ed86a: JMP 0x005ed862
//   XREF to: 005ed862 (UNCONDITIONAL_JUMP)
// 005ed86c: MOV EAX,ECX
//   Label: LAB_005ed86c
// 005ed86e: JMP 0x005ed81d
//   XREF to: 005ed81d (UNCONDITIONAL_JUMP)
// 005ed870: MOV EAX,0x20
//   Label: LAB_005ed870
// 005ed875: MOV BL,byte ptr [ESP + 0x60]
//   Label: LAB_005ed875
// 005ed879: MOV [0x02d01f38],EAX
//   XREF to: 02d01f38 (WRITE)
// 005ed87e: XOR ECX,ECX
// 005ed880: MOV EAX,dword ptr [ESP + 0x60]
// 005ed884: TEST BL,0x1
// 005ed887: JNZ 0x005ed890
//   XREF to: 005ed890 (CONDITIONAL_JUMP)
// 005ed889: SHR EAX,0x1
//   Label: LAB_005ed889
// 005ed88b: INC ECX
// 005ed88c: TEST AL,0x1
// 005ed88e: JZ 0x005ed889
//   XREF to: 005ed889 (CONDITIONAL_JUMP)
// 005ed890: MOV EAX,dword ptr [ESP + 0x60]
//   Label: LAB_005ed890
// 005ed894: MOV dword ptr [0x02d01f3c],ECX
//   XREF to: 02d01f3c (WRITE)
// 005ed89a: SHR EAX,CL
// 005ed89c: XOR EDX,EDX
// 005ed89e: MOV ECX,EAX
// 005ed8a0: MOV EAX,0xff
// 005ed8a5: DIV ECX
// 005ed8a7: MOV [0x02d01f40],EAX
//   XREF to: 02d01f40 (WRITE)
// 005ed8ac: XOR ECX,ECX
// 005ed8ae: TEST EAX,EAX
// 005ed8b0: JZ 0x005ed8c0
//   XREF to: 005ed8c0 (CONDITIONAL_JUMP)
// 005ed8b2: CMP EAX,0x1
//   Label: LAB_005ed8b2
// 005ed8b5: JBE 0x005ed8d4
//   XREF to: 005ed8d4 (CONDITIONAL_JUMP)
// 005ed8b7: INC ECX
// 005ed8b8: SHR EAX,0x1
// 005ed8ba: JMP 0x005ed8b2
//   XREF to: 005ed8b2 (UNCONDITIONAL_JUMP)
// 005ed8bc: MOV EAX,ECX
//   Label: LAB_005ed8bc
// 005ed8be: JMP 0x005ed875
//   XREF to: 005ed875 (UNCONDITIONAL_JUMP)
// 005ed8c0: MOV EAX,0x20
//   Label: LAB_005ed8c0
// 005ed8c5: MOV [0x02d01f44],EAX
//   XREF to: 02d01f44 (WRITE)
// 005ed8ca: CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0
//   XREF to: 004f41c0 (UNCONDITIONAL_CALL)
// 005ed8cf: ADD ESP,0x6c
// 005ed8d2: POP EBX
// 005ed8d3: RET
// 005ed8d4: MOV EAX,ECX
//   Label: LAB_005ed8d4
// 005ed8d6: MOV [0x02d01f44],EAX
//   XREF to: 02d01f44 (WRITE)
// 005ed8db: CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004f41c0
//   XREF to: 004f41c0 (UNCONDITIONAL_CALL)
// 005ed8e0: ADD ESP,0x6c
// 005ed8e3: POP EBX
// 005ed8e4: RET
