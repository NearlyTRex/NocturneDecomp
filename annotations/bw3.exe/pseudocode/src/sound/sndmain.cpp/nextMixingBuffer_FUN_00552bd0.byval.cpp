// Name: sound_sndmain.cpp_nextMixingBuffer_FUN_00552bd0
// Address: 00552bd0
// Address Range: [[00552bd0, 00552d80]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_00552bd0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_00552bd0(void)
{
__asm {
        cmp dword ptr [g_SoundLockCount],0x0
        jle LAB_00552d59
    LAB_00552be4:
        cmp dword ptr [g_MixBufferReadIndex],0x0
        jle LAB_00552c10
        mov EDI,0x5d2aa0
        mov EBP,0x599
        push 0x5d2ab5
        mov dword ptr [g_CHAR_PTR_01d71de0],EDI
        mov dword ptr [g_INT_01d71de4],EBP
        call core_main_c_displayErrorAndQuit_FUN_004e4330
        add ESP,0x4
    LAB_00552c10:
        mov ESI,dword ptr [g_MixBufferSize]
        mov EAX,[g_AudioChannelCount]
        xor EDI,EDI
        shl ESI,0x2
        test EAX,EAX
        jle LAB_00552c90
        xor EBX,EBX
    LAB_00552c26:
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
        lea EDX,[EAX*0x4 + 0x0]
        push ESI
        mov EAX,dword ptr [EBX + 0x2cf32cc]
        push 0x0
        add EAX,EDX
        push EAX
        add EBX,0x4
        inc EDI
        call crt_memory_c_memset_FUN_005a28f0
        mov ECX,dword ptr [g_AudioChannelCount]
        add ESP,0xc
        cmp EDI,ECX
        jl LAB_00552c26
        lea EAX,[EAX]
        lea EDX,[EDX]
        nop
    LAB_00552c90:
        mov EAX,[g_MixBufferSize]
        mov dword ptr [ESP + 0x20],EAX
        mov EAX,[g_AudioChannelCount]
        mov dword ptr [ESP + 0x24],EAX
        mov EAX,[g_AudioSampleRate]
        mov EBX,dword ptr [ESP + 0x24]
        mov dword ptr [ESP + 0x28],EAX
        test EBX,EBX
        jle LAB_00552cd0
        shl EBX,0x2
        xor EAX,EAX
    LAB_00552cb8:
        add EAX,0x4
        mov EDX,dword ptr [EAX + 0x2cf32c8]
        mov dword ptr [ESP + EAX*0x1 + -0x4],EDX
        cmp EAX,EBX
        jl LAB_00552cb8
        lea EAX,[EAX]
        nop
    LAB_00552cd0:
        fild dword ptr [g_MixBufferSize]
        fild dword ptr [g_AudioSampleRate]
        fdivp
        mov EBX,0x2ce721c
        lea ESI,[EBX + 0x4700]
        fstp float ptr [ESP + 0x2c]
    LAB_00552ced:
        push dword ptr [ESP + 0x2c]
        push EBX
        call sound_sndmain_cpp_CSfxSlot_compute_FUN_00554430
        add EBX,0x11c
        add ESP,0x8
        cmp EBX,ESI
        jnz LAB_00552ced
        mov EBX,0x2ce721c
        lea EBP,[EBX + 0x4700]
    LAB_00552d0f:
        sub ESP,0x2c
        mov EDI,ESP
        mov ECX,0xb
        lea ESI,[ESP + 0x2c]
        push EBX
        rep movsd
        call sound_sndmain_cpp_CSfxSlot_mix_FUN_00554920
        add EBX,0x11c
        add ESP,0x30
        cmp EBX,EBP
        jnz LAB_00552d0f
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
    LAB_00552d59:
        mov ECX,0x5d2a6b
        mov EBX,0x595
        push 0x5d2a80
        mov dword ptr [g_CHAR_PTR_01d71de0],ECX
        mov dword ptr [g_INT_01d71de4],EBX
        call core_main_c_displayErrorAndQuit_FUN_004e4330
        add ESP,0x4
        jmp LAB_00552be4
}
}
