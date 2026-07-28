// Name: core_marquee.cpp_CMarquee_setup_FUN_004cc2e0
// Address: 004cc2e0
// Address Range: [[004cc2e0, 004cc318]]
// Convention: unknown
// Signature: void core_marquee_cpp_CMarquee_setup_FUN_004cc2e0(CMarquee *param_1)

#include "nocturne.h"

void core_marquee_cpp_CMarquee_setup_FUN_004cc2e0(CMarquee *param_1)

{
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&param_1->base);
  core_course_cpp_CCourse_load_FUN_0043b690(&param_1->course,param_1->course_name);
  core_marquee_cpp_CMarquee_computeBoundingBox_FUN_004cc1b0(param_1);
  param_1->param = 0.0;
  return;
}
