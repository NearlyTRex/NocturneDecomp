// Name: FUN_005625a3
// Address: 005625a3
// Address Range: [[005625a3, 00562670] [00562680, 00562930] [00562940, 00562948] [00562950, 00562957] [00562960, 00562a18] [00562a20, 00562bb1] [00562bc6, 00562bdd] [00562be0, 00562beb] [00562bf0, 00562c32]]
// Convention: unknown
// Signature: void FUN_005625a3(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005625a3(void)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_005625b3
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_005625b3:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [DAT_01c60dac + EBX*0x4]
        mov EBX,dword ptr [DAT_01c5faec + EBX*0x4]
        sub ECX,EAX
        jle LAB_00562a20
        lea EBX,[EBX + EAX*0x2]
        shl ECX,0x2
        lea EBP,[EBP + EAX*0x4]
        mov dword ptr [DAT_006048a4],ECX
        mov dword ptr [DAT_00604908],EBX
        mov dword ptr [DAT_0060490c],EBP
        cmp dword ptr [DAT_01c6e2b4],0x80
        jz LAB_00562bf0
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
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [DAT_01c6b5d4 + ECX]
        mov dword ptr [DAT_006048ec],EBX
        mov dword ptr [DAT_00604d18],EDX
        test dword ptr [DAT_01c6e2b4],0x8
        jz LAB_00562680
        mov EAX,dword ptr [EDI + 0x30]
        mov EBX,dword ptr [ESI + 0x30]
        sub EAX,EBX
        imul dword ptr [DAT_01c6b5d4 + ECX]
        mov dword ptr [DAT_00604dd0],EBX
        mov dword ptr [DAT_00604dd8],EDX
        jmp LAB_00562694
    LAB_00562680:
        mov dword ptr [DAT_00604dd0],0x0
        mov dword ptr [DAT_00604dd8],0x0
    LAB_00562694:
        test dword ptr [DAT_01c6e2b4],0x20
        jz LAB_005626ba
        mov EAX,dword ptr [EDI + 0x48]
        mov EBX,dword ptr [ESI + 0x48]
        sub EAX,EBX
        imul dword ptr [DAT_01c6b5d4 + ECX]
        mov dword ptr [DAT_00604de0],EBX
        mov dword ptr [DAT_00604de8],EDX
    LAB_005626ba:
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
        movq qword ptr [DAT_00604df0],MM6
        mov ECX,dword ptr [DAT_006048e0]
        mov EDX,dword ptr [DAT_006048e4]
        mov ESI,dword ptr [DAT_006048ec]
        mov EDI,0x0
        mov EBP,dword ptr [DAT_00604dd0]
        pxor MM7,MM7
        test dword ptr [DAT_01c6e2b4],0x20
        jz LAB_00562a26
        movd MM6,dword ptr [DAT_00604de0]
    LAB_005627b0:
        test dword ptr [DAT_01c6e2b4],0x40
        jz LAB_005627cc
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_0060490c]
        cmp ESI,dword ptr [EAX]
        jl LAB_005629d6
    LAB_005627cc:
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_00604df8]
        psrlq MM2,qword ptr [DAT_00604e18]
        pand MM0,qword ptr [DAT_00604e38]
        pand MM2,qword ptr [DAT_00604e58]
        paddd MM0,MM2
        movd EBX,MM0
        test dword ptr [DAT_01c6cee4],0xffffffff
        jnz LAB_00562838
        add EBX,dword ptr [DAT_01c6ced0]
        movzx EAX,byte ptr [EBX]
        movd MM0,dword ptr [DAT_01c6a974 + EAX*0x4]
        punpcklbw MM0,MM7
        test dword ptr [DAT_01c6ced4],0xffffffff
        jz LAB_00562831
        sub EBX,dword ptr [DAT_01c6ced0]
        add EBX,dword ptr [DAT_01c6ced4]
        movzx EAX,byte ptr [EBX]
        jmp LAB_0056284c
    LAB_00562831:
        mov EAX,0xff
        jmp LAB_0056284c
    LAB_00562838:
        shl EBX,0x2
        add EBX,dword ptr [DAT_01c6ced0]
        mov EAX,dword ptr [EBX]
        movd MM0,EAX
        punpcklbw MM0,MM7
        shr EAX,0x18
    LAB_0056284c:
        test EAX,0xffffffff
        jz LAB_005629d6
        mov EBX,EDI
        shr EBX,0x1
        add EBX,dword ptr [DAT_00604908]
        movzx EBX,word ptr [EBX]
        movd MM4,EBX
        pand MM4,qword ptr [DAT_00604e70]
        psllq MM4,qword ptr [DAT_00604f00]
        movd MM2,EBX
        pand MM2,qword ptr [DAT_00604e68]
        psllq MM2,qword ptr [DAT_00604ee0]
        por MM4,MM2
        movd MM2,EBX
        pand MM2,qword ptr [DAT_00604e60]
        psllq MM2,qword ptr [DAT_00604ec0]
        por MM4,MM2
        punpcklbw MM4,MM7
        psllw MM0,0x4
        movq MM7,MM5
        psrlw MM7,0x3
        pmulhw MM0,MM7
        pxor MM7,MM7
        packuswb MM0,MM7
        punpcklbw MM0,MM7
        movd EBX,MM6
        imul EAX,EBX
        shr EAX,0x10
        test dword ptr [DAT_01c6e2b4],0x8
        jnz LAB_005628ce
        jmp LAB_005628fc
    LAB_005628ce:
        mov EBX,EBP
        sar EBX,0x8
        movq MM1,qword ptr [DAT_00605710 + EBX*0x8]
        movq MM2,MM1
        pxor MM2,qword ptr [DAT_00605f08]
        movd MM3,dword ptr [DAT_01c6e2bc]
        punpcklbw MM3,MM7
        pmullw MM0,MM2
        pmullw MM3,MM1
        paddw MM0,MM3
        psrlw MM0,0x8
    LAB_005628fc:
        movq MM2,qword ptr [DAT_00605710 + EAX*0x8]
        movq MM3,MM2
        pxor MM3,qword ptr [DAT_00605f08]
        cmp dword ptr [DAT_01c6e2ac],0x1
        jz LAB_00562940
        cmp dword ptr [DAT_01c6e2ac],0x2
        jz LAB_00562950
        cmp dword ptr [DAT_01c6e2ac],0x3
        jz LAB_00562960
        pmullw MM0,MM2
        pmullw MM4,MM3
        jmp LAB_00562970
    LAB_00562940:
        pmullw MM0,MM2
        psllw MM4,0x8
        jmp LAB_00562970
    LAB_00562950:
        pmullw MM4,MM0
        pmullw MM0,MM2
        jmp LAB_00562970
    LAB_00562960:
        movq MM1,MM0
        pxor MM1,qword ptr [DAT_00605f08]
        pmullw MM4,MM1
        pmullw MM0,MM2
    LAB_00562970:
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        mov EBX,EDI
        shr EBX,0x1
        add EBX,dword ptr [DAT_00604908]
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
        mov word ptr [EBX],AX
        test dword ptr [DAT_01c6e2b4],0x80
        jz LAB_005629d6
        mov EAX,EDI
        add EAX,dword ptr [DAT_0060490c]
        mov dword ptr [EAX],ESI
    LAB_005629d6:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_006048a4]
        jnc LAB_00562a20
        add ECX,dword ptr [DAT_00604d10]
        paddw MM5,qword ptr [DAT_00604df0]
        add EDX,dword ptr [DAT_00604d14]
        movq MM0,MM5
        add ESI,dword ptr [DAT_00604d18]
        pcmpgtw MM5,qword ptr [DAT_00604d1c]
        add EBP,dword ptr [DAT_00604dd8]
        pand MM5,MM0
        paddd MM6,qword ptr [DAT_00604de8]
        jmp LAB_005627b0
    LAB_00562a20:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_00562a26:
        movd MM1,dword ptr [DAT_01c6e2bc]
        punpcklbw MM1,MM7
        test dword ptr [DAT_01c6e2b4],0x8
        jnz LAB_00562a4b
        mov EBP,0x0
        mov dword ptr [DAT_00604dd8],0x0
    LAB_00562a4b:
        test dword ptr [DAT_01c6e2b4],0x40
        jz LAB_00562a67
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_0060490c]
        cmp ESI,dword ptr [EAX]
        jl LAB_00562b72
    LAB_00562a67:
        test dword ptr [DAT_01c6e2b4],0x1
        jz LAB_00562bc6
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_00604df8]
        psrlq MM2,qword ptr [DAT_00604e18]
        pand MM0,qword ptr [DAT_00604e38]
        pand MM2,qword ptr [DAT_00604e58]
        paddd MM0,MM2
        movd EBX,MM0
        test dword ptr [DAT_01c6cee4],0xffffffff
        jnz LAB_00562abe
        add EBX,dword ptr [DAT_01c6ced0]
        movzx EAX,byte ptr [EBX]
        movd MM0,dword ptr [DAT_01c6a974 + EAX*0x4]
        jmp LAB_00562aca
    LAB_00562abe:
        shl EBX,0x2
        add EBX,dword ptr [DAT_01c6ced0]
        movd MM0,dword ptr [EBX]
    LAB_00562aca:
        movq MM3,MM5
        punpcklbw MM0,MM7
        psrlw MM3,0x3
        psllw MM0,0x4
        pmulhw MM0,MM3
        packuswb MM0,MM7
        test dword ptr [DAT_01c6e2b4],0x8
        jz LAB_00562b17
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
    LAB_00562b17:
        mov EBX,EDI
        shr EBX,0x1
        add EBX,dword ptr [DAT_00604908]
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
        mov word ptr [EBX],AX
        test dword ptr [DAT_01c6e2b4],0x80
        jz LAB_00562b72
        mov EAX,[DAT_0060490c]
        add EAX,EDI
        mov dword ptr [EAX],ESI
    LAB_00562b72:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_006048a4]
        jnc LAB_00562a20
        add ECX,dword ptr [DAT_00604d10]
        paddw MM5,qword ptr [DAT_00604df0]
        add EDX,dword ptr [DAT_00604d14]
        movq MM0,MM5
        add ESI,dword ptr [DAT_00604d18]
        pcmpgtw MM5,qword ptr [DAT_00604d1c]
        add EBP,dword ptr [DAT_00604dd8]
        pand MM5,MM0
        jmp LAB_00562a4b
    LAB_00562bc6:
        test dword ptr [DAT_01c6e2b4],0x200
        jnz LAB_00562be0
        movd MM0,dword ptr [DAT_01c6b5c0]
        jmp LAB_00562aca
    LAB_00562be0:
        movd MM0,dword ptr [DAT_00604f08]
        jmp LAB_00562aca
    LAB_00562bf0:
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
    LAB_00562c21:
        mov dword ptr [ESI],EAX
        add EAX,EBX
        add ESI,0x4
        sub ECX,0x4
        jg LAB_00562c21
        pop EBP
        emms
}
}
