// Name: engine_special.cpp_FUN_0056356c
// Address: 0056356c
// Address Range: [[0056356c, 00563834]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_FUN_0056356c(SProjectedVertex *output,CVector3i *input)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_FUN_0056356c(SProjectedVertex *output,CVector3i *input)
{
__asm {
        test dword ptr [DAT_01c6e2a0],0xffffffff
        jz LAB_005636ba
        mov EBX,dword ptr [ESP + 0x8]
        mov EAX,dword ptr [EBX]
        mov ECX,dword ptr [EBX + 0x4]
        mov EDX,dword ptr [EBX + 0x8]
        sub EAX,dword ptr [DAT_01c6e2d8]
        sub ECX,dword ptr [DAT_01c6e2dc]
        sub EDX,dword ptr [DAT_01c6e2e0]
        movd MM0,EAX
        movd MM1,ECX
        movd MM2,EDX
        imul dword ptr [DAT_01c6e2fc]
        mov EBX,EAX
        mov ECX,EDX
        movd EAX,MM1
        imul dword ptr [DAT_01c6e308]
        add EBX,EAX
        adc ECX,EDX
        movd EAX,MM2
        imul dword ptr [DAT_01c6e314]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        movd MM4,EAX
        movd EAX,MM0
        imul dword ptr [DAT_01c6e300]
        mov EBX,EAX
        mov ECX,EDX
        movd EAX,MM1
        imul dword ptr [DAT_01c6e30c]
        add EBX,EAX
        adc ECX,EDX
        movd EAX,MM2
        imul dword ptr [DAT_01c6e318]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        movd MM5,EAX
        movd EAX,MM0
        imul dword ptr [DAT_01c6e304]
        mov EBX,EAX
        mov ECX,EDX
        movd EAX,MM1
        imul dword ptr [DAT_01c6e310]
        add EBX,EAX
        adc ECX,EDX
        movd EAX,MM2
        imul dword ptr [DAT_01c6e31c]
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
        jle LAB_0056363f
        or EAX,0x80000001
    LAB_0056363f:
        cmp EBX,EDX
        jge LAB_00563648
        or EAX,0x80000002
    LAB_00563648:
        movd EBX,MM5
        cmp EBX,ECX
        jle LAB_00563654
        or EAX,0x80000004
    LAB_00563654:
        cmp EBX,EDX
        jge LAB_0056365d
        or EAX,0x80000008
    LAB_0056365d:
        cmp ECX,0x0
        jg LAB_00563667
        or EAX,0x80000010
    LAB_00563667:
        mov EBX,dword ptr [ESP + 0x4]
        movd dword ptr [EBX],MM4
        movd dword ptr [EBX + 0x4],MM5
        movd dword ptr [EBX + 0x8],MM6
        test EAX,0xffffffff
        jnz LAB_005636b4
        mov EAX,0x7fffffff
        xor EDX,EDX
        idiv ECX
        mov dword ptr [EBX + 0xc],EAX
        movd EAX,MM4
        imul dword ptr [DAT_01c6b598]
        idiv ECX
        add EAX,dword ptr [DAT_01c6b5a0]
        mov dword ptr [EBX + 0x10],EAX
        movd EAX,MM5
        imul dword ptr [DAT_01c6b59c]
        idiv ECX
        add EAX,dword ptr [DAT_01c6b5a4]
        mov dword ptr [EBX + 0x14],EAX
        emms
        ret
    LAB_005636b4:
        mov dword ptr [EBX + 0x10],EAX
        emms
        ret
    LAB_005636ba:
        push ESI
        push EDI
        mov ESI,dword ptr [ESP + 0x10]
        mov EDI,dword ptr [ESP + 0xc]
        mov EAX,dword ptr [ESI]
        mov EBX,dword ptr [ESI + 0x4]
        mov ECX,dword ptr [ESI + 0x8]
        sub EAX,dword ptr [DAT_01c6e2d8]
        sub EBX,dword ptr [DAT_01c6e2dc]
        sub ECX,dword ptr [DAT_01c6e2e0]
        mov [DAT_00604d68],EAX
        mov dword ptr [DAT_00604d6c],EBX
        mov dword ptr [DAT_00604d70],ECX
        imul dword ptr [DAT_01c6e2fc]
        mov EBX,EAX
        mov ECX,EDX
        mov EAX,[DAT_00604d6c]
        imul dword ptr [DAT_01c6e308]
        add EBX,EAX
        adc ECX,EDX
        mov EAX,[DAT_00604d70]
        imul dword ptr [DAT_01c6e314]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        mov [DAT_00604d78],EAX
        mov EAX,[DAT_00604d68]
        imul dword ptr [DAT_01c6e300]
        mov EBX,EAX
        mov ECX,EDX
        mov EAX,[DAT_00604d6c]
        imul dword ptr [DAT_01c6e30c]
        add EBX,EAX
        adc ECX,EDX
        mov EAX,[DAT_00604d70]
        imul dword ptr [DAT_01c6e318]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        mov [DAT_00604d7c],EAX
        mov EAX,[DAT_00604d68]
        imul dword ptr [DAT_01c6e304]
        mov EBX,EAX
        mov ECX,EDX
        mov EAX,[DAT_00604d6c]
        imul dword ptr [DAT_01c6e310]
        add EBX,EAX
        adc ECX,EDX
        mov EAX,[DAT_00604d70]
        imul dword ptr [DAT_01c6e31c]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        mov [DAT_00604d80],EAX
        neg EAX
        mov EDX,EAX
        xor EAX,EAX
        mov EBX,dword ptr [DAT_00604d78]
        mov ECX,dword ptr [DAT_00604d80]
        cmp EBX,ECX
        jle LAB_005637a7
        or EAX,0x80000001
    LAB_005637a7:
        cmp EBX,EDX
        jge LAB_005637b0
        or EAX,0x80000002
    LAB_005637b0:
        mov EBX,dword ptr [DAT_00604d7c]
        cmp EBX,ECX
        jle LAB_005637bf
        or EAX,0x80000004
    LAB_005637bf:
        cmp EBX,EDX
        jge LAB_005637c8
        or EAX,0x80000008
    LAB_005637c8:
        cmp ECX,0x0
        jg LAB_005637d2
        or EAX,0x80000010
    LAB_005637d2:
        test EAX,0xffffffff
        jnz LAB_00563821
        mov EAX,[DAT_00604d78]
        mov dword ptr [EDI],EAX
        mov dword ptr [EDI + 0x4],EBX
        mov dword ptr [EDI + 0x8],ECX
        mov EAX,0x7fffffff
        xor EDX,EDX
        idiv ECX
        mov dword ptr [EDI + 0xc],EAX
        mov EAX,[DAT_00604d78]
        imul dword ptr [DAT_01c6b598]
        idiv ECX
        add EAX,dword ptr [DAT_01c6b5a0]
        mov dword ptr [EDI + 0x10],EAX
        mov EAX,[DAT_00604d7c]
        imul dword ptr [DAT_01c6b59c]
        idiv ECX
        add EAX,dword ptr [DAT_01c6b5a4]
        mov dword ptr [EDI + 0x14],EAX
        pop EDI
        pop ESI
        ret
    LAB_00563821:
        mov EDX,dword ptr [DAT_00604d78]
        mov dword ptr [EDI],EDX
        mov dword ptr [EDI + 0x4],EBX
        mov dword ptr [EDI + 0x8],ECX
        mov dword ptr [EDI + 0x10],EAX
}
}
