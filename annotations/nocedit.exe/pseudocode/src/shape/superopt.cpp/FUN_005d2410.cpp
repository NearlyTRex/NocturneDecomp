// Name: shape_superopt.cpp_FUN_005d2410
// Address: 005d2410
// Address Range: [[005d2410, 005d24fe]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d2410()
// Globals:
//   TerminatedCString s_Unable_to_add_polygons_t_00654355
// Function calls:
//   crt_memory.c_realloc_FUN_00601df0
//   shape_superopt.cpp_CPoly_dtor_FUN_005cc660
//   shape_superopt.cpp_FUN_005cc620
//   shape_superopt.cpp_SomethingAboutLogTXTCreate_FUN_005c7910

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d2410(undefined4 param_1, undefined4 param_2) */

undefined4 shape_superopt_cpp_FUN_005d2410(void)

{
  void *pvVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  uint uVar4;
  CPoly *pCVar5;
  char *pcVar6;
  byte bVar7;
  int in_stack_00000004;
  int in_stack_00000008;
  CPoly local_78;
  uint local_10;
  
  bVar7 = 0;
  pvVar1 = crt_memory_c_realloc_FUN_00601df0
                     (*(void **)(in_stack_00000004 + 0xc),
                      (*(int *)(in_stack_00000004 + 8) + in_stack_00000008) * 0x68);
  if (pvVar1 != (void *)0x0) {
    *(void **)(in_stack_00000004 + 0xc) = pvVar1;
    shape_superopt_cpp_FUN_005cc620();
    iVar3 = *(uint *)(in_stack_00000004 + 8) * 0x68;
    for (local_10 = *(uint *)(in_stack_00000004 + 8);
        uVar4 = *(int *)(in_stack_00000004 + 8) + in_stack_00000008, local_10 < uVar4;
        local_10 = local_10 + 1) {
      pCVar5 = &local_78;
      pcVar6 = (char *)(*(int *)(in_stack_00000004 + 0xc) + iVar3);
      for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pCVar5->field0_0x0;
        pCVar5 = (CPoly *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
        pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pcVar6 = pCVar5->field0_0x0[0];
        pCVar5 = (CPoly *)((int)pCVar5 + (uint)bVar7 * -2 + 1);
        pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
      }
      (*(code *)**(undefined4 **)(*(int *)(in_stack_00000004 + 0xc) + iVar3 + 100))();
      iVar3 = iVar3 + 0x68;
    }
    *(uint *)(in_stack_00000004 + 8) = uVar4;
    shape_superopt_cpp_CPoly_dtor_FUN_005cc660(&local_78);
    return 1;
  }
  shape_superopt_cpp_SomethingAboutLogTXTCreate_FUN_005c7910();
  return 0;
}


// Assembly code:
// 005d2410: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d2410
// 005d2411: PUSH ESI
// 005d2412: PUSH EBP
// 005d2413: SUB ESP,0x6c
// 005d2416: MOV EBX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[0x4] (READ)
// 005d241a: MOV EDX,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x8] (READ)
// 005d2421: MOV ESI,dword ptr [EBX + 0x8]
// 005d2424: ADD ESI,EDX
// 005d2426: LEA EAX,[ESI*0x4 + 0x0]
// 005d242d: SUB EAX,ESI
// 005d242f: SHL EAX,0x2
// 005d2432: ADD EAX,ESI
// 005d2434: SHL EAX,0x3
// 005d2437: PUSH EAX
// 005d2438: MOV ECX,dword ptr [EBX + 0xc]
// 005d243b: PUSH ECX
// 005d243c: CALL crt_memory.c_realloc_FUN_00601df0
//   XREF to: 00601df0 (UNCONDITIONAL_CALL)
// 005d2441: ADD ESP,0x8
// 005d2444: TEST EAX,EAX
// 005d2446: JZ 0x005d24c6
//   XREF to: 005d24c6 (CONDITIONAL_JUMP)
// 005d244c: PUSH EDI
// 005d244d: PUSH 0x0
// 005d244f: MOV dword ptr [EBX + 0xc],EAX
// 005d2452: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x78] (DATA)
// 005d2456: PUSH EAX
// 005d2457: CALL shape_superopt.cpp_FUN_005cc620
//   XREF to: 005cc620 (UNCONDITIONAL_CALL)
// 005d245c: ADD ESP,0x8
// 005d245f: MOV EAX,dword ptr [EBX + 0x8]
// 005d2462: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005d2466: LEA EBP,[EAX*0x4 + 0x0]
// 005d246d: SUB EBP,EAX
// 005d246f: SHL EBP,0x2
// 005d2472: ADD EBP,EAX
// 005d2474: SHL EBP,0x3
// 005d2477: MOV EDI,dword ptr [ESP + 0x84]
//   Label: LAB_005d2477
//   XREF to: Stack[0x8] (READ)
// 005d247e: MOV ESI,dword ptr [EBX + 0x8]
// 005d2481: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x10] (READ)
// 005d2485: ADD ESI,EDI
// 005d2487: CMP ESI,EAX
// 005d2489: JBE 0x005d24de
//   XREF to: 005d24de (CONDITIONAL_JUMP)
// 005d248b: MOV ECX,0x68
// 005d2490: MOV EDI,dword ptr [EBX + 0xc]
// 005d2493: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x78] (DATA)
// 005d2497: ADD EDI,EBP
// 005d2499: PUSH EDI
// 005d249a: MOV EAX,ECX
// 005d249c: SHR ECX,0x2
// 005d249f: MOVSD.REP ES:EDI,ESI
// 005d24a1: MOV CL,AL
// 005d24a3: AND CL,0x3
// 005d24a6: MOVSB.REP ES:EDI,ESI
// 005d24a8: POP EDI
// 005d24a9: MOV ESI,dword ptr [EBX + 0xc]
// 005d24ac: PUSH EBX
// 005d24ad: ADD ESI,EBP
// 005d24af: PUSH ESI
// 005d24b0: MOV EAX,dword ptr [ESI + 0x64]
// 005d24b3: CALL dword ptr [EAX]
// 005d24b5: ADD ESP,0x8
// 005d24b8: MOV EDX,dword ptr [ESP + 0x6c]
// 005d24bc: INC EDX
// 005d24bd: ADD EBP,0x68
// 005d24c0: MOV dword ptr [ESP + 0x6c],EDX
// 005d24c4: JMP 0x005d2477
//   XREF to: 005d2477 (UNCONDITIONAL_JUMP)
// 005d24c6: PUSH 0x654355
//   Label: LAB_005d24c6
//   XREF to: 00654355 (DATA)
// 005d24cb: CALL shape_superopt.cpp_SomethingAboutLogTXTCreate_FUN_005c7910
//   XREF to: 005c7910 (UNCONDITIONAL_CALL)
// 005d24d0: XOR ESI,ESI
// 005d24d2: ADD ESP,0x4
// 005d24d5: MOV EAX,ESI
// 005d24d7: ADD ESP,0x6c
// 005d24da: POP EBP
// 005d24db: POP ESI
// 005d24dc: POP EBX
// 005d24dd: RET
// 005d24de: PUSH 0x0
//   Label: LAB_005d24de
// 005d24e0: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x78] (DATA)
// 005d24e4: PUSH EAX
// 005d24e5: MOV dword ptr [EBX + 0x8],ESI
// 005d24e8: MOV ESI,0x1
// 005d24ed: CALL shape_superopt.cpp_CPoly_dtor_FUN_005cc660
//   XREF to: 005cc660 (UNCONDITIONAL_CALL)
// 005d24f2: ADD ESP,0x8
// 005d24f5: POP EDI
// 005d24f6: MOV EAX,ESI
// 005d24f8: ADD ESP,0x6c
// 005d24fb: POP EBP
// 005d24fc: POP ESI
// 005d24fd: POP EBX
// 005d24fe: RET
