// Name: sound_sndmain.cpp_nextMixingBuffer_FUN_00523170
// Address: 00523170
// Address Range: [[00523170, 00523320]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_00523170(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_00523170(void)
{
__asm {
        cmp dword ptr [g_SoundLockCount],0x0
        jle LAB_005232f9
    LAB_00523184:
        cmp dword ptr [g_MixBufferReadIndex],0x0
        jle LAB_005231b0
        mov EDI,0x592860
        mov EBP,0x4e4
        push 0x592875
        mov dword ptr [g_CurrentFilename],EDI
        mov dword ptr [g_CurrentLineNumber],EBP
        call core_main_c_displayErrorAndQuit_FUN_004c8440
        add ESP,0x4
    LAB_005231b0:
        mov ESI,dword ptr [g_MixBufferSize]
        mov EAX,[g_AudioChannelCount]
        xor EDI,EDI
        shl ESI,0x2
        test EAX,EAX
        jle LAB_00523230
        xor EBX,EBX
    LAB_005231c6:
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
        lea EDX,[EAX*0x4 + 0x0]
        push ESI
        mov EAX,dword ptr [EBX + 0x2dc8360]
        push 0x0
        add EAX,EDX
        push EAX
        add EBX,0x4
        inc EDI
        call crt_memory_c_memset_FUN_00563cc0
        mov ECX,dword ptr [g_AudioChannelCount]
        add ESP,0xc
        cmp EDI,ECX
        jl LAB_005231c6
        lea EAX,[EAX]
        lea EDX,[EDX]
        nop
    LAB_00523230:
        mov EAX,[g_MixBufferSize]
        mov dword ptr [ESP + 0x20],EAX
        mov EAX,[g_AudioChannelCount]
        mov dword ptr [ESP + 0x24],EAX
        mov EAX,[g_AudioSampleRate]
        mov EBX,dword ptr [ESP + 0x24]
        mov dword ptr [ESP + 0x28],EAX
        test EBX,EBX
        jle LAB_00523270
        shl EBX,0x2
        xor EAX,EAX
    LAB_00523258:
        add EAX,0x4
        mov EDX,dword ptr [EAX + 0x2dc835c]
        mov dword ptr [ESP + EAX*0x1 + -0x4],EDX
        cmp EAX,EBX
        jl LAB_00523258
        lea EAX,[EAX]
        nop
    LAB_00523270:
        fild dword ptr [g_MixBufferSize]
        fild dword ptr [g_AudioSampleRate]
        fdivp
        mov EBX,0x2dbd374
        lea ESI,[EBX + 0x4800]
        fstp float ptr [ESP + 0x2c]
    LAB_0052328d:
        push dword ptr [ESP + 0x2c]
        push EBX
        call sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830
        add EBX,0x120
        add ESP,0x8
        cmp EBX,ESI
        jnz LAB_0052328d
        mov EBX,0x2dbd374
        lea EBP,[EBX + 0x4800]
    LAB_005232af:
        sub ESP,0x2c
        mov EDI,ESP
        mov ECX,0xb
        lea ESI,[ESP + 0x2c]
        push EBX
        rep movsd
        call sound_sndmain_cpp_CSfxSlot_mix_FUN_00524d10
        add EBX,0x120
        add ESP,0x30
        cmp EBX,EBP
        jnz LAB_005232af
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
    LAB_005232f9:
        mov ECX,0x59282b
        mov EBX,0x4e0
        push 0x592840
        mov dword ptr [g_CurrentFilename],ECX
        mov dword ptr [g_CurrentLineNumber],EBX
        call core_main_c_displayErrorAndQuit_FUN_004c8440
        add ESP,0x4
        jmp LAB_00523184
}
}
