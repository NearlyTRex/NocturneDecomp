; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_CSfxSample_allocateHwSample_FUN_0056feb0(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined        Stack[-0x160]:1  local_160
;
; XREF[3]:
;   sound_sndmain.cpp_FUN_0056e830 at 0056ea3c
;   sound_sndmain.cpp_FUN_005740fe at 005741ed
;   sound_sndmain.cpp_startSfx_FUN_00572d20 at 005732b6
;
; Referenced Globals:
;   undefined4 s_allocateHwSample_failed_005f312b+1
;   undefined4 s_Atried_to_use_Yamaha_WAV_005f32a7+1
;   undefined4 DAT_02c78ff0
;   undefined4 g_SfxSamples[0].ref_count
;   undefined4 g_SfxSamples[1].taken
;   undefined4 g_SfxSamples[1].ref_count
;   undefined4 g_SfxSamples[1].buffer_id
;   undefined4 g_SfxSamples[1].is_user_sample
;   undefined4 DAT_02c80650
;
; Called Functions:
;   crt_memory.c_realloc_FUN_005c10d0
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020
;   sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00570130
;   sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005700e0
;   sound_sndmain.cpp_FUN_0056dfd0
;   sound_sndmain.cpp_FUN_00575560
;   sound_sndmain.cpp_FUN_005773f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056feb0
        ;   Label: sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0056feb0
    PUSH ESI                            ; 0056feb1
    PUSH EDI                            ; 0056feb2
    PUSH EBP                            ; 0056feb3
    SUB ESP,0x2a0                       ; 0056feb4
    MOV EBP,dword ptr [ESP + 0x2b4]     ; 0056feba
    PUSH EBP                            ; 0056fec1
    CALL sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005700e0 ; 0056fec2
        ;   XREF to: 005700e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_releaseBufferId_FUN_005700e0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0056fec7
    PUSH EBP                            ; 0056feca
    CALL sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00570130 ; 0056fecb
        ;   XREF to: 00570130 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeSampleData_FUN_00570130(CSfxSample * this_ptr)
    MOV EDX,dword ptr [EBP + 0x100]     ; 0056fed0
    ADD ESP,0x4                         ; 0056fed6
    CMP EDX,0x2                         ; 0056fed9
    JZ 0x0056ff93                       ; 0056fedc
        ;   XREF to: 0056ff93 (CONDITIONAL_JUMP)  ; LAB_0056ff93
    CALL sound_sndmain.cpp_FUN_00575560 ; 0056fee2
        ;   XREF to: 00575560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00575560(int enable)
    CMP EAX,0x1                         ; 0056fee7
    JL 0x0056ffd5                       ; 0056feea
        ;   XREF to: 0056ffd5 (CONDITIONAL_JUMP)  ; LAB_0056ffd5
    MOV ECX,0x54                        ; 0056fef0
    MOV EDI,ESP                         ; 0056fef5
    MOV ESI,EBP                         ; 0056fef7
    MOVSD.REP ES:EDI,ESI                ; 0056fef9
    MOV ECX,0x54                        ; 0056fefb
    LEA EDI,[ESP + 0x150]               ; 0056ff00
    MOV EAX,dword ptr [EBP + 0x164]     ; 0056ff07
    MOV ESI,ESP                         ; 0056ff0d
    MOV dword ptr [ESP + 0x110],EAX     ; 0056ff0f
    MOVSD.REP ES:EDI,ESI                ; 0056ff16
    CMP dword ptr [0x02c80650],0x0      ; 0056ff18 | DAT_02c80650
    JZ 0x0056ff78                       ; 0056ff1f
        ;   XREF to: 0056ff78 (CONDITIONAL_JUMP)  ; LAB_0056ff78
    XOR ESI,ESI                         ; 0056ff21
    LEA EDX,[ESP + 0x150]               ; 0056ff23
        ;   Label: LAB_0056ff23
    MOV EAX,[0x02c80650]                ; 0056ff2a | DAT_02c80650
    PUSH EDX                            ; 0056ff2f
    MOV ECX,dword ptr [EAX]             ; 0056ff30
    PUSH EAX                            ; 0056ff32
    CALL dword ptr [ECX + 0x30]         ; 0056ff33
    ADD ESP,0x8                         ; 0056ff36
    TEST EAX,EAX                        ; 0056ff39
    JNZ 0x0056ff7a                      ; 0056ff3b
        ;   XREF to: 0056ff7a (CONDITIONAL_JUMP)  ; LAB_0056ff7a
    MOV EAX,[0x02c78ff0]                ; 0056ff3d | DAT_02c78ff0
    MOV EBX,ESI                         ; 0056ff42
    IMUL ECX,EAX,0x1b0                  ; 0056ff44
    INC EAX                             ; 0056ff4a
        ;   Label: LAB_0056ff4a
    CMP EAX,0x40                        ; 0056ff4b
    JL 0x0056ff52                       ; 0056ff4e
        ;   XREF to: 0056ff52 (CONDITIONAL_JUMP)  ; LAB_0056ff52
    MOV EAX,ESI                         ; 0056ff50
    IMUL EDX,EAX,0x1b0                  ; 0056ff52
        ;   Label: LAB_0056ff52
    CMP ESI,dword ptr [EDX + 0x2c79148] ; 0056ff58 | g_SfxSamples[0].ref_count | g_SfxSamples[1].ref_count
    JZ 0x0056ffa4                       ; 0056ff5e
        ;   XREF to: 0056ffa4 (CONDITIONAL_JUMP)  ; LAB_0056ffa4
    INC EBX                             ; 0056ff60
        ;   Label: LAB_0056ff60
    CMP EBX,0x40                        ; 0056ff61
    JL 0x0056ff4a                       ; 0056ff64
        ;   XREF to: 0056ff4a (CONDITIONAL_JUMP)  ; LAB_0056ff4a
    CMP EBX,0x40                        ; 0056ff66
        ;   Label: LAB_0056ff66
    JL 0x0056ff23                       ; 0056ff69
        ;   XREF to: 0056ff23 (CONDITIONAL_JUMP)  ; LAB_0056ff23
    PUSH 0x5f312c                       ; 0056ff6b | s_allocateHwSample_failed_005f312b+1
    CALL sound_sndmain.cpp_FUN_005773f0 ; 0056ff70
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 0056ff75
    XOR EAX,EAX                         ; 0056ff78
        ;   Label: LAB_0056ff78
    MOV dword ptr [EBP + 0x158],EAX     ; 0056ff7a
        ;   Label: LAB_0056ff7a
    TEST EAX,EAX                        ; 0056ff80
    JNZ 0x00570004                      ; 0056ff82
        ;   XREF to: 00570004 (CONDITIONAL_JUMP)  ; LAB_00570004
    ADD ESP,0x2a0                       ; 0056ff88
        ;   Label: LAB_0056ff88
    POP EBP                             ; 0056ff8e
    POP EDI                             ; 0056ff8f
    POP ESI                             ; 0056ff90
    POP EBX                             ; 0056ff91
    RET                                 ; 0056ff92
    PUSH 0x5f32a8                       ; 0056ff93 | s_Atried_to_use_Yamaha_WAV_005f32a7+1
        ;   Label: LAB_0056ff93
    CALL sound_sndmain.cpp_FUN_005773f0 ; 0056ff98
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 0056ff9d
    XOR EAX,EAX                         ; 0056ffa0
    JMP 0x0056ff88                      ; 0056ffa2
        ;   XREF to: 0056ff88 (UNCONDITIONAL_JUMP)  ; LAB_0056ff88
    CMP ESI,dword ptr [EDX + 0x2c7914c] ; 0056ffa4 | g_SfxSamples[1].buffer_id
        ;   Label: LAB_0056ffa4
    JZ 0x0056ff60                       ; 0056ffaa
        ;   XREF to: 0056ff60 (CONDITIONAL_JUMP)  ; LAB_0056ff60
    CMP ESI,dword ptr [EDX + 0x2c79144] ; 0056ffac | g_SfxSamples[1].taken
    JNZ 0x0056ff60                      ; 0056ffb2
        ;   XREF to: 0056ff60 (CONDITIONAL_JUMP)  ; LAB_0056ff60
    CMP ESI,dword ptr [EDX + 0x2c79150] ; 0056ffb4 | g_SfxSamples[1].is_user_sample
    JNZ 0x0056ff60                      ; 0056ffba
        ;   XREF to: 0056ff60 (CONDITIONAL_JUMP)  ; LAB_0056ff60
    CMP ESI,dword ptr [ECX + 0x2c791a0] ; 0056ffbc
    JNZ 0x0056ff60                      ; 0056ffc2
        ;   XREF to: 0056ff60 (CONDITIONAL_JUMP)  ; LAB_0056ff60
    ADD EDX,0x2c78ff4                   ; 0056ffc4
    PUSH EDX                            ; 0056ffca
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020 ; 0056ffcb
        ;   XREF to: 00570020 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 0056ffd0
    JMP 0x0056ff66                      ; 0056ffd3
        ;   XREF to: 0056ff66 (UNCONDITIONAL_JUMP)  ; LAB_0056ff66
    MOV ECX,dword ptr [EBP + 0x168]     ; 0056ffd5
        ;   Label: LAB_0056ffd5
    PUSH ECX                            ; 0056ffdb
    CALL sound_sndmain.cpp_FUN_0056dfd0 ; 0056ffdc
        ;   XREF to: 0056dfd0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_0056dfd0(int requested_bytes)
    ADD ESP,0x4                         ; 0056ffe1
    MOV EBX,dword ptr [EBP + 0x168]     ; 0056ffe4
    PUSH EBX                            ; 0056ffea
    MOV ESI,dword ptr [EBP + 0x120]     ; 0056ffeb
    PUSH ESI                            ; 0056fff1
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 0056fff2
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 0056fff7
    TEST EAX,EAX                        ; 0056fffa
    JZ 0x0056ff88                       ; 0056fffc
        ;   XREF to: 0056ff88 (CONDITIONAL_JUMP)  ; LAB_0056ff88
    MOV dword ptr [EBP + 0x120],EAX     ; 0056fffe
    MOV EAX,0x1                         ; 00570004
        ;   Label: LAB_00570004
    ADD ESP,0x2a0                       ; 00570009
    POP EBP                             ; 0057000f
    POP EDI                             ; 00570010
    POP ESI                             ; 00570011
    POP EBX                             ; 00570012
    RET                                 ; 00570013

