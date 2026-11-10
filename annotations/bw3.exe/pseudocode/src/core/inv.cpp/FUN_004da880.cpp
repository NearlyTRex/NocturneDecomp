// Name: core_inv.cpp_FUN_004da880
// Address: 004da880
// Address Range: [[004da880, 004db8c3]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_FUN_004da880(CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004db142) */
/* WARNING: Removing unreachable block (ram,0x004db14b) */
/* WARNING: Removing unreachable block (ram,0x004db159) */
/* WARNING: Removing unreachable block (ram,0x004db49d) */
/* WARNING: Removing unreachable block (ram,0x004db4bb) */
/* WARNING: Removing unreachable block (ram,0x004db4d4) */
/* WARNING: Removing unreachable block (ram,0x004db176) */
/* WARNING: Removing unreachable block (ram,0x004db181) */
/* WARNING: Removing unreachable block (ram,0x004db193) */
/* WARNING: Removing unreachable block (ram,0x004db1a2) */
/* WARNING: Removing unreachable block (ram,0x004db52b) */
/* WARNING: Removing unreachable block (ram,0x004db546) */
/* WARNING: Removing unreachable block (ram,0x004db1bc) */
/* WARNING: Removing unreachable block (ram,0x004db1c7) */
/* WARNING: Removing unreachable block (ram,0x004db1d5) */
/* WARNING: Removing unreachable block (ram,0x004db1f3) */
/* WARNING: Removing unreachable block (ram,0x004db54b) */
/* WARNING: Removing unreachable block (ram,0x004db56d) */
/* WARNING: Removing unreachable block (ram,0x004db586) */
/* WARNING: Removing unreachable block (ram,0x004db20f) */
/* WARNING: Removing unreachable block (ram,0x004db21a) */
/* WARNING: Removing unreachable block (ram,0x004db2b5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_inv_cpp_FUN_004da880(CInventory *this_ptr,CDemonActor *item_actor,int show_tutorial_message)

{
  char cVar1;
  CInventory CVar2;
  bool bVar3;
  CDemonMission *pCVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  CDemonActor *pCVar8;
  CDemonActor *pCVar9;
  CInventory *pCVar10;
  char *pcVar11;
  char *pcVar12;
  CInventory *pCVar13;
  CInventory *pCVar14;
  CInventory *pCVar15;
  CInventory *pCVar16;
  CInventory *pCVar17;
  byte bVar18;
  float10 fVar19;
  CInventory local_33c [256];
  char local_23c [256];
  char local_13c [256];
  char *local_3c;
  int local_38;
  int local_30;
  int local_24;
  int local_20;
  int local_1c;
  CInventory *local_18;
  int local_14;
  
  bVar18 = 0;
  bVar3 = true;
  iVar5 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c840(item_actor,g_CAmmoClassInfo.name_hash);
  if ((iVar5 != 0) &&
     (pCVar8 = (CDemonActor *)
               core_actor_cpp_castToClassHash_FUN_0040c840
                         (*(uint *)(this_ptr + 4),g_CHeroClassInfo.name_hash),
     pCVar8 != (CDemonActor *)0x0)) {
    if (*(int *)(iVar5 + 0x318) == 10) {
      iVar5 = *(int *)(pCVar8[0x185].create_event + 0x50) + *(int *)(iVar5 + 0x314);
      *(int *)(pCVar8[0x185].create_event + 0x50) = iVar5;
      if (100 < iVar5) {
        pCVar8[0x185].create_event[0x50] = 'd';
        pCVar8[0x185].create_event[0x51] = '\0';
        pCVar8[0x185].create_event[0x52] = '\0';
        pCVar8[0x185].create_event[0x53] = '\0';
      }
      core_sound_cpp_CSound_playActorSound_FUN_005609d0
                (0x02CF5680,pCVar8,"wp_getmana.wav",&(pCVar8->location).position);
      bVar3 = false;
    }
    else {
      if (*(int *)(iVar5 + 0x318) == 0xb) {
        iVar5 = *(int *)(pCVar8[0x185].create_event + 0x54) + *(int *)(iVar5 + 0x314);
        *(int *)(pCVar8[0x185].create_event + 0x54) = iVar5;
        if (0x32 < iVar5) {
          pCVar8[0x185].create_event[0x54] = '2';
          pCVar8[0x185].create_event[0x55] = '\0';
          pCVar8[0x185].create_event[0x56] = '\0';
          pCVar8[0x185].create_event[0x57] = '\0';
        }
        core_sound_cpp_CSound_playActorSound_FUN_005609d0
                  (0x02CF5680,pCVar8,"wp_getammo.wav",&(pCVar8->location).position);
      }
      bVar3 = false;
    }
  }
  iVar5 = (CHealthItem *)core_actor_cpp_castToClassHash_FUN_0040c840(item_actor,g_CHealthItemClassInfo.name_hash);
  local_38 = iVar5;
  if ((iVar5 == 0) || (*(int *)(iVar5 + 0x2e0) == 0)) {
    if (bVar3) {
      if (99 < *(int *)(this_ptr + 0x10)) {
        return 0;
      }
      pCVar8 = (*((item_actor->vtable)._ub)->getCarrier)(item_actor);
      if (pCVar8 != *(CDemonActor **)(this_ptr + 4)) {
        (*((item_actor->vtable)._ub)->onDropped)(item_actor,(CVector3f *)0x0);
        if (*(CDemonActor **)(this_ptr + 4) != (CDemonActor *)0x0) {
          (*((item_actor->vtable)._ub)->pickup)(item_actor,*(CDemonActor **)(this_ptr + 4));
        }
      }
    }
  }
  else {
    iVar6 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(uint *)(this_ptr + 4),g_CHeroClassInfo.name_hash);
    if (iVar6 != 0) {
      core_health_cpp_FUN_004d20c0(iVar5,iVar6);
    }
    bVar3 = false;
  }
  pCVar13 = local_33c;
  pCVar14 = local_33c;
  pCVar15 = local_33c;
  pCVar16 = local_33c;
  pCVar17 = local_33c;
  pCVar10 = local_33c;
  if (((*(int *)(this_ptr + 4) != *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) ||
      (show_tutorial_message == 0)) || (*(int *)&g_CGamePtr->field_0x24c != 0)) goto LAB_004db104;
  local_3c = (char *)core_inv_cpp_getItemDisplayName_FUN_004d9e40(item_actor);
  core_inv_cpp_getItemDescription_FUN_004d9eb0(item_actor);
  pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00508960("You've found : ");
  pcVar11 = local_23c;
  do {
    cVar1 = *pcVar7;
    *pcVar11 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar11[1] = cVar1;
    pcVar11 = pcVar11 + 2;
  } while (cVar1 != '\0');
  local_30 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c840(item_actor,g_CAmmoClassInfo.name_hash);
  iVar5 = (CHealthItem *)core_actor_cpp_castToClassHash_FUN_0040c840(item_actor,g_CHealthItemClassInfo.name_hash);
  if (local_30 == 0) {
    pcVar11 = local_3c;
    if ((iVar5 == 0) || (bVar3)) goto LAB_004daa3e;
    fVar19 = (float10)*(float *)(iVar5 + 0x2d8);
    round();
    local_14 = (int)ROUND(fVar19);
    _sprintf(local_23c,"You've received : %d health");
  }
  else {
    _sprintf(local_13c,&DAT_005c6010);
    pcVar11 = local_13c;
    iVar5 = -1;
    pcVar7 = local_23c;
    do {
      pcVar12 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar12 = pcVar7 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    if (*(int *)(local_30 + 0x318) == 0xb) {
      pcVar11 = "bullets";
    }
    else {
      if (*(int *)(local_30 + 0x318) != 10) goto LAB_004daa67;
      pcVar11 = &DAT_005c601c;
    }
LAB_004daa3e:
    iVar5 = -1;
    pcVar7 = local_23c;
    do {
      pcVar12 = pcVar7;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar12 = pcVar7 + (uint)bVar18 * -2 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar12;
    } while (cVar1 != '\0');
    pcVar12 = pcVar12 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
  }
LAB_004daa67:
  local_33c[0] = (CInventory)0x0;
  iVar5 = core_actor_cpp_isOfClass_FUN_0040c790(item_actor,"CHealthItem");
  if ((iVar5 != 0) && (bVar3)) {
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Press ");
    do {
      cVar1 = *pcVar11;
      *pCVar13 = (CInventory)cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pCVar13[1] = (CInventory)cVar1;
      pCVar13 = pCVar13 + 2;
    } while (cVar1 != '\0');
    pcVar11 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60
                        (*(EInputCodeType *)&g_CGamePtr->field_0x9c);
    iVar5 = -1;
    pCVar13 = local_33c;
    do {
      pcVar7 = (char *)pCVar13;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar13 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar13;
      pCVar13 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960(" and ");
    iVar5 = -1;
    pCVar13 = local_33c;
    do {
      pcVar7 = (char *)pCVar13;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar13 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar13;
      pCVar13 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar11 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60
                        (*(EInputCodeType *)&g_CGamePtr->field_0xa0);
    iVar5 = -1;
    pCVar13 = local_33c;
    do {
      pcVar7 = (char *)pCVar13;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar13 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar13;
      pCVar13 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                        (" to cycle through your inventory.  Press ");
    iVar5 = -1;
    pCVar13 = local_33c;
    do {
      pcVar7 = (char *)pCVar13;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar13 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar13;
      pCVar13 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar11 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60
                        (*(EInputCodeType *)&g_CGamePtr->field_0x50);
    iVar5 = -1;
    pCVar13 = local_33c;
    do {
      pcVar7 = (char *)pCVar13;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar13 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar13;
      pCVar13 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                        (" to use this item to restore some health.");
    iVar5 = -1;
    pCVar13 = local_33c;
    do {
      pcVar7 = (char *)pCVar13;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar13 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar13;
      pCVar13 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
  }
  iVar5 = core_actor_cpp_isOfClass_FUN_0040c790(item_actor,"CKeyActor");
  if (iVar5 != 0) {
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960("With your guns put away, press ")
    ;
    do {
      cVar1 = *pcVar11;
      *pCVar14 = (CInventory)cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pCVar14[1] = (CInventory)cVar1;
      pCVar14 = pCVar14 + 2;
    } while (cVar1 != '\0');
    pcVar11 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60
                        (*(EInputCodeType *)&g_CGamePtr->field_0x48);
    iVar5 = -1;
    pCVar14 = local_33c;
    do {
      pcVar7 = (char *)pCVar14;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar14 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar14;
      pCVar14 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                        (" to open a previously locked door.");
    iVar5 = -1;
    pCVar14 = local_33c;
    do {
      pcVar7 = (char *)pCVar14;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar14 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar14;
      pCVar14 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
  }
  iVar5 = core_actor_cpp_isOfClass_FUN_0040c790(item_actor,"CBoxActor");
  if (iVar5 != 0) {
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Press ");
    do {
      cVar1 = *pcVar11;
      *pCVar15 = (CInventory)cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pCVar15[1] = (CInventory)cVar1;
      pCVar15 = pCVar15 + 2;
    } while (cVar1 != '\0');
    pcVar11 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60
                        (*(EInputCodeType *)&g_CGamePtr->field_0x9c);
    iVar5 = -1;
    pCVar15 = local_33c;
    do {
      pcVar7 = (char *)pCVar15;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar15 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar15;
      pCVar15 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960(" and ");
    iVar5 = -1;
    pCVar15 = local_33c;
    do {
      pcVar7 = (char *)pCVar15;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar15 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar15;
      pCVar15 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar11 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60
                        (*(EInputCodeType *)&g_CGamePtr->field_0xa0);
    iVar5 = -1;
    pCVar15 = local_33c;
    do {
      pcVar7 = (char *)pCVar15;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar15 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar15;
      pCVar15 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960
                        (" to cycle through your inventory.  Press ");
    iVar5 = -1;
    pCVar15 = local_33c;
    do {
      pcVar7 = (char *)pCVar15;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar15 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar15;
      pCVar15 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar11 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60
                        (*(EInputCodeType *)&g_CGamePtr->field_0x50);
    iVar5 = -1;
    pCVar15 = local_33c;
    do {
      pcVar7 = (char *)pCVar15;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar15 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar15;
      pCVar15 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960(" to use this item.");
    iVar5 = -1;
    pCVar15 = local_33c;
    do {
      pcVar7 = (char *)pCVar15;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar15 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar15;
      pCVar15 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
  }
  iVar5 = core_actor_cpp_isOfClass_FUN_0040c790(item_actor,"CLightActor");
  if (iVar5 != 0) {
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Press ");
    do {
      cVar1 = *pcVar11;
      *pCVar16 = (CInventory)cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pCVar16[1] = (CInventory)cVar1;
      pCVar16 = pCVar16 + 2;
    } while (cVar1 != '\0');
    pcVar11 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60
                        (*(EInputCodeType *)&g_CGamePtr->field_0x54);
    iVar5 = -1;
    pCVar16 = local_33c;
    do {
      pcVar7 = (char *)pCVar16;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar16 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar16;
      pCVar16 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960(" to use the lantern.");
    iVar5 = -1;
    pCVar16 = local_33c;
    do {
      pcVar7 = (char *)pCVar16;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar16 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar16;
      pCVar16 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
  }
  iVar5 = core_actor_cpp_isOfClass_FUN_0040c790(item_actor,"CWeapon");
  if (iVar5 != 0) {
    local_14 = (CWeapon *)core_actor_cpp_castToClassHash_FUN_0040c840(item_actor,g_CWeaponClassInfo.name_hash);
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Select your ");
    do {
      cVar1 = *pcVar11;
      *pCVar17 = (CInventory)cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pCVar17[1] = (CInventory)cVar1;
      pCVar17 = pCVar17 + 2;
    } while (cVar1 != '\0');
    pcVar11 = (char *)core_inv_cpp_getItemDisplayName_FUN_004d9e40(local_14);
    iVar5 = -1;
    pCVar17 = local_33c;
    do {
      pcVar7 = (char *)pCVar17;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar17 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar17;
      pCVar17 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960(" with ");
    iVar5 = -1;
    pCVar17 = local_33c;
    do {
      pcVar7 = (char *)pCVar17;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar17 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar17;
      pCVar17 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar11 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60
                        (*(EInputCodeType *)&g_CGamePtr->field_0x94);
    iVar5 = -1;
    pCVar17 = local_33c;
    do {
      pcVar7 = (char *)pCVar17;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar17 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar17;
      pCVar17 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960(" and ");
    iVar5 = -1;
    pCVar17 = local_33c;
    do {
      pcVar7 = (char *)pCVar17;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar17 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar17;
      pCVar17 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar11 = core_menu_cpp_getKeyDisplayName_FUN_004eaa60
                        (*(EInputCodeType *)&g_CGamePtr->field_0x98);
    iVar5 = -1;
    pCVar17 = local_33c;
    do {
      pcVar7 = (char *)pCVar17;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar17 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar17;
      pCVar17 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar11 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c6195);
    iVar5 = -1;
    pCVar17 = local_33c;
    do {
      pcVar7 = (char *)pCVar17;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = (char *)(pCVar17 + (uint)bVar18 * -2 + 1);
      cVar1 = *(char *)pCVar17;
      pCVar17 = (CInventory *)pcVar7;
    } while (cVar1 != '\0');
    pcVar7 = pcVar7 + -1;
    do {
      cVar1 = *pcVar11;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
  }
  core_game_cpp_CGame_displayMessage_FUN_004b46b0(g_CGamePtr,local_23c,10.0);
  pCVar17 = this_ptr + 0x354;
  do {
    CVar2 = *pCVar10;
    *pCVar17 = CVar2;
    if (CVar2 == (CInventory)0x0) break;
    CVar2 = pCVar10[1];
    pCVar10 = pCVar10 + 2;
    pCVar17[1] = CVar2;
    pCVar17 = pCVar17 + 2;
  } while (CVar2 != (CInventory)0x0);
  local_14 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80
                       (_DAT_01549ab4,(char *)(this_ptr + 0x354));
  *(float *)(this_ptr + 0x34c) = (float)local_14 * (float)_DAT_005c627f;
LAB_004db104:
  if ((local_38 != 0) && (!bVar3)) {
    core_mission_cpp_FUN_004f6f10(0x01D81080,item_actor,1);
    return 1;
  }
  local_24 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c840(item_actor,g_CAmmoClassInfo.name_hash);
  if (local_24 != 0) {
    core_mission_cpp_FUN_004f6f10(0x01D81080,item_actor,1);
    return 1;
  }
  pCVar8 = (CDemonActor *)
           core_actor_cpp_castToClassHash_FUN_0040c840(item_actor,g_CWeaponClassInfo.name_hash);
  if (pCVar8 != (CDemonActor *)0x0) {
    iVar5 = (CMelee *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar8,g_CMeleeClassInfo.name_hash);
    if (iVar5 != 0) {
      *(CDemonActor **)(this_ptr + *(int *)(this_ptr + 0x10) * 4 + 0x14) = item_actor;
      pCVar4 = 0x01D81080;
      *(int *)(this_ptr + 0x10) = *(int *)(this_ptr + 0x10) + 1;
      core_mission_cpp_FUN_004f6f10(pCVar4,item_actor,0);
      (*((item_actor->vtable)._ub)->onPickup)(item_actor,(CDemonActor *)this_ptr);
      return 1;
    }
    local_1c = 0;
    if (0 < *(int *)(this_ptr + 0x10)) {
      local_1c = 0;
      pCVar17 = this_ptr;
      do {
        pCVar9 = (CDemonActor *)
                 core_actor_cpp_castToClassHash_FUN_0040c840
                           (*(uint *)(pCVar17 + 0x14),g_CWeaponClassInfo.name_hash);
        if (pCVar9 != (CDemonActor *)0x0) {
          pcVar11 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(pCVar9);
          pcVar7 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(pCVar8);
          iVar5 = _strcmp(pcVar7,pcVar11);
          if ((iVar5 == 0) &&
             (*(int *)(pCVar9[4].actor_name + 0xc) == *(int *)(pCVar8[4].actor_name + 0xc))) {
            *(int *)(pCVar9[4].actor_name + 8) =
                 *(int *)(pCVar9[4].actor_name + 8) + *(int *)(pCVar8[4].actor_name + 8);
            engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"Found same weapon, increasing ammoCount\n");
            core_mission_cpp_FUN_004f6f10(0x01D81080,item_actor,1);
            return 1;
          }
        }
        pCVar17 = pCVar17 + 4;
        local_1c = local_1c + 1;
      } while (local_1c < *(int *)(this_ptr + 0x10));
    }
    bVar3 = false;
    local_20 = 0;
    if (0 < *(int *)(this_ptr + 0x10)) {
      local_18 = this_ptr;
      do {
        iVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (*(uint *)(local_18 + 0x14),g_CAmmoClassInfo.name_hash);
        if (iVar5 != 0) {
          pcVar11 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(pCVar8);
          iVar6 = _strcmp((char *)(iVar5 + 0x2d4),pcVar11);
          if (iVar6 == 0) {
            pcVar11 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(pCVar8);
            pCVar9 = (CDemonActor *)core_actor_cpp_createActorByName_FUN_0040c4f0(pcVar11);
            core_mission_cpp_CDemonMission_generateActorName_FUN_004f7530(0x01D81080,pCVar9);
            (*((pCVar9->vtable)._ub)->setup)(pCVar9);
            *(uint *)(pCVar9[4].actor_name + 8) = *(uint *)(iVar5 + 0x314);
            *(uint *)(pCVar9[4].actor_name + 0xc) = *(uint *)(iVar5 + 0x318);
            (*((pCVar9->vtable)._ub)->pickup)(pCVar9,*(CDemonActor **)(this_ptr + 4));
            (*((pCVar9->vtable)._ub)->onPickup)(pCVar9,(CDemonActor *)this_ptr);
            core_actor_cpp_FUN_004085a0(*(uint *)(local_18 + 0x14));
            *(CDemonActor **)(local_18 + 0x14) = pCVar9;
            pcVar11 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408870(pCVar8);
            bVar3 = true;
            engine_console_cpp_FUN_00441ff0
                      (g_CConsolePtr,"Converting existing ammo for %s to weapon\n",pcVar11);
          }
        }
        local_18 = local_18 + 4;
        local_20 = local_20 + 1;
      } while (local_20 < *(int *)(this_ptr + 0x10));
    }
    if (bVar3) {
      core_mission_cpp_FUN_004f6f10(0x01D81080,pCVar8,1);
      return 1;
    }
  }
  *(CDemonActor **)(this_ptr + *(int *)(this_ptr + 0x10) * 4 + 0x14) = item_actor;
  pCVar4 = 0x01D81080;
  *(int *)(this_ptr + 0x10) = *(int *)(this_ptr + 0x10) + 1;
  core_mission_cpp_FUN_004f69a0(pCVar4,item_actor);
  (*((item_actor->vtable)._ub)->onPickup)(item_actor,(CDemonActor *)this_ptr);
  if ((pCVar8 != (CDemonActor *)0x0) && (*(int *)(this_ptr + 0x338) == 0)) {
    core_inv_cpp_CInventory_selectWeapon_FUN_004dbb40(this_ptr,pCVar8,5,1);
  }
  return 1;
}
