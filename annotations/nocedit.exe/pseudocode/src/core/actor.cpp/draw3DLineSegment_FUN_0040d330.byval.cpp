// Name: core_actor.cpp_draw3DLineSegment_FUN_0040d330
// Address: 0040d330
// Address Range: [[0040d330, 0040d469]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_draw3DLineSegment_FUN_0040d330(CVector3i *start_point,CVector3f *direction_offset)

#include "nocturne.h"

void __cdecl core_actor_cpp_draw3DLineSegment_FUN_0040d330(CVector3i *start_point,CVector3f *direction_offset)
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
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
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
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        mov EAX,[g_CDemonRendererPtr1]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x30]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        mov ESI,EAX
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        add ESP,0x48
}
}
