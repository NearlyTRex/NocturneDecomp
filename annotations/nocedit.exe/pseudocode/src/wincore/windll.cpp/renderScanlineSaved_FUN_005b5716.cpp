// Name: wincore_windll.cpp_renderScanlineSaved_FUN_005b5716
// Address: 005b5716
// Address Range: [[005b5716, 005b575b]]
// Convention: __cdecl
// Signature: void __cdecl wincore_windll_cpp_renderScanlineSaved_FUN_005b5716(void *scanline_data,int scanline_y,int render_flags)

#include "nocturne.h"

void __cdecl wincore_windll_cpp_renderScanlineSaved_FUN_005b5716(void *scanline_data,int scanline_y,int render_flags)

{
  int in_EAX;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  
  g_SavedRegisterEAX = in_EAX;
  g_SavedRegisterEBX = unaff_EBX;
  g_SavedRegisterECX = in_ECX;
  g_SavedRegisterEDX = in_EDX;
  (*g_ScanlineRenderFunc)((void *)render_flags,(void *)scanline_y,(int)scanline_data);
  return;
}
