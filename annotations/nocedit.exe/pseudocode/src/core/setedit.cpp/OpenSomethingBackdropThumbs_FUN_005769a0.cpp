// Name: core_setedit.cpp_OpenSomethingBackdropThumbs_FUN_005769a0
// Address: 005769a0
// Address Range: [[005769a0, 00576d90]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_OpenSomethingBackdropThumbs_FUN_005769a0(void)

#include "nocturne.h"

void __cdecl core_setedit_cpp_OpenSomethingBackdropThumbs_FUN_005769a0(void)

{
  SIZE_T SVar1;
  int iVar2;
  uint uVar3;
  _FILE *file;
  int iVar4;
  int iVar5;
  SIZE_T count;
  int iVar6;
  int in_stack_0000000c;
  char *directory;
  char *mode;
  char local_5c [16];
  char local_4c [16];
  _FILE *local_3c;
  SIZE_T local_38;
  uint local_34;
  int local_30;
  SIZE_T local_2c;
  int local_28;
  int local_24;
  int local_20;
  SIZE_T local_1c;
  void *local_18;
  int local_14;
  
  if (0xf9 < in_stack_0000000c) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0xd3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many thumbs!");
  }
  sprintf(local_5c,"%s%s.raw");
  sprintf(local_4c,"%s%s.act");
  local_3c = engine_dosio_c_getFile_FUN_00481a50("backdrop",local_5c,"rb");
  if (local_3c == (_FILE *)0x0) {
    local_3c = engine_dosio_c_getFile_FUN_00481a50("art",local_5c,"rb");
    if (local_3c == (_FILE *)0x0) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&CPickList_03653fc0.base,local_5c);
      goto LAB_00576a3d;
    }
    uVar3 = engine_dosio_c_getFileSize_FUN_00481880("art",local_5c);
    mode = "rb";
    directory = "art";
  }
  else {
    uVar3 = engine_dosio_c_getFileSize_FUN_00481880("backdrop",local_5c);
    mode = "rb";
    directory = "backdrop";
  }
  file = engine_dosio_c_getFile_FUN_00481a50(directory,local_4c,mode);
  if (file == (_FILE *)0x0) {
    g_CurrentLineNumber = 0xfd;
    g_CurrentFilename = "..\\core\\setedit.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s",local_4c);
  }
  _fread(&DAT_03653cc0,0x300,1,file);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\setedit.cpp",0xff);
  if (uVar3 < 0x40000) {
    if (0xffff < uVar3) {
      if (uVar3 < 0x10001) {
        count = 0x100;
        local_2c = 0x100;
LAB_00576b4f:
        local_18 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                             (local_2c * count,"..\\core\\setedit.cpp",0x121);
        if (local_18 == (void *)0x0) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0x122;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
        }
        SVar1 = local_2c;
        _fread(local_18,local_2c,count,local_3c);
        local_20 = 0;
        local_30 = in_stack_0000000c * 0x3000;
        local_28 = local_30 + 0x100;
        local_1c = SVar1;
        local_24 = 0;
        local_34 = 0;
        do {
          iVar4 = 0;
          local_14 = local_28;
          iVar5 = local_30 + local_20 * 0x100;
          do {
            iVar6 = iVar5 + 4;
            *(uint *)(&DAT_03365cc0 + iVar5) =
                 (uint)*(uint3 *)(&DAT_03653cc0 +
                                 (uint)*(byte *)(((int)((iVar4 + (iVar4 >> 0x1f) * -0x40) -
                                                       (uint)((iVar4 >> 0x1f) << 5 < 0)) >> 6) +
                                                 local_2c * (local_24 / 0x30) + (int)local_18) * 3);
            iVar4 = iVar4 + SVar1;
            iVar5 = iVar6;
          } while (iVar6 != local_28);
          local_20 = local_20 + 1;
          local_24 = local_24 + count;
          local_28 = local_28 + 0x100;
        } while (local_20 < 0x30);
        local_38 = count;
        shape_memdbg_cpp_debugFree_FUN_0050f460(local_18,"..\\core\\setedit.cpp",0x133);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_3c,"..\\core\\setedit.cpp",0x134);
        return;
      }
      if (uVar3 == 0x3f010) {
        count = 0x1fc;
        local_2c = 0x1fc;
        goto LAB_00576b4f;
      }
    }
  }
  else {
    if (uVar3 < 0x40001) {
      count = 0x200;
      local_2c = 0x200;
      goto LAB_00576b4f;
    }
    if (0x4afff < uVar3) {
      if (uVar3 < 0x4b001) {
        count = 0x1e0;
        local_2c = 0x280;
        goto LAB_00576b4f;
      }
      if (uVar3 == 0x100000) {
        count = 0x400;
        local_2c = 0x400;
        goto LAB_00576b4f;
      }
    }
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_3c,"..\\core\\setedit.cpp",0x11a);
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Can't figure out image dimensions for %s",local_5c);
LAB_00576a3d:
  iVar5 = 0;
  iVar4 = in_stack_0000000c * 0x3000;
  do {
    iVar4 = iVar4 + 0x100;
    iVar6 = iVar5 * 0x100 + in_stack_0000000c * 0x3000;
    do {
      iVar2 = iVar6 + 4;
      *(uint *)(&DAT_03365cc0 + iVar6) = 0xff00ff;
      iVar6 = iVar2;
    } while (iVar2 != iVar4);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x30);
  return;
}
