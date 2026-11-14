// Name: core_dpart.cpp_CDemonPart_loadFromFile_FUN_00479c70
// Address: 00479c70
// Address Range: [[00479c70, 00479f5a]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_CDemonPart_loadFromFile_FUN_00479c70(CDemonPart *this_ptr,_FILE *file_handle,CVector3f *offset_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dpart_cpp_CDemonPart_loadFromFile_FUN_00479c70(CDemonPart *this_ptr,_FILE *file_handle,CVector3f *offset_position)

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
  float *in_stack_00000010;
  
  _fread(this_ptr,0x20,1,file_handle);
  _fread(&this_ptr->vertex_count,4,1,file_handle);
  _fread(&this_ptr->face_count,4,1,file_handle);
  core_dpart_cpp_CDemonPart_alloc_FUN_004799e0(this_ptr);
  _fread(&this_ptr->bbox1,0xc,1,file_handle);
  _fread(&this_ptr->bbox2,0xc,1,file_handle);
  _fread(&this_ptr->bbox3,0xc,1,file_handle);
  _fread(&this_ptr->bbox4,0xc,1,file_handle);
  iVar7 = 0;
  _fread(&this_ptr->mystery_array_size,4,1,file_handle);
  if (0 < this_ptr->mystery_array_size) {
    buffer = this_ptr->mystery_array + 8;
    do {
      iVar7 = iVar7 + 1;
      _fread(buffer,0x10,1,file_handle);
      buffer = buffer + 0x18;
    } while (iVar7 < this_ptr->mystery_array_size);
  }
  _fread(&this_ptr->vertex_group_size,4,1,file_handle);
  _fread(this_ptr->vertex_positions,0xc,this_ptr->vertex_count,file_handle);
  _fread(this_ptr->vertex_normals,0xc,this_ptr->vertex_count,file_handle);
  iVar7 = _strcmp(this_ptr->format,"newformat");
  if (iVar7 == 0) {
    _fread(this_ptr->face_data,0x20,this_ptr->face_count,file_handle);
  }
  else {
    iVar7 = 0;
    _fread((void *)0x1b68944,0x48,this_ptr->face_count,file_handle);
    if (0 < this_ptr->face_count) {
      iVar6 = 0;
      iVar5 = 0;
      do {
        *(uint *)((int)&(this_ptr->face_data->plane).A + iVar5) =
             *(uint *)(iVar6 + 0x1b6894c);
        *(uint *)((int)&(this_ptr->face_data->plane).B + iVar5) =
             *(uint *)(iVar6 + 0x1b68950);
        *(uint *)((int)&(this_ptr->face_data->plane).C + iVar5) =
             *(uint *)(iVar6 + 0x1b68954);
        *(uint *)((int)&(this_ptr->face_data->plane).D + iVar5) =
             *(uint *)(iVar6 + 0x1b68958);
        *(uint *)((int)&this_ptr->face_data->vertex_index_1 + iVar5) =
             *(uint *)(iVar6 + 0x1b6895c);
        *(uint *)((int)&this_ptr->face_data->vertex_index_2 + iVar5) =
             *(uint *)(iVar6 + 0x1b68968);
        *(uint *)((int)&this_ptr->face_data->vertex_index_3 + iVar5) =
             *(uint *)(iVar6 + 0x1b68974);
        if (*(int *)(iVar6 + 0x1b68948) == 3) {
          *(uint *)((int)&this_ptr->face_data->vertex_index_4 + iVar5) = 0xffffffff;
        }
        else {
          *(uint *)((int)&this_ptr->face_data->vertex_index_4 + iVar5) =
               *(uint *)(iVar6 + 0x1b68980);
        }
        iVar5 = iVar5 + 0x20;
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x48;
      } while (iVar7 < this_ptr->face_count);
    }
  }
  if (in_stack_00000010 != (float *)0x0) {
    fVar8 = (float10)_DAT_005dabfd;
    fVar9 = (float10)*in_stack_00000010 * fVar8;
    fVar10 = (float10)in_stack_00000010[1] * fVar8;
    fVar8 = (float10)in_stack_00000010[2] * fVar8;
    iVar7 = this_ptr->vertex_count;
    iVar5 = 0;
    round();
    round();
    round();
    if (0 < iVar7) {
      iVar7 = 0;
      do {
        piVar1 = (int *)((int)&this_ptr->vertex_positions->x + iVar7);
        *piVar1 = *piVar1 - (int)ROUND(fVar9);
        piVar1 = (int *)((int)&this_ptr->vertex_positions->y + iVar7);
        *piVar1 = *piVar1 - (int)ROUND(fVar10);
        piVar1 = (int *)((int)&this_ptr->vertex_positions->z + iVar7);
        *piVar1 = *piVar1 - (int)ROUND(fVar8);
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 0xc;
      } while (iVar5 < this_ptr->vertex_count);
    }
  }
  core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_00479ba0(this_ptr);
  fVar4 = (float)_DAT_005dac05;
  iVar7 = (this_ptr->bbox3).y;
  iVar5 = (this_ptr->bbox3).z;
  iVar6 = (this_ptr->bbox4).x;
  iVar2 = (this_ptr->bbox4).y;
  iVar3 = (this_ptr->bbox4).z;
  (this_ptr->bbox1_float).x = (float)(this_ptr->bbox3).x * fVar4;
  (this_ptr->bbox1_float).y = (float)iVar7 * fVar4;
  (this_ptr->bbox1_float).z = (float)iVar5 * fVar4;
  (this_ptr->bbox2_float).x = (float)iVar6 * fVar4;
  (this_ptr->bbox2_float).y = (float)iVar2 * fVar4;
  (this_ptr->bbox2_float).z = (float)iVar3 * fVar4;
  return;
}
