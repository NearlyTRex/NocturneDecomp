// Name: core_dpart.cpp_FUN_00479c70
// Address: 00479c70
// Address Range: [[00479c70, 00479ebf] [00479f2f, 00479f5a]]
// Convention: unknown
// Signature: void core_dpart_cpp_FUN_00479c70(CDemonPart *param_1,undefined4 param_2,undefined4 param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dpart_cpp_FUN_00479c70(CDemonPart *param_1,uint param_2,uint param_3,float *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  _fread(param_1,0x20,1,param_2);
  _fread(&param_1->vertex_count,4,1,param_2);
  _fread(&param_1->face_count,4,1,param_2);
  core_dpart_cpp_CDemonPart_alloc_FUN_004799e0(param_1);
  _fread(&param_1->bbox1,0xc,1,param_2);
  _fread(&param_1->bbox2,0xc,1,param_2);
  _fread(&param_1->bbox3,0xc,1,param_2);
  _fread(&param_1->bbox4,0xc,1,param_2);
  iVar7 = 0;
  _fread(&param_1->mystery_array_size,4,1,param_2);
  if (0 < param_1->mystery_array_size) {
    pcVar8 = param_1->mystery_array + 8;
    do {
      iVar7 = iVar7 + 1;
      _fread(pcVar8,0x10,1,param_2);
      pcVar8 = pcVar8 + 0x18;
    } while (iVar7 < param_1->mystery_array_size);
  }
  _fread(&param_1->vertex_group_size,4,1,param_2);
  _fread(param_1->vertex_positions,0xc,param_1->vertex_count,param_2);
  _fread(param_1->vertex_normals,0xc,param_1->vertex_count,param_2);
  iVar7 = _strcmp(param_1->format,"newformat");
  if (iVar7 == 0) {
    _fread(param_1->face_data,0x20,param_1->face_count,param_2);
  }
  else {
    iVar7 = 0;
    _fread(0x1b68944,0x48,param_1->face_count,param_2);
    if (0 < param_1->face_count) {
      iVar6 = 0;
      iVar5 = 0;
      do {
        *(uint *)(param_1->face_data + iVar5) = *(uint *)(iVar6 + 0x1b6894c);
        *(uint *)(param_1->face_data + iVar5 + 4) = *(uint *)(iVar6 + 0x1b68950);
        *(uint *)(param_1->face_data + iVar5 + 8) = *(uint *)(iVar6 + 0x1b68954);
        *(uint *)(param_1->face_data + iVar5 + 0xc) = *(uint *)(iVar6 + 0x1b68958);
        *(uint *)(param_1->face_data + iVar5 + 0x10) = *(uint *)(iVar6 + 0x1b6895c);
        *(uint *)(param_1->face_data + iVar5 + 0x14) = *(uint *)(iVar6 + 0x1b68968);
        *(uint *)(param_1->face_data + iVar5 + 0x18) = *(uint *)(iVar6 + 0x1b68974);
        if (*(int *)(iVar6 + 0x1b68948) == 3) {
          *(uint *)(param_1->face_data + iVar5 + 0x1c) = 0xffffffff;
        }
        else {
          *(uint *)(param_1->face_data + iVar5 + 0x1c) = *(uint *)(iVar6 + 0x1b68980);
        }
        iVar5 = iVar5 + 0x20;
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x48;
      } while (iVar7 < param_1->face_count);
    }
  }
  if (param_4 != (float *)0x0) {
    fVar9 = (float10)_DAT_005dabfd;
    fVar10 = (float10)*param_4 * fVar9;
    fVar11 = (float10)param_4[1] * fVar9;
    fVar9 = (float10)param_4[2] * fVar9;
    iVar7 = param_1->vertex_count;
    iVar5 = 0;
    round();
    round();
    round();
    if (0 < iVar7) {
      iVar7 = 0;
      do {
        piVar1 = (int *)((int)&param_1->vertex_positions->x + iVar7);
        *piVar1 = *piVar1 - (int)ROUND(fVar10);
        piVar1 = (int *)((int)&param_1->vertex_positions->y + iVar7);
        *piVar1 = *piVar1 - (int)ROUND(fVar11);
        piVar1 = (int *)((int)&param_1->vertex_positions->z + iVar7);
        *piVar1 = *piVar1 - (int)ROUND(fVar9);
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 0xc;
      } while (iVar5 < param_1->vertex_count);
    }
  }
  core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_00479ba0(param_1);
  fVar4 = (float)_DAT_005dac05;
  iVar7 = (param_1->bbox3).y;
  iVar5 = (param_1->bbox3).z;
  iVar6 = (param_1->bbox4).x;
  iVar2 = (param_1->bbox4).y;
  iVar3 = (param_1->bbox4).z;
  (param_1->bbox1_float).x = (float)(param_1->bbox3).x * fVar4;
  (param_1->bbox1_float).y = (float)iVar7 * fVar4;
  (param_1->bbox1_float).z = (float)iVar5 * fVar4;
  (param_1->bbox2_float).x = (float)iVar6 * fVar4;
  (param_1->bbox2_float).y = (float)iVar2 * fVar4;
  (param_1->bbox2_float).z = (float)iVar3 * fVar4;
  return;
}
