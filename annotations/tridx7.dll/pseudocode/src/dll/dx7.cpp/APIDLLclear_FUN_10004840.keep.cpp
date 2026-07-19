// Name: dll_dx7.cpp_APIDLLclear_FUN_10004840
// Address: 10004840
// MANUAL RECONSTRUCTION
// Address Range: [[10004840, 1000490d]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLclear_FUN_10004840(void)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLclear_FUN_10004840(void)

{
  DDBLTFX blt_fx;
  SRenderVertex quad [4];

                    /* 0x4840  8  APIDLLclear */
  if (g_InScene == 0) {
    memset(&blt_fx,0,sizeof(blt_fx));
    blt_fx.dwSize = 100;
    (*g_BackBufferSurface->vtable->Blt)
              (g_BackBufferSurface,(RECT *)0x0,(IDirectDrawSurface *)0x0,(RECT *)0x0,0x1000400,
               &blt_fx);
  }
  else {
    memset(quad,0,sizeof(quad));
    quad[0].projected_vertex.screen_x = 0;
    quad[1].projected_vertex.screen_x = g_ScreenWidth << 0x10;
    quad[0].projected_vertex.screen_y = 0;
    quad[1].projected_vertex.screen_y = 0;
    quad[2].projected_vertex.screen_y = g_ScreenHeight << 0x10;
    quad[3].projected_vertex.screen_x = 0;
    quad[0].projected_vertex.transformed_z = *g_ExternalRendererBridge.system_memory_size;
    quad[1].projected_vertex.transformed_z = *g_ExternalRendererBridge.system_memory_size;
    quad[2].projected_vertex.transformed_z = *g_ExternalRendererBridge.system_memory_size;
    quad[3].projected_vertex.transformed_z = *g_ExternalRendererBridge.system_memory_size;
    *g_ExternalRendererBridge.console_text_color = 0;
    quad[2].projected_vertex.screen_x = quad[1].projected_vertex.screen_x;
    quad[3].projected_vertex.screen_y = quad[2].projected_vertex.screen_y;
    dll_dx7_cpp_APIDLLdrawPolygon_FUN_10004380(quad,4,0x10);
  }
  return 1;
}
