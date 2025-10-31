// Name: cockpit_ckptutil.c_mmxOptimizedMemcpy_FUN_00431622
// Address: 00431622
// Address Range: [[00431622, 00431727]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_mmxOptimizedMemcpy_FUN_00431622(void * dest_buffer, void * src_buffer, int byte_count)
// Cross-references:
//   cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00431780 (00431780) at 00431789 [DATA]

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_00431622
          (void *dest_buffer,void *src_buffer,int byte_count)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (((uint)dest_buffer & 0x1f) != 0) {
    uVar5 = 0x20 - ((uint)dest_buffer & 0x1f);
    if (byte_count < (int)uVar5) {
      uVar5 = byte_count;
    }
    byte_count = byte_count - uVar5;
    uVar6 = uVar5 & 3;
    if (uVar6 != 0) {
      uVar5 = uVar5 - uVar6;
                    /* WARNING: Load size is inaccurate */
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)dest_buffer = *src_buffer;
        src_buffer = (undefined4 *)((int)src_buffer + 1);
        dest_buffer = (undefined4 *)((int)dest_buffer + 1);
      }
    }
    uVar5 = uVar5 >> 2;
    if (uVar5 != 0) {
                    /* WARNING: Load size is inaccurate */
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)dest_buffer = *src_buffer;
        src_buffer = (undefined4 *)((int)src_buffer + 4);
        dest_buffer = (undefined4 *)((int)dest_buffer + 4);
      }
    }
    if (byte_count == 0) {
      return;
    }
  }
  iVar7 = byte_count - 0x100;
  if (-1 < iVar7) {
    do {
      iVar8 = iVar7 + -0x100;
      bVar4 = 0xff < iVar7;
      iVar7 = iVar8;
    } while (iVar8 != 0 && bVar4);
  }
  uVar5 = (uint)byte_count >> 5;
  if (uVar5 != 0) {
    iVar7 = uVar5 * 0x20;
    do {
      iVar8 = iVar7 + -0x20;
      uVar1 = *(undefined8 *)(iVar7 + -0x18 + (int)src_buffer);
      uVar2 = *(undefined8 *)(iVar7 + -0x10 + (int)src_buffer);
      uVar3 = *(undefined8 *)(iVar7 + -8 + (int)src_buffer);
      *(undefined8 *)(iVar8 + (int)dest_buffer) = *(undefined8 *)(iVar8 + (int)src_buffer);
      *(undefined8 *)(iVar7 + -0x18 + (int)dest_buffer) = uVar1;
      *(undefined8 *)(iVar7 + -0x10 + (int)dest_buffer) = uVar2;
      *(undefined8 *)(iVar7 + -8 + (int)dest_buffer) = uVar3;
      iVar7 = iVar8;
    } while (0x1f < iVar8);
    byte_count = byte_count + uVar5 * -0x20;
    src_buffer = (void *)((int)src_buffer + uVar5 * 0x20);
    dest_buffer = (void *)((int)dest_buffer + uVar5 * 8 * 4);
  }
  if (byte_count != 0) {
    uVar6 = (uint)byte_count >> 2;
    uVar5 = uVar6;
    if (uVar6 != 0) {
                    /* WARNING: Load size is inaccurate */
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)dest_buffer = *src_buffer;
        src_buffer = (undefined4 *)((int)src_buffer + 4);
        dest_buffer = (undefined4 *)((int)dest_buffer + 4);
      }
      byte_count = byte_count + uVar6 * -4;
    }
                    /* WARNING: Load size is inaccurate */
    for (; byte_count != 0; byte_count = byte_count - 1) {
      *(undefined1 *)dest_buffer = *src_buffer;
      src_buffer = (undefined4 *)((int)src_buffer + 1);
      dest_buffer = (undefined4 *)((int)dest_buffer + 1);
    }
  }
  return;
}


// Assembly code:
// 00431622: PUSH EBP
//   Label: cockpit_ckptutil.c_mmxOptimizedMemcpy_FUN_00431622
// 00431623: MOV EBP,ESP
// 00431625: PUSH ESI
// 00431626: PUSH EDI
// 00431627: PUSH EAX
// 00431628: PUSH EBX
// 00431629: PUSH ECX
// 0043162a: PUSH EDX
// 0043162b: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0043162e: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00431631: MOV EBX,EDI
// 00431633: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00431636: AND EBX,0x1f
// 00431639: JZ 0x0043166d
//   XREF to: 0043166d (CONDITIONAL_JUMP)
// 0043163b: MOV EAX,0x20
// 00431640: NOP
// 00431641: SUB EAX,EBX
// 00431643: NOP
// 00431644: CMP EDX,EAX
// 00431646: JGE 0x0043164b
//   XREF to: 0043164b (CONDITIONAL_JUMP)
// 00431648: MOV EAX,EDX
// 0043164a: NOP
// 0043164b: SUB EDX,EAX
//   Label: LAB_0043164b
// 0043164d: MOV ECX,EAX
// 0043164f: AND ECX,0x3
// 00431652: JZ 0x00431658
//   XREF to: 00431658 (CONDITIONAL_JUMP)
// 00431654: SUB EAX,ECX
// 00431656: MOVSB.REP ES:EDI,ESI
// 00431658: SHR EAX,0x2
//   Label: LAB_00431658
// 0043165b: JZ 0x00431661
//   XREF to: 00431661 (CONDITIONAL_JUMP)
// 0043165d: MOV ECX,EAX
// 0043165f: MOVSD.REP ES:EDI,ESI
// 00431661: CMP EDX,0x0
//   Label: LAB_00431661
// 00431664: JZ 0x00431720
//   XREF to: 00431720 (CONDITIONAL_JUMP)
// 0043166a: MOV dword ptr [EBP + 0xc],ESI
//   XREF to: Stack[0x8] (WRITE)
// 0043166d: MOV ECX,EDX
//   Label: LAB_0043166d
// 0043166f: SUB ECX,0x100
// 00431675: JS 0x004316b2
//   XREF to: 004316b2 (CONDITIONAL_JUMP)
// 00431677: MOV EAX,EAX
// 0043167a: MOV EAX,EAX
// 0043167d: MOV EAX,EAX
// 00431680: MOV AL,byte ptr [ESI]
//   Label: LAB_00431680
// 00431682: MOV BL,byte ptr [ESI + 0x24]
// 00431685: MOV AL,byte ptr [ESI + 0x40]
// 00431688: MOV BL,byte ptr [ESI + 0x64]
// 0043168b: MOV AL,byte ptr [ESI + 0x80]
// 00431691: MOV BL,byte ptr [ESI + 0xa4]
// 00431697: MOV AL,byte ptr [ESI + 0xc0]
// 0043169d: MOV BL,byte ptr [ESI + 0xe4]
// 004316a3: ADD ESI,0x100
// 004316a9: NOP
// 004316aa: SUB ECX,0x100
// 004316b0: JG 0x00431680
//   XREF to: 00431680 (CONDITIONAL_JUMP)
// 004316b2: MOV ESI,dword ptr [EBP + 0xc]
//   Label: LAB_004316b2
//   XREF to: Stack[0x8] (READ)
// 004316b5: MOV ECX,EDX
// 004316b7: SHR ECX,0x5
// 004316ba: JZ 0x00431704
//   XREF to: 00431704 (CONDITIONAL_JUMP)
// 004316bc: SHL ECX,0x5
// 004316bf: NOP
// 004316c0: MOV EAX,ECX
// 004316c2: SUB ECX,0x20
// 004316c5: MOV EAX,EAX
// 004316c8: MOV EAX,EAX
// 004316cb: MOV EAX,EAX
// 004316ce: MOV EAX,EAX
// 004316d0: MOVQ MM0,qword ptr [ECX + ESI*0x1]
//   Label: LAB_004316d0
// 004316d4: MOVQ MM1,qword ptr [ECX + ESI*0x1 + 0x8]
// 004316d9: MOVQ MM2,qword ptr [ECX + ESI*0x1 + 0x10]
// 004316de: MOVQ MM3,qword ptr [ECX + ESI*0x1 + 0x18]
// 004316e3: MOVQ qword ptr [ECX + EDI*0x1],MM0
// 004316e7: MOVQ qword ptr [ECX + EDI*0x1 + 0x8],MM1
// 004316ec: MOVQ qword ptr [ECX + EDI*0x1 + 0x10],MM2
// 004316f1: MOVQ qword ptr [ECX + EDI*0x1 + 0x18],MM3
// 004316f6: SUB ECX,0x20
// 004316f9: JGE 0x004316d0
//   XREF to: 004316d0 (CONDITIONAL_JUMP)
// 004316fb: EMMS
// 004316fd: SUB EDX,EAX
// 004316ff: ADD ESI,EAX
// 00431701: ADD EDI,EAX
// 00431703: NOP
// 00431704: CMP EDX,0x0
//   Label: LAB_00431704
// 00431707: JZ 0x00431720
//   XREF to: 00431720 (CONDITIONAL_JUMP)
// 00431709: MOV EBX,EDX
// 0043170b: NOP
// 0043170c: SHR EBX,0x2
// 0043170f: JZ 0x0043171c
//   XREF to: 0043171c (CONDITIONAL_JUMP)
// 00431711: MOV ECX,EBX
// 00431713: MOVSD.REP ES:EDI,ESI
// 00431715: SHL EBX,0x2
// 00431718: NOP
// 00431719: SUB EDX,EBX
// 0043171b: NOP
// 0043171c: MOV ECX,EDX
//   Label: LAB_0043171c
// 0043171e: MOVSB.REP ES:EDI,ESI
// 00431720: POP EDX
//   Label: LAB_00431720
// 00431721: POP ECX
// 00431722: POP EBX
// 00431723: POP EAX
// 00431724: POP EDI
// 00431725: POP ESI
// 00431726: LEAVE
// 00431727: RET
