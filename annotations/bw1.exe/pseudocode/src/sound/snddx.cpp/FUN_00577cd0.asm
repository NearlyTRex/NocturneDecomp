; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_FUN_00577cd0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005f4c35
;   undefined4 s_Stop_secondary_sound_buf_005f4cf2+1
;   TerminatedCString s_Stop_primary_sound_buffe_005f4d0f
;   undefined4 DAT_02c81d98
;   undefined4 DAT_02c81d9c
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005bfb40
;   sound_snddx.cpp_FUN_00577500
;   sound_snddx.cpp_FUN_00577880
;   sound_sndmain.cpp_FUN_005773f0
;   sound_sndmain.cpp_killSoundThread_FUN_00575ca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577cd0
        ;   Label: sound_snddx.cpp_FUN_00577cd0
    PUSH ESI                            ; 00577cd1
    SUB ESP,0x320                       ; 00577cd2
    MOV EDX,dword ptr [0x02c81d9c]      ; 00577cd8 | DAT_02c81d9c
    MOV ESI,0x1                         ; 00577cde
    TEST EDX,EDX                        ; 00577ce3
    JNZ 0x00577d26                      ; 00577ce5
        ;   XREF to: 00577d26 (CONDITIONAL_JUMP)  ; LAB_00577d26
    MOV ECX,dword ptr [0x02c81d98]      ; 00577ce7 | DAT_02c81d98
        ;   Label: LAB_00577ce7
    TEST ECX,ECX                        ; 00577ced
    JNZ 0x00577d6b                      ; 00577cef
        ;   XREF to: 00577d6b (CONDITIONAL_JUMP)  ; LAB_00577d6b
    XOR EBX,EBX                         ; 00577cf5
        ;   Label: LAB_00577cf5
    PUSH EBX                            ; 00577cf7
        ;   Label: LAB_00577cf7
    CALL sound_snddx.cpp_FUN_00577880   ; 00577cf8
        ;   XREF to: 00577880 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_FUN_00577880()
    ADD ESP,0x4                         ; 00577cfd
    TEST EAX,EAX                        ; 00577d00
    JZ 0x00577da8                       ; 00577d02
        ;   XREF to: 00577da8 (CONDITIONAL_JUMP)  ; LAB_00577da8
    INC EBX                             ; 00577d08
        ;   Label: LAB_00577d08
    CMP EBX,0x1f                        ; 00577d09
    JL 0x00577cf7                       ; 00577d0c
        ;   XREF to: 00577cf7 (CONDITIONAL_JUMP)  ; LAB_00577cf7
    CALL sound_sndmain.cpp_killSoundThread_FUN_00575ca0 ; 00577d0e
        ;   XREF to: 00575ca0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSoundThread_FUN_00575ca0()
    TEST EAX,EAX                        ; 00577d13
    JZ 0x00577daf                       ; 00577d15
        ;   XREF to: 00577daf (CONDITIONAL_JUMP)  ; LAB_00577daf
    MOV EAX,ESI                         ; 00577d1b
    ADD ESP,0x320                       ; 00577d1d
    POP ESI                             ; 00577d23
    POP EBX                             ; 00577d24
    RET                                 ; 00577d25
    PUSH EDX                            ; 00577d26
        ;   Label: LAB_00577d26
    MOV EBX,dword ptr [EDX]             ; 00577d27
    CALL dword ptr [EBX + 0x48]         ; 00577d29
    TEST EAX,EAX                        ; 00577d2c
    JZ 0x00577ce7                       ; 00577d2e
        ;   XREF to: 00577ce7 (CONDITIONAL_JUMP)  ; LAB_00577ce7
    PUSH EAX                            ; 00577d30
    CALL sound_snddx.cpp_FUN_00577500   ; 00577d31
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00577500(uint error_code)
    ADD ESP,0x4                         ; 00577d36
    PUSH EAX                            ; 00577d39
    PUSH 0x5f4cf3                       ; 00577d3a | s_Stop_secondary_sound_buf_005f4cf2+1
    PUSH 0x5f4c35                       ; 00577d3f | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 00577d44
    PUSH EAX                            ; 00577d4b
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00577d4c
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 00577d51
    LEA EAX,[ESP + 0x190]               ; 00577d54
    PUSH EAX                            ; 00577d5b
    XOR ESI,ESI                         ; 00577d5c
    CALL sound_sndmain.cpp_FUN_005773f0 ; 00577d5e
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 00577d63
    JMP 0x00577ce7                      ; 00577d66
        ;   XREF to: 00577ce7 (UNCONDITIONAL_JUMP)  ; LAB_00577ce7
    PUSH ECX                            ; 00577d6b
        ;   Label: LAB_00577d6b
    MOV EBX,dword ptr [ECX]             ; 00577d6c
    CALL dword ptr [EBX + 0x48]         ; 00577d6e
    TEST EAX,EAX                        ; 00577d71
    JZ 0x00577cf5                       ; 00577d73
        ;   XREF to: 00577cf5 (CONDITIONAL_JUMP)  ; LAB_00577cf5
    PUSH EAX                            ; 00577d75
    CALL sound_snddx.cpp_FUN_00577500   ; 00577d76
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00577500(uint error_code)
    ADD ESP,0x4                         ; 00577d7b
    PUSH EAX                            ; 00577d7e
    PUSH 0x5f4d0f                       ; 00577d7f | = "Stop primary sound buffer"
    PUSH 0x5f4c35                       ; 00577d84 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00577d89
    PUSH EAX                            ; 00577d8d
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00577d8e
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 00577d93
    MOV EAX,ESP                         ; 00577d96
    PUSH EAX                            ; 00577d98
    XOR ESI,ESI                         ; 00577d99
    CALL sound_sndmain.cpp_FUN_005773f0 ; 00577d9b
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 00577da0
    JMP 0x00577cf5                      ; 00577da3
        ;   XREF to: 00577cf5 (UNCONDITIONAL_JUMP)  ; LAB_00577cf5
    XOR ESI,ESI                         ; 00577da8
        ;   Label: LAB_00577da8
    JMP 0x00577d08                      ; 00577daa
        ;   XREF to: 00577d08 (UNCONDITIONAL_JUMP)  ; LAB_00577d08
    XOR ESI,ESI                         ; 00577daf
        ;   Label: LAB_00577daf
    MOV EAX,ESI                         ; 00577db1
    ADD ESP,0x320                       ; 00577db3
    POP ESI                             ; 00577db9
    POP EBX                             ; 00577dba
    RET                                 ; 00577dbb

