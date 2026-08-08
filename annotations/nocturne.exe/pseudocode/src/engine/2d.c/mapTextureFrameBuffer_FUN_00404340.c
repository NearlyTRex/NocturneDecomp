// Name: engine_2d.c_mapTextureFrameBuffer_FUN_00404340
// Address: 00404340
// Address Range: [[00404340, 0040435c]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_mapTextureFrameBuffer_FUN_00404340(void)

#include "nocturne.h"

int __cdecl engine_2d_c_mapTextureFrameBuffer_FUN_00404340(void)

{
  int iVar1;
  
  iVar1 = engine_2d_c_mapFrameBuffer_FUN_00404120
                    (g_CurrentTextureData,g_CurrentTextureDimension,g_CurrentTextureDimension,8,
                     g_CurrentTextureDimension);
  return iVar1;
}
