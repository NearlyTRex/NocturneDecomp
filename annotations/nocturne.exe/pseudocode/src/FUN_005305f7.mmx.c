// Name: FUN_005305f7
// Address: 005305f7
// Address Range: [[005305f7, 0053070f]]
// Convention: unknown
// Signature: undefined8 FUN_005305f7(ushort *param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_005305f7(ushort *param_1,byte *param_2,byte *param_3,uint param_4,int param_5)
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
    LAB_00530610:
        movzx EAX,byte ptr [ESI]
        movd MM0,dword ptr [DAT_01c00024 + EAX*0x4]
        movzx EAX,byte ptr [EBX]
        imul EAX,EBP
        cmp dword ptr [DAT_01c03998],0x1
        jz LAB_00530640
        cmp EAX,0xfde8
        jge LAB_005306c3
        cmp EAX,0xff
        jle LAB_005306ff
    LAB_00530640:
        shr EAX,0x8
        punpcklbw MM0,MM7
        movq MM1,qword ptr [DAT_005bfe70 + EAX*0x8]
        movq MM2,MM1
        pxor MM2,qword ptr [DAT_005c0668]
        movzx EAX,word ptr [EDI]
        movd MM3,EAX
        pand MM3,qword ptr [DAT_005bf5c8]
        psllq MM3,qword ptr [DAT_005bf658]
        movd MM4,EAX
        pand MM4,qword ptr [DAT_005bf5c0]
        psllq MM4,qword ptr [DAT_005bf638]
        por MM3,MM4
        movd MM5,EAX
        pand MM5,qword ptr [DAT_005bf5b8]
        psllq MM5,qword ptr [DAT_005bf618]
        por MM3,MM5
        punpcklbw MM3,MM7
        cmp dword ptr [DAT_01c03998],0x1
        jz LAB_005306b2
        pmullw MM0,MM1
        pmullw MM3,MM2
        paddw MM0,MM3
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_005306c3
    LAB_005306b2:
        psllw MM3,0x8
        pmullw MM0,MM1
        paddusw MM0,MM3
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_005306c3:
        movq MM2,MM0
        movq MM4,MM0
        pand MM0,qword ptr [DAT_005bf610]
        pand MM2,qword ptr [DAT_005bf5f0]
        pand MM4,qword ptr [DAT_005bf5d0]
        psrlq MM0,qword ptr [DAT_005bf658]
        psrlq MM2,qword ptr [DAT_005bf638]
        psrlq MM4,qword ptr [DAT_005bf618]
        por MM0,MM2
        por MM0,MM4
        movd EAX,MM0
        mov word ptr [EDI],AX
    LAB_005306ff:
        inc ESI
        inc EBX
        add EDI,0x2
        dec ECX
        jg LAB_00530610
        popad
        emms
}
}
