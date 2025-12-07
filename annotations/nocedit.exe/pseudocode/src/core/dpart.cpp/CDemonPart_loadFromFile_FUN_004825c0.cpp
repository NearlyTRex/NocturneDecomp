// Name: core_dpart.cpp_CDemonPart_loadFromFile_FUN_004825c0
// Address: 004825c0
// Address Range: [[004825c0, 004828aa]]
// Convention: __cdecl
// Signature: void core_dpart.cpp_CDemonPart_loadFromFile_FUN_004825c0(CDemonPart * this_ptr, FILE * file_handle, CVector3f * offset_position)

#include "nocturne.h"

void __cdecl
core_dpart_cpp_CDemonPart_loadFromFile_FUN_004825c0
          (CDemonPart *this_ptr,FILE *file_handle,CVector3f *offset_position)

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
  double dVar10;
  double dVar11;
  float *in_stack_00000044;
  
  crt_stdio_c_fread_FUN_005fd990(this_ptr,0x20,1,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->vertex_count,4,1,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->face_count,4,1,file_handle);
  core_dpart_cpp_CDemonPart_alloc_FUN_00482180(this_ptr);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->bbox1,0xc,1,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->bbox2,0xc,1,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->bbox3,0xc,1,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->bbox4,0xc,1,file_handle);
  iVar7 = 0;
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->mystery_array_size,4,1,file_handle);
  if (0 < this_ptr->mystery_array_size) {
    buffer = this_ptr->mystery_array;
    do {
      iVar7 = iVar7 + 1;
      crt_stdio_c_fread_FUN_005fd990(buffer,0x10,1,file_handle);
      buffer = buffer + 0x18;
    } while (iVar7 < this_ptr->mystery_array_size);
  }
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->vertex_group_size,4,1,file_handle);
  crt_stdio_c_fread_FUN_005fd990(this_ptr->vertex_positions,0xc,this_ptr->vertex_count,file_handle);
  crt_stdio_c_fread_FUN_005fd990(this_ptr->vertex_normals,0xc,this_ptr->vertex_count,file_handle);
  iVar7 = crt_string_c_strcmp_FUN_005fef20(this_ptr->format,"newformat");
  if (iVar7 == 0) {
    crt_stdio_c_fread_FUN_005fd990(this_ptr->face_data,0x20,this_ptr->face_count,file_handle);
  }
  else {
    iVar7 = 0;
    crt_stdio_c_fread_FUN_005fd990(g_PolyDataConversionBuffer,0x48,this_ptr->face_count,file_handle)
    ;
    if (0 < this_ptr->face_count) {
      iVar6 = 0;
      iVar5 = 0;
      do {
        *(uint *)((int)&(this_ptr->face_data->plane).A + iVar5) =
             *(uint *)(g_PolyDataConversionBuffer + iVar6 + 8);
        *(uint *)((int)&(this_ptr->face_data->plane).B + iVar5) =
             *(uint *)(g_PolyDataConversionBuffer + iVar6 + 0xc);
        *(uint *)((int)&(this_ptr->face_data->plane).C + iVar5) =
             *(uint *)(g_PolyDataConversionBuffer + iVar6 + 0x10);
        *(uint *)((int)&(this_ptr->face_data->plane).D + iVar5) =
             *(uint *)(g_PolyDataConversionBuffer + iVar6 + 0x14);
        *(uint *)((int)&this_ptr->face_data->vertex_index_1 + iVar5) =
             *(uint *)(g_PolyDataConversionBuffer + iVar6 + 0x18);
        *(uint *)((int)&this_ptr->face_data->vertex_index_2 + iVar5) =
             *(uint *)(g_PolyDataConversionBuffer + iVar6 + 0x24);
        *(uint *)((int)&this_ptr->face_data->vertex_index_3 + iVar5) =
             *(uint *)(g_PolyDataConversionBuffer + iVar6 + 0x30);
        if (*(int *)(g_PolyDataConversionBuffer + iVar6 + 4) == 3) {
          *(uint *)((int)&this_ptr->face_data->material + iVar5) = 0xffffffff;
        }
        else {
          *(uint *)((int)&this_ptr->face_data->material + iVar5) =
               *(uint *)(g_PolyDataConversionBuffer + iVar6 + 0x3c);
        }
        iVar5 = iVar5 + 0x20;
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x48;
      } while (iVar7 < this_ptr->face_count);
    }
  }
  if (in_stack_00000044 != (float *)0x0) {
    fVar8 = (float10)256;
    fVar4 = in_stack_00000044[1];
    fVar9 = (float10)in_stack_00000044[2] * fVar8;
    iVar7 = this_ptr->vertex_count;
    iVar5 = 0;
    dVar10 = crt_math_c_round_FUN_005fe6b0((double)((float10)*in_stack_00000044 * fVar8));
    dVar11 = crt_math_c_round_FUN_005fe6b0((double)((float10)fVar4 * fVar8));
    fVar8 = (float10)dVar11;
    dVar11 = crt_math_c_round_FUN_005fe6b0((double)fVar9);
    if (0 < iVar7) {
      iVar7 = 0;
      do {
        piVar1 = (int *)((int)&this_ptr->vertex_positions->x + iVar7);
        *piVar1 = *piVar1 - (int)ROUND(dVar10);
        piVar1 = (int *)((int)&this_ptr->vertex_positions->y + iVar7);
        *piVar1 = *piVar1 - (int)ROUND(fVar8);
        piVar1 = (int *)((int)&this_ptr->vertex_positions->z + iVar7);
        *piVar1 = *piVar1 - (int)ROUND(dVar11);
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 0xc;
      } while (iVar5 < this_ptr->vertex_count);
    }
  }
  core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_004824f0(this_ptr);
  fVar4 = (float)0.00390625;
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
