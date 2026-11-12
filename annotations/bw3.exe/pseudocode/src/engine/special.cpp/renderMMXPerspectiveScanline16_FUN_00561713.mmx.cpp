// Name: engine_special.cpp_renderMMXPerspectiveScanline16_FUN_00561713
// Address: 00561713
// Address Range: [[00561713, 00561f6e] [00561f75, 00561fdb]]
// Convention: __edi_esi_ebx
// Signature: void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline16_FUN_00561713(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_00561723
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_00561723:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [DAT_01c60dac + EBX*0x4]
        mov EBX,dword ptr [DAT_01c5faec + EBX*0x4]
        sub ECX,EAX
        jle LAB_00561c0c
        lea EBX,[EBX + EAX*0x2]
        shl ECX,0x2
        lea EBP,[EBP + EAX*0x4]
        mov dword ptr [DAT_006048a4],ECX
        mov dword ptr [DAT_00604908],EBX
        mov dword ptr [DAT_0060490c],EBP
        cmp dword ptr [DAT_01c6e2b4],0x80
        jz LAB_00561f99
        cmp dword ptr [DAT_01c6e2b8],0x5
        jnz LAB_005617e4
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
        jmp LAB_00561818
    LAB_005617e4:
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
    LAB_00561818:
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
        jnz LAB_00561894
        test dword ptr [DAT_01c6e2b4],0x4
        jnz LAB_00561951
        test dword ptr [DAT_01c6e2b4],0x10
        jnz LAB_005619dd
        movq MM5,qword ptr [DAT_00605f08]
        psllw MM5,0x7
        pxor MM6,MM6
        jmp LAB_00561a07
    LAB_00561894:
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
        jmp LAB_00561a07
    LAB_00561951:
        mov EAX,dword ptr [EDI + 0x10]
        mov EBX,dword ptr [ESI + 0x10]
        sub EAX,0x100
        sub EBX,0x100
        cmp EAX,0xfff
        jbe LAB_0056196e
        mov EAX,0xfff
    LAB_0056196e:
        cmp EBX,0xfff
        jbe LAB_0056197b
        mov EBX,0xfff
    LAB_0056197b:
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
        jmp LAB_00561a07
    LAB_005619dd:
        mov EAX,[DAT_01c6b5c4]
        sub EAX,0x100
        shr EAX,0x4
        cmp EAX,0xff
        jc LAB_005619f6
        mov EAX,0xff
    LAB_005619f6:
        movq MM5,qword ptr [DAT_00605710 + EAX*0x8]
        psllw MM5,0x7
        pxor MM6,MM6
        jmp LAB_00561a07
    LAB_00561a07:
        mov ECX,dword ptr [DAT_006048e0]
        mov EDX,dword ptr [DAT_006048e4]
        mov ESI,dword ptr [DAT_006048ec]
        mov EDI,0x0
        cmp dword ptr [DAT_01c6ced4],0x0
        jnz LAB_00561a37
        test dword ptr [DAT_01c6e2b4],0x2
        jz LAB_00561e01
    LAB_00561a37:
        test dword ptr [DAT_01c6e2b4],0x100
        jnz LAB_00561a56
        mov EBP,dword ptr [DAT_005fba38]
        shl EBP,0x8
        mov dword ptr [DAT_00604dd8],0x0
    LAB_00561a56:
        cmp dword ptr [DAT_01c6ced4],0x0
        jnz LAB_00561c12
    LAB_00561a63:
        test dword ptr [DAT_01c6e2b4],0x40
        jz LAB_00561a7f
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_0060490c]
        cmp ESI,dword ptr [EAX]
        jl LAB_00561bd4
    LAB_00561a7f:
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
        jz LAB_00561bd4
        movd MM0,EAX
        punpcklbw MM0,MM7
        pxor MM4,MM4
        test dword ptr [DAT_01c6e2b4],0x20
        jz LAB_00561b1e
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
    LAB_00561b1e:
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
        jnz LAB_00561b67
        pmullw MM4,MM3
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_00561b78
    LAB_00561b67:
        psllw MM4,0x8
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_00561b78:
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
        jz LAB_00561bd4
        mov EAX,EDI
        add EAX,dword ptr [DAT_0060490c]
        mov dword ptr [EAX],ESI
    LAB_00561bd4:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_006048a4]
        jnc LAB_00561c0c
        add ECX,dword ptr [DAT_00604d10]
        paddw MM5,MM6
        add EDX,dword ptr [DAT_00604d14]
        movq MM0,MM5
        add ESI,dword ptr [DAT_00604d18]
        pcmpgtw MM5,qword ptr [DAT_00604d1c]
        add EBP,dword ptr [DAT_00604dd8]
        pand MM5,MM0
        jmp LAB_00561a63
    LAB_00561c0c:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_00561c12:
        test dword ptr [DAT_01c6e2b4],0x40
        jz LAB_00561c2e
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_0060490c]
        cmp ESI,dword ptr [EAX]
        jl LAB_00561dc3
    LAB_00561c2e:
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
        jz LAB_00561dc3
        cmp EBP,0xff00
        jle LAB_00561c97
        cmp EAX,0xff
        jge LAB_00561d2a
    LAB_00561c97:
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
        jnz LAB_00561d56
        pmullw MM4,MM3
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_00561d67
    LAB_00561d2a:
        cmp EBP,0xff
        jl LAB_00561c97
        cmp dword ptr [DAT_01c6e2ac],0x0
        jnz LAB_00561c97
        movq MM3,MM5
        psrlw MM3,0x3
        psllw MM0,0x4
        pmulhw MM0,MM3
        packuswb MM0,MM7
        jmp LAB_00561d67
    LAB_00561d56:
        psllw MM4,0x8
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_00561d67:
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
        jz LAB_00561dc3
        mov EAX,EDI
        add EAX,dword ptr [DAT_0060490c]
        mov dword ptr [EAX],ESI
    LAB_00561dc3:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_006048a4]
        jnc LAB_00561dfb
        add ECX,dword ptr [DAT_00604d10]
        paddw MM5,MM6
        add EDX,dword ptr [DAT_00604d14]
        movq MM0,MM5
        add ESI,dword ptr [DAT_00604d18]
        pcmpgtw MM5,qword ptr [DAT_00604d1c]
        add EBP,dword ptr [DAT_00604dd8]
        pand MM5,MM0
        jmp LAB_00561c12
    LAB_00561dfb:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_00561e01:
        movq MM1,qword ptr [DAT_01c6e2bc]
        punpcklbw MM1,MM7
        test dword ptr [DAT_01c6e2b4],0x8
        jnz LAB_00561e26
        mov EBP,0x0
        mov dword ptr [DAT_00604dd8],0x0
    LAB_00561e26:
        test dword ptr [DAT_01c6e2b4],0x40
        jz LAB_00561e42
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_0060490c]
        cmp ESI,dword ptr [EAX]
        jl LAB_00561f33
    LAB_00561e42:
        test dword ptr [DAT_01c6e2b4],0x1
        jz LAB_00561f75
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
    LAB_00561e8b:
        movq MM3,MM5
        punpcklbw MM0,MM7
        psrlw MM3,0x3
        psllw MM0,0x4
        pmulhw MM0,MM3
        packuswb MM0,MM7
        test dword ptr [DAT_01c6e2b4],0x8
        jz LAB_00561ed8
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
    LAB_00561ed8:
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
        jz LAB_00561f33
        mov EAX,[DAT_0060490c]
        add EAX,EDI
        mov dword ptr [EAX],ESI
    LAB_00561f33:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_006048a4]
        jnc LAB_00561c0c
        add ECX,dword ptr [DAT_00604d10]
        paddw MM5,MM6
        add EDX,dword ptr [DAT_00604d14]
        movq MM0,MM5
        add ESI,dword ptr [DAT_00604d18]
        pcmpgtw MM5,qword ptr [DAT_00604d1c]
        add EBP,dword ptr [DAT_00604dd8]
        pand MM5,MM0
        jmp LAB_00561e26
    LAB_00561f75:
        test dword ptr [DAT_01c6e2b4],0x200
        jnz LAB_00561f8d
        movd MM0,dword ptr [DAT_01c6b5c0]
        jmp LAB_00561e8b
    LAB_00561f8d:
        movd MM0,dword ptr [DAT_00604f08]
        jmp LAB_00561e8b
    LAB_00561f99:
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
    LAB_00561fca:
        mov dword ptr [ESI],EAX
        add EAX,EBX
        add ESI,0x4
        sub ECX,0x4
        jg LAB_00561fca
        pop EBP
        emms
}
}
