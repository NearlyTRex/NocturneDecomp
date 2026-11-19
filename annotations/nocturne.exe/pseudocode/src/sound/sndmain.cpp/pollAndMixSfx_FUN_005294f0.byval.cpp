// Name: sound_sndmain.cpp_pollAndMixSfx_FUN_005294f0
// Address: 005294f0
// Address Range: [[005294f0, 00529802]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_005294f0(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_005294f0(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)
{
__asm {
        cmp dword ptr [g_SoundLockCount],0x0
        jle LAB_005297ab
    LAB_00529504:
        mov ESI,dword ptr [ESP + 0x78]
        test ESI,ESI
        jle LAB_00529529
        lea EDX,[ESI*0x4 + 0x0]
        xor EAX,EAX
    LAB_00529515:
        cmp dword ptr [EAX + 0x2dc8360],0x0
        jz LAB_005297fb
        add EAX,0x4
        cmp EAX,EDX
        jl LAB_00529515
    LAB_00529529:
        mov EAX,dword ptr [ESP + 0x74]
        cmp EAX,dword ptr [g_AudioBitsPerSample]
        jnz LAB_005297fb
        mov EAX,dword ptr [ESP + 0x78]
        cmp EAX,dword ptr [g_AudioChannelCount]
        jnz LAB_005297fb
        mov EAX,dword ptr [ESP + 0x7c]
        cmp EAX,dword ptr [g_AudioSampleRate]
        jnz LAB_005297fb
        call sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_00522d10
        mov ECX,dword ptr [ESP + 0x78]
        xor EAX,EAX
        test ECX,ECX
        jle LAB_00529580
        mov EDX,dword ptr [ESP + 0x70]
    LAB_0052956c:
        inc EAX
        mov ESI,dword ptr [EDX]
        mov dword ptr [ESP + EAX*0x4 + 0x28],ESI
        mov ESI,dword ptr [ESP + 0x78]
        add EDX,0x4
        cmp EAX,ESI
        jl LAB_0052956c
        mov EAX,EAX
    LAB_00529580:
        mov EAX,dword ptr [ESP + 0x78]
        shl EAX,0x2
        mov dword ptr [ESP + 0x4c],EAX
        mov EAX,0x2dbd374
        add EAX,0x4800
        mov dword ptr [ESP + 0x54],EAX
        mov dword ptr [ESP + 0x50],EAX
    LAB_0052959d:
        cmp dword ptr [ESP + 0x80],0x0
        jle LAB_005297fb
        cmp dword ptr [g_MixBufferReadIndex],0x1
        jge LAB_00529713
        cmp dword ptr [g_SoundLockCount],0x0
        jle LAB_005297d3
    LAB_005295c5:
        cmp dword ptr [g_MixBufferReadIndex],0x0
        jle LAB_005295f1
        mov ESI,0x592860
        mov EDI,0x4e4
        push 0x592875
        mov dword ptr [g_CurrentFilename],ESI
        mov dword ptr [g_CurrentLineNumber],EDI
        call core_main_c_displayErrorAndQuit_FUN_004c8440
        add ESP,0x4
    LAB_005295f1:
        mov ESI,dword ptr [g_MixBufferSize]
        mov EBP,dword ptr [g_AudioChannelCount]
        xor EDI,EDI
        shl ESI,0x2
        test EBP,EBP
        jle LAB_00529661
        xor EBX,EBX
    LAB_00529608:
        mov EAX,[g_NumMixBuffers]
        dec EAX
        imul EAX,ESI
        mov EDX,dword ptr [g_MixBufferSize]
        shl EDX,0x2
        push EAX
        mov EAX,dword ptr [EBX + 0x2dc8360]
        add EDX,EAX
        push EDX
        push EAX
        call crt_string_c_memmove_FUN_00566170
        mov EAX,[g_NumMixBuffers]
        mov EDX,dword ptr [g_MixBufferSize]
        dec EAX
        imul EAX,EDX
        add ESP,0xc
        push ESI
        shl EAX,0x2
        mov EDX,dword ptr [EBX + 0x2dc8360]
        push 0x0
        add EAX,EDX
        push EAX
        add EBX,0x4
        inc EDI
        call crt_memory_c_memset_FUN_00563cc0
        mov ECX,dword ptr [g_AudioChannelCount]
        add ESP,0xc
        cmp EDI,ECX
        jl LAB_00529608
    LAB_00529661:
        mov EAX,[g_MixBufferSize]
        mov dword ptr [ESP + 0x20],EAX
        mov EAX,[g_AudioChannelCount]
        mov dword ptr [ESP + 0x24],EAX
        mov EAX,[g_AudioSampleRate]
        mov EBX,dword ptr [ESP + 0x24]
        mov dword ptr [ESP + 0x28],EAX
        test EBX,EBX
        jle LAB_0052969a
        shl EBX,0x2
        xor EAX,EAX
    LAB_00529689:
        add EAX,0x4
        mov EDX,dword ptr [EAX + 0x2dc835c]
        mov dword ptr [ESP + EAX*0x1 + -0x4],EDX
        cmp EAX,EBX
        jl LAB_00529689
    LAB_0052969a:
        fild dword ptr [g_MixBufferSize]
        fild dword ptr [g_AudioSampleRate]
        fdivp
        mov EBX,0x2dbd374
        mov ESI,dword ptr [ESP + 0x50]
        fstp float ptr [ESP + 0x58]
    LAB_005296b5:
        push dword ptr [ESP + 0x58]
        push EBX
        call sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830
        add EBX,0x120
        add ESP,0x8
        cmp EBX,ESI
        jnz LAB_005296b5
        mov EBX,0x2dbd374
    LAB_005296d1:
        sub ESP,0x2c
        mov EDI,ESP
        mov ECX,0xb
        lea ESI,[ESP + 0x2c]
        push EBX
        rep movsd
        call sound_sndmain_cpp_CSfxSlot_mix_FUN_00524d10
        add ESP,0x30
        add EBX,0x120
        cmp EBX,dword ptr [ESP + 0x54]
        jnz LAB_005296d1
        mov EAX,[g_MixBufferSize]
        mov [g_MixBufferReadIndex],EAX
        mov EAX,[g_MixBufferCount]
        xor EBP,EBP
        inc EAX
        mov dword ptr [g_MixBufferWriteIndex],EBP
        mov [g_MixBufferCount],EAX
    LAB_00529713:
        mov EDX,dword ptr [ESP + 0x80]
        mov ESI,dword ptr [g_MixBufferReadIndex]
        cmp ESI,EDX
        jle LAB_00529726
        mov ESI,EDX
    LAB_00529726:
        cmp dword ptr [ESP + 0x78],0x0
        jle LAB_0052977a
        mov EDI,dword ptr [ESP + 0x84]
        mov EBP,dword ptr [ESP + 0x4c]
        xor EBX,EBX
        imul EDI,ESI
    LAB_0052973d:
        mov EAX,dword ptr [ESP + 0x84]
        push EAX
        mov EDX,dword ptr [ESP + 0x78]
        push ESI
        mov ECX,dword ptr [ESP + EBX*0x1 + 0x34]
        mov EAX,[g_MixBufferWriteIndex]
        push EDX
        shl EAX,0x2
        mov EDX,dword ptr [EBX + 0x2dc8360]
        push ECX
        add EAX,EDX
        push EAX
        call sound_sndmain_cpp_convertMixBufToOutput_FUN_00523330
        add ESP,0x14
        mov EAX,dword ptr [ESP + EBX*0x1 + 0x2c]
        add EBX,0x4
        add EAX,EDI
        mov dword ptr [ESP + EBX*0x1 + 0x28],EAX
        cmp EBX,EBP
        jl LAB_0052973d
    LAB_0052977a:
        mov EBX,dword ptr [ESP + 0x80]
        mov EDI,dword ptr [g_MixBufferReadIndex]
        mov EBP,dword ptr [g_MixBufferWriteIndex]
        sub EDI,ESI
        add EBP,ESI
        sub EBX,ESI
        mov dword ptr [g_MixBufferReadIndex],EDI
        mov dword ptr [g_MixBufferWriteIndex],EBP
        mov dword ptr [ESP + 0x80],EBX
        jmp LAB_0052959d
    LAB_005297ab:
        mov ECX,0x593af6
        mov EBX,0x1442
        push 0x593b0b
        mov dword ptr [g_CurrentFilename],ECX
        mov dword ptr [g_CurrentLineNumber],EBX
        call core_main_c_displayErrorAndQuit_FUN_004c8440
        add ESP,0x4
        jmp LAB_00529504
    LAB_005297d3:
        mov EDX,0x59282b
        mov ECX,0x4e0
        push 0x592840
        mov dword ptr [g_CurrentFilename],EDX
        mov dword ptr [g_CurrentLineNumber],ECX
        call core_main_c_displayErrorAndQuit_FUN_004c8440
        add ESP,0x4
        jmp LAB_005295c5
    LAB_005297fb:
}
}
