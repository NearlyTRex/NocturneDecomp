// Name: FUN_0058e450
// Address: 0058e450
// Address Range: [[0058e450, 0058e63e]]
// Convention: unknown
// Signature: bool FUN_0058e450(int param_1,int param_2,int param_3)

#include "nocturne.h"

bool FUN_0058e450(int param_1,int param_2,int param_3)

{
  bool bVar1;
  HDC pHVar2;
  HBITMAP h;
  HBRUSH h_00;
  HGDIOBJ pvVar3;
  BITMAPINFO local_48;
  LOGBRUSH local_1c;
  
  if (param_2 < 1) {
    param_2 = DAT_006141b8;
  }
  if (param_3 < 1) {
    param_3 = 100;
  }
  if (((*(int *)(param_1 + 0x6a48) == 0 || *(int *)(param_1 + 0x6b64) < param_2) ||
      *(int *)(param_1 + 0x6b68) < param_3) || *(int *)(param_1 + 0x6b6c) != DAT_006141c0) {
    FUN_0058e640(param_1);
    pHVar2 = CreateCompatibleDC((HDC)0x0);
    *(HDC *)(param_1 + 0x6a48) = pHVar2;
    FUN_005b77c0(&local_48,0,0x2c);
    local_48.bmiHeader.biSize = 0x28;
    local_48.bmiHeader.biPlanes = 1;
    local_48.bmiHeader.biSizeImage = 0;
    local_48.bmiHeader.biClrUsed = 0;
    local_48.bmiHeader.biHeight = -param_3;
    local_48.bmiHeader.biBitCount = (WORD)DAT_006141c0;
    local_48.bmiHeader.biCompression = 0;
    local_48.bmiHeader.biXPelsPerMeter = 0;
    local_48.bmiHeader.biYPelsPerMeter = 0;
    local_48.bmiHeader.biClrImportant = 0;
    local_48.bmiHeader.biWidth = param_2;
    h = CreateDIBSection(*(HDC *)(param_1 + 0x6a48),&local_48,0,(void **)(param_1 + 0x6a58),
                         (HANDLE)0x0,0);
    *(HBITMAP *)(param_1 + 0x6a4c) = h;
    bVar1 = false;
    if (h != (HBITMAP)0x0) {
      SelectObject(*(HDC *)(param_1 + 0x6a48),h);
      SetBkMode(*(HDC *)(param_1 + 0x6a48),2);
      SetBkColor(*(HDC *)(param_1 + 0x6a48),0xff00ff);
      local_1c.lbStyle = 0;
      local_1c.lbColor = 0xff00ff;
      local_1c.lbHatch = 0;
      h_00 = CreateBrushIndirect(&local_1c);
      SelectObject(*(HDC *)(param_1 + 0x6a48),h_00);
      Rectangle(*(HDC *)(param_1 + 0x6a48),0,-*(int *)(param_1 + 0x6b68),*(int *)(param_1 + 0x6b64),
                0);
      DeleteObject(h_00);
      pvVar3 = SelectObject(*(HDC *)(param_1 + 0x6a48),*(HGDIOBJ *)(param_1 + 0x6a50));
      *(HGDIOBJ *)(param_1 + 0x6a54) = pvVar3;
      *(int *)(param_1 + 0x6b64) = param_2;
      *(int *)(param_1 + 0x6b68) = param_3;
      *(int *)(param_1 + 0x6b6c) = DAT_006141c0;
      return *(int *)(param_1 + 0x6a48) != 0;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}
