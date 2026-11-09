// Name: engine_winfont.cpp_FUN_00580110
// Address: 00580110
// Address Range: [[00580110, 005802fe]]
// Convention: __cdecl
// Signature: int __cdecl engine_winfont_cpp_FUN_00580110(CWinFont *this_ptr,int width,int height)

#include "nocturne.h"

int __cdecl engine_winfont_cpp_FUN_00580110(CWinFont *this_ptr,int width,int height)

{
  int iVar1;
  HDC pHVar2;
  HBITMAP h;
  HBRUSH h_00;
  HGDIOBJ pvVar3;
  BITMAPINFO local_48;
  LOGBRUSH local_1c;
  
  if (width < 1) {
    width = DAT_005fba18;
  }
  if (height < 1) {
    height = 100;
  }
  if (((*(int *)&this_ptr->field_0x6a48 == 0 || *(int *)&this_ptr->field_0x6b64 < width) ||
      *(int *)&this_ptr->field_0x6b68 < height) || *(int *)&this_ptr->field_0x6b6c != DAT_005fba20)
  {
    engine_winfont_cpp_FUN_00580300(this_ptr);
    pHVar2 = CreateCompatibleDC((HDC)0x0);
    *(HDC *)&this_ptr->field_0x6a48 = pHVar2;
    memset(&local_48,0,0x2c);
    local_48.bmiHeader.biSize = 0x28;
    local_48.bmiHeader.biPlanes = 1;
    local_48.bmiHeader.biSizeImage = 0;
    local_48.bmiHeader.biClrUsed = 0;
    local_48.bmiHeader.biHeight = -height;
    local_48.bmiHeader.biBitCount = (WORD)DAT_005fba20;
    local_48.bmiHeader.biCompression = 0;
    local_48.bmiHeader.biXPelsPerMeter = 0;
    local_48.bmiHeader.biYPelsPerMeter = 0;
    local_48.bmiHeader.biClrImportant = 0;
    local_48.bmiHeader.biWidth = width;
    h = CreateDIBSection(*(HDC *)&this_ptr->field_0x6a48,&local_48,0,
                         (void **)&this_ptr->field_0x6a58,(HANDLE)0x0,0);
    *(HBITMAP *)&this_ptr->field_0x6a4c = h;
    iVar1 = 0;
    if (h != (HBITMAP)0x0) {
      SelectObject(*(HDC *)&this_ptr->field_0x6a48,h);
      SetBkMode(*(HDC *)&this_ptr->field_0x6a48,2);
      SetBkColor(*(HDC *)&this_ptr->field_0x6a48,0xff00ff);
      local_1c.lbStyle = 0;
      local_1c.lbColor = 0xff00ff;
      local_1c.lbHatch = 0;
      h_00 = CreateBrushIndirect(&local_1c);
      SelectObject(*(HDC *)&this_ptr->field_0x6a48,h_00);
      Rectangle(*(HDC *)&this_ptr->field_0x6a48,0,-*(int *)&this_ptr->field_0x6b68,
                *(int *)&this_ptr->field_0x6b64,0);
      DeleteObject(h_00);
      pvVar3 = SelectObject(*(HDC *)&this_ptr->field_0x6a48,*(HGDIOBJ *)&this_ptr->field_0x6a50);
      *(HGDIOBJ *)&this_ptr->field_0x6a54 = pvVar3;
      *(int *)&this_ptr->field_0x6b64 = width;
      *(int *)&this_ptr->field_0x6b68 = height;
      *(int *)&this_ptr->field_0x6b6c = DAT_005fba20;
      return (uint)(*(int *)&this_ptr->field_0x6a48 != 0);
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}
