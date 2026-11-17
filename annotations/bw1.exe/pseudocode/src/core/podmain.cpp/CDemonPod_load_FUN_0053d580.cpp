// Name: core_podmain.cpp_CDemonPod_load_FUN_0053d580
// Address: 0053d580
// Address Range: [[0053d580, 0053d703]]
// Convention: __cdecl
// Signature: void __cdecl core_podmain_cpp_CDemonPod_load_FUN_0053d580(CDemonPod *this_ptr)

#include "nocturne.h"

void __cdecl core_podmain_cpp_CDemonPod_load_FUN_0053d580(CDemonPod *this_ptr)

{
  _FILE *file;
  int iVar1;
  int iVar2;
  CFileFinder CStack_328;
  char acStack_214 [512];
  int iStack_14;
  
  file = _fopen("pod.ini","rt");
  if (file == (_FILE *)0x0) {
    engine_dosio_cpp_CFileFinder_ctor_FUN_00479320(&CStack_328);
    engine_dosio_cpp_CFileFinder_openSearch_FUN_00479360(&CStack_328,"*.pod");
    while (CStack_328.filename[0] != '\0') {
      iVar1 = (*((this_ptr->base).vtable)->mount)(&this_ptr->base,CStack_328.filename);
      if (iVar1 == 0) {
        g_CHAR_PTR_01d1d400 = "..\\core\\podmain.cpp";
        g_INT_01d1d404 = 0x39;
        core_main_c_displayErrorAndQuit_FUN_005030e0("Can't mount %s: %s");
      }
      engine_dosio_cpp_CFileFinder_findNext_FUN_004793e0(&CStack_328);
    }
    engine_dosio_cpp_CFileFinder_closeSearch_FUN_00479460(&CStack_328);
    engine_dosio_cpp_CFileFinder_dtor_FUN_00479340(&CStack_328,0);
    return;
  }
  _fscanf(file,"%d\n");
  iVar1 = 0;
  if (0 < iStack_14) {
    do {
      _fscanf(file,"%s\n");
      iVar2 = (*((this_ptr->base).vtable)->mount)(&this_ptr->base,acStack_214);
      if (iVar2 == 0) {
        g_INT_01d1d404 = 0x45;
        g_CHAR_PTR_01d1d400 = "..\\core\\podmain.cpp";
        core_main_c_displayErrorAndQuit_FUN_005030e0("Can't mount %s: %s");
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iStack_14);
  }
  _fclose(file);
  return;
}
