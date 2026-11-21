// Name: sound_sndmain.cpp_pollAndMixSfx_FUN_00576c20
// Address: 00576c20
// Address Range: [[00576c20, 00576f32]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_00576c20(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_00576c20(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)
{
__asm {
        cmp dword ptr [g_SoundLockCount],0x0
        jle LAB_00576edb
    LAB_00576c34:
        mov ESI,dword ptr [ESP + 0x78]
        test ESI,ESI
        jle LAB_00576c59
        lea EDX,[ESI*0x4 + 0x0]
        xor EAX,EAX
    LAB_00576c45:
        cmp dword ptr [EAX + 0x2c80698],0x0
        jz LAB_00576f2b
        add EAX,0x4
        cmp EAX,EDX
        jl LAB_00576c45
    LAB_00576c59:
        mov EAX,dword ptr [ESP + 0x74]
        cmp EAX,dword ptr [g_AudioBitsPerSample]
        jnz LAB_00576f2b
        mov EAX,dword ptr [ESP + 0x78]
        cmp EAX,dword ptr [g_AudioChannelCount]
        jnz LAB_00576f2b
        mov EAX,dword ptr [ESP + 0x7c]
        cmp EAX,dword ptr [g_AudioSampleRate]
        jnz LAB_00576f2b
        call sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_0056f1e0
        mov ECX,dword ptr [ESP + 0x78]
        xor EAX,EAX
        test ECX,ECX
        jle LAB_00576cb0
        mov EDX,dword ptr [ESP + 0x70]
    LAB_00576c9c:
        inc EAX
        mov ESI,dword ptr [EDX]
        mov dword ptr [ESP + EAX*0x4 + 0x28],ESI
        mov ESI,dword ptr [ESP + 0x78]
        add EDX,0x4
        cmp EAX,ESI
        jl LAB_00576c9c
        mov EAX,EAX
    LAB_00576cb0:
        mov EAX,dword ptr [ESP + 0x78]
        shl EAX,0x2
        mov dword ptr [ESP + 0x4c],EAX
        mov EAX,0x2c745ec
        add EAX,0x4700
        mov dword ptr [ESP + 0x54],EAX
        mov dword ptr [ESP + 0x50],EAX
    LAB_00576ccd:
        cmp dword ptr [ESP + 0x80],0x0
        jle LAB_00576f2b
        cmp dword ptr [g_MixBufferReadIndex],0x1
        jge LAB_00576e43
        cmp dword ptr [g_SoundLockCount],0x0
        jle LAB_00576f03
    LAB_00576cf5:
        cmp dword ptr [g_MixBufferReadIndex],0x0
        jle LAB_00576d21
        mov ESI,0x5f31b6
        mov EDI,0x597
        push 0x5f31cb
        mov dword ptr [g_CurrentFilename],ESI
        mov dword ptr [g_CurrentLineNumber],EDI
        call core_main_c_displayErrorAndQuit_FUN_005030e0
        add ESP,0x4
    LAB_00576d21:
        mov ESI,dword ptr [g_MixBufferSize]
        mov EBP,dword ptr [g_AudioChannelCount]
        xor EDI,EDI
        shl ESI,0x2
        test EBP,EBP
        jle LAB_00576d91
        xor EBX,EBX
    LAB_00576d38:
        mov EAX,[g_NumMixBuffers]
        dec EAX
        imul EAX,ESI
        mov EDX,dword ptr [g_MixBufferSize]
        shl EDX,0x2
        push EAX
        mov EAX,dword ptr [EBX + 0x2c80698]
        add EDX,EAX
        push EDX
        push EAX
        call crt_string_c_memmove_FUN_005c25d0
        mov EAX,[g_NumMixBuffers]
        mov EDX,dword ptr [g_MixBufferSize]
        dec EAX
        imul EAX,EDX
        add ESP,0xc
        push ESI
        shl EAX,0x2
        mov EDX,dword ptr [EBX + 0x2c80698]
        push 0x0
        add EAX,EDX
        push EAX
        add EBX,0x4
        inc EDI
        call crt_memory_c_memset_FUN_005bfb70
        mov ECX,dword ptr [g_AudioChannelCount]
        add ESP,0xc
        cmp EDI,ECX
        jl LAB_00576d38
    LAB_00576d91:
        mov EAX,[g_MixBufferSize]
        mov dword ptr [ESP + 0x20],EAX
        mov EAX,[g_AudioChannelCount]
        mov dword ptr [ESP + 0x24],EAX
        mov EAX,[g_AudioSampleRate]
        mov EBX,dword ptr [ESP + 0x24]
        mov dword ptr [ESP + 0x28],EAX
        test EBX,EBX
        jle LAB_00576dca
        shl EBX,0x2
        xor EAX,EAX
    LAB_00576db9:
        add EAX,0x4
        mov EDX,dword ptr [EAX + 0x2c80694]
        mov dword ptr [ESP + EAX*0x1 + -0x4],EDX
        cmp EAX,EBX
        jl LAB_00576db9
    LAB_00576dca:
        fild dword ptr [g_MixBufferSize]
        fild dword ptr [g_AudioSampleRate]
        fdivp
        mov EBX,0x2c745ec
        mov ESI,dword ptr [ESP + 0x50]
        fstp float ptr [ESP + 0x58]
    LAB_00576de5:
        push dword ptr [ESP + 0x58]
        push EBX
        call sound_sndmain_cpp_CSfxSlot_compute_FUN_00570f30
        add EBX,0x11c
        add ESP,0x8
        cmp EBX,ESI
        jnz LAB_00576de5
        mov EBX,0x2c745ec
    LAB_00576e01:
        sub ESP,0x2c
        mov EDI,ESP
        mov ECX,0xb
        lea ESI,[ESP + 0x2c]
        push EBX
        rep movsd
        call sound_sndmain_cpp_CSfxSlot_mix_FUN_00571420
        add ESP,0x30
        add EBX,0x11c
        cmp EBX,dword ptr [ESP + 0x54]
        jnz LAB_00576e01
        mov EAX,[g_MixBufferSize]
        mov [g_MixBufferReadIndex],EAX
        mov EAX,[g_MixBufferCount]
        xor EBP,EBP
        inc EAX
        mov dword ptr [g_MixBufferWriteIndex],EBP
        mov [g_MixBufferCount],EAX
    LAB_00576e43:
        mov EDX,dword ptr [ESP + 0x80]
        mov ESI,dword ptr [g_MixBufferReadIndex]
        cmp ESI,EDX
        jle LAB_00576e56
        mov ESI,EDX
    LAB_00576e56:
        cmp dword ptr [ESP + 0x78],0x0
        jle LAB_00576eaa
        mov EDI,dword ptr [ESP + 0x84]
        mov EBP,dword ptr [ESP + 0x4c]
        xor EBX,EBX
        imul EDI,ESI
    LAB_00576e6d:
        mov EAX,dword ptr [ESP + 0x84]
        push EAX
        mov EDX,dword ptr [ESP + 0x78]
        push ESI
        mov ECX,dword ptr [ESP + EBX*0x1 + 0x34]
        mov EAX,[g_MixBufferWriteIndex]
        push EDX
        shl EAX,0x2
        mov EDX,dword ptr [EBX + 0x2c80698]
        push ECX
        add EAX,EDX
        push EAX
        call sound_sndmain_cpp_convertMixBufToOutput_FUN_0056f890
        add ESP,0x14
        mov EAX,dword ptr [ESP + EBX*0x1 + 0x2c]
        add EBX,0x4
        add EAX,EDI
        mov dword ptr [ESP + EBX*0x1 + 0x28],EAX
        cmp EBX,EBP
        jl LAB_00576e6d
    LAB_00576eaa:
        mov EBX,dword ptr [ESP + 0x80]
        mov EDI,dword ptr [g_MixBufferReadIndex]
        mov EBP,dword ptr [g_MixBufferWriteIndex]
        sub EDI,ESI
        add EBP,ESI
        sub EBX,ESI
        mov dword ptr [g_MixBufferReadIndex],EDI
        mov dword ptr [g_MixBufferWriteIndex],EBP
        mov dword ptr [ESP + 0x80],EBX
        jmp LAB_00576ccd
    LAB_00576edb:
        mov ECX,0x5f45ac
        mov EBX,0x199a
        push 0x5f45c1
        mov dword ptr [g_CurrentFilename],ECX
        mov dword ptr [g_CurrentLineNumber],EBX
        call core_main_c_displayErrorAndQuit_FUN_005030e0
        add ESP,0x4
        jmp LAB_00576c34
    LAB_00576f03:
        mov EDX,0x5f3181
        mov ECX,0x593
        push 0x5f3196
        mov dword ptr [g_CurrentFilename],EDX
        mov dword ptr [g_CurrentLineNumber],ECX
        call core_main_c_displayErrorAndQuit_FUN_005030e0
        add ESP,0x4
        jmp LAB_00576cf5
    LAB_00576f2b:
}
}
