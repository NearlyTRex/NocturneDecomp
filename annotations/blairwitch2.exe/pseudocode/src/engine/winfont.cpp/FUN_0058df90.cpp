// Name: engine_winfont.cpp_FUN_0058df90
// Address: 0058df90
// Address Range: [[0058df90, 0058e04f]]
// Convention: __cdecl
// Signature: CWinFont * __cdecl engine_winfont_cpp_FUN_0058df90(CWinFont *this_ptr,char *font_name,int font_height,int y_offset1,int y_offset2)

#include "nocturne.h"

CWinFont * __cdecl engine_winfont_cpp_FUN_0058df90(CWinFont *this_ptr,char *font_name,int font_height,int y_offset1,int y_offset2)

{
  CWinFont *pCVar1;
  HFONT pHVar2;
  
  pCVar1 = (CWinFont *)unkafter_npc_cpp_FUN_00510ca0(this_ptr);
  *(byte ***)&pCVar1->field_0x6a44 =
       &PTR_engine_winfont_cpp_CWinFont_dtor_FUN_0058e050_005fe274;
  *(uint *)&pCVar1->field_0x6a48 = 0;
  *(uint *)&pCVar1->field_0x6a50 = 0;
  *(uint *)&pCVar1->field_0x6a54 = 0;
  *(uint *)&pCVar1->field_0x6a58 = 0;
  *(uint *)&pCVar1->field_0x6b64 = 0;
  *(uint *)&pCVar1->field_0x6b68 = 0;
  *(uint *)&pCVar1->field_0x6b6c = 0;
  *(uint *)&pCVar1->field_0x6b70 = 0;
  *(uint *)&pCVar1->field_0x6b74 = 0;
  pHVar2 = CreateFontA(-font_height,0,0,0,400,0,0,0,1,0,0,0,0,font_name);
  *(HFONT *)&pCVar1->field_0x6a50 = pHVar2;
  *(int *)&pCVar1->field_0x6b78 = y_offset1;
  *(int *)&pCVar1->field_0x6b7c = y_offset2;
  return pCVar1;
}
