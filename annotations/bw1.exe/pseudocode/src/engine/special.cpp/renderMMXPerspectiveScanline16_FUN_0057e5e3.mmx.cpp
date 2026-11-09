// Name: engine_special.cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3
// Address: 0057e5e3
// Address Range: [[0057e5e3, 0057ee3e] [0057ee45, 0057eeab]]
// Convention: unknown
// Signature: void engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0057e5e3(void)
{
__asm {
        mov EAX,dword ptr [ESI + 0x8]
        mov ECX,dword ptr [EDI + 0x8]
        cmp EAX,ECX
        jbe LAB_0057e5f3
        xchg EAX,ECX
        xchg EDI,ESI
    LAB_0057e5f3:
        shr ECX,0x10
        shr EAX,0x10
        mov EBP,dword ptr [DAT_01c4480c + EBX*0x4]
        mov EBX,dword ptr [DAT_01c4354c + EBX*0x4]
        sub ECX,EAX
        jle LAB_0057eadc
        lea EBX,[EBX + EAX*0x2]
        shl ECX,0x2
        lea EBP,[EBP + EAX*0x4]
        mov dword ptr [DAT_00623964],ECX
        mov dword ptr [DAT_006239c8],EBX
        mov dword ptr [DAT_006239cc],EBP
        cmp dword ptr [DAT_01c51d14],0x80
        jz LAB_0057ee69
        cmp dword ptr [DAT_01c51d18],0x5
        jnz LAB_0057e6b4
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
        jmp LAB_0057e6e8
    LAB_0057e6b4:
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
    LAB_0057e6e8:
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
        jnz LAB_0057e764
        test dword ptr [DAT_01c51d14],0x4
        jnz LAB_0057e821
        test dword ptr [DAT_01c51d14],0x10
        jnz LAB_0057e8ad
        movq MM5,qword ptr [DAT_00624fc8]
        psllw MM5,0x7
        pxor MM6,MM6
        jmp LAB_0057e8d7
    LAB_0057e764:
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
        jmp LAB_0057e8d7
    LAB_0057e821:
        mov EAX,dword ptr [EDI + 0x10]
        mov EBX,dword ptr [ESI + 0x10]
        sub EAX,0x100
        sub EBX,0x100
        cmp EAX,0xfff
        jbe LAB_0057e83e
        mov EAX,0xfff
    LAB_0057e83e:
        cmp EBX,0xfff
        jbe LAB_0057e84b
        mov EBX,0xfff
    LAB_0057e84b:
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
        jmp LAB_0057e8d7
    LAB_0057e8ad:
        mov EAX,[DAT_01c4f024]
        sub EAX,0x100
        shr EAX,0x4
        cmp EAX,0xff
        jc LAB_0057e8c6
        mov EAX,0xff
    LAB_0057e8c6:
        movq MM5,qword ptr [DAT_006247d0 + EAX*0x8]
        psllw MM5,0x7
        pxor MM6,MM6
        jmp LAB_0057e8d7
    LAB_0057e8d7:
        mov ECX,dword ptr [DAT_006239a0]
        mov EDX,dword ptr [DAT_006239a4]
        mov ESI,dword ptr [DAT_006239ac]
        mov EDI,0x0
        cmp dword ptr [DAT_01c50934],0x0
        jnz LAB_0057e907
        test dword ptr [DAT_01c51d14],0x2
        jz LAB_0057ecd1
    LAB_0057e907:
        test dword ptr [DAT_01c51d14],0x100
        jnz LAB_0057e926
        mov EBP,dword ptr [DAT_0061b4b8]
        shl EBP,0x8
        mov dword ptr [DAT_00623e98],0x0
    LAB_0057e926:
        cmp dword ptr [DAT_01c50934],0x0
        jnz LAB_0057eae2
    LAB_0057e933:
        test dword ptr [DAT_01c51d14],0x40
        jz LAB_0057e94f
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_006239cc]
        cmp ESI,dword ptr [EAX]
        jl LAB_0057eaa4
    LAB_0057e94f:
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
        jz LAB_0057eaa4
        movd MM0,EAX
        punpcklbw MM0,MM7
        pxor MM4,MM4
        test dword ptr [DAT_01c51d14],0x20
        jz LAB_0057e9ee
        mov EBX,EDI
        shr EBX,0x1
        add EBX,dword ptr [DAT_006239c8]
        movzx EBX,word ptr [EBX]
        movd MM4,EBX
        pand MM4,qword ptr [DAT_00623f30]
        psllq MM4,qword ptr [DAT_00623fc0]
        movd MM2,EBX
        pand MM2,qword ptr [DAT_00623f28]
        psllq MM2,qword ptr [DAT_00623fa0]
        por MM4,MM2
        movd MM2,EBX
        pand MM2,qword ptr [DAT_00623f20]
        psllq MM2,qword ptr [DAT_00623f80]
        por MM4,MM2
        punpcklbw MM4,MM7
    LAB_0057e9ee:
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
        jnz LAB_0057ea37
        pmullw MM4,MM3
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_0057ea48
    LAB_0057ea37:
        psllw MM4,0x8
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0057ea48:
        mov EBX,EDI
        shr EBX,0x1
        add EBX,dword ptr [DAT_006239c8]
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
        mov word ptr [EBX],AX
        test dword ptr [DAT_01c51d14],0x80
        jz LAB_0057eaa4
        mov EAX,EDI
        add EAX,dword ptr [DAT_006239cc]
        mov dword ptr [EAX],ESI
    LAB_0057eaa4:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_00623964]
        jnc LAB_0057eadc
        add ECX,dword ptr [DAT_00623dd0]
        paddw MM5,MM6
        add EDX,dword ptr [DAT_00623dd4]
        movq MM0,MM5
        add ESI,dword ptr [DAT_00623dd8]
        pcmpgtw MM5,qword ptr [DAT_00623ddc]
        add EBP,dword ptr [DAT_00623e98]
        pand MM5,MM0
        jmp LAB_0057e933
    LAB_0057eadc:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_0057eae2:
        test dword ptr [DAT_01c51d14],0x40
        jz LAB_0057eafe
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_006239cc]
        cmp ESI,dword ptr [EAX]
        jl LAB_0057ec93
    LAB_0057eafe:
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
        jz LAB_0057ec93
        cmp EBP,0xff00
        jle LAB_0057eb67
        cmp EAX,0xff
        jge LAB_0057ebfa
    LAB_0057eb67:
        mov EBX,EDI
        shr EBX,0x1
        add EBX,dword ptr [DAT_006239c8]
        movzx EBX,word ptr [EBX]
        movd MM4,EBX
        pand MM4,qword ptr [DAT_00623f30]
        psllq MM4,qword ptr [DAT_00623fc0]
        movd MM2,EBX
        pand MM2,qword ptr [DAT_00623f28]
        psllq MM2,qword ptr [DAT_00623fa0]
        por MM4,MM2
        movd MM2,EBX
        pand MM2,qword ptr [DAT_00623f20]
        psllq MM2,qword ptr [DAT_00623f80]
        por MM4,MM2
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
        jnz LAB_0057ec26
        pmullw MM4,MM3
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
        jmp LAB_0057ec37
    LAB_0057ebfa:
        cmp EBP,0xff
        jl LAB_0057eb67
        cmp dword ptr [DAT_01c51d0c],0x0
        jnz LAB_0057eb67
        movq MM3,MM5
        psrlw MM3,0x3
        psllw MM0,0x4
        pmulhw MM0,MM3
        packuswb MM0,MM7
        jmp LAB_0057ec37
    LAB_0057ec26:
        psllw MM4,0x8
        pmullw MM0,MM2
        paddusw MM0,MM4
        psrlw MM0,0x8
        packuswb MM0,MM7
    LAB_0057ec37:
        mov EBX,EDI
        shr EBX,0x1
        add EBX,dword ptr [DAT_006239c8]
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
        mov word ptr [EBX],AX
        test dword ptr [DAT_01c51d14],0x80
        jz LAB_0057ec93
        mov EAX,EDI
        add EAX,dword ptr [DAT_006239cc]
        mov dword ptr [EAX],ESI
    LAB_0057ec93:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_00623964]
        jnc LAB_0057eccb
        add ECX,dword ptr [DAT_00623dd0]
        paddw MM5,MM6
        add EDX,dword ptr [DAT_00623dd4]
        movq MM0,MM5
        add ESI,dword ptr [DAT_00623dd8]
        pcmpgtw MM5,qword ptr [DAT_00623ddc]
        add EBP,dword ptr [DAT_00623e98]
        pand MM5,MM0
        jmp LAB_0057eae2
    LAB_0057eccb:
        pop EBP
        emms
        pop EDI
        pop ESI
        ret
    LAB_0057ecd1:
        movq MM1,qword ptr [DAT_01c51d1c]
        punpcklbw MM1,MM7
        test dword ptr [DAT_01c51d14],0x8
        jnz LAB_0057ecf6
        mov EBP,0x0
        mov dword ptr [DAT_00623e98],0x0
    LAB_0057ecf6:
        test dword ptr [DAT_01c51d14],0x40
        jz LAB_0057ed12
        lea EAX,[EDI]
        add EAX,dword ptr [DAT_006239cc]
        cmp ESI,dword ptr [EAX]
        jl LAB_0057ee03
    LAB_0057ed12:
        test dword ptr [DAT_01c51d14],0x1
        jz LAB_0057ee45
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
    LAB_0057ed5b:
        movq MM3,MM5
        punpcklbw MM0,MM7
        psrlw MM3,0x3
        psllw MM0,0x4
        pmulhw MM0,MM3
        packuswb MM0,MM7
        test dword ptr [DAT_01c51d14],0x8
        jz LAB_0057eda8
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
    LAB_0057eda8:
        mov EBX,EDI
        shr EBX,0x1
        add EBX,dword ptr [DAT_006239c8]
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
        mov word ptr [EBX],AX
        test dword ptr [DAT_01c51d14],0x80
        jz LAB_0057ee03
        mov EAX,[DAT_006239cc]
        add EAX,EDI
        mov dword ptr [EAX],ESI
    LAB_0057ee03:
        add EDI,0x4
        cmp EDI,dword ptr [DAT_00623964]
        jnc LAB_0057eadc
        add ECX,dword ptr [DAT_00623dd0]
        paddw MM5,MM6
        add EDX,dword ptr [DAT_00623dd4]
        movq MM0,MM5
        add ESI,dword ptr [DAT_00623dd8]
        pcmpgtw MM5,qword ptr [DAT_00623ddc]
        add EBP,dword ptr [DAT_00623e98]
        pand MM5,MM0
        jmp LAB_0057ecf6
    LAB_0057ee45:
        test dword ptr [DAT_01c51d14],0x200
        jnz LAB_0057ee5d
        movd MM0,dword ptr [DAT_01c4f020]
        jmp LAB_0057ed5b
    LAB_0057ee5d:
        movd MM0,dword ptr [DAT_00623fc8]
        jmp LAB_0057ed5b
    LAB_0057ee69:
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
    LAB_0057ee9a:
        mov dword ptr [ESI],EAX
        add EAX,EBX
        add ESI,0x4
        sub ECX,0x4
        jg LAB_0057ee9a
        pop EBP
        emms
}
}
