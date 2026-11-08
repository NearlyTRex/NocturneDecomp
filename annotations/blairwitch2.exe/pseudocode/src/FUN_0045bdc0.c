// Name: FUN_0045bdc0
// Address: 0045bdc0
// Address Range: [[0045bdc0, 0045c958]]
// Convention: unknown
// Signature: void FUN_0045bdc0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045bdc0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int aiStackY_1060 [1013];
  uint local_78;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_54;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar5 = 0;
  if ((*(int *)(param_1 + 0x2d04) == 9) && (*(int *)(param_1 + 0x2698) == 0)) {
    *(uint *)(param_1 + 0x2d08) = 0;
    *(uint *)(param_1 + 0x2d04) = 0;
  }
  local_3c = -1;
  local_1c = 0;
  if (*(int *)(param_1 + 0x25618) != 0) {
    *(uint *)(param_1 + 0x25640) = 0;
    goto LAB_0045be11;
  }
  if (*(int *)(param_1 + 0x25640) == 0) goto LAB_0045be11;
  if (*(int *)(param_1 + 0x2698) == 0) {
    local_1c = *(int *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4);
    iVar4 = FUN_0040c8f0(local_1c,_DAT_01d0557c);
    if (iVar4 != 0) {
      local_3c = 6;
    }
LAB_0045c19d:
    if (local_1c != 0) goto LAB_0045be11;
  }
  else {
    iVar4 = FUN_0040c8f0(*(int *)(param_1 + 0x2698),_DAT_026681a0);
    if (iVar4 != 0) {
      local_1c = *(int *)(param_1 + 0x2498c + *(int *)(param_1 + 0x247e4) * 4);
      goto LAB_0045c19d;
    }
    local_1c = 0;
  }
  if (local_3c < 0) {
    *(uint *)(param_1 + 0x25640) = 0;
  }
LAB_0045be11:
  local_24 = param_1 + 0x2437c;
  local_30 = param_1 + 0x2b4;
  local_40 = param_1 + 0x20;
  local_34 = 0;
  do {
    if (param_2 <= 0.0) {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x256a4);
    if (iVar4 == 1) {
      local_14 = (float)FUN_005038a0(local_30,0x13);
      if ((float)_DAT_005d065f <= local_14) {
        local_18 = 0;
        iVar4 = local_18;
      }
      else {
LAB_0045be77:
        local_18 = 5;
        iVar4 = local_18;
      }
    }
    else if (*(int *)(param_1 + 0x2561c) == 0) {
      if (iVar4 == 2) {
        local_18 = 6;
        iVar4 = local_18;
      }
      else if (iVar4 == 3) {
        local_18 = 4;
        local_14 = (float)FUN_0042a5a0(param_1,4);
        iVar4 = local_18;
        if ((float)_DAT_005d0657 < local_14) {
          fVar1 = param_2 * (float)_DAT_005d064f + *(float *)(param_1 + 0x25650);
          *(float *)(param_1 + 0x25650) = fVar1;
          if (0x428C0000 < fVar1) {
            *(float *)(param_1 + 0x25650) = 0x428C0000;
          }
          if (*(int *)(param_1 + 0x10a74) != 0) {
            return;
          }
          iVar4 = 0;
        }
      }
      else {
        iVar4 = FUN_004dccb0(local_24);
        if ((iVar4 == 0) || (*(int *)(param_1 + 0x255e8) != 0)) {
          iVar4 = FUN_004dccb0(local_24);
          if ((iVar4 == 0) || (*(int *)(param_1 + 0x255e8) != 1)) {
            iVar4 = FUN_004dccb0(local_24);
            if ((iVar4 == 0) && (*(int *)(param_1 + 0x255e8) == 2)) {
              local_18 = 8;
              iVar4 = local_18;
            }
            else {
              iVar4 = FUN_004dccb0(local_24);
              if ((iVar4 == 0) && (*(int *)(param_1 + 0x255e8) == 1)) {
                local_18 = 3;
                iVar4 = local_18;
              }
              else if (local_3c < 0) {
                iVar4 = *(int *)(param_1 + 0x25698);
                if (iVar4 == local_1c) {
                  if (*(int *)(param_1 + 0x25698) == 0) {
switchD_0045c465_caseD_3:
                    iVar4 = 0;
                  }
                  else {
                    switch(*(uint *)(*(int *)(param_1 + 0x25698) + 0x43c)) {
                    case 0:
                    case 5:
                      iVar4 = 2;
                      break;
                    case 1:
                      iVar4 = 0xb;
                      break;
                    case 2:
                      iVar4 = 9;
                      break;
                    default:
                      goto switchD_0045c465_caseD_3;
                    case 4:
                      iVar4 = 10;
                      break;
                    case 6:
                    case 7:
                    case 8:
                    case 0xd:
                      iVar4 = 6;
                      break;
                    case 10:
                    case 0xb:
                      iVar4 = 0xe;
                    }
                  }
                }
                else if (iVar4 == 0) {
                  iVar4 = 0;
                  if (local_1c != 0) {
                    switch(*(uint *)(local_1c + 0x43c)) {
                    case 0:
                    case 5:
                    case 0xc:
                      iVar4 = 1;
                      break;
                    default:
                      iVar4 = 3;
                      break;
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 0xd:
                      iVar4 = FUN_0040c8f0(local_1c,_DAT_01d0557c);
                      if ((iVar4 == 0) || (*(int *)(iVar4 + 0x6e4) == 0)) {
                        iVar4 = 0;
                      }
                      else {
                        iVar4 = 5;
                      }
                    }
                  }
                }
                else {
                  switch(*(uint *)(iVar4 + 0x43c)) {
                  case 0:
                  case 5:
                  case 0xc:
                    iVar4 = 1;
                    break;
                  default:
                    iVar4 = 3;
                    break;
                  case 6:
                  case 7:
                  case 8:
                  case 9:
                  case 0xd:
                    iVar4 = FUN_0040c8f0(iVar4,_DAT_01d0557c);
                    if ((iVar4 == 0) || (*(int *)(iVar4 + 0x6e4) == 0)) {
                      iVar4 = 0;
                    }
                    else {
                      iVar4 = 5;
                    }
                  }
                }
              }
              else {
                iVar2 = *(int *)(param_1 + 0x25698);
                if (iVar2 == 0) {
                  iVar4 = local_18;
                  if (((local_1c != 0) && (*(int *)(param_1 + 0x25640) != 0)) &&
                     (iVar4 = 0, local_1c != 0)) {
                    switch(*(uint *)(local_1c + 0x43c)) {
                    case 0:
                    case 5:
                    case 0xc:
                      iVar4 = 1;
                      break;
                    default:
                      iVar4 = 3;
                      break;
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 0xd:
                      iVar4 = FUN_0040c8f0(local_1c,_DAT_01d0557c);
                      if ((iVar4 == 0) || (*(int *)(iVar4 + 0x6e4) == 0)) {
                        iVar4 = 0;
                      }
                      else {
                        iVar4 = 5;
                      }
                    }
                  }
                }
                else if (iVar2 == local_1c) {
                  local_18 = local_3c;
                  iVar4 = local_18;
                }
                else {
                  iVar4 = 0;
                  if (iVar2 != 0) {
                    switch(*(uint *)(iVar2 + 0x43c)) {
                    case 0:
                    case 5:
                    case 0xc:
                      iVar4 = 1;
                      break;
                    default:
                      iVar4 = 3;
                      break;
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 0xd:
                      iVar4 = FUN_0040c8f0(iVar2,_DAT_01d0557c);
                      if ((iVar4 == 0) || (*(int *)(iVar4 + 0x6e4) == 0)) {
                        iVar4 = 0;
                      }
                      else {
                        iVar4 = 5;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            local_18 = 8;
            iVar4 = local_18;
          }
        }
        else {
          local_18 = 3;
          iVar4 = local_18;
        }
      }
    }
    else if (*(int *)(param_1 + 0x2698) == 0) {
      if (*(int *)(param_1 + 0x25640) == 0) goto LAB_0045be77;
      local_18 = 6;
      iVar4 = local_18;
    }
    else {
      local_18 = 0;
      iVar4 = local_18;
    }
    local_18 = iVar4;
    local_28 = *(int *)(param_1 + 0x2d08);
    local_20 = FUN_0042a0c0(param_1,&param_2,local_18);
    iVar4 = *(int *)(param_1 + 0x2860 + *(int *)(param_1 + 0x2d04) * 0x38);
    iVar2 = FUN_00503860(local_30);
    iVar4 = iVar4 * 0x118 + iVar2 + 0x1c28;
    switch(*(uint *)(param_1 + 0x2d04)) {
    case 4:
    case 5:
    case 6:
      if (((local_28 < 0x3e99999a) && (0x3e999999 < *(int *)(param_1 + 0x2d08))) &&
         (iVar4 = *(int *)(param_1 + 0x25698), iVar4 != 0)) {
        (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x80))(iVar4,2);
      }
      if (((local_28 < 0x3ecccccd) && (0x3ecccccc < *(int *)(param_1 + 0x2d08))) &&
         (iVar4 = *(int *)(param_1 + 0x25698), iVar4 != 0)) {
        (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x80))(iVar4,2);
      }
      if (((local_28 < 0x3f000000) && (0x3effffff < *(int *)(param_1 + 0x2d08))) &&
         (iVar4 = *(int *)(param_1 + 0x25698), iVar4 != 0)) {
        (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x80))(iVar4,2);
      }
      break;
    case 7:
      if (((local_28 < 0x3f333333) && (0x3f333332 < *(int *)(param_1 + 0x2d08))) &&
         (iVar4 = *(int *)(param_1 + 0x25698), iVar4 != 0)) {
        (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x80))(iVar4,2);
      }
      if ((local_28 < 0x3e99999a) && (0x3e999999 < *(int *)(param_1 + 0x2d08))) {
        FUN_0055ae50(0x0264B290,param_1,"axeswing0?.wav",local_40);
      }
      break;
    case 8:
      if (((local_28 < 0x3e99999a) && (0x3e999999 < *(int *)(param_1 + 0x2d08))) &&
         (iVar4 = FUN_0040c8f0(*(uint *)(param_1 + 0x25698),_DAT_02668734), iVar4 != 0)) {
        FUN_005a6cf0(iVar4);
      }
      break;
    case 0xc:
      iVar2 = FUN_0040c8f0(*(uint *)(param_1 + 0x25698),_DAT_01c225d8);
      if (((iVar2 != 0) && (iVar3 = FUN_0047a1a0(iVar2), iVar3 == 0)) &&
         (local_14 = (float)(0xb / (longlong)*(int *)(iVar4 + 100)),
         (float)(int)local_14 <= *(float *)(param_1 + 0x2d08))) {
        FUN_0047a150(iVar2);
      }
      break;
    case 0xd:
      if ((*(int *)(param_1 + 0x256a4) == 3) &&
         (local_14 = (float)(0xb / (longlong)*(int *)(iVar4 + 100)),
         (float)(int)local_14 <= *(float *)(param_1 + 0x2d08))) {
        FUN_0045bba0(param_1);
        local_60 = local_78;
        *(uint *)((int)&stack0xffffffa4 + (uint)bVar5 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff8c + (uint)bVar5 * -8);
        *(uint *)(&stack0xffffffa8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
             *(uint *)(&stack0xffffff90 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
        local_38 = FUN_0040c8f0(*(uint *)(param_1 + 0x25698),_DAT_01c225d8);
        local_2c = local_38;
        if (local_38 != 0) {
          FUN_00408cf0(param_1,&stack0xffffffa0);
          local_6c = local_54;
          *(uint *)((int)&stack0xffffff98 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xffffffb0 + (uint)bVar5 * -8);
          *(uint *)((int)&stack0xffffff9c + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)(&stack0xffffffb4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
          if ((uint *)(local_2c + 0x6d8) != &stack0xffffff94) {
            *(uint *)(local_2c + 0x6d8) = local_6c;
            *(uint *)(local_2c + 0x6dc) = local_68;
            *(uint *)(local_2c + 0x6e0) = local_64;
          }
          (**(code **)(*(int *)(local_38 + 0x2b0) + 0xec))(local_38);
          *(uint *)(param_1 + 0x25698) = 0;
        }
        if (*(int *)(param_1 + 0x2698) != 0) {
          (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,1,&stack0xffffffa0);
        }
        *(uint *)(param_1 + 0x256a4) = 0;
        *(uint *)(param_1 + 0x25650) = 0x41200000;
      }
      if (1.0 <= *(float *)(param_1 + 0x2d08)) {
        *(uint *)(param_1 + 0x2d04) = 0;
        *(uint *)(param_1 + 0x2d08) = 0;
      }
    }
    if (-1 < local_20) {
      iVar4 = *(int *)(param_1 + 0x25698);
      if (iVar4 != local_1c) {
        if (iVar4 != 0) {
          switch(*(uint *)(iVar4 + 0x43c)) {
          case 0:
          case 5:
          case 0xc:
            iVar4 = 1;
            break;
          default:
            iVar4 = 3;
            break;
          case 6:
          case 7:
          case 8:
          case 9:
          case 0xd:
            iVar4 = FUN_0040c8f0(iVar4,_DAT_01d0557c);
            if ((iVar4 == 0) || (*(int *)(iVar4 + 0x6e4) == 0)) {
              iVar4 = 0;
            }
            else {
              iVar4 = 5;
            }
          }
          if (iVar4 == local_20) {
            (**(code **)(*(int *)(*(int *)(param_1 + 0x25698) + 0x2b0) + 0xe4))
                      (*(int *)(param_1 + 0x25698),1);
            *(uint *)(param_1 + 0x25698) = 0;
          }
        }
        if (*(int *)(param_1 + 0x25640) != 0) {
          if (local_1c == 0) {
LAB_0045bfdc:
            iVar4 = 0;
          }
          else {
            switch(*(uint *)(local_1c + 0x43c)) {
            case 0:
            case 5:
            case 0xc:
              iVar4 = 1;
              break;
            default:
              iVar4 = 3;
              break;
            case 6:
            case 7:
            case 8:
            case 9:
            case 0xd:
              iVar4 = FUN_0040c8f0(local_1c,_DAT_01d0557c);
              if ((iVar4 == 0) || (*(int *)(iVar4 + 0x6e4) == 0)) goto LAB_0045bfdc;
              iVar4 = 5;
            }
          }
          if ((iVar4 == local_20) && (*(int *)(param_1 + 0x25698) = local_1c, local_1c != 0)) {
            (**(code **)(*(int *)(local_1c + 0x2b0) + 0xe4))(local_1c,2);
          }
        }
      }
      if ((*(int *)(param_1 + 0x256a4) == 1) && (local_20 == 5)) {
        FUN_004cff90(param_1,1);
        *(uint *)(param_1 + 0x256a4) = 0;
      }
      iVar4 = *(int *)(param_1 + 0x2561c);
      if (iVar4 != 0) {
        if (local_20 != 0) {
          if (local_20 == 5) {
            FUN_004db8e0(local_24,iVar4,0);
            FUN_004fc200(0x01D182F0,*(uint *)(param_1 + 0x2561c));
            FUN_00428b10(param_1,1,*(uint *)(param_1 + 0x2561c),0,0);
          }
          else if (local_20 == 6) {
            FUN_004db8e0(local_24,iVar4,0);
            FUN_004fc200(0x01D182F0,*(uint *)(param_1 + 0x2561c));
            FUN_00428b10(param_1,1,*(uint *)(param_1 + 0x2561c),0,0);
            *(uint *)(param_1 + 0x25698) = 0;
            *(uint *)(param_1 + 0x25640) = 0;
            *(uint *)(param_1 + 0x2d04) = 2;
            *(uint *)(param_1 + 0x2d08) = 0;
          }
        }
        FUN_00503620(local_30,0x14,1);
        *(uint *)(param_1 + 0x256a4) = 6;
        *(uint *)(param_1 + 0x2561c) = 0;
      }
      if (local_20 == 8) {
        iVar4 = FUN_004dccb0(local_24);
        if (iVar4 == 0) {
LAB_0045c087:
          *(uint *)(param_1 + 0x255e8) = 1;
        }
        else {
          *(uint *)(param_1 + 0x255e8) = 2;
        }
      }
      else if ((local_20 == 3) && (*(int *)(param_1 + 0x255e8) < 2)) {
        iVar4 = FUN_004dccb0(local_24);
        if (iVar4 != 0) goto LAB_0045c087;
        *(uint *)(param_1 + 0x255e8) = 0;
      }
      if ((*(int *)(param_1 + 0x256a4) == 7) && (local_20 == 6)) {
        *(uint *)(param_1 + 0x256a4) = 0;
      }
      if ((((3 < *(int *)(param_1 + 0x2d04)) && (*(int *)(param_1 + 0x2d04) < 9)) &&
          (*(int *)(param_1 + 0x256a4) == 0)) && (*(int *)(param_1 + 0x2d08) == 0x3f800000)) {
        *(uint *)(param_1 + 0x2d04) = 3;
        *(uint *)(param_1 + 0x2d08) = 0x3f800000;
      }
      if (((*(int *)(param_1 + 0x2d04) == 0) && ((*(uint *)(param_1 + 0x2d08) & 0x7fffffff) == 0))
         && (*(int *)(param_1 + 0x25640) == 0)) {
        *(uint *)(param_1 + 0x2d04) = 2;
        *(uint *)(param_1 + 0x2d08) = 0;
      }
      if ((*(int *)(param_1 + 0x2d04) == 0xf) && (*(int *)(param_1 + 0x2d08) == 0x3f800000)) {
        *(uint *)(param_1 + 0x2d04) = 1;
        *(uint *)(param_1 + 0x2d08) = 0x3f800000;
      }
      FUN_0042a620(param_1,local_18);
    }
    local_34 = local_34 + 1;
    if (1 < local_34) {
      return;
    }
  } while( true );
}
