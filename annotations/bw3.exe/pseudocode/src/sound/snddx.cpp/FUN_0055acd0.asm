; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_FUN_0055acd0(int *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005d452f
;   undefined4 s_Position_secondary_buffe_005d45ac+1
;   TerminatedCString s_Play_the_secondary_buffe_005d45cc
;   undefined4 DAT_005d45e9
;   undefined4 DAT_02cf49cc
;   undefined4 DAT_02cf49d8
;   undefined4 DAT_02cf49dc
;   undefined4 DAT_02cf49e0
;   undefined4 DAT_02cf49e4
;   undefined4 DAT_02cf49e8
;   undefined4 DAT_02cf49ec
;   undefined4 DAT_02cf49f0
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005a28c0
;   sound_snddx.cpp_fillStreamBuffer_FUN_0055a820
;   sound_snddx.cpp_FUN_0055a670
;   sound_sndmain.cpp_FUN_0055a560
;   sound_sndmain.cpp_startSoundThread_FUN_00558d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055acd0
        ;   Label: sound_snddx.cpp_FUN_0055acd0
    PUSH ESI                            ; 0055acd1
    PUSH EBP                            ; 0055acd2
    SUB ESP,0x324                       ; 0055acd3
    CMP dword ptr [0x02cf49cc],0x0      ; 0055acd9 | DAT_02cf49cc
    JZ 0x0055adf2                       ; 0055ace0
        ;   XREF to: 0055adf2 (CONDITIONAL_JUMP)  ; LAB_0055adf2
    FILD dword ptr [0x02cf49e4]         ; 0055ace6 | DAT_02cf49e4
    FILD dword ptr [0x02cf49dc]         ; 0055acec | DAT_02cf49dc
    FDIVP                               ; 0055acf2
    MOV EAX,[0x02cf49d8]                ; 0055acf4 | DAT_02cf49d8
    MOV EDX,EAX                         ; 0055acf9
    SAR EDX,0x1f                        ; 0055acfb
    SHL EDX,0x3                         ; 0055acfe
    SBB EAX,EDX                         ; 0055ad01
    SAR EAX,0x3                         ; 0055ad03
    IMUL EAX,dword ptr [0x02cf49e4]     ; 0055ad06 | DAT_02cf49e4
    MOV EBX,dword ptr [0x02cf49e0]      ; 0055ad0d | DAT_02cf49e0
    IMUL EAX,EBX                        ; 0055ad13
    FMUL float ptr [0x005d45e9]         ; 0055ad16 | DAT_005d45e9
    MOV ESI,dword ptr [0x02cf49ec]      ; 0055ad1c | DAT_02cf49ec
    FSTP float ptr [ESP + 0x320]        ; 0055ad22
    XOR EBX,EBX                         ; 0055ad29
    MOV [0x02cf49e8],EAX                ; 0055ad2b | DAT_02cf49e8
    MOV dword ptr [0x02cf49f0],EBX      ; 0055ad30 | DAT_02cf49f0
    TEST ESI,ESI                        ; 0055ad36
    JLE 0x0055ad52                      ; 0055ad38
        ;   XREF to: 0055ad52 (CONDITIONAL_JUMP)  ; LAB_0055ad52
    CALL sound_snddx.cpp_fillStreamBuffer_FUN_0055a820 ; 0055ad3a
        ;   XREF to: 0055a820 (UNCONDITIONAL_CALL)  ; int sound_snddx.cpp_fillStreamBuffer_FUN_0055a820()
        ;   Label: LAB_0055ad3a
    TEST EAX,EAX                        ; 0055ad3f
    JZ 0x0055adcf                       ; 0055ad41
        ;   XREF to: 0055adcf (CONDITIONAL_JUMP)  ; LAB_0055adcf
    MOV EBP,dword ptr [0x02cf49ec]      ; 0055ad47 | DAT_02cf49ec
    INC EBX                             ; 0055ad4d
    CMP EBX,EBP                         ; 0055ad4e
    JL 0x0055ad3a                       ; 0055ad50
        ;   XREF to: 0055ad3a (CONDITIONAL_JUMP)  ; LAB_0055ad3a
    PUSH dword ptr [ESP + 0x320]        ; 0055ad52
        ;   Label: LAB_0055ad52
    CALL sound_sndmain.cpp_startSoundThread_FUN_00558d70 ; 0055ad59
        ;   XREF to: 00558d70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_startSoundThread_FUN_00558d70()
    ADD ESP,0x4                         ; 0055ad5e
    TEST EAX,EAX                        ; 0055ad61
    JZ 0x0055adcf                       ; 0055ad63
        ;   XREF to: 0055adcf (CONDITIONAL_JUMP)  ; LAB_0055adcf
    MOV EAX,[0x02cf49cc]                ; 0055ad65 | DAT_02cf49cc
    TEST EAX,EAX                        ; 0055ad6a
    JZ 0x0055ae27                       ; 0055ad6c
        ;   XREF to: 0055ae27 (CONDITIONAL_JUMP)  ; LAB_0055ae27
    PUSH 0x0                            ; 0055ad72
    MOV EBX,dword ptr [EAX]             ; 0055ad74
    PUSH EAX                            ; 0055ad76
    CALL dword ptr [EBX + 0x34]         ; 0055ad77
    TEST EAX,EAX                        ; 0055ad7a
    JNZ 0x0055ae02                      ; 0055ad7c
        ;   XREF to: 0055ae02 (CONDITIONAL_JUMP)  ; LAB_0055ae02
    PUSH 0x1                            ; 0055ad82
    PUSH 0x0                            ; 0055ad84
    MOV EAX,[0x02cf49cc]                ; 0055ad86 | DAT_02cf49cc
    PUSH 0x0                            ; 0055ad8b
    MOV EBX,dword ptr [EAX]             ; 0055ad8d
    PUSH EAX                            ; 0055ad8f
    CALL dword ptr [EBX + 0x30]         ; 0055ad90
    TEST EAX,EAX                        ; 0055ad93
    JZ 0x0055ae27                       ; 0055ad95
        ;   XREF to: 0055ae27 (CONDITIONAL_JUMP)  ; LAB_0055ae27
    PUSH EAX                            ; 0055ad9b
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055ad9c
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055ada1
    PUSH EAX                            ; 0055ada4
    PUSH 0x5d45cc                       ; 0055ada5 | = "Play the secondary buffer"
    PUSH 0x5d452f                       ; 0055adaa | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 0055adaf
    PUSH EAX                            ; 0055adb6
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055adb7
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055adbc
    LEA EAX,[ESP + 0x190]               ; 0055adbf
    PUSH EAX                            ; 0055adc6
        ;   Label: LAB_0055adc6
    CALL sound_sndmain.cpp_FUN_0055a560 ; 0055adc7
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0055a560()
    ADD ESP,0x4                         ; 0055adcc
    MOV EDX,dword ptr [ESP + 0x334]     ; 0055adcf
        ;   Label: LAB_0055adcf
    MOV EAX,dword ptr [ESP + 0x334]     ; 0055add6
    PUSH EDX                            ; 0055addd
    MOV EAX,dword ptr [EAX]             ; 0055adde
    CALL dword ptr [EAX + 0x8]          ; 0055ade0
    ADD ESP,0x4                         ; 0055ade3
    XOR EAX,EAX                         ; 0055ade6
    ADD ESP,0x324                       ; 0055ade8
    POP EBP                             ; 0055adee
    POP ESI                             ; 0055adef
    POP EBX                             ; 0055adf0
    RET                                 ; 0055adf1
    MOV dword ptr [ESP + 0x320],0x3dcccccd ; 0055adf2
        ;   Label: LAB_0055adf2
    JMP 0x0055ad52                      ; 0055adfd
        ;   XREF to: 0055ad52 (UNCONDITIONAL_JUMP)  ; LAB_0055ad52
    PUSH EAX                            ; 0055ae02
        ;   Label: LAB_0055ae02
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055ae03
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055ae08
    PUSH EAX                            ; 0055ae0b
    PUSH 0x5d45ad                       ; 0055ae0c | s_Position_secondary_buffe_005d45ac+1
    PUSH 0x5d452f                       ; 0055ae11 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0055ae16
    PUSH EAX                            ; 0055ae1a
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055ae1b
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055ae20
    MOV EAX,ESP                         ; 0055ae23
    JMP 0x0055adc6                      ; 0055ae25
        ;   XREF to: 0055adc6 (UNCONDITIONAL_JUMP)  ; LAB_0055adc6
    MOV EAX,0x1                         ; 0055ae27
        ;   Label: LAB_0055ae27
    ADD ESP,0x324                       ; 0055ae2c
    POP EBP                             ; 0055ae32
    POP ESI                             ; 0055ae33
    POP EBX                             ; 0055ae34
    RET                                 ; 0055ae35

