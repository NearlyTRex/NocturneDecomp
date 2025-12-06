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
  SIZE_T SVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar6;
  int iVar7;
  char *buffer;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  float *in_stack_00000044;
  
  crt_stdio_c_fread_FUN_005fd990(this_ptr,0x20,1,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->vertex_count,4,1,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->face_count,4,1,file_handle);
  core_dpart_cpp_CDemonPart_alloc_FUN_00482180(this_ptr);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->bbox1,0xc,1,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->bbox2,0xc,1,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->bbox3,0xc,1,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->bbox4,0xc,1,file_handle);
  iVar6 = 0;
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->mystery_array_size,4,1,file_handle);
  if (0 < this_ptr->mystery_array_size) {
    buffer = this_ptr->mystery_array;
    do {
      iVar6 = iVar6 + 1;
      crt_stdio_c_fread_FUN_005fd990(buffer,0x10,1,file_handle);
      buffer = buffer + 0x18;
    } while (iVar6 < this_ptr->mystery_array_size);
  }
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->vertex_group_size,4,1,file_handle);
  crt_stdio_c_fread_FUN_005fd990(this_ptr->vertex_positions,0xc,this_ptr->vertex_count,file_handle);
  crt_stdio_c_fread_FUN_005fd990(this_ptr->vertex_normals,0xc,this_ptr->vertex_count,file_handle);
  iVar6 = crt_string_c_strcmp_FUN_005fef20(this_ptr->format,"newformat");
  if (iVar6 == 0) {
    SVar5 = crt_stdio_c_fread_FUN_005fd990
                      (this_ptr->face_data,0x20,this_ptr->face_count,file_handle);
    iVar6 = extraout_EDX_00;
  }
  else {
    iVar8 = 0;
    SVar5 = crt_stdio_c_fread_FUN_005fd990
                      (g_PolyDataConversionBuffer,0x48,this_ptr->face_count,file_handle);
    iVar6 = extraout_EDX;
    if (0 < this_ptr->face_count) {
      iVar6 = 0;
      SVar5 = 0;
      do {
        *(uint *)((int)&(this_ptr->face_data->plane).A + SVar5) =
             *(uint *)(g_PolyDataConversionBuffer + iVar6 + 8);
        *(uint *)((int)&(this_ptr->face_data->plane).B + SVar5) =
             *(uint *)(g_PolyDataConversionBuffer + iVar6 + 0xc);
        *(uint *)((int)&(this_ptr->face_data->plane).C + SVar5) =
             *(uint *)(g_PolyDataConversionBuffer + iVar6 + 0x10);
        *(uint *)((int)&(this_ptr->face_data->plane).D + SVar5) =
             *(uint *)(g_PolyDataConversionBuffer + iVar6 + 0x14);
        *(uint *)((int)&this_ptr->face_data->vertex_index_1 + SVar5) =
             *(uint *)(g_PolyDataConversionBuffer + iVar6 + 0x18);
        *(uint *)((int)&this_ptr->face_data->vertex_index_2 + SVar5) =
             *(uint *)(g_PolyDataConversionBuffer + iVar6 + 0x24);
        *(uint *)((int)&this_ptr->face_data->vertex_index_3 + SVar5) =
             *(uint *)(g_PolyDataConversionBuffer + iVar6 + 0x30);
        if (*(int *)(g_PolyDataConversionBuffer + iVar6 + 4) == 3) {
          *(uint *)((int)&this_ptr->face_data->material + SVar5) = 0xffffffff;
        }
        else {
          *(uint *)((int)&this_ptr->face_data->material + SVar5) =
               *(uint *)(g_PolyDataConversionBuffer + iVar6 + 0x3c);
        }
        SVar5 = SVar5 + 0x20;
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + 0x48;
      } while (iVar8 < this_ptr->face_count);
    }
  }
  if (in_stack_00000044 != (float *)0x0) {
    fVar9 = (float10)256;
    fVar10 = (float10)*in_stack_00000044 * fVar9;
    fVar11 = (float10)in_stack_00000044[1] * fVar9;
    fVar9 = (float10)in_stack_00000044[2] * fVar9;
    iVar8 = this_ptr->vertex_count;
    iVar7 = 0;
    dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar6,SVar5));
    dVar12 = crt_math_c_round_FUN_005fe6b0(dVar12);
    crt_math_c_round_FUN_005fe6b0(dVar12);
    if (0 < iVar8) {
      iVar6 = 0;
      do {
        piVar1 = (int *)((int)&this_ptr->vertex_positions->x + iVar6);
        *piVar1 = *piVar1 - (int)ROUND(fVar10);
        piVar1 = (int *)((int)&this_ptr->vertex_positions->y + iVar6);
        *piVar1 = *piVar1 - (int)ROUND(fVar11);
        piVar1 = (int *)((int)&this_ptr->vertex_positions->z + iVar6);
        *piVar1 = *piVar1 - (int)ROUND(fVar9);
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0xc;
      } while (iVar7 < this_ptr->vertex_count);
    }
  }
  core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_004824f0(this_ptr);
  fVar4 = (float)0.00390625;
  iVar6 = (this_ptr->bbox3).y;
  iVar8 = (this_ptr->bbox3).z;
  iVar7 = (this_ptr->bbox4).x;
  iVar2 = (this_ptr->bbox4).y;
  iVar3 = (this_ptr->bbox4).z;
  (this_ptr->bbox1_float).x = (float)(this_ptr->bbox3).x * fVar4;
  (this_ptr->bbox1_float).y = (float)iVar6 * fVar4;
  (this_ptr->bbox1_float).z = (float)iVar8 * fVar4;
  (this_ptr->bbox2_float).x = (float)iVar7 * fVar4;
  (this_ptr->bbox2_float).y = (float)iVar2 * fVar4;
  (this_ptr->bbox2_float).z = (float)iVar3 * fVar4;
  return;
}
