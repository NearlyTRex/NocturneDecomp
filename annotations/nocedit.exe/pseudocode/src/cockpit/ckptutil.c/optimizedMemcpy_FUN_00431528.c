// Name: cockpit_ckptutil.c_optimizedMemcpy_FUN_00431528
// Address: 00431528
// Address Range: [[00431528, 00431621]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_optimizedMemcpy_FUN_00431528(void * dest_buffer, void * src_buffer, int byte_count)
// Cross-references:
//   cockpit_ckptutil.c_getOptimizedMemcpyFunction_FUN_00431780 (00431780) at 0043178f [DATA]

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_optimizedMemcpy_FUN_00431528(void *dest_buffer,void *src_buffer,int byte_count)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
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
      lVar1 = *(longlong *)(iVar8 + (int)src_buffer);
      lVar2 = *(longlong *)(iVar7 + -0x10 + (int)src_buffer);
      lVar3 = *(longlong *)(iVar7 + -8 + (int)src_buffer);
      *(longlong *)(iVar7 + -0x18 + (int)dest_buffer) =
           (longlong)ROUND((float10)*(longlong *)(iVar7 + -0x18 + (int)src_buffer));
      *(longlong *)(iVar8 + (int)dest_buffer) = (longlong)ROUND((float10)lVar1);
      *(longlong *)(iVar7 + -8 + (int)dest_buffer) = (longlong)ROUND((float10)lVar3);
      *(longlong *)(iVar7 + -0x10 + (int)dest_buffer) = (longlong)ROUND((float10)lVar2);
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
// 00431528: PUSH EBP
//   Label: cockpit_ckptutil.c_optimizedMemcpy_FUN_00431528
// 00431529: MOV EBP,ESP
// 0043152b: PUSH ESI
// 0043152c: PUSH EDI
// 0043152d: PUSH EAX
// 0043152e: PUSH EBX
// 0043152f: PUSH ECX
// 00431530: PUSH EDX
// 00431531: MOV EDI,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00431534: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 00431537: MOV EBX,EDI
// 00431539: MOV ESI,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0043153c: AND EBX,0x1f
// 0043153f: JZ 0x00431573
//   XREF to: 00431573 (CONDITIONAL_JUMP)
// 00431541: MOV EAX,0x20
// 00431546: NOP
// 00431547: SUB EAX,EBX
// 00431549: NOP
// 0043154a: CMP EDX,EAX
// 0043154c: JGE 0x00431551
//   XREF to: 00431551 (CONDITIONAL_JUMP)
// 0043154e: MOV EAX,EDX
// 00431550: NOP
// 00431551: SUB EDX,EAX
//   Label: LAB_00431551
// 00431553: MOV ECX,EAX
// 00431555: AND ECX,0x3
// 00431558: JZ 0x0043155e
//   XREF to: 0043155e (CONDITIONAL_JUMP)
// 0043155a: SUB EAX,ECX
// 0043155c: MOVSB.REP ES:EDI,ESI
// 0043155e: SHR EAX,0x2
//   Label: LAB_0043155e
// 00431561: JZ 0x00431567
//   XREF to: 00431567 (CONDITIONAL_JUMP)
// 00431563: MOV ECX,EAX
// 00431565: MOVSD.REP ES:EDI,ESI
// 00431567: CMP EDX,0x0
//   Label: LAB_00431567
// 0043156a: JZ 0x0043161a
//   XREF to: 0043161a (CONDITIONAL_JUMP)
// 00431570: MOV dword ptr [EBP + 0xc],ESI
//   XREF to: Stack[0x8] (WRITE)
// 00431573: MOV ECX,EDX
//   Label: LAB_00431573
// 00431575: SUB ECX,0x100
// 0043157b: JS 0x004315b2
//   XREF to: 004315b2 (CONDITIONAL_JUMP)
// 0043157d: MOV EAX,EAX
// 00431580: MOV AL,byte ptr [ESI]
//   Label: LAB_00431580
// 00431582: MOV BL,byte ptr [ESI + 0x24]
// 00431585: MOV AL,byte ptr [ESI + 0x40]
// 00431588: MOV BL,byte ptr [ESI + 0x64]
// 0043158b: MOV AL,byte ptr [ESI + 0x80]
// 00431591: MOV BL,byte ptr [ESI + 0xa4]
// 00431597: MOV AL,byte ptr [ESI + 0xc0]
// 0043159d: MOV BL,byte ptr [ESI + 0xe4]
// 004315a3: ADD ESI,0x100
// 004315a9: NOP
// 004315aa: SUB ECX,0x100
// 004315b0: JG 0x00431580
//   XREF to: 00431580 (CONDITIONAL_JUMP)
// 004315b2: MOV ESI,dword ptr [EBP + 0xc]
//   Label: LAB_004315b2
//   XREF to: Stack[0x8] (READ)
// 004315b5: MOV ECX,EDX
// 004315b7: SHR ECX,0x5
// 004315ba: JZ 0x004315fe
//   XREF to: 004315fe (CONDITIONAL_JUMP)
// 004315bc: SHL ECX,0x5
// 004315bf: NOP
// 004315c0: MOV EAX,ECX
// 004315c2: SUB ECX,0x20
// 004315c5: MOV EAX,EAX
// 004315c8: MOV EAX,EAX
// 004315cb: MOV EAX,EAX
// 004315ce: MOV EAX,EAX
// 004315d0: FILD qword ptr [ECX + ESI*0x1]
//   Label: LAB_004315d0
// 004315d3: FILD qword ptr [ECX + ESI*0x1 + 0x8]
// 004315d7: FILD qword ptr [ECX + ESI*0x1 + 0x10]
// 004315db: FXCH ST2
// 004315dd: FILD qword ptr [ECX + ESI*0x1 + 0x18]
// 004315e1: FXCH ST2
// 004315e3: FISTP qword ptr [ECX + EDI*0x1 + 0x8]
// 004315e7: FISTP qword ptr [ECX + EDI*0x1]
// 004315ea: FISTP qword ptr [ECX + EDI*0x1 + 0x18]
// 004315ee: FISTP qword ptr [ECX + EDI*0x1 + 0x10]
// 004315f2: SUB ECX,0x20
// 004315f5: JGE 0x004315d0
//   XREF to: 004315d0 (CONDITIONAL_JUMP)
// 004315f7: SUB EDX,EAX
// 004315f9: ADD ESI,EAX
// 004315fb: ADD EDI,EAX
// 004315fd: NOP
// 004315fe: CMP EDX,0x0
//   Label: LAB_004315fe
// 00431601: JZ 0x0043161a
//   XREF to: 0043161a (CONDITIONAL_JUMP)
// 00431603: MOV EBX,EDX
// 00431605: NOP
// 00431606: SHR EBX,0x2
// 00431609: JZ 0x00431616
//   XREF to: 00431616 (CONDITIONAL_JUMP)
// 0043160b: MOV ECX,EBX
// 0043160d: MOVSD.REP ES:EDI,ESI
// 0043160f: SHL EBX,0x2
// 00431612: NOP
// 00431613: SUB EDX,EBX
// 00431615: NOP
// 00431616: MOV ECX,EDX
//   Label: LAB_00431616
// 00431618: MOVSB.REP ES:EDI,ESI
// 0043161a: POP EDX
//   Label: LAB_0043161a
// 0043161b: POP ECX
// 0043161c: POP EBX
// 0043161d: POP EAX
// 0043161e: POP EDI
// 0043161f: POP ESI
// 00431620: LEAVE
// 00431621: RET
