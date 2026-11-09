// Name: core_emitter.cpp_CEmitter_ctor_FUN_004867e0
// Address: 004867e0
// Address Range: [[004867e0, 004869a4]]
// Convention: unknown
// Signature: CEmitter * core_emitter_cpp_CEmitter_ctor_FUN_004867e0(CEmitter *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CEmitter * core_emitter_cpp_CEmitter_ctor_FUN_004867e0(CEmitter *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                          ((CKeyFramedModelInstance *)&pCVar2[1].field_0xf0);
  *(byte **)&this_ptr_00[-1].field_0x88 = &g_CEmitterVTable;
  *(uint *)&this_ptr_00[-1].field_0x90 = 0x3f800000;
  pcVar3 = (char *)0x5d2b97;
  *(uint *)&this_ptr_00[-1].field_0x94 = 0x3f800000;
  *(uint *)&this_ptr_00[-1].field_0x98 = 0x3f800000;
  pcVar4 = &this_ptr_00[-1].field_0xa0;
  *(uint *)&this_ptr_00[-1].field_0x8c = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5d2b9c;
  pcVar4 = &this_ptr_00[-1].field_0x104;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)&this_ptr_00[1].field_0xa0 = 0;
  *(uint *)&this_ptr_00[1].field_0xa4 = 0x3dcccccd;
  *(uint *)&this_ptr_00[-1].field_0x9c = 1;
  *(uint *)&this_ptr_00[-1].field_0x170 = 0xff;
  *(uint *)&this_ptr_00[-1].field_0x174 = 0;
  *(uint *)&this_ptr_00[-1].field_0x178 = 0;
  *(uint *)&this_ptr_00[-1].field_0x16c = 1;
  *(uint *)&this_ptr_00[-1].field_0x168 = 0;
  *(uint *)&this_ptr_00[1].field_0xa8 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (this_ptr_00,"stalrock.kfm");
  *(uint *)(this_ptr_00 + 1) = 0x41a00000;
  *(uint *)&this_ptr_00[1].field_0x4 = 0x42c80000;
  *(uint *)&this_ptr_00[1].field_0x8 = 0x3f800000;
  *(uint *)&this_ptr_00[1].field_0xc = 0;
  *(uint *)&this_ptr_00[1].field_0x10 = 0x4000;
  *(uint *)&this_ptr_00[1].field_0x14 = 0x10000;
  *(uint *)&this_ptr_00[1].field_0x18 = 0xffff;
  *(uint *)&this_ptr_00[1].field_0x1c = 0x3ecccccd;
  *(uint *)&this_ptr_00[1].field_0x30 = 0x42480000;
  *(uint *)&this_ptr_00[1].field_0x20 = 0;
  *(uint *)&this_ptr_00[1].field_0x24 = 0;
  *(uint *)&this_ptr_00[1].field_0x28 = 1;
  *(uint *)&this_ptr_00[1].field_0x2c = 0;
  this_ptr_00[1].field_0x34 = 0;
  *(uint *)&this_ptr_00[1].field_0x9c = 1;
  *(uint *)&this_ptr_00[1].field_0xec = 0;
  *(uint *)&this_ptr_00[1].field_0xf4 = 0;
  *(uint *)&this_ptr_00[1].field_0xf8 = 0x3f800000;
  return (CEmitter *)&this_ptr_00[-3].field_0xd0;
}
