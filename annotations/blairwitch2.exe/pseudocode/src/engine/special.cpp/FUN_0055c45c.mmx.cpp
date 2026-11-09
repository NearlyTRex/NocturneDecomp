// Name: engine_special.cpp_FUN_0055c45c
// Address: 0055c45c
// Address Range: [[0055c45c, 0055c529] [0055c530, 0055c7a5] [0055c7b0, 0055c7b8] [0055c7c0, 0055c7c7] [0055c7d0, 0055c84d] [0055c850, 0055c9a6] [0055c9b6, 0055c9cd] [0055c9d0, 0055c9db] [0055c9e0, 0055ca22]]
// Convention: unknown
// Signature: void engine_special_cpp_FUN_0055c45c(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_special_cpp_FUN_0055c45c(void)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_0055c46c
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_0055c46c:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [DAT_01c2b64c + EBX*0x4]
        mov EBX,dword ptr [DAT_01c2a38c + EBX*0x4]
        sub ECX,EAX
        jle LAB_0055c850
        lea EBX,[EBX + EAX*0x4]
        shl ECX,0x2
        lea EBP,[EBP + EAX*0x4]
        mov dword ptr [DAT_0061c314],ECX
        mov dword ptr [DAT_0061c378],EBX
        mov dword ptr [DAT_0061c37c],EBP
        cmp dword ptr [DAT_01c38b54],0x80
        jz LAB_0055c9e0
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [ESI + 0x18]
        sub EAX,EBX
        imul dword ptr [DAT_01c35e74 + ECX]
        mov dword ptr [DAT_0061c350],EBX
        mov dword ptr [DAT_0061c780],EDX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [ESI + 0x20]
        sub EAX,EBX
        imul dword ptr [DAT_01c35e74 + ECX]
        mov dword ptr [DAT_0061c354],EBX
        mov dword ptr [DAT_0061c784],EDX
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [DAT_01c35e74 + ECX]
        mov dword ptr [DAT_0061c35c],EBX
        mov dword ptr [DAT_0061c788],EDX
        test dword ptr [DAT_01c38b54],0x8
        jz LAB_0055c530
        mov EAX,dword ptr [EDI + 0x30]
        mov EBX,dword ptr [ESI + 0x30]
        sub EAX,EBX
        imul dword ptr [DAT_01c35e74 + ECX]
        mov dword ptr [DAT_0061c840],EBX
        mov dword ptr [DAT_0061c848],EDX
        jmp LAB_0055c544
    LAB_0055c530:
        mov dword ptr [DAT_0061c840],0x0
        mov dword ptr [DAT_0061c848],0x0
    LAB_0055c544:
        test dword ptr [DAT_01c38b54],0x20
        jz LAB_0055c56a
        mov EAX,dword ptr [EDI + 0x48]
        mov EBX,dword ptr [ESI + 0x48]
        sub EAX,EBX
        imul dword ptr [DAT_01c35e74 + ECX]
        mov dword ptr [DAT_0061c850],EBX
        mov dword ptr [DAT_0061c858],EDX
    LAB_0055c56a:
        mov EAX,dword ptr [EDI + 0x10]
        mov EBX,dword ptr [ESI + 0x10]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [DAT_01c35e74 + ECX]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [DAT_0061c800],EBX
        mov dword ptr [DAT_0061c820],EDX
        mov EAX,dword ptr [EDI + 0x38]
        mov EBX,dword ptr [ESI + 0x38]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [DAT_01c35e74 + ECX]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [DAT_0061c808],EBX
        mov dword ptr [DAT_0061c828],EDX
        mov EAX,dword ptr [EDI + 0x40]
        mov EBX,dword ptr [ESI + 0x40]
        shr EAX,0x1
        shr EBX,0x1
        sub EAX,EBX
        imul dword ptr [DAT_01c35e74 + ECX]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [DAT_0061c810],EBX
        mov dword ptr [DAT_0061c830],EDX
        movq MM5,qword ptr [DAT_0061c800]
        movq MM6,qword ptr [DAT_0061c820]
        psllq MM5,0x10
        psllq MM6,0x10
        por MM5,qword ptr [DAT_0061c808]
        por MM6,qword ptr [DAT_0061c828]
        psllq MM5,0x10
        psllq MM6,0x10
        por MM5,qword ptr [DAT_0061c810]
        por MM6,qword ptr [DAT_0061c830]
        movq qword ptr [DAT_0061c860],MM6
        mov ECX,dword ptr [DAT_0061c350]
        mov EDX,dword ptr [DAT_0061c354]
        mov ESI,dword ptr [DAT_0061c35c]
        mov EDI,0x0
        mov EBP,dword ptr [DAT_0061c840]
        pxor MM7,MM7
        test dword ptr [DAT_01c38b54],0x20
        jz LAB_0055c856
        movd MM6,dword ptr [DAT_0061c850]
    LAB_0055c660:
        test dword ptr [DAT_01c38b54],0x40
        jz LAB_0055c67c
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_0061c37c]
        cmp ESI,dword ptr [EAX]
        jl LAB_0055c80b
    LAB_0055c67c:
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_0061c868]
        psrlq MM2,qword ptr [DAT_0061c888]
        pand MM0,qword ptr [DAT_0061c8a8]
        pand MM2,qword ptr [DAT_0061c8c8]
        paddd MM0,MM2
        movd EBX,MM0
        test dword ptr [DAT_01c37784],0xffffffff
        jnz LAB_0055c6e8
        add EBX,dword ptr [DAT_01c37770]
        movzx EAX,byte ptr [EBX]
        movd MM0,dword ptr [DAT_01c35214 + EAX*0x4]
        punpcklbw MM0,MM7
        test dword ptr [DAT_01c37774],0xffffffff
        jz LAB_0055c6e1
        sub EBX,dword ptr [DAT_01c37770]
        add EBX,dword ptr [DAT_01c37774]
        movzx EAX,byte ptr [EBX]
        jmp LAB_0055c6fc
    LAB_0055c6e1:
        mov EAX,0xff
        jmp LAB_0055c6fc
    LAB_0055c6e8:
        shl EBX,0x2
        add EBX,dword ptr [DAT_01c37770]
        mov EAX,dword ptr [EBX]
        movd MM0,EAX
        punpcklbw MM0,MM7
        shr EAX,0x18
    LAB_0055c6fc:
        test EAX,0xffffffff
        jz LAB_0055c80b
        mov EBX,EDI
        add EBX,dword ptr [DAT_0061c378]
        movd MM4,dword ptr [EBX]
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
        test dword ptr [DAT_01c38b54],0x8
        jnz LAB_0055c743
        jmp LAB_0055c771
    LAB_0055c743:
        mov EBX,EBP
        sar EBX,0x8
        movq MM1,qword ptr [DAT_0061d180 + EBX*0x8]
        movq MM2,MM1
        pxor MM2,qword ptr [DAT_0061d978]
        movd MM3,dword ptr [DAT_01c38b5c]
        punpcklbw MM3,MM7
        pmullw MM0,MM2
        pmullw MM3,MM1
        paddw MM0,MM3
        psrlw MM0,0x8
    LAB_0055c771:
        movq MM2,qword ptr [DAT_0061d180 + EAX*0x8]
        movq MM3,MM2
        pxor MM3,qword ptr [DAT_0061d978]
        cmp dword ptr [DAT_01c38b4c],0x1
        jz LAB_0055c7b0
        cmp dword ptr [DAT_01c38b4c],0x2
        jz LAB_0055c7c0
        cmp dword ptr [DAT_01c38b4c],0x3
        jz LAB_0055c7d0
        pmullw MM0,MM2
        pmullw MM4,MM3
        jmp LAB_0055c7e0
    LAB_0055c7b0:
        pmullw MM0,MM2
        psllw MM4,0x8
        jmp LAB_0055c7e0
    LAB_0055c7c0:
        pmullw MM4,MM0
        pmullw MM0,MM2
        jmp LAB_0055c7e0
    LAB_0055c7d0:
        movq MM1,MM0
        pxor MM1,qword ptr [DAT_0061d978]
        pmullw MM4,MM1
        pmullw MM0,MM2
    LAB_0055c7e0:
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        mov EBX,EDI
        add EBX,dword ptr [DAT_0061c378]
        movd dword ptr [EBX],MM0
        test dword ptr [DAT_01c38b54],0x80
        jz LAB_0055c80b
        mov EAX,EDI
        add EAX,dword ptr [DAT_0061c37c]
        mov dword ptr [EAX],ESI
    LAB_0055c80b:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_0061c314]
        jnc LAB_0055c850
        add ECX,dword ptr [DAT_0061c780]
        paddw MM5,qword ptr [DAT_0061c860]
        add EDX,dword ptr [DAT_0061c784]
        movq MM0,MM5
        add ESI,dword ptr [DAT_0061c788]
        pcmpgtw MM5,qword ptr [DAT_0061c78c]
        add EBP,dword ptr [DAT_0061c848]
        pand MM5,MM0
        paddd MM6,qword ptr [DAT_0061c858]
        jmp LAB_0055c660
    LAB_0055c850:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_0055c856:
        movd MM1,dword ptr [DAT_01c38b5c]
        punpcklbw MM1,MM7
        test dword ptr [DAT_01c38b54],0x8
        jnz LAB_0055c87b
        mov EBP,0x0
        mov dword ptr [DAT_0061c848],0x0
    LAB_0055c87b:
        test dword ptr [DAT_01c38b54],0x40
        jz LAB_0055c897
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_0061c37c]
        cmp ESI,dword ptr [EAX]
        jl LAB_0055c967
    LAB_0055c897:
        test dword ptr [DAT_01c38b54],0x1
        jz LAB_0055c9b6
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_0061c868]
        psrlq MM2,qword ptr [DAT_0061c888]
        pand MM0,qword ptr [DAT_0061c8a8]
        pand MM2,qword ptr [DAT_0061c8c8]
        paddd MM0,MM2
        movd EBX,MM0
        test dword ptr [DAT_01c37784],0xffffffff
        jnz LAB_0055c8ee
        add EBX,dword ptr [DAT_01c37770]
        movzx EAX,byte ptr [EBX]
        movd MM0,dword ptr [DAT_01c35214 + EAX*0x4]
        jmp LAB_0055c8fa
    LAB_0055c8ee:
        shl EBX,0x2
        add EBX,dword ptr [DAT_01c37770]
        movd MM0,dword ptr [EBX]
    LAB_0055c8fa:
        movq MM3,MM5
        punpcklbw MM0,MM7
        psrlw MM3,0x3
        psllw MM0,0x4
        pmulhw MM0,MM3
        packuswb MM0,MM7
        test dword ptr [DAT_01c38b54],0x8
        jz LAB_0055c947
        mov EAX,EBP
        sar EAX,0x8
        movq MM3,qword ptr [DAT_0061d180 + EAX*0x8]
        movq MM4,MM1
        movq MM2,MM3
        pmullw MM4,MM3
        pxor MM2,qword ptr [DAT_0061d978]
        punpcklbw MM0,MM7
        pmullw MM0,MM2
        paddw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0055c947:
        mov EBX,dword ptr [DAT_0061c378]
        add EBX,EDI
        movd dword ptr [EBX],MM0
        test dword ptr [DAT_01c38b54],0x80
        jz LAB_0055c967
        mov EAX,[DAT_0061c37c]
        add EAX,EDI
        mov dword ptr [EAX],ESI
    LAB_0055c967:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_0061c314]
        jnc LAB_0055c850
        add ECX,dword ptr [DAT_0061c780]
        paddw MM5,qword ptr [DAT_0061c860]
        add EDX,dword ptr [DAT_0061c784]
        movq MM0,MM5
        add ESI,dword ptr [DAT_0061c788]
        pcmpgtw MM5,qword ptr [DAT_0061c78c]
        add EBP,dword ptr [DAT_0061c848]
        pand MM5,MM0
        jmp LAB_0055c87b
    LAB_0055c9b6:
        test dword ptr [DAT_01c38b54],0x200
        jnz LAB_0055c9d0
        movd MM0,dword ptr [DAT_01c35e60]
        jmp LAB_0055c8fa
    LAB_0055c9d0:
        movd MM0,dword ptr [DAT_0061c978]
        jmp LAB_0055c8fa
    LAB_0055c9e0:
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [DAT_01c35e74 + ECX]
        mov dword ptr [DAT_0061c35c],EBX
        mov dword ptr [DAT_0061c788],EDX
        mov EAX,[DAT_0061c35c]
        mov EBX,dword ptr [DAT_0061c788]
        mov ESI,dword ptr [DAT_0061c37c]
        mov ECX,dword ptr [DAT_0061c314]
    LAB_0055ca11:
        mov dword ptr [ESI],EAX
        add EAX,EBX
        add ESI,0x4
        sub ECX,0x4
        jg LAB_0055ca11
        pop EBP
        emms
}
}
