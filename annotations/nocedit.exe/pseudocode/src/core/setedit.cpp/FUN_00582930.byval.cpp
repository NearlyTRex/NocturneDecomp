// Name: core_setedit.cpp_FUN_00582930
// Address: 00582930
// Address Range: [[00582930, 00582f23]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_FUN_00582930(void)

#include "nocturne.h"

void __cdecl core_setedit_cpp_FUN_00582930(void)
{
__asm {
        mov EDX,0xbf800000
        mov EBX,0x40000000
        lea EAX,[ESP + 0x30]
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        mov dword ptr [ESP + 0x30],EDX
        mov dword ptr [ESP + 0x38],EBX
        lea EBX,[ESP + 0x54]
        mov dword ptr [ESP + 0x34],EDX
        fld float ptr [EAX]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x54]
        push EAX
        mov EAX,dword ptr [EDI]
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        mov AH,byte ptr [ESP + 0x33]
        xor AH,0x80
        lea EBX,[ESP + 0x18]
        mov byte ptr [ESP + 0x33],AH
        lea EAX,[ESP + 0x30]
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x18]
        push EAX
        mov EAX,dword ptr [EDI]
        add EAX,0x30
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        mov EBX,ESP
        mov DL,byte ptr [ESP + 0x37]
        lea EAX,[ESP + 0x30]
        xor DL,0x80
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        mov byte ptr [ESP + 0x37],DL
        fld float ptr [EAX]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x8]
        mov EAX,ESP
        push EAX
        mov EAX,dword ptr [EDI]
        add EAX,0x60
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        lea EBX,[ESP + 0xc]
        mov DH,byte ptr [ESP + 0x33]
        lea EAX,[ESP + 0x30]
        xor DH,0x80
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        mov byte ptr [ESP + 0x33],DH
        fld float ptr [EAX]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0xc]
        push EAX
        mov EAX,dword ptr [EDI]
        add EAX,0x90
        push EAX
        mov ESI,0xbe99999a
        xor EBP,EBP
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        lea EBX,[ESP + 0x44]
        lea EAX,[ESP + 0x38]
        add ESP,0x8
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        mov dword ptr [ESP + 0x30],ESI
        mov dword ptr [ESP + 0x34],ESI
        mov dword ptr [ESP + 0x38],EBP
        fld float ptr [EAX]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x3c]
        push EAX
        mov EAX,dword ptr [EDI]
        add EAX,0xc0
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        mov BL,byte ptr [ESP + 0x33]
        xor BL,0x80
        lea EAX,[ESP + 0x30]
        mov byte ptr [ESP + 0x33],BL
        lea EBX,[ESP + 0x60]
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x60]
        push EAX
        mov EAX,dword ptr [EDI]
        add EAX,0xf0
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        mov BH,byte ptr [ESP + 0x37]
        xor BH,0x80
        lea EAX,[ESP + 0x30]
        mov byte ptr [ESP + 0x37],BH
        lea EBX,[ESP + 0x48]
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x48]
        push EAX
        mov EAX,dword ptr [EDI]
        add EAX,0x120
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        lea EBX,[ESP + 0x24]
        mov CL,byte ptr [ESP + 0x33]
        lea EAX,[ESP + 0x30]
        xor CL,0x80
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        mov byte ptr [ESP + 0x33],CL
        fld float ptr [EAX]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x24]
        push EAX
        mov EAX,dword ptr [EDI]
        add EAX,0x150
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        cmp dword ptr [ESP + 0x84],0x0
        jz LAB_00582cca
        mov EDX,dword ptr [ESP + 0x80]
        push EDX
        mov ECX,dword ptr [g_CDemonRendererPtr2]
        push ECX
        call engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
        add ESP,0x8
        push 0x1
        push EBP
        mov EBX,dword ptr [g_CDemonRendererPtr2]
        push EBX
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push 0x2
        push 0x1
        mov ESI,dword ptr [g_CDemonRendererPtr2]
        push ESI
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push 0x3
        push 0x2
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        push EDI
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push EBP
        push 0x3
        mov EBP,dword ptr [g_CDemonRendererPtr2]
        push EBP
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push 0x5
        push 0x4
        mov EAX,[g_CDemonRendererPtr2]
        push EAX
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push 0x6
        push 0x5
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        push EDX
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push 0x7
        push 0x6
        mov ECX,dword ptr [g_CDemonRendererPtr2]
        push ECX
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push 0x4
        push 0x7
        mov EBX,dword ptr [g_CDemonRendererPtr2]
        push EBX
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push 0x4
        push 0x0
        mov ESI,dword ptr [g_CDemonRendererPtr2]
        push ESI
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push 0x5
        push 0x1
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        push EDI
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push 0x6
        push 0x2
        mov EBP,dword ptr [g_CDemonRendererPtr2]
        push EBP
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push 0x7
        push 0x3
        mov EAX,[g_CDemonRendererPtr2]
        push EAX
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        add ESP,0x6c
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_00582cca:
        mov EAX,dword ptr [ESP + 0x80]
        mov [g_ActiveRenderColor],EAX
        mov EAX,[g_CDemonRendererPtr2]
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
        mov EAX,[g_CDemonRendererPtr2]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x60]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x30]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,[g_CDemonRendererPtr2]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x90]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x60]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        mov EAX,[g_CDemonRendererPtr2]
        add ESP,0x60
        mov ECX,0xc
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov EDI,ESP
        mov ESI,EAX
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x90]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,[g_CDemonRendererPtr2]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0xf0]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0xc0]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,[g_CDemonRendererPtr2]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x120]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0xf0]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,[g_CDemonRendererPtr2]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x150]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x120]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,[g_CDemonRendererPtr2]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0xc0]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x150]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,[g_CDemonRendererPtr2]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0xc0]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        mov ESI,EAX
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,[g_CDemonRendererPtr2]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0xf0]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x30]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,[g_CDemonRendererPtr2]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x120]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x60]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,[g_CDemonRendererPtr2]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x150]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x90]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        add ESP,0x6c
}
}
