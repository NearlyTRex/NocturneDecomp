// Name: wincore_wddvmem.cpp_swapBuffers_FUN_00553910
// Address: 00553910
// Address Range: [[00553910, 00553b64]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_00553910(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_00553910(void)
{
__asm {
        mov EBP,ESP
        sub ESP,0x7c
        mov EDX,dword ptr [g_UseExternalRenderer]
        test EDX,EDX
        jnz LAB_005539d2
        mov ECX,dword ptr [DAT_02ddf564]
        test ECX,ECX
        jnz LAB_005539b0
        cmp dword ptr [DAT_02ddf56c],0x0
        jz LAB_005539eb
        mov EBX,dword ptr [g_BackBuffer]
        mov dword ptr [DAT_02ddf56c],EDX
        call wincore_wddvmem_cpp_openScreenDevice_FUN_00553470
        mov ESI,dword ptr [g_WindowHeight]
        xor EDI,EDI
        test ESI,ESI
        jle LAB_005539a1
        xor ESI,ESI
    LAB_00553961:
        mov ECX,dword ptr [g_WindowWidth]
        mov EAX,dword ptr [g_ScreenBufferArray + ESI]
        xor EDX,EDX
        test ECX,ECX
        jle LAB_00553994
    LAB_00553973:
        mov CL,byte ptr [EBX]
        mov byte ptr [EAX],CL
        mov CL,byte ptr [EBX + 0x1]
        add EBX,0x4
        mov byte ptr [EAX + 0x1],CL
        mov CL,byte ptr [EBX + -0x2]
        inc EDX
        mov byte ptr [EAX + 0x2],CL
        mov ECX,dword ptr [g_WindowWidth]
        add EAX,0x3
        cmp EDX,ECX
        jl LAB_00553973
    LAB_00553994:
        mov EAX,[g_WindowHeight]
        inc EDI
        add ESI,0x4
        cmp EDI,EAX
        jl LAB_00553961
    LAB_005539a1:
        call wincore_wddvmem_cpp_closeScreenDevice_FUN_00553520
        mov dword ptr [DAT_02ddf56c],0x1
    LAB_005539b0:
        mov EBX,dword ptr [g_DirectDrawSurface]
        test EBX,EBX
        jnz LAB_00553b2f
    LAB_005539be:
        xor ESI,ESI
        mov dword ptr [DAT_02ddf564],ESI
        call wincore_winrun_cpp_processWindowMessages_FUN_005591c0
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_005539d2:
        call engine_special_cpp_toggle_FUN_00532ba0
        xor ESI,ESI
        mov dword ptr [DAT_02ddf564],ESI
        call wincore_winrun_cpp_processWindowMessages_FUN_005591c0
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_005539eb:
        mov EAX,[g_BackBuffer]
        mov dword ptr [EBP + -0x10],EAX
        mov EAX,[g_BitsPerPixel]
        mov EDX,EAX
        sar EDX,0x1f
        shl EDX,0x3
        sbb EAX,EDX
        sar EAX,0x3
        mov EDX,dword ptr [g_WindowWidth]
        imul EDX,EAX
        push 0x6c
        push ECX
        mov dword ptr [EBP + -0xc],EDX
        lea EAX,[EBP + -0x7c]
        push EAX
        call crt_memory_c_memset_FUN_00563cc0
        add ESP,0xc
        push 0x0
        push 0x1
        lea EDX,[EBP + -0x7c]
        mov ESI,0x6c
        push EDX
        mov EAX,[g_DirectDrawSurface]
        mov dword ptr [EBP + -0x7c],ESI
        push 0x0
        mov EBX,dword ptr [EAX]
        push EAX
        call dword ptr [EBX + 0x64]
        test EAX,EAX
        jz LAB_00553a63
        mov EDI,0x597ae0
        mov EAX,0x346
        push 0x597af7
        mov dword ptr [g_CurrentFilename],EDI
        mov [g_CurrentLineNumber],EAX
        call core_main_c_displayErrorAndQuit_FUN_004c8440
        add ESP,0x4
    LAB_00553a63:
        mov EAX,dword ptr [EBP + -0x58]
        mov dword ptr [EBP + -0x8],EAX
        xor EDX,EDX
        mov ECX,dword ptr [g_WindowHeight]
        mov dword ptr [EBP + -0x4],EDX
        test ECX,ECX
        jle LAB_00553ae0
    LAB_00553a78:
        mov ECX,dword ptr [EBP + 0xfffffff4]
        mov ESI,dword ptr [EBP + 0xfffffff0]
        mov EDI,dword ptr [EBP + 0xfffffff8]
    LAB_00553a8a:
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
        jg LAB_00553a8a
        emms
        mov EAX,dword ptr [EBP + -0xc]
        add dword ptr [EBP + -0x10],EAX
        mov EAX,dword ptr [EBP + -0x6c]
        add dword ptr [EBP + -0x8],EAX
        mov ECX,dword ptr [EBP + -0x4]
        inc ECX
        mov EBX,dword ptr [g_WindowHeight]
        mov dword ptr [EBP + -0x4],ECX
        cmp ECX,EBX
        jl LAB_00553a78
        lea EAX,[EAX]
        lea EDX,[EDX]
        mov EAX,EAX
    LAB_00553ae0:
        push 0x0
        mov EAX,[g_DirectDrawSurface]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX + 0x80]
        test EAX,EAX
        jz LAB_005539be
        mov ESI,0x597b13
        mov EDI,0x368
        push 0x597b2a
        mov dword ptr [g_CurrentFilename],ESI
        mov dword ptr [g_CurrentLineNumber],EDI
        call core_main_c_displayErrorAndQuit_FUN_004c8440
        add ESP,0x4
        xor ESI,ESI
        mov dword ptr [DAT_02ddf564],ESI
        call wincore_winrun_cpp_processWindowMessages_FUN_005591c0
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_00553b2f:
        push 0x1
        push 0x0
        mov EDX,dword ptr [EBX]
        push EBX
        call dword ptr [EDX + 0x2c]
        test EAX,EAX
        jz LAB_005539be
        cmp EAX,0x887601c2
        jnz LAB_005539be
        call wincore_wddvmem_cpp_videoRestore_FUN_00553ba0
        xor ESI,ESI
        mov dword ptr [DAT_02ddf564],ESI
        call wincore_winrun_cpp_processWindowMessages_FUN_005591c0
        mov ESP,EBP
}
}
