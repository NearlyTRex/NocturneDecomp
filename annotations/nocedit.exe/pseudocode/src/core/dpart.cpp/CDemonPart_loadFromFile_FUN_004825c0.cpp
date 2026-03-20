// Name: core_dpart.cpp_CDemonPart_loadFromFile_FUN_004825c0
// Address: 004825c0
// Address Range: [[004825c0, 004828aa]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_CDemonPart_loadFromFile_FUN_004825c0(CDemonPart *this_ptr,_FILE *file_handle,CVector3f *offset_position)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dpart_cpp_CDemonPart_loadFromFile_FUN_004825c0(CDemonPart *this_ptr,_FILE *file_handle,CVector3f *offset_position)

{
  int *piVar2;
  int iVar4;
  int iVar5;
  int iVar8;
  int iVar9;
  int iVar6;
  int iVar10;
  char *buffer;
  float fVar7;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int *piVar1;
  int iVar2;
  
  _fread(this_ptr,0x20,1,file_handle);
  _fread(&this_ptr->vertex_count,4,1,file_handle);
  _fread(&this_ptr->face_count,4,1,file_handle);
  core_dpart_cpp_CDemonPart_alloc_FUN_00482180(this_ptr);
  _fread(&this_ptr->bbox1,0xc,1,file_handle);
  _fread(&this_ptr->bbox2,0xc,1,file_handle);
  _fread(&this_ptr->bbox3,0xc,1,file_handle);
  _fread(&this_ptr->bbox4,0xc,1,file_handle);
  iVar10 = 0;
  _fread(&this_ptr->mystery_array_size,4,1,file_handle);
  if (0 < this_ptr->mystery_array_size) {
    buffer = this_ptr->mystery_array + 8;
    do {
      iVar10 = iVar10 + 1;
      _fread(buffer,0x10,1,file_handle);
      buffer = buffer + 0x18;
    } while (iVar10 < this_ptr->mystery_array_size);
  }
  _fread(&this_ptr->vertex_group_size,4,1,file_handle);
  _fread(this_ptr->vertex_positions,0xc,this_ptr->vertex_count,file_handle);
  _fread(this_ptr->vertex_normals,0xc,this_ptr->vertex_count,file_handle);
  iVar5 = _strcmp(this_ptr->format,"newformat");
  if (iVar5 == 0) {
    _fread(this_ptr->face_data,0x20,this_ptr->face_count,file_handle);
  }
  else {
    iVar5 = 0;
    _fread(g_FaceConversionBuffer,0x48,this_ptr->face_count,file_handle);
    if (0 < this_ptr->face_count) {
      iVar9 = 0;
      iVar8 = 0;
      do {
        *(uint *)((int)&(this_ptr->face_data->plane).A + iVar8) =
             *(uint *)((int)g_FaceConversionBuffer[0].vertices + iVar9 + -0x10);
        *(uint *)((int)&(this_ptr->face_data->plane).B + iVar8) =
             *(uint *)((int)(g_FaceConversionBuffer[0].vertices + -1) + iVar9);
        *(uint *)((int)&(this_ptr->face_data->plane).C + iVar8) =
             *(uint *)((int)g_FaceConversionBuffer[0].vertices + iVar9 + -8);
        *(uint *)((int)&(this_ptr->face_data->plane).D + iVar8) =
             *(uint *)((int)g_FaceConversionBuffer[0].vertices + iVar9 + -4);
        *(uint *)((int)&this_ptr->face_data->vertex_index_1 + iVar8) =
             *(uint *)((int)&g_FaceConversionBuffer[0].vertices[0].vertex_index + iVar9);
        *(uint *)((int)&this_ptr->face_data->vertex_index_2 + iVar8) =
             *(uint *)((int)&g_FaceConversionBuffer[0].vertices[1].vertex_index + iVar9);
        *(uint *)((int)&this_ptr->face_data->vertex_index_3 + iVar8) =
             *(uint *)((int)&g_FaceConversionBuffer[0].vertices[2].vertex_index + iVar9);
        if (*(int *)((int)g_FaceConversionBuffer[0].vertices + iVar9 + -0x14) == 3) {
          *(uint *)((int)&this_ptr->face_data->vertex_index_4 + iVar8) = 0xffffffff;
        }
        else {
          *(uint *)((int)&this_ptr->face_data->vertex_index_4 + iVar8) =
               *(uint *)((int)&g_FaceConversionBuffer[0].vertices[3].vertex_index + iVar9);
        }
        iVar8 = iVar8 + 0x20;
        iVar5 = iVar5 + 1;
        iVar9 = iVar9 + 0x48;
      } while (iVar5 < this_ptr->face_count);
    }
  }
  if (offset_position != (CVector3f *)0x0) {
    dVar4 = (double)offset_position->x * 256;
    dVar5 = (double)offset_position->y * 256;
    dVar6 = (double)offset_position->z * 256;
    iVar5 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar6 = 0;
      do {
        piVar1 = (int *)((int)&this_ptr->vertex_positions->x + iVar6);
        *piVar1 = *piVar1 - (int)ROUND(ROUND(dVar4));
        piVar2 = (int *)((int)&this_ptr->vertex_positions->y + iVar6);
        *piVar2 = *piVar2 - (int)ROUND(ROUND(dVar5));
        piVar2 = (int *)((int)&this_ptr->vertex_positions->z + iVar6);
        *piVar2 = *piVar2 - (int)ROUND(ROUND(dVar6));
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0xc;
      } while (iVar5 < this_ptr->vertex_count);
    }
  }
  core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_004824f0(this_ptr);
  fVar7 = (float)0.00390625;
  iVar5 = (this_ptr->bbox3).y;
  iVar6 = (this_ptr->bbox3).z;
  iVar4 = (this_ptr->bbox4).x;
  iVar2 = (this_ptr->bbox4).y;
  iVar3 = (this_ptr->bbox4).z;
  (this_ptr->bbox1_float).x = (float)(this_ptr->bbox3).x * fVar7;
  (this_ptr->bbox1_float).y = (float)iVar5 * fVar7;
  (this_ptr->bbox1_float).z = (float)iVar6 * fVar7;
  (this_ptr->bbox2_float).x = (float)iVar4 * fVar7;
  (this_ptr->bbox2_float).y = (float)iVar2 * fVar7;
  (this_ptr->bbox2_float).z = (float)iVar3 * fVar7;
  return;
}
