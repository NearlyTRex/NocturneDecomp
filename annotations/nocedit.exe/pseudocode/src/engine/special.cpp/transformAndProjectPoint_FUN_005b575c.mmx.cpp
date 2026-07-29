// Name: engine_special.cpp_transformAndProjectPoint_FUN_005b575c
// Address: 005b575c
// Address Range: [[005b575c, 005b5a24]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex *output,CVector3i *input)

#include "nocturne.h"

void __cdecl engine_special_cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex *output,CVector3i *input)
{
__asm {
        test dword ptr [g_MMXSupported],0xffffffff
        jz LAB_005b58aa
        mov EBX,dword ptr [ESP + 0x8]
        mov EAX,dword ptr [EBX]
        mov ECX,dword ptr [EBX + 0x4]
        mov EDX,dword ptr [EBX + 0x8]
        sub EAX,dword ptr [g_RelativeX]
        sub ECX,dword ptr [g_RelativeY]
        sub EDX,dword ptr [g_RelativeZ]
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
        jle LAB_005b582f
        or EAX,0x80000001
    LAB_005b582f:
        cmp EBX,EDX
        jge LAB_005b5838
        or EAX,0x80000002
    LAB_005b5838:
        movd EBX,MM5
        cmp EBX,ECX
        jle LAB_005b5844
        or EAX,0x80000004
    LAB_005b5844:
        cmp EBX,EDX
        jge LAB_005b584d
        or EAX,0x80000008
    LAB_005b584d:
        cmp ECX,0x0
        jg LAB_005b5857
        or EAX,0x80000010
    LAB_005b5857:
        mov EBX,dword ptr [ESP + 0x4]
        movd dword ptr [EBX],MM4
        movd dword ptr [EBX + 0x4],MM5
        movd dword ptr [EBX + 0x8],MM6
        test EAX,0xffffffff
        jnz LAB_005b58a4
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
    LAB_005b58a4:
        mov dword ptr [EBX + 0x10],EAX
        emms
        ret
    LAB_005b58aa:
        push ESI
        push EDI
        mov ESI,dword ptr [ESP + 0x10]
        mov EDI,dword ptr [ESP + 0xc]
        mov EAX,dword ptr [ESI]
        mov EBX,dword ptr [ESI + 0x4]
        mov ECX,dword ptr [ESI + 0x8]
        sub EAX,dword ptr [g_RelativeX]
        sub EBX,dword ptr [g_RelativeY]
        sub ECX,dword ptr [g_RelativeZ]
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
        jle LAB_005b5997
        or EAX,0x80000001
    LAB_005b5997:
        cmp EBX,EDX
        jge LAB_005b59a0
        or EAX,0x80000002
    LAB_005b59a0:
        mov EBX,dword ptr [g_TempTransformedY]
        cmp EBX,ECX
        jle LAB_005b59af
        or EAX,0x80000004
    LAB_005b59af:
        cmp EBX,EDX
        jge LAB_005b59b8
        or EAX,0x80000008
    LAB_005b59b8:
        cmp ECX,0x0
        jg LAB_005b59c2
        or EAX,0x80000010
    LAB_005b59c2:
        test EAX,0xffffffff
        jnz LAB_005b5a11
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
    LAB_005b5a11:
        mov EDX,dword ptr [g_TempTransformedX]
        mov dword ptr [EDI],EDX
        mov dword ptr [EDI + 0x4],EBX
        mov dword ptr [EDI + 0x8],ECX
        mov dword ptr [EDI + 0x10],EAX
}
}
