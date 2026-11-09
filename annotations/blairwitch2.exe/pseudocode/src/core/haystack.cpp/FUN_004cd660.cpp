// Name: core_haystack.cpp_FUN_004cd660
// Address: 004cd660
// Address Range: [[004cd660, 004cd791]]
// Convention: unknown
// Signature: void core_haystack_cpp_FUN_004cd660(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_haystack_cpp_FUN_004cd660(CCharacter *param_1,float param_2)

{
  int iVar1;
  
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_005030c0
                      ((CMotionController *)&param_1->field_0x2b4,&param_2);
    switch(iVar1) {
    case 0x65:
      core_haystack_cpp_FUN_004cd7a0();
      iVar1 = *(int *)&param_1[2].field_0x4184;
      goto LAB_004cd6ac;
    case 0x66:
      core_haystack_cpp_FUN_004cd7a0();
      iVar1 = *(int *)&param_1[2].field_0x4184;
LAB_004cd6ac:
      *(uint *)&param_1[2].field_0x4184 = (uint)(iVar1 == 0);
      break;
    case 0x67:
    case 0x69:
    case 0x6b:
      iVar1 = sound_sndmain_cpp_FUN_005515e0
                        ((double)*(float *)&param_1->field_0x20,
                         (double)*(float *)&param_1->field_0x24,
                         (double)*(float *)&param_1->field_0x28,0x42200000);
      if (iVar1 != 0) {
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))();
      }
      break;
    case 0x68:
    case 0x6a:
    case 0x6c:
      iVar1 = sound_sndmain_cpp_FUN_005515e0
                        ((double)*(float *)&param_1->field_0x20,
                         (double)*(float *)&param_1->field_0x24,
                         (double)*(float *)&param_1->field_0x28,0x42200000);
      if ((iVar1 != 0) && (iVar1 = core_actor_cpp_FUN_0040d060(0.4), iVar1 != 0)) {
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))();
      }
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00(param_1,iVar1);
    }
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
