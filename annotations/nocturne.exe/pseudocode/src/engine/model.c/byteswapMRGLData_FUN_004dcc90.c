// Name: engine_model.c_byteswapMRGLData_FUN_004dcc90
// Address: 004dcc90
// Address Range: [[004dcc90, 004dcd02]]
// Convention: unknown
// Signature: void engine_model_c_byteswapMRGLData_FUN_004dcc90(undefined4 *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_model_c_byteswapMRGLData_FUN_004dcc90(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
joined_r0x004dcc9d:
  if (param_2 < 1) {
    return;
  }
  do {
    uVar1 = engine_model_c_getMRGLSize_FUN_004dd520(param_1);
    switch(*param_1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1e:
    case 0x1f:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3d:
    case 0x3e:
    case 0x41:
    case 0x42:
      iVar2 = 0;
      if (uVar1 >> 2 != 0) {
        do {
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)(uVar1 >> 2));
      }
    case 0xd:
    case 0x1d:
    case 0x20:
    case 0x26:
    case 0x40:
      goto switchD_004dccb6_caseD_d;
    default:
      _DAT_01cc4800 = "@..\\engine\\model.c" + 1;
      _DAT_01cc4804 = 0xce;
      FUN_004c8440("Need a new byteswap!");
      param_2 = param_2 - uVar1;
      param_1 = (uint *)((int)param_1 + uVar1);
      if (param_2 < 1) {
        return;
      }
    }
  } while( true );
switchD_004dccb6_caseD_d:
  param_2 = param_2 - uVar1;
  param_1 = (uint *)((int)param_1 + uVar1);
  goto joined_r0x004dcc9d;
}
