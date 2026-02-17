// Name: core_course.cpp_CCourse_FUN_004427a0
// Address: 004427a0
// Address Range: [[004427a0, 00442a83]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_FUN_004427a0(CCourse *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

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
  float in_stack_00000008;
  float *in_stack_0000000c;
  float *in_stack_00000010;
  float afStackY_1850 [1517];
  float local_7c;
  float local_78;
  CQuaternion4f local_64;
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
  float local_28;
  double local_24;
  float local_1c;
  int local_18;
  int local_14;
  uint *puVar5;
  
  bVar9 = 0;
  if (this_ptr->loop == 0) {
    if (0.0 < in_stack_00000008) {
      iVar7 = this_ptr->len + -1;
      local_14 = iVar7;
      if (in_stack_00000008 < (float)iVar7) {
        local_18 = (int)ROUND(ROUND(in_stack_00000008));
        local_14 = local_18;
        local_78 = in_stack_00000008 - (float)local_18;
        iVar7 = local_18 + 1;
      }
      else {
        local_18 = iVar7;
        local_78 = 0.0;
      }
      goto LAB_004427da;
    }
    local_18 = this_ptr->loop;
    local_78 = 0.0;
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
    local_18 = (int)ROUND(ROUND(local_7c));
    local_14 = local_18;
    local_78 = local_7c - (float)local_18;
    iVar7 = local_18 + 1;
    if (iVar7 < this_ptr->len) goto LAB_004427da;
  }
  iVar7 = 0;
LAB_004427da:
  if ((double)local_78 <= 0.001) {
    pCVar3 = &this_ptr->frame_list->frame1 + local_18;
    if ((CCourseFrame *)&local_3c != pCVar3) {
      local_3c = (pCVar3->pos).x;
      local_38 = (pCVar3->pos).y;
      local_34 = (pCVar3->pos).z;
    }
    pCVar4 = &(&this_ptr->frame_list->frame1)[local_18].orient;
  }
  else {
    pCVar3 = &this_ptr->frame_list->frame1 + iVar7;
    local_48 = (pCVar3->pos).x * local_78;
    local_44 = (pCVar3->pos).y * local_78;
    local_40 = local_78 * (pCVar3->pos).z;
    local_1c = 1.0 - local_78;
    pCVar2 = this_ptr->frame_list;
    local_54 = (&pCVar2->frame1)[local_18].pos.x * local_1c;
    local_50 = (&pCVar2->frame1)[local_18].pos.y * local_1c;
    local_4c = (&pCVar2->frame1)[local_18].pos.z * local_1c;
    local_30 = local_54 + local_48;
    local_2c = local_50 + local_44;
    local_28 = local_4c + local_40;
    if (&local_3c != &local_30) {
      local_3c = local_30;
      local_38 = local_2c;
      local_34 = local_28;
    }
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              (&(&this_ptr->frame_list->frame1)[local_18].orient,
               &(&this_ptr->frame_list->frame1)[iVar7].orient,local_78,&local_64);
    pCVar4 = &local_64;
  }
  puVar5 = (uint *)((int)pCVar4 + ((uint)bVar9 * -2 + 1) * 4);
  fVar1 = pCVar4->w;
  puVar6 = puVar5 + (uint)bVar9 * -2 + 1;
  *(uint *)(&stack0xffffff90 + (uint)bVar9 * -8) = *puVar5;
  *(uint *)(&stack0xffffff94 + (uint)bVar9 * -8 + (uint)bVar9 * -8) = *puVar6;
  *(uint *)
   ((int)(&stack0xffffff94 + (uint)bVar9 * -8 + (uint)bVar9 * -8) + ((uint)bVar9 * -2 + 1) * 4) =
       puVar6[(uint)bVar9 * -2 + 1];
  if (in_stack_0000000c != &local_3c) {
    *in_stack_0000000c = local_3c;
    in_stack_0000000c[1] = local_38;
    in_stack_0000000c[2] = local_34;
    pfVar8 = in_stack_00000010 + (uint)bVar9 * -2 + 1;
    *in_stack_00000010 = fVar1;
    *pfVar8 = *(float *)(&stack0xffffff90 + (uint)bVar9 * -8);
    pfVar8[(uint)bVar9 * -2 + 1] =
         *(float *)(&stack0xffffff94 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    (pfVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
         *(float *)((int)(&stack0xffffff94 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
                   ((uint)bVar9 * -2 + 1) * 4);
    return;
  }
  pfVar8 = in_stack_00000010 + (uint)bVar9 * -2 + 1;
  *in_stack_00000010 = fVar1;
  *pfVar8 = *(float *)(&stack0xffffff90 + (uint)bVar9 * -8);
  pfVar8[(uint)bVar9 * -2 + 1] = *(float *)(&stack0xffffff94 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  (pfVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
       *(float *)((int)(&stack0xffffff94 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
                 ((uint)bVar9 * -2 + 1) * 4);
  return;
}
