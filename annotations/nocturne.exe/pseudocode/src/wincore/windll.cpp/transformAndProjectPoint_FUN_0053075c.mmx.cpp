// Name: wincore_windll.cpp_transformAndProjectPoint_FUN_0053075c
// Address: 0053075c
// Address Range: [[0053075c, 00530a24]]
// Convention: __cdecl
// Signature: void __cdecl wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(uint *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(uint *param_1,int *param_2)
{
__asm {
        test dword ptr [DAT_01c03948],0xffffffff
        jz LAB_005308aa
        mov EBX,dword ptr [ESP + 0x8]
        mov EAX,dword ptr [EBX]
        mov ECX,dword ptr [EBX + 0x4]
        mov EDX,dword ptr [EBX + 0x8]
        sub EAX,dword ptr [DAT_01c039b8]
        sub ECX,dword ptr [DAT_01c039bc]
        sub EDX,dword ptr [DAT_01c039c0]
        movd MM0,EAX
        movd MM1,ECX
        movd MM2,EDX
        imul dword ptr [DAT_01c039e8]
        mov EBX,EAX
        mov ECX,EDX
        movd EAX,MM1
        imul dword ptr [DAT_01c039f4]
        add EBX,EAX
        adc ECX,EDX
        movd EAX,MM2
        imul dword ptr [DAT_01c03a00]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        movd MM4,EAX
        movd EAX,MM0
        imul dword ptr [DAT_01c039ec]
        mov EBX,EAX
        mov ECX,EDX
        movd EAX,MM1
        imul dword ptr [DAT_01c039f8]
        add EBX,EAX
        adc ECX,EDX
        movd EAX,MM2
        imul dword ptr [DAT_01c03a04]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        movd MM5,EAX
        movd EAX,MM0
        imul dword ptr [DAT_01c039f0]
        mov EBX,EAX
        mov ECX,EDX
        movd EAX,MM1
        imul dword ptr [DAT_01c039fc]
        add EBX,EAX
        adc ECX,EDX
        movd EAX,MM2
        imul dword ptr [DAT_01c03a08]
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
        jle LAB_0053082f
        or EAX,0x80000001
    LAB_0053082f:
        cmp EBX,EDX
        jge LAB_00530838
        or EAX,0x80000002
    LAB_00530838:
        movd EBX,MM5
        cmp EBX,ECX
        jle LAB_00530844
        or EAX,0x80000004
    LAB_00530844:
        cmp EBX,EDX
        jge LAB_0053084d
        or EAX,0x80000008
    LAB_0053084d:
        cmp ECX,0x0
        jg LAB_00530857
        or EAX,0x80000010
    LAB_00530857:
        mov EBX,dword ptr [ESP + 0x4]
        movd dword ptr [EBX],MM4
        movd dword ptr [EBX + 0x4],MM5
        movd dword ptr [EBX + 0x8],MM6
        test EAX,0xffffffff
        jnz LAB_005308a4
        mov EAX,0x7fffffff
        xor EDX,EDX
        idiv ECX
        mov dword ptr [EBX + 0xc],EAX
        movd EAX,MM4
        imul dword ptr [DAT_01c00c48]
        idiv ECX
        add EAX,dword ptr [DAT_01c00c50]
        mov dword ptr [EBX + 0x10],EAX
        movd EAX,MM5
        imul dword ptr [DAT_01c00c4c]
        idiv ECX
        add EAX,dword ptr [DAT_01c00c54]
        mov dword ptr [EBX + 0x14],EAX
        emms
        ret
    LAB_005308a4:
        mov dword ptr [EBX + 0x10],EAX
        emms
        ret
    LAB_005308aa:
        push ESI
        push EDI
        mov ESI,dword ptr [ESP + 0x10]
        mov EDI,dword ptr [ESP + 0xc]
        mov EAX,dword ptr [ESI]
        mov EBX,dword ptr [ESI + 0x4]
        mov ECX,dword ptr [ESI + 0x8]
        sub EAX,dword ptr [DAT_01c039b8]
        sub EBX,dword ptr [DAT_01c039bc]
        sub ECX,dword ptr [DAT_01c039c0]
        mov [DAT_005bf4d8],EAX
        mov dword ptr [DAT_005bf4dc],EBX
        mov dword ptr [DAT_005bf4e0],ECX
        imul dword ptr [DAT_01c039e8]
        mov EBX,EAX
        mov ECX,EDX
        mov EAX,[DAT_005bf4dc]
        imul dword ptr [DAT_01c039f4]
        add EBX,EAX
        adc ECX,EDX
        mov EAX,[DAT_005bf4e0]
        imul dword ptr [DAT_01c03a00]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        mov [DAT_005bf4e8],EAX
        mov EAX,[DAT_005bf4d8]
        imul dword ptr [DAT_01c039ec]
        mov EBX,EAX
        mov ECX,EDX
        mov EAX,[DAT_005bf4dc]
        imul dword ptr [DAT_01c039f8]
        add EBX,EAX
        adc ECX,EDX
        mov EAX,[DAT_005bf4e0]
        imul dword ptr [DAT_01c03a04]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        mov [DAT_005bf4ec],EAX
        mov EAX,[DAT_005bf4d8]
        imul dword ptr [DAT_01c039f0]
        mov EBX,EAX
        mov ECX,EDX
        mov EAX,[DAT_005bf4dc]
        imul dword ptr [DAT_01c039fc]
        add EBX,EAX
        adc ECX,EDX
        mov EAX,[DAT_005bf4e0]
        imul dword ptr [DAT_01c03a08]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        mov [DAT_005bf4f0],EAX
        neg EAX
        mov EDX,EAX
        xor EAX,EAX
        mov EBX,dword ptr [DAT_005bf4e8]
        mov ECX,dword ptr [DAT_005bf4f0]
        cmp EBX,ECX
        jle LAB_00530997
        or EAX,0x80000001
    LAB_00530997:
        cmp EBX,EDX
        jge LAB_005309a0
        or EAX,0x80000002
    LAB_005309a0:
        mov EBX,dword ptr [DAT_005bf4ec]
        cmp EBX,ECX
        jle LAB_005309af
        or EAX,0x80000004
    LAB_005309af:
        cmp EBX,EDX
        jge LAB_005309b8
        or EAX,0x80000008
    LAB_005309b8:
        cmp ECX,0x0
        jg LAB_005309c2
        or EAX,0x80000010
    LAB_005309c2:
        test EAX,0xffffffff
        jnz LAB_00530a11
        mov EAX,[DAT_005bf4e8]
        mov dword ptr [EDI],EAX
        mov dword ptr [EDI + 0x4],EBX
        mov dword ptr [EDI + 0x8],ECX
        mov EAX,0x7fffffff
        xor EDX,EDX
        idiv ECX
        mov dword ptr [EDI + 0xc],EAX
        mov EAX,[DAT_005bf4e8]
        imul dword ptr [DAT_01c00c48]
        idiv ECX
        add EAX,dword ptr [DAT_01c00c50]
        mov dword ptr [EDI + 0x10],EAX
        mov EAX,[DAT_005bf4ec]
        imul dword ptr [DAT_01c00c4c]
        idiv ECX
        add EAX,dword ptr [DAT_01c00c54]
        mov dword ptr [EDI + 0x14],EAX
        pop EDI
        pop ESI
        ret
    LAB_00530a11:
        mov EDX,dword ptr [DAT_005bf4e8]
        mov dword ptr [EDI],EDX
        mov dword ptr [EDI + 0x4],EBX
        mov dword ptr [EDI + 0x8],ECX
        mov dword ptr [EDI + 0x10],EAX
}
}
