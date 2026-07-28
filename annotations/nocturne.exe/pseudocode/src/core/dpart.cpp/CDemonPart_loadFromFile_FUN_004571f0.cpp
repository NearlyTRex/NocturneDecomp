// Name: core_dpart.cpp_CDemonPart_loadFromFile_FUN_004571f0
// Address: 004571f0
// Address Range: [[004571f0, 004574da]]
// Convention: unknown
// Signature: void core_dpart_cpp_CDemonPart_loadFromFile_FUN_004571f0(CDemonPart *param_1,_FILE *param_2,undefined4 param_3,float *param_4)

#include "nocturne.h"

void core_dpart_cpp_CDemonPart_loadFromFile_FUN_004571f0(CDemonPart *param_1,_FILE *param_2,uint param_3,float *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *buffer;
  double dVar8;
  double dVar9;
  double dVar10;
  
  _fread(param_1,0x20,1,param_2);
  _fread(&param_1->vertex_count,4,1,param_2);
  _fread(&param_1->face_count,4,1,param_2);
  core_dpart_cpp_CDemonPart_alloc_FUN_00456f60(param_1);
  _fread(&param_1->bbox1,0xc,1,param_2);
  _fread(&param_1->bbox2,0xc,1,param_2);
  _fread(&param_1->bbox3,0xc,1,param_2);
  _fread(&param_1->bbox4,0xc,1,param_2);
  iVar7 = 0;
  _fread(&param_1->mystery_array_size,4,1,param_2);
  if (0 < param_1->mystery_array_size) {
    buffer = param_1->mystery_array + 8;
    do {
      iVar7 = iVar7 + 1;
      _fread(buffer,0x10,1,param_2);
      buffer = buffer + 0x18;
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
    _fread((void *)0x1af4ef0,0x48,param_1->face_count,param_2);
    if (0 < param_1->face_count) {
      iVar6 = 0;
      iVar5 = 0;
      do {
        *(uint *)((int)&(param_1->face_data->plane).A + iVar5) =
             *(uint *)(iVar6 + 0x1af4ef8);
        *(uint *)((int)&(param_1->face_data->plane).B + iVar5) =
             *(uint *)(iVar6 + 0x1af4efc);
        *(uint *)((int)&(param_1->face_data->plane).C + iVar5) =
             *(uint *)(iVar6 + 0x1af4f00);
        *(uint *)((int)&(param_1->face_data->plane).D + iVar5) =
             *(uint *)(iVar6 + 0x1af4f04);
        *(uint *)((int)&param_1->face_data->vertex_index_1 + iVar5) =
             *(uint *)(iVar6 + 0x1af4f08);
        *(uint *)((int)&param_1->face_data->vertex_index_2 + iVar5) =
             *(uint *)(iVar6 + 0x1af4f14);
        *(uint *)((int)&param_1->face_data->vertex_index_3 + iVar5) =
             *(uint *)(iVar6 + 0x1af4f20);
        if (*(int *)(iVar6 + 0x1af4ef4) == 3) {
          *(uint *)((int)&param_1->face_data->vertex_index_4 + iVar5) = 0xffffffff;
        }
        else {
          *(uint *)((int)&param_1->face_data->vertex_index_4 + iVar5) =
               *(uint *)(iVar6 + 0x1af4f2c);
        }
        iVar5 = iVar5 + 0x20;
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x48;
      } while (iVar7 < param_1->face_count);
    }
  }
  if (param_4 != (float *)0x0) {
    dVar9 = (double)param_4[1] * 256;
    dVar10 = (double)param_4[2] * 256;
    iVar7 = param_1->vertex_count;
    iVar5 = 0;
    dVar8 = round((double)*param_4 * 256);
    dVar9 = round(dVar9);
    dVar10 = round(dVar10);
    if (0 < iVar7) {
      iVar7 = 0;
      do {
        piVar1 = (int *)((int)&param_1->vertex_positions->x + iVar7);
        *piVar1 = *piVar1 - (int)ROUND(dVar8);
        piVar1 = (int *)((int)&param_1->vertex_positions->y + iVar7);
        *piVar1 = *piVar1 - (int)ROUND(dVar9);
        piVar1 = (int *)((int)&param_1->vertex_positions->z + iVar7);
        *piVar1 = *piVar1 - (int)ROUND(dVar10);
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 0xc;
      } while (iVar5 < param_1->vertex_count);
    }
  }
  core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_00457120(param_1);
  fVar4 = (float)0.00390625;
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
