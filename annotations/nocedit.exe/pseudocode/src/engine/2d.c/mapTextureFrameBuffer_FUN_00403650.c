// Name: engine_2d.c_mapTextureFrameBuffer_FUN_00403650
// Address: 00403650
// Address Range: [[00403650, 0040366c]]
// Convention: __cdecl
// Signature: int engine_2d.c_mapTextureFrameBuffer_FUN_00403650(void)
// Globals:
//   int g_CurrentTextureDimension = 0x100
//   void* g_CurrentTextureData
// Function calls:
//   engine_2d.c_mapFrameBuffer_FUN_00403430

#include "nocturne.h"

int __cdecl engine_2d_c_mapTextureFrameBuffer_FUN_00403650(void)

{
  int iVar1;
  
  iVar1 = engine_2d_c_mapFrameBuffer_FUN_00403430
                    ((int)g_CurrentTextureData,g_CurrentTextureDimension,g_CurrentTextureDimension,8
                     ,(void *)g_CurrentTextureDimension);
  return iVar1;
}


// Assembly code:
// 00403650: PUSH ESI
//   Label: engine_2d.c_mapTextureFrameBuffer_FUN_00403650
// 00403651: MOV EDX,dword ptr [0x006793a4]
//   XREF to: 006793a4 (READ)
// 00403657: PUSH EDX
// 00403658: PUSH 0x8
// 0040365a: PUSH EDX
// 0040365b: PUSH EDX
// 0040365c: MOV ESI,dword ptr [0x02d03e80]
//   XREF to: 02d03e80 (READ)
// 00403662: PUSH ESI
// 00403663: CALL engine_2d.c_mapFrameBuffer_FUN_00403430
//   XREF to: 00403430 (UNCONDITIONAL_CALL)
// 00403668: ADD ESP,0x14
// 0040366b: POP ESI
// 0040366c: RET
