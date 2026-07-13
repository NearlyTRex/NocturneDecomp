// Name: __initterm
// Address: 100076e0
// Address Range: [[100076e0, 100076ff]]
// Convention: unknown
// Signature: void __initterm(undefined4 *param_1,undefined4 *param_2)

#include "nocturne.h"

/* Library Function - Single Match
void __initterm(uint *param_1,uint *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}
