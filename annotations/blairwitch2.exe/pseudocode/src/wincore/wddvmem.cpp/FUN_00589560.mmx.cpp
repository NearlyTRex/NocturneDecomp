// Name: FUN_00589560
// Address: 00589560
// Address Range: [[00589560, 005897ad]]
// Convention: unknown
// Signature: void FUN_00589560(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00589560(void)
{
__asm {
        mov EBP,ESP
        sub ESP,0x7c
        cmp dword ptr [DAT_0061e98c],0x0
        jz LAB_00589632
        mov ECX,dword ptr [DAT_01c37788]
        test ECX,ECX
        jnz LAB_00589646
        mov EBX,dword ptr [DAT_02661af4]
        test EBX,EBX
        jnz LAB_0058960e
        cmp dword ptr [DAT_02661afc],0x0
        jz LAB_00589664
        mov ESI,dword ptr [DAT_00622010]
        mov dword ptr [DAT_02661afc],ECX
        call FUN_005890c0
        mov EAX,[DAT_006141bc]
        xor EDI,EDI
        test EAX,EAX
        jle LAB_005895fe
        xor ECX,ECX
    LAB_005895bd:
        mov EBX,dword ptr [DAT_006141b8]
        mov EAX,dword ptr [DAT_01c2a38c + ECX]
        xor EDX,EDX
        test EBX,EBX
        jle LAB_005895f0
    LAB_005895cf:
        mov BL,byte ptr [ESI]
        mov byte ptr [EAX],BL
        mov BL,byte ptr [ESI + 0x1]
        add ESI,0x4
        mov byte ptr [EAX + 0x1],BL
        mov BL,byte ptr [ESI + -0x2]
        inc EDX
        mov byte ptr [EAX + 0x2],BL
        mov EBX,dword ptr [DAT_006141b8]
        add EAX,0x3
        cmp EDX,EBX
        jl LAB_005895cf
    LAB_005895f0:
        mov EBX,dword ptr [DAT_006141bc]
        inc EDI
        add ECX,0x4
        cmp EDI,EBX
        jl LAB_005895bd
    LAB_005895fe:
        mov ESI,0x1
        call FUN_00589170
        mov dword ptr [DAT_02661afc],ESI
    LAB_0058960e:
        mov ESI,dword ptr [DAT_02661ae4]
        test ESI,ESI
        jz LAB_00589632
        push 0x1
        push 0x0
        mov EDX,dword ptr [ESI]
        push ESI
        call dword ptr [EDX + 0x2c]
        test EAX,EAX
        jz LAB_00589632
        cmp EAX,0x887601c2
        jnz LAB_00589632
        call FUN_005897e0
    LAB_00589632:
        xor EDI,EDI
        mov dword ptr [DAT_02661af4],EDI
        call FUN_0058f270
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_00589646:
        push 0x0
        call FUN_0055ff40
        add ESP,0x4
        xor EDI,EDI
        mov dword ptr [DAT_02661af4],EDI
        call FUN_0058f270
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_00589664:
        mov EAX,[DAT_00622010]
        mov dword ptr [EBP + -0x10],EAX
        mov EAX,[DAT_006141c0]
        mov EDX,EAX
        sar EDX,0x1f
        shl EDX,0x3
        sbb EAX,EDX
        sar EAX,0x3
        mov EDX,dword ptr [DAT_006141b8]
        imul EDX,EAX
        push 0x6c
        push ECX
        mov dword ptr [EBP + -0xc],EDX
        lea EAX,[EBP + -0x7c]
        push EAX
        call FUN_005b77c0
        add ESP,0xc
        push EBX
        push 0x1
        lea ECX,[EBP + -0x7c]
        mov EDI,0x6c
        push ECX
        mov EAX,[DAT_02661ae4]
        mov dword ptr [EBP + -0x7c],EDI
        push EBX
        mov EDX,dword ptr [EAX]
        push EAX
        call dword ptr [EDX + 0x64]
        mov EDX,EAX
        mov EAX,dword ptr [EBP + -0x58]
        mov dword ptr [EBP + -0x8],EAX
        test EDX,EDX
        jnz LAB_00589632
        cmp dword ptr [EBP + -0x8],0x0
        jz LAB_00589632
        mov ECX,dword ptr [DAT_006141bc]
        mov dword ptr [EBP + -0x4],EBX
        test ECX,ECX
        jle LAB_00589742
    LAB_005896db:
        cmp dword ptr [DAT_01c38b40],0x0
        jz LAB_00589790
        mov ECX,dword ptr [EBP + 0xfffffff4]
        mov ESI,dword ptr [EBP + 0xfffffff0]
        mov EDI,dword ptr [EBP + 0xfffffff8]
    LAB_005896fa:
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
        jg LAB_005896fa
        emms
    LAB_00589725:
        mov EAX,dword ptr [EBP + -0xc]
        add dword ptr [EBP + -0x10],EAX
        mov EAX,dword ptr [EBP + -0x6c]
        add dword ptr [EBP + -0x8],EAX
        mov EBX,dword ptr [EBP + -0x4]
        inc EBX
        mov ESI,dword ptr [DAT_006141bc]
        mov dword ptr [EBP + -0x4],EBX
        cmp EBX,ESI
        jl LAB_005896db
    LAB_00589742:
        push 0x0
        mov EAX,[DAT_02661ae4]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX + 0x80]
        test EAX,EAX
        jz LAB_00589632
        mov EDI,0x5ee43c
        mov EAX,0x356
        push 0x5ee453
        mov dword ptr [DAT_01d046a0],EDI
        mov [DAT_01d046a4],EAX
        call FUN_004e4500
        add ESP,0x4
        xor EDI,EDI
        mov dword ptr [DAT_02661af4],EDI
        call FUN_0058f270
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_00589790:
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
        jmp LAB_00589725
}
}
