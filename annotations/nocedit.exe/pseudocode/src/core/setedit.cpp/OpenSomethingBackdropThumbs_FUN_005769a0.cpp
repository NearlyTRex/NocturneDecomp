// Name: core_setedit.cpp_OpenSomethingBackdropThumbs_FUN_005769a0
// Address: 005769a0
// Address Range: [[005769a0, 00576d90]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_OpenSomethingBackdropThumbs_FUN_005769a0(void)

#include "nocturne.h"

void __cdecl core_setedit_cpp_OpenSomethingBackdropThumbs_FUN_005769a0(void)

{
  FILE *pFVar1;
  int iVar2;
  uint uVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  FILE *unaff_EBP;
  SIZE_T unaff_retaddr;
  int in_stack_00000004;
  int iStack00000008;
  int in_stack_0000000c;
  void *pvStack00000010;
  void *in_stack_00000014;
  void *in_stack_00000018;
  int iStack0000001c;
  char *directory;
  char *mode;
  FILE *local_18;
  int iVar3;
  
  if (0xf9 < in_stack_0000000c) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0xd3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many thumbs!");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffa8,"%s%s.raw");
  crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffbc,"%s%s.act");
  pFVar1 = engine_dosio_c_getFile_FUN_00481a50("backdrop",&stack0xffffffb0,"rb");
  if (pFVar1 == (FILE *)0x0) {
    pFVar1 = engine_dosio_c_getFile_FUN_00481a50("art",&stack0xffffffb4,"rb");
    if (pFVar1 == (FILE *)0x0) {
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&CPickList_03653fc0.base_strlist,&stack0xffffffb8);
      goto LAB_00576a3d;
    }
    uVar4 = engine_dosio_c_getFileSize_FUN_00481880("art",&stack0xffffffb8);
    mode = "rb";
    directory = "art";
  }
  else {
    uVar4 = engine_dosio_c_getFileSize_FUN_00481880("backdrop",&stack0xffffffb4);
    mode = "rb";
    directory = "backdrop";
  }
  pFVar1 = engine_dosio_c_getFile_FUN_00481a50(directory,&stack0xffffffc8,mode);
  if (pFVar1 == (FILE *)0x0) {
    g_CurrentLineNumber = 0xfd;
    g_CurrentFilename = "..\\core\\setedit.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s");
  }
  crt_stdio_c_fread_FUN_005fd990(&DAT_03653cc0,0x300,1,pFVar1);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar1,"..\\core\\setedit.cpp",0xff);
  if (uVar4 < 0x40000) {
    if (0xffff < uVar4) {
      if (uVar4 < 0x10001) {
        pFVar1 = (FILE *)0x100;
        iVar5 = 0x100;
LAB_00576b4f:
        pvStack00000010 =
             shape_memdbg_cpp_debugMalloc_FUN_0050f250
                       (iVar5 * (int)pFVar1,"..\\core\\setedit.cpp",0x121);
        if (pvStack00000010 == (void *)0x0) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0x122;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
        }
        crt_stdio_c_fread_FUN_005fd990(in_stack_00000014,unaff_retaddr,(SIZE_T)pFVar1,unaff_EBP);
        pvStack00000010 = (void *)0x0;
        iVar5 = in_stack_0000000c * 0x3000;
        iStack00000008 = iVar5 + 0x100;
        in_stack_0000000c = 0;
        do {
          iVar6 = 0;
          iStack0000001c = iStack00000008;
          iVar3 = iVar5 + (int)pvStack00000010 * 0x100;
          do {
            iVar2 = iVar3 + 4;
            *(uint *)(&DAT_03365cc0 + iVar3) =
                 (uint)*(uint3 *)(&DAT_03653cc0 +
                                 (uint)*(byte *)(((int)((iVar6 + (iVar6 >> 0x1f) * -0x40) -
                                                       (uint)((iVar6 >> 0x1f) << 5 < 0)) >> 6) +
                                                 in_stack_00000004 * (in_stack_0000000c / 0x30) +
                                                (int)in_stack_00000018) * 3);
            iVar6 = iVar6 + unaff_retaddr;
            iVar3 = iVar2;
          } while (iVar2 != iStack00000008);
          pvStack00000010 = (void *)((int)pvStack00000010 + 1);
          in_stack_0000000c = (int)&pFVar1->_ptr + in_stack_0000000c;
          iStack00000008 = iStack00000008 + 0x100;
        } while ((int)pvStack00000010 < 0x30);
        shape_memdbg_cpp_debugFree_FUN_0050f460(in_stack_00000018,"..\\core\\setedit.cpp",0x133)
        ;
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar1,"..\\core\\setedit.cpp",0x134);
        return;
      }
      if (uVar4 == 0x3f010) {
        pFVar1 = (FILE *)0x1fc;
        iVar5 = 0x1fc;
        goto LAB_00576b4f;
      }
    }
  }
  else {
    if (uVar4 < 0x40001) {
      pFVar1 = (FILE *)0x200;
      iVar5 = 0x200;
      goto LAB_00576b4f;
    }
    if (0x4afff < uVar4) {
      if (uVar4 < 0x4b001) {
        pFVar1 = (FILE *)0x1e0;
        iVar5 = 0x280;
        goto LAB_00576b4f;
      }
      if (uVar4 == 0x100000) {
        pFVar1 = (FILE *)0x400;
        iVar5 = 0x400;
        goto LAB_00576b4f;
      }
    }
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_18,"..\\core\\setedit.cpp",0x11a);
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"Can't figure out image dimensions for %s");
LAB_00576a3d:
  iVar6 = 0;
  iVar5 = in_stack_0000000c * 0x3000;
  do {
    iVar5 = iVar5 + 0x100;
    iVar3 = iVar6 * 0x100 + in_stack_0000000c * 0x3000;
    do {
      iVar2 = iVar3 + 4;
      *(uint *)(&DAT_03365cc0 + iVar3) = 0xff00ff;
      iVar3 = iVar2;
    } while (iVar2 != iVar5);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x30);
  return;
}
