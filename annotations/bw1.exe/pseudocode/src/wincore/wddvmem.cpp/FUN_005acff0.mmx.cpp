// Name: FUN_005acff0
// Address: 005acff0
// Address Range: [[005acff0, 005ad26a]]
// Convention: unknown
// Signature: void FUN_005acff0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005acff0(void)
{
__asm {
        mov EBP,ESP
        sub ESP,0x7c
        cmp dword ptr [DAT_006260e4],0x0
        jz LAB_005ad0c1
        mov ECX,dword ptr [DAT_01c50948]
        test ECX,ECX
        jnz LAB_005ad0d5
        mov EBX,dword ptr [DAT_02c99314]
        test EBX,EBX
        jnz LAB_005ad09d
        cmp dword ptr [DAT_02c9931c],0x0
        jz LAB_005ad0f3
        mov ESI,dword ptr [DAT_00629010]
        mov dword ptr [DAT_02c9931c],ECX
        call FUN_005acb10
        mov EBX,dword ptr [DAT_0061b49c]
        xor ECX,ECX
        test EBX,EBX
        jle LAB_005ad08e
        xor EDI,EDI
    LAB_005ad04e:
        mov EBX,dword ptr [DAT_0061b498]
        mov EAX,dword ptr [DAT_01c4354c + EDI]
        xor EDX,EDX
        test EBX,EBX
        jle LAB_005ad081
    LAB_005ad060:
        mov BL,byte ptr [ESI]
        mov byte ptr [EAX],BL
        mov BL,byte ptr [ESI + 0x1]
        add ESI,0x4
        mov byte ptr [EAX + 0x1],BL
        mov BL,byte ptr [ESI + -0x2]
        inc EDX
        mov byte ptr [EAX + 0x2],BL
        mov EBX,dword ptr [DAT_0061b498]
        add EAX,0x3
        cmp EDX,EBX
        jl LAB_005ad060
    LAB_005ad081:
        mov EAX,[DAT_0061b49c]
        inc ECX
        add EDI,0x4
        cmp ECX,EAX
        jl LAB_005ad04e
    LAB_005ad08e:
        call FUN_005acc00
        mov dword ptr [DAT_02c9931c],0x1
    LAB_005ad09d:
        mov ESI,dword ptr [DAT_02c99304]
        test ESI,ESI
        jz LAB_005ad0c1
        push 0x1
        push 0x0
        mov EDX,dword ptr [ESI]
        push ESI
        call dword ptr [EDX + 0x2c]
        test EAX,EAX
        jz LAB_005ad0c1
        cmp EAX,0x887601c2
        jnz LAB_005ad0c1
        call FUN_005ad2c0
    LAB_005ad0c1:
        xor EDI,EDI
        mov dword ptr [DAT_02c99314],EDI
        call FUN_005b2cf0
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_005ad0d5:
        push 0x0
        call FUN_00582990
        add ESP,0x4
        xor EDI,EDI
        mov dword ptr [DAT_02c99314],EDI
        call FUN_005b2cf0
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_005ad0f3:
        mov EAX,[DAT_00629010]
        mov dword ptr [EBP + -0x10],EAX
        mov EAX,[DAT_0061b4a0]
        mov EDX,EAX
        sar EDX,0x1f
        shl EDX,0x3
        sbb EAX,EDX
        sar EAX,0x3
        mov EDX,dword ptr [DAT_0061b498]
        imul EDX,EAX
        push 0x6c
        push ECX
        mov dword ptr [EBP + -0xc],EDX
        lea EAX,[EBP + -0x7c]
        push EAX
        call FUN_005bfb70
        add ESP,0xc
        push EBX
        push 0x1
        lea EDX,[EBP + -0x7c]
        mov EDI,0x6c
        push EDX
        mov EAX,[DAT_02c99304]
        mov dword ptr [EBP + -0x7c],EDI
        push EBX
        mov ECX,dword ptr [EAX]
        push EAX
        call dword ptr [ECX + 0x64]
        mov ECX,EAX
        mov EAX,dword ptr [EBP + -0x58]
        mov dword ptr [EBP + -0x8],EAX
        mov ESI,dword ptr [EBP + -0x6c]
        imul ESI,dword ptr [DAT_02c99330]
        mov EDX,dword ptr [DAT_02c9932c]
        mov EBX,dword ptr [DAT_02c99328]
        imul EDX,EBX
        mov EAX,EDX
        sar EDX,0x1f
        shl EDX,0x3
        sbb EAX,EDX
        sar EAX,0x3
        add EAX,ESI
        add dword ptr [EBP + -0x8],EAX
        test ECX,ECX
        jnz LAB_005ad0c1
        cmp dword ptr [EBP + -0x8],0x0
        jz LAB_005ad0c1
        xor EAX,EAX
        mov EDX,dword ptr [DAT_0061b49c]
        mov dword ptr [EBP + -0x4],EAX
        test EDX,EDX
        jle LAB_005ad1fe
    LAB_005ad197:
        cmp dword ptr [DAT_01c51d00],0x0
        jz LAB_005ad24d
        mov ECX,dword ptr [EBP + 0xfffffff4]
        mov ESI,dword ptr [EBP + 0xfffffff0]
        mov EDI,dword ptr [EBP + 0xfffffff8]
    LAB_005ad1b6:
        movq MM0,qword ptr [ESI]
        movq MM1,qword ptr [ESI + 0x8]
        movq MM2,qword ptr [ESI + 0x10]
        movq MM3,qword ptr [ESI + 0x18]
        movq qword ptr [EDI],MM0
        movq qword ptr [EDI + 0x8],MM1
        movq qword ptr [EDI + 0x10],MM2
        movq qword ptr [EDI + 0x18],MM3
        add ESI,0x20
        add EDI,0x20
        sub ECX,0x20
        jg LAB_005ad1b6
        emms
    LAB_005ad1e1:
        mov EAX,dword ptr [EBP + -0xc]
        add dword ptr [EBP + -0x10],EAX
        mov EAX,dword ptr [EBP + -0x6c]
        add dword ptr [EBP + -0x8],EAX
        mov EAX,dword ptr [EBP + -0x4]
        inc EAX
        mov EDX,dword ptr [DAT_0061b49c]
        mov dword ptr [EBP + -0x4],EAX
        cmp EAX,EDX
        jl LAB_005ad197
    LAB_005ad1fe:
        push 0x0
        mov EAX,[DAT_02c99304]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX + 0x80]
        test EAX,EAX
        jz LAB_005ad0c1
        mov ECX,0x5f9800
        mov EBX,0x381
        push 0x5f9817
        mov dword ptr [DAT_01d1d400],ECX
        mov dword ptr [DAT_01d1d404],EBX
        call FUN_005030e0
        add ESP,0x4
        xor EDI,EDI
        mov dword ptr [DAT_02c99314],EDI
        call FUN_005b2cf0
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_005ad24d:
        mov ECX,dword ptr [EBP + -0xc]
        mov ESI,dword ptr [EBP + -0x10]
        mov EDI,dword ptr [EBP + -0x8]
        push EDI
        mov EAX,ECX
        shr ECX,0x2
        rep movsd
        mov CL,AL
        and CL,0x3
        rep movsb
        pop EDI
        jmp LAB_005ad1e1
}
}
