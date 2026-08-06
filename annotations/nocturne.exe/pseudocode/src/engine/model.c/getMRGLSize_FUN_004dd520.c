// Name: engine_model.c_getMRGLSize_FUN_004dd520
// Address: 004dd520
// Address Range: [[004dd520, 004dd684]]
// Convention: __cdecl
// Signature: int __cdecl engine_model_c_getMRGLSize_FUN_004dd520(SMRGLHeaderExtended *header)

#include "nocturne.h"

int __cdecl engine_model_c_getMRGLSize_FUN_004dd520(SMRGLHeaderExtended *header)

{
  int iVar1;
  char local_100 [256];
  
  iVar1 = (header->base).type;
  switch(iVar1) {
  case 0:
    return 4;
  case 1:
    return 0x10;
  case 2:
  case 3:
    return header->child_count * 0xc + 0xc;
  case 4:
    return header->child_count * 8 + 0xc;
  case 5:
  case 6:
  case 7:
  case 8:
  case 0xf:
  case 0x15:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x21:
  case 0x24:
  case 0x25:
  case 0x2e:
  case 0x2f:
  case 0x3b:
    return (header->base).count * 4 + 0x18;
  case 9:
    return 0x20;
  case 10:
  case 0xb:
  case 0x12:
  case 0x14:
  case 0x3d:
    return 8;
  case 0xc:
    return 0x1c;
  case 0xd:
    return 0x18;
  case 0xe:
  case 0x11:
  case 0x18:
  case 0x1e:
  case 0x22:
  case 0x29:
  case 0x33:
  case 0x34:
  case 0x38:
  case 0x3e:
  case 0x41:
  case 0x42:
    return (header->base).count * 0xc + 0x18;
  case 0x10:
    return 0x14;
  default:
    _sprintf(local_100,"MRGLSize: Bad type : %d",iVar1);
    g_CurrentFilename = "..\\engine\\model.c";
    g_CurrentLineNumber = 603;
    core_main_c_displayErrorAndQuit_FUN_004c8440(local_100);
    return 4;
  case 0x16:
    return (header->base).count * 4 + 8;
  case 0x17:
    return 0xc;
  case 0x1d:
    return header->child_count * 0x20 + 0x1c;
  case 0x1f:
    return header->child_count * 4 + 0xc;
  case 0x20:
    return 0x158;
  case 0x26:
    return 0x3d60;
  case 0x40:
    return 0x48;
  }
}
