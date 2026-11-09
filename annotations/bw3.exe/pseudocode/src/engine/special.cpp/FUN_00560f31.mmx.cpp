// Name: engine_special.cpp_FUN_00560f31
// Address: 00560f31
// Address Range: [[00560f31, 005610b1] [005610c0, 0056117c] [00561180, 0056120b] [00561210, 00561239] [00561240, 00561364] [00561370, 005613d9] [005613e0, 005613e5] [005613f0, 005614b9] [005614f0, 00561559] [00561560, 00561698] [005616a6, 005616bd] [005616c0, 005616cb] [005616d0, 00561712]]
// Convention: unknown
// Signature: void engine_special_cpp_FUN_00560f31(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_special_cpp_FUN_00560f31(void)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_00560f41
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_00560f41:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [DAT_01c60dac + EBX*0x4]
        mov EBX,dword ptr [DAT_01c5faec + EBX*0x4]
        sub ECX,EAX
        jle LAB_005613e0
        lea EBX,[EBX + EAX*0x4]
        shl ECX,0x2
        lea EBP,[EBP + EAX*0x4]
        mov dword ptr [DAT_006048a4],ECX
        mov dword ptr [DAT_00604908],EBX
        mov dword ptr [DAT_0060490c],EBP
        cmp dword ptr [DAT_01c6e2b4],0x80
        jz LAB_005616d0
        cmp dword ptr [DAT_01c6e2b8],0x5
        jnz LAB_00561002
        mov EAX,dword ptr [ESI + 0x18]
        mov EBX,dword ptr [ESI + 0x28]
        cdq
        shld EDX,EAX,0x18
        shl EAX,0x18
        idiv EBX
        mov [DAT_006048e0],EAX
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [EDI + 0x28]
        cdq
        shld EDX,EAX,0x18
        shl EAX,0x18
        idiv EBX
        sub EAX,dword ptr [DAT_006048e0]
        imul dword ptr [DAT_01c6b5d4 + ECX]
        mov dword ptr [DAT_00604d10],EDX
        mov EAX,dword ptr [ESI + 0x20]
        mov EBX,dword ptr [ESI + 0x28]
        cdq
        shld EDX,EAX,0x18
        shl EAX,0x18
        idiv EBX
        mov [DAT_006048e4],EAX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [EDI + 0x28]
        cdq
        shld EDX,EAX,0x18
        shl EAX,0x18
        idiv EBX
        sub EAX,dword ptr [DAT_006048e4]
        imul dword ptr [DAT_01c6b5d4 + ECX]
        mov dword ptr [DAT_00604d14],EDX
        jmp LAB_00561036
    LAB_00561002:
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [DAT_01c6b5d4 + ECX]
        mov dword ptr [DAT_006048e0],EBX
        mov dword ptr [DAT_00604d10],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [DAT_01c6b5d4 + ECX]
        mov dword ptr [DAT_006048e4],EBX
        mov dword ptr [DAT_00604d14],EDX
    LAB_00561036:
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [DAT_01c6b5d4 + ECX]
        mov dword ptr [DAT_006048ec],EBX
        mov dword ptr [DAT_00604d18],EDX
        mov EAX,dword ptr [EDI + 0x30]
        mov EBX,dword ptr [ESI + 0x30]
        sub EAX,EBX
        imul dword ptr [DAT_01c6b5d4 + ECX]
        mov dword ptr [DAT_00604dd0],EBX
        mov dword ptr [DAT_00604dd8],EDX
        mov EBP,dword ptr [DAT_00604dd0]
        pxor MM7,MM7
        test dword ptr [DAT_01c6e2b4],0x200
        jnz LAB_005610c0
        test dword ptr [DAT_01c6e2b4],0x4
        jnz LAB_00561180
        test dword ptr [DAT_01c6e2b4],0x10
        jnz LAB_00561210
        movq MM5,qword ptr [DAT_00605f08]
        psllw MM5,0x7
        pxor MM6,MM6
        jmp LAB_00561240
    LAB_005610c0:
        mov EAX,dword ptr [EDI + 0x10]
        mov EBX,dword ptr [ESI + 0x10]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [DAT_01c6b5d4 + ECX]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [DAT_00604d90],EBX
        mov dword ptr [DAT_00604db0],EDX
        mov EAX,dword ptr [EDI + 0x38]
        mov EBX,dword ptr [ESI + 0x38]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [DAT_01c6b5d4 + ECX]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [DAT_00604d98],EBX
        mov dword ptr [DAT_00604db8],EDX
        mov EAX,dword ptr [EDI + 0x40]
        mov EBX,dword ptr [ESI + 0x40]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [DAT_01c6b5d4 + ECX]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [DAT_00604da0],EBX
        mov dword ptr [DAT_00604dc0],EDX
        movq MM5,qword ptr [DAT_00604d90]
        movq MM6,qword ptr [DAT_00604db0]
        psllq MM5,0x10
        psllq MM6,0x10
        por MM5,qword ptr [DAT_00604d98]
        por MM6,qword ptr [DAT_00604db8]
        psllq MM5,0x10
        psllq MM6,0x10
        por MM5,qword ptr [DAT_00604da0]
        por MM6,qword ptr [DAT_00604dc0]
        jmp LAB_00561240
    LAB_00561180:
        mov EAX,dword ptr [EDI + 0x10]
        mov EBX,dword ptr [ESI + 0x10]
        sub EAX,0x100
        sub EBX,0x100
        cmp EAX,0xfff
        jbe LAB_0056119d
        mov EAX,0xfff
    LAB_0056119d:
        cmp EBX,0xfff
        jbe LAB_005611aa
        mov EBX,0xfff
    LAB_005611aa:
        shl EAX,0x3
        shl EBX,0x3
        sub EAX,EBX
        imul dword ptr [DAT_01c6b5d4 + ECX]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [DAT_00604d90],EBX
        mov dword ptr [DAT_00604db0],EDX
        movq MM5,qword ptr [DAT_00604d90]
        movq MM6,qword ptr [DAT_00604db0]
        psllq MM5,0x10
        psllq MM6,0x10
        por MM5,qword ptr [DAT_00604d90]
        por MM6,qword ptr [DAT_00604db0]
        psllq MM5,0x10
        psllq MM6,0x10
        por MM5,qword ptr [DAT_00604d90]
        por MM6,qword ptr [DAT_00604db0]
        jmp LAB_00561240
    LAB_00561210:
        mov EAX,[DAT_01c6b5c4]
        sub EAX,0x100
        shr EAX,0x4
        cmp EAX,0xff
        jc LAB_00561229
        mov EAX,0xff
    LAB_00561229:
        movq MM5,qword ptr [DAT_00605710 + EAX*0x8]
        psllw MM5,0x7
        pxor MM6,MM6
        jmp LAB_00561240
    LAB_00561240:
        mov ECX,dword ptr [DAT_006048e0]
        mov EDX,dword ptr [DAT_006048e4]
        mov ESI,dword ptr [DAT_006048ec]
        mov EDI,0x0
        cmp dword ptr [DAT_01c6ced4],0x0
        jnz LAB_00561270
        test dword ptr [DAT_01c6e2b4],0x2
        jz LAB_00561566
    LAB_00561270:
        test dword ptr [DAT_01c6e2b4],0x100
        jnz LAB_0056128f
        mov EBP,dword ptr [DAT_005fba38]
        shl EBP,0x8
        mov dword ptr [DAT_00604dd8],0x0
    LAB_0056128f:
        cmp dword ptr [DAT_01c6ced4],0x0
        jnz LAB_005613f0
    LAB_0056129c:
        test dword ptr [DAT_01c6e2b4],0x40
        jz LAB_005612b8
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_0060490c]
        cmp ESI,dword ptr [EAX]
        jl LAB_005613a2
    LAB_005612b8:
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_00604df8]
        psrlq MM2,qword ptr [DAT_00604e18]
        pand MM0,qword ptr [DAT_00604e38]
        pand MM2,qword ptr [DAT_00604e58]
        paddd MM0,MM2
        movd EBX,MM0
        add EBX,dword ptr [DAT_01c6ced0]
        movzx EAX,byte ptr [EBX]
        mov EAX,dword ptr [DAT_01c6a974 + EAX*0x4]
        cmp EAX,0x0
        jz LAB_005613a2
        movd MM0,EAX
        punpcklbw MM0,MM7
        pxor MM4,MM4
        test dword ptr [DAT_01c6e2b4],0x20
        jz LAB_0056131c
        mov EBX,EDI
        add EBX,dword ptr [DAT_00604908]
        movd MM4,dword ptr [EBX]
        punpcklbw MM4,MM7
    LAB_0056131c:
        psllw MM0,0x4
        movq MM7,MM5
        mov EAX,EBP
        psrlw MM7,0x3
        sar EAX,0x8
        pmulhw MM0,MM7
        movq MM2,qword ptr [DAT_00605710 + EAX*0x8]
        pxor MM7,MM7
        movq MM3,MM2
        packuswb MM0,MM7
        pxor MM3,qword ptr [DAT_00605f08]
        punpcklbw MM0,MM7
        cmp dword ptr [DAT_01c6e2ac],0x0
        jnz LAB_00561370
        pmullw MM4,MM3
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_00561381
    LAB_00561370:
        psllw MM4,0x8
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_00561381:
        mov EBX,EDI
        add EBX,dword ptr [DAT_00604908]
        movd dword ptr [EBX],MM0
        test dword ptr [DAT_01c6e2b4],0x80
        jz LAB_005613a2
        mov EAX,EDI
        add EAX,dword ptr [DAT_0060490c]
        mov dword ptr [EAX],ESI
    LAB_005613a2:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_006048a4]
        jnc LAB_005613e0
        add ECX,dword ptr [DAT_00604d10]
        paddw MM5,MM6
        add EDX,dword ptr [DAT_00604d14]
        movq MM0,MM5
        add ESI,dword ptr [DAT_00604d18]
        pcmpgtw MM5,qword ptr [DAT_00604d1c]
        add EBP,dword ptr [DAT_00604dd8]
        pand MM5,MM0
        jmp LAB_0056129c
    LAB_005613e0:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_005613f0:
        test dword ptr [DAT_01c6e2b4],0x40
        jz LAB_0056140c
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_0060490c]
        cmp ESI,dword ptr [EAX]
        jl LAB_00561522
    LAB_0056140c:
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_00604df8]
        psrlq MM2,qword ptr [DAT_00604e18]
        pand MM0,qword ptr [DAT_00604e38]
        pand MM2,qword ptr [DAT_00604e58]
        paddd MM0,MM2
        movd EBX,MM0
        add EBX,dword ptr [DAT_01c6ced0]
        movzx EAX,byte ptr [EBX]
        movd MM0,dword ptr [DAT_01c6a974 + EAX*0x4]
        punpcklbw MM0,MM7
        sub EBX,dword ptr [DAT_01c6ced0]
        add EBX,dword ptr [DAT_01c6ced4]
        movzx EAX,byte ptr [EBX]
        test EAX,0xffffffff
        jz LAB_00561522
        mov EBX,EDI
        add EBX,dword ptr [DAT_00604908]
        movd MM4,dword ptr [EBX]
        punpcklbw MM4,MM7
        psllw MM0,0x4
        movq MM7,MM5
        imul EAX,EBP
        psrlw MM7,0x3
        shr EAX,0x10
        pmulhw MM0,MM7
        movq MM2,qword ptr [DAT_00605710 + EAX*0x8]
        pxor MM7,MM7
        movq MM3,MM2
        packuswb MM0,MM7
        pxor MM3,qword ptr [DAT_00605f08]
        punpcklbw MM0,MM7
        cmp dword ptr [DAT_01c6e2ac],0x0
        jnz LAB_005614f0
        pmullw MM4,MM3
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_00561501
    LAB_005614f0:
        psllw MM4,0x8
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_00561501:
        mov EBX,EDI
        add EBX,dword ptr [DAT_00604908]
        movd dword ptr [EBX],MM0
        test dword ptr [DAT_01c6e2b4],0x80
        jz LAB_00561522
        mov EAX,EDI
        add EAX,dword ptr [DAT_0060490c]
        mov dword ptr [EAX],ESI
    LAB_00561522:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_006048a4]
        jnc LAB_00561560
        add ECX,dword ptr [DAT_00604d10]
        paddw MM5,MM6
        add EDX,dword ptr [DAT_00604d14]
        movq MM0,MM5
        add ESI,dword ptr [DAT_00604d18]
        pcmpgtw MM5,qword ptr [DAT_00604d1c]
        add EBP,dword ptr [DAT_00604dd8]
        pand MM5,MM0
        jmp LAB_005613f0
    LAB_00561560:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_00561566:
        movq MM1,qword ptr [DAT_01c6e2bc]
        punpcklbw MM1,MM7
        test dword ptr [DAT_01c6e2b4],0x8
        jnz LAB_0056158b
        mov EBP,0x0
        mov dword ptr [DAT_00604dd8],0x0
    LAB_0056158b:
        test dword ptr [DAT_01c6e2b4],0x40
        jz LAB_005615a7
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_0060490c]
        cmp ESI,dword ptr [EAX]
        jl LAB_0056165d
    LAB_005615a7:
        test dword ptr [DAT_01c6e2b4],0x1
        jz LAB_005616a6
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_00604df8]
        psrlq MM2,qword ptr [DAT_00604e18]
        pand MM0,qword ptr [DAT_00604e38]
        pand MM2,qword ptr [DAT_00604e58]
        paddd MM0,MM2
        movd EBX,MM0
        add EBX,dword ptr [DAT_01c6ced0]
        movzx EAX,byte ptr [EBX]
        movd MM0,dword ptr [DAT_01c6a974 + EAX*0x4]
    LAB_005615f0:
        movq MM3,MM5
        punpcklbw MM0,MM7
        psrlw MM3,0x3
        psllw MM0,0x4
        pmulhw MM0,MM3
        packuswb MM0,MM7
        test dword ptr [DAT_01c6e2b4],0x8
        jz LAB_0056163d
        mov EAX,EBP
        sar EAX,0x8
        movq MM3,qword ptr [DAT_00605710 + EAX*0x8]
        movq MM4,MM1
        movq MM2,MM3
        pmullw MM4,MM3
        pxor MM2,qword ptr [DAT_00605f08]
        punpcklbw MM0,MM7
        pmullw MM0,MM2
        paddw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0056163d:
        mov EBX,dword ptr [DAT_00604908]
        add EBX,EDI
        movd dword ptr [EBX],MM0
        test dword ptr [DAT_01c6e2b4],0x80
        jz LAB_0056165d
        mov EAX,[DAT_0060490c]
        add EAX,EDI
        mov dword ptr [EAX],ESI
    LAB_0056165d:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_006048a4]
        jnc LAB_005613e0
        add ECX,dword ptr [DAT_00604d10]
        paddw MM5,MM6
        add EDX,dword ptr [DAT_00604d14]
        movq MM0,MM5
        add ESI,dword ptr [DAT_00604d18]
        pcmpgtw MM5,qword ptr [DAT_00604d1c]
        add EBP,dword ptr [DAT_00604dd8]
        pand MM5,MM0
        jmp LAB_0056158b
    LAB_005616a6:
        test dword ptr [DAT_01c6e2b4],0x200
        jnz LAB_005616c0
        movd MM0,dword ptr [DAT_01c6b5c0]
        jmp LAB_005615f0
    LAB_005616c0:
        movd MM0,dword ptr [DAT_00604f08]
        jmp LAB_005615f0
    LAB_005616d0:
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [DAT_01c6b5d4 + ECX]
        mov dword ptr [DAT_006048ec],EBX
        mov dword ptr [DAT_00604d18],EDX
        mov EAX,[DAT_006048ec]
        mov EBX,dword ptr [DAT_00604d18]
        mov ESI,dword ptr [DAT_0060490c]
        mov ECX,dword ptr [DAT_006048a4]
    LAB_00561701:
        mov dword ptr [ESI],EAX
        add EAX,EBX
        add ESI,0x4
        sub ECX,0x4
        jg LAB_00561701
        pop EBP
        emms
}
}
