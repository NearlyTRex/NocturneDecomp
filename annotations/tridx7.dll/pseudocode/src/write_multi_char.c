// Name: write_multi_char
// Address: 10006970
// Address Range: [[10006970, 100069a0]]
// Convention: __cdecl
// Signature: void __cdecl write_multi_char(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

#include "nocturne.h"

/* Library Function - Single Match
void __cdecl write_multi_char(uint param_1,int param_2,uint param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    write_char(param_1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}
