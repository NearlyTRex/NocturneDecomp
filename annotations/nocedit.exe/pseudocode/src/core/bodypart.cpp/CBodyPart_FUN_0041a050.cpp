// Name: core_bodypart.cpp_CBodyPart_FUN_0041a050
// Address: 0041a050
// Address Range: [[0041a050, 0041a5aa] [0041a615, 0041a628]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_FUN_0041a050(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_FUN_0041a050(CBodyPart *this_ptr)

{
  CLocation *pCVar1;
  int iVar2;
  double dVar3;
  CVector3f *pCVar4;
  char *pcVar5;
  int *piVar6;
  float fVar7;
  int iVar8;
  SSurfaceNormal *pSVar9;
  int iVar10;
  int iVar11;
  SSurfaceNormal *output;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  double dVar15;
  double dVar16;
  CVector3f local_78;
  CVector3f local_6c;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  CVector3f local_48;
  CVector3f local_3c;
  char *local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  if ((2 < this_ptr->vertex_count) && (0 < this_ptr->tri_count)) {
    core_bodypart_cpp_CBodyPart_FUN_0041aa40(this_ptr);
    local_18 = (float)-((local_54 + local_60) / 2);
    iVar11 = -((local_50 + local_5c) / 2);
    iVar8 = 0;
    iVar12 = -((local_4c + local_58) / 2);
    if (0 < this_ptr->vertex_count) {
      iVar10 = 0;
      do {
        iVar2 = this_ptr->unk2;
        *(int *)(iVar10 + iVar2) = *(int *)(iVar10 + iVar2) + (int)local_18;
        piVar6 = (int *)(iVar10 + 4 + iVar2);
        *piVar6 = *piVar6 + iVar11;
        piVar6 = (int *)(iVar10 + 8 + iVar2);
        *piVar6 = *piVar6 + iVar12;
        iVar8 = iVar8 + 1;
        iVar10 = iVar10 + 0xc;
      } while (iVar8 < this_ptr->vertex_count);
    }
    local_54 = local_54 + (int)local_18;
    local_50 = local_50 + iVar11;
    local_4c = local_4c + iVar12;
    local_60 = local_60 + (int)local_18;
    local_58 = local_58 + iVar12;
    local_5c = local_5c + iVar11;
    local_6c.x = (float)0.00390625;
    *(float *)this_ptr->unk1 = (float)local_54 * local_6c.x;
    *(float *)(this_ptr->unk1 + 4) = (float)local_50 * local_6c.x;
    *(float *)(this_ptr->unk1 + 8) = (float)local_4c * local_6c.x;
    *(float *)(this_ptr->unk1 + 0xc) = (float)local_60 * local_6c.x;
    local_6c.y = (float)iVar11 * local_6c.x;
    *(float *)(this_ptr->unk1 + 0x10) = (float)local_5c * local_6c.x;
    local_6c.z = (float)iVar12 * local_6c.x;
    *(float *)(this_ptr->unk1 + 0x14) = (float)local_58 * local_6c.x;
    local_6c.x = (float)(int)local_18 * local_6c.x;
    local_1c = local_6c.z;
    pCVar4 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (&this_ptr->base,&local_48,&local_6c);
    pCVar1 = &(this_ptr->base).location;
    (pCVar1->position).x = (pCVar1->position).x - pCVar4->x;
    (this_ptr->base).location.position.y = (this_ptr->base).location.position.y - pCVar4->y;
    (this_ptr->base).location.position.z = (this_ptr->base).location.position.z - pCVar4->z;
    iVar8 = 0;
    if (0 < *(int *)(this_ptr->unk5 + 0xfc)) {
      pcVar5 = this_ptr->unk5 + 0x100;
      do {
        *(float *)pcVar5 = *(float *)pcVar5 + local_6c.x;
        *(float *)(pcVar5 + 4) = *(float *)(pcVar5 + 4) + local_6c.y;
        iVar8 = iVar8 + 1;
        *(float *)(pcVar5 + 8) = *(float *)(pcVar5 + 8) + local_6c.z;
        pcVar5 = pcVar5 + 0x194;
      } while (iVar8 < *(int *)(this_ptr->unk5 + 0xfc));
    }
    iVar8 = 0;
    if (0 < *(int *)(this_ptr->unk5 + 0x5bc)) {
      local_28 = this_ptr->unk5 + 0x5c0;
      pcVar5 = this_ptr->unk5 + 0x5ec;
      do {
        pCVar4 = (CVector3f *)(local_28 + iVar8 * 0x2b0);
        pCVar4->x = pCVar4->x + local_6c.x;
        pCVar4->y = pCVar4->y + local_6c.y;
        pCVar4->z = pCVar4->z + local_6c.z;
        iVar8 = iVar8 + 1;
        pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (&this_ptr->base,&local_3c,pCVar4);
        *(float *)pcVar5 = pCVar4->x;
        *(float *)(pcVar5 + 4) = pCVar4->y;
        *(float *)(pcVar5 + 8) = pCVar4->z;
        pcVar5 = pcVar5 + 0x2b0;
      } while (iVar8 < *(int *)(this_ptr->unk5 + 0x5bc));
    }
    memset((void *)this_ptr->unk3,0,this_ptr->vertex_count * 0xc);
    local_20 = 0;
    if (0 < this_ptr->tri_count) {
      local_24 = 0;
      do {
        output = (SSurfaceNormal *)(*(int *)this_ptr->unk4 + local_24);
        output->vertex_count = 3;
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0((CVector3i *)this_ptr->unk2,output);
        iVar8 = 0;
        pSVar9 = output;
        if (0 < output->vertex_count) {
          do {
            piVar6 = (int *)(this_ptr->unk3 + pSVar9->vertex_index_1 * 0xc);
            *piVar6 = *piVar6 + output->normal_x;
            piVar6[1] = piVar6[1] + output->normal_y;
            piVar6[2] = piVar6[2] + output->normal_z;
            iVar8 = iVar8 + 1;
            pSVar9 = (SSurfaceNormal *)&pSVar9->normal_y;
          } while (iVar8 < output->vertex_count);
        }
        local_24 = local_24 + 0x3c;
        local_20 = local_20 + 1;
      } while (local_20 < this_ptr->tri_count);
    }
    iVar8 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar11 = 0;
      do {
        piVar6 = (int *)(this_ptr->unk3 + iVar11);
        dVar15 = (double)*piVar6;
        iVar12 = piVar6[1];
        dVar3 = (double)iVar12;
        dVar16 = (double)piVar6[2];
        dVar15 = SQRT(dVar16 * dVar16 + dVar3 * dVar3 + dVar15 * dVar15);
        if (dVar15 <= 0.0) {
          piVar6[2] = 0;
          piVar6[1] = piVar6[2];
          *piVar6 = piVar6[2];
        }
        else {
          fVar13 = (float10)65535 / (float10)dVar15;
          fVar14 = (float10)piVar6[2] * fVar13;
          dVar15 = round((double)((float10)*piVar6 * fVar13));
          dVar16 = round((double)((float10)iVar12 * fVar13));
          fVar13 = (float10)dVar16;
          dVar16 = round((double)fVar14);
          *piVar6 = (int)ROUND(dVar15);
          piVar6[1] = (int)ROUND(fVar13);
          piVar6[2] = (int)ROUND(dVar16);
        }
        iVar8 = iVar8 + 1;
        iVar11 = iVar11 + 0xc;
      } while (iVar8 < this_ptr->vertex_count);
    }
    core_bodypart_cpp_CBodyPart_FUN_0041b070(this_ptr);
    if (this_ptr->unk8 + 0x3c != this_ptr->unk5 + 0xf0) {
      *(uint *)(this_ptr->unk8 + 0x3c) = *(uint *)(this_ptr->unk5 + 0xf0);
      *(uint *)(this_ptr->unk8 + 0x40) = *(uint *)(this_ptr->unk5 + 0xf4);
      *(uint *)(this_ptr->unk8 + 0x44) = *(uint *)(this_ptr->unk5 + 0xf8);
    }
    pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       ((CMatrix3x3f *)(this_ptr->unk8 + 0x14),&local_78,
                        (CVector3f *)(this_ptr->unk5 + 0xf0));
    if ((CVector3f *)(this_ptr->unk8 + 0x48) != pCVar4) {
      ((CVector3f *)(this_ptr->unk8 + 0x48))->x = pCVar4->x;
      *(float *)(this_ptr->unk8 + 0x4c) = pCVar4->y;
      *(float *)(this_ptr->unk8 + 0x50) = pCVar4->z;
    }
    local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.1415927,3.1415927);
    *(float *)(this_ptr->unk8 + 0x6c) = local_18;
    local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-3.1415927,3.1415927);
    *(float *)(this_ptr->unk8 + 0x74) = local_18;
    fVar7 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-9.424778,9.424778);
    *(float *)(this_ptr->unk8 + 0x70) = fVar7;
    return;
  }
  (this_ptr->base).was_created = 2;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(this_ptr);
  pCVar4 = (CVector3f *)(this_ptr->unk1 + 0xc);
  if (pCVar4 != &g_ZeroVector) {
    pCVar4->x = g_ZeroVector.x;
    *(float *)(this_ptr->unk1 + 0x10) = g_ZeroVector.y;
    *(float *)(this_ptr->unk1 + 0x14) = g_ZeroVector.z;
  }
  if ((CVector3f *)this_ptr->unk1 != pCVar4) {
    *(float *)this_ptr->unk1 = pCVar4->x;
    *(uint *)(this_ptr->unk1 + 4) = *(uint *)(this_ptr->unk1 + 0x10);
    *(uint *)(this_ptr->unk1 + 8) = *(uint *)(this_ptr->unk1 + 0x14);
  }
  return;
}
