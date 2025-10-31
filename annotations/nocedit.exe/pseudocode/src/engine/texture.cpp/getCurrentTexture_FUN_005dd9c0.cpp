// Name: engine_texture.cpp_getCurrentTexture_FUN_005dd9c0
// Address: 005dd9c0
// Address Range: [[005dd9c0, 005dda15]]
// Convention: __cdecl
// Signature: SMRGLTextureBasic * engine_texture.cpp_getCurrentTexture_FUN_005dd9c0(void)
// Cross-references:
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407290 (00407290) at 00407405 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonEngineAPIPremiumMultiState_FUN_00407470 (00407470) at 00407572 [UNCONDITIONAL_CALL]
// Globals:
//   int g_CurrentTextureIndex
//   CTextureCache* g_TextureCacheInstance
//   SMRGLTextureBasic g_CurrentTexture
//   undefined4 g_CurrentTextureInfo.texture_index
//   undefined4 DAT_03f87364
//   undefined4 DAT_03f87365
//   undefined4 DAT_03f87366
//   undefined4 g_CurrentTextureInfo.texture_name[3]

#include "nocturne.h"

SMRGLTextureBasic * __cdecl engine_texture_cpp_getCurrentTexture_FUN_005dd9c0(void)

{
  char cVar1;
  char (*pacVar2) [64];
  char *pcVar3;
  
  g_CurrentTexture.base.count = g_CurrentTextureIndex;
  pcVar3 = g_CurrentTexture.texture_name;
  pacVar2 = g_TextureCacheInstance->texture_names + g_CurrentTextureIndex;
  g_CurrentTexture.base.type = 0xd;
  do {
    cVar1 = (*pacVar2)[0];
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return &g_CurrentTexture;
    }
    cVar1 = (*pacVar2)[1];
    pacVar2 = (char (*) [64])(*pacVar2 + 2);
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return &g_CurrentTexture;
}


// Assembly code:
// 005dd9c0: PUSH ESI
//   Label: engine_texture.cpp_getCurrentTexture_FUN_005dd9c0
// 005dd9c1: PUSH EDI
// 005dd9c2: MOV EDX,0xd
// 005dd9c7: MOV ESI,dword ptr [0x03f87354]
//   XREF to: 03f87354 (READ)
// 005dd9cd: MOV EAX,[0x03f87354]
//   XREF to: 03f87354 (READ)
// 005dd9d2: MOV dword ptr [0x03f87360],ESI
//   XREF to: 03f87360 (WRITE)
// 005dd9d8: MOV ESI,dword ptr [0x03f87358]
//   XREF to: 03f87358 (READ)
// 005dd9de: SHL EAX,0x6
// 005dd9e1: ADD ESI,0x3008
// 005dd9e7: MOV EDI,0x3f87364
//   XREF to: 03f87364 (DATA)
// 005dd9ec: ADD ESI,EAX
// 005dd9ee: MOV dword ptr [0x03f8735c],EDX
//   XREF to: 03f8735c (WRITE)
// 005dd9f4: PUSH EDI
//   XREF to: 03f87364 (DATA)
// 005dd9f5: MOV AL,byte ptr [ESI]
//   Label: LAB_005dd9f5
// 005dd9f7: MOV byte ptr [EDI],AL
//   XREF to: 03f87364 (WRITE)
//   XREF to: 03f87366 (WRITE)
// 005dd9f9: CMP AL,0x0
// 005dd9fb: JZ 0x005dda0d
//   XREF to: 005dda0d (CONDITIONAL_JUMP)
// 005dd9fd: MOV AL,byte ptr [ESI + 0x1]
// 005dda00: ADD ESI,0x2
// 005dda03: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 03f87365 (WRITE)
//   XREF to: 03f87367 (WRITE)
// 005dda06: ADD EDI,0x2
// 005dda09: CMP AL,0x0
// 005dda0b: JNZ 0x005dd9f5
//   XREF to: 005dd9f5 (CONDITIONAL_JUMP)
// 005dda0d: POP EDI
//   Label: LAB_005dda0d
// 005dda0e: MOV EAX,0x3f8735c
//   XREF to: 03f8735c (DATA)
// 005dda13: POP EDI
// 005dda14: POP ESI
// 005dda15: RET
