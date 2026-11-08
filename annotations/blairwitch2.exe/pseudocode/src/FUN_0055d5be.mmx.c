// Name: FUN_0055d5be
// Address: 0055d5be
// Address Range: [[0055d5be, 0055d6d6]]
// Convention: unknown
// Signature: undefined8 FUN_0055d5be(ushort *param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0055d5be(ushort *param_1,byte *param_2,byte *param_3,uint param_4,int param_5)
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
    LAB_0055d5d7:
        movzx EAX,byte ptr [ESI]
        movd MM0,dword ptr [DAT_01c35214 + EAX*0x4]
        movzx EAX,byte ptr [EBX]
        imul EAX,EBP
        cmp dword ptr [DAT_01c38b4c],0x1
        jz LAB_0055d607
        cmp EAX,0xfde8
        jge LAB_0055d68a
        cmp EAX,0xff
        jle LAB_0055d6c6
    LAB_0055d607:
        shr EAX,0x8
        punpcklbw MM0,MM7
        movq MM1,qword ptr [DAT_0061d180 + EAX*0x8]
        movq MM2,MM1
        pxor MM2,qword ptr [DAT_0061d978]
        movzx EAX,word ptr [EDI]
        movd MM3,EAX
        pand MM3,qword ptr [DAT_0061c8e0]
        psllq MM3,qword ptr [DAT_0061c970]
        movd MM4,EAX
        pand MM4,qword ptr [DAT_0061c8d8]
        psllq MM4,qword ptr [DAT_0061c950]
        por MM3,MM4
        movd MM5,EAX
        pand MM5,qword ptr [DAT_0061c8d0]
        psllq MM5,qword ptr [DAT_0061c930]
        por MM3,MM5
        punpcklbw MM3,MM7
        cmp dword ptr [DAT_01c38b4c],0x1
        jz LAB_0055d679
        pmullw MM0,MM1
        pmullw MM3,MM2
        paddw MM0,MM3
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_0055d68a
    LAB_0055d679:
        psllw MM3,0x8
        pmullw MM0,MM1
        paddusw MM0,MM3
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0055d68a:
        movq MM2,MM0
        movq MM4,MM0
        pand MM0,qword ptr [DAT_0061c928]
        pand MM2,qword ptr [DAT_0061c908]
        pand MM4,qword ptr [DAT_0061c8e8]
        psrlq MM0,qword ptr [DAT_0061c970]
        psrlq MM2,qword ptr [DAT_0061c950]
        psrlq MM4,qword ptr [DAT_0061c930]
        por MM0,MM2
        por MM0,MM4
        movd EAX,MM0
        mov word ptr [EDI],AX
    LAB_0055d6c6:
        inc ESI
        inc EBX
        add EDI,0x2
        dec ECX
        jg LAB_0055d5d7
        popad
        emms
}
}
