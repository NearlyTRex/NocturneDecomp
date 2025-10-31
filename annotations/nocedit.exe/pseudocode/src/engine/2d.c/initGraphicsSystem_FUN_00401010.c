// Name: engine_2d.c_initGraphicsSystem_FUN_00401010
// Address: 00401010
// Address Range: [[00401010, 00401122]]
// Convention: __cdecl
// Signature: void engine_2d.c_initGraphicsSystem_FUN_00401010(void)
// Cross-references:
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00507bcb [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_2d_c_00613004
//   TerminatedCString s_No_room_for_frame_buffer_00613013
//   TerminatedCString s_vga_act_0061303f
//   TerminatedCString s_vga_lte_00613047
//   TerminatedCString s_vga_map_0061304f
//   TerminatedCString s_vga_act_00613057
//   TerminatedCString s_rb_0061305f
//   TerminatedCString s_default_act_00613062
//   TerminatedCString s_art_0061306e
//   TerminatedCString s_engine_2d_c_00613072
//   SResolutionEntry[9] g_ResolutionTable
//   undefined4 DAT_0066df30
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_RenderingMode
//   uchar[768] g_DefaultPalette
//   uint[1600] g_ReciprocalLookupTable
//   undefined4 DAT_02d02584
//   undefined4 DAT_02d02588
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fread_FUN_005fd990
//   engine_2d.c_loadOrBuildColorMap_FUN_00402930
//   engine_2d.c_loadPaletteFile_FUN_004015a0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   wincore_wddvmem.cpp_initializeGraphicsSystem_FUN_005ecc10
//   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
//   wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0

#include "nocturne.h"

void __cdecl engine_2d_c_initGraphicsSystem_FUN_00401010(void)

{
  ulonglong uVar1;
  int iVar2;
  FILE *file;
  uint uVar3;
  
  iVar2 = wincore_wddvmem_cpp_initializeGraphicsSystem_FUN_005ecc10();
  if (iVar2 == 0) {
    g_CurrentFilename = "..\\engine\\2d.c";
    g_CurrentLineNumber = 0x86;
    core_main_c_displayErrorAndQuit_FUN_00506f10("No room for frame buffer.  Please run SETUP");
  }
  wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0
            (g_ResolutionTable[g_RenderingMode].width,g_ResolutionTable[g_RenderingMode].height,8);
  engine_2d_c_loadPaletteFile_FUN_004015a0("vga.act");
  engine_2d_c_loadOrBuildColorMap_FUN_00402930("vga.map");
  wincore_wddvmem_cpp_setupColorPalette_FUN_005ed8f0();
  uVar3 = 1;
  g_ReciprocalLookupTable[0] = 0xffffffff;
  iVar2 = 4;
  do {
    uVar1 = (ulonglong)uVar3;
    uVar3 = uVar3 + 1;
    *(int *)((int)g_ReciprocalLookupTable + iVar2) = (int)(0xffffffff / uVar1);
    iVar2 = iVar2 + 4;
  } while (uVar3 < 0x640);
  file = engine_dosio_c_getFile_FUN_00481a50("art","default.act","rb");
  if (file == (FILE *)0x0) {
    return;
  }
  crt_stdio_c_fread_FUN_005fd990(g_DefaultPalette,0x300,1,file);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\2d.c",199);
  return;
}


// Assembly code:
// 00401010: PUSH EBX
//   Label: engine_2d.c_initGraphicsSystem_FUN_00401010
// 00401011: PUSH EDI
// 00401012: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00401018: PUSH EDX
// 00401019: MOV ECX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0040101f: PUSH ECX
// 00401020: CALL wincore_wddvmem.cpp_initializeGraphicsSystem_FUN_005ecc10
//   XREF to: 005ecc10 (UNCONDITIONAL_CALL)
// 00401025: ADD ESP,0x8
// 00401028: TEST EAX,EAX
// 0040102a: JZ 0x004010ce
//   XREF to: 004010ce (CONDITIONAL_JUMP)
// 00401030: MOV EAX,[0x00772628]
//   Label: LAB_00401030
//   XREF to: 00772628 (READ)
// 00401035: PUSH 0x8
// 00401037: MOV ECX,dword ptr [EAX*0x8 + 0x66df2c]
//   XREF to: 0066df2c (DATA)
// 0040103e: MOV EAX,dword ptr [EAX*0x8 + 0x66df30]
//   XREF to: 0066df30 (DATA)
// 00401045: PUSH EAX
// 00401046: PUSH ECX
// 00401047: CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
//   XREF to: 005ecef0 (UNCONDITIONAL_CALL)
// 0040104c: ADD ESP,0xc
// 0040104f: PUSH 0x61303f
//   XREF to: 0061303f (DATA)
// 00401054: CALL engine_2d.c_loadPaletteFile_FUN_004015a0
//   XREF to: 004015a0 (UNCONDITIONAL_CALL)
// 00401059: ADD ESP,0x4
// 0040105c: PUSH 0x613047
//   XREF to: 00613047 (DATA)
// 00401061: ADD ESP,0x4
// 00401064: PUSH 0x61304f
//   XREF to: 0061304f (DATA)
// 00401069: CALL engine_2d.c_loadOrBuildColorMap_FUN_00402930
//   XREF to: 00402930 (UNCONDITIONAL_CALL)
// 0040106e: ADD ESP,0x4
// 00401071: PUSH 0x613057
//   XREF to: 00613057 (DATA)
// 00401076: ADD ESP,0x4
// 00401079: MOV EDI,0xffffffff
// 0040107e: MOV EBX,0x4
// 00401083: CALL wincore_wddvmem.cpp_setupColorPalette_FUN_005ed8f0
//   XREF to: 005ed8f0 (UNCONDITIONAL_CALL)
// 00401088: MOV ECX,0x1
// 0040108d: MOV dword ptr [0x02d02580],EDI
//   XREF to: 02d02580 (WRITE)
// 00401093: MOV EAX,0xffffffff
//   Label: LAB_00401093
// 00401098: XOR EDX,EDX
// 0040109a: DIV ECX
// 0040109c: ADD EBX,0x4
// 0040109f: INC ECX
// 004010a0: MOV dword ptr [EBX + 0x2d0257c],EAX
//   XREF to: 02d02584 (WRITE)
//   XREF to: 02d02588 (WRITE)
// 004010a6: CMP ECX,0x640
// 004010ac: JC 0x00401093
//   XREF to: 00401093 (CONDITIONAL_JUMP)
// 004010ae: PUSH 0x61305f
//   XREF to: 0061305f (DATA)
// 004010b3: PUSH 0x613062
//   XREF to: 00613062 (DATA)
// 004010b8: PUSH 0x61306e
//   XREF to: 0061306e (DATA)
// 004010bd: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004010c2: MOV EBX,EAX
// 004010c4: ADD ESP,0xc
// 004010c7: TEST EAX,EAX
// 004010c9: JNZ 0x004010f8
//   XREF to: 004010f8 (CONDITIONAL_JUMP)
// 004010cb: POP EDI
// 004010cc: POP EBX
// 004010cd: RET
// 004010ce: PUSH ESI
//   Label: LAB_004010ce
// 004010cf: MOV EBX,0x613004
//   XREF to: 00613004 (PARAM)
// 004010d4: MOV ESI,0x86
// 004010d9: PUSH 0x613013
//   XREF to: 00613013 (DATA)
// 004010de: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 004010e4: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004010ea: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004010ef: ADD ESP,0x4
// 004010f2: POP ESI
// 004010f3: JMP 0x00401030
//   XREF to: 00401030 (UNCONDITIONAL_JUMP)
// 004010f8: PUSH EAX
//   Label: LAB_004010f8
// 004010f9: PUSH 0x1
// 004010fb: PUSH 0x300
// 00401100: PUSH 0x2d02248
//   XREF to: 02d02248 (DATA)
// 00401105: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0040110a: ADD ESP,0x10
// 0040110d: PUSH 0xc7
// 00401112: PUSH 0x613072
//   XREF to: 00613072 (DATA)
// 00401117: PUSH EBX
// 00401118: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0040111d: ADD ESP,0xc
// 00401120: POP EDI
// 00401121: POP EBX
// 00401122: RET
