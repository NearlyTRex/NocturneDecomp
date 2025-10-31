// Name: cockpit_ckptutil.c_setLineBlendingDisabled_FUN_00434670
// Address: 00434670
// Address Range: [[00434670, 00434679]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_setLineBlendingDisabled_FUN_00434670(int disabled)
// Globals:
//   int g_LineBlendingDisabled

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_setLineBlendingDisabled_FUN_00434670(int disabled)

{
  g_LineBlendingDisabled = disabled;
  return;
}


// Assembly code:
// 00434670: MOV EAX,dword ptr [ESP + 0x4]
//   Label: cockpit_ckptutil.c_setLineBlendingDisabled_FUN_00434670
//   XREF to: Stack[0x4] (READ)
// 00434674: MOV [0x00824e20],EAX
//   XREF to: 00824e20 (WRITE)
// 00434679: RET
