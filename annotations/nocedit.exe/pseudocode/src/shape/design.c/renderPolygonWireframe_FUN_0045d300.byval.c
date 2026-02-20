// Name: shape_design.c_renderPolygonWireframe_FUN_0045d300
// Address: 0045d300
// Address Range: [[0045d300, 0045d462]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive *polygon_data)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_d8 */
/* WARNING: Variable defined which should be unmapped: local_108 */

void __cdecl shape_design_c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive *polygon_data)
{
__asm {
        mov EBP,ESP
        sub ESP,0x98
        mov EAX,dword ptr [EBP + 0x14]
        add EAX,0x18
        mov dword ptr [EBP + -0x4],EAX
        mov EAX,dword ptr [EBP + 0x14]
        add EAX,0x8
        push EAX
        call engine_3d_c_isVisiblePlane_FUN_00403950
        add ESP,0x4
        test EAX,EAX
        jz LAB_0045d45c
        call engine_3d_c_setActiveRenderColor_FUN_00404540
        mov dword ptr [EBP + -0x8],0x0
        jmp LAB_0045d340
    LAB_0045d33a:
        mov EAX,dword ptr [EBP + -0x8]
        inc dword ptr [EBP + -0x8]
    LAB_0045d340:
        mov EAX,dword ptr [EBP + 0x14]
        mov EAX,dword ptr [EAX + 0x4]
        dec EAX
        cmp EAX,dword ptr [EBP + -0x8]
        jle LAB_0045d3da
        mov EDI,dword ptr [EBP + -0x8]
        shl EDI,0x2
        add EDI,dword ptr [EBP + -0x4]
        imul ESI,dword ptr [EDI],0x30
        mov ECX,0xc
        lea EDI,[EBP + -0x68]
        lea ESI,[g_RenderVertexBuffer + ESI]
        rep movsd
        mov ESI,dword ptr [EBP + -0x8]
        shl ESI,0x2
        add ESI,dword ptr [EBP + -0x4]
        imul ESI,dword ptr [ESI + 0x4],0x30
        mov ECX,0xc
        lea EDI,[EBP + -0x38]
        lea ESI,[g_RenderVertexBuffer + ESI]
        rep movsd
        mov ECX,0xc
        lea EDI,[EBP + 0xffffff68]
        lea ESI,[EBP + -0x38]
        rep movsd
        mov ECX,0xc
        sub ESP,0x30
        mov EDI,ESP
        lea ESI,[EBP + 0xffffff68]
        rep movsd
        mov ECX,0xc
        lea EDI,[EBP + 0xffffff68]
        lea ESI,[EBP + -0x68]
        rep movsd
        mov ECX,0xc
        sub ESP,0x30
        mov EDI,ESP
        lea ESI,[EBP + 0xffffff68]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        jmp LAB_0045d33a
    LAB_0045d3da:
        mov EDI,dword ptr [EBP + 0x14]
        mov EDI,dword ptr [EDI + 0x4]
        shl EDI,0x2
        add EDI,dword ptr [EBP + -0x4]
        imul ESI,dword ptr [EDI + -0x4],0x30
        mov ECX,0xc
        lea EDI,[EBP + -0x68]
        lea ESI,[g_RenderVertexBuffer + ESI]
        rep movsd
        mov EDI,dword ptr [EBP + -0x4]
        imul ESI,dword ptr [EDI],0x30
        mov ECX,0xc
        lea EDI,[EBP + -0x38]
        lea ESI,[g_RenderVertexBuffer + ESI]
        rep movsd
        mov ECX,0xc
        lea EDI,[EBP + 0xffffff68]
        lea ESI,[EBP + -0x38]
        rep movsd
        mov ECX,0xc
        sub ESP,0x30
        mov EDI,ESP
        lea ESI,[EBP + 0xffffff68]
        rep movsd
        mov ECX,0xc
        lea EDI,[EBP + 0xffffff68]
        lea ESI,[EBP + -0x68]
        rep movsd
        mov ECX,0xc
        sub ESP,0x30
        mov EDI,ESP
        lea ESI,[EBP + 0xffffff68]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
    LAB_0045d45c:
        mov ESP,EBP
}
}
