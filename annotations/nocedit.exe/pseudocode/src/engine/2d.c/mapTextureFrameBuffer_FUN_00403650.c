// Name: engine_2d.c_mapTextureFrameBuffer_FUN_00403650
// Address: 00403650
// Address Range: [[00403650, 0040366c]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_mapTextureFrameBuffer_FUN_00403650(void)

#include "nocturne.h"

int __cdecl engine_2d_c_mapTextureFrameBuffer_FUN_00403650(void)

{
  int iVar1;
  
  iVar1 = engine_2d_c_mapFrameBuffer_FUN_00403430
                    (g_CurrentTextureData,g_CurrentTextureDimension,g_CurrentTextureDimension,8,
                     g_CurrentTextureDimension);
  return iVar1;
}
