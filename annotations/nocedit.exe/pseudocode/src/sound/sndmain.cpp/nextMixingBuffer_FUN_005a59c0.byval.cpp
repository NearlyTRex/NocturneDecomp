// Name: sound_sndmain.cpp_nextMixingBuffer_FUN_005a59c0
// Address: 005a59c0
// Address Range: [[005a59c0, 005a5b70]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_005a59c0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_005a59c0(void)
{
__asm {
        cmp dword ptr [g_SoundLockCount],0x0
        jle LAB_005a5b49
    LAB_005a59d4:
        cmp dword ptr [g_MixBufferReadIndex],0x0
        jle LAB_005a5a00
        mov EDI,0x64fbcf
        mov EBP,0x4e2
        push 0x64fbe4
        mov dword ptr [g_CurrentFilename],EDI
        mov dword ptr [g_CurrentLineNumber],EBP
        call core_main_c_displayErrorAndQuit_FUN_00506f10
        add ESP,0x4
    LAB_005a5a00:
        mov ESI,dword ptr [g_MixBufferSize]
        mov EAX,[g_AudioChannelCount]
        xor EDI,EDI
        shl ESI,0x2
        test EAX,EAX
        jle LAB_005a5a80
        xor EBX,EBX
    LAB_005a5a16:
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
        lea EDX,[EAX*0x4 + 0x0]
        push ESI
        mov EAX,dword ptr [g_ChannelPrimaryBuffers + EBX]
        push 0x0
    LAB_005a5a5a:
        add EAX,EDX
        push EAX
        add EBX,0x4
        inc EDI
        call crt_memory_c_memset_FUN_005fde40
        mov ECX,dword ptr [g_AudioChannelCount]
        add ESP,0xc
        cmp EDI,ECX
        jl LAB_005a5a16
        lea EAX,[EAX]
        lea EDX,[EDX]
        nop
    LAB_005a5a80:
        mov EAX,[g_MixBufferSize]
        mov dword ptr [ESP + 0x20],EAX
        mov EAX,[g_AudioChannelCount]
        mov dword ptr [ESP + 0x24],EAX
        mov EAX,[g_AudioSampleRate]
        mov EBX,dword ptr [ESP + 0x24]
        mov dword ptr [ESP + 0x28],EAX
        test EBX,EBX
        jle LAB_005a5ac0
        shl EBX,0x2
        xor EAX,EAX
    LAB_005a5aa8:
        add EAX,0x4
        mov EDX,dword ptr [g_ChannelPrimaryBuffers + EAX]
        mov dword ptr [ESP + EAX*0x1 + -0x4],EDX
        cmp EAX,EBX
        jl LAB_005a5aa8
        lea EAX,[EAX]
        nop
    LAB_005a5ac0:
        fild dword ptr [g_MixBufferSize]
        fild dword ptr [g_AudioSampleRate]
        fdivp
        mov EBX,0x3f5daa4
        lea ESI,[EBX + 0x4a00]
        fstp float ptr [ESP + 0x2c]
    LAB_005a5add:
        push dword ptr [ESP + 0x2c]
        push EBX
        call sound_sndmain_cpp_CSfxSlot_compute_FUN_005a7100
        add EBX,0x128
        add ESP,0x8
        cmp EBX,ESI
        jnz LAB_005a5add
        mov EBX,0x3f5daa4
        lea EBP,[EBX + 0x4a00]
    LAB_005a5aff:
        sub ESP,0x2c
        mov EDI,ESP
        mov ECX,0xb
        lea ESI,[ESP + 0x2c]
        push EBX
        rep movsd
        call sound_sndmain_cpp_CSfxSlot_mix_FUN_005a75e0
        add EBX,0x128
        add ESP,0x30
        cmp EBX,EBP
        jnz LAB_005a5aff
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
    LAB_005a5b49:
        mov ECX,0x64fb9a
        mov EBX,0x4de
        push 0x64fbaf
        mov dword ptr [g_CurrentFilename],ECX
        mov dword ptr [g_CurrentLineNumber],EBX
        call core_main_c_displayErrorAndQuit_FUN_00506f10
        add ESP,0x4
        jmp LAB_005a59d4
}
}
