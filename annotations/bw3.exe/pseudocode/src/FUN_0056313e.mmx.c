// Name: FUN_0056313e
// Address: 0056313e
// Address Range: [[0056313e, 00563256]]
// Convention: unknown
// Signature: undefined8 FUN_0056313e(ushort *param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0056313e(ushort *param_1,byte *param_2,byte *param_3,uint param_4,int param_5)
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
    LAB_00563157:
        movzx EAX,byte ptr [ESI]
        movd MM0,dword ptr [DAT_01c6a974 + EAX*0x4]
        movzx EAX,byte ptr [EBX]
        imul EAX,EBP
        cmp dword ptr [DAT_01c6e2ac],0x1
        jz LAB_00563187
        cmp EAX,0xfde8
        jge LAB_0056320a
        cmp EAX,0xff
        jle LAB_00563246
    LAB_00563187:
        shr EAX,0x8
        punpcklbw MM0,MM7
        movq MM1,qword ptr [DAT_00605710 + EAX*0x8]
        movq MM2,MM1
        pxor MM2,qword ptr [DAT_00605f08]
        movzx EAX,word ptr [EDI]
        movd MM3,EAX
        pand MM3,qword ptr [DAT_00604e70]
        psllq MM3,qword ptr [DAT_00604f00]
        movd MM4,EAX
        pand MM4,qword ptr [DAT_00604e68]
        psllq MM4,qword ptr [DAT_00604ee0]
        por MM3,MM4
        movd MM5,EAX
        pand MM5,qword ptr [DAT_00604e60]
        psllq MM5,qword ptr [DAT_00604ec0]
        por MM3,MM5
        punpcklbw MM3,MM7
        cmp dword ptr [DAT_01c6e2ac],0x1
        jz LAB_005631f9
        pmullw MM0,MM1
        pmullw MM3,MM2
        paddw MM0,MM3
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_0056320a
    LAB_005631f9:
        psllw MM3,0x8
        pmullw MM0,MM1
        paddusw MM0,MM3
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0056320a:
        movq MM2,MM0
        movq MM4,MM0
        pand MM0,qword ptr [DAT_00604eb8]
        pand MM2,qword ptr [DAT_00604e98]
        pand MM4,qword ptr [DAT_00604e78]
        psrlq MM0,qword ptr [DAT_00604f00]
        psrlq MM2,qword ptr [DAT_00604ee0]
        psrlq MM4,qword ptr [DAT_00604ec0]
        por MM0,MM2
        por MM0,MM4
        movd EAX,MM0
        mov word ptr [EDI],AX
    LAB_00563246:
        inc ESI
        inc EBX
        add EDI,0x2
        dec ECX
        jg LAB_00563157
        popad
        emms
}
}
