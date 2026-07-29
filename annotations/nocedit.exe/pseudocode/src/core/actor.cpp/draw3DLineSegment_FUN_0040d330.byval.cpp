// Name: core_actor.cpp_draw3DLineSegment_FUN_0040d330
// Address: 0040d330
// Address Range: [[0040d330, 0040d469] [00604780, 00604830]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_draw3DLineSegment_FUN_0040d330(CVector3f *start_point,CVector3f *direction_offset)

#include "nocturne.h"

void __cdecl core_actor_cpp_draw3DLineSegment_FUN_0040d330(CVector3f *start_point,CVector3f *direction_offset)
{
__asm {
        mov EDX,dword ptr [ESP + 0x58]
        mov EBX,dword ptr [ESP + 0x5c]
        mov EAX,dword ptr [EDX]
        mov dword ptr [ESP + 0x30],EAX
        lea EAX,[EDX + 0x4]
        mov EAX,dword ptr [EAX]
        mov dword ptr [ESP + 0x34],EAX
        lea EAX,[EDX + 0x8]
        mov EAX,dword ptr [EAX]
        mov dword ptr [ESP + 0x38],EAX
        fld float ptr [FLOAT_0061444c]
        fld float ptr [EBX]
        fmul ST(1)
        fstp float ptr [ESP + 0x3c]
        fld float ptr [EBX + 0x4]
        fmul ST(1)
        fstp float ptr [ESP + 0x40]
        fmul float ptr [EBX + 0x8]
        fstp float ptr [ESP + 0x44]
        fld float ptr [FLOAT_00614450]
        fld float ptr [EDX]
        fmul ST(1)
        fstp float ptr [ESP + 0xc]
        fld float ptr [EDX + 0x4]
        fmul ST(1)
        fstp float ptr [ESP + 0x10]
        fmul float ptr [EDX + 0x8]
        lea EAX,[ESP + 0x30]
        mov EBX,ESP
        fld float ptr [ESP + 0xc]
        fadd float ptr [ESP + 0x3c]
        fld float ptr [ESP + 0x10]
        fxch
        fstp float ptr [ESP + 0x18]
        mov EDX,dword ptr [g_CDemonRendererPtr1]
        fadd float ptr [ESP + 0x40]
        fxch
        fst float ptr [ESP + 0x14]
        fadd float ptr [ESP + 0x44]
        fxch
        fstp float ptr [ESP + 0x1c]
        fstp float ptr [ESP + 0x20]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX + 0x8]
        mov EAX,ESP
        push EAX
        mov EAX,dword ptr [EDX]
        push EAX
        call engine_special_cpp_transformAndProjectPoint_FUN_005b575c
        lea EBX,[ESP + 0x2c]
        add ESP,0x8
        lea EAX,[ESP + 0x18]
        mov EDX,dword ptr [g_CDemonRendererPtr1]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x24]
        push EAX
        mov EAX,dword ptr [EDX]
        add EAX,0x30
        push EAX
        call engine_special_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        mov EAX,[g_CDemonRendererPtr1]
        jmp LAB_00604780
    LAB_0040d44b:
        rep movsd
        jmp LAB_006047da
    LAB_0040d459:
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        add ESP,0x48
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_00604780:
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x30]
        mov ECX,dword ptr [ESI]
        mov dword ptr [EDI],ECX
        mov ECX,dword ptr [ESI + 0x4]
        mov dword ptr [EDI + 0x4],ECX
        mov ECX,dword ptr [ESI + 0x8]
        mov dword ptr [EDI + 0x8],ECX
        mov ECX,dword ptr [ESI + 0xc]
        mov dword ptr [EDI + 0xc],ECX
        mov ECX,dword ptr [ESI + 0x10]
        mov dword ptr [EDI + 0x10],ECX
        mov ECX,dword ptr [ESI + 0x14]
        mov dword ptr [EDI + 0x14],ECX
        mov ECX,dword ptr [ESI + 0x18]
        mov dword ptr [EDI + 0x18],ECX
        mov ECX,dword ptr [ESI + 0x1c]
        mov dword ptr [EDI + 0x1c],ECX
        mov ECX,dword ptr [ESI + 0x20]
        mov dword ptr [EDI + 0x20],ECX
        mov ECX,dword ptr [ESI + 0x24]
        mov dword ptr [EDI + 0x24],ECX
        mov ECX,dword ptr [ESI + 0x28]
        mov dword ptr [EDI + 0x28],ECX
        mov ECX,dword ptr [ESI + 0x2c]
        mov dword ptr [EDI + 0x2c],ECX
        jmp LAB_0040d44b
    LAB_006047da:
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        mov ESI,EAX
        mov ECX,dword ptr [ESI]
        mov dword ptr [EDI],ECX
        mov ECX,dword ptr [ESI + 0x4]
        mov dword ptr [EDI + 0x4],ECX
        mov ECX,dword ptr [ESI + 0x8]
        mov dword ptr [EDI + 0x8],ECX
        mov ECX,dword ptr [ESI + 0xc]
        mov dword ptr [EDI + 0xc],ECX
        mov ECX,dword ptr [ESI + 0x10]
        mov dword ptr [EDI + 0x10],ECX
        mov ECX,dword ptr [ESI + 0x14]
        mov dword ptr [EDI + 0x14],ECX
        mov ECX,dword ptr [ESI + 0x18]
        mov dword ptr [EDI + 0x18],ECX
        mov ECX,dword ptr [ESI + 0x1c]
        mov dword ptr [EDI + 0x1c],ECX
        mov ECX,dword ptr [ESI + 0x20]
        mov dword ptr [EDI + 0x20],ECX
        mov ECX,dword ptr [ESI + 0x24]
        mov dword ptr [EDI + 0x24],ECX
        mov ECX,dword ptr [ESI + 0x28]
        mov dword ptr [EDI + 0x28],ECX
        mov ECX,dword ptr [ESI + 0x2c]
        mov dword ptr [EDI + 0x2c],ECX
        jmp LAB_0040d459
}
}
