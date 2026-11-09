; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_writeWavInBuffer_FUN_0057abc0(int buffer_index)
;
; Parameters:
; int              Stack[0x4]:4   buffer_index
;
; XREF[2]:
;   sound_sndwav.cpp_CWavInDevice_poll_FUN_0057b1e0 at 0057b337
;   sound_sndwav.cpp_CWavInDevice_start_FUN_0057ad20 at 0057ad8a
;
; Referenced Globals:
;   void* PTR_waveInAddBuffer_005d045c = 001d0942
;   void* PTR_waveInPrepareHeader_005d046c = 001d0984
;   TerminatedCString s_waveOutPrepareHeader_fai_005f57f0
;   TerminatedCString s_waveOutWrite_failed_005f580d
;   undefined4 DAT_02c828d8
;   undefined4 DAT_02c82a1c
;   undefined4 DAT_02c82a20
;   undefined4 DAT_02c82a2c
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005773f0
;   waveInAddBuffer
;   waveInPrepareHeader
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057abc0
        ;   Label: sound_sndwav.cpp_writeWavInBuffer_FUN_0057abc0
    PUSH EDI                            ; 0057abc1
    PUSH EBP                            ; 0057abc2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0057abc3
    SHL EBX,0x2                         ; 0057abc7
    CMP dword ptr [EBX + 0x2c829cc],0x0 ; 0057abca
    JZ 0x0057abdd                       ; 0057abd1
        ;   XREF to: 0057abdd (CONDITIONAL_JUMP)  ; LAB_0057abdd
    MOV ECX,dword ptr [EBX + 0x2c8292c] ; 0057abd3
    TEST ECX,ECX                        ; 0057abd9
    JNZ 0x0057abe3                      ; 0057abdb
        ;   XREF to: 0057abe3 (CONDITIONAL_JUMP)  ; LAB_0057abe3
    XOR EAX,EAX                         ; 0057abdd
        ;   Label: LAB_0057abdd
    POP EBP                             ; 0057abdf
    POP EDI                             ; 0057abe0
    POP EBX                             ; 0057abe1
    RET                                 ; 0057abe2
    MOV EAX,[0x02c82a1c]                ; 0057abe3 | DAT_02c82a1c
        ;   Label: LAB_0057abe3
    MOV EDX,EAX                         ; 0057abe8
    SAR EDX,0x1f                        ; 0057abea
    SHL EDX,0x3                         ; 0057abed
    SBB EAX,EDX                         ; 0057abf0
    SAR EAX,0x3                         ; 0057abf2
    IMUL EAX,dword ptr [0x02c82a2c]     ; 0057abf5 | DAT_02c82a2c
    MOV EDX,dword ptr [0x02c82a20]      ; 0057abfc | DAT_02c82a20
    IMUL EDX,EAX                        ; 0057ac02
    MOV dword ptr [ECX + 0x4],EDX       ; 0057ac05
    PUSH 0x20                           ; 0057ac08
    MOV EDI,dword ptr [EBX + 0x2c8292c] ; 0057ac0a
    PUSH EDI                            ; 0057ac10
    MOV EBP,dword ptr [0x02c828d8]      ; 0057ac11 | DAT_02c828d8
    PUSH EBP                            ; 0057ac17
    CALL dword ptr CS:[0x5d046c]        ; 0057ac18 | PTR_waveInPrepareHeader_005d046c
    TEST EAX,EAX                        ; 0057ac1f
    JNZ 0x0057ac47                      ; 0057ac21
        ;   XREF to: 0057ac47 (CONDITIONAL_JUMP)  ; LAB_0057ac47
    PUSH 0x20                           ; 0057ac23
    MOV EAX,dword ptr [EBX + 0x2c8292c] ; 0057ac25
    PUSH EAX                            ; 0057ac2b
    MOV EDX,dword ptr [0x02c828d8]      ; 0057ac2c | DAT_02c828d8
    PUSH EDX                            ; 0057ac32
    CALL dword ptr CS:[0x5d045c]        ; 0057ac33 | PTR_waveInAddBuffer_005d045c
    TEST EAX,EAX                        ; 0057ac3a
    JNZ 0x0057ac5a                      ; 0057ac3c
        ;   XREF to: 0057ac5a (CONDITIONAL_JUMP)  ; LAB_0057ac5a
    MOV EAX,0x1                         ; 0057ac3e
    POP EBP                             ; 0057ac43
    POP EDI                             ; 0057ac44
    POP EBX                             ; 0057ac45
    RET                                 ; 0057ac46
    PUSH 0x5f57f0                       ; 0057ac47 | = "waveOutPrepareHeader failed!"
        ;   Label: LAB_0057ac47
    CALL sound_sndmain.cpp_FUN_005773f0 ; 0057ac4c
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 0057ac51
    XOR EAX,EAX                         ; 0057ac54
    POP EBP                             ; 0057ac56
    POP EDI                             ; 0057ac57
    POP EBX                             ; 0057ac58
    RET                                 ; 0057ac59
    PUSH 0x5f580d                       ; 0057ac5a | = "waveOutWrite failed!"
        ;   Label: LAB_0057ac5a
    CALL sound_sndmain.cpp_FUN_005773f0 ; 0057ac5f
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 0057ac64
    XOR EAX,EAX                         ; 0057ac67
    POP EBP                             ; 0057ac69
    POP EDI                             ; 0057ac6a
    POP EBX                             ; 0057ac6b
    RET                                 ; 0057ac6c

