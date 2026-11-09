// Name: core_boneguy.cpp_FUN_00419a90
// Address: 00419a90
// Address Range: [[00419a90, 00419aab]]
// Convention: unknown
// Signature: void core_boneguy_cpp_FUN_00419a90(void)

#include "nocturne.h"

void core_boneguy_cpp_FUN_00419a90(void)

{
  CBaalSkel *this_ptr;
  
  this_ptr = (CBaalSkel *)FUN_005a3cb2(0xd698);
  if (this_ptr == (CBaalSkel *)0x0) {
    return;
  }
  unkafter_boneguy_cpp_CBaalSkel_ctor_FUN_00419ac0(this_ptr);
  return;
}
