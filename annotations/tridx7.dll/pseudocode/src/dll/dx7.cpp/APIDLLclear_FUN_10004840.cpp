// Name: dll_dx7.cpp_APIDLLclear_FUN_10004840
// Address: 10004840
// Address Range: [[10004840, 1000490d]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLclear_FUN_10004840(void)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLclear_FUN_10004840(void)

{
  DDBLTFX *pDVar1;
  int iVar2;
  DDBLTFX local_c0;
  int local_58;
  DWORD local_50;
  int local_4c;
  int local_28;
  uint local_20;
  int local_1c;
  
                    /* 0x4840  8  APIDLLclear */
  if (g_InScene == 0) {
    pDVar1 = &local_c0;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      pDVar1->dwSize = 0;
      pDVar1 = (DDBLTFX *)((int)pDVar1 + 4);
    }
    local_c0.dwSize = 100;
    (*g_BackBufferSurface->vtable->Blt)
              (g_BackBufferSurface,(RECT *)0x0,(IDirectDrawSurface *)0x0,(RECT *)0x0,0x1000400,
               &local_c0);
  }
  else {
    pDVar1 = &local_c0;
    for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
      pDVar1->dwSize = 0;
      pDVar1 = (DDBLTFX *)((int)pDVar1 + 4);
    }
    local_c0.dwRotationAngle = 0;
    local_c0.dwAlphaDestConstBitDepth = g_ScreenWidth << 0x10;
    local_c0.dwZBufferOpCode = 0;
    local_c0.dwAlphaDestConst = 0;
    local_4c = g_ScreenHeight << 0x10;
    local_20 = 0;
    local_c0.dwROP = *g_ExternalRendererBridge.full_screen_quad_depth;
    local_c0.dwAlphaEdgeBlend = *g_ExternalRendererBridge.full_screen_quad_depth;
    local_58 = *g_ExternalRendererBridge.full_screen_quad_depth;
    local_28 = *g_ExternalRendererBridge.full_screen_quad_depth;
    *g_ExternalRendererBridge.console_text_color = 0;
    local_50 = local_c0.dwAlphaDestConstBitDepth;
    local_1c = local_4c;
    dll_dx7_cpp_APIDLLdrawPolygon_FUN_10004380((SRenderVertex *)&local_c0,4,0x10);
  }
  return 1;
}
