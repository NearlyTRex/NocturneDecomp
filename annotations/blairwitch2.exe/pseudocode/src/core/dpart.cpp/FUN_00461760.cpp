// Name: core_dpart.cpp_FUN_00461760
// Address: 00461760
// Address Range: [[00461760, 004619af] [00461a1f, 00461a4a]]
// Convention: unknown
// Signature: void core_dpart_cpp_FUN_00461760(CDemonPart *param_1,_FILE *param_2,undefined4 param_3,float *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dpart_cpp_FUN_00461760(CDemonPart *param_1,_FILE *param_2,uint param_3,float *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *buffer;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  _fread(param_1,0x20,1,param_2);
  _fread(&param_1->vertex_count,4,1,param_2);
  _fread(&param_1->face_count,4,1,param_2);
  core_dpart_cpp_CDemonPart_alloc_FUN_004614d0(param_1);
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
    _fread((void *)0x1b4d388,0x48,param_1->face_count,param_2);
    if (0 < param_1->face_count) {
      iVar6 = 0;
      iVar5 = 0;
      do {
        *(uint *)((int)&(param_1->face_data->plane).A + iVar5) =
             *(uint *)(iVar6 + 0x1b4d390);
        *(uint *)((int)&(param_1->face_data->plane).B + iVar5) =
             *(uint *)(iVar6 + 0x1b4d394);
        *(uint *)((int)&(param_1->face_data->plane).C + iVar5) =
             *(uint *)(iVar6 + 0x1b4d398);
        *(uint *)((int)&(param_1->face_data->plane).D + iVar5) =
             *(uint *)(iVar6 + 0x1b4d39c);
        *(uint *)((int)&param_1->face_data->vertex_index_1 + iVar5) =
             *(uint *)(iVar6 + 0x1b4d3a0);
        *(uint *)((int)&param_1->face_data->vertex_index_2 + iVar5) =
             *(uint *)(iVar6 + 0x1b4d3ac);
        *(uint *)((int)&param_1->face_data->vertex_index_3 + iVar5) =
             *(uint *)(iVar6 + 0x1b4d3b8);
        if (*(int *)(iVar6 + 0x1b4d38c) == 3) {
          *(uint *)((int)&param_1->face_data->vertex_index_4 + iVar5) = 0xffffffff;
        }
        else {
          *(uint *)((int)&param_1->face_data->vertex_index_4 + iVar5) =
               *(uint *)(iVar6 + 0x1b4d3c4);
        }
        iVar5 = iVar5 + 0x20;
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x48;
      } while (iVar7 < param_1->face_count);
    }
  }
  if (param_4 != (float *)0x0) {
    fVar8 = (float10)_DAT_005d0e04;
    fVar9 = (float10)*param_4 * fVar8;
    fVar10 = (float10)param_4[1] * fVar8;
    fVar8 = (float10)param_4[2] * fVar8;
    iVar7 = param_1->vertex_count;
    iVar5 = 0;
    round();
    round();
    round();
    if (0 < iVar7) {
      iVar7 = 0;
      do {
        piVar1 = (int *)((int)&param_1->vertex_positions->x + iVar7);
        *piVar1 = *piVar1 - (int)ROUND(fVar9);
        piVar1 = (int *)((int)&param_1->vertex_positions->y + iVar7);
        *piVar1 = *piVar1 - (int)ROUND(fVar10);
        piVar1 = (int *)((int)&param_1->vertex_positions->z + iVar7);
        *piVar1 = *piVar1 - (int)ROUND(fVar8);
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 0xc;
      } while (iVar5 < param_1->vertex_count);
    }
  }
  core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_00461690(param_1);
  fVar4 = (float)_DAT_005d0e0c;
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
