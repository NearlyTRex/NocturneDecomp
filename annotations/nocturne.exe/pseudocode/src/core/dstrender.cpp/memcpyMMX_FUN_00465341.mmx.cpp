// Name: core_dstrender.cpp_memcpyMMX_FUN_00465341
// Address: 00465341
// Address Range: [[00465341, 00465381]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_memcpyMMX_FUN_00465341(void *dest,void *src,int byte_count)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_memcpyMMX_FUN_00465341(void *dest,void *src,int byte_count)
{
__asm {
        push EAX
        push ECX
        mov ESI,dword ptr [EBP + 0xc]
        mov ECX,dword ptr [EBP + 0x10]
    LAB_0046534e:
        mov AL,byte ptr [ESI]
        add ESI,0x20
        sub ECX,0x20
        jg LAB_0046534e
        mov ESI,dword ptr [EBP + 0xc]
        and ESI,0xfffffff8
        mov EDI,dword ptr [EBP + 0x8]
        and EDI,0xfffffff8
        mov ECX,dword ptr [EBP + 0x10]
        shr ECX,0x3
        inc ECX
    LAB_0046536b:
        movq MM0,qword ptr [ESI]
        movq qword ptr [EDI],MM0
        add ESI,0x8
        add EDI,0x8
        dec ECX
        jge LAB_0046536b
        pop ECX
        pop EAX
        emms
}
}
