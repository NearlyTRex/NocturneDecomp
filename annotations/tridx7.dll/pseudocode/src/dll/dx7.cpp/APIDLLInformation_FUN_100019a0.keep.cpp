// Name: dll_dx7.cpp_APIDLLInformation_FUN_100019a0
// Address: 100019a0
// MANUAL RECONSTRUCTION
// Address Range: [[100019a0, 10001a75]]
// Convention: __cdecl
// Signature: void __cdecl dll_dx7_cpp_APIDLLInformation_FUN_100019a0(HMODULE dll_handle,CExternalRenderer *renderer)

#include "nocturne.h"

void __cdecl dll_dx7_cpp_APIDLLInformation_FUN_100019a0(HMODULE dll_handle,CExternalRenderer *renderer)

{
  char acStack_1ec0 [256];
  CExternalRenderer info;

  memset(&info,0,sizeof(info));
  strcpy(info.vendor_name,"Terminal Reality Inc.");
  info.api_version = 0xffff;
  info.interface_version = 0x100;
  info.driver_version = 0x100;
  info.function_count = 0x10;
  info.feature_flags = 3;
  LoadStringA(dll_handle,1,acStack_1ec0,0x100);
  strcpy(info.description,acStack_1ec0);
  memcpy(renderer,&info,sizeof(info));
  return;
}
