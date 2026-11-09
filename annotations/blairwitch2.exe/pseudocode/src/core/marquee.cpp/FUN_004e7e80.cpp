// Name: core_marquee.cpp_FUN_004e7e80
// Address: 004e7e80
// Address Range: [[004e7e80, 004e7eb8]]
// Convention: unknown
// Signature: void core_marquee_cpp_FUN_004e7e80(CMarquee *param_1)

#include "nocturne.h"

void core_marquee_cpp_FUN_004e7e80(CMarquee *param_1)

{
  core_actor_cpp_FUN_00408a80((CDemonActor *)param_1);
  core_course_cpp_CCourse_load_FUN_00438af0((CCourse *)&param_1->field_0x300,&param_1->field_0x2b4);
  core_marquee_cpp_FUN_004e7d50(param_1);
  *(uint *)&param_1->field_0x2d8 = 0;
  return;
}
