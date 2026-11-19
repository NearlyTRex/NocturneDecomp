// Name: sound_sndmain.cpp_nextMixingBuffer_FUN_0054d060
// Address: 0054d060
// Address Range: [[0054d060, 0054d210]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_0054d060(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_0054d060(void)
{
__asm {
        cmp dword ptr [g_SoundLockCount],0x0
        jle LAB_0054d1e9
    LAB_0054d074:
        cmp dword ptr [g_MixBufferReadIndex],0x0
        jle LAB_0054d0a0
        mov EDI,0x5e7fbc
        mov EBP,0x597
        push 0x5e7fd1
        mov dword ptr [g_CHAR_PTR_01d046a0],EDI
        mov dword ptr [g_INT_01d046a4],EBP
        call core_main_c_displayErrorAndQuit_FUN_004e4500
        add ESP,0x4
    LAB_0054d0a0:
        mov ESI,dword ptr [g_MixBufferSize]
        mov EAX,[g_AudioChannelCount]
        xor EDI,EDI
        shl ESI,0x2
        test EAX,EAX
        jle LAB_0054d120
        xor EBX,EBX
    LAB_0054d0b6:
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
        lea EDX,[EAX*0x4 + 0x0]
        push ESI
        mov EAX,dword ptr [EBX + 0x2648ec8]
        push 0x0
        add EAX,EDX
        push EAX
        add EBX,0x4
        inc EDI
        call crt_memory_c_memset_FUN_005b77c0
        mov ECX,dword ptr [g_AudioChannelCount]
        add ESP,0xc
        cmp EDI,ECX
        jl LAB_0054d0b6
        lea EAX,[EAX]
        lea EDX,[EDX]
        nop
    LAB_0054d120:
        mov EAX,[g_MixBufferSize]
        mov dword ptr [ESP + 0x20],EAX
        mov EAX,[g_AudioChannelCount]
        mov dword ptr [ESP + 0x24],EAX
        mov EAX,[g_AudioSampleRate]
        mov EBX,dword ptr [ESP + 0x24]
        mov dword ptr [ESP + 0x28],EAX
        test EBX,EBX
        jle LAB_0054d160
        shl EBX,0x2
        xor EAX,EAX
    LAB_0054d148:
        add EAX,0x4
        mov EDX,dword ptr [EAX + 0x2648ec4]
        mov dword ptr [ESP + EAX*0x1 + -0x4],EDX
        cmp EAX,EBX
        jl LAB_0054d148
        lea EAX,[EAX]
        nop
    LAB_0054d160:
        fild dword ptr [g_MixBufferSize]
        fild dword ptr [g_AudioSampleRate]
        fdivp
        mov EBX,0x263cf1c
        lea ESI,[EBX + 0x4700]
        fstp float ptr [ESP + 0x2c]
    LAB_0054d17d:
        push dword ptr [ESP + 0x2c]
        push EBX
        call sound_sndmain_cpp_CSfxSlot_compute_FUN_0054e8c0
        add EBX,0x11c
        add ESP,0x8
        cmp EBX,ESI
        jnz LAB_0054d17d
        mov EBX,0x263cf1c
        lea EBP,[EBX + 0x4700]
    LAB_0054d19f:
        sub ESP,0x2c
        mov EDI,ESP
        mov ECX,0xb
        lea ESI,[ESP + 0x2c]
        push EBX
        rep movsd
        call sound_sndmain_cpp_CSfxSlot_mix_FUN_0054edb0
        add EBX,0x11c
        add ESP,0x30
        cmp EBX,EBP
        jnz LAB_0054d19f
        mov EAX,[g_MixBufferSize]
        mov EDI,dword ptr [g_MixBufferCount]
        xor ESI,ESI
        mov [g_MixBufferReadIndex],EAX
        inc EDI
        mov dword ptr [g_MixBufferWriteIndex],ESI
        mov dword ptr [g_MixBufferCount],EDI
        add ESP,0x30
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_0054d1e9:
        mov ECX,0x5e7f87
        mov EBX,0x593
        push 0x5e7f9c
        mov dword ptr [g_CHAR_PTR_01d046a0],ECX
        mov dword ptr [g_INT_01d046a4],EBX
        call core_main_c_displayErrorAndQuit_FUN_004e4500
        add ESP,0x4
        jmp LAB_0054d074
}
}
