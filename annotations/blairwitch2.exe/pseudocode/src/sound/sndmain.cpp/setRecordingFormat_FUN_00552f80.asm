; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_setRecordingFormat_FUN_00552f80(int bits_per_sample,int channels,int sample_rate,int signed_samples)
;
; Parameters:
; int              Stack[0x4]:4   bits_per_sample
; int              Stack[0x8]:4   channels
; int              Stack[0xc]:4   sample_rate
; int              Stack[0x10]:4   signed_samples
;
; XREF[1]:
;   sound_sndmain.cpp_startRecording_FUN_00553070 at 005530b0
;
; Referenced Globals:
;   undefined4 DAT_0061bcd0
;   undefined4 DAT_0061bcd4
;   undefined4 DAT_0061bcd8
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02649868
;   undefined4 DAT_02649870
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   sound_sndmain.cpp_isRecordingStarted_FUN_00552f60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552f80
        ;   Label: sound_sndmain.cpp_setRecordingFormat_FUN_00552f80
    PUSH ESI                            ; 00552f81
    PUSH EDI                            ; 00552f82
    PUSH EBP                            ; 00552f83
    CALL sound_sndmain.cpp_isRecordingStarted_FUN_00552f60 ; 00552f84
        ;   XREF to: 00552f60 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isRecordingStarted_FUN_00552f60()
    TEST EAX,EAX                        ; 00552f89
    JNZ 0x00552fcf                      ; 00552f8b
        ;   XREF to: 00552fcf (CONDITIONAL_JUMP)  ; LAB_00552fcf
    MOV EAX,dword ptr [ESP + 0x14]      ; 00552f8d
        ;   Label: LAB_00552f8d
    MOV [0x0061bcd0],EAX                ; 00552f91 | DAT_0061bcd0
    MOV EAX,dword ptr [ESP + 0x18]      ; 00552f96
    MOV [0x0061bcd4],EAX                ; 00552f9a | DAT_0061bcd4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00552f9f
    MOV EBX,dword ptr [ESP + 0x20]      ; 00552fa3
    MOV [0x0061bcd8],EAX                ; 00552fa7 | DAT_0061bcd8
    TEST EBX,EBX                        ; 00552fac
    SETNZ AL                            ; 00552fae
    AND EAX,0xff                        ; 00552fb1
    MOV ESI,dword ptr [0x02649868]      ; 00552fb6 | DAT_02649868
    MOV [0x02649870],EAX                ; 00552fbc | DAT_02649870
    TEST ESI,ESI                        ; 00552fc1
    JNZ 0x00552ff4                      ; 00552fc3
        ;   XREF to: 00552ff4 (CONDITIONAL_JUMP)  ; LAB_00552ff4
    MOV EAX,0x1                         ; 00552fc5
        ;   Label: LAB_00552fc5
    POP EBP                             ; 00552fca
    POP EDI                             ; 00552fcb
    POP ESI                             ; 00552fcc
    POP EBX                             ; 00552fcd
    RET                                 ; 00552fce
    MOV EDX,0x5e914d                    ; 00552fcf
        ;   Label: LAB_00552fcf
    MOV ECX,0x16f6                      ; 00552fd4
    PUSH 0x5e9162                       ; 00552fd9
    MOV dword ptr [0x01d046a0],EDX      ; 00552fde | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00552fe4 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00552fea
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00552fef
    JMP 0x00552f8d                      ; 00552ff2
        ;   XREF to: 00552f8d (UNCONDITIONAL_JUMP)  ; LAB_00552f8d
    PUSH EAX                            ; 00552ff4
        ;   Label: LAB_00552ff4
    MOV EDI,dword ptr [0x0061bcd8]      ; 00552ff5 | DAT_0061bcd8
    PUSH EDI                            ; 00552ffb
    MOV EBP,dword ptr [0x0061bcd4]      ; 00552ffc | DAT_0061bcd4
    PUSH EBP                            ; 00553002
    MOV EAX,[0x0061bcd0]                ; 00553003 | DAT_0061bcd0
    PUSH EAX                            ; 00553008
    MOV ECX,dword ptr [ESI]             ; 00553009
    PUSH ESI                            ; 0055300b
    CALL dword ptr [ECX + 0xc]          ; 0055300c
    ADD ESP,0x14                        ; 0055300f
    TEST EAX,EAX                        ; 00553012
    JNZ 0x00552fc5                      ; 00553014
        ;   XREF to: 00552fc5 (CONDITIONAL_JUMP)  ; LAB_00552fc5
    POP EBP                             ; 00553016
    POP EDI                             ; 00553017
    POP ESI                             ; 00553018
    POP EBX                             ; 00553019
    RET                                 ; 0055301a

