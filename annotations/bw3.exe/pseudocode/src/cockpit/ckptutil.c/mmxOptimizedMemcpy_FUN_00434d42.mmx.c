// Name: cockpit_ckptutil.c_mmxOptimizedMemcpy_FUN_00434d42
// Address: 00434d42
// Address Range: [[00434d42, 00434e47]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_00434d42(void *dest_buffer,void *src_buffer,int byte_count)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_mmxOptimizedMemcpy_FUN_00434d42(void *dest_buffer,void *src_buffer,int byte_count)
{
__asm {
        push EAX
        push EBX
        push ECX
        push EDX
        mov EDI,dword ptr [EBP + 0x8]
        mov EDX,dword ptr [EBP + 0x10]
        mov EBX,EDI
        mov ESI,dword ptr [EBP + 0xc]
        and EBX,0x1f
        jz LAB_00434d8d
        mov EAX,0x20
        nop
        sub EAX,EBX
        nop
        cmp EDX,EAX
        jge LAB_00434d6b
        mov EAX,EDX
        nop
    LAB_00434d6b:
        sub EDX,EAX
        mov ECX,EAX
        and ECX,0x3
        jz LAB_00434d78
        sub EAX,ECX
        rep movsb
    LAB_00434d78:
        shr EAX,0x2
        jz LAB_00434d81
        mov ECX,EAX
        rep movsd
    LAB_00434d81:
        cmp EDX,0x0
        jz LAB_00434e40
        mov dword ptr [EBP + 0xc],ESI
    LAB_00434d8d:
        mov ECX,EDX
        sub ECX,0x100
        js LAB_00434dd2
        mov EAX,EAX
        mov EAX,EAX
        mov EAX,EAX
    LAB_00434da0:
        mov AL,byte ptr [ESI]
        mov BL,byte ptr [ESI + 0x24]
        mov AL,byte ptr [ESI + 0x40]
        mov BL,byte ptr [ESI + 0x64]
        mov AL,byte ptr [ESI + 0x80]
        mov BL,byte ptr [ESI + 0xa4]
        mov AL,byte ptr [ESI + 0xc0]
        mov BL,byte ptr [ESI + 0xe4]
        add ESI,0x100
        nop
        sub ECX,0x100
        jg LAB_00434da0
    LAB_00434dd2:
        mov ESI,dword ptr [EBP + 0xc]
        mov ECX,EDX
        shr ECX,0x5
        jz LAB_00434e24
        shl ECX,0x5
        nop
        mov EAX,ECX
        sub ECX,0x20
        mov EAX,EAX
        mov EAX,EAX
        mov EAX,EAX
        mov EAX,EAX
    LAB_00434df0:
        movq MM0,qword ptr [ECX + ESI*0x1]
        movq MM1,qword ptr [ECX + ESI*0x1 + 0x8]
        movq MM2,qword ptr [ECX + ESI*0x1 + 0x10]
        movq MM3,qword ptr [ECX + ESI*0x1 + 0x18]
        movq qword ptr [ECX + EDI*0x1],MM0
        movq qword ptr [ECX + EDI*0x1 + 0x8],MM1
        movq qword ptr [ECX + EDI*0x1 + 0x10],MM2
        movq qword ptr [ECX + EDI*0x1 + 0x18],MM3
        sub ECX,0x20
        jge LAB_00434df0
        emms
        sub EDX,EAX
        add ESI,EAX
        add EDI,EAX
        nop
    LAB_00434e24:
        cmp EDX,0x0
        jz LAB_00434e40
        mov EBX,EDX
        nop
        shr EBX,0x2
        jz LAB_00434e3c
        mov ECX,EBX
        rep movsd
        shl EBX,0x2
        nop
        sub EDX,EBX
        nop
    LAB_00434e3c:
        mov ECX,EDX
        rep movsb
    LAB_00434e40:
        pop EDX
        pop ECX
        pop EBX
        pop EAX
}
}
