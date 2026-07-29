// Name: FUN_0056f544
// Address: 0056f544
// Address Range: [[0056f544, 0056f572]]
// Convention: unknown
// Signature: char * FUN_0056f544(uint param_1,char *param_2,int param_3)

#include "nocturne.h"

char * FUN_0056f544(uint param_1,char *param_2,int param_3)

{
  char *buffer;
  
  buffer = param_2;
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    param_1 = -param_1;
    buffer = param_2 + 1;
    *param_2 = '-';
  }
  utoa(param_1,buffer,param_3);
  return param_2;
}
