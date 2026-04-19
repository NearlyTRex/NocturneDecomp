// Name: shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360
// Address: 004a3360
// MANUAL RECONSTRUCTION
// Address Range: [[004a3360, 004a35a7]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_004a3360(CStrList *this_ptr,char *search_key,char *file_path,int file_size,time_t file_timestamp)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_004a3360(CStrList *this_ptr,char *search_key,char *file_path,int file_size,time_t file_timestamp)

{
  int index;
  char *pcVar2;
  _tm *time_ptr;
  int iVar1;
  int iVar5;
  char local_b04 [512];
  char local_904 [512];
  char local_704 [260];
  char local_600 [260];
  char local_4fc [256];
  char local_3fc [256];
  char local_2fc [256];
  char local_1fc [256];
  char local_fc [200];
  char local_34 [32];
  int local_14;
  char *format;

  iVar5 = this_ptr->item_count + -1;
  local_14 = 0;
  if (-1 < iVar5) {
    do {
      index = (local_14 + iVar5) / 2;
      memcpy(local_904,g_Field1ParseBuffer,512);
      format = "%[^\t]\t%[^\t]";
      memcpy(local_b04,g_Field2ParseBuffer,512);
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr,index);
      sscanf(pcVar2,format,local_904,local_b04);
      engine_dosio_c_makePath_FUN_00481f50(local_600,(char *)0x0,(char *)0x0,local_904,local_b04);
      iVar1 = _stricmp(search_key,local_600);
      if (iVar1 == 0) {
        return;
      }
      if (iVar1 < 0) {
        iVar5 = index + -1;
      }
      else {
        local_14 = index + 1;
      }
    } while (local_14 <= iVar5);
  }
  time_ptr = _localtime(&file_timestamp);
  _strftime(local_34,0x1e,"%m/%d/%y %I:%M:%S %p",time_ptr);
  memcpy(local_704,g_FilePathBuffer,260);
  if (file_path != (char *)0x0) {
    engine_dosio_c_splitPath_FUN_00481f20(file_path,(char *)0x0,(char *)0x0,local_1fc,local_4fc);
    engine_dosio_c_makePath_FUN_00481f50(local_704,(char *)0x0,(char *)0x0,local_1fc,local_4fc);
  }
  engine_dosio_c_splitPath_FUN_00481f20(search_key,(char *)0x0,(char *)0x0,local_2fc,local_3fc);
  if (local_3fc[0] == '.') {
    memmove(local_3fc,local_3fc + 1,strlen(local_3fc));
  }
  _sprintf
            (local_fc,"%s\t%s\t%d\t%s\t%s",local_2fc,local_3fc,file_size,local_34,local_704);
  strupr(local_fc);
  (*this_ptr->vtable->insert)(this_ptr,local_14,local_fc);
  return;
}
