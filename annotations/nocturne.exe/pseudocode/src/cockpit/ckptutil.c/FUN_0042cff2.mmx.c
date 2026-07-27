// Name: cockpit_ckptutil.c_FUN_0042cff2
// Address: 0042cff2
// Address Range: [[0042cff2, 0042d0f7]]
// Convention: unknown
// Signature: undefined8 cockpit_ckptutil_c_FUN_0042cff2(undefined4 *param_1,undefined4 *param_2,uint param_3)

#include "nocturne.h"

ulonglong cockpit_ckptutil_c_FUN_0042cff2(uint *param_1,uint *param_2,uint param_3)
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
        jz LAB_0042d03d
        mov EAX,0x20
        nop
        sub EAX,EBX
        nop
        cmp EDX,EAX
        jge LAB_0042d01b
        mov EAX,EDX
        nop
    LAB_0042d01b:
        sub EDX,EAX
        mov ECX,EAX
        and ECX,0x3
        jz LAB_0042d028
        sub EAX,ECX
        rep movsb
    LAB_0042d028:
        shr EAX,0x2
        jz LAB_0042d031
        mov ECX,EAX
        rep movsd
    LAB_0042d031:
        cmp EDX,0x0
        jz LAB_0042d0f0
        mov dword ptr [EBP + 0xc],ESI
    LAB_0042d03d:
        mov ECX,EDX
        sub ECX,0x100
        js LAB_0042d082
        mov EAX,EAX
        mov EAX,EAX
        mov EAX,EAX
    LAB_0042d050:
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
        jg LAB_0042d050
    LAB_0042d082:
        mov ESI,dword ptr [EBP + 0xc]
        mov ECX,EDX
        shr ECX,0x5
        jz LAB_0042d0d4
        shl ECX,0x5
        nop
        mov EAX,ECX
        sub ECX,0x20
        mov EAX,EAX
        mov EAX,EAX
        mov EAX,EAX
        mov EAX,EAX
    LAB_0042d0a0:
        movq MM0,qword ptr [ECX + ESI*0x1]
        movq MM1,qword ptr [ECX + ESI*0x1 + 0x8]
        movq MM2,qword ptr [ECX + ESI*0x1 + 0x10]
        movq MM3,qword ptr [ECX + ESI*0x1 + 0x18]
        movq qword ptr [ECX + EDI*0x1],MM0
        movq qword ptr [ECX + EDI*0x1 + 0x8],MM1
        movq qword ptr [ECX + EDI*0x1 + 0x10],MM2
        movq qword ptr [ECX + EDI*0x1 + 0x18],MM3
        sub ECX,0x20
        jge LAB_0042d0a0
        emms
        sub EDX,EAX
        add ESI,EAX
        add EDI,EAX
        nop
    LAB_0042d0d4:
        cmp EDX,0x0
        jz LAB_0042d0f0
        mov EBX,EDX
        nop
        shr EBX,0x2
        jz LAB_0042d0ec
        mov ECX,EBX
        rep movsd
        shl EBX,0x2
        nop
        sub EDX,EBX
        nop
    LAB_0042d0ec:
        mov ECX,EDX
        rep movsb
    LAB_0042d0f0:
        pop EDX
        pop ECX
        pop EBX
        pop EAX
}
}
