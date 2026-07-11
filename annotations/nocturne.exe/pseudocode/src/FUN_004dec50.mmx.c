// Name: FUN_004dec50
// Address: 004dec50
// Address Range: [[004dec50, 004df03f]]
// Convention: unknown
// Signature: void FUN_004dec50(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dec50(int param_1)
{
__asm {
        mov EBP,ESP
        sub ESP,0x4c
        mov ESI,dword ptr [EBP + 0x14]
        call FUN_005288f0
        call FUN_0052ee70
        call FUN_0052eed4
        push 0x2dd1184
        mov EDX,dword ptr [DAT_005ae704]
        push EDX
        call FUN_00460700
        add ESP,0x8
        mov ECX,dword ptr [DAT_005ae704]
        push 0x42e00000
        push ECX
        call FUN_00460c00
        add ESP,0x8
        push 0x2dd1184
        mov EBX,dword ptr [DAT_005ae704]
        push EBX
        call FUN_00460780
        fld double ptr [DAT_0058a936]
        fld float ptr [ESI + 0x4]
        fadd ST(0),ST(1)
        fld double ptr [DAT_0058a93e]
        fxch
        fmul ST(1)
        lea EAX,[EBP + -0x4c]
        fstp float ptr [EBP + -0x4c]
        fld float ptr [ESI + 0x4]
        faddp ST(2),ST(0)
        add ESP,0x8
        fmulp
        push EAX
        mov EAX,[DAT_005ae704]
        mov EDI,0x42900000
        push EAX
        mov dword ptr [EBP + -0x44],EDI
        fstp float ptr [EBP + -0x48]
        call FUN_00460a00
        mov EAX,[DAT_005be368]
        add ESP,0x8
        mov dword ptr [DAT_01fb1d0c + EAX],0x1
        push 0x10000
        mov dword ptr [DAT_01fb1d10 + EAX],0xffff6f78
        push 0x10000
        mov dword ptr [DAT_01fb1d14 + EAX],0xffff6f78
        push 0x10000
        mov dword ptr [DAT_01fb1d18 + EAX],0x9088
        push EAX
        mov dword ptr [DAT_01fb1d1c + EAX],0x280
        call FUN_0050e340
        add ESP,0x10
        push 0x205
        push 0x0
        push 0x0
        lea EAX,[ESI + 0x8]
        push EAX
        call FUN_00453040
        mov EAX,[DAT_005be368]
        mov dword ptr [DAT_01fb1d10 + EAX],0xffffb7bc
        mov dword ptr [DAT_01fb1d14 + EAX],0xffffb7bc
        mov EDX,dword ptr [DAT_005bb210]
        mov dword ptr [DAT_01fb1d18 + EAX],0x4844
        add ESP,0x10
        mov dword ptr [DAT_01fb1d1c + EAX],0x2000
        test EDX,EDX
        jz LAB_004deeae
        xor EBX,EBX
        mov ESI,0x1ccdec8
    LAB_004ded89:
        fld float ptr [EBX + 0x1ccdef0]
        fldz
        fcompp
        fnstsw AX
        sahf
        ja LAB_004dee9f
        lea EAX,[EBP + -0x40]
        push EAX
        lea EAX,[EBP + -0x34]
        mov ECX,dword ptr [EBX + 0x1ccdeec]
        push EAX
        imul EAX,ECX,0xc
        add EAX,ESI
        push dword ptr [EBX + 0x1ccdef0]
        push EAX
        call FUN_0043b800
        fld float ptr [EBP + -0x34]
        fld float ptr [EBP + -0x30]
        fld float ptr [EBP + -0x2c]
        mov EAX,0x1ccdeec
        fld float ptr [EBP + -0x3c]
        fxch ST(3)
        fadd float ptr [EBX + EAX*0x1 + 0xc]
        mov EDI,dword ptr [DAT_005ae704]
        fstp float ptr [EBP + -0x34]
        fxch
        fadd float ptr [EBX + EAX*0x1 + 0x10]
        add ESP,0x10
        fstp float ptr [EBP + -0x30]
        fadd float ptr [EBX + EAX*0x1 + 0x14]
        lea EAX,[EBP + -0x34]
        fxch
        fadd float ptr [DAT_0058a956]
        push EAX
        fxch
        fstp float ptr [EBP + -0x2c]
        push EDI
        fstp float ptr [EBP + -0x3c]
        call FUN_00460a00
        add ESP,0x8
        push 0x0
        lea EAX,[EBP + -0x40]
        push EAX
        mov EAX,[DAT_005ae704]
        push EAX
        call FUN_00460aa0
        add ESP,0xc
        fld float ptr [EBX + 0x1ccdef4]
        push -0x1
        call FUN_00563a30
        push 0x0
        fistp dword ptr [EBP + -0x4]
        mov EDX,dword ptr [EBP + -0x4]
        push EDX
        push 0x1cce1bc
        call FUN_00453040
        add ESP,0x10
        mov ECX,dword ptr [DAT_005ae704]
        push ECX
        call thunk_FUN_004cdbc0
        imul EAX,dword ptr [EBX + 0x1ccdeec],0xc
        mov EAX,dword ptr [ESI + EAX*0x1]
        mov dword ptr [EBP + -0x4],EAX
        fild dword ptr [EBP + -0x4]
        fdivr float ptr [EBX + 0x1ccdef0]
        add ESP,0x4
        fst float ptr [EBP + -0x8]
        fst double ptr [EBP + -0x28]
        fcomp double ptr [DAT_0058a95e]
        fnstsw AX
        sahf
        jnc LAB_004df02c
        fld float ptr [EBP + -0x8]
        fmul float ptr [DAT_0058a94e]
        fsubr float ptr [DAT_0058a952]
    LAB_004dee88:
        mov EDX,dword ptr [DAT_005be368]
        call FUN_00563a30
        fistp dword ptr [EBP + -0x4]
        mov EAX,dword ptr [EBP + -0x4]
        mov dword ptr [DAT_01fb1d1c + EDX],EAX
    LAB_004dee9f:
        add EBX,0x18
        cmp EBX,0x2d0
        jnz LAB_004ded89
    LAB_004deeae:
        mov EAX,[DAT_005be368]
        push 0x1ccdc50
        mov dword ptr [DAT_01fb1d0c + EAX],0x0
        call FUN_0040eab0
        mov EAX,[DAT_01ccdebc]
        add ESP,0x4
        sar EAX,0x10
        mov dword ptr [EBP + -0x20],EAX
        mov EAX,[DAT_01ccdec0]
        sar EAX,0x10
        mov dword ptr [EBP + -0x14],EAX
        mov EAX,[DAT_01ccdc50]
        mov dword ptr [EBP + -0x1c],EAX
        xor EAX,EAX
        mov dword ptr [EBP + -0x18],EAX
        cmp dword ptr [EBP + -0x18],0x1e0
        jge LAB_004defd0
    LAB_004deefa:
        mov EAX,dword ptr [EBP + -0x18]
        mov EAX,dword ptr [DAT_01bd2fa0 + EAX*0x4]
        mov dword ptr [EBP + -0x10],EAX
        xor ECX,ECX
        mov EDI,dword ptr [EBP + 0xfffffff0]
    LAB_004def0f:
        movq MM0,qword ptr [EDI]
        mov EAX,ECX
        mov EBX,dword ptr [EBP + 0xffffffe8]
        shr EAX,0x1
        shr EBX,0x1
        add EAX,dword ptr [EBP + 0xffffffe0]
        add EBX,dword ptr [EBP + 0xffffffec]
        and EAX,0xff
        and EBX,0xff
        shl EAX,0x8
        add EAX,EBX
        add EAX,dword ptr [EBP + 0xffffffe4]
        movzx EAX,byte ptr [EAX]
        shr EAX,0x2
        movd MM1,dword ptr [DAT_01c00024 + EAX*0x4]
        movq MM2,MM1
        psllq MM2,0x20
        por MM1,MM2
        paddusb MM0,MM1
        mov EAX,ECX
        mov EBX,dword ptr [EBP + 0xffffffe8]
        shr EAX,0x2
        shr EBX,0x2
        add EAX,dword ptr [EBP + 0xffffffe0]
        add EBX,dword ptr [EBP + 0xffffffec]
        and EAX,0xff
        and EBX,0xff
        shl EAX,0x8
        add EAX,EBX
        add EAX,dword ptr [EBP + 0xffffffe4]
        movzx EAX,byte ptr [EAX]
        shr EAX,0x2
        movd MM1,dword ptr [DAT_01c00024 + EAX*0x4]
        movq MM2,MM1
        psllq MM2,0x20
        por MM1,MM2
        paddusb MM0,MM1
        movq qword ptr [EDI],MM0
        add EDI,0x8
        add ECX,0x2
        cmp ECX,0x280
        jc LAB_004def0f
        emms
        mov EAX,dword ptr [EBP + -0x18]
        inc dword ptr [EBP + -0x18]
        cmp dword ptr [EBP + -0x18],0x1e0
        jl LAB_004deefa
    LAB_004defd0:
        push 0x1
        call FUN_004083c0
        fld float ptr [DAT_01ccdec4]
        call FUN_00563a30
        fistp dword ptr [EBP + -0xc]
        mov ESI,dword ptr [EBP + -0xc]
        add ESP,0x4
        cmp ESI,0x1d
        jle LAB_004deff5
        xor EDI,EDI
        mov dword ptr [EBP + -0xc],EDI
    LAB_004deff5:
        mov EDX,dword ptr [EBP + -0xc]
        lea EAX,[EDX*0x4 + 0x0]
        push 0xbb80
        add EAX,EDX
        push 0x0
        shl EAX,0x2
        push 0x0
        add EAX,0x1ccdc64
        push EAX
        call FUN_0040e710
        add ESP,0x10
        push 0x0
        call FUN_004083c0
        add ESP,0x4
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_004df02c:
        fld double ptr [EBP + -0x28]
        fadd double ptr [DAT_0058a936]
        fmul double ptr [DAT_0058a946]
        jmp LAB_004dee88
}
}
