// Name: sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_004e85b0
// Address: 004e85b0
// Address Range: [[004e85b0, 004e9490]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_004e85b0(CMP3Decoder *this_ptr,short *pcm_output)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_004e85b0(CMP3Decoder *this_ptr,short *pcm_output)
{
__asm {
        and ESP,0xfffffff8
        mov EBX,dword ptr [EBP + 0x18]
        lea EAX,[ESP + 0x5fc0]
        xor EDX,EDX
        mov ESI,0xffffffff
        mov dword ptr [ESP + 0x6020],EDX
        mov dword ptr [ESP + 0x5ff0],EAX
        mov dword ptr [ESP + 0x5ffc],ESI
        mov EAX,dword ptr [EBP + 0x14]
        mov dword ptr [ESP + 0x5ff8],EDX
        mov dword ptr [ESP + 0x601c],EDX
        mov EDX,dword ptr [EAX + 0x533c]
        add EAX,0x5320
        test EDX,EDX
        jnz LAB_004e8665
        mov EDX,0xfff
        mov ESI,0xc
        mov ECX,0x1fff
        mov EDI,EAX
        mov dword ptr [ESP + 0x6028],EDX
        mov EDX,dword ptr [EAX + 0xc]
        mov dword ptr [ESP + 0x602c],ECX
        and EDX,0x7
        jnz LAB_004e8670
    LAB_004e862c:
        push ESI
        push EDI
        call sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0
        add ESP,0x8
        mov ESI,EAX
    LAB_004e8638:
        mov EAX,dword ptr [ESP + 0x602c]
        mov EDX,dword ptr [ESP + 0x6028]
        and EAX,ESI
        cmp EAX,EDX
        jz LAB_004e8683
        mov EAX,dword ptr [EDI + 0x1c]
        test EAX,EAX
        jnz LAB_004e8683
        push 0x8
        push EDI
        shl ESI,0x8
        call sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0
        add ESP,0x8
        or ESI,EAX
        jmp LAB_004e8638
    LAB_004e8665:
        xor ESI,ESI
        mov EAX,ESI
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_004e8670:
        mov ECX,0x8
        sub ECX,EDX
        push ECX
        push EAX
        call sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0
        add ESP,0x8
        jmp LAB_004e862c
    LAB_004e8683:
        mov EAX,dword ptr [EDI + 0x1c]
        test EAX,EAX
        jnz LAB_004e8665
        mov EAX,dword ptr [EBP + 0x14]
        mov ECX,dword ptr [ESP + 0x6020]
        mov EDX,dword ptr [EAX + 0x532c]
        sub EDX,ECX
        lea ESI,[ECX + EDX*0x1]
        lea EDX,[ESP + 0x5ff0]
        push EDX
        add EAX,0x5320
        push EAX
        mov dword ptr [ESP + 0x6028],ESI
        call sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_004e3130
        add ESP,0x8
        mov EDI,dword ptr [ESP + 0x5ff0]
        lea ESI,[ESP + 0x5ff0]
        mov EAX,dword ptr [EDI + 0x1c]
        xor ECX,ECX
        mov dword ptr [ESP + 0x5ff4],EAX
        cmp EAX,0x3
        setnz AL
        mov CL,AL
        inc ECX
        mov dword ptr [ESP + 0x6000],ECX
        mov EDX,dword ptr [EDI + 0x4]
        cmp EDX,0x2
        jnz LAB_004e8be0
        mov EAX,dword ptr [ESP + 0x6008]
        mov dword ptr [ESP + 0x6034],EAX
        mov EAX,dword ptr [EDI]
        mov dword ptr [ESP + 0x6044],EAX
        lea EAX,[EDX + -0x1]
        mov dword ptr [ESP + 0x6038],EAX
        mov EAX,dword ptr [EDI + 0xc]
        mov EDX,dword ptr [ESP + 0x6044]
        mov dword ptr [ESP + 0x603c],EAX
        lea EAX,[EDX*0x4 + 0x0]
        sub EAX,EDX
        shl EAX,0x2
        mov EDX,EAX
        shl EAX,0x4
        sub EAX,EDX
        mov dword ptr [ESP + 0x60bc],EAX
        mov EAX,dword ptr [ESP + 0x6038]
        shl EAX,0x2
        mov EDX,EAX
        shl EAX,0x4
        sub EAX,EDX
        mov EDX,dword ptr [ESP + 0x60bc]
        add EDX,EAX
        mov dword ptr [ESP + 0x60bc],EDX
        mov EDX,dword ptr [ESP + 0x603c]
        mov EAX,dword ptr [ESP + 0x60bc]
        shl EDX,0x2
        add EDX,EAX
        mov EAX,dword ptr [g_MpegBitrateTable + EDX]
        mov EDX,EAX
        sar EDX,0x1f
        idiv ECX
        mov ECX,dword ptr [ESP + 0x6044]
        mov EDX,dword ptr [EDI + 0x10]
        shl ECX,0x5
        shl EDX,0x3
        add EDX,ECX
        mov dword ptr [ESP + 0x6030],ESI
        fld double ptr [g_MpegSampleRateTable + EDX]
        call crt_math_c_round_FUN_00563a30
        mov EDX,dword ptr [ESP + 0x6044]
        fistp dword ptr [ESP + 0x6040]
        cmp EDX,0x1
        jnz LAB_004e8bd6
        cmp dword ptr [ESP + 0x6040],0x30
        jnz LAB_004e8b8c
        cmp EAX,0x38
        jl LAB_004e8b8c
    LAB_004e87d1:
        xor EAX,EAX
    LAB_004e87d3:
        mov EDX,dword ptr [ESP + 0x6030]
        cmp EAX,dword ptr [EDX + 0xc]
        jz LAB_004e8806
        push 0x1cd8b28
        mov EAX,0x58b4e0
        mov EDX,0x1a1
        push 0x58b4f1
        mov [g_CurrentFilename],EAX
        mov dword ptr [g_CurrentLineNumber],EDX
        call core_main_c_displayErrorAndQuit_FUN_004c8440
        add ESP,0x8
    LAB_004e8806:
        mov EAX,dword ptr [ESP + 0x6034]
        mov dword ptr [ESI + 0x18],EAX
    LAB_004e8810:
        mov ECX,dword ptr [EDI + 0x1c]
        cmp ECX,0x1
        jnz LAB_004e8c0f
        mov EAX,dword ptr [EDI + 0x4]
        mov dword ptr [ESP + 0x6048],EAX
        mov EDI,dword ptr [EDI + 0x20]
        cmp EAX,ECX
        jge LAB_004e8bf0
    LAB_004e8831:
        push 0x1cd8b28
        push EDI
        mov EDX,dword ptr [ESP + 0x6050]
        push EDX
        mov ECX,0x58b52a
        mov EAX,0x1b1
        push 0x58b53b
        mov dword ptr [g_CurrentFilename],ECX
        mov [g_CurrentLineNumber],EAX
        call core_main_c_displayErrorAndQuit_FUN_004c8440
        add ESP,0x10
    LAB_004e8861:
        mov EAX,dword ptr [ESP + 0x6048]
        shl EAX,0x4
        mov EAX,dword ptr [s_CMotionController_005bb246 + EAX + EDI*0x4 + 0xa]
    LAB_004e8872:
        mov dword ptr [ESI + 0x14],EAX
        mov EAX,dword ptr [ESP + 0x6000]
        mov dword ptr [ESP + 0x6018],EAX
        mov EAX,dword ptr [ESP + 0x5ff0]
        cmp dword ptr [EAX],0x0
        setnz AL
        mov ESI,dword ptr [EBP + 0x14]
        and EAX,0xff
        mov EDI,dword ptr [ESP + 0x5fc4]
        inc EAX
        add ESI,0x5320
        mov dword ptr [ESP + 0x6024],EAX
        cmp EDI,0x2
        jnc LAB_004e947a
        cmp EDI,0x1
        jnz LAB_004e8a52
        lea EAX,[ESP + 0x5ff0]
        push EAX
        lea EAX,[ESP + 0x5e44]
        push EAX
        mov EBX,0x20
        mov EDI,0x180
        push ESI
        mov dword ptr [ESP + 0xc],EBX
        mov dword ptr [ESP + 0x10],EDI
        call sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_004e3320
        add ESP,0xc
        lea EAX,[ESP + 0x5ff0]
        push EAX
        lea EAX,[ESP + 0x510c]
        push EAX
        lea EAX,[ESP + 0x5e48]
        push EAX
        push ESI
        call sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_004e33d0
        add ESP,0x10
        xor EAX,EAX
        mov dword ptr [ESP + 0x60b0],EAX
        mov dword ptr [ESP + 0x604c],ESI
    LAB_004e891b:
        lea EAX,[ESP + 0x5ff0]
        push EAX
        lea EAX,[ESP + 0x5e44]
        push EAX
        lea EAX,[ESP + 0x5410]
        push EAX
        mov EBX,dword ptr [ESP + 0x6058]
        push EBX
        call sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_004e36d0
        add ESP,0x10
        lea EAX,[ESP + 0x5ff0]
        push EAX
        lea EAX,[ESP + 0x5e44]
        push EAX
        lea EAX,[ESP + 0x5710]
        push EAX
        lea EAX,[ESP + 0x5414]
        push EAX
        xor EDI,EDI
        call sound_mp3_cpp_requantizeSamples_FUN_004e3d30
        add ESP,0x10
        lea EAX,[ESP + 0x5708]
        mov ESI,dword ptr [ESP + 0x6000]
        mov dword ptr [ESP + 0x6050],EAX
        lea EAX,[ESP + 0x5108]
        mov dword ptr [ESP + 0x6074],EDI
        mov dword ptr [ESP + 0x6054],EAX
    LAB_004e8997:
        mov ECX,EDI
        test ESI,ESI
        jle LAB_004e89e0
        mov EDX,dword ptr [ESP + 0x6074]
        mov EBX,dword ptr [ESP + 0x6054]
        mov EAX,dword ptr [ESP + 0x6074]
        add EDX,EBX
        add EAX,dword ptr [ESP + 0x6050]
    LAB_004e89bb:
        fld float ptr [EAX]
        mov EBX,dword ptr [EDX]
        fld ST(0)
        fmul double ptr [g_MpegScalefactorTable + EBX*0x8]
        add EDX,0x180
        add EAX,0x180
        inc ECX
        fstp ST(1)
        fstp float ptr [EAX + 0xfffffe80]
        cmp ECX,ESI
        jl LAB_004e89bb
    LAB_004e89e0:
        mov EAX,dword ptr [ESP + 0x6074]
        add EAX,0x4
        mov dword ptr [ESP + 0x6074],EAX
        cmp EAX,0x80
        jnz LAB_004e8997
        mov ECX,dword ptr [ESP + 0x6018]
        xor EBX,EBX
        test ECX,ECX
        jle LAB_004e8a3a
        lea EDI,[ESP + 0x2d08]
        lea ESI,[ESP + 0x5708]
    LAB_004e8a13:
        push EDI
        push EBX
        push ESI
        mov EAX,dword ptr [EBP + 0x14]
        push EAX
        add EDI,0x480
        call sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070
        add ESP,0x10
        inc EBX
        mov EDX,dword ptr [ESP + 0x6018]
        add ESI,0x180
        cmp EBX,EDX
        jl LAB_004e8a13
    LAB_004e8a3a:
        mov ECX,dword ptr [ESP + 0x60b0]
        inc ECX
        mov dword ptr [ESP + 0x60b0],ECX
        cmp ECX,0xc
        jl LAB_004e891b
    LAB_004e8a52:
        cmp dword ptr [ESP + 0x5fcc],0x0
        jle LAB_004e8b70
        mov EAX,dword ptr [ESP + 0x5fc4]
        dec EAX
        shl EAX,0x2
        mov ECX,EAX
        shl ECX,0x4
        mov EDX,dword ptr [ESP + 0x5fc0]
        sub ECX,EAX
        lea EAX,[EDX*0x4 + 0x0]
        sub EAX,EDX
        shl EAX,0x2
        mov EDX,EAX
        shl EAX,0x4
        sub EAX,EDX
        add ECX,EAX
        mov EAX,dword ptr [ESP + 0x5fcc]
        mov EDX,dword ptr [ESP + 0x5fc0]
        fild dword ptr [g_MpegBitrateTable + ECX + EAX*0x4]
        mov EAX,dword ptr [ESP + 0x5fd0]
        shl EDX,0x5
        shl EAX,0x3
        xor ECX,ECX
        add EAX,EDX
        mov EDX,dword ptr [ESP + 0x4]
        mov dword ptr [ESP + 0x6010],ECX
        mov dword ptr [ESP + 0x600c],EDX
        fild qword ptr [ESP + 0x600c]
        fdiv double ptr [g_MpegSampleRateTable + EAX]
        fmulp
        mov EAX,dword ptr [ESP]
        mov dword ptr [ESP + 0x6010],ECX
        mov dword ptr [ESP + 0x600c],EAX
        fild qword ptr [ESP + 0x600c]
        fdivp
        mov ESI,dword ptr [ESP + 0x5fd4]
        call crt_math_c_round_FUN_00563a30
        fistp dword ptr [ESP + 0x6070]
        test ESI,ESI
        jz LAB_004e8b0d
        inc dword ptr [ESP + 0x6070]
    LAB_004e8b0d:
        mov EAX,dword ptr [ESP + 0x6070]
        imul EAX,dword ptr [ESP]
        mov ESI,dword ptr [EBP + 0x14]
        mov ECX,dword ptr [ESP + 0x6020]
        mov dword ptr [ESP + 0x6070],EAX
        mov EAX,dword ptr [ESI + 0x532c]
        sub EAX,ECX
        mov EBX,dword ptr [ESP + 0x6070]
        add EAX,0xc
        sub EBX,EAX
        mov dword ptr [ESP + 0x6070],EBX
        add ESI,0x5320
        mov EDI,dword ptr [ESP + 0x6070]
        xor EBX,EBX
        test EDI,EDI
        jle LAB_004e8b70
    LAB_004e8b57:
        push ESI
        call sound_mp3_cpp_CFileBitStream_readBit_FUN_004e29d0
        add ESP,0x4
        inc EBX
        cmp EBX,dword ptr [ESP + 0x6070]
        jl LAB_004e8b57
        lea EAX,[EAX]
    LAB_004e8b70:
        mov EDX,dword ptr [ESP + 0x6024]
        lea ESI,[EDX*0x8 + 0x0]
        add ESI,EDX
        shl ESI,0x6
        mov EAX,ESI
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_004e8b8c:
        cmp EAX,0x38
        jl LAB_004e8b9a
        cmp EAX,0x50
        jle LAB_004e87d1
    LAB_004e8b9a:
        cmp dword ptr [ESP + 0x6040],0x30
        jz LAB_004e8bb3
        cmp EAX,0x60
        jl LAB_004e8bb3
        mov EAX,0x1
        jmp LAB_004e87d3
    LAB_004e8bb3:
        cmp dword ptr [ESP + 0x6040],0x20
        jz LAB_004e8bcc
        cmp EAX,0x30
        jg LAB_004e8bcc
        mov EAX,0x2
        jmp LAB_004e87d3
    LAB_004e8bcc:
        mov EAX,0x3
        jmp LAB_004e87d3
    LAB_004e8bd6:
        mov EAX,0x4
        jmp LAB_004e87d3
    LAB_004e8be0:
        mov dword ptr [ESP + 0x6008],0x20
        jmp LAB_004e8810
    LAB_004e8bf0:
        cmp EAX,0x3
        jg LAB_004e8831
        test EDI,EDI
        jl LAB_004e8831
        cmp EDI,0x3
        jg LAB_004e8831
        jmp LAB_004e8861
    LAB_004e8c0f:
        mov EAX,dword ptr [ESI + 0x18]
        jmp LAB_004e8872
    LAB_004e8c17:
        mov dword ptr [ESP + 0x4],0x480
        lea EAX,[ESP + 0x5ff0]
        push EAX
        lea EAX,[ESP + 0x5e44]
        push EAX
        mov EDI,0x8
        push ESI
        mov dword ptr [ESP + 0xc],EDI
        call sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_004e31f0
        add ESP,0xc
        lea EAX,[ESP + 0x5ff0]
        push EAX
        lea EAX,[ESP + 0x510c]
        push EAX
        lea EAX,[ESP + 0x5e48]
        push EAX
        lea EAX,[ESP + 0x5d4c]
        push EAX
        push ESI
        call sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_004e3460
        add ESP,0x14
        xor EDX,EDX
        mov dword ptr [ESP + 0x6014],EDX
        mov dword ptr [ESP + 0x6058],ESI
    LAB_004e8c7a:
        lea EAX,[ESP + 0x5ff0]
        push EAX
        lea EAX,[ESP + 0x5e44]
        push EAX
        lea EAX,[ESP + 0x5410]
        push EAX
        mov EDI,dword ptr [ESP + 0x6064]
        push EDI
        call sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004e37d0
        add ESP,0x10
        lea EAX,[ESP + 0x5ff0]
        push EAX
        lea EAX,[ESP + 0x570c]
        push EAX
        lea EAX,[ESP + 0x5e48]
        push EAX
        lea EAX,[ESP + 0x5414]
        push EAX
        call sound_mp3_cpp_requantizeLayer3SamplesSimple_FUN_004e3a60
        add ESP,0x10
        mov EAX,dword ptr [ESP + 0x6014]
        sar EAX,0x2
        push EAX
        lea EAX,[ESP + 0x5ff4]
        push EAX
        lea EAX,[ESP + 0x5110]
        push EAX
        lea EAX,[ESP + 0x5714]
        push EAX
        call sound_mp3_cpp_applyScalefactorsToSubbands_FUN_004e3e70
        add ESP,0x10
        test EBX,EBX
        jnz LAB_004e8d16
    LAB_004e8cf9:
        mov EDI,dword ptr [ESP + 0x6014]
        inc EDI
        mov dword ptr [ESP + 0x6014],EDI
        cmp EDI,0xc
        jl LAB_004e8c7a
        jmp LAB_004e8a52
    LAB_004e8d16:
        xor EAX,EAX
        mov dword ptr [ESP + 0x60a8],EAX
        mov dword ptr [ESP + 0x60a4],EAX
    LAB_004e8d26:
        mov ECX,dword ptr [ESP + 0x6018]
        xor ESI,ESI
        test ECX,ECX
        jle LAB_004e8d96
        mov EDI,dword ptr [ESP + 0x60a4]
        lea EAX,[ESP + 0x5708]
        mov EDX,dword ptr [ESP + 0x60a8]
        add EDI,EAX
        lea EAX,[ESP + 0x2d08]
        add EAX,EDX
        mov dword ptr [ESP + 0x60a0],EAX
    LAB_004e8d5a:
        mov EAX,dword ptr [ESP + 0x60a0]
        push EAX
        push ESI
        push EDI
        mov EDX,dword ptr [EBP + 0x14]
        push EDX
        call sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070
        add ESP,0x10
        inc ESI
        mov ECX,dword ptr [ESP + 0x60a0]
        add EDI,0x180
        add ECX,0x480
        mov EAX,dword ptr [ESP + 0x6018]
        mov dword ptr [ESP + 0x60a0],ECX
        cmp ESI,EAX
        jl LAB_004e8d5a
    LAB_004e8d96:
        mov ECX,dword ptr [ESP + 0x60a8]
        mov EDX,dword ptr [ESP + 0x60a4]
        add ECX,0x40
        add EDX,0x80
        mov dword ptr [ESP + 0x60a8],ECX
        mov dword ptr [ESP + 0x60a4],EDX
        cmp ECX,0xc0
        jnz LAB_004e8d26
        xor EDI,EDI
        mov dword ptr [ESP + 0x60ac],EDI
        mov dword ptr [ESP + 0x6014],EDI
    LAB_004e8dd7:
        mov EDI,dword ptr [ESP + 0x60ac]
        xor ESI,ESI
    LAB_004e8de0:
        mov ECX,dword ptr [ESP + 0x6018]
        xor EAX,EAX
        test ECX,ECX
        jle LAB_004e8e11
        lea ECX,[ESI + EDI*0x1]
    LAB_004e8df0:
        add EBX,0x2
        mov DX,word ptr [ESP + ECX*0x1 + 0x2d08]
        inc EAX
        mov word ptr [EBX + -0x2],DX
        mov EDX,dword ptr [ESP + 0x6018]
        add ECX,0x480
        cmp EAX,EDX
        jl LAB_004e8df0
    LAB_004e8e11:
        add ESI,0x2
        cmp ESI,0x40
        jnz LAB_004e8de0
        mov ECX,dword ptr [ESP + 0x60ac]
        add ECX,ESI
        mov dword ptr [ESP + 0x60ac],ECX
        cmp ECX,0xc0
        jz LAB_004e8cf9
        jmp LAB_004e8dd7
    LAB_004e8e37:
        mov EAX,dword ptr [ESP + 0x5ff0]
        mov ECX,0x8
        mov ESI,dword ptr [EAX]
        mov dword ptr [ESP],ECX
        test ESI,ESI
        jz LAB_004e8fa9
        mov dword ptr [ESP + 0x4],0x480
    LAB_004e8e58:
        lea EAX,[ESP + 0x5ff0]
        push EAX
        lea EAX,[ESP + 0x5bfc]
        push EAX
        mov EAX,dword ptr [EBP + 0x14]
        add EAX,0x5320
        push EAX
        mov ECX,dword ptr [EBP + 0x14]
        push ECX
        mov dword ptr [ESP + 0x6074],EAX
        call sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_004e4320
        add ESP,0x10
        lea ESI,[ESP + 0x5ff0]
        sub ESP,0x1c
        mov ECX,0x7
        mov EDI,ESP
        rep movsd
        call sound_mp3_cpp_calculateMainDataSize_FUN_004e77d0
        add ESP,0x1c
        mov ESI,EAX
        test EAX,EAX
        jle LAB_004e8ed0
        mov EDI,dword ptr [ESP + 0x6064]
    LAB_004e8eac:
        push 0x8
        push 0x8
        push EDI
        call sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0
        add ESP,0x8
        push EAX
        mov EDX,dword ptr [EBP + 0x14]
        push EDX
        dec ESI
        call sound_mp3_cpp_CMP3Decoder_putByte_FUN_004e2de0
        add ESP,0xc
        test ESI,ESI
        jg LAB_004e8eac
        lea EAX,[EAX]
        mov ECX,ECX
    LAB_004e8ed0:
        mov ECX,dword ptr [EBP + 0x14]
        push ECX
        call sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0
        add ESP,0x4
        mov EDI,dword ptr [EBP + 0x14]
        push EDI
        mov ESI,EAX
        call sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0
        add ESP,0x4
        xor EDX,EDX
        mov ECX,dword ptr [ESP]
        div ECX
        shr ESI,0x3
        test EDX,EDX
        jz LAB_004e8f07
        mov EAX,ECX
        sub EAX,EDX
        push EAX
        push EDI
        inc ESI
        call sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0
        add ESP,0x8
    LAB_004e8f07:
        mov EAX,dword ptr [EBP + 0x14]
        mov EAX,dword ptr [EAX + 0x534c]
        mov EDX,dword ptr [ESP + 0x5bf8]
        sub EAX,ESI
        sub EAX,EDX
        mov dword ptr [ESP + 0x6060],EAX
        cmp ESI,0x1000
        jle LAB_004e8f4d
        mov ECX,dword ptr [EBP + 0x14]
        mov ESI,dword ptr [ECX + 0x534c]
        push 0x1000
        sub ESI,0x1000
        push ECX
        mov dword ptr [ECX + 0x534c],ESI
        call sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_004e2ea0
        add ESP,0x8
    LAB_004e8f4d:
        mov ECX,0x7
        sub ESP,0x1c
        lea ESI,[ESP + 0x600c]
        mov EDI,ESP
        rep movsd
        call sound_mp3_cpp_calculateMainDataSize_FUN_004e77d0
        add ESP,0x1c
        mov EDX,dword ptr [EBP + 0x14]
        mov EDI,dword ptr [EDX + 0x534c]
        add EDI,EAX
        mov EAX,dword ptr [ESP + 0x6060]
        mov dword ptr [EDX + 0x534c],EDI
        test EAX,EAX
        jl LAB_004e8fb6
    LAB_004e8f84:
        mov ESI,dword ptr [ESP + 0x6060]
        test ESI,ESI
        jle LAB_004e8fe4
        push 0x8
        mov EDX,dword ptr [EBP + 0x14]
        push EDX
        call sound_mp3_cpp_CMP3Decoder_readBits_FUN_004e2cf0
        add ESP,0x8
        lea ECX,[ESI + -0x1]
        mov dword ptr [ESP + 0x6060],ECX
        jmp LAB_004e8f84
    LAB_004e8fa9:
        mov dword ptr [ESP + 0x4],0x240
        jmp LAB_004e8e58
    LAB_004e8fb6:
        mov EAX,dword ptr [ESP + 0x601c]
        dec EAX
        push EAX
        mov EDX,0x58b9c0
        mov ECX,0xf90
        push 0x58b9d1
        mov dword ptr [g_CurrentFilename],EDX
        mov dword ptr [g_CurrentLineNumber],ECX
        call core_main_c_displayErrorAndQuit_FUN_004c8440
        add ESP,0x8
        jmp LAB_004e8f84
    LAB_004e8fe4:
        test EBX,EBX
        jz LAB_004e8a52
        xor EDI,EDI
        mov EAX,dword ptr [ESP + 0x6024]
        mov dword ptr [ESP + 0x605c],EDI
        test EAX,EAX
        jle LAB_004e8a52
        lea EAX,[ESP + 0x5c10]
        mov dword ptr [ESP + 0x609c],EDI
        mov dword ptr [ESP + 0x6098],EAX
    LAB_004e9019:
        mov EDI,dword ptr [ESP + 0x6018]
        xor ESI,ESI
        test EDI,EDI
        jle LAB_004e9124
        lea EAX,[ESP + 0x1208]
        mov EDI,dword ptr [ESP + 0x609c]
        mov dword ptr [ESP + 0x6078],EAX
        add EDI,0x10
        lea EAX,[ESP + 0x5c00]
        add EDI,EAX
    LAB_004e904b:
        mov EDX,dword ptr [EBP + 0x14]
        push EDX
        call sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004e2ce0
        add ESP,0x4
        mov dword ptr [ESP + 0x6068],EAX
        mov EAX,dword ptr [ESP + 0x5ff0]
        cmp dword ptr [EAX],0x0
        jz LAB_004e944b
        lea EAX,[ESP + 0x5ff0]
        push EAX
        push ESI
        mov ECX,dword ptr [ESP + 0x6064]
        push ECX
        lea EAX,[ESP + 0x5c04]
        push EAX
        lea EAX,[ESP + 0x5a18]
        push EAX
        mov EAX,dword ptr [EBP + 0x14]
        push EAX
        call sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004e48a0
    LAB_004e9098:
        add ESP,0x18
        lea EAX,[ESP + 0x5ff0]
        push EAX
        mov EAX,dword ptr [ESP + 0x606c]
        push EAX
        mov EDX,dword ptr [ESP + 0x6064]
        push EDX
        push ESI
        lea EAX,[ESP + 0x5c08]
        push EAX
        lea EAX,[ESP + 0x241c]
        push EAX
        mov ECX,dword ptr [EBP + 0x14]
        push ECX
        call sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_004e5200
        add ESP,0x1c
        lea EAX,[ESP + 0x5ff0]
        push EAX
        push ESI
        push EDI
        lea EAX,[ESP + 0x5a14]
        push EAX
        mov EAX,dword ptr [ESP + 0x6088]
        push EAX
        lea EAX,[ESP + 0x241c]
        push EAX
        call sound_mp3_cpp_requantizeLayer3Samples_FUN_004e58d0
        add ESP,0x18
        inc ESI
        mov EDX,dword ptr [ESP + 0x6078]
        add EDI,0xa0
        add EDX,0x900
        mov ECX,dword ptr [ESP + 0x6018]
        mov dword ptr [ESP + 0x6078],EDX
        cmp ESI,ECX
        jl LAB_004e904b
    LAB_004e9124:
        lea EAX,[ESP + 0x5ff0]
        push EAX
        mov ESI,dword ptr [ESP + 0x609c]
        push ESI
        lea EAX,[ESP + 0x5a10]
        push EAX
        lea EAX,[ESP + 0x14]
        push EAX
        lea EAX,[ESP + 0x1218]
        push EAX
        call sound_mp3_cpp_mpegLayer3StereoProcess_FUN_004e6160
        add ESP,0x14
        xor EDI,EDI
        mov EAX,dword ptr [ESP + 0x6018]
        mov dword ptr [ESP + 0x60b4],EDI
        test EAX,EAX
        jle LAB_004e93a4
        mov EAX,dword ptr [ESP + 0x609c]
        lea EDX,[ESP + 0x5c00]
        add EAX,0x10
        add EAX,EDX
        lea EDX,[ESP + 0x8]
        mov dword ptr [ESP + 0x6084],EAX
        mov dword ptr [ESP + 0x608c],EAX
        lea EAX,[ESP + 0x2d08]
        mov dword ptr [ESP + 0x6088],EDX
        mov dword ptr [ESP + 0x6090],EAX
    LAB_004e91a3:
        lea EAX,[ESP + 0x5ff0]
        push EAX
        mov ESI,dword ptr [ESP + 0x6090]
        push ESI
        lea EAX,[ESP + 0x3f10]
        push EAX
        mov EDI,dword ptr [ESP + 0x6094]
        push EDI
        call sound_mp3_cpp_reorderShortBlockSamples_FUN_004e5d80
        add ESP,0x10
        lea EAX,[ESP + 0x5ff0]
        push EAX
        push ESI
        lea EAX,[ESP + 0x3610]
        push EAX
        lea EAX,[ESP + 0x3f14]
        push EAX
        call sound_mp3_cpp_antiAliasingButterfly_FUN_004e7030
        add ESP,0x10
        mov EAX,dword ptr [ESP + 0x6084]
        lea EDI,[ESP + 0x4808]
        mov dword ptr [ESP + 0x606c],EAX
        lea EAX,[ESP + 0x3608]
        xor ESI,ESI
        mov dword ptr [ESP + 0x607c],EAX
    LAB_004e9211:
        lea EAX,[ESP + 0x5ff0]
        push EAX
        mov EDX,dword ptr [ESP + 0x6070]
        push EDX
        mov ECX,dword ptr [ESP + 0x60bc]
        push ECX
        push ESI
        push EDI
        mov EAX,dword ptr [ESP + 0x6090]
        push EAX
        mov EDX,dword ptr [EBP + 0x14]
        push EDX
        call sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_004e7720
        add ESP,0x1c
        mov ECX,dword ptr [ESP + 0x607c]
        inc ESI
        add ECX,0x48
        add EDI,0x48
        mov dword ptr [ESP + 0x607c],ECX
        cmp ESI,0x20
        jl LAB_004e9211
        xor ESI,ESI
        mov dword ptr [ESP + 0x6080],ESI
        mov dword ptr [ESP + 0x60b8],ESI
    LAB_004e9269:
        mov EAX,dword ptr [ESP + 0x60b8]
        mov EDX,EAX
        mov ESI,0x2
        sar EDX,0x1f
        idiv ESI
        xor ECX,ECX
        mov ESI,dword ptr [ESP + 0x6080]
        mov EDI,EDX
    LAB_004e9287:
        test EDI,EDI
        jz LAB_004e92b8
        mov dword ptr [ESP + 0x60bc],0x2
        mov EDX,ECX
        mov EAX,ECX
        sar EDX,0x1f
        idiv dword ptr [ESP + 0x60bc]
        test EDX,EDX
        jz LAB_004e92b8
        fld float ptr [ESP + ESI*0x1 + 0x4808]
        fchs
        fstp float ptr [ESP + ESI*0x1 + 0x4808]
    LAB_004e92b8:
        inc ECX
        add ESI,0x48
        cmp ECX,0x20
        jl LAB_004e9287
        mov EDX,dword ptr [ESP + 0x60b8]
        mov EAX,dword ptr [ESP + 0x6080]
        inc EDX
        add EAX,0x4
        mov dword ptr [ESP + 0x60b8],EDX
        mov dword ptr [ESP + 0x6080],EAX
        cmp EDX,0x12
        jl LAB_004e9269
        mov EDI,dword ptr [ESP + 0x6090]
        xor ESI,ESI
    LAB_004e92ef:
        mov ECX,ESI
        xor EAX,EAX
    LAB_004e92f3:
        add EAX,0x4
        fld float ptr [ESP + ECX*0x1 + 0x4808]
        add ECX,0x48
        fstp float ptr [ESP + EAX*0x1 + 0x5f3c]
        cmp EAX,0x80
        jnz LAB_004e92f3
        push EDI
        mov EAX,dword ptr [ESP + 0x60b8]
        push EAX
        lea EAX,[ESP + 0x5f48]
        push EAX
        mov EDX,dword ptr [EBP + 0x14]
        push EDX
        add ESI,0x4
        add EDI,0x40
        call sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_004e4070
        add ESP,0x10
        cmp ESI,0x48
        jnz LAB_004e92ef
        mov EDX,dword ptr [ESP + 0x6084]
        mov ECX,dword ptr [ESP + 0x6088]
        mov ESI,dword ptr [ESP + 0x608c]
        mov EDI,dword ptr [ESP + 0x6090]
        mov EAX,dword ptr [ESP + 0x60b4]
        add EDX,0xa0
        add ECX,0x900
        add ESI,0xa0
        add EDI,0x480
        inc EAX
        mov dword ptr [ESP + 0x6084],EDX
        mov dword ptr [ESP + 0x6088],ECX
        mov dword ptr [ESP + 0x608c],ESI
        mov dword ptr [ESP + 0x6090],EDI
        mov EDX,dword ptr [ESP + 0x6018]
        mov dword ptr [ESP + 0x60b4],EAX
        cmp EAX,EDX
        jl LAB_004e91a3
    LAB_004e93a4:
        xor ECX,ECX
        mov dword ptr [ESP + 0x6094],ECX
    LAB_004e93ad:
        mov EDI,dword ptr [ESP + 0x6094]
        xor ESI,ESI
    LAB_004e93b6:
        mov EAX,dword ptr [ESP + 0x6018]
        xor ECX,ECX
        test EAX,EAX
        jle LAB_004e93e6
        lea EAX,[ESI + EDI*0x1]
    LAB_004e93c6:
        add EBX,0x2
        mov DX,word ptr [ESP + EAX*0x1 + 0x2d08]
        inc ECX
        mov word ptr [EBX + -0x2],DX
        mov EDX,dword ptr [ESP + 0x6018]
        add EAX,0x480
        cmp ECX,EDX
        jl LAB_004e93c6
    LAB_004e93e6:
        add ESI,0x2
        cmp ESI,0x40
        jnz LAB_004e93b6
        mov ECX,dword ptr [ESP + 0x6094]
        add ECX,ESI
        mov dword ptr [ESP + 0x6094],ECX
        cmp ECX,0x480
        jnz LAB_004e93ad
        mov ESI,dword ptr [ESP + 0x6098]
        mov EDI,dword ptr [ESP + 0x609c]
        mov EAX,dword ptr [ESP + 0x605c]
        mov EDX,dword ptr [ESP + 0x6024]
        add ESI,0x48
        add EDI,0x48
        inc EAX
        mov dword ptr [ESP + 0x6098],ESI
        mov dword ptr [ESP + 0x609c],EDI
        mov dword ptr [ESP + 0x605c],EAX
        cmp EAX,EDX
        jge LAB_004e8a52
        jmp LAB_004e9019
    LAB_004e944b:
        lea EAX,[ESP + 0x5ff0]
        push EAX
        push ESI
        mov EAX,dword ptr [ESP + 0x6064]
        push EAX
        lea EAX,[ESP + 0x5c04]
        push EAX
        lea EAX,[ESP + 0x5a18]
        push EAX
        mov EDX,dword ptr [EBP + 0x14]
        push EDX
        call sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_004e5000
        jmp LAB_004e9098
    LAB_004e947a:
        cmp EDI,0x2
        jbe LAB_004e8c17
        cmp EDI,0x3
        jz LAB_004e8e37
        jmp LAB_004e8a52
}
}
