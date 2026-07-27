// Name: core_pendulum.cpp_FUN_004f2c00
// Address: 004f2c00
// Address Range: [[004f2c00, 004f2c1b]]
// Convention: unknown
// Signature: void core_pendulum_cpp_FUN_004f2c00(void)

#include "nocturne.h"

void core_pendulum_cpp_FUN_004f2c00(void)

{
  int iVar1;
  
  iVar1 = FUN_0056497c(0x43c);
  if (iVar1 == 0) {
    return;
  }
  core_pendulum_cpp_CPendulum_ctor_FUN_004f2c30(iVar1);
  return;
}
