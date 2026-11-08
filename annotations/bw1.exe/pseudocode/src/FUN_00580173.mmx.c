// Name: FUN_00580173
// Address: 00580173
// Address Range: [[00580173, 0058043b]]
// Convention: unknown
// Signature: void FUN_00580173(uint *param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00580173(uint *param_1,int *param_2)
{
__asm {
        test dword ptr [DAT_01c51d00],0xffffffff
        jz LAB_005802c1
        mov EBX,dword ptr [ESP + 0x8]
        mov EAX,dword ptr [EBX]
        mov ECX,dword ptr [EBX + 0x4]
        mov EDX,dword ptr [EBX + 0x8]
        sub EAX,dword ptr [DAT_01c51d2c]
        sub ECX,dword ptr [DAT_01c51d30]
        sub EDX,dword ptr [DAT_01c51d34]
        movd MM0,EAX
        movd MM1,ECX
        movd MM2,EDX
        imul dword ptr [DAT_01c51d5c]
        mov EBX,EAX
        mov ECX,EDX
        movd EAX,MM1
        imul dword ptr [DAT_01c51d68]
        add EBX,EAX
        adc ECX,EDX
        movd EAX,MM2
        imul dword ptr [DAT_01c51d74]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        movd MM4,EAX
        movd EAX,MM0
        imul dword ptr [DAT_01c51d60]
        mov EBX,EAX
        mov ECX,EDX
        movd EAX,MM1
        imul dword ptr [DAT_01c51d6c]
        add EBX,EAX
        adc ECX,EDX
        movd EAX,MM2
        imul dword ptr [DAT_01c51d78]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        movd MM5,EAX
        movd EAX,MM0
        imul dword ptr [DAT_01c51d64]
        mov EBX,EAX
        mov ECX,EDX
        movd EAX,MM1
        imul dword ptr [DAT_01c51d70]
        add EBX,EAX
        adc ECX,EDX
        movd EAX,MM2
        imul dword ptr [DAT_01c51d7c]
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
        jle LAB_00580246
        or EAX,0x80000001
    LAB_00580246:
        cmp EBX,EDX
        jge LAB_0058024f
        or EAX,0x80000002
    LAB_0058024f:
        movd EBX,MM5
        cmp EBX,ECX
        jle LAB_0058025b
        or EAX,0x80000004
    LAB_0058025b:
        cmp EBX,EDX
        jge LAB_00580264
        or EAX,0x80000008
    LAB_00580264:
        cmp ECX,0x0
        jg LAB_0058026e
        or EAX,0x80000010
    LAB_0058026e:
        mov EBX,dword ptr [ESP + 0x4]
        movd dword ptr [EBX],MM4
        movd dword ptr [EBX + 0x4],MM5
        movd dword ptr [EBX + 0x8],MM6
        test EAX,0xffffffff
        jnz LAB_005802bb
        mov EAX,0x7fffffff
        xor EDX,EDX
        idiv ECX
        mov dword ptr [EBX + 0xc],EAX
        movd EAX,MM4
        imul dword ptr [DAT_01c4eff8]
        idiv ECX
        add EAX,dword ptr [DAT_01c4f000]
        mov dword ptr [EBX + 0x10],EAX
        movd EAX,MM5
        imul dword ptr [DAT_01c4effc]
        idiv ECX
        add EAX,dword ptr [DAT_01c4f004]
        mov dword ptr [EBX + 0x14],EAX
        emms
        ret
    LAB_005802bb:
        mov dword ptr [EBX + 0x10],EAX
        emms
        ret
    LAB_005802c1:
        push ESI
        push EDI
        mov ESI,dword ptr [ESP + 0x10]
        mov EDI,dword ptr [ESP + 0xc]
        mov EAX,dword ptr [ESI]
        mov EBX,dword ptr [ESI + 0x4]
        mov ECX,dword ptr [ESI + 0x8]
        sub EAX,dword ptr [DAT_01c51d2c]
        sub EBX,dword ptr [DAT_01c51d30]
        sub ECX,dword ptr [DAT_01c51d34]
        mov [DAT_00623e28],EAX
        mov dword ptr [DAT_00623e2c],EBX
        mov dword ptr [DAT_00623e30],ECX
        imul dword ptr [DAT_01c51d5c]
        mov EBX,EAX
        mov ECX,EDX
        mov EAX,[DAT_00623e2c]
        imul dword ptr [DAT_01c51d68]
        add EBX,EAX
        adc ECX,EDX
        mov EAX,[DAT_00623e30]
        imul dword ptr [DAT_01c51d74]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        mov [DAT_00623e38],EAX
        mov EAX,[DAT_00623e28]
        imul dword ptr [DAT_01c51d60]
        mov EBX,EAX
        mov ECX,EDX
        mov EAX,[DAT_00623e2c]
        imul dword ptr [DAT_01c51d6c]
        add EBX,EAX
        adc ECX,EDX
        mov EAX,[DAT_00623e30]
        imul dword ptr [DAT_01c51d78]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        mov [DAT_00623e3c],EAX
        mov EAX,[DAT_00623e28]
        imul dword ptr [DAT_01c51d64]
        mov EBX,EAX
        mov ECX,EDX
        mov EAX,[DAT_00623e2c]
        imul dword ptr [DAT_01c51d70]
        add EBX,EAX
        adc ECX,EDX
        mov EAX,[DAT_00623e30]
        imul dword ptr [DAT_01c51d7c]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        mov [DAT_00623e40],EAX
        neg EAX
        mov EDX,EAX
        xor EAX,EAX
        mov EBX,dword ptr [DAT_00623e38]
        mov ECX,dword ptr [DAT_00623e40]
        cmp EBX,ECX
        jle LAB_005803ae
        or EAX,0x80000001
    LAB_005803ae:
        cmp EBX,EDX
        jge LAB_005803b7
        or EAX,0x80000002
    LAB_005803b7:
        mov EBX,dword ptr [DAT_00623e3c]
        cmp EBX,ECX
        jle LAB_005803c6
        or EAX,0x80000004
    LAB_005803c6:
        cmp EBX,EDX
        jge LAB_005803cf
        or EAX,0x80000008
    LAB_005803cf:
        cmp ECX,0x0
        jg LAB_005803d9
        or EAX,0x80000010
    LAB_005803d9:
        test EAX,0xffffffff
        jnz LAB_00580428
        mov EAX,[DAT_00623e38]
        mov dword ptr [EDI],EAX
        mov dword ptr [EDI + 0x4],EBX
        mov dword ptr [EDI + 0x8],ECX
        mov EAX,0x7fffffff
        xor EDX,EDX
        idiv ECX
        mov dword ptr [EDI + 0xc],EAX
        mov EAX,[DAT_00623e38]
        imul dword ptr [DAT_01c4eff8]
        idiv ECX
        add EAX,dword ptr [DAT_01c4f000]
        mov dword ptr [EDI + 0x10],EAX
        mov EAX,[DAT_00623e3c]
        imul dword ptr [DAT_01c4effc]
        idiv ECX
        add EAX,dword ptr [DAT_01c4f004]
        mov dword ptr [EDI + 0x14],EAX
        pop EDI
        pop ESI
        ret
    LAB_00580428:
        mov EDX,dword ptr [DAT_00623e38]
        mov dword ptr [EDI],EDX
        mov dword ptr [EDI + 0x4],EBX
        mov dword ptr [EDI + 0x8],ECX
        mov dword ptr [EDI + 0x10],EAX
}
}
