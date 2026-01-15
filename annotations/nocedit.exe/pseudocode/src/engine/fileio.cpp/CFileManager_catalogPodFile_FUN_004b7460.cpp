// Name: engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460
// Address: 004b7460
// Address Range: [[004b7460, 004b76c3]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460(CFileManager * this_ptr, char * pod_filename)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_catalogPodFile_FUN_004b7460
          (CFileManager *this_ptr,char *pod_filename)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  tm *time_ptr;
  uint uVar4;
  uint unaff_EBX;
  int iVar5;
  char *pcVar6;
  byte bVar7;
  uint in_stack_fffff300;
  uint in_stack_fffff304;
  uint in_stack_fffff308;
  uint in_stack_fffff30c;
  int local_8f0;
  CPodDirectoryEntry *local_8ec;
  CPickList local_8d4;
  char local_52c [512];
  char local_32c;
  byte local_32b [255];
  char local_22c [256];
  char local_12c [256];
  char local_2c [32];
  
  bVar7 = 0;
  if (pod_filename == (char *)0x0) {
    bVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to catalog",true,local_52c);
    if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) {
      return;
    }
  }
  else {
    pcVar6 = local_52c;
    do {
      cVar1 = *pod_filename;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pod_filename[1];
      pod_filename = pod_filename + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xfffff300);
  iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650((CPodFile *)&stack0xfffff300,local_52c)
  ;
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to catalog files!",local_52c);
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffff300);
    return;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_8d4);
  shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10(&local_8d4,1);
  iVar3 = 0;
  if (0 < local_8f0) {
    iVar5 = 0;
    do {
      time_ptr = crt_time_c_localtime_FUN_00600288((time_t *)((int)&local_8ec->timestamp + iVar5));
      crt_time_c_strftime_FUN_006002d4(local_2c,0x1e,"%m/%d/%y %I:%M:%S %p",time_ptr);
      engine_dosio_c_splitPath_FUN_00481f20
                (*(char **)((int)&local_8ec->name_or_offset + iVar5),(char *)0x0,local_22c,local_12c
                 ,&local_32c);
      if (local_32c == '.') {
        uVar4 = 0xffffffff;
        pcVar6 = &local_32c;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
        } while (cVar1 != '\0');
        crt_string_c_memmove_FUN_005fe5e0(&local_32c,local_32b,~uVar4 - 1);
      }
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_52c,"%s\t%s\t%s\t%d\t%s",local_22c,local_12c,&local_32c,
                 *(uint *)((int)&local_8ec->size + iVar5),local_2c);
      crt_string_c_strupr_FUN_00600770(local_52c);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_8d4.base_strlist,local_52c);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x14;
    } while (iVar3 < local_8f0);
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(local_52c,"Contents of pod file:\n%s",&stack0xfffff304);
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(&local_8d4,local_52c,-1,0)
  ;
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&local_8d4,0,unaff_EBX,in_stack_fffff300,in_stack_fffff304,in_stack_fffff308,
             in_stack_fffff30c);
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffff300);
  return;
}
