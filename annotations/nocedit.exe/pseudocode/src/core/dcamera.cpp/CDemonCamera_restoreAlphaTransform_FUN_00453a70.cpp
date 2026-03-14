// Name: core_dcamera.cpp_CDemonCamera_restoreAlphaTransform_FUN_00453a70
// Address: 00453a70
// Address Range: [[00453a70, 00453bcf]]
// Convention: __stack3_esi
// Signature: CVector3i * __stack3_esi core_dcamera_cpp_CDemonCamera_restoreAlphaTransform_FUN_00453a70(CDemonCamera *this_ptr,CVector3i *screen_pos,int alpha_index,CVector3i *world_pos)

#include "nocturne.h"

CVector3i * __stack3_esi core_dcamera_cpp_CDemonCamera_restoreAlphaTransform_FUN_00453a70(CDemonCamera *this_ptr,CVector3i *screen_pos,int alpha_index,CVector3i *world_pos)

{
  int iVar3;
  int iVar12;
  int iVar13;
  int iVar2;
  int iVar1;
  longlong lVar7;
  longlong lVar6;
  longlong lVar5;
  longlong lVar4;
  longlong lVar11;
  longlong lVar10;
  longlong lVar9;
  longlong lVar8;
  longlong lVar3;
  
  iVar1 = screen_pos->z;
  iVar12 = (int)(((longlong)(screen_pos->x - (this_ptr->saved_viewport_rect).right) *
                 (longlong)iVar1) / (longlong)(this_ptr->saved_viewport_rect).left);
  iVar13 = (int)(((longlong)(screen_pos->y - (this_ptr->saved_viewport_rect).bottom) *
                 (longlong)iVar1) / (longlong)(this_ptr->saved_viewport_rect).top);
  lVar3 = (longlong)this_ptr->alpha_transform_matrices[9][alpha_index] * (longlong)iVar12;
  lVar4 = (longlong)this_ptr->alpha_transform_matrices[0xc][alpha_index] * (longlong)iVar13;
  lVar5 = (longlong)this_ptr->alpha_transform_matrices[0xf][alpha_index] * (longlong)iVar1;
  lVar6 = (longlong)this_ptr->alpha_transform_matrices[10][alpha_index] * (longlong)iVar12;
  lVar7 = (longlong)this_ptr->alpha_transform_matrices[0xd][alpha_index] * (longlong)iVar13;
  lVar8 = (longlong)this_ptr->alpha_transform_matrices[0x10][alpha_index] * (longlong)iVar1;
  iVar2 = this_ptr->alpha_translations[alpha_index].y;
  lVar9 = (longlong)this_ptr->alpha_transform_matrices[0xb][alpha_index] * (longlong)iVar12;
  lVar10 = (longlong)this_ptr->alpha_transform_matrices[0xe][alpha_index] * (longlong)iVar13;
  lVar11 = (longlong)this_ptr->alpha_transform_matrices[0x11][alpha_index] * (longlong)iVar1;
  iVar3 = this_ptr->alpha_translations[alpha_index].z;
  world_pos->x = ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                 ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
                 ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                 this_ptr->alpha_translations[alpha_index].x;
  world_pos->y = iVar2 + ((uint)lVar8 >> 0x10 | (int)((ulonglong)lVar8 >> 0x20) << 0x10) +
                         ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
                         ((uint)lVar7 >> 0x10 | (int)((ulonglong)lVar7 >> 0x20) << 0x10);
  world_pos->z = iVar3 + ((uint)lVar11 >> 0x10 | (int)((ulonglong)lVar11 >> 0x20) << 0x10) +
                         ((uint)lVar9 >> 0x10 | (int)((ulonglong)lVar9 >> 0x20) << 0x10) +
                         ((uint)lVar10 >> 0x10 | (int)((ulonglong)lVar10 >> 0x20) << 0x10);
  return world_pos;
}
