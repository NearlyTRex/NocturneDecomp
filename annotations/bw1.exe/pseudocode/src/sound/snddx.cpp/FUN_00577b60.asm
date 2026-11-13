; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_FUN_00577b60(int *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005f4c35
;   undefined4 s_Position_secondary_buffe_005f4cb2+1
;   TerminatedCString s_Play_the_secondary_buffe_005f4cd2
;   undefined4 DAT_005f4cef
;   undefined4 DAT_02c81d9c
;   undefined4 DAT_02c81da8
;   undefined4 DAT_02c81dac
;   undefined4 DAT_02c81db0
;   undefined4 DAT_02c81db4
;   undefined4 DAT_02c81db8
;   undefined4 DAT_02c81dbc
;   undefined4 DAT_02c81dc0
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005bfb40
;   sound_snddx.cpp_fillStreamBuffer_FUN_005776b0
;   sound_snddx.cpp_FUN_00577500
;   sound_sndmain.cpp_logSoundError_FUN_005773f0
;   sound_sndmain.cpp_startSoundThread_FUN_00575c00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577b60
        ;   Label: sound_snddx.cpp_FUN_00577b60
    PUSH ESI                            ; 00577b61
    PUSH EBP                            ; 00577b62
    SUB ESP,0x324                       ; 00577b63
    CMP dword ptr [0x02c81d9c],0x0      ; 00577b69 | DAT_02c81d9c
    JZ 0x00577c82                       ; 00577b70
        ;   XREF to: 00577c82 (CONDITIONAL_JUMP)  ; LAB_00577c82
    FILD dword ptr [0x02c81db4]         ; 00577b76 | DAT_02c81db4
    FILD dword ptr [0x02c81dac]         ; 00577b7c | DAT_02c81dac
    FDIVP                               ; 00577b82
    MOV EAX,[0x02c81da8]                ; 00577b84 | DAT_02c81da8
    MOV EDX,EAX                         ; 00577b89
    SAR EDX,0x1f                        ; 00577b8b
    SHL EDX,0x3                         ; 00577b8e
    SBB EAX,EDX                         ; 00577b91
    SAR EAX,0x3                         ; 00577b93
    IMUL EAX,dword ptr [0x02c81db4]     ; 00577b96 | DAT_02c81db4
    MOV EBX,dword ptr [0x02c81db0]      ; 00577b9d | DAT_02c81db0
    IMUL EAX,EBX                        ; 00577ba3
    FMUL float ptr [0x005f4cef]         ; 00577ba6 | DAT_005f4cef
    MOV ESI,dword ptr [0x02c81dbc]      ; 00577bac | DAT_02c81dbc
    FSTP float ptr [ESP + 0x320]        ; 00577bb2
    XOR EBX,EBX                         ; 00577bb9
    MOV [0x02c81db8],EAX                ; 00577bbb | DAT_02c81db8
    MOV dword ptr [0x02c81dc0],EBX      ; 00577bc0 | DAT_02c81dc0
    TEST ESI,ESI                        ; 00577bc6
    JLE 0x00577be2                      ; 00577bc8
        ;   XREF to: 00577be2 (CONDITIONAL_JUMP)  ; LAB_00577be2
    CALL sound_snddx.cpp_fillStreamBuffer_FUN_005776b0 ; 00577bca
        ;   XREF to: 005776b0 (UNCONDITIONAL_CALL)  ; int sound_snddx.cpp_fillStreamBuffer_FUN_005776b0()
        ;   Label: LAB_00577bca
    TEST EAX,EAX                        ; 00577bcf
    JZ 0x00577c5f                       ; 00577bd1
        ;   XREF to: 00577c5f (CONDITIONAL_JUMP)  ; LAB_00577c5f
    MOV EBP,dword ptr [0x02c81dbc]      ; 00577bd7 | DAT_02c81dbc
    INC EBX                             ; 00577bdd
    CMP EBX,EBP                         ; 00577bde
    JL 0x00577bca                       ; 00577be0
        ;   XREF to: 00577bca (CONDITIONAL_JUMP)  ; LAB_00577bca
    PUSH dword ptr [ESP + 0x320]        ; 00577be2
        ;   Label: LAB_00577be2
    CALL sound_sndmain.cpp_startSoundThread_FUN_00575c00 ; 00577be9
        ;   XREF to: 00575c00 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_startSoundThread_FUN_00575c00(double latency_seconds)
    ADD ESP,0x4                         ; 00577bee
    TEST EAX,EAX                        ; 00577bf1
    JZ 0x00577c5f                       ; 00577bf3
        ;   XREF to: 00577c5f (CONDITIONAL_JUMP)  ; LAB_00577c5f
    MOV EAX,[0x02c81d9c]                ; 00577bf5 | DAT_02c81d9c
    TEST EAX,EAX                        ; 00577bfa
    JZ 0x00577cb7                       ; 00577bfc
        ;   XREF to: 00577cb7 (CONDITIONAL_JUMP)  ; LAB_00577cb7
    PUSH 0x0                            ; 00577c02
    MOV EBX,dword ptr [EAX]             ; 00577c04
    PUSH EAX                            ; 00577c06
    CALL dword ptr [EBX + 0x34]         ; 00577c07
    TEST EAX,EAX                        ; 00577c0a
    JNZ 0x00577c92                      ; 00577c0c
        ;   XREF to: 00577c92 (CONDITIONAL_JUMP)  ; LAB_00577c92
    PUSH 0x1                            ; 00577c12
    PUSH 0x0                            ; 00577c14
    MOV EAX,[0x02c81d9c]                ; 00577c16 | DAT_02c81d9c
    PUSH 0x0                            ; 00577c1b
    MOV EBX,dword ptr [EAX]             ; 00577c1d
    PUSH EAX                            ; 00577c1f
    CALL dword ptr [EBX + 0x30]         ; 00577c20
    TEST EAX,EAX                        ; 00577c23
    JZ 0x00577cb7                       ; 00577c25
        ;   XREF to: 00577cb7 (CONDITIONAL_JUMP)  ; LAB_00577cb7
    PUSH EAX                            ; 00577c2b
    CALL sound_snddx.cpp_FUN_00577500   ; 00577c2c
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00577500(uint error_code)
    ADD ESP,0x4                         ; 00577c31
    PUSH EAX                            ; 00577c34
    PUSH 0x5f4cd2                       ; 00577c35 | = "Play the secondary buffer"
    PUSH 0x5f4c35                       ; 00577c3a | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 00577c3f
    PUSH EAX                            ; 00577c46
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00577c47
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 00577c4c
    LEA EAX,[ESP + 0x190]               ; 00577c4f
    PUSH EAX                            ; 00577c56
        ;   Label: LAB_00577c56
    CALL sound_sndmain.cpp_logSoundError_FUN_005773f0 ; 00577c57
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005773f0(char * format)
    ADD ESP,0x4                         ; 00577c5c
    MOV EDX,dword ptr [ESP + 0x334]     ; 00577c5f
        ;   Label: LAB_00577c5f
    MOV EAX,dword ptr [ESP + 0x334]     ; 00577c66
    PUSH EDX                            ; 00577c6d
    MOV EAX,dword ptr [EAX]             ; 00577c6e
    CALL dword ptr [EAX + 0x8]          ; 00577c70
    ADD ESP,0x4                         ; 00577c73
    XOR EAX,EAX                         ; 00577c76
    ADD ESP,0x324                       ; 00577c78
    POP EBP                             ; 00577c7e
    POP ESI                             ; 00577c7f
    POP EBX                             ; 00577c80
    RET                                 ; 00577c81
    MOV dword ptr [ESP + 0x320],0x3dcccccd ; 00577c82
        ;   Label: LAB_00577c82
    JMP 0x00577be2                      ; 00577c8d
        ;   XREF to: 00577be2 (UNCONDITIONAL_JUMP)  ; LAB_00577be2
    PUSH EAX                            ; 00577c92
        ;   Label: LAB_00577c92
    CALL sound_snddx.cpp_FUN_00577500   ; 00577c93
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00577500(uint error_code)
    ADD ESP,0x4                         ; 00577c98
    PUSH EAX                            ; 00577c9b
    PUSH 0x5f4cb3                       ; 00577c9c | s_Position_secondary_buffe_005f4cb2+1
    PUSH 0x5f4c35                       ; 00577ca1 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00577ca6
    PUSH EAX                            ; 00577caa
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00577cab
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 00577cb0
    MOV EAX,ESP                         ; 00577cb3
    JMP 0x00577c56                      ; 00577cb5
        ;   XREF to: 00577c56 (UNCONDITIONAL_JUMP)  ; LAB_00577c56
    MOV EAX,0x1                         ; 00577cb7
        ;   Label: LAB_00577cb7
    ADD ESP,0x324                       ; 00577cbc
    POP EBP                             ; 00577cc2
    POP ESI                             ; 00577cc3
    POP EBX                             ; 00577cc4
    RET                                 ; 00577cc5

