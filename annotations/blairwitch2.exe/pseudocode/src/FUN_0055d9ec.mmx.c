// Name: FUN_0055d9ec
// Address: 0055d9ec
// Address Range: [[0055d9ec, 0055dcb4]]
// Convention: unknown
// Signature: void FUN_0055d9ec(uint *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055d9ec(uint *param_1,int *param_2)
{
__asm {
        test dword ptr [DAT_01c38b40],0xffffffff
        jz LAB_0055db3a
        mov EBX,dword ptr [ESP + 0x8]
        mov EAX,dword ptr [EBX]
        mov ECX,dword ptr [EBX + 0x4]
        mov EDX,dword ptr [EBX + 0x8]
        sub EAX,dword ptr [DAT_01c38b78]
        sub ECX,dword ptr [DAT_01c38b7c]
        sub EDX,dword ptr [DAT_01c38b80]
        movd MM0,EAX
        movd MM1,ECX
        movd MM2,EDX
        imul dword ptr [DAT_01c38b9c]
        mov EBX,EAX
        mov ECX,EDX
        movd EAX,MM1
        imul dword ptr [DAT_01c38ba8]
        add EBX,EAX
        adc ECX,EDX
        movd EAX,MM2
        imul dword ptr [DAT_01c38bb4]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        movd MM4,EAX
        movd EAX,MM0
        imul dword ptr [DAT_01c38ba0]
        mov EBX,EAX
        mov ECX,EDX
        movd EAX,MM1
        imul dword ptr [DAT_01c38bac]
        add EBX,EAX
        adc ECX,EDX
        movd EAX,MM2
        imul dword ptr [DAT_01c38bb8]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        movd MM5,EAX
        movd EAX,MM0
        imul dword ptr [DAT_01c38ba4]
        mov EBX,EAX
        mov ECX,EDX
        movd EAX,MM1
        imul dword ptr [DAT_01c38bb0]
        add EBX,EAX
        adc ECX,EDX
        movd EAX,MM2
        imul dword ptr [DAT_01c38bbc]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        movd MM6,EAX
        neg EAX
        mov EDX,EAX
        xor EAX,EAX
        movd EBX,MM4
        movd ECX,MM6
        cmp EBX,ECX
        jle LAB_0055dabf
        or EAX,0x80000001
    LAB_0055dabf:
        cmp EBX,EDX
        jge LAB_0055dac8
        or EAX,0x80000002
    LAB_0055dac8:
        movd EBX,MM5
        cmp EBX,ECX
        jle LAB_0055dad4
        or EAX,0x80000004
    LAB_0055dad4:
        cmp EBX,EDX
        jge LAB_0055dadd
        or EAX,0x80000008
    LAB_0055dadd:
        cmp ECX,0x0
        jg LAB_0055dae7
        or EAX,0x80000010
    LAB_0055dae7:
        mov EBX,dword ptr [ESP + 0x4]
        movd dword ptr [EBX],MM4
        movd dword ptr [EBX + 0x4],MM5
        movd dword ptr [EBX + 0x8],MM6
        test EAX,0xffffffff
        jnz LAB_0055db34
        mov EAX,0x7fffffff
        xor EDX,EDX
        idiv ECX
        mov dword ptr [EBX + 0xc],EAX
        movd EAX,MM4
        imul dword ptr [DAT_01c35e38]
        idiv ECX
        add EAX,dword ptr [DAT_01c35e40]
        mov dword ptr [EBX + 0x10],EAX
        movd EAX,MM5
        imul dword ptr [DAT_01c35e3c]
        idiv ECX
        add EAX,dword ptr [DAT_01c35e44]
        mov dword ptr [EBX + 0x14],EAX
        emms
        ret
    LAB_0055db34:
        mov dword ptr [EBX + 0x10],EAX
        emms
        ret
    LAB_0055db3a:
        push ESI
        push EDI
        mov ESI,dword ptr [ESP + 0x10]
        mov EDI,dword ptr [ESP + 0xc]
        mov EAX,dword ptr [ESI]
        mov EBX,dword ptr [ESI + 0x4]
        mov ECX,dword ptr [ESI + 0x8]
        sub EAX,dword ptr [DAT_01c38b78]
        sub EBX,dword ptr [DAT_01c38b7c]
        sub ECX,dword ptr [DAT_01c38b80]
        mov [DAT_0061c7d8],EAX
        mov dword ptr [DAT_0061c7dc],EBX
        mov dword ptr [DAT_0061c7e0],ECX
        imul dword ptr [DAT_01c38b9c]
        mov EBX,EAX
        mov ECX,EDX
        mov EAX,[DAT_0061c7dc]
        imul dword ptr [DAT_01c38ba8]
        add EBX,EAX
        adc ECX,EDX
        mov EAX,[DAT_0061c7e0]
        imul dword ptr [DAT_01c38bb4]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        mov [DAT_0061c7e8],EAX
        mov EAX,[DAT_0061c7d8]
        imul dword ptr [DAT_01c38ba0]
        mov EBX,EAX
        mov ECX,EDX
        mov EAX,[DAT_0061c7dc]
        imul dword ptr [DAT_01c38bac]
        add EBX,EAX
        adc ECX,EDX
        mov EAX,[DAT_0061c7e0]
        imul dword ptr [DAT_01c38bb8]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        mov [DAT_0061c7ec],EAX
        mov EAX,[DAT_0061c7d8]
        imul dword ptr [DAT_01c38ba4]
        mov EBX,EAX
        mov ECX,EDX
        mov EAX,[DAT_0061c7dc]
        imul dword ptr [DAT_01c38bb0]
        add EBX,EAX
        adc ECX,EDX
        mov EAX,[DAT_0061c7e0]
        imul dword ptr [DAT_01c38bbc]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        mov [DAT_0061c7f0],EAX
        neg EAX
        mov EDX,EAX
        xor EAX,EAX
        mov EBX,dword ptr [DAT_0061c7e8]
        mov ECX,dword ptr [DAT_0061c7f0]
        cmp EBX,ECX
        jle LAB_0055dc27
        or EAX,0x80000001
    LAB_0055dc27:
        cmp EBX,EDX
        jge LAB_0055dc30
        or EAX,0x80000002
    LAB_0055dc30:
        mov EBX,dword ptr [DAT_0061c7ec]
        cmp EBX,ECX
        jle LAB_0055dc3f
        or EAX,0x80000004
    LAB_0055dc3f:
        cmp EBX,EDX
        jge LAB_0055dc48
        or EAX,0x80000008
    LAB_0055dc48:
        cmp ECX,0x0
        jg LAB_0055dc52
        or EAX,0x80000010
    LAB_0055dc52:
        test EAX,0xffffffff
        jnz LAB_0055dca1
        mov EAX,[DAT_0061c7e8]
        mov dword ptr [EDI],EAX
        mov dword ptr [EDI + 0x4],EBX
        mov dword ptr [EDI + 0x8],ECX
        mov EAX,0x7fffffff
        xor EDX,EDX
        idiv ECX
        mov dword ptr [EDI + 0xc],EAX
        mov EAX,[DAT_0061c7e8]
        imul dword ptr [DAT_01c35e38]
        idiv ECX
        add EAX,dword ptr [DAT_01c35e40]
        mov dword ptr [EDI + 0x10],EAX
        mov EAX,[DAT_0061c7ec]
        imul dword ptr [DAT_01c35e3c]
        idiv ECX
        add EAX,dword ptr [DAT_01c35e44]
        mov dword ptr [EDI + 0x14],EAX
        pop EDI
        pop ESI
        ret
    LAB_0055dca1:
        mov EDX,dword ptr [DAT_0061c7e8]
        mov dword ptr [EDI],EDX
        mov dword ptr [EDI + 0x4],EBX
        mov dword ptr [EDI + 0x8],ECX
        mov dword ptr [EDI + 0x10],EAX
}
}
