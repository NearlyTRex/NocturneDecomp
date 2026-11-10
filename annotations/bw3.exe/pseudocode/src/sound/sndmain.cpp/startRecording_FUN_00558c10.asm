; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_startRecording_FUN_00558c10(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0060425c
;   undefined4 DAT_00604260
;   undefined4 DAT_00604264
;   undefined4 DAT_02cf3c68
;   undefined4 DAT_02cf3c6c
;   undefined4 DAT_02cf3c70
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00556fd0
;   sound_sndmain.cpp_isRecordingStarted_FUN_00558b00
;   sound_sndmain.cpp_isRecordingSystemActive_FUN_00558af0
;   sound_sndmain.cpp_lockSound_FUN_00558e90
;   sound_sndmain.cpp_setRecordingFormat_FUN_00558b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558c10
        ;   Label: sound_sndmain.cpp_startRecording_FUN_00558c10
    PUSH ESI                            ; 00558c11
    CALL sound_sndmain.cpp_isRecordingSystemActive_FUN_00558af0 ; 00558c12
        ;   XREF to: 00558af0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isRecordingSystemActive_FUN_00558af0()
    TEST EAX,EAX                        ; 00558c17
    JNZ 0x00558c1e                      ; 00558c19
        ;   XREF to: 00558c1e (CONDITIONAL_JUMP)  ; LAB_00558c1e
    POP ESI                             ; 00558c1b
    POP EBX                             ; 00558c1c
    RET                                 ; 00558c1d
    CALL sound_sndmain.cpp_isRecordingStarted_FUN_00558b00 ; 00558c1e
        ;   XREF to: 00558b00 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isRecordingStarted_FUN_00558b00()
        ;   Label: LAB_00558c1e
    TEST EAX,EAX                        ; 00558c23
    JZ 0x00558c2f                       ; 00558c25
        ;   XREF to: 00558c2f (CONDITIONAL_JUMP)  ; LAB_00558c2f
    MOV EAX,0x1                         ; 00558c27
    POP ESI                             ; 00558c2c
    POP EBX                             ; 00558c2d
    RET                                 ; 00558c2e
    CALL sound_sndmain.cpp_lockSound_FUN_00558e90 ; 00558c2f
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00558e90()
        ;   Label: LAB_00558c2f
    MOV EDX,dword ptr [0x02cf3c70]      ; 00558c34 | DAT_02cf3c70
    PUSH EDX                            ; 00558c3a
    MOV ECX,dword ptr [0x00604264]      ; 00558c3b | DAT_00604264
    PUSH ECX                            ; 00558c41
    MOV EBX,dword ptr [0x00604260]      ; 00558c42 | DAT_00604260
    PUSH EBX                            ; 00558c48
    MOV ESI,dword ptr [0x0060425c]      ; 00558c49 | DAT_0060425c
    PUSH ESI                            ; 00558c4f
    CALL sound_sndmain.cpp_setRecordingFormat_FUN_00558b20 ; 00558c50
        ;   XREF to: 00558b20 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setRecordingFormat_FUN_00558b20(int bits_per_sample, int channels, int sample_rate, int signed_samples)
    ADD ESP,0x10                        ; 00558c55
    TEST EAX,EAX                        ; 00558c58
    JZ 0x00558c85                       ; 00558c5a
        ;   XREF to: 00558c85 (CONDITIONAL_JUMP)  ; LAB_00558c85
    MOV EAX,[0x02cf3c68]                ; 00558c5c | DAT_02cf3c68
    PUSH EAX                            ; 00558c61
    MOV EDX,dword ptr [EAX]             ; 00558c62
    CALL dword ptr [EDX + 0x4]          ; 00558c64
    ADD ESP,0x4                         ; 00558c67
    TEST EAX,EAX                        ; 00558c6a
    JZ 0x00558c85                       ; 00558c6c
        ;   XREF to: 00558c85 (CONDITIONAL_JUMP)  ; LAB_00558c85
    PUSH EDI                            ; 00558c6e
    MOV EDI,0x1                         ; 00558c6f
    MOV dword ptr [0x02cf3c6c],EDI      ; 00558c74 | DAT_02cf3c6c
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 00558c7a
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
    MOV EAX,EDI                         ; 00558c7f
    POP EDI                             ; 00558c81
    POP ESI                             ; 00558c82
    POP EBX                             ; 00558c83
    RET                                 ; 00558c84
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 00558c85
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
        ;   Label: LAB_00558c85
    XOR EAX,EAX                         ; 00558c8a
    POP ESI                             ; 00558c8c
    POP EBX                             ; 00558c8d
    RET                                 ; 00558c8e

