// Name: wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0
// Address: 0057a8a0
// Address Range: [[0057a8a0, 0057ab1a]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0(void)
{
__asm {
        mov EBP,ESP
        sub ESP,0x7c
        cmp dword ptr [DAT_00607288],0x0
        jz LAB_0057a971
        mov ECX,dword ptr [DAT_01c6cee8]
        test ECX,ECX
        jnz LAB_0057a985
        mov EBX,dword ptr [DAT_02d0bcf4]
        test EBX,EBX
        jnz LAB_0057a94d
        cmp dword ptr [DAT_02d0bcfc],0x0
        jz LAB_0057a9a3
        mov ESI,dword ptr [DAT_0060b010]
        mov dword ptr [DAT_02d0bcfc],ECX
        call wincore_wddvmem_cpp_openScreenDevice_FUN_0057a3c0
        mov EBX,dword ptr [DAT_005fba1c]
        xor ECX,ECX
        test EBX,EBX
        jle LAB_0057a93e
        xor EDI,EDI
    LAB_0057a8fe:
        mov EBX,dword ptr [DAT_005fba18]
        mov EAX,dword ptr [DAT_01c5faec + EDI]
        xor EDX,EDX
        test EBX,EBX
        jle LAB_0057a931
    LAB_0057a910:
        mov BL,byte ptr [ESI]
        mov byte ptr [EAX],BL
        mov BL,byte ptr [ESI + 0x1]
        add ESI,0x4
        mov byte ptr [EAX + 0x1],BL
        mov BL,byte ptr [ESI + -0x2]
        inc EDX
        mov byte ptr [EAX + 0x2],BL
        mov EBX,dword ptr [DAT_005fba18]
        add EAX,0x3
        cmp EDX,EBX
        jl LAB_0057a910
    LAB_0057a931:
        mov EAX,[DAT_005fba1c]
        inc ECX
        add EDI,0x4
        cmp ECX,EAX
        jl LAB_0057a8fe
    LAB_0057a93e:
        call wincore_wddvmem_cpp_closeScreenDevice_FUN_0057a4b0
        mov dword ptr [DAT_02d0bcfc],0x1
    LAB_0057a94d:
        mov ESI,dword ptr [DAT_02d0bce4]
        test ESI,ESI
        jz LAB_0057a971
        push 0x1
        push 0x0
        mov EDX,dword ptr [ESI]
        push ESI
        call dword ptr [EDX + 0x2c]
        test EAX,EAX
        jz LAB_0057a971
        cmp EAX,0x887601c2
        jnz LAB_0057a971
        call wincore_wddvmem_cpp_videoRestore_FUN_0057ab70
    LAB_0057a971:
        xor EDI,EDI
        mov dword ptr [DAT_02d0bcf4],EDI
        call wincore_winrun_cpp_FUN_00580f70
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_0057a985:
        push 0x0
        call engine_special_cpp_presentToExternalRenderer_FUN_00566260
        add ESP,0x4
        xor EDI,EDI
        mov dword ptr [DAT_02d0bcf4],EDI
        call wincore_winrun_cpp_FUN_00580f70
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_0057a9a3:
        mov EAX,[DAT_0060b010]
        mov dword ptr [EBP + -0x10],EAX
        mov EAX,[DAT_005fba20]
        mov EDX,EAX
        sar EDX,0x1f
        shl EDX,0x3
        sbb EAX,EDX
        sar EAX,0x3
        mov EDX,dword ptr [DAT_005fba18]
        imul EDX,EAX
        push 0x6c
        push ECX
        mov dword ptr [EBP + -0xc],EDX
        lea EAX,[EBP + -0x7c]
        push EAX
        call crt_memory_c_memset_FUN_005a28f0
        add ESP,0xc
        push EBX
        push 0x1
        lea EDX,[EBP + -0x7c]
        mov EDI,0x6c
        push EDX
        mov EAX,[DAT_02d0bce4]
        mov dword ptr [EBP + -0x7c],EDI
        push EBX
        mov ECX,dword ptr [EAX]
        push EAX
        call dword ptr [ECX + 0x64]
        mov ECX,EAX
        mov EAX,dword ptr [EBP + -0x58]
        mov dword ptr [EBP + -0x8],EAX
        mov ESI,dword ptr [EBP + -0x6c]
        imul ESI,dword ptr [DAT_02d0bd10]
        mov EDX,dword ptr [DAT_02d0bd0c]
        mov EBX,dword ptr [DAT_02d0bd08]
        imul EDX,EBX
        mov EAX,EDX
        sar EDX,0x1f
        shl EDX,0x3
        sbb EAX,EDX
        sar EAX,0x3
        add EAX,ESI
        add dword ptr [EBP + -0x8],EAX
        test ECX,ECX
        jnz LAB_0057a971
        cmp dword ptr [EBP + -0x8],0x0
        jz LAB_0057a971
        xor EAX,EAX
        mov EDX,dword ptr [DAT_005fba1c]
        mov dword ptr [EBP + -0x4],EAX
        test EDX,EDX
        jle LAB_0057aaae
    LAB_0057aa47:
        cmp dword ptr [DAT_01c6e2a0],0x0
        jz LAB_0057aafd
        mov ECX,dword ptr [EBP + 0xfffffff4]
        mov ESI,dword ptr [EBP + 0xfffffff0]
        mov EDI,dword ptr [EBP + 0xfffffff8]
    LAB_0057aa66:
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
        jg LAB_0057aa66
        emms
    LAB_0057aa91:
        mov EAX,dword ptr [EBP + -0xc]
        add dword ptr [EBP + -0x10],EAX
        mov EAX,dword ptr [EBP + -0x6c]
        add dword ptr [EBP + -0x8],EAX
        mov EAX,dword ptr [EBP + -0x4]
        inc EAX
        mov EDX,dword ptr [DAT_005fba1c]
        mov dword ptr [EBP + -0x4],EAX
        cmp EAX,EDX
        jl LAB_0057aa47
    LAB_0057aaae:
        push 0x0
        mov EAX,[DAT_02d0bce4]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX + 0x80]
        test EAX,EAX
        jz LAB_0057a971
        mov ECX,0x5d7779
        mov EBX,0x381
        push 0x5d7790
        mov dword ptr [DAT_01d71de0],ECX
        mov dword ptr [DAT_01d71de4],EBX
        call core_main_c_FUN_004e4330
        add ESP,0x4
        xor EDI,EDI
        mov dword ptr [DAT_02d0bcf4],EDI
        call wincore_winrun_cpp_FUN_00580f70
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_0057aafd:
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
        jmp LAB_0057aa91
}
}
