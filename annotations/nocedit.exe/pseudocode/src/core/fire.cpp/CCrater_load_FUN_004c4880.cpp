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
  int iVar3;
  int iVar4;
  int iVar5;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%d,%d,%f,%f\n",this_ptr,this_ptr->field0_0x0 + 4,
             this_ptr->field0_0x0 + 8,this_ptr->field0_0x0 + 0x18);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",&file_handle->_flag,&file_handle->_handle,
             &file_handle->_bufsize);
  iVar3 = 0;
  iVar1 = in_stack_0000000c + 0x1c;
  iVar4 = in_stack_0000000c + 0x24;
  iVar5 = in_stack_0000000c + 0x20;
  do {
    iVar2 = iVar3 * 0xc;
    iVar3 = iVar3 + 1;
    crt_stdio_c_fscanf_FUN_005fe7c0(file_handle,"%f,%f,%f\n",iVar2 + iVar1,iVar5,iVar4);
    iVar4 = iVar4 + 0xc;
    iVar5 = iVar5 + 0xc;
  } while (iVar3 < 3);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",in_stack_00000010 + 0x40,in_stack_00000010 + 0x44,
             in_stack_00000010 + 0x48);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",in_stack_00000014 + 0x4c,in_stack_00000014 + 0x50,
             in_stack_00000014 + 0x54);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",in_stack_00000018 + 0x58,in_stack_00000018 + 0x5c,
             in_stack_00000018 + 0x60);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (file_handle,"%f,%f,%f\n",in_stack_0000001c + 100,in_stack_0000001c + 0x68);
  return;
}
