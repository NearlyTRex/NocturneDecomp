// Name: sound_sndmain.cpp_nextMixingBuffer_FUN_0056f6d0
// Address: 0056f6d0
// Address Range: [[0056f6d0, 0056f880]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_0056f6d0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_nextMixingBuffer_FUN_0056f6d0(void)
{
__asm {
        cmp dword ptr [g_SoundLockCount],0x0
        jle LAB_0056f859
    LAB_0056f6e4:
        cmp dword ptr [g_MixBufferReadIndex],0x0
        jle LAB_0056f710
        mov EDI,0x5f31b6
        mov EBP,0x597
        push 0x5f31cb
        mov dword ptr [g_CHAR_PTR_01d1d400],EDI
        mov dword ptr [g_INT_01d1d404],EBP
        call core_main_c_displayErrorAndQuit_FUN_005030e0
        add ESP,0x4
    LAB_0056f710:
        mov ESI,dword ptr [g_MixBufferSize]
        mov EAX,[g_AudioChannelCount]
        xor EDI,EDI
        shl ESI,0x2
        test EAX,EAX
        jle LAB_0056f790
        xor EBX,EBX
    LAB_0056f726:
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
        lea EDX,[EAX*0x4 + 0x0]
        push ESI
        mov EAX,dword ptr [EBX + 0x2c80698]
        push 0x0
        add EAX,EDX
        push EAX
        add EBX,0x4
        inc EDI
        call crt_memory_c_memset_FUN_005bfb70
        mov ECX,dword ptr [g_AudioChannelCount]
        add ESP,0xc
        cmp EDI,ECX
        jl LAB_0056f726
        lea EAX,[EAX]
        lea EDX,[EDX]
        nop
    LAB_0056f790:
        mov EAX,[g_MixBufferSize]
        mov dword ptr [ESP + 0x20],EAX
        mov EAX,[g_AudioChannelCount]
        mov dword ptr [ESP + 0x24],EAX
        mov EAX,[g_AudioSampleRate]
        mov EBX,dword ptr [ESP + 0x24]
        mov dword ptr [ESP + 0x28],EAX
        test EBX,EBX
        jle LAB_0056f7d0
        shl EBX,0x2
        xor EAX,EAX
    LAB_0056f7b8:
        add EAX,0x4
        mov EDX,dword ptr [EAX + 0x2c80694]
        mov dword ptr [ESP + EAX*0x1 + -0x4],EDX
        cmp EAX,EBX
        jl LAB_0056f7b8
        lea EAX,[EAX]
        nop
    LAB_0056f7d0:
        fild dword ptr [g_MixBufferSize]
        fild dword ptr [g_AudioSampleRate]
        fdivp
        mov EBX,0x2c745ec
        lea ESI,[EBX + 0x4700]
        fstp float ptr [ESP + 0x2c]
    LAB_0056f7ed:
        push dword ptr [ESP + 0x2c]
        push EBX
        call sound_sndmain_cpp_CSfxSlot_compute_FUN_00570f30
        add EBX,0x11c
        add ESP,0x8
        cmp EBX,ESI
        jnz LAB_0056f7ed
        mov EBX,0x2c745ec
        lea EBP,[EBX + 0x4700]
    LAB_0056f80f:
        sub ESP,0x2c
        mov EDI,ESP
        mov ECX,0xb
        lea ESI,[ESP + 0x2c]
        push EBX
        rep movsd
        call sound_sndmain_cpp_CSfxSlot_mix_FUN_00571420
        add EBX,0x11c
        add ESP,0x30
        cmp EBX,EBP
        jnz LAB_0056f80f
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
    LAB_0056f859:
        mov ECX,0x5f3181
        mov EBX,0x593
        push 0x5f3196
        mov dword ptr [g_CHAR_PTR_01d1d400],ECX
        mov dword ptr [g_INT_01d1d404],EBX
        call core_main_c_displayErrorAndQuit_FUN_005030e0
        add ESP,0x4
        jmp LAB_0056f6e4
}
}
