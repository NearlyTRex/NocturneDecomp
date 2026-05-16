// Name: engine_model.c_byteswapMRGLData_FUN_00527e40
// Address: 00527e40
// MANUAL RECONSTRUCTION
// Address Range: [[00527e40, 00527eb2]]
// Convention: __cdecl
// Signature: void __cdecl engine_model_c_byteswapMRGLData_FUN_00527e40(SMRGLHeaderExtended *mrgl_data,int data_size)

#include "nocturne.h"

void __cdecl engine_model_c_byteswapMRGLData_FUN_00527e40(SMRGLHeaderExtended *mrgl_data,int data_size)

{
  uint uVar1;
  int iVar2;
  
joined_r0x00527e4d:
  if (data_size < 1) {
    return;
  }
  do {
    uVar1 = engine_model_c_getMRGLSize_FUN_00528700(mrgl_data);
    switch((mrgl_data->base).type) {
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
      goto switchD_00527e66_caseD_40;
    default:
      g_CurrentFilename = "..\\engine\\model.c";
      g_CurrentLineNumber = 0xce;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Need a new byteswap!");
      data_size = data_size - uVar1;
      mrgl_data = (SMRGLHeaderExtended *)((char *)mrgl_data + uVar1);
      if (data_size < 1) {
        return;
      }
    }
  } while( true );
switchD_00527e66_caseD_40:
  data_size = data_size - uVar1;
  mrgl_data = (SMRGLHeaderExtended *)((char *)mrgl_data + uVar1);
  goto joined_r0x00527e4d;
}
