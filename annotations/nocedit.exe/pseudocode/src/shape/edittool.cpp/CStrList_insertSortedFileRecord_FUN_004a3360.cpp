// Name: shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360
// Address: 004a3360
// Address Range: [[004a3360, 004a35a7]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_004a3360(CStrList *this_ptr,char *search_key,char *file_path,int file_size,time_t file_timestamp)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_004a3360(CStrList *this_ptr,char *search_key,char *file_path,int file_size,time_t file_timestamp)

{
  int index;
  char *pcVar2;
  _tm *time_ptr;
  int iVar3;
  int iVar1;
  uint uVar4;
  int iVar5;
  char *pcVar3;
  char *pcVar6;
  char *pcVar7;
  char *pcVar4;
  byte bVar8;
  char local_b04 [512];
  char local_904 [512];
  char local_704 [260];
  char local_600 [260];
  char local_4fc [256];
  char local_3fc;
  byte local_3fb [255];
  char local_2fc [256];
  char local_1fc [256];
  char local_fc [200];
  char local_34 [32];
  int local_14;
  char *format;
  char cVar1;
  
  bVar8 = 0;
  iVar5 = this_ptr->item_count + -1;
  local_14 = 0;
  if (-1 < iVar5) {
    do {
      index = (local_14 + iVar5) / 2;
      pcVar3 = g_Field1ParseBuffer;
      pcVar4 = local_904;
      for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(uint *)pcVar4 = *(uint *)pcVar3;
        pcVar3 = pcVar3 + ((uint)bVar8 * -2 + 1) * 4;
        pcVar4 = pcVar4 + (uint)bVar8 * -8 + 4;
      }
      pcVar3 = local_904;
      format = "%[^\t]\t%[^\t]";
      pcVar6 = g_Field2ParseBuffer;
      pcVar4 = local_b04;
      for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
        pcVar6 = pcVar6 + (uint)bVar8 * -8 + 4;
        *(uint *)pcVar4 = *(uint *)pcVar6;
        pcVar6 = pcVar6;
        pcVar4 = (char *)((int)pcVar4 + ((uint)bVar8 * -2 + 1) * 4);
      }
      pcVar4 = local_b04;
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr,index);
      sscanf(pcVar2,format,pcVar3,pcVar4);
      engine_dosio_cpp_makePath_FUN_00481f50(local_600,(char *)0x0,(char *)0x0,local_904,local_b04);
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
  pcVar7 = g_FilePathBuffer;
  pcVar3 = local_704;
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar7 = pcVar7 + (uint)bVar8 * -8 + 4;
    *(uint *)pcVar3 = *(uint *)pcVar7;
    pcVar7 = pcVar7;
    pcVar3 = pcVar3 + (uint)bVar8 * -8 + 4;
  }
  if (file_path != (char *)0x0) {
    engine_dosio_cpp_splitPath_FUN_00481f20(file_path,(char *)0x0,(char *)0x0,local_1fc,local_4fc);
    engine_dosio_cpp_makePath_FUN_00481f50(local_704,(char *)0x0,(char *)0x0,local_1fc,local_4fc);
  }
  engine_dosio_cpp_splitPath_FUN_00481f20(search_key,(char *)0x0,(char *)0x0,local_2fc,&local_3fc);
  if (local_3fc == '.') {
    uVar4 = 0xffffffff;
    pcVar3 = &local_3fc;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    memmove(&local_3fc,local_3fb,~uVar4 - 1);
  }
  _sprintf(local_fc,"%s\t%s\t%d\t%s\t%s",local_2fc,&local_3fc,file_size,local_34,local_704);
  strupr(local_fc);
  (*this_ptr->vtable->insert)(this_ptr,local_14,local_fc);
  return;
}
