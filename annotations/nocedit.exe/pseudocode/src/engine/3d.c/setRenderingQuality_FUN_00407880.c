// Name: engine_3d.c_setRenderingQuality_FUN_00407880
// Address: 00407880
// Address Range: [[00407880, 00407889]]
// Convention: __cdecl
// Signature: void engine_3d.c_setRenderingQuality_FUN_00407880(int quality)
// Globals:
//   int g_RenderingQuality = 0x1

#include "nocturne.h"

void __cdecl engine_3d_c_setRenderingQuality_FUN_00407880(int quality)

{
  g_RenderingQuality = quality;
  return;
}


// Assembly code:
// 00407880: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_3d.c_setRenderingQuality_FUN_00407880
//   XREF to: Stack[0x4] (READ)
// 00407884: MOV [0x006793b8],EAX
//   XREF to: 006793b8 (WRITE)
// 00407889: RET
