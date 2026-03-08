// Name: shape_design.c_calculateSamplingWeight_FUN_0046adc0
// Address: 0046adc0
// Address Range: [[0046adc0, 0046ae1c]]
// Convention: __cdecl
// Signature: double __cdecl shape_design_c_calculateSamplingWeight_FUN_0046adc0(double current_pos,double start_coord,double end_coord)

#include "nocturne.h"

double __cdecl shape_design_c_calculateSamplingWeight_FUN_0046adc0(double current_pos,double start_coord,double end_coord)

{
  ulonglong local_18;
  
  local_18 = end_coord - current_pos;
  if (1.0 < local_18) {
    local_18 = 1.0;
  }
  if (current_pos < start_coord) {
    local_18 = (start_coord - current_pos) * local_18;
  }
  return local_18;
}
