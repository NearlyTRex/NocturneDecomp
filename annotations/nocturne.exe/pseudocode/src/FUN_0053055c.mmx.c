// Name: FUN_0053055c
// Address: 0053055c
// Address Range: [[0053055c, 005305f6]]
// Convention: unknown
// Signature: undefined8 FUN_0053055c(undefined4 *param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0053055c(uint *param_1,byte *param_2,byte *param_3,uint param_4,int param_5)
{
__asm {
        pushad
        mov EDI,dword ptr [EBP + 0x8]
        mov ESI,dword ptr [EBP + 0xc]
        mov EBX,dword ptr [EBP + 0x10]
        mov ECX,dword ptr [EBP + 0x18]
        mov EBP,dword ptr [EBP + 0x14]
        pxor MM7,MM7
        shr EBP,0x8
    LAB_00530575:
        movzx EAX,byte ptr [ESI]
        movd MM0,dword ptr [DAT_01c00024 + EAX*0x4]
        movzx EAX,byte ptr [EBX]
        imul EAX,EBP
        cmp dword ptr [DAT_01c03998],0x1
        jz LAB_0053059d
        cmp EAX,0xfde8
        jge LAB_005305e7
        cmp EAX,0xff
        jle LAB_005305ea
    LAB_0053059d:
        shr EAX,0x8
        punpcklbw MM0,MM7
        movq MM1,qword ptr [DAT_005bfe70 + EAX*0x8]
        movq MM2,MM1
        pxor MM2,qword ptr [DAT_005c0668]
        movd MM3,dword ptr [EDI]
        punpcklbw MM3,MM7
        cmp dword ptr [DAT_01c03998],0x1
        jz LAB_005305d6
        pmullw MM0,MM1
        pmullw MM3,MM2
        paddw MM0,MM3
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_005305e7
    LAB_005305d6:
        psllw MM3,0x8
        pmullw MM0,MM1
        paddusw MM0,MM3
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_005305e7:
        movd dword ptr [EDI],MM0
    LAB_005305ea:
        inc ESI
        inc EBX
        add EDI,0x4
        dec ECX
        jg LAB_00530575
        popad
        emms
}
}
