// Name: engine_pod.cpp_FUN_0053b250
// Address: 0053b250
// Address Range: [[0053b250, 0053be29]]
// Convention: unknown
// Signature: undefined4 engine_pod_cpp_FUN_0053b250(CPodFile *param_1,char *param_2,char *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_pod_cpp_FUN_0053b250(CPodFile *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  int *piVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  byte bVar13;
  bool bVar14;
  byte *puVar15;
  byte local_8cc [256];
  char local_7cc [260];
  int local_6c8;
  uint local_6c0;
  char local_6b8 [512];
  byte local_4b8 [8];
  char local_4b0 [80];
  uint local_460;
  uint local_45c;
  uint local_454;
  char local_450 [80];
  char local_400 [80];
  uint local_3b0;
  ulong local_3a8;
  uint local_3a4;
  byte local_398 [4];
  char local_394 [256];
  uint local_294;
  char local_288 [256];
  byte local_188 [8];
  char local_180 [80];
  uint local_130;
  uint local_12c;
  uint local_128;
  char local_124 [80];
  char local_d4 [64];
  uint local_94;
  uint local_90;
  uint local_88;
  CInStreamFile local_84;
  char local_58 [32];
  int local_38;
  uint local_34;
  char local_30;
  char local_2f;
  char local_2e;
  char local_2d;
  int local_2c;
  ulong local_28;
  ulong local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar13 = 0;
  local_1c = 0;
  pcVar2 = "(Unknown error)";
  pcVar12 = local_6b8;
  for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(uint *)pcVar12 = *(uint *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar12 = pcVar12 + 4;
  }
  unkclass_instream_cpp_CInStreamFile_ctor_FUN_005a08d0(&local_84);
  engine_pod_cpp_CPodFile_cleanup_FUN_0053be30(param_1);
  engine_dosio_cpp_FUN_00478e20(local_8cc,0,param_2);
  iVar6 = engine_dosio_cpp_findFileNormally_FUN_00478ef0(local_8cc);
  if (iVar6 == 0) {
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("File not found");
    FUN_005bfb40(local_6b8,pcVar2);
  }
  else {
    puVar15 = &param_1->field_0x4;
    pcVar2 = local_7cc;
    pcVar12 = puVar15;
    do {
      cVar1 = *pcVar2;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    *(uint *)&param_1->field_0x104 = local_6c0;
    iVar6 = support_trstream_cpp_FUN_005a0f60(&local_84,puVar15,1);
    if (iVar6 == 0) {
      pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Unable to open file '%s'");
      FUN_005bfb40(local_6b8,pcVar2,puVar15);
    }
    else {
      engine_dosio_cpp_FUN_00479580(param_2,(char *)0x0,(char *)0x0,(char *)0x0,local_288);
      iVar6 = _stricmp(local_288,&DAT_005ed68a);
      if ((iVar6 == 0) ||
         (iVar6 = _stricmp(local_288,&DAT_005ed68e), iVar6 == 0)) {
        iVar6 = unkaddr_0059f520_cpp_FUN_005a0c10(&local_84,local_398,0x110);
        if (iVar6 == 0x110) {
          pcVar12 = local_394;
          pcVar2 = &param_1->field_0x108;
          *(uint *)&param_1->field_0x410 = local_294;
          do {
            cVar1 = *pcVar12;
            *pcVar2 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar12[1];
            pcVar12 = pcVar12 + 2;
            pcVar2[1] = cVar1;
            pcVar2 = pcVar2 + 2;
          } while (cVar1 != '\0');
          iVar6 = *(int *)&param_1->field_0x410;
          if ((iVar6 < 0) || (9999999 < iVar6)) goto LAB_0053b6fe;
          pvVar3 = FUN_005c08d0(iVar6 * 0x14);
          *(void **)&param_1->field_0x414 = pvVar3;
          if (pvVar3 == (void *)0x0) goto LAB_0053b733;
          uVar9 = 0;
          local_28 = 0;
          local_20 = 0;
          if (0 < *(int *)&param_1->field_0x410) {
            local_2c = 0;
            do {
              iVar6 = unkaddr_0059f520_cpp_FUN_005a0c10(&local_84,local_d4,0x50);
              if (iVar6 != 0x50) goto LAB_0053b40b;
              *(ulong *)(*(int *)&param_1->field_0x414 + local_2c) = uVar9;
              uVar7 = 0xffffffff;
              pcVar2 = local_d4;
              do {
                if (uVar7 == 0) break;
                uVar7 = uVar7 - 1;
                cVar1 = *pcVar2;
                pcVar2 = pcVar2 + (uint)bVar13 * -2 + 1;
              } while (cVar1 != '\0');
              uVar9 = uVar9 + ~uVar7;
              if ((int)local_28 < (int)uVar9) {
                local_28 = (*(int *)&param_1->field_0x410 - local_20) * 0x30 + uVar9;
                pvVar3 = realloc(*(void **)&param_1->field_0x418,local_28)
                ;
                if (pvVar3 == (void *)0x0) goto LAB_0053b733;
                *(void **)&param_1->field_0x418 = pvVar3;
              }
              pcVar2 = local_d4;
              pcVar12 = (char *)(*(int *)&param_1->field_0x418 +
                                *(int *)(*(int *)&param_1->field_0x414 + local_2c));
              do {
                cVar1 = *pcVar2;
                *pcVar12 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar2[1];
                pcVar2 = pcVar2 + 2;
                pcVar12[1] = cVar1;
                pcVar12 = pcVar12 + 2;
              } while (cVar1 != '\0');
              *(uint *)(local_2c + *(int *)&param_1->field_0x414 + 4) = local_94;
              *(uint *)(local_2c + *(int *)&param_1->field_0x414 + 8) = local_90;
              *(uint *)(local_2c + *(int *)&param_1->field_0x414 + 0x10) = local_88;
              iVar6 = local_2c + 0x14;
              local_20 = local_20 + 1;
              *(uint *)(local_2c + *(int *)&param_1->field_0x414 + 0xc) =
                   *(uint *)&param_1->field_0x104;
              local_2c = iVar6;
            } while (local_20 < *(int *)&param_1->field_0x410);
          }
          bVar14 = SBORROW4(uVar9,local_28);
          iVar6 = uVar9 - local_28;
LAB_0053b650:
          if (bVar14 != iVar6 < 0) {
            local_1c = 1;
          }
LAB_0053b65d:
          iVar6 = unkaddr_0059f520_cpp_FUN_005a0d70(&local_84);
          if (iVar6 != 0) {
            unkaddr_0059f520_cpp_FUN_005a0dc0(&local_84);
            if (local_1c != 0) {
              pvVar3 = realloc(*(void **)&param_1->field_0x418,uVar9);
              *(void **)&param_1->field_0x418 = pvVar3;
              if (pvVar3 == (void *)0x0) {
                _DAT_01d1d400 = "..\\engine\\pod.cpp";
                _DAT_01d1d404 = 0x2d5;
                core_main_c_FUN_005030e0("realloc returns NULL shrinking filenameBlockSize to fit.");
              }
            }
            iVar6 = 0;
            if (0 < *(int *)&param_1->field_0x410) {
              iVar8 = 0;
              do {
                piVar4 = (int *)(*(int *)&param_1->field_0x414 + iVar8);
                if ((*piVar4 < 0) || ((int)uVar9 <= *piVar4)) goto LAB_0053b6fe;
                *piVar4 = *(int *)&param_1->field_0x418 + *piVar4;
                iVar6 = iVar6 + 1;
                iVar8 = iVar8 + 0x14;
              } while (iVar6 < *(int *)&param_1->field_0x410);
            }
            _qsort
                      (*(uint *)&param_1->field_0x414,*(uint *)&param_1->field_0x410,
                       0x14,engine_pod_cpp_FUN_0053b230);
            uVar10 = 1;
            goto LAB_0053b330;
          }
        }
      }
      else {
        iVar6 = unkaddr_0059f520_cpp_FUN_005a0c10(&local_84,&local_30,4);
        if (iVar6 == 4) {
          unkaddr_0059f520_cpp_FUN_005a0d00(&local_84,0,0);
          if ((((local_30 == 'P') && (local_2f == 'O')) && (local_2e == 'D')) && (local_2d == '3'))
          {
            iVar6 = unkaddr_0059f520_cpp_FUN_005a0c10(&local_84,local_4b8,0x120);
            if (iVar6 == 0x120) {
              pcVar12 = local_4b0;
              pcVar2 = &param_1->field_0x108;
              *(uint *)param_1 = 300;
              do {
                cVar1 = *pcVar12;
                *pcVar2 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar12[1];
                pcVar12 = pcVar12 + 2;
                pcVar2[1] = cVar1;
                pcVar2 = pcVar2 + 2;
              } while (cVar1 != '\0');
              pcVar12 = local_450;
              pcVar2 = &param_1->field_0x208;
              do {
                cVar1 = *pcVar12;
                *pcVar2 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar12[1];
                pcVar12 = pcVar12 + 2;
                pcVar2[1] = cVar1;
                pcVar2 = pcVar2 + 2;
              } while (cVar1 != '\0');
              pcVar12 = local_400;
              pcVar2 = &param_1->field_0x308;
              do {
                cVar1 = *pcVar12;
                *pcVar2 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar12[1];
                pcVar12 = pcVar12 + 2;
                pcVar2[1] = cVar1;
                pcVar2 = pcVar2 + 2;
              } while (cVar1 != '\0');
              *(uint *)&param_1->field_0x410 = local_460;
              *(uint *)&param_1->field_0x41c = local_45c;
              *(uint *)&param_1->field_0x424 = local_3a4;
              iVar6 = *(int *)&param_1->field_0x410;
              *(uint *)&param_1->field_0x408 = local_454;
              if ((iVar6 < 0) || (9999999 < iVar6)) goto LAB_0053b6fe;
              pvVar3 = FUN_005c08d0(iVar6 * 0x14);
              *(void **)&param_1->field_0x414 = pvVar3;
              if (pvVar3 == (void *)0x0) {
LAB_0053b733:
                pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                                    ("Out of memory");
                pcVar2 = local_6b8;
                do {
                  cVar1 = *pcVar12;
                  *pcVar2 = cVar1;
                  if (cVar1 == '\0') break;
                  cVar1 = pcVar12[1];
                  pcVar12 = pcVar12 + 2;
                  pcVar2[1] = cVar1;
                  pcVar2 = pcVar2 + 2;
                } while (cVar1 != '\0');
                goto LAB_0053b2de;
              }
              unkaddr_0059f520_cpp_FUN_005a0d00(&local_84,local_3b0,0);
              uVar11 = *(int *)&param_1->field_0x410 * 0x14;
              uVar7 = unkaddr_0059f520_cpp_FUN_005a0c10
                                (&local_84,*(uint *)&param_1->field_0x414,uVar11);
              if (uVar7 == uVar11) {
                uVar7 = uVar7 ^ uVar11;
                if (0 < *(int *)&param_1->field_0x410) {
                  do {
                    uVar7 = uVar7 + 1;
                  } while ((int)uVar7 < *(int *)&param_1->field_0x410);
                }
                if (((int)local_3a8 < *(int *)&param_1->field_0x410) ||
                   (*(int *)&param_1->field_0x410 * 0x100 < (int)local_3a8)) goto LAB_0053b6fe;
                pvVar3 = FUN_005c08d0(local_3a8);
                *(void **)&param_1->field_0x418 = pvVar3;
                if (pvVar3 == (void *)0x0) goto LAB_0053b733;
                uVar9 = unkaddr_0059f520_cpp_FUN_005a0c10(&local_84,pvVar3,local_3a8);
                if (uVar9 == local_3a8) {
                  uVar10 = unkaddr_0059f520_cpp_FUN_005a0d50(&local_84);
                  *(uint *)&param_1->field_0x428 = uVar10;
                  *(int *)&param_1->field_0x420 =
                       *(int *)&param_1->field_0x428 + *(int *)&param_1->field_0x424 * 0x108;
                  uVar9 = local_3a8;
                  goto LAB_0053b65d;
                }
              }
            }
          }
          else if ((((local_30 == 'P') && (local_2f == 'O')) && (local_2e == 'D')) &&
                  (local_2d == '2')) {
            iVar6 = unkaddr_0059f520_cpp_FUN_005a0c10(&local_84,local_188,0x60);
            if (iVar6 == 0x60) {
              pcVar12 = local_180;
              pcVar2 = &param_1->field_0x108;
              *(uint *)param_1 = 200;
              do {
                cVar1 = *pcVar12;
                *pcVar2 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar12[1];
                pcVar12 = pcVar12 + 2;
                pcVar2[1] = cVar1;
                pcVar2 = pcVar2 + 2;
              } while (cVar1 != '\0');
              *(uint *)&param_1->field_0x410 = local_130;
              iVar6 = *(int *)&param_1->field_0x410;
              *(uint *)&param_1->field_0x41c = local_12c;
              if ((iVar6 < 0) || (9999999 < iVar6)) goto LAB_0053b6fe;
              pvVar3 = FUN_005c08d0(iVar6 * 0x14);
              *(void **)&param_1->field_0x414 = pvVar3;
              if (pvVar3 == (void *)0x0) goto LAB_0053b733;
              uVar11 = *(int *)&param_1->field_0x410 * 0x14;
              uVar7 = unkaddr_0059f520_cpp_FUN_005a0c10(&local_84,pvVar3,uVar11);
              if (uVar7 == uVar11) {
                uVar7 = uVar7 ^ uVar11;
                if (0 < *(int *)&param_1->field_0x410) {
                  do {
                    uVar7 = uVar7 + 1;
                  } while ((int)uVar7 < *(int *)&param_1->field_0x410);
                }
                iVar6 = *(int *)&param_1->field_0x410;
                uVar9 = *(int *)(*(int *)&param_1->field_0x414 + 8) + -0x60 + iVar6 * -0x14;
                if (((int)uVar9 < iVar6) || (iVar6 * 0x100 < (int)uVar9)) goto LAB_0053b6fe;
                pvVar3 = FUN_005c08d0(uVar9);
                *(void **)&param_1->field_0x418 = pvVar3;
                if (pvVar3 == (void *)0x0) goto LAB_0053b733;
                uVar5 = unkaddr_0059f520_cpp_FUN_005a0c10(&local_84,pvVar3,uVar9);
                if (uVar5 == uVar9) {
                  iVar6 = *(int *)&param_1->field_0x414 +
                          (*(int *)&param_1->field_0x410 + -1) * 0x14;
                  *(int *)&param_1->field_0x420 = *(int *)(iVar6 + 8) + *(int *)(iVar6 + 4);
                  goto LAB_0053b65d;
                }
              }
            }
          }
          else {
            *(uint *)param_1 = 1;
            iVar6 = unkaddr_0059f520_cpp_FUN_005a0c10(&local_84,&local_128,0x54);
            if (iVar6 == 4) {
              pcVar12 = local_124;
              pcVar2 = &param_1->field_0x108;
              *(uint *)&param_1->field_0x410 = local_128;
              do {
                cVar1 = *pcVar12;
                *pcVar2 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar12[1];
                pcVar12 = pcVar12 + 2;
                pcVar2[1] = cVar1;
                pcVar2 = pcVar2 + 2;
              } while (cVar1 != '\0');
              iVar6 = *(int *)&param_1->field_0x410;
              if ((-1 < iVar6) && (iVar6 < 10000000)) {
                pvVar3 = FUN_005c08d0(iVar6 * 0x14);
                *(void **)&param_1->field_0x414 = pvVar3;
                if (pvVar3 != (void *)0x0) {
                  uVar9 = 0;
                  local_24 = 0;
                  local_18 = 0;
                  if (0 < *(int *)&param_1->field_0x410) {
                    local_14 = 0;
                    do {
                      iVar6 = unkaddr_0059f520_cpp_FUN_005a0c10(&local_84,local_58,0x28);
                      if (iVar6 != 0x28) goto LAB_0053b40b;
                      *(ulong *)(*(int *)&param_1->field_0x414 + local_14) = uVar9;
                      uVar7 = 0xffffffff;
                      pcVar2 = local_58;
                      do {
                        if (uVar7 == 0) break;
                        uVar7 = uVar7 - 1;
                        cVar1 = *pcVar2;
                        pcVar2 = pcVar2 + (uint)bVar13 * -2 + 1;
                      } while (cVar1 != '\0');
                      uVar9 = uVar9 + ~uVar7;
                      if ((int)local_24 < (int)uVar9) {
                        local_24 = (*(int *)&param_1->field_0x410 - local_18) * 0x30 + uVar9;
                        pvVar3 = realloc
                                           (*(void **)&param_1->field_0x418,local_24);
                        if (pvVar3 == (void *)0x0) goto LAB_0053b733;
                        *(void **)&param_1->field_0x418 = pvVar3;
                      }
                      if (((local_38 < 0) || (999999999 < local_38)) ||
                         ((local_6c8 < local_38 ||
                          ((local_34 < 0x54 || (local_6c8 - local_38 < (int)local_34))))))
                      goto LAB_0053b6fe;
                      pcVar2 = local_58;
                      pcVar12 = (char *)(*(int *)&param_1->field_0x418 +
                                        *(int *)(*(int *)&param_1->field_0x414 + local_14));
                      do {
                        cVar1 = *pcVar2;
                        *pcVar12 = cVar1;
                        if (cVar1 == '\0') break;
                        cVar1 = pcVar2[1];
                        pcVar2 = pcVar2 + 2;
                        pcVar12[1] = cVar1;
                        pcVar12 = pcVar12 + 2;
                      } while (cVar1 != '\0');
                      *(int *)(local_14 + *(int *)&param_1->field_0x414 + 4) = local_38;
                      *(uint *)(*(int *)&param_1->field_0x414 + local_14 + 8) = local_34;
                      *(uint *)(*(int *)&param_1->field_0x414 + local_14 + 0x10) = 0;
                      iVar6 = local_14 + *(int *)&param_1->field_0x414;
                      local_14 = local_14 + 0x14;
                      *(uint *)(iVar6 + 0xc) = *(uint *)&param_1->field_0x104;
                      local_18 = local_18 + 1;
                    } while (local_18 < *(int *)&param_1->field_0x410);
                  }
                  bVar14 = SBORROW4(uVar9,local_24);
                  iVar6 = uVar9 - local_24;
                  goto LAB_0053b650;
                }
                goto LAB_0053b733;
              }
LAB_0053b6fe:
              pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                                  ("File is corrupt");
              pcVar2 = local_6b8;
              do {
                cVar1 = *pcVar12;
                *pcVar2 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar12[1];
                pcVar12 = pcVar12 + 2;
                pcVar2[1] = cVar1;
                pcVar2 = pcVar2 + 2;
              } while (cVar1 != '\0');
              goto LAB_0053b2de;
            }
          }
        }
      }
LAB_0053b40b:
      pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_00531090
                          ("I/O Error accessing file, or file is corrupt");
      pcVar2 = local_6b8;
      do {
        cVar1 = *pcVar12;
        *pcVar2 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar12[1];
        pcVar12 = pcVar12 + 2;
        pcVar2[1] = cVar1;
        pcVar2 = pcVar2 + 2;
      } while (cVar1 != '\0');
    }
  }
LAB_0053b2de:
  unkaddr_0059f520_cpp_FUN_005a0dc0(&local_84);
  engine_pod_cpp_CPodFile_cleanup_FUN_0053be30(param_1);
  if (param_3 != (char *)0x0) {
    pcVar2 = local_6b8;
    do {
      cVar1 = *pcVar2;
      *param_3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      param_3[1] = cVar1;
      param_3 = param_3 + 2;
    } while (cVar1 != '\0');
  }
  uVar10 = 0;
LAB_0053b330:
  unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50(&local_84,0);
  return uVar10;
}
