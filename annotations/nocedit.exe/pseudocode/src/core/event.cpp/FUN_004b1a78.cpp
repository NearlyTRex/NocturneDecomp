// Name: core_event.cpp_FUN_004b1a78
// Address: 004b1a78
// Address Range: [[004b1a78, 004b1a95] [004b1a98, 004b1ab2] [004b1ab4, 004b1ad1] [004b1ad4, 004b1ae9] [004b1aec, 004b1b13]]
// Convention: __cdecl
// Signature: void core_event.cpp_FUN_004b1a78(void)

#include "nocturne.h"

void __cdecl core_event_cpp_FUN_004b1a78(void)

{
  longlong lVar1;
  uint uVar2;
  int in_ECX;
  longlong *plVar3;
  int in_EDX;
  longlong *plVar4;
  uint unaff_EBX;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  uint in_stack_00000004;
  
  uVar2 = in_stack_00000004 - 8;
  if (7 < in_stack_00000004 && uVar2 != 0) {
    uVar5 = -in_ECX & 7;
    plVar3 = (longlong *)(in_ECX + uVar5);
    plVar4 = (longlong *)(in_EDX + uVar5);
    bVar6 = uVar2 < uVar5;
    uVar2 = uVar2 - uVar5;
    bVar7 = uVar2 == 0;
    switch(uVar5) {
    case 1:
      *(byte *)((int)plVar3 + -1) = *(byte *)((int)plVar4 + -1);
      if (bVar6 || bVar7) {
                    /* WARNING: Could not recover jumptable at 0x004b1b0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&DAT_00679d94 + uVar2 * 4))(uVar2,plVar4,unaff_EBX);
        return;
      }
      break;
    case 3:
      *(byte *)((int)plVar3 + -3) = *(byte *)((int)plVar4 + -3);
    case 2:
      *(ushort *)((int)plVar3 + -2) = *(ushort *)((int)plVar4 + -2);
      if (bVar6 || bVar7) {
                    /* WARNING: Could not recover jumptable at 0x004b1afd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&DAT_00679d94 + uVar2 * 4))(uVar2,plVar4,unaff_EBX);
        return;
      }
      break;
    case 5:
      *(byte *)((int)plVar3 + -5) = *(byte *)((int)plVar4 + -5);
      *(uint *)((int)plVar3 + -4) = *(uint *)((int)plVar4 + -4);
      if (bVar6 || bVar7) {
                    /* WARNING: Could not recover jumptable at 0x004b1ae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&DAT_00679d94 + uVar2 * 4))(uVar2,plVar4,unaff_EBX);
        return;
      }
      break;
    case 7:
      *(byte *)((int)plVar3 + -7) = *(byte *)((int)plVar4 + -7);
    case 6:
      *(ushort *)((int)plVar3 + -6) = *(ushort *)((int)plVar4 + -6);
    case 4:
      *(uint *)((int)plVar3 + -4) = *(uint *)((int)plVar4 + -4);
      if (bVar6 || bVar7) {
                    /* WARNING: Could not recover jumptable at 0x004b1acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(&DAT_00679d94 + uVar2 * 4))(uVar2,plVar4,unaff_EBX);
        return;
      }
    }
    while( true ) {
      lVar1 = *plVar4;
      plVar4 = plVar4 + 1;
      bVar6 = uVar2 < 8;
      uVar2 = uVar2 - 8;
      if (bVar6 || uVar2 == 0) break;
      *plVar3 = (longlong)ROUND((float10)lVar1);
      plVar3 = plVar3 + 1;
    }
    *plVar3 = (longlong)ROUND((float10)lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x004b1aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_00679d94 + uVar2 * 4))();
  return;
}
