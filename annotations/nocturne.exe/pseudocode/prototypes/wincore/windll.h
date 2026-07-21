#pragma once

// Function prototypes for wincore/windll.cpp
// Generated from Ghidra function signatures

// Original: wincore_windll.cpp_clearScreen_FUN_0052ee70
// Address: 0052ee70
undefined4 __cdecl clearScreen(void);

// Original: wincore_windll.cpp_clearZBufferNative_FUN_0052eed4
// Address: 0052eed4
undefined8 __cdecl clearZBufferNative(void);

// Original: wincore_windll.cpp_clearScreenRegion_FUN_0052ef37
// Address: 0052ef37
undefined4 clearScreenRegion(undefined4 param_1);

// Original: wincore_windll.cpp_fillDepthRegion_FUN_0052efc2
// Address: 0052efc2
uint fillDepthRegion(int param_1,int param_2,uint param_3,uint param_4);

// Original: wincore_windll.cpp_renderAlphaRow32_FUN_0053055c
// Address: 0053055c
undefined8 __cdecl renderAlphaRow32(undefined4 *param_1,byte *param_2,byte *param_3,uint param_4,int param_5);

// Original: wincore_windll.cpp_renderAlphaRow16_FUN_005305f7
// Address: 005305f7
undefined8 __cdecl renderAlphaRow16(ushort *param_1,byte *param_2,byte *param_3,uint param_4,int param_5);

// Original: wincore_windll.cpp_renderScanline_FUN_00530710
// Address: 00530710
void __edi_esi_ebx renderScanline(void);

// Original: wincore_windll.cpp_renderScanlineSwapped_FUN_00530716
// Address: 00530716
undefined8 renderScanlineSwapped(void);

// Original: wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c
// Address: 0053075c
void __cdecl transformAndProjectPoint(uint *param_1,int *param_2);

// Original: wincore_windll.cpp_transformPoint_FUN_00530a25
// Address: 00530a25
void __cdecl transformPoint(uint *param_1,int *param_2);

// Original: wincore_windll.cpp_loadExternalRenderer_FUN_00531780
// Address: 00531780
undefined4 __cdecl loadExternalRenderer(int param_1);

// Original: wincore_windll.cpp_kill_FUN_005322b0
// Address: 005322b0
undefined4 __cdecl kill(void);

// Original: wincore_windll.cpp_lockFrame_FUN_005322e0
// Address: 005322e0
undefined4 __cdecl lockFrame(void);

// Original: wincore_windll.cpp_beginScene_FUN_00532340
// Address: 00532340
undefined4 __cdecl beginScene(void);

// Original: wincore_windll.cpp_endScene_FUN_00532360
// Address: 00532360
undefined4 __cdecl endScene(void);

// Original: wincore_windll.cpp_selectTexture_FUN_00532400
// Address: 00532400
undefined4 __cdecl selectTexture(undefined4 param_1,undefined4 param_2);

// Original: wincore_windll.cpp_updateTexture_FUN_00532440
// Address: 00532440
undefined4 __cdecl updateTexture(undefined4 param_1,undefined4 param_2);

// Original: wincore_windll.cpp_setResolutionAndColorTable_FUN_005324a0
// Address: 005324a0
undefined4 __cdecl setResolutionAndColorTable(undefined4 param_1,undefined4 param_2,int param_3);

// Original: wincore_windll.cpp_restoreVideoMode_FUN_005325f0
// Address: 005325f0
undefined4 __cdecl restoreVideoMode(void);

// Original: wincore_windll.cpp_drawPolygon_FUN_00532620
// Address: 00532620
undefined4 __cdecl drawPolygon(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: wincore_windll.cpp_drawPolygon2_FUN_00532650
// Address: 00532650
undefined4 __cdecl drawPolygon2(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: wincore_windll.cpp_drawPolyList_FUN_00532680
// Address: 00532680
undefined4 __cdecl drawPolyList(int param_1,int *param_2,int param_3,undefined4 param_4);

// Original: wincore_windll.cpp_drawPolyList2_FUN_005327c0
// Address: 005327c0
undefined4 __cdecl drawPolyList2(int param_1,undefined4 *param_2,int param_3,undefined4 param_4);

// Original: wincore_windll.cpp_clear_FUN_005329a0
// Address: 005329a0
undefined4 __cdecl clear(void);

// Original: wincore_windll.cpp_drawFullScreenQuad_FUN_005329c0
// Address: 005329c0
undefined4 __cdecl drawFullScreenQuad(undefined4 param_1);

// Original: wincore_windll.cpp_setFogColorFromPalette_FUN_00532a80
// Address: 00532a80
undefined4 __cdecl setFogColorFromPalette(int param_1);

// Original: wincore_windll.cpp_setFogColor_FUN_00532af0
// Address: 00532af0
undefined4 __cdecl setFogColor(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: wincore_windll.cpp_sync_FUN_00532b30
// Address: 00532b30
undefined4 __cdecl sync(void);

// Original: wincore_windll.cpp_clearZBuffer_FUN_00532b50
// Address: 00532b50
undefined4 __cdecl clearZBuffer(void);

// Original: wincore_windll.cpp_clearZBox_FUN_00532b70
// Address: 00532b70
undefined4 __cdecl clearZBox(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: wincore_windll.cpp_masterZBuffer_FUN_00532c70
// Address: 00532c70
undefined4 __cdecl masterZBuffer(undefined4 param_1);

// Original: wincore_windll.cpp_restoreZBuffer_FUN_00532c90
// Address: 00532c90
undefined4 __cdecl restoreZBuffer(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);

// Original: wincore_windll.cpp_selectCard_FUN_00532d00
// Address: 00532d00
undefined4 __cdecl selectCard(undefined4 param_1);

// Original: wincore_windll.cpp_lockHoldBuffer_FUN_00532d60
// Address: 00532d60
undefined4 __cdecl lockHoldBuffer(void);

// Original: wincore_windll.cpp_unlockHoldBuffer_FUN_00532d80
// Address: 00532d80
undefined4 __cdecl unlockHoldBuffer(void);

// Original: wincore_windll.cpp_CExternalRenderer_ctor_FUN_00532da0
// Address: 00532da0
void __cdecl CExternalRenderer::ctor(int param_1);

// Original: wincore_windll.cpp_CExternalRenderer_validate_FUN_00532df0
// Address: 00532df0
bool __cdecl CExternalRenderer::validate(int param_1,int param_2);
