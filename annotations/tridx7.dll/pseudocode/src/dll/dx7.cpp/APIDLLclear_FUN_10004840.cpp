// Name: dll_dx7.cpp_APIDLLclear_FUN_10004840
// Address: 10004840
// Address Range: [[10004840, 1000490d]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLclear_FUN_10004840(void)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLclear_FUN_10004840(void)

{
  SRenderVertex *pSVar1;
  int iVar2;
  SRenderVertex local_c0;
  int local_88;
  int local_80;
  uint local_7c;
  int local_58;
  int local_50;
  int local_4c;
  int local_28;
  uint local_20;
  int local_1c;
  
                    /* 0x4840  8  APIDLLclear */
  if (g_InScene == 0) {
    pSVar1 = &local_c0;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pSVar1 = 0;
      pSVar1 = (SRenderVertex *)((int)pSVar1 + 4);
    }
    local_c0.projected_vertex.transformed_x = 100;
    (*g_BackBufferSurface->vtable->Blt)
              (g_BackBufferSurface,(RECT *)0x0,(IDirectDrawSurface *)0x0,(RECT *)0x0,0x1000400,
               &local_c0);
  }
  else {
    pSVar1 = &local_c0;
    for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)pSVar1 = 0;
      pSVar1 = (SRenderVertex *)((int)pSVar1 + 4);
    }
    local_c0.projected_vertex.screen_x = 0;
    local_80 = g_ScreenWidth << 0x10;
    local_c0.projected_vertex.screen_y = 0;
    local_7c = 0;
    local_4c = g_ScreenHeight << 0x10;
    local_20 = 0;
    local_c0.projected_vertex.transformed_z = *g_ExternalRendererBridge.system_memory_size;
    local_88 = *g_ExternalRendererBridge.system_memory_size;
    local_58 = *g_ExternalRendererBridge.system_memory_size;
    local_28 = *g_ExternalRendererBridge.system_memory_size;
    *g_ExternalRendererBridge.console_text_color = 0;
    local_50 = local_80;
    local_1c = local_4c;
    dll_dx7_cpp_APIDLLdrawPolygon_FUN_10004380(&local_c0,4,0x10);
  }
  return 1;
}
