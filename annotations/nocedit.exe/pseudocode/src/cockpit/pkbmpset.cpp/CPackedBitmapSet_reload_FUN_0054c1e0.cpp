// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0
// Address: 0054c1e0
// Address Range: [[0054c1e0, 0054c3cf]]
// Convention: __cdecl
// Signature: void cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0(CPackedBitmapSet * this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reload_FUN_0054c1e0(CPackedBitmapSet *this_ptr)

{
  FILE *pFVar1;
  void *pvVar2;
  SIZE_T SVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  SIZE_T size;
  int iVar5;
  void *unaff_retaddr;
  FILE *in_stack_00000008;
  int in_stack_00000024;
  int in_stack_00000028;
  char acStack_e0 [4];
  char acStack_dc [104];
  char acStack_74 [4];
  char acStack_70 [96];
  
  pFVar1 = engine_dosio_c_getFile_FUN_00481a50("art",this_ptr->filename,"rb");
  if (pFVar1 == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_e0,"Unable to open %s in CPackedBitmapSet::reloadJoinedRAW",this_ptr->filename);
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    g_CurrentLineNumber = 0x108;
    core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_dc);
  }
  size = this_ptr->extension * this_ptr->base_path;
  pvVar2 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,"..\\cockpit\\pkbmpset.cpp",0x110);
  if (pvVar2 == (void *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xfffffec8,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW",size);
    g_CurrentLineNumber = 0x115;
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xfffffecc);
  }
  iVar4 = 0;
  if (0 < this_ptr->bitmap_count) {
    iVar5 = 0;
    do {
      if ((in_stack_00000024 < 0) || (iVar4 == in_stack_00000024)) {
        SVar3 = crt_stdio_c_fread_FUN_005fd990(unaff_retaddr,size,1,(FILE *)this_ptr);
        if (SVar3 != 1) {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_74,"Error reading from %s in CPackedBitmapSet::loadJoinedRAW",pFVar1);
          g_CurrentLineNumber = 0x128;
          g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
          core_main_c_displayErrorAndQuit_FUN_00506f10(acStack_70);
        }
        cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0
                  ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar5),
                   (uchar *)this_ptr->filename,this_ptr->extension);
      }
      else {
        crt_stdio_c_fseek_FUN_005ffacc((FILE *)this_ptr,size,1);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x24;
    } while (iVar4 < this_ptr->bitmap_count);
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(unaff_retaddr,"..\\cockpit\\pkbmpset.cpp",0x132);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000008,"..\\cockpit\\pkbmpset.cpp",0x133);
  if (in_stack_00000028 == 0) {
    return;
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710(this_ptr);
  return;
}
