// Name: cockpit_pkbmpset.cpp_CPackedBitmapSet_reload_FUN_0054c1e0
// Address: 0054c1e0
// Address Range: [[0054c1e0, 0054c3cf]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reload_FUN_0054c1e0(CPackedBitmapSet *this_ptr)

#include "nocturne.h"

void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_reload_FUN_0054c1e0(CPackedBitmapSet *this_ptr)

{
  SIZE_T SVar1;
  int iVar2;
  SIZE_T size;
  int iVar3;
  int in_stack_00000008;
  int in_stack_0000000c;
  char local_148 [100];
  char local_e4 [100];
  char local_80 [100];
  char *local_1c;
  uchar *local_18;
  _FILE *local_14;
  
  local_14 = engine_dosio_c_getFile_FUN_00481a50("art",this_ptr->filename,"rb");
  if (local_14 == (_FILE *)0x0) {
    _sprintf
              (local_e4,"Unable to open %s in CPackedBitmapSet::reloadJoinedRAW",this_ptr->filename);
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    g_CurrentLineNumber = 0x108;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_e4);
  }
  size = this_ptr->width * this_ptr->height;
  local_18 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,"..\\cockpit\\pkbmpset.cpp",0x110);
  if (local_18 == (uchar *)0x0) {
    _sprintf(local_148,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW",size);
    g_CurrentLineNumber = 0x115;
    g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_148);
  }
  iVar2 = 0;
  if (0 < this_ptr->bitmap_count) {
    local_1c = this_ptr->filename;
    iVar3 = 0;
    do {
      if ((in_stack_0000000c < 0) || (iVar2 == in_stack_0000000c)) {
        SVar1 = _fread(local_18,size,1,local_14);
        if (SVar1 != 1) {
          _sprintf(local_80,"Error reading from %s in CPackedBitmapSet::loadJoinedRAW",local_1c);
          g_CurrentLineNumber = 0x128;
          g_CurrentFilename = "..\\cockpit\\pkbmpset.cpp";
          core_main_c_displayErrorAndQuit_FUN_00506f10(local_80);
        }
        cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_0054b0e0
                  ((CPackedBitmap *)(this_ptr->bitmap_array->filename + iVar3),local_18,
                   this_ptr->width);
      }
      else {
        _fseek(local_14,size,1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x24;
    } while (iVar2 < this_ptr->bitmap_count);
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(local_18,"..\\cockpit\\pkbmpset.cpp",0x132);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_14,"..\\cockpit\\pkbmpset.cpp",0x133);
  if (in_stack_00000008 == 0) {
    return;
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_0054c710(this_ptr);
  return;
}
