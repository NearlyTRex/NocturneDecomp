// Name: core_actor.cpp_CActorProperty_FUN_0040ea50
// Address: 0040ea50
// Address Range: [[0040ea50, 0040ee2b]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CActorProperty_FUN_0040ea50(void)

#include "nocturne.h"

void __cdecl core_actor_cpp_CActorProperty_FUN_0040ea50(void)

{
  char cVar1;
  float *pfVar2;
  CMotionList *pCVar3;
  SMotion *pSVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  uint *in_stack_00000004;
  char *in_stack_0000000c;
  
  switch(*in_stack_00000004) {
  case 0:
    sprintf(in_stack_0000000c,"%d");
    break;
  case 1:
    sprintf
              (in_stack_0000000c,"%g",(double)*(float *)in_stack_00000004[0x1a]);
    return;
  case 2:
    pfVar2 = (float *)in_stack_00000004[0x1a];
    sprintf
              (in_stack_0000000c,"%g,%g,%g",(double)*pfVar2,(double)pfVar2[1],
               (double)pfVar2[2]);
    return;
  case 3:
  case 8:
  case 0xb:
  case 0xc:
    pcVar9 = (char *)in_stack_00000004[0x1a];
    do {
      cVar1 = *pcVar9;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  case 4:
    if (*(int *)in_stack_00000004[0x1a] == 0) {
      pcVar9 = "FALSE";
    }
    else {
      pcVar9 = "TRUE";
    }
    do {
      cVar1 = *pcVar9;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  case 5:
    pcVar9 = *(char **)in_stack_00000004[0x1a];
    if (pcVar9 != (char *)0x0) {
      do {
        cVar1 = *pcVar9;
        *in_stack_0000000c = cVar1;
        if (cVar1 == '\0') {
          return;
        }
        cVar1 = pcVar9[1];
        pcVar9 = pcVar9 + 2;
        in_stack_0000000c[1] = cVar1;
        in_stack_0000000c = in_stack_0000000c + 2;
      } while (cVar1 != '\0');
      return;
    }
    pcVar9 = "(none)";
    do {
      cVar1 = *pcVar9;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  case 6:
    pcVar9 = (char *)(in_stack_00000004[0x1a] + 0x78);
    do {
      cVar1 = *pcVar9;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  case 7:
    pcVar9 = (char *)(in_stack_00000004[0x1a] + 0x2260);
    do {
      cVar1 = *pcVar9;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  case 9:
    pcVar9 = core_ground_cpp_getGroundTypeName_FUN_004eed80(*(int *)in_stack_00000004[0x1a]);
    do {
      cVar1 = *pcVar9;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  case 10:
    pcVar9 = (char *)in_stack_00000004[0x1a];
    if (*pcVar9 == '\0') {
      pcVar9 = "(none)";
    }
    do {
      cVar1 = *pcVar9;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  case 0xd:
    pCVar3 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                       ((CMotionController *)in_stack_00000004[0x1a]);
    pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       ((CMotionController *)in_stack_00000004[0x1a]);
    sprintf
              (in_stack_0000000c,"%s (%s)",pSVar4,pCVar3->state_names + pSVar4->state_index);
    return;
  case 0xe:
    if ((int)in_stack_00000004[0x17] < *(int *)in_stack_00000004[0x1a]) {
      piVar6 = (int *)in_stack_00000004[0x1a] + in_stack_00000004[0x17] * 10 + 1;
      do {
        iVar10 = *piVar6;
        *in_stack_0000000c = (char)iVar10;
        if ((char)iVar10 == '\0') {
          return;
        }
        cVar1 = *(char *)((int)piVar6 + 1);
        piVar6 = (int *)((int)piVar6 + 2);
        in_stack_0000000c[1] = cVar1;
        in_stack_0000000c = in_stack_0000000c + 2;
      } while (cVar1 != '\0');
      return;
    }
    pcVar9 = "(add a new cloth)";
    do {
      cVar1 = *pcVar9;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  case 0xf:
    pcVar9 = "??????";
    iVar10 = 0;
    if (0 < (int)in_stack_00000004[0x17]) {
      puVar7 = (uint *)in_stack_00000004[0x18];
      do {
        if (*(int *)in_stack_00000004[0x1a] == puVar7[1]) {
          pcVar9 = (char *)*puVar7;
          break;
        }
        iVar10 = iVar10 + 1;
        puVar7 = puVar7 + 2;
      } while (iVar10 < (int)in_stack_00000004[0x17]);
    }
    do {
      cVar1 = *pcVar9;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  case 0x10:
    piVar6 = (int *)in_stack_00000004[0x1a];
    iVar10 = in_stack_00000004[0x17];
    if (iVar10 < *piVar6) {
      sprintf
                (in_stack_0000000c,"%s => %s",piVar6 + iVar10 * 0x19 + 1,
                 piVar6 + iVar10 * 0x19 + 0x7e);
      return;
    }
    pcVar9 = "(add a rule)";
    do {
      cVar1 = *pcVar9;
      *in_stack_0000000c = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      in_stack_0000000c[1] = cVar1;
      in_stack_0000000c = in_stack_0000000c + 2;
    } while (cVar1 != '\0');
    return;
  case 0x11:
    (*(code *)in_stack_00000004[0x1a])();
    return;
  case 0x12:
    pcVar8 = "(none)";
    pcVar9 = in_stack_0000000c;
    do {
      cVar1 = *pcVar8;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    iVar10 = 0;
    pcVar9 = in_stack_0000000c;
    do {
      if ((*(uint *)in_stack_00000004[0x1a] & *(uint *)((int)&0x00000001 + iVar10)) != 0) {
        if (in_stack_0000000c < pcVar9) {
          iVar5 = sprintf(pcVar9,", ");
          pcVar9 = pcVar9 + iVar5;
        }
        iVar5 = sprintf(pcVar9,"%s");
        pcVar9 = pcVar9 + iVar5;
      }
      iVar10 = iVar10 + 8;
    } while (iVar10 != 0x10);
    break;
  default:
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0xfc9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unknown CActorProperty type: %d");
    return;
  }
  return;
}
