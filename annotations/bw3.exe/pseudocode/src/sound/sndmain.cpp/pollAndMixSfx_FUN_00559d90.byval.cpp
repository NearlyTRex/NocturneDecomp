// Name: sound_sndmain.cpp_pollAndMixSfx_FUN_00559d90
// Address: 00559d90
// Address Range: [[00559d90, 0055a0a2]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_00559d90(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_00559d90(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)
{
__asm {
        cmp dword ptr [g_SoundLockCount],0x0
        jle LAB_0055a04b
    LAB_00559da4:
        mov ESI,dword ptr [ESP + 0x78]
        test ESI,ESI
        jle LAB_00559dc9
        lea EDX,[ESI*0x4 + 0x0]
        xor EAX,EAX
    LAB_00559db5:
        cmp dword ptr [EAX + 0x2cf32cc],0x0
        jz LAB_0055a09b
        add EAX,0x4
        cmp EAX,EDX
        jl LAB_00559db5
    LAB_00559dc9:
        mov EAX,dword ptr [ESP + 0x74]
        cmp EAX,dword ptr [g_AudioBitsPerSample]
        jnz LAB_0055a09b
        mov EAX,dword ptr [ESP + 0x78]
        cmp EAX,dword ptr [g_AudioChannelCount]
        jnz LAB_0055a09b
        mov EAX,dword ptr [ESP + 0x7c]
        cmp EAX,dword ptr [g_AudioSampleRate]
        jnz LAB_0055a09b
        call sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_005526d0
        mov ECX,dword ptr [ESP + 0x78]
        xor EAX,EAX
        test ECX,ECX
        jle LAB_00559e20
        mov EDX,dword ptr [ESP + 0x70]
    LAB_00559e0c:
        inc EAX
        mov ESI,dword ptr [EDX]
        mov dword ptr [ESP + EAX*0x4 + 0x28],ESI
        mov ESI,dword ptr [ESP + 0x78]
        add EDX,0x4
        cmp EAX,ESI
        jl LAB_00559e0c
        mov EAX,EAX
    LAB_00559e20:
        mov EAX,dword ptr [ESP + 0x78]
        shl EAX,0x2
        mov dword ptr [ESP + 0x4c],EAX
        mov EAX,0x2ce721c
        add EAX,0x4700
        mov dword ptr [ESP + 0x54],EAX
        mov dword ptr [ESP + 0x50],EAX
    LAB_00559e3d:
        cmp dword ptr [ESP + 0x80],0x0
        jle LAB_0055a09b
        cmp dword ptr [g_MixBufferReadIndex],0x1
        jge LAB_00559fb3
        cmp dword ptr [g_SoundLockCount],0x0
        jle LAB_0055a073
    LAB_00559e65:
        cmp dword ptr [g_MixBufferReadIndex],0x0
        jle LAB_00559e91
        mov ESI,0x5d2aa0
        mov EDI,0x599
        push 0x5d2ab5
        mov dword ptr [g_CHAR_PTR_01d71de0],ESI
        mov dword ptr [g_INT_01d71de4],EDI
        call core_main_c_displayErrorAndQuit_FUN_004e4330
        add ESP,0x4
    LAB_00559e91:
        mov ESI,dword ptr [g_MixBufferSize]
        mov EBP,dword ptr [g_AudioChannelCount]
        xor EDI,EDI
        shl ESI,0x2
        test EBP,EBP
        jle LAB_00559f01
        xor EBX,EBX
    LAB_00559ea8:
        mov EAX,[g_NumMixBuffers]
        dec EAX
        imul EAX,ESI
        mov EDX,dword ptr [g_MixBufferSize]
        shl EDX,0x2
        push EAX
        mov EAX,dword ptr [EBX + 0x2cf32cc]
        add EDX,EAX
        push EDX
        push EAX
        call crt_string_c_memmove_FUN_005a54c0
        mov EAX,[g_NumMixBuffers]
        mov EDX,dword ptr [g_MixBufferSize]
        dec EAX
        imul EAX,EDX
        add ESP,0xc
        push ESI
        shl EAX,0x2
        mov EDX,dword ptr [EBX + 0x2cf32cc]
        push 0x0
        add EAX,EDX
        push EAX
        add EBX,0x4
        inc EDI
        call crt_memory_c_memset_FUN_005a28f0
        mov ECX,dword ptr [g_AudioChannelCount]
        add ESP,0xc
        cmp EDI,ECX
        jl LAB_00559ea8
    LAB_00559f01:
        mov EAX,[g_MixBufferSize]
        mov dword ptr [ESP + 0x20],EAX
        mov EAX,[g_AudioChannelCount]
        mov dword ptr [ESP + 0x24],EAX
        mov EAX,[g_AudioSampleRate]
        mov EBX,dword ptr [ESP + 0x24]
        mov dword ptr [ESP + 0x28],EAX
        test EBX,EBX
        jle LAB_00559f3a
        shl EBX,0x2
        xor EAX,EAX
    LAB_00559f29:
        add EAX,0x4
        mov EDX,dword ptr [EAX + 0x2cf32c8]
        mov dword ptr [ESP + EAX*0x1 + -0x4],EDX
        cmp EAX,EBX
        jl LAB_00559f29
    LAB_00559f3a:
        fild dword ptr [g_MixBufferSize]
        fild dword ptr [g_AudioSampleRate]
        fdivp
        mov EBX,0x2ce721c
        mov ESI,dword ptr [ESP + 0x50]
        fstp float ptr [ESP + 0x58]
    LAB_00559f55:
        push dword ptr [ESP + 0x58]
        push EBX
        call sound_sndmain_cpp_CSfxSlot_compute_FUN_00554430
        add EBX,0x11c
        add ESP,0x8
        cmp EBX,ESI
        jnz LAB_00559f55
        mov EBX,0x2ce721c
    LAB_00559f71:
        sub ESP,0x2c
        mov EDI,ESP
        mov ECX,0xb
        lea ESI,[ESP + 0x2c]
        push EBX
        rep movsd
        call sound_sndmain_cpp_CSfxSlot_mix_FUN_00554920
        add ESP,0x30
        add EBX,0x11c
        cmp EBX,dword ptr [ESP + 0x54]
        jnz LAB_00559f71
        mov EAX,[g_MixBufferSize]
        mov [g_MixBufferReadIndex],EAX
        mov EAX,[g_MixBufferCount]
        xor EBP,EBP
        inc EAX
        mov dword ptr [g_MixBufferWriteIndex],EBP
        mov [g_MixBufferCount],EAX
    LAB_00559fb3:
        mov EDX,dword ptr [ESP + 0x80]
        mov ESI,dword ptr [g_MixBufferReadIndex]
        cmp ESI,EDX
        jle LAB_00559fc6
        mov ESI,EDX
    LAB_00559fc6:
        cmp dword ptr [ESP + 0x78],0x0
        jle LAB_0055a01a
        mov EDI,dword ptr [ESP + 0x84]
        mov EBP,dword ptr [ESP + 0x4c]
        xor EBX,EBX
        imul EDI,ESI
    LAB_00559fdd:
        mov EAX,dword ptr [ESP + 0x84]
        push EAX
        mov EDX,dword ptr [ESP + 0x78]
        push ESI
        mov ECX,dword ptr [ESP + EBX*0x1 + 0x34]
        mov EAX,[g_MixBufferWriteIndex]
        push EDX
        shl EAX,0x2
        mov EDX,dword ptr [EBX + 0x2cf32cc]
        push ECX
        add EAX,EDX
        push EAX
        call sound_sndmain_cpp_convertMixBufToOutput_FUN_00552d90
        add ESP,0x14
        mov EAX,dword ptr [ESP + EBX*0x1 + 0x2c]
        add EBX,0x4
        add EAX,EDI
        mov dword ptr [ESP + EBX*0x1 + 0x28],EAX
        cmp EBX,EBP
        jl LAB_00559fdd
    LAB_0055a01a:
        mov EBX,dword ptr [ESP + 0x80]
        mov EDI,dword ptr [g_MixBufferReadIndex]
        mov EBP,dword ptr [g_MixBufferWriteIndex]
        sub EDI,ESI
        add EBP,ESI
        sub EBX,ESI
        mov dword ptr [g_MixBufferReadIndex],EDI
        mov dword ptr [g_MixBufferWriteIndex],EBP
        mov dword ptr [ESP + 0x80],EBX
        jmp LAB_00559e3d
    LAB_0055a04b:
        mov ECX,0x5d3ea6
        mov EBX,0x19ad
        push 0x5d3ebb
        mov dword ptr [g_CHAR_PTR_01d71de0],ECX
        mov dword ptr [g_INT_01d71de4],EBX
        call core_main_c_displayErrorAndQuit_FUN_004e4330
        add ESP,0x4
        jmp LAB_00559da4
    LAB_0055a073:
        mov EDX,0x5d2a6b
        mov ECX,0x595
        push 0x5d2a80
        mov dword ptr [g_CHAR_PTR_01d71de0],EDX
        mov dword ptr [g_INT_01d71de4],ECX
        call core_main_c_displayErrorAndQuit_FUN_004e4330
        add ESP,0x4
        jmp LAB_00559e65
    LAB_0055a09b:
}
}
