// Name: engine_special.cpp_FUN_0057de01
// Address: 0057de01
// Address Range: [[0057de01, 0057df81] [0057df90, 0057e04c] [0057e050, 0057e0db] [0057e0e0, 0057e109] [0057e110, 0057e234] [0057e240, 0057e2a9] [0057e2b0, 0057e2b5] [0057e2c0, 0057e389] [0057e3c0, 0057e429] [0057e430, 0057e568] [0057e576, 0057e58d] [0057e590, 0057e59b] [0057e5a0, 0057e5e2]]
// Convention: unknown
// Signature: void engine_special_cpp_FUN_0057de01(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_special_cpp_FUN_0057de01(void)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_0057de11
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_0057de11:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [DAT_01c4480c + EBX*0x4]
        mov EBX,dword ptr [DAT_01c4354c + EBX*0x4]
        sub ECX,EAX
        jle LAB_0057e2b0
        lea EBX,[EBX + EAX*0x4]
        shl ECX,0x2
        lea EBP,[EBP + EAX*0x4]
        mov dword ptr [DAT_00623964],ECX
        mov dword ptr [DAT_006239c8],EBX
        mov dword ptr [DAT_006239cc],EBP
        cmp dword ptr [DAT_01c51d14],0x80
        jz LAB_0057e5a0
        cmp dword ptr [DAT_01c51d18],0x5
        jnz LAB_0057ded2
        mov EAX,dword ptr [ESI + 0x18]
        mov EBX,dword ptr [ESI + 0x28]
        cdq
        shld EDX,EAX,0x18
        shl EAX,0x18
        idiv EBX
        mov [DAT_006239a0],EAX
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [EDI + 0x28]
        cdq
        shld EDX,EAX,0x18
        shl EAX,0x18
        idiv EBX
        sub EAX,dword ptr [DAT_006239a0]
        imul dword ptr [DAT_01c4f034 + ECX]
        mov dword ptr [DAT_00623dd0],EDX
        mov EAX,dword ptr [ESI + 0x20]
        mov EBX,dword ptr [ESI + 0x28]
        cdq
        shld EDX,EAX,0x18
        shl EAX,0x18
        idiv EBX
        mov [DAT_006239a4],EAX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [EDI + 0x28]
        cdq
        shld EDX,EAX,0x18
        shl EAX,0x18
        idiv EBX
        sub EAX,dword ptr [DAT_006239a4]
        imul dword ptr [DAT_01c4f034 + ECX]
        mov dword ptr [DAT_00623dd4],EDX
        jmp LAB_0057df06
    LAB_0057ded2:
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [DAT_01c4f034 + ECX]
        mov dword ptr [DAT_006239a0],EBX
        mov dword ptr [DAT_00623dd0],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [DAT_01c4f034 + ECX]
        mov dword ptr [DAT_006239a4],EBX
        mov dword ptr [DAT_00623dd4],EDX
    LAB_0057df06:
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [DAT_01c4f034 + ECX]
        mov dword ptr [DAT_006239ac],EBX
        mov dword ptr [DAT_00623dd8],EDX
        mov EAX,dword ptr [EDI + 0x30]
        mov EBX,dword ptr [ESI + 0x30]
        sub EAX,EBX
        imul dword ptr [DAT_01c4f034 + ECX]
        mov dword ptr [DAT_00623e90],EBX
        mov dword ptr [DAT_00623e98],EDX
        mov EBP,dword ptr [DAT_00623e90]
        pxor MM7,MM7
        test dword ptr [DAT_01c51d14],0x200
        jnz LAB_0057df90
        test dword ptr [DAT_01c51d14],0x4
        jnz LAB_0057e050
        test dword ptr [DAT_01c51d14],0x10
        jnz LAB_0057e0e0
        movq MM5,qword ptr [DAT_00624fc8]
        psllw MM5,0x7
        pxor MM6,MM6
        jmp LAB_0057e110
    LAB_0057df90:
        mov EAX,dword ptr [EDI + 0x10]
        mov EBX,dword ptr [ESI + 0x10]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [DAT_01c4f034 + ECX]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [DAT_00623e50],EBX
        mov dword ptr [DAT_00623e70],EDX
        mov EAX,dword ptr [EDI + 0x38]
        mov EBX,dword ptr [ESI + 0x38]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [DAT_01c4f034 + ECX]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [DAT_00623e58],EBX
        mov dword ptr [DAT_00623e78],EDX
        mov EAX,dword ptr [EDI + 0x40]
        mov EBX,dword ptr [ESI + 0x40]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [DAT_01c4f034 + ECX]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [DAT_00623e60],EBX
        mov dword ptr [DAT_00623e80],EDX
        movq MM5,qword ptr [DAT_00623e50]
        movq MM6,qword ptr [DAT_00623e70]
        psllq MM5,0x10
        psllq MM6,0x10
        por MM5,qword ptr [DAT_00623e58]
        por MM6,qword ptr [DAT_00623e78]
        psllq MM5,0x10
        psllq MM6,0x10
        por MM5,qword ptr [DAT_00623e60]
        por MM6,qword ptr [DAT_00623e80]
        jmp LAB_0057e110
    LAB_0057e050:
        mov EAX,dword ptr [EDI + 0x10]
        mov EBX,dword ptr [ESI + 0x10]
        sub EAX,0x100
        sub EBX,0x100
        cmp EAX,0xfff
        jbe LAB_0057e06d
        mov EAX,0xfff
    LAB_0057e06d:
        cmp EBX,0xfff
        jbe LAB_0057e07a
        mov EBX,0xfff
    LAB_0057e07a:
        shl EAX,0x3
        shl EBX,0x3
        sub EAX,EBX
        imul dword ptr [DAT_01c4f034 + ECX]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [DAT_00623e50],EBX
        mov dword ptr [DAT_00623e70],EDX
        movq MM5,qword ptr [DAT_00623e50]
        movq MM6,qword ptr [DAT_00623e70]
        psllq MM5,0x10
        psllq MM6,0x10
        por MM5,qword ptr [DAT_00623e50]
        por MM6,qword ptr [DAT_00623e70]
        psllq MM5,0x10
        psllq MM6,0x10
        por MM5,qword ptr [DAT_00623e50]
        por MM6,qword ptr [DAT_00623e70]
        jmp LAB_0057e110
    LAB_0057e0e0:
        mov EAX,[DAT_01c4f024]
        sub EAX,0x100
        shr EAX,0x4
        cmp EAX,0xff
        jc LAB_0057e0f9
        mov EAX,0xff
    LAB_0057e0f9:
        movq MM5,qword ptr [DAT_006247d0 + EAX*0x8]
        psllw MM5,0x7
        pxor MM6,MM6
        jmp LAB_0057e110
    LAB_0057e110:
        mov ECX,dword ptr [DAT_006239a0]
        mov EDX,dword ptr [DAT_006239a4]
        mov ESI,dword ptr [DAT_006239ac]
        mov EDI,0x0
        cmp dword ptr [DAT_01c50934],0x0
        jnz LAB_0057e140
        test dword ptr [DAT_01c51d14],0x2
        jz LAB_0057e436
    LAB_0057e140:
        test dword ptr [DAT_01c51d14],0x100
        jnz LAB_0057e15f
        mov EBP,dword ptr [DAT_0061b4b8]
        shl EBP,0x8
        mov dword ptr [DAT_00623e98],0x0
    LAB_0057e15f:
        cmp dword ptr [DAT_01c50934],0x0
        jnz LAB_0057e2c0
    LAB_0057e16c:
        test dword ptr [DAT_01c51d14],0x40
        jz LAB_0057e188
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_006239cc]
        cmp ESI,dword ptr [EAX]
        jl LAB_0057e272
    LAB_0057e188:
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_00623eb8]
        psrlq MM2,qword ptr [DAT_00623ed8]
        pand MM0,qword ptr [DAT_00623ef8]
        pand MM2,qword ptr [DAT_00623f18]
        paddd MM0,MM2
        movd EBX,MM0
        add EBX,dword ptr [DAT_01c50930]
        movzx EAX,byte ptr [EBX]
        mov EAX,dword ptr [DAT_01c4e3d4 + EAX*0x4]
        cmp EAX,0x0
        jz LAB_0057e272
        movd MM0,EAX
        punpcklbw MM0,MM7
        pxor MM4,MM4
        test dword ptr [DAT_01c51d14],0x20
        jz LAB_0057e1ec
        mov EBX,EDI
        add EBX,dword ptr [DAT_006239c8]
        movd MM4,dword ptr [EBX]
        punpcklbw MM4,MM7
    LAB_0057e1ec:
        psllw MM0,0x4
        movq MM7,MM5
        mov EAX,EBP
        psrlw MM7,0x3
        sar EAX,0x8
        pmulhw MM0,MM7
        movq MM2,qword ptr [DAT_006247d0 + EAX*0x8]
        pxor MM7,MM7
        movq MM3,MM2
        packuswb MM0,MM7
        pxor MM3,qword ptr [DAT_00624fc8]
        punpcklbw MM0,MM7
        cmp dword ptr [DAT_01c51d0c],0x0
        jnz LAB_0057e240
        pmullw MM4,MM3
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_0057e251
    LAB_0057e240:
        psllw MM4,0x8
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0057e251:
        mov EBX,EDI
        add EBX,dword ptr [DAT_006239c8]
        movd dword ptr [EBX],MM0
        test dword ptr [DAT_01c51d14],0x80
        jz LAB_0057e272
        mov EAX,EDI
        add EAX,dword ptr [DAT_006239cc]
        mov dword ptr [EAX],ESI
    LAB_0057e272:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_00623964]
        jnc LAB_0057e2b0
        add ECX,dword ptr [DAT_00623dd0]
        paddw MM5,MM6
        add EDX,dword ptr [DAT_00623dd4]
        movq MM0,MM5
        add ESI,dword ptr [DAT_00623dd8]
        pcmpgtw MM5,qword ptr [DAT_00623ddc]
        add EBP,dword ptr [DAT_00623e98]
        pand MM5,MM0
        jmp LAB_0057e16c
    LAB_0057e2b0:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_0057e2c0:
        test dword ptr [DAT_01c51d14],0x40
        jz LAB_0057e2dc
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_006239cc]
        cmp ESI,dword ptr [EAX]
        jl LAB_0057e3f2
    LAB_0057e2dc:
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_00623eb8]
        psrlq MM2,qword ptr [DAT_00623ed8]
        pand MM0,qword ptr [DAT_00623ef8]
        pand MM2,qword ptr [DAT_00623f18]
        paddd MM0,MM2
        movd EBX,MM0
        add EBX,dword ptr [DAT_01c50930]
        movzx EAX,byte ptr [EBX]
        movd MM0,dword ptr [DAT_01c4e3d4 + EAX*0x4]
        punpcklbw MM0,MM7
        sub EBX,dword ptr [DAT_01c50930]
        add EBX,dword ptr [DAT_01c50934]
        movzx EAX,byte ptr [EBX]
        test EAX,0xffffffff
        jz LAB_0057e3f2
        mov EBX,EDI
        add EBX,dword ptr [DAT_006239c8]
        movd MM4,dword ptr [EBX]
        punpcklbw MM4,MM7
        psllw MM0,0x4
        movq MM7,MM5
        imul EAX,EBP
        psrlw MM7,0x3
        shr EAX,0x10
        pmulhw MM0,MM7
        movq MM2,qword ptr [DAT_006247d0 + EAX*0x8]
        pxor MM7,MM7
        movq MM3,MM2
        packuswb MM0,MM7
        pxor MM3,qword ptr [DAT_00624fc8]
        punpcklbw MM0,MM7
        cmp dword ptr [DAT_01c51d0c],0x0
        jnz LAB_0057e3c0
        pmullw MM4,MM3
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_0057e3d1
    LAB_0057e3c0:
        psllw MM4,0x8
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0057e3d1:
        mov EBX,EDI
        add EBX,dword ptr [DAT_006239c8]
        movd dword ptr [EBX],MM0
        test dword ptr [DAT_01c51d14],0x80
        jz LAB_0057e3f2
        mov EAX,EDI
        add EAX,dword ptr [DAT_006239cc]
        mov dword ptr [EAX],ESI
    LAB_0057e3f2:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_00623964]
        jnc LAB_0057e430
        add ECX,dword ptr [DAT_00623dd0]
        paddw MM5,MM6
        add EDX,dword ptr [DAT_00623dd4]
        movq MM0,MM5
        add ESI,dword ptr [DAT_00623dd8]
        pcmpgtw MM5,qword ptr [DAT_00623ddc]
        add EBP,dword ptr [DAT_00623e98]
        pand MM5,MM0
        jmp LAB_0057e2c0
    LAB_0057e430:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_0057e436:
        movq MM1,qword ptr [DAT_01c51d1c]
        punpcklbw MM1,MM7
        test dword ptr [DAT_01c51d14],0x8
        jnz LAB_0057e45b
        mov EBP,0x0
        mov dword ptr [DAT_00623e98],0x0
    LAB_0057e45b:
        test dword ptr [DAT_01c51d14],0x40
        jz LAB_0057e477
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_006239cc]
        cmp ESI,dword ptr [EAX]
        jl LAB_0057e52d
    LAB_0057e477:
        test dword ptr [DAT_01c51d14],0x1
        jz LAB_0057e576
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_00623eb8]
        psrlq MM2,qword ptr [DAT_00623ed8]
        pand MM0,qword ptr [DAT_00623ef8]
        pand MM2,qword ptr [DAT_00623f18]
        paddd MM0,MM2
        movd EBX,MM0
        add EBX,dword ptr [DAT_01c50930]
        movzx EAX,byte ptr [EBX]
        movd MM0,dword ptr [DAT_01c4e3d4 + EAX*0x4]
    LAB_0057e4c0:
        movq MM3,MM5
        punpcklbw MM0,MM7
        psrlw MM3,0x3
        psllw MM0,0x4
        pmulhw MM0,MM3
        packuswb MM0,MM7
        test dword ptr [DAT_01c51d14],0x8
        jz LAB_0057e50d
        mov EAX,EBP
        sar EAX,0x8
        movq MM3,qword ptr [DAT_006247d0 + EAX*0x8]
        movq MM4,MM1
        movq MM2,MM3
        pmullw MM4,MM3
        pxor MM2,qword ptr [DAT_00624fc8]
        punpcklbw MM0,MM7
        pmullw MM0,MM2
        paddw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0057e50d:
        mov EBX,dword ptr [DAT_006239c8]
        add EBX,EDI
        movd dword ptr [EBX],MM0
        test dword ptr [DAT_01c51d14],0x80
        jz LAB_0057e52d
        mov EAX,[DAT_006239cc]
        add EAX,EDI
        mov dword ptr [EAX],ESI
    LAB_0057e52d:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_00623964]
        jnc LAB_0057e2b0
        add ECX,dword ptr [DAT_00623dd0]
        paddw MM5,MM6
        add EDX,dword ptr [DAT_00623dd4]
        movq MM0,MM5
        add ESI,dword ptr [DAT_00623dd8]
        pcmpgtw MM5,qword ptr [DAT_00623ddc]
        add EBP,dword ptr [DAT_00623e98]
        pand MM5,MM0
        jmp LAB_0057e45b
    LAB_0057e576:
        test dword ptr [DAT_01c51d14],0x200
        jnz LAB_0057e590
        movd MM0,dword ptr [DAT_01c4f020]
        jmp LAB_0057e4c0
    LAB_0057e590:
        movd MM0,dword ptr [DAT_00623fc8]
        jmp LAB_0057e4c0
    LAB_0057e5a0:
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [DAT_01c4f034 + ECX]
        mov dword ptr [DAT_006239ac],EBX
        mov dword ptr [DAT_00623dd8],EDX
        mov EAX,[DAT_006239ac]
        mov EBX,dword ptr [DAT_00623dd8]
        mov ESI,dword ptr [DAT_006239cc]
        mov ECX,dword ptr [DAT_00623964]
    LAB_0057e5d1:
        mov dword ptr [ESI],EAX
        add EAX,EBX
        add ESI,0x4
        sub ECX,0x4
        jg LAB_0057e5d1
        pop EBP
        emms
}
}
