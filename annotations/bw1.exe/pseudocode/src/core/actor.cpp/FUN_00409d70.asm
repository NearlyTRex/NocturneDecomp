; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint core_actor_cpp_FUN_00409d70(int param_1)
;
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_0041af30 at 0041af41
;
; Referenced Globals:
;   undefined4 DAT_005d25c9
;   undefined4 DAT_005d25d1
;   undefined4 DAT_005d25d9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409d70
        ;   Label: core_actor.cpp_FUN_00409d70
    PUSH ESI                            ; 00409d71
    PUSH EDI                            ; 00409d72
    PUSH EBP                            ; 00409d73
    MOV EBP,ESP                         ; 00409d74
    SUB ESP,0x70                        ; 00409d76
    AND ESP,0xfffffff8                  ; 00409d79
    MOV ESI,dword ptr [EBP + 0x14]      ; 00409d7c
    PUSH ESI                            ; 00409d7f
    MOV EAX,dword ptr [ESI + 0x154]     ; 00409d80
    LEA ESI,[ESP + 0x2c]                ; 00409d86
    LEA EDI,[ESP + 0x44]                ; 00409d8a
    CALL dword ptr [EAX + 0x1c]         ; 00409d8e
    MOV ECX,0x6                         ; 00409d91
    LEA ESI,[ESP + 0x2c]                ; 00409d96
    ADD ESP,0x4                         ; 00409d9a
    LEA EAX,[ESP + 0x40]                ; 00409d9d
    MOVSD.REP ES:EDI,ESI                ; 00409da1
    FLD float ptr [EAX + 0xc]           ; 00409da3
    FLD float ptr [EAX + 0x10]          ; 00409da6
    FLD float ptr [EAX + 0x14]          ; 00409da9
    LEA EDI,[ESP + 0x64]                ; 00409dac
    LEA ESI,[ESP + 0x58]                ; 00409db0
    FXCH ST2                            ; 00409db4
    FSUB float ptr [ESP + 0x40]         ; 00409db6
    FXCH                                ; 00409dba
    FSUB float ptr [ESP + 0x44]         ; 00409dbc
    FXCH ST2                            ; 00409dc0
    FSUB float ptr [ESP + 0x48]         ; 00409dc2
    FXCH                                ; 00409dc6
    FSTP float ptr [ESP + 0x58]         ; 00409dc8
    FXCH                                ; 00409dcc
    FSTP float ptr [ESP + 0x5c]         ; 00409dce
    FSTP float ptr [ESP + 0x60]         ; 00409dd2
    MOVSD ES:EDI,ESI                    ; 00409dd6
    MOVSD ES:EDI,ESI                    ; 00409dd7
    MOVSD ES:EDI,ESI                    ; 00409dd8
    XOR EBX,EBX                         ; 00409dd9
    FLD float ptr [ESP + 0x64]          ; 00409ddb
    FST double ptr [ESP + 0x18]         ; 00409ddf
    FCOMP double ptr [0x005d25c9]       ; 00409de3 | DAT_005d25c9
    FNSTSW AX                           ; 00409de9
    SAHF                                ; 00409deb
    JC 0x00409ead                       ; 00409dec
        ;   XREF to: 00409ead (CONDITIONAL_JUMP)  ; LAB_00409ead
    FLD float ptr [ESP + 0x64]          ; 00409df2
        ;   Label: LAB_00409df2
    FLD1                                ; 00409df6
    FCOMPP                              ; 00409df8
    FNSTSW AX                           ; 00409dfa
    SAHF                                ; 00409dfc
    JBE 0x00409e49                      ; 00409dfd
        ;   XREF to: 00409e49 (CONDITIONAL_JUMP)  ; LAB_00409e49
    FLD float ptr [ESP + 0x68]          ; 00409dff
    FLD1                                ; 00409e03
    FCOMPP                              ; 00409e05
    FNSTSW AX                           ; 00409e07
    SAHF                                ; 00409e09
    JBE 0x00409e49                      ; 00409e0a
        ;   XREF to: 00409e49 (CONDITIONAL_JUMP)  ; LAB_00409e49
    FLD float ptr [ESP + 0x6c]          ; 00409e0c
    FST double ptr [ESP]                ; 00409e10
    FCOMP double ptr [0x005d25c9]       ; 00409e13 | DAT_005d25c9
    FNSTSW AX                           ; 00409e19
    SAHF                                ; 00409e1b
    JBE 0x00409e49                      ; 00409e1c
        ;   XREF to: 00409e49 (CONDITIONAL_JUMP)  ; LAB_00409e49
    FLD double ptr [ESP]                ; 00409e1e
    FCOMP double ptr [0x005d25d9]       ; 00409e21 | DAT_005d25d9
    FNSTSW AX                           ; 00409e27
    SAHF                                ; 00409e29
    JNC 0x00409e49                      ; 00409e2a
        ;   XREF to: 00409e49 (CONDITIONAL_JUMP)  ; LAB_00409e49
    FLD float ptr [ESP + 0x6c]          ; 00409e2c
    FCOMP float ptr [ESP + 0x64]        ; 00409e30
    FNSTSW AX                           ; 00409e34
    SAHF                                ; 00409e36
    JBE 0x00409e49                      ; 00409e37
        ;   XREF to: 00409e49 (CONDITIONAL_JUMP)  ; LAB_00409e49
    FLD float ptr [ESP + 0x6c]          ; 00409e39
    FCOMP float ptr [ESP + 0x68]        ; 00409e3d
    FNSTSW AX                           ; 00409e41
    SAHF                                ; 00409e43
    JBE 0x00409e49                      ; 00409e44
        ;   XREF to: 00409e49 (CONDITIONAL_JUMP)  ; LAB_00409e49
    OR BL,0x2                           ; 00409e46
    FLD float ptr [ESP + 0x64]          ; 00409e49
        ;   Label: LAB_00409e49
    FLD1                                ; 00409e4d
    FCOMPP                              ; 00409e4f
    FNSTSW AX                           ; 00409e51
    SAHF                                ; 00409e53
    JBE 0x00409ea4                      ; 00409e54
        ;   XREF to: 00409ea4 (CONDITIONAL_JUMP)  ; LAB_00409ea4
    FLD float ptr [ESP + 0x68]          ; 00409e56
    FLD1                                ; 00409e5a
    FCOMPP                              ; 00409e5c
    FNSTSW AX                           ; 00409e5e
    SAHF                                ; 00409e60
    JBE 0x00409ea4                      ; 00409e61
        ;   XREF to: 00409ea4 (CONDITIONAL_JUMP)  ; LAB_00409ea4
    FLD float ptr [ESP + 0x6c]          ; 00409e63
    FLD1                                ; 00409e67
    FXCH                                ; 00409e69
    FSTP double ptr [ESP + 0x8]         ; 00409e6b
    FCOMP double ptr [ESP + 0x8]        ; 00409e6f
    FNSTSW AX                           ; 00409e73
    SAHF                                ; 00409e75
    JNC 0x00409ea4                      ; 00409e76
        ;   XREF to: 00409ea4 (CONDITIONAL_JUMP)  ; LAB_00409ea4
    FLD double ptr [ESP + 0x8]          ; 00409e78
    FCOMP double ptr [0x005d25c9]       ; 00409e7c | DAT_005d25c9
    FNSTSW AX                           ; 00409e82
    SAHF                                ; 00409e84
    JNC 0x00409ea4                      ; 00409e85
        ;   XREF to: 00409ea4 (CONDITIONAL_JUMP)  ; LAB_00409ea4
    FLD float ptr [ESP + 0x6c]          ; 00409e87
    FCOMP float ptr [ESP + 0x64]        ; 00409e8b
    FNSTSW AX                           ; 00409e8f
    SAHF                                ; 00409e91
    JBE 0x00409ea4                      ; 00409e92
        ;   XREF to: 00409ea4 (CONDITIONAL_JUMP)  ; LAB_00409ea4
    FLD float ptr [ESP + 0x6c]          ; 00409e94
    FCOMP float ptr [ESP + 0x68]        ; 00409e98
    FNSTSW AX                           ; 00409e9c
    SAHF                                ; 00409e9e
    JBE 0x00409ea4                      ; 00409e9f
        ;   XREF to: 00409ea4 (CONDITIONAL_JUMP)  ; LAB_00409ea4
    OR BL,0x4                           ; 00409ea1
    MOV EAX,EBX                         ; 00409ea4
        ;   Label: LAB_00409ea4
    MOV ESP,EBP                         ; 00409ea6
    POP EBP                             ; 00409ea8
    POP EDI                             ; 00409ea9
    POP ESI                             ; 00409eaa
    POP EBX                             ; 00409eab
    RET                                 ; 00409eac
    FLD float ptr [ESP + 0x68]          ; 00409ead
        ;   Label: LAB_00409ead
    FST double ptr [ESP + 0x20]         ; 00409eb1
    FCOMP double ptr [0x005d25c9]       ; 00409eb5 | DAT_005d25c9
    FNSTSW AX                           ; 00409ebb
    SAHF                                ; 00409ebd
    JNC 0x00409df2                      ; 00409ebe
        ;   XREF to: 00409df2 (CONDITIONAL_JUMP)  ; LAB_00409df2
    FLD float ptr [ESP + 0x6c]          ; 00409ec4
    FST double ptr [ESP + 0x10]         ; 00409ec8
    FCOMP double ptr [0x005d25c9]       ; 00409ecc | DAT_005d25c9
    FNSTSW AX                           ; 00409ed2
    SAHF                                ; 00409ed4
    JNC 0x00409df2                      ; 00409ed5
        ;   XREF to: 00409df2 (CONDITIONAL_JUMP)  ; LAB_00409df2
    FLD double ptr [ESP + 0x18]         ; 00409edb
    FCOMP double ptr [0x005d25d1]       ; 00409edf | DAT_005d25d1
    FNSTSW AX                           ; 00409ee5
    SAHF                                ; 00409ee7
    JBE 0x00409df2                      ; 00409ee8
        ;   XREF to: 00409df2 (CONDITIONAL_JUMP)  ; LAB_00409df2
    FLD double ptr [ESP + 0x20]         ; 00409eee
    FCOMP double ptr [0x005d25d1]       ; 00409ef2 | DAT_005d25d1
    FNSTSW AX                           ; 00409ef8
    SAHF                                ; 00409efa
    JBE 0x00409df2                      ; 00409efb
        ;   XREF to: 00409df2 (CONDITIONAL_JUMP)  ; LAB_00409df2
    FLD double ptr [ESP + 0x10]         ; 00409f01
    FCOMP double ptr [0x005d25d1]       ; 00409f05 | DAT_005d25d1
    FNSTSW AX                           ; 00409f0b
    SAHF                                ; 00409f0d
    JBE 0x00409df2                      ; 00409f0e
        ;   XREF to: 00409df2 (CONDITIONAL_JUMP)  ; LAB_00409df2
    MOV EBX,0x4                         ; 00409f14
    JMP 0x00409df2                      ; 00409f19
        ;   XREF to: 00409df2 (UNCONDITIONAL_JUMP)  ; LAB_00409df2

