// Name: engine_3d.c_resetRenderBuffer_FUN_00407060
// Address: 00407060
// Address Range: [[00407060, 00407073]]
// Convention: __cdecl
// Signature: void engine_3d.c_resetRenderBuffer_FUN_00407060(void)
// Globals:
//   int g_RenderBufferEnabled
//   int g_RenderBufferCount

#include "nocturne.h"

void __cdecl engine_3d_c_resetRenderBuffer_FUN_00407060(void)

{
  g_RenderBufferCount = 0;
  g_RenderBufferEnabled = 1;
  return;
}


// Assembly code:
// 00407060: XOR ECX,ECX
//   Label: engine_3d.c_resetRenderBuffer_FUN_00407060
// 00407062: MOV EDX,0x1
// 00407067: MOV dword ptr [0x00772afc],ECX
//   XREF to: 00772afc (WRITE)
// 0040706d: MOV dword ptr [0x00772af8],EDX
//   XREF to: 00772af8 (WRITE)
// 00407073: RET
