// Name: core_charactr.cpp_CCharacter_FUN_0042ca70
// Address: 0042ca70
// Address Range: [[0042ca70, 0042cd45]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_FUN_0042ca70(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042ca70(CCharacter *this_ptr)

{
  COrientation *pCVar1;
  CCharacter_full_vtable *pCVar2;
  int iVar3;
  CVector3f *pCVar4;
  float fVar5;
  float fVar6;
  CDemonActor *pCVar7;
  float in_stack_00000008;
  CVector3f aCStack_48 [2];
  CVector3f CStack_30;
  float fStack_1c;
  float fStack_18;
  
  if ((*(int *)this_ptr->unk2 == 0) && (*(int *)(this_ptr->unk2 + 0x14) == 0)) {
    return 0;
  }
  if ((0.0 <= *(float *)(this_ptr->unk2 + 0xc)) &&
     (fVar6 = *(float *)(this_ptr->unk2 + 0xc) - in_stack_00000008,
     *(float *)(this_ptr->unk2 + 0xc) = fVar6, fVar6 <= 0.0)) {
    this_ptr->unk2[0xc] = '\0';
    this_ptr->unk2[0xd] = '\0';
    this_ptr->unk2[0xe] = '\0';
    this_ptr->unk2[0xf] = '\0';
    iVar3 = *(int *)this_ptr->unk2;
    this_ptr->unk2[0x10] = '\0';
    this_ptr->unk2[0x11] = '\0';
    this_ptr->unk2[0x12] = '\0';
    this_ptr->unk2[0x13] = '\0';
    (this_ptr->base).location.position.x = *(float *)(iVar3 + 0x20);
    (this_ptr->base).location.position.y = *(float *)(iVar3 + 0x24);
    (this_ptr->base).location.position.z = *(float *)(iVar3 + 0x28);
    (this_ptr->base).location.area_id = *(int *)(iVar3 + 0x2c);
    iVar3 = *(int *)this_ptr->unk2;
    pCVar1 = &(this_ptr->base).orient;
    if (pCVar1 != (COrientation *)(iVar3 + 0x30)) {
      pCVar1->pitch = *(float *)(iVar3 + 0x30);
      (this_ptr->base).orient.bank = *(float *)(iVar3 + 0x34);
      (this_ptr->base).orient.heading = *(float *)(iVar3 + 0x38);
    }
    if (*(int *)(this_ptr->unk2 + 0x14) != 0) {
      (*(((this_ptr->base).vtable._uc)->_uc).cfunc19)();
    }
    return 1;
  }
  if (*(CDoor **)(this_ptr->unk2 + 0x14) == (CDoor *)0x0) {
    if (((0.0 <= *(float *)(this_ptr->unk2 + 4)) &&
        (pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                            (*(CDemonActor **)this_ptr->unk2,g_CWayPointClassInfo.name_hash),
        pCVar7 != (CDemonActor *)0x0)) && (iVar3 = core_waypoint_cpp_FUN_005ec320(), iVar3 == 0)) {
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s can't figure out next waypoint trying to reach %s\n",this_ptr,
                 *(uint *)this_ptr->unk2);
      return 1;
    }
    core_charactr_cpp_CCharacter_FUN_0042c5f0(this_ptr);
    return 1;
  }
  core_door_cpp_CDoor_getOpenStandPos_FUN_00480e20(*(CDoor **)(this_ptr->unk2 + 0x14));
  (**(code **)(*(int *)(*(int *)(this_ptr->unk2 + 0x14) + 0x154) + 0xbc))();
  iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(this_ptr);
  if (iVar3 < 0) {
    this_ptr->unk2[0x10] = '\x03';
    this_ptr->unk2[0x11] = '\0';
    this_ptr->unk2[0x12] = '\0';
    this_ptr->unk2[0x13] = '\0';
    return 1;
  }
  if (iVar3 < 1) {
    this_ptr->unk2[0x10] = '\x01';
    this_ptr->unk2[0x11] = '\0';
    this_ptr->unk2[0x12] = '\0';
    this_ptr->unk2[0x13] = '\0';
    return 1;
  }
  pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (&this_ptr->base,&CStack_30,
                      (CVector3f *)(*(int *)(this_ptr->unk2 + 0x14) + 0x9bc));
  pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(aCStack_48,pCVar4);
  fVar6 = pCVar4->y;
  *(float *)(this_ptr->unk1 + 0xc) = fVar6;
  if ((float)0.62831853069999999 <= fVar6) {
    this_ptr->unk2[0x10] = '\x01';
    this_ptr->unk2[0x11] = '\0';
    this_ptr->unk2[0x12] = '\0';
    this_ptr->unk2[0x13] = '\0';
  }
  else {
    pCVar2 = (this_ptr->base).vtable._uc;
    this_ptr->unk2[0x10] = '\0';
    this_ptr->unk2[0x11] = '\0';
    this_ptr->unk2[0x12] = '\0';
    this_ptr->unk2[0x13] = '\0';
    (*(pCVar2->_uc).cfunc19)();
  }
  fStack_18 = *(float *)(this_ptr->unk1 + 0xc);
  fStack_1c = *(float *)(this_ptr->unk1 + 0x2c);
  fVar5 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fStack_18);
  fVar6 = -fStack_1c;
  if ((fVar6 <= fVar5) && (fVar6 = fVar5, fStack_1c < fVar5)) {
    fVar6 = fStack_1c;
  }
  *(float *)(this_ptr->unk1 + 0xc) = fVar6;
  return 1;
}
