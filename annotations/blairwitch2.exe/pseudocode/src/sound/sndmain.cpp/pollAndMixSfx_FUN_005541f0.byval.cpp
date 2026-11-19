// Name: sound_sndmain.cpp_pollAndMixSfx_FUN_005541f0
// Address: 005541f0
// Address Range: [[005541f0, 00554502]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_005541f0(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_005541f0(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)
{
__asm {
        cmp dword ptr [g_SoundLockCount],0x0
        jle LAB_005544ab
    LAB_00554204:
        mov ESI,dword ptr [ESP + 0x78]
        test ESI,ESI
        jle LAB_00554229
        lea EDX,[ESI*0x4 + 0x0]
        xor EAX,EAX
    LAB_00554215:
        cmp dword ptr [EAX + 0x2648ec8],0x0
        jz LAB_005544fb
        add EAX,0x4
        cmp EAX,EDX
        jl LAB_00554215
    LAB_00554229:
        mov EAX,dword ptr [ESP + 0x74]
        cmp EAX,dword ptr [g_AudioBitsPerSample]
        jnz LAB_005544fb
        mov EAX,dword ptr [ESP + 0x78]
        cmp EAX,dword ptr [g_AudioChannelCount]
        jnz LAB_005544fb
        mov EAX,dword ptr [ESP + 0x7c]
        cmp EAX,dword ptr [g_AudioSampleRate]
        jnz LAB_005544fb
        call sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_0054cb70
        mov ECX,dword ptr [ESP + 0x78]
        xor EAX,EAX
        test ECX,ECX
        jle LAB_00554280
        mov EDX,dword ptr [ESP + 0x70]
    LAB_0055426c:
        inc EAX
        mov ESI,dword ptr [EDX]
        mov dword ptr [ESP + EAX*0x4 + 0x28],ESI
        mov ESI,dword ptr [ESP + 0x78]
        add EDX,0x4
        cmp EAX,ESI
        jl LAB_0055426c
        mov EAX,EAX
    LAB_00554280:
        mov EAX,dword ptr [ESP + 0x78]
        shl EAX,0x2
        mov dword ptr [ESP + 0x4c],EAX
        mov EAX,0x263cf1c
        add EAX,0x4700
        mov dword ptr [ESP + 0x54],EAX
        mov dword ptr [ESP + 0x50],EAX
    LAB_0055429d:
        cmp dword ptr [ESP + 0x80],0x0
        jle LAB_005544fb
        cmp dword ptr [g_MixBufferReadIndex],0x1
        jge LAB_00554413
        cmp dword ptr [g_SoundLockCount],0x0
        jle LAB_005544d3
    LAB_005542c5:
        cmp dword ptr [g_MixBufferReadIndex],0x0
        jle LAB_005542f1
        mov ESI,0x5e7fbc
        mov EDI,0x597
        push 0x5e7fd1
        mov dword ptr [g_CHAR_PTR_01d046a0],ESI
        mov dword ptr [g_INT_01d046a4],EDI
        call core_main_c_displayErrorAndQuit_FUN_004e4500
        add ESP,0x4
    LAB_005542f1:
        mov ESI,dword ptr [g_MixBufferSize]
        mov EBP,dword ptr [g_AudioChannelCount]
        xor EDI,EDI
        shl ESI,0x2
        test EBP,EBP
        jle LAB_00554361
        xor EBX,EBX
    LAB_00554308:
        mov EAX,[g_NumMixBuffers]
        dec EAX
        imul EAX,ESI
        mov EDX,dword ptr [g_MixBufferSize]
        shl EDX,0x2
        push EAX
        mov EAX,dword ptr [EBX + 0x2648ec8]
        add EDX,EAX
        push EDX
        push EAX
        call crt_string_c_memmove_FUN_005ba1f0
        mov EAX,[g_NumMixBuffers]
        mov EDX,dword ptr [g_MixBufferSize]
        dec EAX
        imul EAX,EDX
        add ESP,0xc
        push ESI
        shl EAX,0x2
        mov EDX,dword ptr [EBX + 0x2648ec8]
        push 0x0
        add EAX,EDX
        push EAX
        add EBX,0x4
        inc EDI
        call crt_memory_c_memset_FUN_005b77c0
        mov ECX,dword ptr [g_AudioChannelCount]
        add ESP,0xc
        cmp EDI,ECX
        jl LAB_00554308
    LAB_00554361:
        mov EAX,[g_MixBufferSize]
        mov dword ptr [ESP + 0x20],EAX
        mov EAX,[g_AudioChannelCount]
        mov dword ptr [ESP + 0x24],EAX
        mov EAX,[g_AudioSampleRate]
        mov EBX,dword ptr [ESP + 0x24]
        mov dword ptr [ESP + 0x28],EAX
        test EBX,EBX
        jle LAB_0055439a
        shl EBX,0x2
        xor EAX,EAX
    LAB_00554389:
        add EAX,0x4
        mov EDX,dword ptr [EAX + 0x2648ec4]
        mov dword ptr [ESP + EAX*0x1 + -0x4],EDX
        cmp EAX,EBX
        jl LAB_00554389
    LAB_0055439a:
        fild dword ptr [g_MixBufferSize]
        fild dword ptr [g_AudioSampleRate]
        fdivp
        mov EBX,0x263cf1c
        mov ESI,dword ptr [ESP + 0x50]
        fstp float ptr [ESP + 0x58]
    LAB_005543b5:
        push dword ptr [ESP + 0x58]
        push EBX
        call sound_sndmain_cpp_CSfxSlot_compute_FUN_0054e8c0
        add EBX,0x11c
        add ESP,0x8
        cmp EBX,ESI
        jnz LAB_005543b5
        mov EBX,0x263cf1c
    LAB_005543d1:
        sub ESP,0x2c
        mov EDI,ESP
        mov ECX,0xb
        lea ESI,[ESP + 0x2c]
        push EBX
        rep movsd
        call sound_sndmain_cpp_CSfxSlot_mix_FUN_0054edb0
        add ESP,0x30
        add EBX,0x11c
        cmp EBX,dword ptr [ESP + 0x54]
        jnz LAB_005543d1
        mov EAX,[g_MixBufferSize]
        mov [g_MixBufferReadIndex],EAX
        mov EAX,[g_MixBufferCount]
        xor EBP,EBP
        inc EAX
        mov dword ptr [g_MixBufferWriteIndex],EBP
        mov [g_MixBufferCount],EAX
    LAB_00554413:
        mov EDX,dword ptr [ESP + 0x80]
        mov ESI,dword ptr [g_MixBufferReadIndex]
        cmp ESI,EDX
        jle LAB_00554426
        mov ESI,EDX
    LAB_00554426:
        cmp dword ptr [ESP + 0x78],0x0
        jle LAB_0055447a
        mov EDI,dword ptr [ESP + 0x84]
        mov EBP,dword ptr [ESP + 0x4c]
        xor EBX,EBX
        imul EDI,ESI
    LAB_0055443d:
        mov EAX,dword ptr [ESP + 0x84]
        push EAX
        mov EDX,dword ptr [ESP + 0x78]
        push ESI
        mov ECX,dword ptr [ESP + EBX*0x1 + 0x34]
        mov EAX,[g_MixBufferWriteIndex]
        push EDX
        shl EAX,0x2
        mov EDX,dword ptr [EBX + 0x2648ec8]
        push ECX
        add EAX,EDX
        push EAX
        call sound_sndmain_cpp_convertMixBufToOutput_FUN_0054d220
        add ESP,0x14
        mov EAX,dword ptr [ESP + EBX*0x1 + 0x2c]
        add EBX,0x4
        add EAX,EDI
        mov dword ptr [ESP + EBX*0x1 + 0x28],EAX
        cmp EBX,EBP
        jl LAB_0055443d
    LAB_0055447a:
        mov EBX,dword ptr [ESP + 0x80]
        mov EDI,dword ptr [g_MixBufferReadIndex]
        mov EBP,dword ptr [g_MixBufferWriteIndex]
        sub EDI,ESI
        add EBP,ESI
        sub EBX,ESI
        mov dword ptr [g_MixBufferReadIndex],EDI
        mov dword ptr [g_MixBufferWriteIndex],EBP
        mov dword ptr [ESP + 0x80],EBX
        jmp LAB_0055429d
    LAB_005544ab:
        mov ECX,0x5e93b2
        mov EBX,0x19a3
        push 0x5e93c7
        mov dword ptr [g_CHAR_PTR_01d046a0],ECX
        mov dword ptr [g_INT_01d046a4],EBX
        call core_main_c_displayErrorAndQuit_FUN_004e4500
        add ESP,0x4
        jmp LAB_00554204
    LAB_005544d3:
        mov EDX,0x5e7f87
        mov ECX,0x593
        push 0x5e7f9c
        mov dword ptr [g_CHAR_PTR_01d046a0],EDX
        mov dword ptr [g_INT_01d046a4],ECX
        call core_main_c_displayErrorAndQuit_FUN_004e4500
        add ESP,0x4
        jmp LAB_005542c5
    LAB_005544fb:
}
}
