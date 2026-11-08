; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_005b7d60(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fa1a4
;   undefined4 DAT_005fa1a8
;   undefined4 DAT_005fa1ac
;   undefined4 DAT_005fa1b0
;   undefined4 DAT_005fa1b4
;   undefined4 DAT_005fa1b8
;
; Called Functions:
;   FUN_005c1cd6
;   FUN_005c1d69
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7d60
        ;   Label: FUN_005b7d60
    PUSH EDI                            ; 005b7d61
    PUSH EBP                            ; 005b7d62
    MOV EBP,ESP                         ; 005b7d63
    SUB ESP,0x14                        ; 005b7d65
    AND ESP,0xfffffff8                  ; 005b7d68
    MOV EDX,dword ptr [EBP + 0x10]      ; 005b7d6b
    MOV ECX,ESI                         ; 005b7d6e
    FLD float ptr [EDX + 0x8]           ; 005b7d70
    FMUL float ptr [EDX + 0xc]          ; 005b7d73
    FLD float ptr [EDX]                 ; 005b7d76
    FCHS                                ; 005b7d78
    FMUL float ptr [EDX + 0x4]          ; 005b7d7a
    FSUBRP                              ; 005b7d7d
    FMUL float ptr [0x005fa1a4]         ; 005b7d7f | DAT_005fa1a4
    FST float ptr [ESP]                 ; 005b7d85
    FCOMP float ptr [0x005fa1a8]        ; 005b7d88 | DAT_005fa1a8
    FNSTSW AX                           ; 005b7d8e
    SAHF                                ; 005b7d90
    JC 0x005b7e2e                       ; 005b7d91
        ;   XREF to: 005b7e2e (CONDITIONAL_JUMP)  ; LAB_005b7e2e
    FLD float ptr [ESP]                 ; 005b7d97
    FCOMP float ptr [0x005fa1ac]        ; 005b7d9a | DAT_005fa1ac
    FNSTSW AX                           ; 005b7da0
    SAHF                                ; 005b7da2
    JA 0x005b7e77                       ; 005b7da3
        ;   XREF to: 005b7e77 (CONDITIONAL_JUMP)  ; LAB_005b7e77
    FLD float ptr [ESP]                 ; 005b7da9
    CALL FUN_005c1cd6                   ; 005b7dac
        ;   XREF to: 005c1cd6 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1cd6()
    FST float ptr [ESP + 0x4]           ; 005b7db1
    FCOMP float ptr [0x005fa1b0]        ; 005b7db5 | DAT_005fa1b0
    FNSTSW AX                           ; 005b7dbb
    SAHF                                ; 005b7dbd
    JNC 0x005b7dce                      ; 005b7dbe
        ;   XREF to: 005b7dce (CONDITIONAL_JUMP)  ; LAB_005b7dce
    FLD float ptr [ESP + 0x4]           ; 005b7dc0
    FADD float ptr [0x005fa1b4]         ; 005b7dc4 | DAT_005fa1b4
    FSTP float ptr [ESP + 0x4]          ; 005b7dca
    FLD float ptr [EDX + 0x4]           ; 005b7dce
        ;   Label: LAB_005b7dce
    FMUL ST0                            ; 005b7dd1
    FLD float ptr [EDX + 0x8]           ; 005b7dd3
    FMUL ST0                            ; 005b7dd6
    FXCH                                ; 005b7dd8
    FSUBR float ptr [0x005fa1b8]        ; 005b7dda | DAT_005fa1b8
    FXCH                                ; 005b7de0
    FSUBR ST0,ST1                       ; 005b7de2
    FLD float ptr [EDX + 0x4]           ; 005b7de4
    FMUL float ptr [EDX + 0xc]          ; 005b7de7
    FLD float ptr [EDX]                 ; 005b7dea
    FMUL float ptr [EDX + 0x8]          ; 005b7dec
    FSUBP                               ; 005b7def
    CALL FUN_005c1d69                   ; 005b7df1
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1d69()
    FLD float ptr [EDX + 0xc]           ; 005b7df6
    FMUL ST0                            ; 005b7df9
    FSUBP ST2,ST0                       ; 005b7dfb
    FLD float ptr [EDX + 0x4]           ; 005b7dfd
    FMUL float ptr [EDX + 0x8]          ; 005b7e00
    FLD float ptr [EDX]                 ; 005b7e03
    FMUL float ptr [EDX + 0xc]          ; 005b7e05
    FSUBP                               ; 005b7e08
    FLD ST2                             ; 005b7e0a
    FXCH                                ; 005b7e0c
    CALL FUN_005c1d69                   ; 005b7e0e
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1d69()
    FSTP ST2                            ; 005b7e13
    FSTP float ptr [ESP + 0x8]          ; 005b7e15
    FSTP float ptr [ESP + 0xc]          ; 005b7e19
    LEA ESI,[ESP + 0x4]                 ; 005b7e1d
    MOV EDI,ECX                         ; 005b7e21
    MOVSD ES:EDI,ESI                    ; 005b7e23
    MOVSD ES:EDI,ESI                    ; 005b7e24
    MOVSD ES:EDI,ESI                    ; 005b7e25
    MOV EAX,ECX                         ; 005b7e26
    MOV ESP,EBP                         ; 005b7e28
    POP EBP                             ; 005b7e2a
    POP EDI                             ; 005b7e2b
    POP EBX                             ; 005b7e2c
    RET                                 ; 005b7e2d
    FLD float ptr [EDX + 0x8]           ; 005b7e2e
        ;   Label: LAB_005b7e2e
    FMUL ST0                            ; 005b7e31
    FSUBR float ptr [0x005fa1b8]        ; 005b7e33 | DAT_005fa1b8
    FLD float ptr [EDX + 0xc]           ; 005b7e39
    FMUL ST0                            ; 005b7e3c
    FSUBP                               ; 005b7e3e
    FLD float ptr [EDX + 0x4]           ; 005b7e40
    FCHS                                ; 005b7e43
    FMUL float ptr [EDX + 0xc]          ; 005b7e45
    FLD float ptr [EDX]                 ; 005b7e48
    FMUL float ptr [EDX + 0x8]          ; 005b7e4a
    FSUBP                               ; 005b7e4d
    CALL FUN_005c1d69                   ; 005b7e4f
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1d69()
    MOV dword ptr [ESP + 0x4],0xbfc90fdb ; 005b7e54
    XOR EAX,EAX                         ; 005b7e5c
    FSTP float ptr [ESP + 0x8]          ; 005b7e5e
    MOV dword ptr [ESP + 0xc],EAX       ; 005b7e62
    LEA ESI,[ESP + 0x4]                 ; 005b7e66
    MOV EDI,ECX                         ; 005b7e6a
    MOVSD ES:EDI,ESI                    ; 005b7e6c
    MOVSD ES:EDI,ESI                    ; 005b7e6d
    MOVSD ES:EDI,ESI                    ; 005b7e6e
    MOV EAX,ECX                         ; 005b7e6f
    MOV ESP,EBP                         ; 005b7e71
    POP EBP                             ; 005b7e73
    POP EDI                             ; 005b7e74
    POP EBX                             ; 005b7e75
    RET                                 ; 005b7e76
    FLD float ptr [EDX + 0x8]           ; 005b7e77
        ;   Label: LAB_005b7e77
    FMUL ST0                            ; 005b7e7a
    FSUBR float ptr [0x005fa1b8]        ; 005b7e7c | DAT_005fa1b8
    FLD float ptr [EDX + 0xc]           ; 005b7e82
    FMUL ST0                            ; 005b7e85
    FSUBP                               ; 005b7e87
    FLD float ptr [EDX + 0x4]           ; 005b7e89
    FCHS                                ; 005b7e8c
    FMUL float ptr [EDX + 0xc]          ; 005b7e8e
    FLD float ptr [EDX]                 ; 005b7e91
    FMUL float ptr [EDX + 0x8]          ; 005b7e93
    FSUBP                               ; 005b7e96
    CALL FUN_005c1d69                   ; 005b7e98
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1d69()
    MOV EBX,0x3fc90fdb                  ; 005b7e9d
    XOR ESI,ESI                         ; 005b7ea2
    MOV dword ptr [ESP + 0x4],EBX       ; 005b7ea4
    MOV dword ptr [ESP + 0xc],ESI       ; 005b7ea8
    FSTP float ptr [ESP + 0x8]          ; 005b7eac
    LEA ESI,[ESP + 0x4]                 ; 005b7eb0
    MOV EDI,ECX                         ; 005b7eb4
    MOVSD ES:EDI,ESI                    ; 005b7eb6
    MOVSD ES:EDI,ESI                    ; 005b7eb7
    MOVSD ES:EDI,ESI                    ; 005b7eb8
    MOV EAX,ECX                         ; 005b7eb9
    MOV ESP,EBP                         ; 005b7ebb
    POP EBP                             ; 005b7ebd
    POP EDI                             ; 005b7ebe
    POP EBX                             ; 005b7ebf
    RET                                 ; 005b7ec0

