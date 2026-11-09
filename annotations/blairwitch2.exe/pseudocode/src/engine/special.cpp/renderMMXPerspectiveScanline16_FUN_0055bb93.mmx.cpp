// Name: engine_special.cpp_renderMMXPerspectiveScanline16_FUN_0055bb93
// Address: 0055bb93
// Address Range: [[0055bb93, 0055c3ee] [0055c3f5, 0055c45b]]
// Convention: unknown
// Signature: void engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93(void)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_0055bba3
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_0055bba3:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [DAT_01c2b64c + EBX*0x4]
        mov EBX,dword ptr [DAT_01c2a38c + EBX*0x4]
        sub ECX,EAX
        jle LAB_0055c08c
        lea EBX,[EBX + EAX*0x2]
        shl ECX,0x2
        lea EBP,[EBP + EAX*0x4]
        mov dword ptr [DAT_0061c314],ECX
        mov dword ptr [DAT_0061c378],EBX
        mov dword ptr [DAT_0061c37c],EBP
        cmp dword ptr [DAT_01c38b54],0x80
        jz LAB_0055c419
        cmp dword ptr [DAT_01c38b58],0x5
        jnz LAB_0055bc64
        mov EAX,dword ptr [ESI + 0x18]
        mov EBX,dword ptr [ESI + 0x28]
        cdq
        shld EDX,EAX,0x18
        shl EAX,0x18
        idiv EBX
        mov [DAT_0061c350],EAX
        mov EAX,dword ptr [EDI + 0x18]
        mov EBX,dword ptr [EDI + 0x28]
        cdq
        shld EDX,EAX,0x18
        shl EAX,0x18
        idiv EBX
        sub EAX,dword ptr [DAT_0061c350]
        imul dword ptr [DAT_01c35e74 + ECX]
        mov dword ptr [DAT_0061c780],EDX
        mov EAX,dword ptr [ESI + 0x20]
        mov EBX,dword ptr [ESI + 0x28]
        cdq
        shld EDX,EAX,0x18
        shl EAX,0x18
        idiv EBX
        mov [DAT_0061c354],EAX
        mov EAX,dword ptr [EDI + 0x20]
        mov EBX,dword ptr [EDI + 0x28]
        cdq
        shld EDX,EAX,0x18
        shl EAX,0x18
        idiv EBX
        sub EAX,dword ptr [DAT_0061c354]
        imul dword ptr [DAT_01c35e74 + ECX]
        mov dword ptr [DAT_0061c784],EDX
        jmp LAB_0055bc98
    LAB_0055bc64:
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
    LAB_0055bc98:
        mov EAX,dword ptr [EDI + 0x28]
        mov EBX,dword ptr [ESI + 0x28]
        sub EAX,EBX
        imul dword ptr [DAT_01c35e74 + ECX]
        mov dword ptr [DAT_0061c35c],EBX
        mov dword ptr [DAT_0061c788],EDX
        mov EAX,dword ptr [EDI + 0x30]
        mov EBX,dword ptr [ESI + 0x30]
        sub EAX,EBX
        imul dword ptr [DAT_01c35e74 + ECX]
        mov dword ptr [DAT_0061c840],EBX
        mov dword ptr [DAT_0061c848],EDX
        mov EBP,dword ptr [DAT_0061c840]
        pxor MM7,MM7
        test dword ptr [DAT_01c38b54],0x200
        jnz LAB_0055bd14
        test dword ptr [DAT_01c38b54],0x4
        jnz LAB_0055bdd1
        test dword ptr [DAT_01c38b54],0x10
        jnz LAB_0055be5d
        movq MM5,qword ptr [DAT_0061d978]
        psllw MM5,0x7
        pxor MM6,MM6
        jmp LAB_0055be87
    LAB_0055bd14:
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
        jmp LAB_0055be87
    LAB_0055bdd1:
        mov EAX,dword ptr [EDI + 0x10]
        mov EBX,dword ptr [ESI + 0x10]
        sub EAX,0x100
        sub EBX,0x100
        cmp EAX,0xfff
        jbe LAB_0055bdee
        mov EAX,0xfff
    LAB_0055bdee:
        cmp EBX,0xfff
        jbe LAB_0055bdfb
        mov EBX,0xfff
    LAB_0055bdfb:
        shl EAX,0x3
        shl EBX,0x3
        sub EAX,EBX
        imul dword ptr [DAT_01c35e74 + ECX]
        and EBX,0xffff
        and EDX,0xffff
        mov dword ptr [DAT_0061c800],EBX
        mov dword ptr [DAT_0061c820],EDX
        movq MM5,qword ptr [DAT_0061c800]
        movq MM6,qword ptr [DAT_0061c820]
        psllq MM5,0x10
        psllq MM6,0x10
        por MM5,qword ptr [DAT_0061c800]
        por MM6,qword ptr [DAT_0061c820]
        psllq MM5,0x10
        psllq MM6,0x10
        por MM5,qword ptr [DAT_0061c800]
        por MM6,qword ptr [DAT_0061c820]
        jmp LAB_0055be87
    LAB_0055be5d:
        mov EAX,[DAT_01c35e64]
        sub EAX,0x100
        shr EAX,0x4
        cmp EAX,0xff
        jc LAB_0055be76
        mov EAX,0xff
    LAB_0055be76:
        movq MM5,qword ptr [DAT_0061d180 + EAX*0x8]
        psllw MM5,0x7
        pxor MM6,MM6
        jmp LAB_0055be87
    LAB_0055be87:
        mov ECX,dword ptr [DAT_0061c350]
        mov EDX,dword ptr [DAT_0061c354]
        mov ESI,dword ptr [DAT_0061c35c]
        mov EDI,0x0
        cmp dword ptr [DAT_01c37774],0x0
        jnz LAB_0055beb7
        test dword ptr [DAT_01c38b54],0x2
        jz LAB_0055c281
    LAB_0055beb7:
        test dword ptr [DAT_01c38b54],0x100
        jnz LAB_0055bed6
        mov EBP,dword ptr [DAT_006141d8]
        shl EBP,0x8
        mov dword ptr [DAT_0061c848],0x0
    LAB_0055bed6:
        cmp dword ptr [DAT_01c37774],0x0
        jnz LAB_0055c092
    LAB_0055bee3:
        test dword ptr [DAT_01c38b54],0x40
        jz LAB_0055beff
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_0061c37c]
        cmp ESI,dword ptr [EAX]
        jl LAB_0055c054
    LAB_0055beff:
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_0061c868]
        psrlq MM2,qword ptr [DAT_0061c888]
        pand MM0,qword ptr [DAT_0061c8a8]
        pand MM2,qword ptr [DAT_0061c8c8]
        paddd MM0,MM2
        movd EBX,MM0
        add EBX,dword ptr [DAT_01c37770]
        movzx EAX,byte ptr [EBX]
        mov EAX,dword ptr [DAT_01c35214 + EAX*0x4]
        cmp EAX,0x0
        jz LAB_0055c054
        movd MM0,EAX
        punpcklbw MM0,MM7
        pxor MM4,MM4
        test dword ptr [DAT_01c38b54],0x20
        jz LAB_0055bf9e
        mov EBX,EDI
        shr EBX,0x1
        add EBX,dword ptr [DAT_0061c378]
        movzx EBX,word ptr [EBX]
        movd MM4,EBX
        pand MM4,qword ptr [DAT_0061c8e0]
        psllq MM4,qword ptr [DAT_0061c970]
        movd MM2,EBX
        pand MM2,qword ptr [DAT_0061c8d8]
        psllq MM2,qword ptr [DAT_0061c950]
        por MM4,MM2
        movd MM2,EBX
        pand MM2,qword ptr [DAT_0061c8d0]
        psllq MM2,qword ptr [DAT_0061c930]
        por MM4,MM2
        punpcklbw MM4,MM7
    LAB_0055bf9e:
        psllw MM0,0x4
        movq MM7,MM5
        mov EAX,EBP
        psrlw MM7,0x3
        sar EAX,0x8
        pmulhw MM0,MM7
        movq MM2,qword ptr [DAT_0061d180 + EAX*0x8]
        pxor MM7,MM7
        movq MM3,MM2
        packuswb MM0,MM7
        pxor MM3,qword ptr [DAT_0061d978]
        punpcklbw MM0,MM7
        cmp dword ptr [DAT_01c38b4c],0x0
        jnz LAB_0055bfe7
        pmullw MM4,MM3
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_0055bff8
    LAB_0055bfe7:
        psllw MM4,0x8
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0055bff8:
        mov EBX,EDI
        shr EBX,0x1
        add EBX,dword ptr [DAT_0061c378]
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
        mov word ptr [EBX],AX
        test dword ptr [DAT_01c38b54],0x80
        jz LAB_0055c054
        mov EAX,EDI
        add EAX,dword ptr [DAT_0061c37c]
        mov dword ptr [EAX],ESI
    LAB_0055c054:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_0061c314]
        jnc LAB_0055c08c
        add ECX,dword ptr [DAT_0061c780]
        paddw MM5,MM6
        add EDX,dword ptr [DAT_0061c784]
        movq MM0,MM5
        add ESI,dword ptr [DAT_0061c788]
        pcmpgtw MM5,qword ptr [DAT_0061c78c]
        add EBP,dword ptr [DAT_0061c848]
        pand MM5,MM0
        jmp LAB_0055bee3
    LAB_0055c08c:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_0055c092:
        test dword ptr [DAT_01c38b54],0x40
        jz LAB_0055c0ae
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_0061c37c]
        cmp ESI,dword ptr [EAX]
        jl LAB_0055c243
    LAB_0055c0ae:
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_0061c868]
        psrlq MM2,qword ptr [DAT_0061c888]
        pand MM0,qword ptr [DAT_0061c8a8]
        pand MM2,qword ptr [DAT_0061c8c8]
        paddd MM0,MM2
        movd EBX,MM0
        add EBX,dword ptr [DAT_01c37770]
        movzx EAX,byte ptr [EBX]
        movd MM0,dword ptr [DAT_01c35214 + EAX*0x4]
        punpcklbw MM0,MM7
        sub EBX,dword ptr [DAT_01c37770]
        add EBX,dword ptr [DAT_01c37774]
        movzx EAX,byte ptr [EBX]
        test EAX,0xffffffff
        jz LAB_0055c243
        cmp EBP,0xff00
        jle LAB_0055c117
        cmp EAX,0xff
        jge LAB_0055c1aa
    LAB_0055c117:
        mov EBX,EDI
        shr EBX,0x1
        add EBX,dword ptr [DAT_0061c378]
        movzx EBX,word ptr [EBX]
        movd MM4,EBX
        pand MM4,qword ptr [DAT_0061c8e0]
        psllq MM4,qword ptr [DAT_0061c970]
        movd MM2,EBX
        pand MM2,qword ptr [DAT_0061c8d8]
        psllq MM2,qword ptr [DAT_0061c950]
        por MM4,MM2
        movd MM2,EBX
        pand MM2,qword ptr [DAT_0061c8d0]
        psllq MM2,qword ptr [DAT_0061c930]
        por MM4,MM2
        punpcklbw MM4,MM7
        psllw MM0,0x4
        movq MM7,MM5
        imul EAX,EBP
        psrlw MM7,0x3
        shr EAX,0x10
        pmulhw MM0,MM7
        movq MM2,qword ptr [DAT_0061d180 + EAX*0x8]
        pxor MM7,MM7
        movq MM3,MM2
        packuswb MM0,MM7
        pxor MM3,qword ptr [DAT_0061d978]
        punpcklbw MM0,MM7
        cmp dword ptr [DAT_01c38b4c],0x0
        jnz LAB_0055c1d6
        pmullw MM4,MM3
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_0055c1e7
    LAB_0055c1aa:
        cmp EBP,0xff
        jl LAB_0055c117
        cmp dword ptr [DAT_01c38b4c],0x0
        jnz LAB_0055c117
        movq MM3,MM5
        psrlw MM3,0x3
        psllw MM0,0x4
        pmulhw MM0,MM3
        packuswb MM0,MM7
        jmp LAB_0055c1e7
    LAB_0055c1d6:
        psllw MM4,0x8
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0055c1e7:
        mov EBX,EDI
        shr EBX,0x1
        add EBX,dword ptr [DAT_0061c378]
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
        mov word ptr [EBX],AX
        test dword ptr [DAT_01c38b54],0x80
        jz LAB_0055c243
        mov EAX,EDI
        add EAX,dword ptr [DAT_0061c37c]
        mov dword ptr [EAX],ESI
    LAB_0055c243:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_0061c314]
        jnc LAB_0055c27b
        add ECX,dword ptr [DAT_0061c780]
        paddw MM5,MM6
        add EDX,dword ptr [DAT_0061c784]
        movq MM0,MM5
        add ESI,dword ptr [DAT_0061c788]
        pcmpgtw MM5,qword ptr [DAT_0061c78c]
        add EBP,dword ptr [DAT_0061c848]
        pand MM5,MM0
        jmp LAB_0055c092
    LAB_0055c27b:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_0055c281:
        movq MM1,qword ptr [DAT_01c38b5c]
        punpcklbw MM1,MM7
        test dword ptr [DAT_01c38b54],0x8
        jnz LAB_0055c2a6
        mov EBP,0x0
        mov dword ptr [DAT_0061c848],0x0
    LAB_0055c2a6:
        test dword ptr [DAT_01c38b54],0x40
        jz LAB_0055c2c2
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_0061c37c]
        cmp ESI,dword ptr [EAX]
        jl LAB_0055c3b3
    LAB_0055c2c2:
        test dword ptr [DAT_01c38b54],0x1
        jz LAB_0055c3f5
        movd MM0,ECX
        movd MM2,EDX
        psrlq MM0,qword ptr [DAT_0061c868]
        psrlq MM2,qword ptr [DAT_0061c888]
        pand MM0,qword ptr [DAT_0061c8a8]
        pand MM2,qword ptr [DAT_0061c8c8]
        paddd MM0,MM2
        movd EBX,MM0
        add EBX,dword ptr [DAT_01c37770]
        movzx EAX,byte ptr [EBX]
        movd MM0,dword ptr [DAT_01c35214 + EAX*0x4]
    LAB_0055c30b:
        movq MM3,MM5
        punpcklbw MM0,MM7
        psrlw MM3,0x3
        psllw MM0,0x4
        pmulhw MM0,MM3
        packuswb MM0,MM7
        test dword ptr [DAT_01c38b54],0x8
        jz LAB_0055c358
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
    LAB_0055c358:
        mov EBX,EDI
        shr EBX,0x1
        add EBX,dword ptr [DAT_0061c378]
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
        mov word ptr [EBX],AX
        test dword ptr [DAT_01c38b54],0x80
        jz LAB_0055c3b3
        mov EAX,[DAT_0061c37c]
        add EAX,EDI
        mov dword ptr [EAX],ESI
    LAB_0055c3b3:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_0061c314]
        jnc LAB_0055c08c
        add ECX,dword ptr [DAT_0061c780]
        paddw MM5,MM6
        add EDX,dword ptr [DAT_0061c784]
        movq MM0,MM5
        add ESI,dword ptr [DAT_0061c788]
        pcmpgtw MM5,qword ptr [DAT_0061c78c]
        add EBP,dword ptr [DAT_0061c848]
        pand MM5,MM0
        jmp LAB_0055c2a6
    LAB_0055c3f5:
        test dword ptr [DAT_01c38b54],0x200
        jnz LAB_0055c40d
        movd MM0,dword ptr [DAT_01c35e60]
        jmp LAB_0055c30b
    LAB_0055c40d:
        movd MM0,dword ptr [DAT_0061c978]
        jmp LAB_0055c30b
    LAB_0055c419:
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
    LAB_0055c44a:
        mov dword ptr [ESI],EAX
        add EAX,EBX
        add ESI,0x4
        sub ECX,0x4
        jg LAB_0055c44a
        pop EBP
        emms
}
}
