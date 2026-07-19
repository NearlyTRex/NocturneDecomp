// Name: dll_dx7.cpp_APIDLLsetVideoMode_FUN_10002500
// Address: 10002500
// MANUAL RECONSTRUCTION
// Address Range: [[10002500, 10002882] [10002893, 10002ad7] [10002adb, 10002b1a]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_APIDLLsetVideoMode_FUN_10002500(void **scanline_ptrs)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_APIDLLsetVideoMode_FUN_10002500(void **scanline_ptrs)

{
  _FILE *file;
  HRESULT HVar2;
  int bit_depth;
  int result;
  int zbuf_index;
  int cursor_count;
  int flush_frames;
  IDirectDrawSurface **surface;
  char *pcVar7;
  DDPIXELFORMAT zbuf_format;
  DDSCAPS aDStack_1f0 [4];
  DDSURFACEDESC2 DStack_1e0;
  DDBLTFX DStack_164;
  char acStack_100 [256];
  
                    /* 0x2500  31  APIDLLsetVideoMode */
  if (g_NonLocalVideoMem == 0) {
    *g_ExternalRendererBridge.agp_texture_mode = 0;
  }
  if (*g_ExternalRendererBridge.agp_texture_mode == 0) {
    g_TextureSizeTable[0] = 0x80;
    g_TextureSizeTable[1] = 0x40;
    g_TextureSizeTable[2] = 0x20;
    g_TextureSizeTable[3] = 0x10;
    g_TextureSizeTable[4] = 8;
    g_TextureSizeTable[5] = 4;
    g_TextureSizeTable[6] = 2;
    g_TextureSizeTable[7] = 1;
  }
  else {
    g_TextureSizeTable[0] = 0x100;
    g_TextureSizeTable[1] = 0x80;
    g_TextureSizeTable[2] = 0x40;
    g_TextureSizeTable[3] = 0x20;
    g_TextureSizeTable[4] = 0x10;
    g_TextureSizeTable[5] = 8;
    g_TextureSizeTable[6] = 4;
    g_TextureSizeTable[7] = 2;
  }
  g_MasterZBufferCount = 0;
  dll_dx7_cpp_readIniInt_FUN_10002b20
            ("Graphics","masterZBufferCount",&g_MasterZBufferCount);
  g_UseHoldBuffer = 0;
  if (0x1e0 < g_ScreenHeight) {
    dll_dx7_cpp_readIniInt_FUN_10002b20
              ("Graphics","useHoldBuffer",&g_UseHoldBuffer);
  }
  g_PremultiplyColorAndAlpha = 0;
  dll_dx7_cpp_readIniInt_FUN_10002b20
            ("Graphics","premultiplyColorAndAlpha",
             (uint *)&g_PremultiplyColorAndAlpha);
  g_DirectTextureFlag = 0;
  dll_dx7_cpp_readIniInt_FUN_10002b20
            ("Graphics","directTextureFlag",&g_DirectTextureFlag);
  g_AllowAutoMipMapping = 0;
  dll_dx7_cpp_readIniInt_FUN_10002b20
            ("Graphics","allowAutoMipMapping",&g_AllowAutoMipMapping);
  file = _fopen("system\\fly.ini","rb");
  if (file == (_FILE *)0x0) {
    g_FlyIniPresent = 0;
  }
  else {
    g_FlyIniPresent = 1;
    _fclose(file);
  }
  g_ScanlinePtrBase = scanline_ptrs;
  if (0 < g_ScreenHeight) {
    memcpy(g_ScanlinePointers,scanline_ptrs,g_ScreenHeight * sizeof(g_ScanlinePointers[0]));
  }
  bit_depth = g_ScreenBitDepth;
  dll_dx7_cpp_releaseDirectXResources_FUN_10002370();
  HVar2 = (*g_DirectDraw4->vtable->SetCooperativeLevel)(g_DirectDraw4,g_WindowHandle,0x11);
  dll_dx7_cpp_checkD3DResult_FUN_10001d70(HVar2);
  if (HVar2 != 0) {
    return 0;
  }
  HVar2 = (*g_DirectDraw4->vtable->SetDisplayMode)
                    (g_DirectDraw4,g_ScreenWidth,g_ScreenHeight,bit_depth,0,0);
  if (HVar2 != 0) {
    return 0;
  }
  memset(&g_PrimarySurfaceDesc,0,sizeof(g_PrimarySurfaceDesc));
  g_PrimarySurfaceDesc.dwSize = 0x7c;
  g_PrimarySurfaceDesc.dwFlags = 0x21;
  g_PrimarySurfaceDesc.dwBackBufferCount = 2;
  if (*g_ExternalRendererBridge.agp_texture_mode < 2) {
    g_PrimarySurfaceDesc.dwBackBufferCount = 1;
  }
  g_PrimarySurfaceDesc.ddsCaps.dwCaps = 0x6218;
  HVar2 = (*g_DirectDraw4->vtable->CreateSurface)
                    (g_DirectDraw4,&g_PrimarySurfaceDesc,&g_PrimarySurface,(IUnknown *)0x0);
  if (HVar2 != 0) {
    g_PrimarySurfaceDesc.dwBackBufferCount = 1;
    HVar2 = (*g_DirectDraw4->vtable->CreateSurface)
                      (g_DirectDraw4,&g_PrimarySurfaceDesc,&g_PrimarySurface,(IUnknown *)0x0);
    if (HVar2 != 0) {
      (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
      return 0;
    }
  }
  aDStack_1f0[0].dwCaps = 0x2004;
  HVar2 = (*g_PrimarySurface->vtable->GetAttachedSurface)
                    (g_PrimarySurface,aDStack_1f0,&g_BackBufferSurface);
  if (HVar2 != 0) {
    (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
    return 0;
  }
  result = dll_dx7_cpp_createDirect3D_FUN_10002f40();
  if (result == 0) {
    (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
    return 0;
  }
  memset(&zbuf_format,0,sizeof(zbuf_format));
  HVar2 = (*g_Direct3D3->vtable->EnumZBufferFormats)
                    (g_Direct3D3,(GUID *)&g_Direct3DDeviceGUID,
                     dll_dx7_cpp_enumZBufferFormatCallback_FUN_10002b50,&zbuf_format);
  dll_dx7_cpp_checkD3DResult_FUN_10001d70(HVar2);
  if (zbuf_format.dwSize != sizeof(DDPIXELFORMAT)) {
    HVar2 = (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
    if (HVar2 != 0) {
      return 0;
    }
    dll_dx7_cpp_fatalError_FUN_10002340("Your 3D hardware needs to support a Z buffer");
  }
  memset(&DStack_1e0,0,sizeof(DStack_1e0));
  DStack_1e0.dwWidth = g_ScreenWidth;
  DStack_1e0.dwHeight = g_ScreenHeight;
  DStack_1e0.dwSize = 0x7c;
  DStack_1e0.dwFlags = 0x1007;
  DStack_1e0.ddsCaps.dwCaps = 0x20000;
  DStack_1e0.ddpfPixelFormat = zbuf_format;
  HVar2 = (*g_DirectDraw4->vtable->CreateSurface)
                    (g_DirectDraw4,&DStack_1e0,&g_ZBufferSurface,(IUnknown *)0x0);
  if (HVar2 == 0) {
    zbuf_index = 0;
    g_ZBufferBitDepth = zbuf_format.dwBitCount.dwRGBBitCount;
    if (0 < (int)g_MasterZBufferCount) {
      surface = g_MasterZBufferSurfaces;
      do {
        HVar2 = (*g_DirectDraw4->vtable->CreateSurface)
                          (g_DirectDraw4,&DStack_1e0,surface,(IUnknown *)0x0);
        if (HVar2 != 0) {
          (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
          pcVar7 = "FATAL ERROR!  Unable to create a 2nd master Z buffer.   Your Direct3D driver does not support this.  Please restart the game and turn off hardware acceleration.";
          goto code_r0x10002993;
        }
        surface = surface + 1;
        zbuf_index = zbuf_index + 1;
      } while (zbuf_index < (int)g_MasterZBufferCount);
    }
    HVar2 = (*g_BackBufferSurface->vtable->AddAttachedSurface)(g_BackBufferSurface,g_ZBufferSurface)
    ;
    if (HVar2 == 0) {
      memset(&DStack_164,0,sizeof(DStack_164));
      DStack_164.dwSize = 100;
      (*g_PrimarySurface->vtable->Blt)
                (g_PrimarySurface,(RECT *)0x0,(IDirectDrawSurface *)0x0,(RECT *)0x0,0x1000400,
                 &DStack_164);
      (*g_BackBufferSurface->vtable->Blt)
                (g_BackBufferSurface,(RECT *)0x0,(IDirectDrawSurface *)0x0,(RECT *)0x0,0x1000400,
                 &DStack_164);
      result = dll_dx7_cpp_initD3DDevice_FUN_10003100();
      if (result == 0) {
        _sprintf(acStack_100,
                 "Unable to initialize Direct3D in %dx%dx%dbpp.   Your video card doesn\'t support this mode."
                 ,g_ScreenWidth,g_ScreenHeight,g_ScreenBitDepth);
        dll_dx7_cpp_fatalError_FUN_10002340(acStack_100);
      }
      SetCursorPos(0x27f,0x1df);
      do {
        cursor_count = ShowCursor(0);
      } while (0 < cursor_count);
      flush_frames = 3;
      do {
        dll_dx7_cpp_APIDLLclear_FUN_10004840();
        dll_dx7_cpp_APIDLLtoggle_FUN_100024b0();
        flush_frames = flush_frames + -1;
      } while (flush_frames != 0);
      return 1;
    }
    (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
    strcpy(g_ErrorMessageBuffer,
           "FATAL ERROR!  Unable to attach Z buffer to back buffer.   Please restart the game and turn off hardware acceleration."
          );
    MessageBoxA((HWND)0x0,g_ErrorMessageBuffer,"3D Adapter Error",0x10);
    ExitProcess(0x29a);
  }
  (*g_DirectDraw4->vtable->RestoreDisplayMode)(g_DirectDraw4);
  pcVar7 = "FATAL ERROR!  Unable to create a Z buffer.   Your 3D adapter does not support a 16-bit Z buffer.  Please restart the game and turn off hardware acceleration."
  ;
code_r0x10002993:
  strcpy(g_ErrorMessageBuffer,pcVar7);
  MessageBoxA((HWND)0x0,g_ErrorMessageBuffer,"3D Adapter Error",0x10);
  ExitProcess(0x29a);
}
