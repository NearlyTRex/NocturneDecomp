// Name: engine_pod.cpp_CPod_mount_FUN_005143b0
// Address: 005143b0
// Address Range: [[005143b0, 005144ac]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPod_mount_FUN_005143b0(CPod *this_ptr,char *pod_filename,char *out_error_message)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPod_mount_FUN_005143b0(CPod *this_ptr,char *pod_filename,char *out_error_message)

{
  char cVar1;
  CPodFile *this_ptr_00;
  int iVar2;
  CPodFile *pCVar3;
  char *pcVar4;
  
  this_ptr_00 = operator_new(0x42c);
  pCVar3 = (CPodFile *)0x0;
  if (this_ptr_00 != (CPodFile *)0x0) {
    pCVar3 = engine_pod_cpp_CPodFile_ctor_FUN_00512f00(this_ptr_00);
  }
  if (pCVar3 == (CPodFile *)0x0) {
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Out of memory");
    do {
      cVar1 = *pcVar4;
      *out_error_message = cVar1;
      if (cVar1 == '\0') {
        return 0;
      }
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      out_error_message[1] = cVar1;
      out_error_message = out_error_message + 2;
    } while (cVar1 != '\0');
  }
  else {
    iVar2 = engine_pod_cpp_CPodFile_mountFromFile_FUN_00512fb0
                      (pCVar3,pod_filename,out_error_message);
    if (iVar2 != 0) {
      (*this_ptr->vtable->dismount)(this_ptr,pod_filename);
      if (this_ptr->pod_file_count < 100) {
        this_ptr->pod_files[this_ptr->pod_file_count] = pCVar3;
        this_ptr->pod_file_count = this_ptr->pod_file_count + 1;
        return 1;
      }
      if (pCVar3 != (CPodFile *)0x0) {
        pCVar3 = engine_pod_cpp_CPodFile_dtor_FUN_00512f70(pCVar3,0);
        debugFreeChecked(pCVar3);
      }
      pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                         ("Too many PODs already mounted");
      do {
        cVar1 = *pcVar4;
        *out_error_message = cVar1;
        if (cVar1 == '\0') {
          return 0;
        }
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        out_error_message[1] = cVar1;
        out_error_message = out_error_message + 2;
      } while (cVar1 != '\0');
      return 0;
    }
    if (pCVar3 != (CPodFile *)0x0) {
      pCVar3 = engine_pod_cpp_CPodFile_dtor_FUN_00512f70(pCVar3,0);
      debugFreeChecked(pCVar3);
    }
  }
  return 0;
}
