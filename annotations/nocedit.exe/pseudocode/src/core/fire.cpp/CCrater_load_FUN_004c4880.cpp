// Name: core_fire.cpp_CCrater_load_FUN_004c4880
// Address: 004c4880
// Address Range: [[004c4880, 004c49bb]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CCrater_load_FUN_004c4880(CCrater * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_load_FUN_004c4880(CCrater *this_ptr,FILE *file_handle)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%d,%d,%f,%f\n",this_ptr,this_ptr->field0_0x0 + 4,
             this_ptr->field0_0x0 + 8,this_ptr->field0_0x0 + 0x18);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",this_ptr->field0_0x0 + 0xc,this_ptr->field0_0x0 + 0x10,
             this_ptr->field0_0x0 + 0x14);
  iVar2 = 0;
  pcVar3 = this_ptr->field0_0x0 + 0x24;
  pcVar4 = this_ptr->field0_0x0 + 0x20;
  do {
    iVar1 = iVar2 * 0xc;
    iVar2 = iVar2 + 1;
    crt_stdio_c_fscanf_FUN_005fe7c0
              (file_handle,"%f,%f,%f\n",this_ptr->field0_0x0 + iVar1 + 0x1c,pcVar4,pcVar3);
    pcVar3 = pcVar3 + 0xc;
    pcVar4 = pcVar4 + 0xc;
  } while (iVar2 < 3);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",this_ptr->field0_0x0 + 0x40,this_ptr->field0_0x0 + 0x44,
             this_ptr->field0_0x0 + 0x48);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",this_ptr->field0_0x0 + 0x4c,this_ptr->field0_0x0 + 0x50,
             this_ptr->field0_0x0 + 0x54);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",this_ptr->field0_0x0 + 0x58,this_ptr->field0_0x0 + 0x5c,
             this_ptr->field0_0x0 + 0x60);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",this_ptr->field0_0x0 + 100,this_ptr->field0_0x0 + 0x68,
             this_ptr->field0_0x0 + 0x6c);
  return;
}
