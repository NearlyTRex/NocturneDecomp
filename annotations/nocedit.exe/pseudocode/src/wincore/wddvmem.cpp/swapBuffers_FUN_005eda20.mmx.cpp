// Name: wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
// Address: 005eda20
// Address Range: [[005eda20, 005edc4e]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_005eda20(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_005eda20(void)
{
__asm {
        mov EBP,ESP
        sub ESP,0x7c
        cmp dword ptr [g_WindowActive],0x0
        jz LAB_005edaf2
        mov ECX,dword ptr [g_UseExternalRenderer]
        test ECX,ECX
        jnz LAB_005edb06
        mov EBX,dword ptr [g_RenderingInProgress]
        test EBX,EBX
        jnz LAB_005edace
        mov ESI,dword ptr [g_UseSoftwareRendering]
        test ESI,ESI
        jz LAB_005edb24
        mov EBX,dword ptr [g_BackBuffer]
        mov dword ptr [g_UseSoftwareRendering],ECX
        call wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580
        mov ESI,dword ptr [g_WindowHeight]
        xor EDI,EDI
        test ESI,ESI
        jle LAB_005edabf
        xor ESI,ESI
    LAB_005eda7f:
        mov ECX,dword ptr [g_WindowWidth]
        mov EAX,dword ptr [g_ScreenBufferArray + ESI]
        xor EDX,EDX
        test ECX,ECX
        jle LAB_005edab2
    LAB_005eda91:
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
        jl LAB_005eda91
    LAB_005edab2:
        mov EAX,[g_WindowHeight]
        inc EDI
        add ESI,0x4
        cmp EDI,EAX
        jl LAB_005eda7f
    LAB_005edabf:
        call wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630
        mov dword ptr [g_UseSoftwareRendering],0x1
    LAB_005edace:
        mov EBX,dword ptr [g_DirectDrawSurface]
        test EBX,EBX
        jz LAB_005edaf2
        push 0x1
        push 0x0
        mov EDX,dword ptr [EBX]
        push EBX
        call dword ptr [EDX + 0x2c]
        test EAX,EAX
        jz LAB_005edaf2
        cmp EAX,0x887601c2
        jnz LAB_005edaf2
        call wincore_wddvmem_cpp_videoRestore_FUN_005edc80
    LAB_005edaf2:
        xor ESI,ESI
        mov dword ptr [g_RenderingInProgress],ESI
        call wincore_winrun_cpp_processWindowMessages_FUN_005f35e0
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_005edb06:
        push 0x0
        call wincore_windll_cpp_presentToExternalRenderer_FUN_005b7c30
        add ESP,0x4
        xor ESI,ESI
        mov dword ptr [g_RenderingInProgress],ESI
        call wincore_winrun_cpp_processWindowMessages_FUN_005f35e0
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_005edb24:
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
        call crt_memory_c_memset_FUN_005fde40
        add ESP,0xc
        push EBX
        push 0x1
        lea EBX,[EBP + -0x7c]
        mov EDI,0x6c
        push EBX
        mov EAX,[g_DirectDrawSurface]
        mov dword ptr [EBP + -0x7c],EDI
        push ESI
        mov EDX,dword ptr [EAX]
        push EAX
        call dword ptr [EDX + 0x64]
        mov EDX,EAX
        mov EAX,dword ptr [EBP + -0x58]
        mov dword ptr [EBP + -0x8],EAX
        test EDX,EDX
        jnz LAB_005edaf2
        cmp dword ptr [EBP + -0x8],0x0
        jz LAB_005edaf2
        mov ECX,dword ptr [g_WindowHeight]
        mov dword ptr [EBP + -0x4],EDX
        test ECX,ECX
        jle LAB_005edc00
    LAB_005edb9b:
        mov ECX,dword ptr [EBP + 0xfffffff4]
        mov ESI,dword ptr [EBP + 0xfffffff0]
        mov EDI,dword ptr [EBP + 0xfffffff8]
    LAB_005edbad:
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
        jg LAB_005edbad
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
        jl LAB_005edb9b
        lea EAX,[EAX]
        lea EDX,[EDX]
        mov EBX,EBX
    LAB_005edc00:
        push 0x0
        mov EAX,[g_DirectDrawSurface]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX + 0x80]
        test EAX,EAX
        jz LAB_005edaf2
        mov ESI,0x657a2b
        mov EDI,0x36e
        push 0x657a42
        mov dword ptr [g_CurrentFilename],ESI
        mov dword ptr [g_CurrentLineNumber],EDI
        call core_main_c_displayErrorAndQuit_FUN_00506f10
        add ESP,0x4
        xor ESI,ESI
        mov dword ptr [g_RenderingInProgress],ESI
        call wincore_winrun_cpp_processWindowMessages_FUN_005f35e0
        mov ESP,EBP
}
}
