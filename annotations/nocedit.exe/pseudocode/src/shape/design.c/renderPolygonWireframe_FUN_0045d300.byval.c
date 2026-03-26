// Name: shape_design.c_renderPolygonWireframe_FUN_0045d300
// Address: 0045d300
// Address Range: [[0045d300, 0045d462] [00603048, 006031b3] [03fc0ba8, 03fc0eaf]]
// Convention: __cdecl
// Signature: void __cdecl shape_design_c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive *polygon_data)

#include "nocturne.h"

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
        jmp LAB_03fc0ba8
    LAB_0045d36c:
        mov ESI,dword ptr [EBP + -0x8]
        shl ESI,0x2
        add ESI,dword ptr [EBP + -0x4]
        imul ESI,dword ptr [ESI + 0x4],0x30
        jmp LAB_03fc0c09
    LAB_0045d389:
        jmp LAB_03fc0c6a
    LAB_0045d399:
        jmp LAB_00603048
    LAB_0045d3a9:
        rep movsd
        jmp LAB_03fc0ccb
    LAB_0045d3bb:
        jmp LAB_006030a3
    LAB_0045d3cb:
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
        jmp LAB_03fc0d2c
    LAB_0045d3fa:
        mov EDI,dword ptr [EBP + -0x4]
        imul ESI,dword ptr [EDI],0x30
        jmp LAB_03fc0d8d
    LAB_0045d410:
        jmp LAB_03fc0dee
    LAB_0045d420:
        jmp LAB_006030fe
    LAB_0045d430:
        rep movsd
        jmp LAB_03fc0e4f
    LAB_0045d442:
        jmp LAB_00603159
    LAB_0045d452:
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
    LAB_0045d45c:
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_00603048:
        mov ECX,0xc
        sub ESP,0x30
        mov EDI,ESP
        lea ESI,[EBP + 0xffffff68]
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
        jmp LAB_0045d3a9
    LAB_006030a3:
        mov ECX,0xc
        sub ESP,0x30
        mov EDI,ESP
        lea ESI,[EBP + 0xffffff68]
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
        jmp LAB_0045d3cb
    LAB_006030fe:
        mov ECX,0xc
        sub ESP,0x30
        mov EDI,ESP
        lea ESI,[EBP + 0xffffff68]
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
        jmp LAB_0045d430
    LAB_00603159:
        mov ECX,0xc
        sub ESP,0x30
        mov EDI,ESP
        lea ESI,[EBP + 0xffffff68]
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
        jmp LAB_0045d452
    LAB_03fc0ba8:
        mov ECX,0xc
        lea EDI,[EBP + -0x68]
        lea ESI,[ESI + 0x688014]
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
        add ESI,0x30
        add EDI,0x30
        xor ECX,ECX
        jmp LAB_0045d36c
    LAB_03fc0c09:
        mov ECX,0xc
        lea EDI,[EBP + -0x38]
        lea ESI,[ESI + 0x688014]
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
        add ESI,0x30
        add EDI,0x30
        xor ECX,ECX
        jmp LAB_0045d389
    LAB_03fc0c6a:
        mov ECX,0xc
        lea EDI,[EBP + 0xffffff68]
        lea ESI,[EBP + -0x38]
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
        add ESI,0x30
        add EDI,0x30
        xor ECX,ECX
        jmp LAB_0045d399
    LAB_03fc0ccb:
        mov ECX,0xc
        lea EDI,[EBP + 0xffffff68]
        lea ESI,[EBP + -0x68]
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
        add ESI,0x30
        add EDI,0x30
        xor ECX,ECX
        jmp LAB_0045d3bb
    LAB_03fc0d2c:
        mov ECX,0xc
        lea EDI,[EBP + -0x68]
        lea ESI,[ESI + 0x688014]
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
        add ESI,0x30
        add EDI,0x30
        xor ECX,ECX
        jmp LAB_0045d3fa
    LAB_03fc0d8d:
        mov ECX,0xc
        lea EDI,[EBP + -0x38]
        lea ESI,[ESI + 0x688014]
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
        add ESI,0x30
        add EDI,0x30
        xor ECX,ECX
        jmp LAB_0045d410
    LAB_03fc0dee:
        mov ECX,0xc
        lea EDI,[EBP + 0xffffff68]
        lea ESI,[EBP + -0x38]
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
        add ESI,0x30
        add EDI,0x30
        xor ECX,ECX
        jmp LAB_0045d420
    LAB_03fc0e4f:
        mov ECX,0xc
        lea EDI,[EBP + 0xffffff68]
        lea ESI,[EBP + -0x68]
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
        add ESI,0x30
        add EDI,0x30
        xor ECX,ECX
        jmp LAB_0045d442
}
}
