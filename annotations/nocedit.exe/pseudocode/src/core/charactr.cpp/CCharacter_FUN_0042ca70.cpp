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
  
  if ((this_ptr->field18_0x25a0 == 0.0) && (this_ptr->field23_0x25b4 == 0)) {
    return 0;
  }
  if ((0.0 <= this_ptr->field21_0x25ac) &&
     (fVar6 = this_ptr->field21_0x25ac - in_stack_00000008, this_ptr->field21_0x25ac = fVar6,
     fVar6 <= 0.0)) {
    this_ptr->field21_0x25ac = 0.0;
    fVar6 = this_ptr->field18_0x25a0;
    this_ptr->field22_0x25b0 = 0;
    (this_ptr->base).location.position.x = *(float *)((int)fVar6 + 0x20);
    (this_ptr->base).location.position.y = *(float *)((int)fVar6 + 0x24);
    (this_ptr->base).location.position.z = *(float *)((int)fVar6 + 0x28);
    (this_ptr->base).location.area_id = *(int *)((int)fVar6 + 0x2c);
    fVar6 = this_ptr->field18_0x25a0;
    pCVar1 = &(this_ptr->base).orient;
    if (pCVar1 != (COrientation *)((int)fVar6 + 0x30)) {
      pCVar1->pitch = *(float *)((int)fVar6 + 0x30);
      (this_ptr->base).orient.bank = *(float *)((int)fVar6 + 0x34);
      (this_ptr->base).orient.heading = *(float *)((int)fVar6 + 0x38);
    }
    if (this_ptr->field23_0x25b4 != 0) {
      (*(((this_ptr->base).vtable._uc)->_uc).cfunc19)();
    }
    return 1;
  }
  if ((CDoor *)this_ptr->field23_0x25b4 == (CDoor *)0x0) {
    if (((0.0 <= this_ptr->field19_0x25a4) &&
        (pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c790
                            ((CDemonActor *)this_ptr->field18_0x25a0,g_CWayPointClassInfo.name_hash)
        , pCVar7 != (CDemonActor *)0x0)) &&
       (iVar3 = core_waypoint_cpp_CWayPoint_FUN_005ec320((CWayPoint *)&(this_ptr->base).location),
       iVar3 == 0)) {
      engine_console_cpp_CConsole_printf_FUN_00441890
                (g_CConsolePtr,"%s can't figure out next waypoint trying to reach %s\n",this_ptr,this_ptr->field18_0x25a0
                );
      return 1;
    }
    core_charactr_cpp_CCharacter_FUN_0042c5f0(this_ptr);
    return 1;
  }
  core_door_cpp_CDoor_getOpenStandPos_FUN_00480e20((CDoor *)this_ptr->field23_0x25b4);
  (**(code **)(*(int *)(this_ptr->field23_0x25b4 + 0x154) + 0xbc))();
  iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(this_ptr);
  if (iVar3 < 0) {
    this_ptr->field22_0x25b0 = 3;
    return 1;
  }
  if (iVar3 < 1) {
    this_ptr->field22_0x25b0 = 1;
    return 1;
  }
  pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (&this_ptr->base,&CStack_30,(CVector3f *)(this_ptr->field23_0x25b4 + 0x9bc));
  pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(aCStack_48,pCVar4);
  fVar6 = pCVar4->y;
  this_ptr->turn_angle_accumulator = fVar6;
  if ((float)0.62831853069999999 <= fVar6) {
    this_ptr->field22_0x25b0 = 1;
  }
  else {
    pCVar2 = (this_ptr->base).vtable._uc;
    this_ptr->field22_0x25b0 = 0;
    (*(pCVar2->_uc).cfunc19)();
  }
  fStack_18 = this_ptr->turn_angle_accumulator;
  fStack_1c = this_ptr->turn_speed;
  fVar5 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(fStack_18);
  fVar6 = -fStack_1c;
  if ((fVar6 <= fVar5) && (fVar6 = fVar5, fStack_1c < fVar5)) {
    fVar6 = fStack_1c;
  }
  this_ptr->turn_angle_accumulator = fVar6;
  return 1;
}
