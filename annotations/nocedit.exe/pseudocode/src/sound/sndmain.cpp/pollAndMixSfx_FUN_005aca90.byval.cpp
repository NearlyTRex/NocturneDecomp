// Name: sound_sndmain.cpp_pollAndMixSfx_FUN_005aca90
// Address: 005aca90
// Address Range: [[004423e5, 00442438] [005aca90, 005acda2]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_005aca90(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_005aca90(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)
{
__asm {
        mov EDI,ESP
        mov ECX,0xb
        lea ESI,[ESP + 0x2c]
        push EBX
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
        jmp LAB_005acc80
        push EBX
        push ESI
        push EDI
        push EBP
        sub ESP,0x5c
        cmp dword ptr [g_SoundLockCount],0x0
        jle LAB_005acd4b
    LAB_005acaa4:
        mov ESI,dword ptr [ESP + 0x78]
        test ESI,ESI
        jle LAB_005acac9
        lea EDX,[ESI*0x4 + 0x0]
        xor EAX,EAX
    LAB_005acab5:
        cmp dword ptr [g_ChannelPrimaryBuffers + EAX],0x0
        jz LAB_005acd9b
        add EAX,0x4
        cmp EAX,EDX
        jl LAB_005acab5
    LAB_005acac9:
        mov EAX,dword ptr [ESP + 0x74]
        cmp EAX,dword ptr [g_AudioBitsPerSample]
        jnz LAB_005acd9b
        mov EAX,dword ptr [ESP + 0x78]
        cmp EAX,dword ptr [g_AudioChannelCount]
        jnz LAB_005acd9b
        mov EAX,dword ptr [ESP + 0x7c]
        cmp EAX,dword ptr [g_AudioSampleRate]
        jnz LAB_005acd9b
        call sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_005a5530
        mov ECX,dword ptr [ESP + 0x78]
        xor EAX,EAX
        test ECX,ECX
        jle LAB_005acb20
        mov EDX,dword ptr [ESP + 0x70]
    LAB_005acb0c:
        inc EAX
        mov ESI,dword ptr [EDX]
        mov dword ptr [ESP + EAX*0x4 + 0x28],ESI
        mov ESI,dword ptr [ESP + 0x78]
        add EDX,0x4
        cmp EAX,ESI
        jl LAB_005acb0c
        mov EAX,EAX
    LAB_005acb20:
        mov EAX,dword ptr [ESP + 0x78]
        shl EAX,0x2
        mov dword ptr [ESP + 0x4c],EAX
        mov EAX,0x3f5daa4
        add EAX,0x4a00
        mov dword ptr [ESP + 0x54],EAX
        mov dword ptr [ESP + 0x50],EAX
    LAB_005acb3d:
        cmp dword ptr [ESP + 0x80],0x0
        jle LAB_005acd9b
        cmp dword ptr [g_MixBufferReadIndex],0x1
        jge LAB_005accb3
        cmp dword ptr [g_SoundLockCount],0x0
        jle LAB_005acd73
    LAB_005acb65:
        cmp dword ptr [g_MixBufferReadIndex],0x0
        jle LAB_005acb91
        mov ESI,0x64fbcf
        mov EDI,0x4e2
        push 0x64fbe4
        mov dword ptr [g_CurrentFilename],ESI
        mov dword ptr [g_CurrentLineNumber],EDI
        call core_main_c_displayErrorAndQuit_FUN_00506f10
        add ESP,0x4
    LAB_005acb91:
        mov ESI,dword ptr [g_MixBufferSize]
        mov EBP,dword ptr [g_AudioChannelCount]
        xor EDI,EDI
        shl ESI,0x2
        test EBP,EBP
        jle LAB_005acc01
        xor EBX,EBX
    LAB_005acba8:
        mov EAX,[g_NumMixBuffers]
        dec EAX
        imul EAX,ESI
        mov EDX,dword ptr [g_MixBufferSize]
        shl EDX,0x2
        push EAX
        mov EAX,dword ptr [g_ChannelPrimaryBuffers + EBX]
        add EDX,EAX
        push EDX
        push EAX
        call crt_string_c_memmove_FUN_005fe5e0
        mov EAX,[g_NumMixBuffers]
        mov EDX,dword ptr [g_MixBufferSize]
        dec EAX
        imul EAX,EDX
        add ESP,0xc
        push ESI
        shl EAX,0x2
        mov EDX,dword ptr [g_ChannelPrimaryBuffers + EBX]
        push 0x0
        add EAX,EDX
        push EAX
        add EBX,0x4
        inc EDI
        call crt_memory_c_memset_FUN_005fde40
        mov ECX,dword ptr [g_AudioChannelCount]
        add ESP,0xc
        cmp EDI,ECX
        jl LAB_005acba8
    LAB_005acc01:
        mov EAX,[g_MixBufferSize]
        mov dword ptr [ESP + 0x20],EAX
        mov EAX,[g_AudioChannelCount]
        mov dword ptr [ESP + 0x24],EAX
        mov EAX,[g_AudioSampleRate]
        mov EBX,dword ptr [ESP + 0x24]
        mov dword ptr [ESP + 0x28],EAX
        test EBX,EBX
        jle LAB_005acc3a
        shl EBX,0x2
        xor EAX,EAX
    LAB_005acc29:
        add EAX,0x4
        mov EDX,dword ptr [g_ChannelPrimaryBuffers + EAX]
        mov dword ptr [ESP + EAX*0x1 + -0x4],EDX
        cmp EAX,EBX
        jl LAB_005acc29
    LAB_005acc3a:
        fild dword ptr [g_MixBufferSize]
        fild dword ptr [g_AudioSampleRate]
        fdivp
        mov EBX,0x3f5daa4
        mov ESI,dword ptr [ESP + 0x50]
        fstp float ptr [ESP + 0x58]
    LAB_005acc55:
        push dword ptr [ESP + 0x58]
        push EBX
        call sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100
        add EBX,0x128
        add ESP,0x8
        cmp EBX,ESI
        jnz LAB_005acc55
        mov EBX,0x3f5daa4
    LAB_005acc71:
        jmp 0x004423e5
    LAB_005acc80:
        rep movsd
        call sound_sndmain_cpp_CSfxSlot_mix_FUN_005a75e0
        add ESP,0x30
        add EBX,0x128
        cmp EBX,dword ptr [ESP + 0x54]
        jnz LAB_005acc71
        mov EAX,[g_MixBufferSize]
        mov [g_MixBufferReadIndex],EAX
        mov EAX,[g_MixBufferCount]
        xor EBP,EBP
        inc EAX
        mov dword ptr [g_MixBufferWriteIndex],EBP
        mov [g_MixBufferCount],EAX
    LAB_005accb3:
        mov EDX,dword ptr [ESP + 0x80]
        mov ESI,dword ptr [g_MixBufferReadIndex]
        cmp ESI,EDX
        jle LAB_005accc6
        mov ESI,EDX
    LAB_005accc6:
        cmp dword ptr [ESP + 0x78],0x0
        jle LAB_005acd1a
        mov EDI,dword ptr [ESP + 0x84]
        mov EBP,dword ptr [ESP + 0x4c]
        xor EBX,EBX
        imul EDI,ESI
    LAB_005accdd:
        mov EAX,dword ptr [ESP + 0x84]
        push EAX
        mov EDX,dword ptr [ESP + 0x78]
        push ESI
        mov ECX,dword ptr [ESP + EBX*0x1 + 0x34]
        mov EAX,[g_MixBufferWriteIndex]
        push EDX
        shl EAX,0x2
        mov EDX,dword ptr [g_ChannelPrimaryBuffers + EBX]
        push ECX
        add EAX,EDX
        push EAX
        call sound_sndmain_cpp_convertMixBufToOutput_FUN_005a5b80
        add ESP,0x14
        mov EAX,dword ptr [ESP + EBX*0x1 + 0x2c]
        add EBX,0x4
        add EAX,EDI
        mov dword ptr [ESP + EBX*0x1 + 0x28],EAX
        cmp EBX,EBP
        jl LAB_005accdd
    LAB_005acd1a:
        mov EBX,dword ptr [ESP + 0x80]
        mov EDI,dword ptr [g_MixBufferReadIndex]
        mov EBP,dword ptr [g_MixBufferWriteIndex]
        sub EDI,ESI
        add EBP,ESI
        sub EBX,ESI
        mov dword ptr [g_MixBufferReadIndex],EDI
        mov dword ptr [g_MixBufferWriteIndex],EBP
        mov dword ptr [ESP + 0x80],EBX
        jmp LAB_005acb3d
    LAB_005acd4b:
        mov ECX,0x65101f
        mov EBX,0x16ce
        push 0x651034
        mov dword ptr [g_CurrentFilename],ECX
        mov dword ptr [g_CurrentLineNumber],EBX
        call core_main_c_displayErrorAndQuit_FUN_00506f10
        add ESP,0x4
        jmp LAB_005acaa4
    LAB_005acd73:
        mov EDX,0x64fb9a
        mov ECX,0x4de
        push 0x64fbaf
        mov dword ptr [g_CurrentFilename],EDX
        mov dword ptr [g_CurrentLineNumber],ECX
        call core_main_c_displayErrorAndQuit_FUN_00506f10
        add ESP,0x4
        jmp LAB_005acb65
    LAB_005acd9b:
        add ESP,0x5c
}
}
