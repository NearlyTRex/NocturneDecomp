// Name: core_filmreel.cpp_FUN_00481e20
// Address: 00481e20
// Address Range: [[00481e20, 00481e64]]
// Convention: unknown
// Signature: void core_filmreel_cpp_FUN_00481e20(CDemonActor *param_1)

#include "nocturne.h"

void core_filmreel_cpp_FUN_00481e20(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
            ((CKeyFramedModelInstance *)(param_1 + 1),"modelName");
  if (INT_005b8018 < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0((char *)&param_1[2].orient,"movieName");
  return;
}
