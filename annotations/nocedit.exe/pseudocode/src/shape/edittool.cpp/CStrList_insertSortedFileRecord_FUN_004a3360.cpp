// Name: shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360
// Address: 004a3360
// Address Range: [[004a3360, 004a35a7]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360(CStrList * this_ptr, char * search_key, char * file_path, int file_size)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_004a3360
          (CStrList *this_ptr,char *search_key,char *file_path,int file_size)

{
  char cVar1;
  int index;
  char *pcVar2;
  tm *time_ptr;
  int iVar3;
  uint uVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  char *in_stack_00000014;
  char *in_stack_00000018;
  CStrList *in_stack_00000024;
  char *in_stack_fffff4e4;
  CStrList *pCVar8;
  char *pcVar9;
  char acStack_90c [8];
  uint local_904 [129];
  uint auStack_700 [2];
  char acStack_6f8 [240];
  char acStack_608 [4];
  char acStack_604 [272];
  char acStack_4f4 [4];
  char acStack_4f0 [260];
  char acStack_3ec [4];
  char cStack_3e8;
  byte auStack_3e7 [251];
  char acStack_2ec [248];
  char acStack_1f4 [4];
  char acStack_1f0 [268];
  char acStack_e4 [4];
  char acStack_e0 [4];
  char acStack_dc [172];
  char acStack_30 [28];
  int local_14;
  
  bVar7 = 0;
  iVar5 = this_ptr->item_count + -1;
  local_14 = 0;
  if (-1 < iVar5) {
    do {
      index = (local_14 + iVar5) / 2;
      pcVar2 = g_Field1ParseBuffer;
      puVar6 = local_904;
      for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *(uint *)pcVar2;
        pcVar2 = pcVar2 + ((uint)bVar7 * -2 + 1) * 4;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      pcVar9 = "%[^\t]\t%[^\t]";
      pcVar2 = g_Field2ParseBuffer;
      puVar6 = (uint *)&stack0xfffff4fc;
      for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *(uint *)pcVar2;
        pcVar2 = pcVar2 + ((uint)bVar7 * -2 + 1) * 4;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      pCVar8 = this_ptr;
      iVar3 = index;
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr,index);
      crt_stdio_c_sscanf_FUN_0060013c(pcVar2,in_stack_fffff4e4,pCVar8,iVar3,pcVar9);
      in_stack_fffff4e4 = (char *)0x0;
      engine_dosio_c_makePath_FUN_00481f50
                (acStack_608,(char *)0x0,(char *)0x0,acStack_90c,&stack0xfffff4f4);
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0((char *)this_ptr,acStack_604);
      if (iVar3 == 0) {
        return;
      }
      if (iVar3 < 0) {
        iVar5 = index + -1;
      }
      else {
        local_14 = index + 1;
      }
    } while (local_14 <= iVar5);
  }
  time_ptr = crt_time_c_localtime_FUN_00600288((time_t *)&stack0x00000014);
  crt_time_c_strftime_FUN_006002d4(acStack_30,0x1e,"%m/%d/%y %I:%M:%S %p",time_ptr);
  pcVar2 = g_FilePathBuffer;
  puVar6 = auStack_700;
  for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *(uint *)pcVar2;
    pcVar2 = pcVar2 + ((uint)bVar7 * -2 + 1) * 4;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  if (in_stack_00000014 != (char *)0x0) {
    engine_dosio_c_splitPath_FUN_00481f20
              (in_stack_00000014,(char *)0x0,(char *)0x0,acStack_1f4,acStack_4f4);
    engine_dosio_c_makePath_FUN_00481f50
              (acStack_6f8,(char *)0x0,(char *)0x0,acStack_1f0,acStack_4f0);
  }
  engine_dosio_c_splitPath_FUN_00481f20
            (in_stack_00000018,(char *)0x0,(char *)0x0,acStack_2ec,acStack_3ec);
  if (cStack_3e8 == '.') {
    uVar4 = 0xffffffff;
    pcVar2 = &cStack_3e8;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + (uint)bVar7 * -2 + 1;
    } while (cVar1 != '\0');
    crt_string_c_memmove_FUN_005fe5e0(&cStack_3e8,auStack_3e7,~uVar4 - 1);
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_e4,"%s\t%s\t%d\t%s\t%s");
  crt_string_c_strupr_FUN_00600770(acStack_e0);
  (*in_stack_00000024->vtable->insert)(in_stack_00000024,(int)file_path,acStack_dc);
  return;
}
