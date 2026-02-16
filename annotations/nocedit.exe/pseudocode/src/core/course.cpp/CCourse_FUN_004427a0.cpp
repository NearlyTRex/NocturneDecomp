// Name: core_course.cpp_CCourse_FUN_004427a0
// Address: 004427a0
// Address Range: [[004427a0, 00442a83]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_FUN_004427a0(CCourse *this_ptr)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_FUN_004427a0(CCourse *this_ptr)

{
  float fVar1;
  CCourseFrameList *pCVar2;
  CCourseFrame *pCVar3;
  CQuaternion4f *pCVar4;
  uint *puVar6;
  int iVar7;
  float *pfVar8;
  byte bVar9;
  double dVar10;
  float in_stack_00000008;
  float *in_stack_0000000c;
  float *in_stack_00000010;
  float afStackY_1854 [1517];
  uint local_90;
  float local_7c;
  CQuaternion4f CStack_68;
  float fStack_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_24;
  int local_1c;
  int local_18;
  int local_14;
  uint *puVar5;
  
  bVar9 = 0;
  if (this_ptr->loop == 0) {
    if (0.0 < in_stack_00000008) {
      iVar7 = this_ptr->len + -1;
      local_14 = iVar7;
      if (in_stack_00000008 < (float)iVar7) {
        dVar10 = round((double)in_stack_00000008);
        local_1c = (int)ROUND(dVar10);
        local_18 = local_1c;
        local_7c = in_stack_00000008 - (float)local_1c;
        iVar7 = local_1c + 1;
      }
      else {
        local_18 = iVar7;
      }
      goto LAB_004427da;
    }
    local_18 = this_ptr->loop;
  }
  else {
    fVar1 = (float)this_ptr->len;
    if (0.0 <= in_stack_00000008) {
      local_24 = floor((double)(in_stack_00000008 / fVar1));
      local_7c = in_stack_00000008 - (float)local_24 * fVar1;
    }
    else {
      local_24 = floor((double)(-in_stack_00000008 / fVar1));
      local_7c = (float)local_24 * fVar1 + in_stack_00000008;
      if (local_7c < 0.0) {
        local_7c = local_7c + fVar1;
      }
    }
    dVar10 = round((double)local_7c);
    local_1c = (int)ROUND(dVar10);
    local_18 = local_1c;
    local_7c = local_7c - (float)local_1c;
    iVar7 = local_1c + 1;
    if (iVar7 < this_ptr->len) goto LAB_004427da;
  }
  iVar7 = 0;
LAB_004427da:
  local_90 = (uint)((ulonglong)(double)local_7c >> 0x20);
  if ((double)local_7c <= 0.001) {
    pCVar3 = &this_ptr->frame_list->frame1 + local_1c;
    if ((CCourseFrame *)&local_40 != pCVar3) {
      local_40 = (pCVar3->pos).x;
      local_3c = (pCVar3->pos).y;
      local_38 = (pCVar3->pos).z;
    }
    pCVar4 = &(&this_ptr->frame_list->frame1)[local_1c].orient;
  }
  else {
    pCVar3 = &this_ptr->frame_list->frame1 + iVar7;
    local_4c = (pCVar3->pos).x * local_7c;
    local_48 = (pCVar3->pos).y * local_7c;
    local_44 = local_7c * (pCVar3->pos).z;
    local_50 = 1.0 - local_7c;
    pCVar2 = this_ptr->frame_list;
    local_24 = (double)CONCAT44(local_50,(uint)local_24);
    fStack_58 = (&pCVar2->frame1)[local_1c].pos.x * local_50;
    local_54 = (&pCVar2->frame1)[local_1c].pos.y * local_50;
    local_50 = (&pCVar2->frame1)[local_1c].pos.z * local_50;
    local_34 = fStack_58 + local_4c;
    local_30 = local_54 + local_48;
    local_2c = local_50 + local_44;
    if (&local_40 != &local_34) {
      local_40 = local_34;
      local_3c = local_30;
      local_38 = local_2c;
    }
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              (&(&this_ptr->frame_list->frame1)[local_1c].orient,
               &(&this_ptr->frame_list->frame1)[iVar7].orient,local_7c,&CStack_68);
    pCVar4 = &CStack_68;
  }
  puVar5 = (uint *)((int)pCVar4 + ((uint)bVar9 * -2 + 1) * 4);
  fVar1 = pCVar4->w;
  puVar6 = puVar5 + (uint)bVar9 * -2 + 1;
  *(uint *)(&stack0xffffff8c + (uint)bVar9 * -8) = *puVar5;
  *(uint *)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8) = *puVar6;
  *(uint *)
   ((int)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8) + ((uint)bVar9 * -2 + 1) * 4) =
       puVar6[(uint)bVar9 * -2 + 1];
  if (in_stack_0000000c != &local_40) {
    *in_stack_0000000c = local_40;
    in_stack_0000000c[1] = local_3c;
    in_stack_0000000c[2] = local_38;
    pfVar8 = in_stack_00000010 + (uint)bVar9 * -2 + 1;
    *in_stack_00000010 = fVar1;
    *pfVar8 = *(float *)(&stack0xffffff8c + (uint)bVar9 * -8);
    pfVar8[(uint)bVar9 * -2 + 1] =
         *(float *)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    (pfVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         *(float *)((int)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
                   ((uint)bVar9 * -2 + 1) * 4);
    return;
  }
  pfVar8 = in_stack_00000010 + (uint)bVar9 * -2 + 1;
  *in_stack_00000010 = fVar1;
  *pfVar8 = *(float *)(&stack0xffffff8c + (uint)bVar9 * -8);
  pfVar8[(uint)bVar9 * -2 + 1] = *(float *)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  (pfVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
       *(float *)((int)(&stack0xffffff90 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
                 ((uint)bVar9 * -2 + 1) * 4);
  return;
}
