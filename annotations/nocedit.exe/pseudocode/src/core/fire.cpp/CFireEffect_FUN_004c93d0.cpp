// Name: core_fire.cpp_CFireEffect_FUN_004c93d0
// Address: 004c93d0
// Address Range: [[004c93d0, 004c93f9]]
// Convention: __cdecl
// Signature: int core_fire.cpp_CFireEffect_FUN_004c93d0(CFireEffect * this_ptr)
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056cbfc [UNCONDITIONAL_CALL]
// Globals:
//   CMuzzleFlash[20] g_CFireEffectMuzzleFlashes
//   undefined4 DAT_02d58a60
//   undefined4 DAT_02d58abc

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireEffect_FUN_004c93d0(CFireEffect *this_ptr)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  if (g_CFireEffectMuzzleFlashes[0].field0_0x0._0_4_ != 1) {
    do {
      if (0x72f < iVar2 + 0x5c) {
        return 0;
      }
      pcVar1 = g_CFireEffectMuzzleFlashes[1].field0_0x0 + iVar2;
      iVar2 = iVar2 + 0x5c;
    } while (*(int *)pcVar1 != 1);
  }
  return 1;
}


// Assembly code:
// 004c93d0: MOV EDX,dword ptr [0x02d58a04]
//   Label: core_fire.cpp_CFireEffect_FUN_004c93d0
//   XREF to: 02d58a04 (READ)
// 004c93d6: XOR EAX,EAX
// 004c93d8: CMP EDX,0x1
// 004c93db: JZ 0x004c93f4
//   XREF to: 004c93f4 (CONDITIONAL_JUMP)
// 004c93dd: ADD EAX,0x5c
//   Label: LAB_004c93dd
// 004c93e0: CMP EAX,0x730
// 004c93e5: JGE 0x004c64b0
//   XREF to: 004c64b0 (CONDITIONAL_JUMP)
// 004c93eb: CMP dword ptr [EAX + 0x2d58a04],0x1
//   XREF to: 02d58a60 (READ)
//   XREF to: 02d58abc (READ)
// 004c93f2: JNZ 0x004c93dd
//   XREF to: 004c93dd (CONDITIONAL_JUMP)
// 004c93f4: MOV EAX,0x1
//   Label: LAB_004c93f4
// 004c93f9: RET
