// Name: core_dstrendr.cpp_memcpyMMX_FUN_004886f1
// Address: 004886f1
// Address Range: [[004886f1, 00488731]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrendr_cpp_memcpyMMX_FUN_004886f1(void *dest,void *src,int byte_count)

#include "nocturne.h"

void __cdecl core_dstrendr_cpp_memcpyMMX_FUN_004886f1(void *dest,void *src,int byte_count)
{
__asm {
        push EAX
        push ECX
        mov ESI,dword ptr [EBP + 0xc]
        mov ECX,dword ptr [EBP + 0x10]
    LAB_004886fe:
        mov AL,byte ptr [ESI]
        add ESI,0x20
        sub ECX,0x20
        jg LAB_004886fe
        mov ESI,dword ptr [EBP + 0xc]
        and ESI,0xfffffff8
        mov EDI,dword ptr [EBP + 0x8]
        and EDI,0xfffffff8
        mov ECX,dword ptr [EBP + 0x10]
        shr ECX,0x3
        inc ECX
    LAB_0048871b:
        movq MM0,qword ptr [ESI]
        movq qword ptr [EDI],MM0
        add ESI,0x8
        add EDI,0x8
        dec ECX
        jge LAB_0048871b
        pop ECX
        pop EAX
        emms
}
}
