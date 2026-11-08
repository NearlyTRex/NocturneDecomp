// Name: FUN_0058000e
// Address: 0058000e
// Address Range: [[0058000e, 00580126]]
// Convention: unknown
// Signature: undefined8 FUN_0058000e(ushort *param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0058000e(ushort *param_1,byte *param_2,byte *param_3,uint param_4,int param_5)
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
    LAB_00580027:
        movzx EAX,byte ptr [ESI]
        movd MM0,dword ptr [DAT_01c4e3d4 + EAX*0x4]
        movzx EAX,byte ptr [EBX]
        imul EAX,EBP
        cmp dword ptr [DAT_01c51d0c],0x1
        jz LAB_00580057
        cmp EAX,0xfde8
        jge LAB_005800da
        cmp EAX,0xff
        jle LAB_00580116
    LAB_00580057:
        shr EAX,0x8
        punpcklbw MM0,MM7
        movq MM1,qword ptr [DAT_006247d0 + EAX*0x8]
        movq MM2,MM1
        pxor MM2,qword ptr [DAT_00624fc8]
        movzx EAX,word ptr [EDI]
        movd MM3,EAX
        pand MM3,qword ptr [DAT_00623f30]
        psllq MM3,qword ptr [DAT_00623fc0]
        movd MM4,EAX
        pand MM4,qword ptr [DAT_00623f28]
        psllq MM4,qword ptr [DAT_00623fa0]
        por MM3,MM4
        movd MM5,EAX
        pand MM5,qword ptr [DAT_00623f20]
        psllq MM5,qword ptr [DAT_00623f80]
        por MM3,MM5
        punpcklbw MM3,MM7
        cmp dword ptr [DAT_01c51d0c],0x1
        jz LAB_005800c9
        pmullw MM0,MM1
        pmullw MM3,MM2
        paddw MM0,MM3
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_005800da
    LAB_005800c9:
        psllw MM3,0x8
        pmullw MM0,MM1
        paddusw MM0,MM3
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_005800da:
        movq MM2,MM0
        movq MM4,MM0
        pand MM0,qword ptr [DAT_00623f78]
        pand MM2,qword ptr [DAT_00623f58]
        pand MM4,qword ptr [DAT_00623f38]
        psrlq MM0,qword ptr [DAT_00623fc0]
        psrlq MM2,qword ptr [DAT_00623fa0]
        psrlq MM4,qword ptr [DAT_00623f80]
        por MM0,MM2
        por MM0,MM4
        movd EAX,MM0
        mov word ptr [EDI],AX
    LAB_00580116:
        inc ESI
        inc EBX
        add EDI,0x2
        dec ECX
        jg LAB_00580027
        popad
        emms
}
}
