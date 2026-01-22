// Name: shape_design.c_calculateSamplingWeight_FUN_0046adc0
// Address: 0046adc0
// Address Range: [[0046adc0, 0046ae1c]]
// Convention: __cdecl
// Signature: double shape_design.c_calculateSamplingWeight_FUN_0046adc0(double current_pos, double start_coord, double end_coord)

#include "nocturne.h"

double __cdecl
shape_design_c_calculateSamplingWeight_FUN_0046adc0
          (double current_pos,double start_coord,double end_coord)

{
  uint in_stack_00000004;
  ulonglong local_18;
  
  local_18 = (double)CONCAT44(end_coord._0_4_,start_coord._4_4_) -
             (double)CONCAT44(current_pos._0_4_,in_stack_00000004);
  if (1.0 < local_18) {
    local_18 = 1.0;
  }
  if ((double)CONCAT44(current_pos._0_4_,in_stack_00000004) <
      (double)CONCAT44(start_coord._0_4_,current_pos._4_4_)) {
    local_18 = ((double)CONCAT44(start_coord._0_4_,current_pos._4_4_) -
               (double)CONCAT44(current_pos._0_4_,in_stack_00000004)) * local_18;
  }
  return local_18;
}
