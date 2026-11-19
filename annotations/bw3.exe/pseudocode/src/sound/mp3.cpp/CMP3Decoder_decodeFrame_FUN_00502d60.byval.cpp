// Name: sound_mp3.cpp_CMP3Decoder_decodeFrame_FUN_00502d60
// Address: 00502d60
// Address Range: [[00502d60, 005039a4]]
// Convention: __cdecl
// Signature: int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00502d60(CMP3Decoder *this_ptr,short *pcm_output)

#include "nocturne.h"

int __cdecl sound_mp3_cpp_CMP3Decoder_decodeFrame_FUN_00502d60(CMP3Decoder *this_ptr,short *pcm_output)
{
__asm {
        and ESP,0xfffffff8
        mov EBX,dword ptr [EBP + 0x18]
        lea EAX,[ESP + 0x5fc0]
        mov ECX,0xffffffff
        mov ESI,dword ptr [EBP + 0x14]
        xor EDX,EDX
        mov dword ptr [ESP + 0x5ff0],EAX
        add ESI,0x5320
        mov dword ptr [ESP + 0x5ffc],ECX
        mov dword ptr [ESP + 0x5ff8],EDX
        mov EAX,dword ptr [ESI + 0x1c]
        mov dword ptr [ESP + 0x601c],EDX
        test EAX,EAX
        jz LAB_00502db7
        xor ESI,ESI
        mov EAX,ESI
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_00502db7:
        push 0xc
        push 0xfff
        push ESI
        call sound_mp3_cpp_CFileBitStream_syncToPattern_FUN_004fd780
        add ESP,0xc
        test EAX,EAX
        jnz LAB_00503921
        xor ESI,ESI
        mov EAX,ESI
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_00502dda:
        lea EAX,[ESP + 0x5ff0]
        push EAX
        lea EAX,[ESP + 0x5e44]
        push EAX
        mov EBX,0x20
        mov EDI,0x180
        push ESI
        mov dword ptr [ESP + 0x10],EBX
        mov dword ptr [ESP + 0xc],EDI
        call sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_004fde40
        add ESP,0xc
        lea EAX,[ESP + 0x5ff0]
        push EAX
        lea EAX,[ESP + 0x540c]
        push EAX
        lea EAX,[ESP + 0x5e48]
        push EAX
        push ESI
        call sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_004fdef0
        add ESP,0x10
        xor EAX,EAX
        mov dword ptr [ESP + 0x6088],EAX
        mov dword ptr [ESP + 0x6024],ESI
    LAB_00502e36:
        lea EAX,[ESP + 0x5ff0]
        push EAX
        lea EAX,[ESP + 0x5e44]
        push EAX
        lea EAX,[ESP + 0x5110]
        push EAX
        mov EBX,dword ptr [ESP + 0x6030]
        push EBX
        call sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_004fe1f0
        add ESP,0x10
        lea EAX,[ESP + 0x5ff0]
        push EAX
        lea EAX,[ESP + 0x5e44]
        push EAX
        lea EAX,[ESP + 0x5710]
        push EAX
        lea EAX,[ESP + 0x5114]
        push EAX
        xor ESI,ESI
        call sound_mp3_cpp_requantizeSamples_FUN_004fe850
        add ESP,0x10
        lea EAX,[ESP + 0x5708]
        mov EDI,dword ptr [ESP + 0x6000]
        mov dword ptr [ESP + 0x6028],EAX
        lea EAX,[ESP + 0x5408]
        mov dword ptr [ESP + 0x6050],ESI
        mov dword ptr [ESP + 0x602c],EAX
        xor EAX,EAX
    LAB_00502eb4:
        mov ECX,EAX
        test EDI,EDI
        jle LAB_00502f00
        mov EBX,dword ptr [ESP + 0x6050]
        mov EDX,dword ptr [ESP + 0x602c]
        mov ESI,dword ptr [ESP + 0x6028]
        add EBX,EDX
        mov EDX,dword ptr [ESP + 0x6050]
        add EDX,ESI
    LAB_00502eda:
        fld float ptr [EDX]
        mov ESI,dword ptr [EBX]
        fld ST(0)
        fmul double ptr [g_MpegScalefactorTable + ESI*0x8]
        add EBX,0x180
        add EDX,0x180
        inc ECX
        fstp ST(1)
        fstp float ptr [EDX + 0xfffffe80]
        cmp ECX,EDI
        jl LAB_00502eda
    LAB_00502f00:
        mov EDX,dword ptr [ESP + 0x6050]
        add EDX,0x4
        mov dword ptr [ESP + 0x6050],EDX
        cmp EDX,0x80
        jnz LAB_00502eb4
        mov ESI,dword ptr [ESP + 0x6018]
        xor EBX,EBX
        test ESI,ESI
        jle LAB_00502f5b
        lea EDI,[ESP + 0x2408]
        lea ESI,[ESP + 0x5708]
    LAB_00502f34:
        push EDI
        push EBX
        push ESI
        mov EAX,dword ptr [EBP + 0x14]
        push EAX
        add EDI,0x480
        call sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_004feb90
        add ESP,0x10
        inc EBX
        mov EDX,dword ptr [ESP + 0x6018]
        add ESI,0x180
        cmp EBX,EDX
        jl LAB_00502f34
    LAB_00502f5b:
        mov ECX,dword ptr [ESP + 0x6088]
        inc ECX
        mov dword ptr [ESP + 0x6088],ECX
        cmp ECX,0xc
        jl LAB_00502e36
    LAB_00502f73:
        cmp dword ptr [ESP + 0x5fcc],0x0
        jle LAB_00503090
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
        mov EDX,dword ptr [ESP + 0x5fd0]
        fild dword ptr [g_MpegBitrateTable + ECX + EAX*0x4]
        mov EAX,dword ptr [ESP + 0x5fc0]
        shl EDX,0x3
        shl EAX,0x5
        xor ECX,ECX
        add EAX,EDX
        mov EDX,dword ptr [ESP]
        mov dword ptr [ESP + 0x6010],ECX
        mov dword ptr [ESP + 0x600c],EDX
        fild qword ptr [ESP + 0x600c]
        fdiv double ptr [g_MpegSampleRateTable + EAX]
        fmulp
        mov EAX,dword ptr [ESP + 0x4]
        mov dword ptr [ESP + 0x6010],ECX
        mov dword ptr [ESP + 0x600c],EAX
        fild qword ptr [ESP + 0x600c]
        fdivp
        mov ESI,dword ptr [ESP + 0x5fd4]
        call crt_math_c_round_FUN_005a3120
        fistp dword ptr [ESP + 0x6048]
        test ESI,ESI
        jz LAB_0050302e
        inc dword ptr [ESP + 0x6048]
    LAB_0050302e:
        mov EAX,dword ptr [ESP + 0x6048]
        imul EAX,dword ptr [ESP + 0x4]
        mov ESI,dword ptr [EBP + 0x14]
        mov ECX,dword ptr [ESP + 0x608c]
        mov dword ptr [ESP + 0x6048],EAX
        mov EAX,dword ptr [ESI + 0x532c]
        sub EAX,ECX
        mov EBX,dword ptr [ESP + 0x6048]
        add EAX,0xc
        sub EBX,EAX
        mov dword ptr [ESP + 0x6048],EBX
        add ESI,0x5320
        mov EDI,dword ptr [ESP + 0x6048]
        xor EBX,EBX
        test EDI,EDI
        jle LAB_00503090
    LAB_00503079:
        push ESI
        call sound_mp3_cpp_CFileBitStream_readBit_FUN_004fd4f0
        add ESP,0x4
        inc EBX
        cmp EBX,dword ptr [ESP + 0x6048]
        jl LAB_00503079
        lea EAX,[EAX]
    LAB_00503090:
        mov EDX,dword ptr [ESP + 0x6020]
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
    LAB_005030ac:
        mov dword ptr [ESP],0x480
        lea EAX,[ESP + 0x5ff0]
        push EAX
        lea EAX,[ESP + 0x5e44]
        push EAX
        mov EDI,0x8
        push ESI
        mov dword ptr [ESP + 0x10],EDI
        call sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_004fdd10
        add ESP,0xc
        lea EAX,[ESP + 0x5ff0]
        push EAX
        lea EAX,[ESP + 0x540c]
        push EAX
        lea EAX,[ESP + 0x5e48]
        push EAX
        lea EAX,[ESP + 0x5d4c]
        push EAX
        push ESI
        call sound_mp3_cpp_CFileBitStream_readScaleFactorsSCFSI_FUN_004fdf80
        add ESP,0x14
        xor EDX,EDX
        mov dword ptr [ESP + 0x6014],EDX
        mov dword ptr [ESP + 0x6030],ESI
    LAB_0050310e:
        lea EAX,[ESP + 0x5ff0]
        push EAX
        lea EAX,[ESP + 0x5e44]
        push EAX
        lea EAX,[ESP + 0x5110]
        push EAX
        mov EDI,dword ptr [ESP + 0x603c]
        push EDI
        call sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004fe2f0
        add ESP,0x10
        lea EAX,[ESP + 0x5ff0]
        push EAX
        lea EAX,[ESP + 0x570c]
        push EAX
        lea EAX,[ESP + 0x5e48]
        push EAX
        lea EAX,[ESP + 0x5114]
        push EAX
        call sound_mp3_cpp_requantizeLayer3SamplesSimple_FUN_004fe580
        add ESP,0x10
        mov EAX,dword ptr [ESP + 0x6014]
        sar EAX,0x2
        push EAX
        lea EAX,[ESP + 0x5ff4]
        push EAX
        lea EAX,[ESP + 0x5410]
        push EAX
        lea EAX,[ESP + 0x5714]
        push EAX
        call sound_mp3_cpp_applyScalefactorsToSubbands_FUN_004fe990
        add ESP,0x10
        test EBX,EBX
        jnz LAB_005031aa
    LAB_0050318d:
        mov EDI,dword ptr [ESP + 0x6014]
        inc EDI
        mov dword ptr [ESP + 0x6014],EDI
        cmp EDI,0xc
        jl LAB_0050310e
        jmp LAB_00502f73
    LAB_005031aa:
        xor EAX,EAX
        mov dword ptr [ESP + 0x6080],EAX
        mov dword ptr [ESP + 0x607c],EAX
    LAB_005031ba:
        mov ECX,dword ptr [ESP + 0x6018]
        xor ESI,ESI
        test ECX,ECX
        jle LAB_0050322a
        mov EDX,dword ptr [ESP + 0x607c]
        lea EAX,[ESP + 0x5708]
        add EAX,EDX
        mov EDI,dword ptr [ESP + 0x6080]
        mov dword ptr [ESP + 0x609c],EAX
        lea EAX,[ESP + 0x2408]
        add EDI,EAX
    LAB_005031ee:
        push EDI
        push ESI
        mov EAX,dword ptr [ESP + 0x60a4]
        push EAX
        mov EDX,dword ptr [EBP + 0x14]
        push EDX
        call sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_004feb90
        add ESP,0x10
        add EDI,0x480
        mov ECX,dword ptr [ESP + 0x609c]
        inc ESI
        add ECX,0x180
        mov EAX,dword ptr [ESP + 0x6018]
        mov dword ptr [ESP + 0x609c],ECX
        cmp ESI,EAX
        jl LAB_005031ee
    LAB_0050322a:
        mov ECX,dword ptr [ESP + 0x6080]
        mov EDX,dword ptr [ESP + 0x607c]
        add ECX,0x40
        add EDX,0x80
        mov dword ptr [ESP + 0x6080],ECX
        mov dword ptr [ESP + 0x607c],EDX
        cmp ECX,0xc0
        jnz LAB_005031ba
        xor EDI,EDI
        mov dword ptr [ESP + 0x6084],EDI
        mov dword ptr [ESP + 0x6014],EDI
    LAB_0050326b:
        mov EAX,dword ptr [ESP + 0x6084]
        xor EDI,EDI
    LAB_00503274:
        mov ESI,dword ptr [ESP + 0x6018]
        xor ECX,ECX
        test ESI,ESI
        jle LAB_005032a5
        lea ESI,[EDI + EAX*0x1]
    LAB_00503284:
        add EBX,0x2
        mov DX,word ptr [ESP + ESI*0x1 + 0x2408]
        inc ECX
        mov word ptr [EBX + -0x2],DX
        mov EDX,dword ptr [ESP + 0x6018]
        add ESI,0x480
        cmp ECX,EDX
        jl LAB_00503284
    LAB_005032a5:
        add EDI,0x2
        cmp EDI,0x40
        jnz LAB_00503274
        mov ECX,dword ptr [ESP + 0x6084]
        add ECX,EDI
        mov dword ptr [ESP + 0x6084],ECX
        cmp ECX,0xc0
        jz LAB_0050318d
        jmp LAB_0050326b
    LAB_005032cb:
        mov EAX,dword ptr [ESP + 0x5ff0]
        mov ESI,0x8
        mov EDI,dword ptr [EAX]
        mov dword ptr [ESP + 0x4],ESI
        test EDI,EDI
        jz LAB_0050343a
        mov dword ptr [ESP],0x480
    LAB_005032ec:
        lea EAX,[ESP + 0x5ff0]
        push EAX
        lea EAX,[ESP + 0x5bfc]
        push EAX
        mov EAX,dword ptr [EBP + 0x14]
        add EAX,0x5320
        push EAX
        mov ESI,dword ptr [EBP + 0x14]
        push ESI
        mov dword ptr [ESP + 0x604c],EAX
        call sound_mp3_cpp_CMP3Decoder_readLayer3SideInfo_FUN_004fee40
        add ESP,0x10
        mov ECX,0x7
        sub ESP,0x1c
        lea ESI,[ESP + 0x600c]
        mov EDI,ESP
        rep movsd
        call sound_mp3_cpp_calculateMainDataSize_FUN_00502190
        add ESP,0x1c
        mov ESI,EAX
        test EAX,EAX
        jle LAB_00503360
        mov EDI,dword ptr [ESP + 0x603c]
    LAB_00503340:
        push 0x8
        push 0x8
        push EDI
        call sound_mp3_cpp_CFileBitStream_readBits_FUN_004fd5e0
        add ESP,0x8
        push EAX
        mov EDX,dword ptr [EBP + 0x14]
        push EDX
        dec ESI
        call sound_mp3_cpp_CMP3Decoder_putByte_FUN_004fd900
        add ESP,0xc
        test ESI,ESI
        jg LAB_00503340
        nop
    LAB_00503360:
        mov ECX,dword ptr [EBP + 0x14]
        push ECX
        call sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004fd800
        add ESP,0x4
        mov EDI,dword ptr [EBP + 0x14]
        push EDI
        mov ESI,EAX
        call sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004fd800
        add ESP,0x4
        xor EDX,EDX
        mov ECX,dword ptr [ESP + 0x4]
        div ECX
        shr ESI,0x3
        test EDX,EDX
        jz LAB_00503398
        mov EAX,ECX
        sub EAX,EDX
        push EAX
        push EDI
        inc ESI
        call sound_mp3_cpp_CMP3Decoder_readBits_FUN_004fd810
        add ESP,0x8
    LAB_00503398:
        mov EAX,dword ptr [EBP + 0x14]
        mov EAX,dword ptr [EAX + 0x534c]
        mov EDX,dword ptr [ESP + 0x5bf8]
        sub EAX,ESI
        sub EAX,EDX
        mov dword ptr [ESP + 0x6038],EAX
        cmp ESI,0x1000
        jle LAB_005033de
        mov ECX,dword ptr [EBP + 0x14]
        mov ESI,dword ptr [ECX + 0x534c]
        push 0x1000
        sub ESI,0x1000
        push ECX
        mov dword ptr [ECX + 0x534c],ESI
        call sound_mp3_cpp_CMP3Decoder_rewindBytes_FUN_004fd9c0
        add ESP,0x8
    LAB_005033de:
        mov ECX,0x7
        sub ESP,0x1c
        lea ESI,[ESP + 0x600c]
        mov EDI,ESP
        rep movsd
        call sound_mp3_cpp_calculateMainDataSize_FUN_00502190
        add ESP,0x1c
        mov EDX,dword ptr [EBP + 0x14]
        mov EDI,dword ptr [EDX + 0x534c]
        add EDI,EAX
        mov EAX,dword ptr [ESP + 0x6038]
        mov dword ptr [EDX + 0x534c],EDI
        test EAX,EAX
        jl LAB_00503446
    LAB_00503415:
        mov ESI,dword ptr [ESP + 0x6038]
        test ESI,ESI
        jle LAB_00503474
        push 0x8
        mov EDX,dword ptr [EBP + 0x14]
        push EDX
        call sound_mp3_cpp_CMP3Decoder_readBits_FUN_004fd810
        add ESP,0x8
        lea ECX,[ESI + -0x1]
        mov dword ptr [ESP + 0x6038],ECX
        jmp LAB_00503415
    LAB_0050343a:
        mov dword ptr [ESP],0x240
        jmp LAB_005032ec
    LAB_00503446:
        mov EAX,dword ptr [ESP + 0x601c]
        dec EAX
        push EAX
        mov EDX,0x5ca3a7
        mov ECX,0x1029
        push 0x5ca3b8
        mov dword ptr [g_CHAR_PTR_01d71de0],EDX
        mov dword ptr [g_INT_01d71de4],ECX
        call core_main_c_displayErrorAndQuit_FUN_004e4330
        add ESP,0x8
        jmp LAB_00503415
    LAB_00503474:
        test EBX,EBX
        jz LAB_00502f73
        xor EDI,EDI
        mov EAX,dword ptr [ESP + 0x6020]
        mov dword ptr [ESP + 0x6034],EDI
        test EAX,EAX
        jle LAB_00502f73
        lea EAX,[ESP + 0x5c10]
        mov dword ptr [ESP + 0x6078],EDI
        mov dword ptr [ESP + 0x6074],EAX
    LAB_005034a9:
        mov EDI,dword ptr [ESP + 0x6018]
        xor ESI,ESI
        test EDI,EDI
        jle LAB_005035b1
        lea EAX,[ESP + 0x8]
        mov EDI,dword ptr [ESP + 0x6078]
        mov dword ptr [ESP + 0x6054],EAX
        add EDI,0x10
        lea EAX,[ESP + 0x5c00]
        add EDI,EAX
    LAB_005034d8:
        mov EDX,dword ptr [EBP + 0x14]
        push EDX
        call sound_mp3_cpp_CMP3Decoder_getTotalBitsRead_FUN_004fd800
        add ESP,0x4
        mov dword ptr [ESP + 0x6040],EAX
        mov EAX,dword ptr [ESP + 0x5ff0]
        cmp dword ptr [EAX],0x0
        jz LAB_005038f2
        lea EAX,[ESP + 0x5ff0]
        push EAX
        push ESI
        mov ECX,dword ptr [ESP + 0x603c]
        push ECX
        lea EAX,[ESP + 0x5c04]
        push EAX
        lea EAX,[ESP + 0x5a18]
        push EAX
        mov EAX,dword ptr [EBP + 0x14]
        push EAX
        call sound_mp3_cpp_CMP3Decoder_readLayer3Scalefactors_FUN_004ff3c0
    LAB_00503525:
        add ESP,0x18
        lea EAX,[ESP + 0x5ff0]
        push EAX
        mov EAX,dword ptr [ESP + 0x6044]
        push EAX
        mov EDX,dword ptr [ESP + 0x603c]
        push EDX
        push ESI
        lea EAX,[ESP + 0x5c08]
        push EAX
        lea EAX,[ESP + 0x481c]
        push EAX
        mov ECX,dword ptr [EBP + 0x14]
        push ECX
        call sound_mp3_cpp_CMP3Decoder_huffmanDecodeLayer3Samples_FUN_004ffd20
        add ESP,0x1c
        lea EAX,[ESP + 0x5ff0]
        push EAX
        push ESI
        push EDI
        lea EAX,[ESP + 0x5a14]
        push EAX
        mov EAX,dword ptr [ESP + 0x6064]
        push EAX
        lea EAX,[ESP + 0x481c]
        push EAX
        call sound_mp3_cpp_requantizeLayer3Samples_FUN_005003f0
        add ESP,0x18
        inc ESI
        mov EDX,dword ptr [ESP + 0x6054]
        add EDI,0xa0
        add EDX,0x900
        mov ECX,dword ptr [ESP + 0x6018]
        mov dword ptr [ESP + 0x6054],EDX
        cmp ESI,ECX
        jl LAB_005034d8
    LAB_005035b1:
        lea EAX,[ESP + 0x5ff0]
        push EAX
        mov ESI,dword ptr [ESP + 0x6078]
        push ESI
        lea EAX,[ESP + 0x5a10]
        push EAX
        lea EAX,[ESP + 0x1214]
        push EAX
        lea EAX,[ESP + 0x18]
        push EAX
        call sound_mp3_cpp_mpegLayer3StereoProcess_FUN_00500c80
        add ESP,0x14
        xor EDI,EDI
        mov EAX,dword ptr [ESP + 0x6018]
        mov dword ptr [ESP + 0x6090],EDI
        test EAX,EAX
        jle LAB_0050384a
        mov EDX,dword ptr [ESP + 0x6078]
        lea EAX,[ESP + 0x5c00]
        add EDX,0x10
        add EAX,EDX
        lea EDX,[ESP + 0x1208]
        mov dword ptr [ESP + 0x6064],EAX
        mov dword ptr [ESP + 0x606c],EAX
        lea EAX,[ESP + 0x2408]
        mov dword ptr [ESP + 0x6068],EDX
        mov dword ptr [ESP + 0x6070],EAX
    LAB_00503633:
        lea EAX,[ESP + 0x5ff0]
        push EAX
        mov ESI,dword ptr [ESP + 0x6070]
        push ESI
        lea EAX,[ESP + 0x2d10]
        push EAX
        mov EDI,dword ptr [ESP + 0x6074]
        push EDI
        call sound_mp3_cpp_reorderShortBlockSamples_FUN_005008a0
        add ESP,0x10
        lea EAX,[ESP + 0x5ff0]
        push EAX
        push ESI
        lea EAX,[ESP + 0x3610]
        push EAX
        lea EAX,[ESP + 0x2d14]
        push EAX
        call sound_mp3_cpp_antiAliasingButterfly_FUN_005019f0
        add ESP,0x10
        mov EAX,dword ptr [ESP + 0x6064]
        lea EDI,[ESP + 0x3608]
        mov dword ptr [ESP + 0x6044],EAX
        lea EAX,[ESP + 0x3f08]
        xor ESI,ESI
        mov dword ptr [ESP + 0x6058],EAX
    LAB_005036a1:
        lea EDX,[ESP + 0x5ff0]
        push EDX
        mov EDX,dword ptr [ESP + 0x6048]
        push EDX
        mov ECX,dword ptr [ESP + 0x6098]
        push ECX
        push ESI
        mov EAX,dword ptr [ESP + 0x6068]
        push EAX
        push EDI
        mov EDX,dword ptr [EBP + 0x14]
        push EDX
        call sound_mp3_cpp_CMP3Decoder_synthesisPoly_FUN_005020e0
        add ESP,0x1c
        mov ECX,dword ptr [ESP + 0x6058]
        inc ESI
        add ECX,0x48
        add EDI,0x48
        mov dword ptr [ESP + 0x6058],ECX
        cmp ESI,0x20
        jl LAB_005036a1
        xor ESI,ESI
        mov dword ptr [ESP + 0x605c],ESI
        mov dword ptr [ESP + 0x6094],ESI
    LAB_005036f9:
        mov EAX,dword ptr [ESP + 0x6094]
        mov EDX,EAX
        mov ESI,0x2
        sar EDX,0x1f
        idiv ESI
        xor ECX,ECX
        mov ESI,dword ptr [ESP + 0x605c]
        mov EDI,EDX
    LAB_00503717:
        test EDI,EDI
        jz LAB_00503748
        mov dword ptr [ESP + 0x604c],0x2
        mov EDX,ECX
        mov EAX,ECX
        sar EDX,0x1f
        idiv dword ptr [ESP + 0x604c]
        test EDX,EDX
        jz LAB_00503748
        fld float ptr [ESP + ESI*0x1 + 0x3f08]
        fchs
        fstp float ptr [ESP + ESI*0x1 + 0x3f08]
    LAB_00503748:
        inc ECX
        add ESI,0x48
        cmp ECX,0x20
        jl LAB_00503717
        mov EDX,dword ptr [ESP + 0x6094]
        mov EAX,dword ptr [ESP + 0x605c]
        inc EDX
        add EAX,0x4
        mov dword ptr [ESP + 0x6094],EDX
        mov dword ptr [ESP + 0x605c],EAX
        cmp EDX,0x12
        jl LAB_005036f9
        mov EAX,dword ptr [ESP + 0x6070]
        xor EDI,EDI
        mov dword ptr [ESP + 0x6060],EAX
    LAB_00503786:
        mov ESI,EDI
        xor ECX,ECX
    LAB_0050378a:
        add ECX,0x4
        fld float ptr [ESP + ESI*0x1 + 0x3f08]
        add ESI,0x48
        fstp float ptr [ESP + ECX*0x1 + 0x5f3c]
        cmp ECX,0x80
        jnz LAB_0050378a
        mov ESI,dword ptr [ESP + 0x6060]
        push ESI
        mov EAX,dword ptr [ESP + 0x6094]
        push EAX
        lea EDX,[ESP + 0x5f48]
        push EDX
        mov EDX,dword ptr [EBP + 0x14]
        push EDX
        call sound_mp3_cpp_CMP3Decoder_synthesisFilterbank_FUN_004feb90
        add ESP,0x10
        lea ECX,[ESI + 0x40]
        add EDI,0x4
        mov dword ptr [ESP + 0x6060],ECX
        cmp EDI,0x48
        jnz LAB_00503786
        mov EDX,dword ptr [ESP + 0x6064]
        mov ECX,dword ptr [ESP + 0x6068]
        mov ESI,dword ptr [ESP + 0x606c]
        mov EDI,dword ptr [ESP + 0x6070]
        mov EAX,dword ptr [ESP + 0x6090]
        add EDX,0xa0
        add ECX,0x900
        add ESI,0xa0
        add EDI,0x480
        inc EAX
        mov dword ptr [ESP + 0x6064],EDX
        mov dword ptr [ESP + 0x6068],ECX
        mov dword ptr [ESP + 0x606c],ESI
        mov dword ptr [ESP + 0x6070],EDI
        mov EDX,dword ptr [ESP + 0x6018]
        mov dword ptr [ESP + 0x6090],EAX
        cmp EAX,EDX
        jl LAB_00503633
    LAB_0050384a:
        xor ECX,ECX
        mov dword ptr [ESP + 0x6098],ECX
    LAB_00503853:
        mov EAX,dword ptr [ESP + 0x6098]
        xor EDI,EDI
    LAB_0050385c:
        mov EDX,dword ptr [ESP + 0x6018]
        xor ESI,ESI
        test EDX,EDX
        jle LAB_0050388d
        lea ECX,[EDI + EAX*0x1]
    LAB_0050386c:
        add EBX,0x2
        mov DX,word ptr [ESP + ECX*0x1 + 0x2408]
        inc ESI
        mov word ptr [EBX + -0x2],DX
        mov EDX,dword ptr [ESP + 0x6018]
        add ECX,0x480
        cmp ESI,EDX
        jl LAB_0050386c
    LAB_0050388d:
        add EDI,0x2
        cmp EDI,0x40
        jnz LAB_0050385c
        mov ECX,dword ptr [ESP + 0x6098]
        add ECX,EDI
        mov dword ptr [ESP + 0x6098],ECX
        cmp ECX,0x480
        jnz LAB_00503853
        mov ESI,dword ptr [ESP + 0x6074]
        mov EDI,dword ptr [ESP + 0x6078]
        mov EAX,dword ptr [ESP + 0x6034]
        mov EDX,dword ptr [ESP + 0x6020]
        add ESI,0x48
        add EDI,0x48
        inc EAX
        mov dword ptr [ESP + 0x6074],ESI
        mov dword ptr [ESP + 0x6078],EDI
        mov dword ptr [ESP + 0x6034],EAX
        cmp EAX,EDX
        jge LAB_00502f73
        jmp LAB_005034a9
    LAB_005038f2:
        lea EAX,[ESP + 0x5ff0]
        push EAX
        push ESI
        mov EAX,dword ptr [ESP + 0x603c]
        push EAX
        lea EAX,[ESP + 0x5c04]
        push EAX
        lea EAX,[ESP + 0x5a18]
        push EAX
        mov EDX,dword ptr [EBP + 0x14]
        push EDX
        call sound_mp3_cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_004ffb20
        jmp LAB_00503525
    LAB_00503921:
        mov EAX,dword ptr [ESI + 0xc]
        mov dword ptr [ESP + 0x608c],EAX
        lea EAX,[ESP + 0x5ff0]
        push EAX
        push ESI
        call sound_mp3_cpp_CFileBitStream_readFrameHeader_FUN_004fdc50
        add ESP,0x8
        lea EAX,[ESP + 0x5ff0]
        push EAX
        call sound_mp3_cpp_calculateMpegFrame_FUN_004fd150
        add ESP,0x4
        mov EAX,dword ptr [ESP + 0x6000]
        mov dword ptr [ESP + 0x6018],EAX
        mov EAX,dword ptr [ESP + 0x5ff0]
        cmp dword ptr [EAX],0x0
        setnz AL
        and EAX,0xff
        inc EAX
        mov dword ptr [ESP + 0x6020],EAX
        mov EAX,dword ptr [ESP + 0x5fc4]
        cmp EAX,0x2
        jnc LAB_0050398e
        cmp EAX,0x1
        jz LAB_00502dda
        jmp LAB_00502f73
    LAB_0050398e:
        cmp EAX,0x2
        jbe LAB_005030ac
        cmp EAX,0x3
        jz LAB_005032cb
        jmp LAB_00502f73
}
}
