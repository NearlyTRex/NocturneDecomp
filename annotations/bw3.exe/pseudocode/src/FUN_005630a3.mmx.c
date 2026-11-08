// Name: FUN_005630a3
// Address: 005630a3
// Address Range: [[005630a3, 0056313d]]
// Convention: unknown
// Signature: undefined8 FUN_005630a3(undefined4 *param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_005630a3(uint *param_1,byte *param_2,byte *param_3,uint param_4,int param_5)
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
    LAB_005630bc:
        movzx EAX,byte ptr [ESI]
        movd MM0,dword ptr [DAT_01c6a974 + EAX*0x4]
        movzx EAX,byte ptr [EBX]
        imul EAX,EBP
        cmp dword ptr [DAT_01c6e2ac],0x1
        jz LAB_005630e4
        cmp EAX,0xfde8
        jge LAB_0056312e
        cmp EAX,0xff
        jle LAB_00563131
    LAB_005630e4:
        shr EAX,0x8
        punpcklbw MM0,MM7
        movq MM1,qword ptr [DAT_00605710 + EAX*0x8]
        movq MM2,MM1
        pxor MM2,qword ptr [DAT_00605f08]
        movd MM3,dword ptr [EDI]
        punpcklbw MM3,MM7
        cmp dword ptr [DAT_01c6e2ac],0x1
        jz LAB_0056311d
        pmullw MM0,MM1
        pmullw MM3,MM2
        paddw MM0,MM3
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_0056312e
    LAB_0056311d:
        psllw MM3,0x8
        pmullw MM0,MM1
        paddusw MM0,MM3
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0056312e:
        movd dword ptr [EDI],MM0
    LAB_00563131:
        inc ESI
        inc EBX
        add EDI,0x4
        dec ECX
        jg LAB_005630bc
        popad
        emms
}
}
