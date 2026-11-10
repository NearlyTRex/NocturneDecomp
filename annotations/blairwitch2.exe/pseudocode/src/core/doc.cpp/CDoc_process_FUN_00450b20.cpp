// Name: core_doc.cpp_CDoc_process_FUN_00450b20
// Address: 00450b20
// Address Range: [[00450b20, 00450c16]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_process_FUN_00450b20(CDoc *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_CDoc_process_FUN_00450b20(CDoc *this_ptr,float delta_time)

{
  float delta_time_00;
  bool bVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    return;
  }
  core_charactr_cpp_FUN_0042b5e0(this_ptr,delta_time);
  delta_time_00 = g_CGamePtr->delta_time_float;
  iVar2 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
  bVar1 = false;
  switch(*(uint *)(iVar2 + 0x24)) {
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x19:
  case 0x1b:
    bVar1 = true;
  }
  if ((*(int *)&this_ptr->field_0x256a4 == 7) || (fVar3 = delta_time, bVar1)) {
    fVar3 = delta_time * (float)_DAT_005cfe37;
    core_doc_cpp_FUN_00450c60(this_ptr,fVar3);
    core_doc_cpp_FUN_00450c60(this_ptr,fVar3);
    core_doc_cpp_FUN_00450c60(this_ptr,fVar3);
  }
  core_doc_cpp_FUN_00450c60(this_ptr,fVar3);
  core_game_cpp_CGame_slamDT_FUN_004bd460(g_CGamePtr,delta_time_00);
  unkafter_superopt_cpp_FUN_005a8180(&this_ptr->field_0x154,delta_time);
  return;
}
