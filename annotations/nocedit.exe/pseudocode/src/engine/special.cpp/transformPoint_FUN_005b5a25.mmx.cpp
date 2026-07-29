// Name: engine_special.cpp_transformPoint_FUN_005b5a25
// Address: 005b5a25
// Address Range: [[005b5a25, 005b5ced]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_transformPoint_FUN_005b5a25(SProjectedVertex *output,CVector3i *input)

#include "nocturne.h"

int __cdecl engine_special_cpp_transformPoint_FUN_005b5a25(SProjectedVertex *output,CVector3i *input)
{
__asm {
        test dword ptr [g_MMXSupported],0xffffffff
        jz LAB_005b5b73
        mov EBX,dword ptr [ESP + 0x8]
        mov EAX,dword ptr [EBX]
        mov ECX,dword ptr [EBX + 0x4]
        mov EDX,dword ptr [EBX + 0x8]
        sub EAX,dword ptr [g_CameraOriginX]
        sub ECX,dword ptr [g_CameraOriginY]
        sub EDX,dword ptr [g_CameraOriginZ]
        movd MM0,EAX
        movd MM1,ECX
        movd MM2,EDX
        imul dword ptr [g_TransformMatrix]
        mov EBX,EAX
        mov ECX,EDX
        movd EAX,MM1
        imul dword ptr [0x02d052f4]
        add EBX,EAX
        adc ECX,EDX
        movd EAX,MM2
        imul dword ptr [0x02d05300]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        movd MM4,EAX
        movd EAX,MM0
        imul dword ptr [0x02d052ec]
        mov EBX,EAX
        mov ECX,EDX
        movd EAX,MM1
        imul dword ptr [0x02d052f8]
        add EBX,EAX
        adc ECX,EDX
        movd EAX,MM2
        imul dword ptr [0x02d05304]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        movd MM5,EAX
        movd EAX,MM0
        imul dword ptr [0x02d052f0]
        mov EBX,EAX
        mov ECX,EDX
        movd EAX,MM1
        imul dword ptr [0x02d052fc]
        add EBX,EAX
        adc ECX,EDX
        movd EAX,MM2
        imul dword ptr [0x02d05308]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        movd MM6,EAX
        neg EAX
        mov EDX,EAX
        xor EAX,EAX
        movd EBX,MM4
        movd ECX,MM6
        cmp EBX,ECX
        jle LAB_005b5af8
        or EAX,0x80000001
    LAB_005b5af8:
        cmp EBX,EDX
        jge LAB_005b5b01
        or EAX,0x80000002
    LAB_005b5b01:
        movd EBX,MM5
        cmp EBX,ECX
        jle LAB_005b5b0d
        or EAX,0x80000004
    LAB_005b5b0d:
        cmp EBX,EDX
        jge LAB_005b5b16
        or EAX,0x80000008
    LAB_005b5b16:
        cmp ECX,0x0
        jg LAB_005b5b20
        or EAX,0x80000010
    LAB_005b5b20:
        mov EBX,dword ptr [ESP + 0x4]
        movd dword ptr [EBX],MM4
        movd dword ptr [EBX + 0x4],MM5
        movd dword ptr [EBX + 0x8],MM6
        test EAX,0xffffffff
        jnz LAB_005b5b6d
        mov EAX,0x7fffffff
        xor EDX,EDX
        idiv ECX
        mov dword ptr [EBX + 0xc],EAX
        movd EAX,MM4
        imul dword ptr [g_Projection]
        idiv ECX
        add EAX,dword ptr [g_Projection.center_x_fixed]
        mov dword ptr [EBX + 0x10],EAX
        movd EAX,MM5
        imul dword ptr [g_Projection.neg_half_height_fixed]
        idiv ECX
        add EAX,dword ptr [g_Projection.center_y_fixed]
        mov dword ptr [EBX + 0x14],EAX
        emms
        ret
    LAB_005b5b6d:
        mov dword ptr [EBX + 0x10],EAX
        emms
        ret
    LAB_005b5b73:
        push ESI
        push EDI
        mov ESI,dword ptr [ESP + 0x10]
        mov EDI,dword ptr [ESP + 0xc]
        mov EAX,dword ptr [ESI]
        mov EBX,dword ptr [ESI + 0x4]
        mov ECX,dword ptr [ESI + 0x8]
        sub EAX,dword ptr [g_CameraOriginX]
        sub EBX,dword ptr [g_CameraOriginY]
        sub ECX,dword ptr [g_CameraOriginZ]
        mov [g_TempX],EAX
        mov dword ptr [g_TempY],EBX
        mov dword ptr [g_TempZ],ECX
        imul dword ptr [g_TransformMatrix]
        mov EBX,EAX
        mov ECX,EDX
        mov EAX,[g_TempY]
        imul dword ptr [0x02d052f4]
        add EBX,EAX
        adc ECX,EDX
        mov EAX,[g_TempZ]
        imul dword ptr [0x02d05300]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        mov [g_TempTransformedX],EAX
        mov EAX,[g_TempX]
        imul dword ptr [0x02d052ec]
        mov EBX,EAX
        mov ECX,EDX
        mov EAX,[g_TempY]
        imul dword ptr [0x02d052f8]
        add EBX,EAX
        adc ECX,EDX
        mov EAX,[g_TempZ]
        imul dword ptr [0x02d05304]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        mov [g_TempTransformedY],EAX
        mov EAX,[g_TempX]
        imul dword ptr [0x02d052f0]
        mov EBX,EAX
        mov ECX,EDX
        mov EAX,[g_TempY]
        imul dword ptr [0x02d052fc]
        add EBX,EAX
        adc ECX,EDX
        mov EAX,[g_TempZ]
        imul dword ptr [0x02d05308]
        add EAX,EBX
        adc EDX,ECX
        shrd EAX,EDX,0x10
        mov [g_TempTransformedZ],EAX
        neg EAX
        mov EDX,EAX
        xor EAX,EAX
        mov EBX,dword ptr [g_TempTransformedX]
        mov ECX,dword ptr [g_TempTransformedZ]
        cmp EBX,ECX
        jle LAB_005b5c60
        or EAX,0x80000001
    LAB_005b5c60:
        cmp EBX,EDX
        jge LAB_005b5c69
        or EAX,0x80000002
    LAB_005b5c69:
        mov EBX,dword ptr [g_TempTransformedY]
        cmp EBX,ECX
        jle LAB_005b5c78
        or EAX,0x80000004
    LAB_005b5c78:
        cmp EBX,EDX
        jge LAB_005b5c81
        or EAX,0x80000008
    LAB_005b5c81:
        cmp ECX,0x0
        jg LAB_005b5c8b
        or EAX,0x80000010
    LAB_005b5c8b:
        test EAX,0xffffffff
        jnz LAB_005b5cda
        mov EAX,[g_TempTransformedX]
        mov dword ptr [EDI],EAX
        mov dword ptr [EDI + 0x4],EBX
        mov dword ptr [EDI + 0x8],ECX
        mov EAX,0x7fffffff
        xor EDX,EDX
        idiv ECX
        mov dword ptr [EDI + 0xc],EAX
        mov EAX,[g_TempTransformedX]
        imul dword ptr [g_Projection]
        idiv ECX
        add EAX,dword ptr [g_Projection.center_x_fixed]
        mov dword ptr [EDI + 0x10],EAX
        mov EAX,[g_TempTransformedY]
        imul dword ptr [g_Projection.neg_half_height_fixed]
        idiv ECX
        add EAX,dword ptr [g_Projection.center_y_fixed]
        mov dword ptr [EDI + 0x14],EAX
        pop EDI
        pop ESI
        ret
    LAB_005b5cda:
        mov EDX,dword ptr [g_TempTransformedX]
        mov dword ptr [EDI],EDX
        mov dword ptr [EDI + 0x4],EBX
        mov dword ptr [EDI + 0x8],ECX
        mov dword ptr [EDI + 0x10],EAX
}
}
