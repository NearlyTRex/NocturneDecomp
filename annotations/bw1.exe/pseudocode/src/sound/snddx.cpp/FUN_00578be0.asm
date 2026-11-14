; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_snddx_cpp_FUN_00578be0(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005f4c35
;   TerminatedCString s_sound_snddx_cpp_005f4e9b
;   TerminatedCString s_DirectSoundDevice_unlock_005f4eae
;   TerminatedCString s_Unlock_hw_sample_buffer_005f4ef0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_sprintf_FUN_005bfb40
;   sound_snddx.cpp_FUN_00577500
;   sound_sndmain.cpp_logSoundError_FUN_005773f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578be0
        ;   Label: sound_snddx.cpp_FUN_00578be0
    PUSH EBP                            ; 00578be1
    SUB ESP,0x190                       ; 00578be2
    MOV EBX,dword ptr [ESP + 0x1a0]     ; 00578be8
    TEST EBX,EBX                        ; 00578bef
    JLE 0x00578bfc                      ; 00578bf1
        ;   XREF to: 00578bfc (CONDITIONAL_JUMP)  ; LAB_00578bfc
    CMP EBX,0x41                        ; 00578bf3
    JL 0x00578c8f                       ; 00578bf6
        ;   XREF to: 00578c8f (CONDITIONAL_JUMP)  ; LAB_00578c8f
    PUSH EDI                            ; 00578bfc
        ;   Label: LAB_00578bfc
    PUSH ESI                            ; 00578bfd
    PUSH EBX                            ; 00578bfe
    MOV ESI,0x5f4e9b                    ; 00578bff | = "..\\sound\\snddx.cpp"
    MOV EDI,0x465                       ; 00578c04
    PUSH 0x5f4eae                       ; 00578c09 | = "DirectSoundDevice::unlockSample - Can..."
    MOV dword ptr [0x01d1d400],ESI      ; 00578c0e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00578c14 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00578c1a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00578c1f
    POP ESI                             ; 00578c22
    POP EDI                             ; 00578c23
    LEA EAX,[EBX*0x4 + 0x0]             ; 00578c24
        ;   Label: LAB_00578c24
    SUB EAX,EBX                         ; 00578c2b
    MOV EBX,0x2c81dc4                   ; 00578c2d
    SHL EAX,0x3                         ; 00578c32
    ADD EBX,EAX                         ; 00578c35
    MOV EBP,dword ptr [EBX + 0x10]      ; 00578c37
    TEST EBP,EBP                        ; 00578c3a
    JZ 0x00578c86                       ; 00578c3c
        ;   XREF to: 00578c86 (CONDITIONAL_JUMP)  ; LAB_00578c86
    PUSH 0x0                            ; 00578c3e
    PUSH 0x0                            ; 00578c40
    MOV ECX,dword ptr [EBX + 0x14]      ; 00578c42
    PUSH ECX                            ; 00578c45
    MOV EAX,dword ptr [EBX]             ; 00578c46
    PUSH EBP                            ; 00578c48
    MOV EDX,dword ptr [EAX]             ; 00578c49
    PUSH EAX                            ; 00578c4b
    CALL dword ptr [EDX + 0x4c]         ; 00578c4c
    TEST EAX,EAX                        ; 00578c4f
    JZ 0x00578c7f                       ; 00578c51
        ;   XREF to: 00578c7f (CONDITIONAL_JUMP)  ; LAB_00578c7f
    PUSH EAX                            ; 00578c53
    CALL sound_snddx.cpp_FUN_00577500   ; 00578c54
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00577500(uint error_code)
    ADD ESP,0x4                         ; 00578c59
    PUSH EAX                            ; 00578c5c
    PUSH 0x5f4ef0                       ; 00578c5d | = "Unlock hw sample buffer"
    PUSH 0x5f4c35                       ; 00578c62 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00578c67
    PUSH EAX                            ; 00578c6b
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00578c6c
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 00578c71
    MOV EAX,ESP                         ; 00578c74
    PUSH EAX                            ; 00578c76
    CALL sound_sndmain.cpp_logSoundError_FUN_005773f0 ; 00578c77
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005773f0(char * format)
    ADD ESP,0x4                         ; 00578c7c
    MOV dword ptr [EBX + 0x10],0x0      ; 00578c7f
        ;   Label: LAB_00578c7f
    ADD ESP,0x190                       ; 00578c86
        ;   Label: LAB_00578c86
    POP EBP                             ; 00578c8c
    POP EBX                             ; 00578c8d
    RET                                 ; 00578c8e
    LEA EAX,[EBX*0x4 + 0x0]             ; 00578c8f
        ;   Label: LAB_00578c8f
    SUB EAX,EBX                         ; 00578c96
    SHL EAX,0x3                         ; 00578c98
    CMP dword ptr [EAX + 0x2c81dc4],0x0 ; 00578c9b
    JZ 0x00578bfc                       ; 00578ca2
        ;   XREF to: 00578bfc (CONDITIONAL_JUMP)  ; LAB_00578bfc
    CMP dword ptr [EAX + 0x2c81dcc],0x1 ; 00578ca8
    JL 0x00578bfc                       ; 00578caf
        ;   XREF to: 00578bfc (CONDITIONAL_JUMP)  ; LAB_00578bfc
    JMP 0x00578c24                      ; 00578cb5
        ;   XREF to: 00578c24 (UNCONDITIONAL_JUMP)  ; LAB_00578c24

