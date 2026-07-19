// Name: dll_dx7.cpp_enumAdapterCallback_FUN_100017b0
// Address: 100017b0
// MANUAL RECONSTRUCTION
// Address Range: [[100017b0, 100018f2]]
// Convention: __stdcall
// Signature: int __stdcall dll_dx7_cpp_enumAdapterCallback_FUN_100017b0(GUID *lp_guid,LPCSTR lp_driver_description,LPCSTR lp_driver_name,LPVOID lp_context,HMONITOR hmonitor)

#include "nocturne.h"

int __stdcall dll_dx7_cpp_enumAdapterCallback_FUN_100017b0(GUID *lp_guid,LPCSTR lp_driver_description,LPCSTR lp_driver_name,LPVOID lp_context,HMONITOR hmonitor)

{
  int iVar2;

  iVar2 = dll_dx7_cpp_isAdapter3DCapable_FUN_10001900(lp_guid);
  if (iVar2 != 0) {
    if (strlen(lp_driver_name) < 0x100) {
      strcpy(g_AdapterDriverName[g_AdapterCount],lp_driver_name);
    }
    else {
      memcpy(g_AdapterDriverName[g_AdapterCount],lp_driver_name,0xff);
      g_AdapterDriverName[g_AdapterCount][0xff] = '\0';
    }
    if (strlen(lp_driver_description) < 0x100) {
      strcpy(g_AdapterDescription[g_AdapterCount],lp_driver_description);
    }
    else {
      memcpy(g_AdapterDescription[g_AdapterCount],lp_driver_description,0xff);
      g_AdapterDescription[g_AdapterCount][0xff] = '\0';
    }
    if (lp_guid == (GUID *)0x0) {
      g_AdapterGuids[g_AdapterCount] = (GUID *)0x0;
    }
    else {
      g_AdapterGuidStorage[g_AdapterCount] = *lp_guid;
      g_AdapterGuids[g_AdapterCount] = g_AdapterGuidStorage + g_AdapterCount;
    }
    g_AdapterCount = g_AdapterCount + 1;
    if ((int)(sizeof(g_AdapterGuids) / sizeof(g_AdapterGuids[0])) <= g_AdapterCount) {
      return 0;
    }
  }
  return 1;
}
