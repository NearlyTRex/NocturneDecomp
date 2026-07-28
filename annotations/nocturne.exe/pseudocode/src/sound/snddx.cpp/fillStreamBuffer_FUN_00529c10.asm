; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_fillStreamBuffer_FUN_00529c10(void)
;
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
; undefined        Stack[-0x1c]:1  local_1c
; undefined        Stack[-0x18]:1  local_18
; undefined        Stack[-0x14]:1  local_14
;
; XREF[2]:
;   sound_snddx.cpp_CDirectSoundDevice_poll_FUN_0052a970 at 0052aa2f
;   sound_snddx.cpp_CDirectSoundDevice_start_FUN_00529f60 at 00529fcc
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005940b7
;   TerminatedCString s_Lock_secondary_buffer_005940d6
;   TerminatedCString s_Unlock_secondary_buffer_005940ec
;   undefined4 DAT_02dc921c
;   undefined4 DAT_02dc9228
;   undefined4 DAT_02dc922c
;   undefined4 DAT_02dc9230
;   undefined4 DAT_02dc9234
;   undefined4 DAT_02dc9238
;   undefined4 DAT_02dc923c
;   undefined4 DAT_02dc9240
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90
;   sound_sndmain.cpp_FUN_00529980
;   sound_sndmain.cpp_pollAndMixSfx_FUN_005294f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529c10
        ;   Label: sound_snddx.cpp_fillStreamBuffer_FUN_00529c10
    PUSH ESI                            ; 00529c11
    PUSH EDI                            ; 00529c12
    PUSH EBP                            ; 00529c13
    SUB ESP,0x350                       ; 00529c14
    MOV EDX,dword ptr [0x02dc921c]      ; 00529c1a | DAT_02dc921c
    TEST EDX,EDX                        ; 00529c20
    JNZ 0x00529c31                      ; 00529c22
        ;   XREF to: 00529c31 (CONDITIONAL_JUMP)  ; LAB_00529c31
    XOR EAX,EAX                         ; 00529c24
        ;   Label: LAB_00529c24
    ADD ESP,0x350                       ; 00529c26
        ;   Label: LAB_00529c26
    POP EBP                             ; 00529c2c
    POP EDI                             ; 00529c2d
    POP ESI                             ; 00529c2e
    POP EBX                             ; 00529c2f
    RET                                 ; 00529c30
    PUSH 0x0                            ; 00529c31
        ;   Label: LAB_00529c31
    LEA EAX,[ESP + 0x350]               ; 00529c33
    PUSH EAX                            ; 00529c3a
    LEA EAX,[ESP + 0x348]               ; 00529c3b
    PUSH EAX                            ; 00529c42
    LEA EAX,[ESP + 0x354]               ; 00529c43
    PUSH EAX                            ; 00529c4a
    LEA EAX,[ESP + 0x354]               ; 00529c4b
    MOV EBX,dword ptr [0x02dc9238]      ; 00529c52 | DAT_02dc9238
    PUSH EAX                            ; 00529c58
    MOV EAX,[0x02dc9240]                ; 00529c59 | DAT_02dc9240
    IMUL EAX,EBX                        ; 00529c5e
    PUSH EBX                            ; 00529c61
    PUSH EAX                            ; 00529c62
    MOV ECX,dword ptr [EDX]             ; 00529c63
    PUSH EDX                            ; 00529c65
    CALL dword ptr [ECX + 0x2c]         ; 00529c66
    TEST EAX,EAX                        ; 00529c69
    JNZ 0x00529d5d                      ; 00529c6b
        ;   XREF to: 00529d5d (CONDITIONAL_JUMP)  ; LAB_00529d5d
    CMP dword ptr [ESP + 0x340],0x0     ; 00529c71
    JNZ 0x00529c26                      ; 00529c79
        ;   XREF to: 00529c26 (CONDITIONAL_JUMP)  ; LAB_00529c26
    MOV EAX,dword ptr [ESP + 0x348]     ; 00529c7b
    CMP EAX,dword ptr [0x02dc9238]      ; 00529c82 | DAT_02dc9238
    JNZ 0x00529c24                      ; 00529c88
        ;   XREF to: 00529c24 (CONDITIONAL_JUMP)  ; LAB_00529c24
    MOV EAX,[0x02dc9228]                ; 00529c8a | DAT_02dc9228
    MOV EDX,EAX                         ; 00529c8f
    SAR EDX,0x1f                        ; 00529c91
    SHL EDX,0x3                         ; 00529c94
    SBB EAX,EDX                         ; 00529c97
    SAR EAX,0x3                         ; 00529c99
    MOV ESI,EAX                         ; 00529c9c
    MOV EBX,ESI                         ; 00529c9e
    IMUL EDX,ESI,0x0                    ; 00529ca0
    ADD EDX,dword ptr [ESP + 0x344]     ; 00529ca3
    MOV ECX,dword ptr [0x02dc9230]      ; 00529caa | DAT_02dc9230
    SHL ECX,0x2                         ; 00529cb0
    XOR EAX,EAX                         ; 00529cb3
    TEST ECX,ECX                        ; 00529cb5
    JLE 0x00529cd0                      ; 00529cb7
        ;   XREF to: 00529cd0 (CONDITIONAL_JUMP)  ; LAB_00529cd0
    MOV dword ptr [ESP + EAX*0x1 + 0x320],EDX ; 00529cb9
        ;   Label: LAB_00529cb9
    ADD EAX,0x4                         ; 00529cc0
    ADD EDX,EBX                         ; 00529cc3
    CMP EAX,ECX                         ; 00529cc5
    JL 0x00529cb9                       ; 00529cc7
        ;   XREF to: 00529cb9 (CONDITIONAL_JUMP)  ; LAB_00529cb9
    LEA EAX,[EAX]                       ; 00529cc9
    NOP                                 ; 00529ccf
    MOV EBX,dword ptr [0x02dc9230]      ; 00529cd0 | DAT_02dc9230
        ;   Label: LAB_00529cd0
    IMUL ESI,EBX                        ; 00529cd6
    PUSH ESI                            ; 00529cd9
    MOV ESI,dword ptr [0x02dc9234]      ; 00529cda | DAT_02dc9234
    PUSH ESI                            ; 00529ce0
    MOV EDI,dword ptr [0x02dc922c]      ; 00529ce1 | DAT_02dc922c
    PUSH EDI                            ; 00529ce7
    PUSH EBX                            ; 00529ce8
    MOV EAX,[0x02dc9228]                ; 00529ce9 | DAT_02dc9228
    PUSH EAX                            ; 00529cee
    LEA EAX,[ESP + 0x334]               ; 00529cef
    PUSH EAX                            ; 00529cf6
    CALL sound_sndmain.cpp_pollAndMixSfx_FUN_005294f0 ; 00529cf7
        ;   XREF to: 005294f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_pollAndMixSfx_FUN_005294f0()
    MOV EDX,dword ptr [0x02dc9240]      ; 00529cfc | DAT_02dc9240
    MOV ECX,dword ptr [0x02dc923c]      ; 00529d02 | DAT_02dc923c
    INC EDX                             ; 00529d08
    ADD ESP,0x18                        ; 00529d09
    MOV dword ptr [0x02dc9240],EDX      ; 00529d0c | DAT_02dc9240
    CMP EDX,ECX                         ; 00529d12
    JL 0x00529d1e                       ; 00529d14
        ;   XREF to: 00529d1e (CONDITIONAL_JUMP)  ; LAB_00529d1e
    XOR EBX,EBX                         ; 00529d16
    MOV dword ptr [0x02dc9240],EBX      ; 00529d18 | DAT_02dc9240
    MOV ESI,dword ptr [ESP + 0x34c]     ; 00529d1e
        ;   Label: LAB_00529d1e
    PUSH ESI                            ; 00529d25
    MOV EDI,dword ptr [ESP + 0x344]     ; 00529d26
    PUSH EDI                            ; 00529d2d
    MOV EBP,dword ptr [ESP + 0x350]     ; 00529d2e
    PUSH EBP                            ; 00529d35
    MOV ECX,dword ptr [ESP + 0x350]     ; 00529d36
    MOV EAX,[0x02dc921c]                ; 00529d3d | DAT_02dc921c
    PUSH ECX                            ; 00529d42
    MOV EDX,dword ptr [EAX]             ; 00529d43
    PUSH EAX                            ; 00529d45
    CALL dword ptr [EDX + 0x4c]         ; 00529d46
    TEST EAX,EAX                        ; 00529d49
    JNZ 0x00529d96                      ; 00529d4b
        ;   XREF to: 00529d96 (CONDITIONAL_JUMP)  ; LAB_00529d96
    MOV EAX,0x1                         ; 00529d4d
    ADD ESP,0x350                       ; 00529d52
    POP EBP                             ; 00529d58
    POP EDI                             ; 00529d59
    POP ESI                             ; 00529d5a
    POP EBX                             ; 00529d5b
    RET                                 ; 00529d5c
    PUSH EAX                            ; 00529d5d
        ;   Label: LAB_00529d5d
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 00529d5e
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 00529d63
    PUSH EAX                            ; 00529d66
    PUSH 0x5940d6                       ; 00529d67 | = "Lock secondary buffer"
    PUSH 0x5940b7                       ; 00529d6c | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00529d71
    PUSH EAX                            ; 00529d75
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00529d76
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 00529d7b
    MOV EAX,ESP                         ; 00529d7e
    PUSH EAX                            ; 00529d80
    CALL sound_sndmain.cpp_FUN_00529980 ; 00529d81
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 00529d86
    XOR EAX,EAX                         ; 00529d89
    ADD ESP,0x350                       ; 00529d8b
    POP EBP                             ; 00529d91
    POP EDI                             ; 00529d92
    POP ESI                             ; 00529d93
    POP EBX                             ; 00529d94
    RET                                 ; 00529d95
    PUSH EAX                            ; 00529d96
        ;   Label: LAB_00529d96
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 00529d97
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 00529d9c
    PUSH EAX                            ; 00529d9f
    PUSH 0x5940ec                       ; 00529da0 | = "Unlock secondary buffer"
    PUSH 0x5940b7                       ; 00529da5 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 00529daa
    PUSH EAX                            ; 00529db1
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00529db2
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 00529db7
    LEA EAX,[ESP + 0x190]               ; 00529dba
    PUSH EAX                            ; 00529dc1
    CALL sound_sndmain.cpp_FUN_00529980 ; 00529dc2
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 00529dc7
    XOR EAX,EAX                         ; 00529dca
    ADD ESP,0x350                       ; 00529dcc
    POP EBP                             ; 00529dd2
    POP EDI                             ; 00529dd3
    POP ESI                             ; 00529dd4
    POP EBX                             ; 00529dd5
    RET                                 ; 00529dd6

