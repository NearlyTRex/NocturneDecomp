// Name: shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
// Address: 0049f420
// Address Range: [[0049f420, 0049fb65]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420(CEditorTools *this_ptr,char *title_text,char *search_pattern,char *initial_path,uint flags)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420(CEditorTools *this_ptr,char *title_text,char *search_pattern,char *initial_path,uint flags)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  _tm *time_ptr;
  int iVar4;
  uint uVar5;
  byte bVar6;
  char *pcVar7;
  CPickList local_1ec8;
  char local_1b20 [560];
  CFileFinder local_18f0;
  char local_17dc [260];
  char local_16d8 [260];
  char local_15d4 [260];
  char local_14d0 [260];
  char local_13cc [260];
  char local_12c8 [260];
  char local_11c4 [256];
  char local_10c4 [256];
  char local_fc4 [256];
  char local_ec4 [256];
  char local_dc4 [256];
  char local_cc4 [256];
  char local_bc4 [256];
  char local_ac4 [256];
  char local_9c4 [256];
  char local_8c4 [256];
  char local_7c4 [256];
  char local_6c4;
  byte local_6c3 [255];
  char local_5c4 [256];
  char local_4c4;
  byte local_4c3 [255];
  char local_3c4 [256];
  char local_2c4 [256];
  char local_1c4 [200];
  char local_fc [200];
  char local_34 [32];
  int local_14;
  char local_10 [4];
  char local_c [4];
  
  bVar6 = 0;
  pcVar2 = _getcwd(local_14d0,0x104);
  if (pcVar2 == (char *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (this_ptr,"Error getting current directory.");
    return 0;
  }
  pcVar2 = g_BrowserLastSelectedFile;
  pcVar7 = local_12c8;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pcVar7 = *(uint *)pcVar2;
    pcVar2 = pcVar2 + ((uint)bVar6 * -2 + 1) * 4;
    pcVar7 = pcVar7 + ((uint)bVar6 * -2 + 1) * 4;
  }
  if ((flags & 1) != 0) {
    engine_dosio_c_splitPath_FUN_00481f20(initial_path,local_c,local_bc4,local_ec4,local_3c4);
    engine_dosio_c_makePath_FUN_00481f50(local_13cc,local_c,local_bc4,(char *)0x0,(char *)0x0);
    chdir(local_13cc);
    engine_dosio_c_makePath_FUN_00481f50(local_12c8,(char *)0x0,(char *)0x0,local_ec4,local_3c4);
    chdir(local_12c8);
  }
  local_14 = 0;
LAB_0049f47a:
  do {
    pcVar2 = "[ERROR: Can't get current directory.]";
    pcVar7 = local_17dc;
    for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(uint *)pcVar7 = *(uint *)pcVar2;
      pcVar2 = pcVar2 + ((uint)bVar6 * -2 + 1) * 4;
      pcVar7 = pcVar7 + ((uint)bVar6 * -2 + 1) * 4;
    }
    _getcwd(local_17dc,0x104);
    _sprintf(local_1b20,"%s\n%s",title_text,local_17dc);
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1ec8);
    engine_dosio_c_CFileFinder_ctor_FUN_00481c30(&local_18f0);
    if (search_pattern == (char *)0x0) {
      search_pattern = "*.*";
    }
    engine_dosio_c_CFileFinder_openSearch_FUN_00481c70(&local_18f0,search_pattern);
    while (local_18f0.filename[0] != '\0') {
      if (((byte)local_18f0.file_size & 4) == 0) {
        engine_dosio_c_splitPath_FUN_00481f20
                  (local_18f0.filename,(char *)0x0,(char *)0x0,local_dc4,&local_4c4);
        if (local_4c4 == '.') {
          uVar5 = 0xffffffff;
          pcVar2 = &local_4c4;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + (uint)bVar6 * -2 + 1;
          } while (cVar1 != '\0');
          memmove(&local_4c4,local_4c3,~uVar5 - 1);
        }
        time_ptr = _localtime((time_t *)&local_18f0.attributes);
        _strftime(local_34,0x1e,"\t%m/%d/%y %I:%M:%S %p",time_ptr);
        _sprintf
                  (local_fc,"%s\t%s\t%d%s",local_dc4,&local_4c4,local_18f0.timestamp,local_34);
        strupr(local_fc);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1ec8.base,local_fc);
      }
      engine_dosio_c_CFileFinder_findNext_FUN_00481cf0(&local_18f0);
    }
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0(&local_1ec8.base);
    iVar4 = local_1ec8.base.item_count;
    pcVar2 = (char *)0xffffffff;
    if (local_12c8[0] != '\0') {
      pcVar2 = (char *)0x0;
      if (0 < local_1ec8.base.item_count) {
        do {
          shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                    (&local_1ec8.base,(int)local_9c4,pcVar2,0);
          shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                    (&local_1ec8.base,(int)local_5c4,pcVar2,1);
          engine_dosio_c_makePath_FUN_00481f50
                    (local_15d4,(char *)0x0,(char *)0x0,local_9c4,local_5c4);
          iVar3 = _stricmp(local_15d4,local_12c8);
          if (iVar3 == 0) break;
          pcVar2 = pcVar2 + 1;
        } while ((int)pcVar2 < local_1ec8.base.item_count);
      }
      if (local_1ec8.base.item_count <= (int)pcVar2) {
        pcVar2 = (char *)0xffffffff;
      }
      local_12c8[0] = '\0';
    }
    engine_dosio_c_CFileFinder_openSearch_FUN_00481c70(&local_18f0,"*.*");
    while (local_18f0.filename[0] != '\0') {
      if (((byte)local_18f0.file_size & 4) != 0) {
        iVar3 = _strcmp(local_18f0.filename,"..");
        if (iVar3 == 0) {
          pcVar7 = "..\t\t(DIR)";
        }
        else {
          iVar3 = _strcmp(local_18f0.filename,".");
          if (iVar3 == 0) goto LAB_0049f64e;
          engine_dosio_c_splitPath_FUN_00481f20
                    (local_18f0.filename,(char *)0x0,(char *)0x0,local_ac4,&local_6c4);
          if (local_6c4 == '.') {
            uVar5 = 0xffffffff;
            pcVar7 = &local_6c4;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + (uint)bVar6 * -2 + 1;
            } while (cVar1 != '\0');
            memmove(&local_6c4,local_6c3,~uVar5 - 1);
          }
          _sprintf(local_1c4,"%s\t%s\t(DIR)",local_ac4,&local_6c4);
          strupr(local_1c4);
          pcVar7 = local_1c4;
        }
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1ec8.base,pcVar7);
      }
LAB_0049f64e:
      engine_dosio_c_CFileFinder_findNext_FUN_00481cf0(&local_18f0);
    }
    shape_edittool_cpp_CPickList_sort_FUN_004a57f0
              (&local_1ec8,iVar4,local_1ec8.base.item_count + -1);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1ec8.base,"(Change Path)");
    pcVar2 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               (&local_1ec8,local_1b20,(int)pcVar2,0);
    if ((int)pcVar2 < 0) goto LAB_0049f983;
    if (local_1ec8.base.item_count + -1 <= (int)pcVar2) {
      pcVar2 = g_BrowserLastEnteredPath;
      pcVar7 = local_16d8;
      for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar7 = *(uint *)pcVar2;
        pcVar2 = pcVar2 + ((uint)bVar6 * -2 + 1) * 4;
        pcVar7 = pcVar7 + ((uint)bVar6 * -2 + 1) * 4;
      }
      while ((iVar4 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                                (this_ptr,"Enter new path",local_16d8,0x104,1), iVar4 != 0
             && (iVar4 = chdir(local_16d8), iVar4 != 0))) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (this_ptr,"Can't change to %s",local_16d8);
        chdir(local_17dc);
      }
      engine_dosio_c_CFileFinder_dtor_FUN_00481c50(&local_18f0,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_1ec8,0);
      goto LAB_0049f47a;
    }
    if ((int)pcVar2 < iVar4) {
      engine_dosio_c_splitPath_FUN_00481f20(local_17dc,local_10,local_7c4,local_cc4,local_2c4);
      engine_dosio_c_makePath_FUN_00481f50(local_8c4,(char *)0x0,local_7c4,local_cc4,local_2c4);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_1ec8.base,(int)local_cc4,pcVar2,0);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_1ec8.base,(int)local_2c4,pcVar2,1);
      engine_dosio_c_makePath_FUN_00481f50(initial_path,local_10,local_8c4,local_cc4,local_2c4);
      local_14 = 1;
LAB_0049f983:
      engine_dosio_c_CFileFinder_dtor_FUN_00481c50(&local_18f0,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_1ec8,0);
      chdir(local_14d0);
      return local_14;
    }
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_1ec8.base,(int)local_10c4,pcVar2,0);
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_1ec8.base,(int)local_11c4,pcVar2,1);
    engine_dosio_c_makePath_FUN_00481f50(local_fc4,(char *)0x0,(char *)0x0,local_10c4,local_11c4);
    chdir(local_fc4);
    engine_dosio_c_CFileFinder_dtor_FUN_00481c50(&local_18f0,0);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_1ec8,0);
  } while( true );
}
