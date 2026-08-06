// Name: engine_special.cpp_FUN_0052f031
// Address: 0052f031
// Address Range: [[0052f031, 0052f1b1] [0052f1c0, 0052f27c] [0052f280, 0052f30b] [0052f310, 0052f339] [0052f340, 0052f464] [0052f470, 0052f4d9] [0052f4e0, 0052f4e5] [0052f4f0, 0052f5c8] [0052f5d0, 0052f5f3] [0052f600, 0052f669] [0052f670, 0052f7a8] [0052f7b6, 0052f7cd] [0052f7d0, 0052f7db] [0052f7e0, 0052f822]]
// Convention: unknown
// Signature: void engine_special_cpp_FUN_0052f031(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_special_cpp_FUN_0052f031(void)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_0052f041
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_0052f041:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [DAT_01bd4260 + EBX*0x4]
        mov EBX,dword ptr [DAT_01bd2fa0 + EBX*0x4]
        sub ECX,EAX
        jle LAB_0052f4e0
        lea EBX,[EBX + EAX*0x4]
        shl ECX,0x2
        lea EBP,[EBP + EAX*0x4]
        mov dword ptr [DAT_005bf014],ECX
        mov dword ptr [DAT_005bf078],EBX
        mov dword ptr [DAT_005bf07c],EBP
        cmp dword ptr [DAT_01c039a0],0x80
        jz LAB_0052f7e0
        cmp dword ptr [DAT_01c039a4],0x5
        jnz LAB_0052f102
        mov EAX,dword ptr [ESI + 0x18]
        mov EBX,dword ptr [ESI + 0x28]
        cdq
        shld EDX,EAX,0x18
        shl EAX,0x18
        idiv EBX
        mov [DAT_005bf050],EAX
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [EDI + 0x28]
        cdq
        shld EDX,EAX,0x18
        shl EAX,0x18
        idiv EBX
        sub EAX,dword ptr [DAT_005bf050]
        imul dword ptr [ECX + 0x1c00c84]
        mov dword ptr [DAT_005bf480],EDX
        mov EAX,dword ptr [ESI + 0x20]
        mov EBX,dword ptr [ESI + 0x28]
        cdq
        shld EDX,EAX,0x18
        shl EAX,0x18
        idiv EBX
        mov [DAT_005bf054],EAX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [EDI + 0x28]
        cdq
        shld EDX,EAX,0x18
        shl EAX,0x18
        idiv EBX
        sub EAX,dword ptr [DAT_005bf054]
        imul dword ptr [ECX + 0x1c00c84]
        mov dword ptr [DAT_005bf484],EDX
        jmp LAB_0052f136
    LAB_0052f102:
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c00c84]
        mov dword ptr [DAT_005bf050],EBX
        mov dword ptr [DAT_005bf480],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c00c84]
        mov dword ptr [DAT_005bf054],EBX
        mov dword ptr [DAT_005bf484],EDX
    LAB_0052f136:
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c00c84]
        mov dword ptr [DAT_005bf05c],EBX
        mov dword ptr [DAT_005bf488],EDX
        mov EAX,dword ptr [EDI + 0x30]
        mov EBX,dword ptr [ESI + 0x30]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c00c84]
        mov dword ptr [DAT_005bf540],EBX
        mov dword ptr [DAT_005bf548],EDX
        mov EBP,dword ptr [DAT_005bf540]
        pxor MM7,MM7
        test dword ptr [DAT_01c039a0],0x200
        jnz LAB_0052f1c0
        test dword ptr [DAT_01c039a0],0x4
        jnz LAB_0052f280
        test dword ptr [DAT_01c039a0],0x10
        jnz LAB_0052f310
        movq MM5,qword ptr [DAT_005c0668]
        psllw MM5,0x7
        pxor MM6,MM6
        jmp LAB_0052f340
    LAB_0052f1c0:
        mov EAX,dword ptr [EDI + 0x10]
        mov EBX,dword ptr [ESI + 0x10]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c00c84]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [DAT_005bf500],EBX
        mov dword ptr [DAT_005bf520],EDX
        mov EAX,dword ptr [EDI + 0x38]
        mov EBX,dword ptr [ESI + 0x38]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c00c84]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [DAT_005bf508],EBX
        mov dword ptr [DAT_005bf528],EDX
        mov EAX,dword ptr [EDI + 0x40]
        mov EBX,dword ptr [ESI + 0x40]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c00c84]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [DAT_005bf510],EBX
        mov dword ptr [DAT_005bf530],EDX
        movq MM5,qword ptr [DAT_005bf500]
        movq MM6,qword ptr [DAT_005bf520]
        psllq MM5,0x10
        psllq MM6,0x10
        por MM5,qword ptr [DAT_005bf508]
        por MM6,qword ptr [DAT_005bf528]
        psllq MM5,0x10
        psllq MM6,0x10
        por MM5,qword ptr [DAT_005bf510]
        por MM6,qword ptr [DAT_005bf530]
        jmp LAB_0052f340
    LAB_0052f280:
        mov EAX,dword ptr [EDI + 0x10]
        mov EBX,dword ptr [ESI + 0x10]
        sub EAX,0x100
        sub EBX,0x100
        cmp EAX,0xfff
        jbe LAB_0052f29d
        mov EAX,0xfff
    LAB_0052f29d:
        cmp EBX,0xfff
        jbe LAB_0052f2aa
        mov EBX,0xfff
    LAB_0052f2aa:
        shl EAX,0x3
        shl EBX,0x3
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c00c84]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [DAT_005bf500],EBX
        mov dword ptr [DAT_005bf520],EDX
        movq MM5,qword ptr [DAT_005bf500]
        movq MM6,qword ptr [DAT_005bf520]
        psllq MM5,0x10
        psllq MM6,0x10
        por MM5,qword ptr [DAT_005bf500]
        por MM6,qword ptr [DAT_005bf520]
        psllq MM5,0x10
        psllq MM6,0x10
        por MM5,qword ptr [DAT_005bf500]
        por MM6,qword ptr [DAT_005bf520]
        jmp LAB_0052f340
    LAB_0052f310:
        mov EAX,[DAT_01c00c74]
        sub EAX,0x100
        shr EAX,0x4
        cmp EAX,0xff
        jc LAB_0052f329
        mov EAX,0xff
    LAB_0052f329:
        movq MM5,qword ptr [DAT_005bfe70 + EAX*0x8]
        psllw MM5,0x7
        pxor MM6,MM6
        jmp LAB_0052f340
    LAB_0052f340:
        mov ECX,dword ptr [DAT_005bf050]
        mov EDX,dword ptr [DAT_005bf054]
        mov ESI,dword ptr [DAT_005bf05c]
        mov EDI,0x0
        cmp dword ptr [DAT_01c02584],0x0
        jnz LAB_0052f370
        test dword ptr [DAT_01c039a0],0x2
        jz LAB_0052f676
    LAB_0052f370:
        test dword ptr [DAT_01c039a0],0x100
        jnz LAB_0052f38f
        mov EBP,dword ptr [DAT_005b763c]
        shl EBP,0x8
        mov dword ptr [DAT_005bf548],0x0
    LAB_0052f38f:
        cmp dword ptr [DAT_01c02584],0x0
        jnz LAB_0052f4f0
    LAB_0052f39c:
        test dword ptr [DAT_01c039a0],0x40
        jz LAB_0052f3b8
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_005bf07c]
        cmp ESI,dword ptr [EAX]
        jl LAB_0052f4a2
    LAB_0052f3b8:
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_005bf550]
        psrlq MM2,qword ptr [DAT_005bf570]
        pand MM0,qword ptr [DAT_005bf590]
        pand MM2,qword ptr [DAT_005bf5b0]
        paddd MM0,MM2
        movd EBX,MM0
        add EBX,dword ptr [DAT_01c02580]
        movzx EAX,byte ptr [EBX]
        mov EAX,dword ptr [DAT_01c00024 + EAX*0x4]
        cmp EAX,0x0
        jz LAB_0052f4a2
        movd MM0,EAX
        punpcklbw MM0,MM7
        pxor MM4,MM4
        test dword ptr [DAT_01c039a0],0x20
        jz LAB_0052f41c
        mov EBX,EDI
        add EBX,dword ptr [DAT_005bf078]
        movd MM4,dword ptr [EBX]
        punpcklbw MM4,MM7
    LAB_0052f41c:
        psllw MM0,0x4
        movq MM7,MM5
        mov EAX,EBP
        psrlw MM7,0x3
        sar EAX,0x8
        pmulhw MM0,MM7
        movq MM2,qword ptr [DAT_005bfe70 + EAX*0x8]
        pxor MM7,MM7
        movq MM3,MM2
        packuswb MM0,MM7
        pxor MM3,qword ptr [DAT_005c0668]
        punpcklbw MM0,MM7
        cmp dword ptr [DAT_01c03998],0x0
        jnz LAB_0052f470
        pmullw MM4,MM3
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_0052f481
    LAB_0052f470:
        psllw MM4,0x8
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0052f481:
        mov EBX,EDI
        add EBX,dword ptr [DAT_005bf078]
        movd dword ptr [EBX],MM0
        test dword ptr [DAT_01c039a0],0x80
        jz LAB_0052f4a2
        mov EAX,EDI
        add EAX,dword ptr [DAT_005bf07c]
        mov dword ptr [EAX],ESI
    LAB_0052f4a2:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_005bf014]
        jnc LAB_0052f4e0
        add ECX,dword ptr [DAT_005bf480]
        paddw MM5,MM6
        add EDX,dword ptr [DAT_005bf484]
        movq MM0,MM5
        add ESI,dword ptr [DAT_005bf488]
        pcmpgtw MM5,qword ptr [DAT_005bf48c]
        add EBP,dword ptr [DAT_005bf548]
        pand MM5,MM0
        jmp LAB_0052f39c
    LAB_0052f4e0:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_0052f4f0:
        test dword ptr [DAT_01c039a0],0x40
        jz LAB_0052f50c
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_005bf07c]
        cmp ESI,dword ptr [EAX]
        jl LAB_0052f632
    LAB_0052f50c:
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_005bf550]
        psrlq MM2,qword ptr [DAT_005bf570]
        pand MM0,qword ptr [DAT_005bf590]
        pand MM2,qword ptr [DAT_005bf5b0]
        paddd MM0,MM2
        movd EBX,MM0
        add EBX,dword ptr [DAT_01c02580]
        movzx EAX,byte ptr [EBX]
        movd MM0,dword ptr [DAT_01c00024 + EAX*0x4]
        punpcklbw MM0,MM7
        sub EBX,dword ptr [DAT_01c02580]
        add EBX,dword ptr [DAT_01c02584]
        movzx EAX,byte ptr [EBX]
        test EAX,0xffffffff
        jz LAB_0052f632
        cmp EBP,0xff00
        jle LAB_0052f571
        cmp EAX,0xff
        jge LAB_0052f5d0
    LAB_0052f571:
        mov EBX,EDI
        add EBX,dword ptr [DAT_005bf078]
        movd MM4,dword ptr [EBX]
        punpcklbw MM4,MM7
        psllw MM0,0x4
        movq MM7,MM5
        imul EAX,EBP
        psrlw MM7,0x3
        shr EAX,0x10
        pmulhw MM0,MM7
        movq MM2,qword ptr [DAT_005bfe70 + EAX*0x8]
        pxor MM7,MM7
        movq MM3,MM2
        packuswb MM0,MM7
        pxor MM3,qword ptr [DAT_005c0668]
        punpcklbw MM0,MM7
        cmp dword ptr [DAT_01c03998],0x0
        jnz LAB_0052f600
        pmullw MM4,MM3
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_0052f611
    LAB_0052f5d0:
        cmp EBP,0xff
        jl LAB_0052f571
        cmp dword ptr [DAT_01c03998],0x0
        jnz LAB_0052f571
        movq MM3,MM5
        psrlw MM3,0x3
        psllw MM0,0x4
        pmulhw MM0,MM3
        packuswb MM0,MM7
        jmp LAB_0052f611
    LAB_0052f600:
        psllw MM4,0x8
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0052f611:
        mov EBX,EDI
        add EBX,dword ptr [DAT_005bf078]
        movd dword ptr [EBX],MM0
        test dword ptr [DAT_01c039a0],0x80
        jz LAB_0052f632
        mov EAX,EDI
        add EAX,dword ptr [DAT_005bf07c]
        mov dword ptr [EAX],ESI
    LAB_0052f632:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_005bf014]
        jnc LAB_0052f670
        add ECX,dword ptr [DAT_005bf480]
        paddw MM5,MM6
        add EDX,dword ptr [DAT_005bf484]
        movq MM0,MM5
        add ESI,dword ptr [DAT_005bf488]
        pcmpgtw MM5,qword ptr [DAT_005bf48c]
        add EBP,dword ptr [DAT_005bf548]
        pand MM5,MM0
        jmp LAB_0052f4f0
    LAB_0052f670:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_0052f676:
        movq MM1,qword ptr [DAT_01c039a8]
        punpcklbw MM1,MM7
        test dword ptr [DAT_01c039a0],0x8
        jnz LAB_0052f69b
        mov EBP,0x0
        mov dword ptr [DAT_005bf548],0x0
    LAB_0052f69b:
        test dword ptr [DAT_01c039a0],0x40
        jz LAB_0052f6b7
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_005bf07c]
        cmp ESI,dword ptr [EAX]
        jl LAB_0052f76d
    LAB_0052f6b7:
        test dword ptr [DAT_01c039a0],0x1
        jz LAB_0052f7b6
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_005bf550]
        psrlq MM2,qword ptr [DAT_005bf570]
        pand MM0,qword ptr [DAT_005bf590]
        pand MM2,qword ptr [DAT_005bf5b0]
        paddd MM0,MM2
        movd EBX,MM0
        add EBX,dword ptr [DAT_01c02580]
        movzx EAX,byte ptr [EBX]
        movd MM0,dword ptr [DAT_01c00024 + EAX*0x4]
    LAB_0052f700:
        movq MM3,MM5
        punpcklbw MM0,MM7
        psrlw MM3,0x3
        psllw MM0,0x4
        pmulhw MM0,MM3
        packuswb MM0,MM7
        test dword ptr [DAT_01c039a0],0x8
        jz LAB_0052f74d
        mov EAX,EBP
        sar EAX,0x8
        movq MM3,qword ptr [DAT_005bfe70 + EAX*0x8]
        movq MM4,MM1
        movq MM2,MM3
        pmullw MM4,MM3
        pxor MM2,qword ptr [DAT_005c0668]
        punpcklbw MM0,MM7
        pmullw MM0,MM2
        paddw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0052f74d:
        mov EBX,dword ptr [DAT_005bf078]
        add EBX,EDI
        movd dword ptr [EBX],MM0
        test dword ptr [DAT_01c039a0],0x80
        jz LAB_0052f76d
        mov EAX,[DAT_005bf07c]
        add EAX,EDI
        mov dword ptr [EAX],ESI
    LAB_0052f76d:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_005bf014]
        jnc LAB_0052f4e0
        add ECX,dword ptr [DAT_005bf480]
        paddw MM5,MM6
        add EDX,dword ptr [DAT_005bf484]
        movq MM0,MM5
        add ESI,dword ptr [DAT_005bf488]
        pcmpgtw MM5,qword ptr [DAT_005bf48c]
        add EBP,dword ptr [DAT_005bf548]
        pand MM5,MM0
        jmp LAB_0052f69b
    LAB_0052f7b6:
        test dword ptr [DAT_01c039a0],0x200
        jnz LAB_0052f7d0
        movd MM0,dword ptr [DAT_01c00c70]
        jmp LAB_0052f700
    LAB_0052f7d0:
        movd MM0,dword ptr [DAT_005bf660]
        jmp LAB_0052f700
    LAB_0052f7e0:
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [ECX + 0x1c00c84]
        mov dword ptr [DAT_005bf05c],EBX
        mov dword ptr [DAT_005bf488],EDX
        mov EAX,[DAT_005bf05c]
        mov EBX,dword ptr [DAT_005bf488]
        mov ESI,dword ptr [DAT_005bf07c]
        mov ECX,dword ptr [DAT_005bf014]
    LAB_0052f811:
        mov dword ptr [ESI],EAX
        add EAX,EBX
        add ESI,0x4
        sub ECX,0x4
        jg LAB_0052f811
        pop EBP
        emms
}
}
