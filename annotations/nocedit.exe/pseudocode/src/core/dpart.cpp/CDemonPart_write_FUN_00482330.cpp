// Name: core_dpart.cpp_CDemonPart_write_FUN_00482330
// Address: 00482330
// Address Range: [[00482330, 0048248a]]
// Convention: __cdecl
// Signature: void core_dpart.cpp_CDemonPart_write_FUN_00482330(CDemonPart * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_write_FUN_00482330(CDemonPart *this_ptr,FILE *file_handle)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  CDemonPart *pCVar4;
  
  pcVar2 = "newformat";
  pCVar4 = this_ptr;
  do {
    cVar1 = *pcVar2;
    pCVar4->format[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pCVar4->format[1] = cVar1;
    pCVar4 = (CDemonPart *)(pCVar4->format + 2);
  } while (cVar1 != '\0');
  crt_stdio_c_fwrite_FUN_005fdc00(this_ptr,0x20,1,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->vertex_count,4,1,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->face_count,4,1,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->bbox1,0xc,1,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->bbox2,0xc,1,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->bbox3,0xc,1,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->bbox4,0xc,1,file_handle);
  iVar3 = 0;
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->mystery_array_size,4,1,file_handle);
  if (0 < this_ptr->mystery_array_size) {
    pcVar2 = this_ptr->mystery_array;
    do {
      iVar3 = iVar3 + 1;
      crt_stdio_c_fwrite_FUN_005fdc00(pcVar2,0x10,1,file_handle);
      pcVar2 = pcVar2 + 0x18;
    } while (iVar3 < this_ptr->mystery_array_size);
  }
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->vertex_group_size,4,1,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(this_ptr->vertex_positions,0xc,this_ptr->vertex_count,file_handle)
  ;
  crt_stdio_c_fwrite_FUN_005fdc00(this_ptr->vertex_normals,0xc,this_ptr->vertex_count,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(this_ptr->face_data,0x20,this_ptr->face_count,file_handle);
  return;
}
