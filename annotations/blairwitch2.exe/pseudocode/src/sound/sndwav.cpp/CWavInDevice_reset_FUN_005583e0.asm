; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndwav_cpp_CWavInDevice_reset_FUN_005583e0(CWavInDevice *this_ptr)
;
; Parameters:
; CWavInDevice *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   void* PTR_waveInReset_005c8464 = 001c8982
;   void* PTR_waveInUnprepareHeader_005c846c = 001c899e
;   TerminatedCString s_waveInReset_failed_005ea650
;   undefined4 DAT_0264b108
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005549c0
;   waveInReset
;   waveInUnprepareHeader
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005583e0
        ;   Label: sound_sndwav.cpp_CWavInDevice_reset_FUN_005583e0
    PUSH ESI                            ; 005583e1
    PUSH EDI                            ; 005583e2
    MOV EDX,dword ptr [0x0264b108]      ; 005583e3 | DAT_0264b108
    MOV ESI,0x1                         ; 005583e9
    TEST EDX,EDX                        ; 005583ee
    JNZ 0x0055841c                      ; 005583f0
        ;   XREF to: 0055841c (CONDITIONAL_JUMP)  ; LAB_0055841c
    XOR EBX,EBX                         ; 005583f2
        ;   Label: LAB_005583f2
    MOV EDI,dword ptr [EBX + 0x264b15c] ; 005583f4
        ;   Label: LAB_005583f4
    TEST EDI,EDI                        ; 005583fa
    JZ 0x0055840e                       ; 005583fc
        ;   XREF to: 0055840e (CONDITIONAL_JUMP)  ; LAB_0055840e
    PUSH 0x20                           ; 005583fe
    PUSH EDI                            ; 00558400
    MOV EAX,[0x0264b108]                ; 00558401 | DAT_0264b108
    PUSH EAX                            ; 00558406
    CALL dword ptr CS:[0x5c846c]        ; 00558407 | PTR_waveInUnprepareHeader_005c846c
    ADD EBX,0x4                         ; 0055840e
        ;   Label: LAB_0055840e
    CMP EBX,0x50                        ; 00558411
    JNZ 0x005583f4                      ; 00558414
        ;   XREF to: 005583f4 (CONDITIONAL_JUMP)  ; LAB_005583f4
    MOV EAX,ESI                         ; 00558416
    POP EDI                             ; 00558418
    POP ESI                             ; 00558419
    POP EBX                             ; 0055841a
    RET                                 ; 0055841b
    PUSH EDX                            ; 0055841c
        ;   Label: LAB_0055841c
    CALL dword ptr CS:[0x5c8464]        ; 0055841d | PTR_waveInReset_005c8464
    TEST EAX,EAX                        ; 00558424
    JZ 0x005583f2                       ; 00558426
        ;   XREF to: 005583f2 (CONDITIONAL_JUMP)  ; LAB_005583f2
    PUSH 0x5ea650                       ; 00558428 | = "waveInReset failed!"
    CALL sound_sndmain.cpp_FUN_005549c0 ; 0055842d
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    XOR ESI,ESI                         ; 00558432
    ADD ESP,0x4                         ; 00558434
    JMP 0x005583f2                      ; 00558437
        ;   XREF to: 005583f2 (UNCONDITIONAL_JUMP)  ; LAB_005583f2

