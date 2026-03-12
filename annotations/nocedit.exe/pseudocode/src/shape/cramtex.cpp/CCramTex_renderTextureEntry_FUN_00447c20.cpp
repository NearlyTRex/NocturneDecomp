// Name: shape_cramtex.cpp_CCramTex_renderTextureEntry_FUN_00447c20
// Address: 00447c20
// Address Range: [[00447c20, 00447e7d]]
// Convention: __cdecl
// Signature: void __cdecl shape_cramtex_cpp_CCramTex_renderTextureEntry_FUN_00447c20(CCramTex *this_ptr,int show_final_placement,int draw_x,int draw_y,int draw_right,int draw_bottom)

#include "nocturne.h"

void __cdecl shape_cramtex_cpp_CCramTex_renderTextureEntry_FUN_00447c20(CCramTex *this_ptr,int show_final_placement,int draw_x,int draw_y,int draw_right,int draw_bottom)

{
  int x1;
  int iVar7;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar8;
  int iVar5;
  int iVar6;
  int local_18;
  
  __STK();
  if (show_final_placement == 0) {
    if (g_CramMapNumber != this_ptr->assigned_map_number) {
      return;
    }
    local_18 = this_ptr->working_top;
    iVar8 = this_ptr->working_right;
    iVar7 = this_ptr->working_width;
    iVar6 = this_ptr->placement_bottom;
  }
  else {
    if (g_CramMapNumber != this_ptr->working_map_id) {
      return;
    }
    local_18 = this_ptr->final_right;
    iVar8 = this_ptr->final_top;
    iVar7 = this_ptr->final_bottom;
    iVar6 = this_ptr->final_left;
  }
  iVar1 = draw_right - draw_x;
  iVar2 = draw_bottom - draw_y;
  engine_2d_c_fillRectColor_FUN_00403170
            ((iVar1 * iVar6) / g_CramCurrentAcceptableSize + draw_x,
             draw_y + (iVar2 * iVar8) / g_CramCurrentAcceptableSize,
             (local_18 * iVar1) / g_CramCurrentAcceptableSize + draw_x + -1,
             (iVar7 * iVar2) / g_CramCurrentAcceptableSize + draw_y + -1,0xf8);
  iVar3 = g_CramPaddingCalculation / 2;
  x1 = (iVar1 * (iVar6 + iVar3)) / g_CramCurrentAcceptableSize + draw_x;
  iVar5 = draw_y + (iVar2 * (iVar8 + iVar3)) / g_CramCurrentAcceptableSize;
  engine_2d_c_fillRectColor_FUN_00403170
            (x1,iVar5,((local_18 - iVar3) * iVar1) / g_CramCurrentAcceptableSize + draw_x + -1,
             ((iVar7 - iVar3) * iVar2) / g_CramCurrentAcceptableSize + draw_y + -1,2);
  if (show_final_placement != 0) {
    if (this_ptr->rotation_applied == 0) {
      iVar4 = this_ptr->width;
    }
    else {
      iVar4 = this_ptr->height;
    }
    if (this_ptr->rotation_applied == 0) {
      iVar8 = this_ptr->height;
    }
    else {
      iVar8 = this_ptr->width;
    }
    engine_2d_c_fillRectColor_FUN_00403170
              (x1,iVar5,draw_x + ((draw_right - draw_x) *
                                 ((g_CramPaddingCalculation + iVar4 + this_ptr->final_left) -
                                 g_CramPaddingCalculation / 2)) / g_CramCurrentAcceptableSize + -1,
               ((draw_bottom - draw_y) *
               ((g_CramPaddingCalculation + iVar8 + this_ptr->final_top) -
               g_CramPaddingCalculation / 2)) / g_CramCurrentAcceptableSize + draw_y + -1,0xfa);
  }
  return;
}
