// Name: core_curtain.cpp_CCurtain_process_FUN_0043ebf0
// Address: 0043ebf0
// Address Range: [[0043ebf0, 0043f32e]]
// Convention: unknown
// Signature: void core_curtain_cpp_CCurtain_process_FUN_0043ebf0(int param_1,float param_2)

#include "nocturne.h"

void core_curtain_cpp_CCurtain_process_FUN_0043ebf0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float fStack_e0;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_7c;
  float local_78;
  float local_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  uint uStack_14;
  
  if (((*(int *)(param_1 + 0x65b28) != 0) || (*(int *)(param_1 + 0x188) != 0)) &&
     (*(uint *)(param_1 + 0x65b28) = 0, *(int *)(param_1 + 0x1f0) != 0)) {
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x18c);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x188) = 1;
    }
    iVar3 = _strcmp(param_1 + 0x18c,"none");
    if ((iVar3 == 0) || (*(int *)(param_1 + 0x188) != 0)) {
      if (*(int *)(param_1 + 0x65b24) != 0) {
        uStack_14 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x38))(param_1,0x3dcccccd,0);
        *(uint *)(param_1 + 0x65b20) = uStack_14;
      }
      *(float *)(param_1 + 0x1c720) = 1.0 / param_2;
      local_ac = 99999.0;
      local_a8 = 99999.0;
      local_a4 = 99999.0;
      local_7c = -99999.0;
      local_78 = -99999.0;
      local_74 = -99999.0;
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x1fc)) {
        iVar6 = param_1 + 0x200;
        do {
          if (*(float *)(iVar6 + 0x20) < local_ac) {
            local_ac = *(float *)(iVar6 + 0x20);
          }
          if (*(float *)(iVar6 + 0x24) < local_a8) {
            local_a8 = *(float *)(iVar6 + 0x24);
          }
          if (*(float *)(iVar6 + 0x28) < local_a4) {
            local_a4 = *(float *)(iVar6 + 0x28);
          }
          if (local_7c < *(float *)(iVar6 + 0x20)) {
            local_7c = *(float *)(iVar6 + 0x20);
          }
          if (local_78 < *(float *)(iVar6 + 0x24)) {
            local_78 = *(float *)(iVar6 + 0x24);
          }
          if (local_74 < *(float *)(iVar6 + 0x28)) {
            local_74 = *(float *)(iVar6 + 0x28);
          }
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + 0x74;
        } while (iVar3 < *(int *)(param_1 + 0x1fc));
      }
      iStack_28 = 0;
      DAT_0077bdb8 = 0;
      for (iStack_20 = 0; iVar3 = DAT_0077bdb8, iStack_20 < *(int *)(0x01E57284 + 0x14ecb0);
          iStack_20 = iStack_20 + 1) {
        iVar6 = *(int *)(0x01E57284 + iStack_28 + 0x14ecb4);
        iVar4 = DAT_0077bdb8 * 10;
        if (&DAT_0077bdbc + DAT_0077bdb8 * 3 != (uint *)(iVar6 + 0x20)) {
          (&DAT_0077bdbc)[DAT_0077bdb8 * 3] = *(uint *)(iVar6 + 0x20);
          (&DAT_0077bdc0)[iVar3 * 3] = *(uint *)(iVar6 + 0x24);
          (&DAT_0077bdc4)[iVar3 * 3] = *(uint *)(iVar6 + 0x28);
        }
        (&DAT_0077c26c)[iVar4] = 0;
        iVar4 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0x34))(iVar6,&DAT_0077c26c + iVar4);
        if (((iVar4 == 2) && (*(float *)(iVar6 + 0x24) <= local_78)) &&
           ((local_a8 <= *(float *)(iVar6 + 0x24) + (float)(&DAT_0077c284)[iVar3 * 10] &&
            ((((local_ac <= *(float *)(iVar6 + 0x20) + (float)(&DAT_0077c288)[iVar3 * 10] &&
               (*(float *)(iVar6 + 0x20) - (float)(&DAT_0077c288)[iVar3 * 10] <= local_7c)) &&
              (local_a4 <= *(float *)(iVar6 + 0x28) + (float)(&DAT_0077c288)[iVar3 * 10])) &&
             (*(float *)(iVar6 + 0x28) - (float)(&DAT_0077c288)[iVar3 * 10] <= local_74)))))) {
          DAT_0077bdb8 = DAT_0077bdb8 + 1;
        }
        iStack_28 = iStack_28 + 4;
      }
      *(uint *)(param_1 + 0x65b2c) = 1;
      if ((iVar3 == 0) && (*(int *)(param_1 + 0x188) == 0)) {
        *(uint *)(param_1 + 0x65b2c) = 0;
        if (0 < *(int *)(param_1 + 0x1fc)) {
          pfVar5 = (float *)(param_1 + 0x200);
          iVar3 = 0;
          do {
            if (pfVar5[0x1a] == 0.0) {
              if ((float)0.10000000000000001 <
                  SQRT(pfVar5[0xd] * pfVar5[0xd] +
                       pfVar5[0xb] * pfVar5[0xb] + pfVar5[0xc] * pfVar5[0xc])) {
                *(uint *)(param_1 + 0x65b2c) = 1;
                goto LAB_0043eed9;
              }
              fStack_b8 = pfVar5[3] - *pfVar5;
              fStack_b4 = pfVar5[4] - pfVar5[1];
              fStack_b0 = pfVar5[5] - pfVar5[2];
              if ((float)0.10000000000000001 <
                  SQRT(fStack_b0 * fStack_b0 + fStack_b8 * fStack_b8 + fStack_b4 * fStack_b4)) {
                *(uint *)(param_1 + 0x65b2c) = 1;
                goto LAB_0043eed9;
              }
            }
            iVar3 = iVar3 + 1;
            pfVar5 = pfVar5 + 0x1d;
          } while (iVar3 < *(int *)(param_1 + 0x1fc));
        }
        if (*(int *)(param_1 + 0x65b2c) == 0) {
          return;
        }
      }
LAB_0043eed9:
      iVar6 = 0;
      iVar3 = param_1;
      if (0 < *(int *)(param_1 + 0x1fc)) {
        do {
          *(uint *)(iVar3 + 0x26c) = 0;
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + 0x74;
        } while (iVar6 < *(int *)(param_1 + 0x1fc));
      }
      iStack_1c = 0;
      if (0 < *(int *)(param_1 + 0x1fc)) {
        iVar3 = param_1 + 0x200;
        do {
          if (*(int *)(iVar3 + 0x68) == 0) {
            fVar2 = (float)0.84999999999999998;
            *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) * fVar2;
            fVar1 = *(float *)(param_1 + 0x65b10);
            *(float *)(iVar3 + 0x34) = fVar2 * *(float *)(iVar3 + 0x34);
            *(float *)(iVar3 + 0x30) = fVar1 * *(float *)(iVar3 + 0x30);
            fStack_e0 = *(float *)(param_1 + 0x65b0c);
            if (*(int *)(iVar3 + 0x70) != 0) {
              fStack_e0 = fStack_e0 * (float)4;
            }
            fStack_44 = 1.0 / param_2;
            fStack_18 = fStack_e0 * (float)0.03125;
            fStack_64 = -*(float *)(iVar3 + 0x2c);
            fStack_60 = -*(float *)(iVar3 + 0x30);
            fStack_4c = fStack_64 * fStack_44;
            fStack_50 = 1.0 / fStack_18;
            fStack_48 = fStack_60 * fStack_44;
            fStack_5c = -*(float *)(iVar3 + 0x34);
            fStack_44 = fStack_5c * fStack_44;
            fStack_94 = fStack_4c * fStack_18;
            fStack_90 = fStack_48 * fStack_18;
            fStack_8c = fStack_44 * fStack_18;
            fStack_70 = fStack_94 * 5.0811852348229435e-315._0_4_ + 0.0;
            fStack_58 = fStack_70 * fStack_50;
            fStack_6c = (0.0 - fStack_e0) + fStack_90 * 5.0811852348229435e-315._0_4_;
            fStack_68 = fStack_8c * 5.0811852348229435e-315._0_4_ + 0.0;
            fStack_54 = fStack_6c * fStack_50;
            fStack_50 = fStack_68 * fStack_50;
            if (&fStack_c4 != &fStack_58) {
              fStack_c4 = fStack_58;
              fStack_c0 = fStack_54;
              fStack_bc = fStack_50;
            }
            pfVar5 = (float *)(iVar3 + 0x2c);
            *pfVar5 = *pfVar5 + fStack_c4 * param_2;
            *(float *)(iVar3 + 0x30) = *(float *)(iVar3 + 0x30) + fStack_c0 * param_2;
            fStack_a0 = *pfVar5 * param_2;
            *(float *)(iVar3 + 0x34) = *(float *)(iVar3 + 0x34) + fStack_bc * param_2;
            fStack_9c = *(float *)(iVar3 + 0x30) * param_2;
            fStack_98 = param_2 * *(float *)(iVar3 + 0x34);
            *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + fStack_a0;
            *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) + fStack_9c;
            *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) + fStack_98;
            core_curtain_cpp_CCurtain_solveConstraints_FUN_0043e290(param_1,iVar3);
          }
          iVar3 = iVar3 + 0x74;
          iStack_1c = iStack_1c + 1;
        } while (iStack_1c < *(int *)(param_1 + 0x1fc));
      }
      iStack_30 = param_1 + 0x200;
      iStack_24 = 0;
      do {
        iVar6 = 0;
        iVar3 = iStack_30;
        if (0 < *(int *)(param_1 + 0x1fc)) {
          do {
            if (*(int *)(iVar3 + 0x68) == 0) {
              core_curtain_cpp_CCurtain_solveConstraints_FUN_0043e290(param_1,iVar3);
            }
            iVar6 = iVar6 + 1;
            iVar3 = iVar3 + 0x74;
          } while (iVar6 < *(int *)(param_1 + 0x1fc));
        }
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 < 3);
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x1fc)) {
        pfVar5 = (float *)(param_1 + 0x65b18);
        iVar6 = param_1 + 0x200;
        do {
          iStack_2c = iVar6;
          if (*(int *)(iStack_2c + 0x6c) != 0) {
            *(float *)(iStack_2c + 0x2c) = *pfVar5 * *(float *)(iStack_2c + 0x2c);
            *(float *)(iStack_2c + 0x30) = *pfVar5 * *(float *)(iStack_2c + 0x30);
            *(float *)(iStack_2c + 0x34) = *pfVar5 * *(float *)(iStack_2c + 0x34);
          }
          if ((uint *)(iStack_2c + 0x38) != (uint *)(iStack_2c + 0x20)) {
            *(uint *)(iStack_2c + 0x38) = *(uint *)(iStack_2c + 0x20);
            *(uint *)(iStack_2c + 0x3c) = *(uint *)(iStack_2c + 0x24);
            *(uint *)(iStack_2c + 0x40) = *(uint *)(iStack_2c + 0x28);
          }
          iVar3 = iVar3 + 1;
          iVar6 = iStack_2c + 0x74;
        } while (iVar3 < *(int *)(param_1 + 0x1fc));
      }
      if (*(int *)(param_1 + 0x65b24) != 0) {
        iVar6 = 0;
        iVar3 = 0;
        if (0 < *(int *)(param_1 + 0x1fc)) {
          iVar4 = param_1 + 0x200;
          do {
            if (*(float *)(iVar4 + 0x24) <= *(float *)(param_1 + 0x65b20)) {
              iVar3 = iVar3 + 1;
            }
            iVar6 = iVar6 + 1;
            iVar4 = iVar4 + 0x74;
          } while (iVar6 < *(int *)(param_1 + 0x1fc));
        }
        if (iVar3 == *(int *)(param_1 + 0x1fc)) {
          *(uint *)(param_1 + 0x1f0) = 0;
        }
      }
      core_curtain_cpp_CCurtain_updateLocalPositions_FUN_0043e1e0(param_1);
    }
  }
  return;
}
