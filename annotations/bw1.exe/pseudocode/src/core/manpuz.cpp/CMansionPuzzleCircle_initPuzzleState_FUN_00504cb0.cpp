// Name: core_manpuz.cpp_CMansionPuzzleCircle_initPuzzleState_FUN_00504cb0
// Address: 00504cb0
// Address Range: [[00504cb0, 00504eda]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_initPuzzleState_FUN_00504cb0(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_initPuzzleState_FUN_00504cb0(CMansionPuzzleCircle *this_ptr)

{
  CMansionPuzzleCircle *pCVar1;
  byte *puVar2;
  CMansionPuzzleCircle *pCVar3;
  float *out_r;
  float *out_b;
  int panel_index;
  float *out_g;
  int in_stack_00000018;
  
  pCVar1 = this_ptr;
  pCVar3 = this_ptr;
  do {
    *(uint *)&pCVar3->field_0x5f4 = 0;
    *(uint *)&pCVar3->field_0x5f8 = 0;
    *(uint *)&pCVar3->field_0x63c = 0;
    *(uint *)&pCVar3->field_0x640 = 0;
    *(uint *)&pCVar3->field_0x644 = 0;
    puVar2 = &pCVar1->field_0x4;
    *(uint *)&pCVar3->field_0x5f0 = 1;
    *(uint *)&pCVar1->field_0x1400 = 0;
    *(uint *)&pCVar1->field_0x1430 = 0;
    *(uint *)&pCVar1->field_0x1460 = 0;
    pCVar3 = (CMansionPuzzleCircle *)&pCVar3->field_0x64;
    *(uint *)&pCVar1->field_0x1490 = 0;
    pCVar1 = (CMansionPuzzleCircle *)puVar2;
  } while (puVar2 != &this_ptr->field_0x30);
  *(uint *)&this_ptr->field_0x644 = 0xff;
  *(uint *)&this_ptr->field_0x6a0 = 0xff;
  *(uint *)&this_ptr->field_0x704 = 0xff;
  *(uint *)&this_ptr->field_0x71c = 0;
  *(uint *)&this_ptr->field_0x7cc = 0xff;
  *(uint *)&this_ptr->field_0x838 = 0xff;
  *(uint *)&this_ptr->field_0x848 = 0;
  *(uint *)&this_ptr->field_0x8f8 = 0xff;
  *(uint *)&this_ptr->field_0x964 = 0xff;
  *(uint *)&this_ptr->field_0x9c0 = 0xff;
  *(uint *)&this_ptr->field_0xa2c = 0xff;
  *(uint *)&this_ptr->field_0xa90 = 0xff;
  *(uint *)&this_ptr->field_0x1460 = 0xff;
  *(uint *)&this_ptr->field_0x1464 = 0xff;
  *(uint *)&this_ptr->field_0x1408 = 0xff;
  *(uint *)&this_ptr->field_0x140c = 0xff;
  *(uint *)&this_ptr->field_0x1470 = 0xff;
  *(uint *)&this_ptr->field_0x1414 = 0xff;
  *(uint *)&this_ptr->field_0x1418 = 0xff;
  *(uint *)&this_ptr->field_0x147c = 0xff;
  *(uint *)&this_ptr->field_0x1480 = 0xff;
  *(uint *)&this_ptr->field_0x1484 = 0xff;
  *(uint *)&this_ptr->field_0x1428 = 0xff;
  *(uint *)&this_ptr->field_0x63c = *(uint *)&this_ptr->field_0x644;
  panel_index = 0;
  *(uint *)&this_ptr->field_0x1400 = *(uint *)&this_ptr->field_0x1460;
  *(uint *)&this_ptr->field_0x142c = 0xff;
  out_b = (float *)&this_ptr->field_0xaa8;
  out_g = (float *)&this_ptr->field_0xaa4;
  do {
    out_r = (float *)(&this_ptr->field_0xaa0 + panel_index * 0xb8);
    core_manpuz_cpp_CMansionPuzzleCircle_getPanelColor_FUN_005056f0
              (this_ptr,panel_index,out_r,out_g,out_b);
    out_r[5] = 0.0;
    panel_index = panel_index + 1;
    out_r[8] = 0.0;
    out_r[4] = out_r[5];
    out_r[7] = out_r[8];
    out_r[3] = out_r[4];
    out_r[6] = out_r[8];
    out_b = out_b + 0x2e;
    out_g = out_g + 0x2e;
  } while (panel_index < 0xc);
  *(uint *)(in_stack_00000018 + 0x139c) = 1;
  *(uint *)(in_stack_00000018 + 0x13b8) = 0;
  *(uint *)(in_stack_00000018 + 0x13fc) = 0xb;
  *(uint *)(in_stack_00000018 + 0x1358) = 0;
  return;
}
