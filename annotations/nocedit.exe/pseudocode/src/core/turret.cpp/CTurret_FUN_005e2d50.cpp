// Name: core_turret.cpp_CTurret_FUN_005e2d50
// Address: 005e2d50
// Address Range: [[005e2d50, 005e3273]]
// Convention: __cdecl
// Signature: void __cdecl core_turret_cpp_CTurret_FUN_005e2d50(CTurret *this_ptr)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_FUN_005e2d50(CTurret *this_ptr)

{
  CDemonActor *actor_ptr;
  CVector3f *pCVar1;
  int iVar2;
  CBoundingBox3D *pCVar3;
  uint corner_index;
  int iVar4;
  int iVar5;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  byte auStack_d8 [16];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  CBoundingBox3D local_b4;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f aCStack_6c [2];
  CVector3f CStack_54;
  CVector3f CStack_48;
  CVector3f aCStack_3c [2];
  CVector3f CStack_24;
  float fStack_18;
  char *pcStack_14;
  
  if (this_ptr->unk3 == 0) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s has no guard trigger!\n",this_ptr);
    return;
  }
  (**(code **)(*(int *)(this_ptr->unk3 + 0x154) + 0x14))();
  corner_index = 0;
  core_box_cpp_CBoundingBox3D_reset_FUN_00420fb0((CBoundingBox3D *)(auStack_d8 + 0xc));
  do {
    pCVar1 = core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0(&local_b4,&CStack_78,corner_index);
    pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       ((CDemonActor *)this_ptr->unk3,aCStack_6c,pCVar1);
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)(auStack_d8 + 0xc),pCVar1);
  } while ((int)corner_index < 8);
  pcStack_14 = this_ptr->allowed_victim_types;
  uStack_9c = 0x41700000;
  uStack_98 = 0x41700000;
  uStack_94 = 0x41700000;
  CStack_90.x = 999.0;
  CStack_90.y = 999.0;
  CStack_90.z = 999.0;
  auStack_d8._12_4_ = (float)auStack_d8._12_4_ + -15.0f;
  fStack_c8 = fStack_c8 + -15.0f;
  fStack_c4 = fStack_c4 + -15.0f;
  fStack_c0 = fStack_c0 + 15.0f;
  fStack_bc = fStack_bc + 15.0f;
  fStack_b8 = fStack_b8 + 15.0f;
  iVar5 = 0;
  iVar4 = 0;
  do {
    while( true ) {
      if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar5) {
        if ((int)CStack_90.y < 0x42c60001) {
          core_turret_cpp_CTurret_FUN_005e3280(this_ptr);
          if (*(float *)((this_ptr->base).unk2 + 0xc) <= 0.0) {
            (*(((this_ptr->base).base.vtable._uc)->_uc).cfunc4)();
          }
          this_ptr->unk5[0xc] = '\0';
          this_ptr->unk5[0xd] = '\0';
          this_ptr->unk5[0xe] = -0x80;
          this_ptr->unk5[0xf] = '?';
          return;
        }
        core_turret_cpp_CTurret_FUN_005e3560(this_ptr);
        return;
      }
      actor_ptr = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar4);
      iVar2 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,pcStack_14);
      if ((((iVar2 != 0) && ((float)auStack_d8._12_4_ <= (actor_ptr->location).position.x)) &&
          (fStack_c8 <= (actor_ptr->location).position.y)) &&
         (((fStack_c4 <= (actor_ptr->location).position.z &&
           ((actor_ptr->location).position.x <= fStack_c0)) &&
          (((actor_ptr->location).position.y <= fStack_bc &&
           ((actor_ptr->location).position.z <= fStack_b8)))))) break;
LAB_005e2ed6:
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    }
    iVar2 = (*((actor_ptr->vtable)._ub)->isActiveTarget)(actor_ptr);
    if (iVar2 == 0) goto LAB_005e2ed6;
    __arrinit(&stack0xfffffea8,10,&g_CVectorTypeInfo);
    iVar2 = (*((actor_ptr->vtable)._ub)->getTargetPoints)(actor_ptr,(CVector3f *)&stack0xfffffea8);
    if (iVar2 < 1) {
      pCVar3 = (*((actor_ptr->vtable)._ub)->getBoundingBox)(actor_ptr,(CBoundingBox3D *)auStack_d8);
      CStack_24.z = (pCVar3->min).x + (pCVar3->max).x;
      fStack_18 = (pCVar3->min).y + (pCVar3->max).y;
      CStack_54.z = CStack_24.z * 0.5f;
      pcStack_14 = (char *)((pCVar3->min).z + (pCVar3->max).z);
      CStack_48.x = fStack_18 * 0.5f;
      CStack_48.y = (float)pcStack_14 * 0.5f;
      if (&fStack_148 != &CStack_54.z) {
        fStack_148 = CStack_54.z;
        fStack_144 = CStack_48.x;
        fStack_140 = CStack_48.y;
      }
    }
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (actor_ptr,&CStack_54,(CVector3f *)&stack0xfffffea4);
    pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       ((CDemonActor *)this_ptr->unk3,&CStack_24,&CStack_54);
    if (((pCVar1->x < local_b4.min.x) || (pCVar1->y < local_b4.min.y)) ||
       ((pCVar1->z < local_b4.min.z ||
        (((local_b4.max.x < pCVar1->x || (local_b4.max.y < pCVar1->y)) ||
         (local_b4.max.z < pCVar1->z)))))) goto LAB_005e2ed6;
    pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                       ((CDemonActor *)this_ptr,&CStack_84,&CStack_54);
    core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(&CStack_48,pCVar1);
    if (((CStack_48.x < -0.5235988f) || (1.22173f < CStack_48.x)) ||
       (SQRT(CStack_90.z * CStack_90.z + CStack_90.x * CStack_90.x + CStack_90.y * CStack_90.y) <
        SQRT(CStack_48.z * CStack_48.z + CStack_48.x * CStack_48.x + CStack_48.y * CStack_48.y)))
    goto LAB_005e2ed6;
    if (&CStack_90 != &CStack_48) {
      CStack_90.x = CStack_48.x;
      CStack_90.y = CStack_48.y;
      CStack_90.z = CStack_48.z;
    }
    if (aCStack_3c == &CStack_54) goto LAB_005e2ed6;
    aCStack_3c[0].z = CStack_54.z;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  } while( true );
}
