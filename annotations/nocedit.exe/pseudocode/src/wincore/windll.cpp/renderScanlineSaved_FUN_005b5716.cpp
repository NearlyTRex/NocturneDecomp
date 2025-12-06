// Name: wincore_windll.cpp_renderScanlineSaved_FUN_005b5716
// Address: 005b5716
// Address Range: [[005b5716, 005b575b]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_renderScanlineSaved_FUN_005b5716(void * scanline_data, int scanline_y, int render_flags)

#include "nocturne.h"

void __cdecl
wincore_windll_cpp_renderScanlineSaved_FUN_005b5716
          (void *scanline_data,int scanline_y,int render_flags)

{
  int in_EAX;
  int in_ECX;
  int in_EDX;
  int unaff_EBX;
  int unaff_EBP;
  void *unaff_ESI;
  void *unaff_EDI;
  
  g_SavedRegisterEAX = in_EAX;
  g_SavedRegisterEBX = unaff_EBX;
  g_SavedRegisterECX = in_ECX;
  g_SavedRegisterEDX = in_EDX;
  (*g_ScanlineRenderFunc)(unaff_EDI,unaff_ESI,unaff_EBP);
  return;
}
