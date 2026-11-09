// Name: core_fire.cpp_CCrater_save_FUN_004b2740
// Address: 004b2740
// Address Range: [[004b2740, 004b287a]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_save_FUN_004b2740(CCrater *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_save_FUN_004b2740(CCrater *this_ptr,_FILE *file_handle)

{
  byte *puVar1;
  byte *puVar2;
  byte *puVar3;
  CCrater *pCVar4;
  
  FUN_005c03c0
            (file_handle,"%d,%d,%f,%f\n",*(uint *)this_ptr,
             *(uint *)&this_ptr->field_0x4,(double)*(float *)&this_ptr->field_0x8,
             (double)*(float *)&this_ptr->field_0x18);
  FUN_005c03c0
            (file_handle,"%f,%f,%f\n",(double)*(float *)&this_ptr->field_0xc,
             (double)*(float *)&this_ptr->field_0x10,(double)*(float *)&this_ptr->field_0x14);
  pCVar4 = this_ptr;
  do {
    puVar1 = &pCVar4->field_0x24;
    puVar2 = &pCVar4->field_0x20;
    puVar3 = &pCVar4->field_0x1c;
    pCVar4 = (CCrater *)&pCVar4->field_0xc;
    FUN_005c03c0
              (file_handle,"%f,%f,%f\n",(double)*(float *)puVar3,(double)*(float *)puVar2,
               (double)*(float *)puVar1);
  } while (pCVar4 != (CCrater *)&this_ptr->field_0x24);
  FUN_005c03c0
            (file_handle,"%f,%f,%f\n",(double)*(float *)&this_ptr->field_0x40,
             (double)*(float *)&this_ptr->field_0x44,(double)*(float *)&this_ptr->field_0x48);
  FUN_005c03c0
            (file_handle,"%f,%f,%f\n",(double)*(float *)&this_ptr->field_0x4c,
             (double)*(float *)&this_ptr->field_0x50,(double)*(float *)&this_ptr->field_0x54);
  FUN_005c03c0
            (file_handle,"%f,%f,%f\n",(double)*(float *)&this_ptr->field_0x58,
             (double)*(float *)&this_ptr->field_0x5c,(double)*(float *)&this_ptr->field_0x60);
  FUN_005c03c0
            (file_handle,"%f,%f,%f\n",(double)*(float *)&this_ptr->field_0x64,
             (double)*(float *)&this_ptr->field_0x68,(double)*(float *)&this_ptr->field_0x6c);
  return;
}
