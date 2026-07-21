// Name: engine_winfont.cpp_CWinFont_createTextBackground_FUN_005584d0
// Address: 005584d0
// Address Range: [[005584d0, 00558694]]
// Convention: __cdecl
// Signature: bool __cdecl engine_winfont_cpp_CWinFont_createTextBackground_FUN_005584d0(int param_1,int param_2,int param_3)

#include "nocturne.h"

bool __cdecl engine_winfont_cpp_CWinFont_createTextBackground_FUN_005584d0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  HDC pHVar2;
  HBITMAP h;
  HBRUSH h_00;
  HGDIOBJ pvVar3;
  BITMAPINFO local_48;
  LOGBRUSH local_1c;
  
  if (param_2 < 1) {
    param_2 = DAT_005b761c;
  }
  if (param_3 < 1) {
    param_3 = 100;
  }
  if (((*(int *)(param_1 + 4) == 0 || *(int *)(param_1 + 0x120) < param_2) ||
      *(int *)(param_1 + 0x124) < param_3) || *(int *)(param_1 + 0x128) != DAT_005b7624) {
    engine_winfont_cpp_CWinFont_reset_FUN_005586a0(param_1);
    pHVar2 = CreateCompatibleDC((HDC)0x0);
    *(HDC *)(param_1 + 4) = pHVar2;
    memset(&local_48,0,0x2c);
    local_48.bmiHeader.biSize = 0x28;
    local_48.bmiHeader.biPlanes = 1;
    local_48.bmiHeader.biSizeImage = 0;
    local_48.bmiHeader.biClrUsed = 0;
    local_48.bmiHeader.biHeight = -param_3;
    local_48.bmiHeader.biBitCount = (WORD)DAT_005b7624;
    local_48.bmiHeader.biCompression = 0;
    local_48.bmiHeader.biXPelsPerMeter = 0;
    local_48.bmiHeader.biYPelsPerMeter = 0;
    local_48.bmiHeader.biClrImportant = 0;
    local_48.bmiHeader.biWidth = param_2;
    h = CreateDIBSection(*(HDC *)(param_1 + 4),&local_48,0,(void **)(param_1 + 0x14),(HANDLE)0x0,0);
    *(HBITMAP *)(param_1 + 8) = h;
    bVar1 = false;
    if (h != (HBITMAP)0x0) {
      SelectObject(*(HDC *)(param_1 + 4),h);
      SetBkMode(*(HDC *)(param_1 + 4),2);
      SetBkColor(*(HDC *)(param_1 + 4),0xff00ff);
      local_1c.lbStyle = 0;
      local_1c.lbColor = 0xff00ff;
      local_1c.lbHatch = 0;
      h_00 = CreateBrushIndirect(&local_1c);
      SelectObject(*(HDC *)(param_1 + 4),h_00);
      Rectangle(*(HDC *)(param_1 + 4),0,-*(int *)(param_1 + 0x124),*(int *)(param_1 + 0x120),0);
      DeleteObject(h_00);
      pvVar3 = SelectObject(*(HDC *)(param_1 + 4),*(HGDIOBJ *)(param_1 + 0xc));
      *(HGDIOBJ *)(param_1 + 0x10) = pvVar3;
      *(int *)(param_1 + 0x120) = param_2;
      *(int *)(param_1 + 0x124) = param_3;
      *(int *)(param_1 + 0x128) = DAT_005b7624;
      return *(int *)(param_1 + 4) != 0;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}
