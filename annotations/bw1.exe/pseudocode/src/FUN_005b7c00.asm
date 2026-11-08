; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_005b7c00(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   FUN_0041bb40 at 0041bd52
;   FUN_00445cb0 at 00446098
;   FUN_0046e630 at 0046e695
;   FUN_00539660 at 0053978f
;   FUN_00589f10 at 00589f75
;
; Referenced Globals:
;   undefined4 DAT_005fa18c
;   undefined4 DAT_005fa190
;   undefined4 DAT_005fa194
;   undefined4 DAT_005fa198
;   undefined4 DAT_005fa19c
;   undefined4 DAT_005fa1a0
;
; Called Functions:
;   FUN_005c1cd6
;   FUN_005c1d69
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7c00
        ;   Label: FUN_005b7c00
    PUSH EDI                            ; 005b7c01
    PUSH EBP                            ; 005b7c02
    MOV EBP,ESP                         ; 005b7c03
    SUB ESP,0x14                        ; 005b7c05
    AND ESP,0xfffffff8                  ; 005b7c08
    MOV EDX,dword ptr [EBP + 0x10]      ; 005b7c0b
    MOV ECX,ESI                         ; 005b7c0e
    FLD float ptr [EDX + 0x8]           ; 005b7c10
    FMUL float ptr [EDX + 0xc]          ; 005b7c13
    FLD float ptr [EDX]                 ; 005b7c16
    FMUL float ptr [EDX + 0x4]          ; 005b7c18
    FSUBRP                              ; 005b7c1b
    FMUL float ptr [0x005fa18c]         ; 005b7c1d | DAT_005fa18c
    FST float ptr [ESP]                 ; 005b7c23
    FCOMP float ptr [0x005fa190]        ; 005b7c26 | DAT_005fa190
    FNSTSW AX                           ; 005b7c2c
    SAHF                                ; 005b7c2e
    JC 0x005b7ccc                       ; 005b7c2f
        ;   XREF to: 005b7ccc (CONDITIONAL_JUMP)  ; LAB_005b7ccc
    FLD float ptr [ESP]                 ; 005b7c35
    FCOMP float ptr [0x005fa194]        ; 005b7c38 | DAT_005fa194
    FNSTSW AX                           ; 005b7c3e
    SAHF                                ; 005b7c40
    JA 0x005b7d15                       ; 005b7c41
        ;   XREF to: 005b7d15 (CONDITIONAL_JUMP)  ; LAB_005b7d15
    FLD float ptr [ESP]                 ; 005b7c47
    CALL FUN_005c1cd6                   ; 005b7c4a
        ;   XREF to: 005c1cd6 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1cd6()
    FST float ptr [ESP + 0x4]           ; 005b7c4f
    FCOMP float ptr [0x005fa198]        ; 005b7c53 | DAT_005fa198
    FNSTSW AX                           ; 005b7c59
    SAHF                                ; 005b7c5b
    JNC 0x005b7c6c                      ; 005b7c5c
        ;   XREF to: 005b7c6c (CONDITIONAL_JUMP)  ; LAB_005b7c6c
    FLD float ptr [ESP + 0x4]           ; 005b7c5e
    FADD float ptr [0x005fa19c]         ; 005b7c62 | DAT_005fa19c
    FSTP float ptr [ESP + 0x4]          ; 005b7c68
    FLD float ptr [EDX + 0x4]           ; 005b7c6c
        ;   Label: LAB_005b7c6c
    FMUL ST0                            ; 005b7c6f
    FLD float ptr [EDX + 0x8]           ; 005b7c71
    FMUL ST0                            ; 005b7c74
    FXCH                                ; 005b7c76
    FSUBR float ptr [0x005fa1a0]        ; 005b7c78 | DAT_005fa1a0
    FXCH                                ; 005b7c7e
    FSUBR ST0,ST1                       ; 005b7c80
    FLD float ptr [EDX + 0x4]           ; 005b7c82
    FMUL float ptr [EDX + 0xc]          ; 005b7c85
    FLD float ptr [EDX]                 ; 005b7c88
    FMUL float ptr [EDX + 0x8]          ; 005b7c8a
    FADDP                               ; 005b7c8d
    CALL FUN_005c1d69                   ; 005b7c8f
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1d69()
    FLD float ptr [EDX + 0xc]           ; 005b7c94
    FMUL ST0                            ; 005b7c97
    FSUBP ST2,ST0                       ; 005b7c99
    FLD float ptr [EDX + 0x4]           ; 005b7c9b
    FMUL float ptr [EDX + 0x8]          ; 005b7c9e
    FLD float ptr [EDX]                 ; 005b7ca1
    FMUL float ptr [EDX + 0xc]          ; 005b7ca3
    FADDP                               ; 005b7ca6
    FLD ST2                             ; 005b7ca8
    FXCH                                ; 005b7caa
    CALL FUN_005c1d69                   ; 005b7cac
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1d69()
    FSTP ST2                            ; 005b7cb1
    FSTP float ptr [ESP + 0x8]          ; 005b7cb3
    FSTP float ptr [ESP + 0xc]          ; 005b7cb7
    LEA ESI,[ESP + 0x4]                 ; 005b7cbb
    MOV EDI,ECX                         ; 005b7cbf
    MOVSD ES:EDI,ESI                    ; 005b7cc1
    MOVSD ES:EDI,ESI                    ; 005b7cc2
    MOVSD ES:EDI,ESI                    ; 005b7cc3
    MOV EAX,ECX                         ; 005b7cc4
    MOV ESP,EBP                         ; 005b7cc6
    POP EBP                             ; 005b7cc8
    POP EDI                             ; 005b7cc9
    POP EBX                             ; 005b7cca
    RET                                 ; 005b7ccb
    FLD float ptr [EDX + 0x8]           ; 005b7ccc
        ;   Label: LAB_005b7ccc
    FMUL ST0                            ; 005b7ccf
    FSUBR float ptr [0x005fa1a0]        ; 005b7cd1 | DAT_005fa1a0
    FLD float ptr [EDX + 0xc]           ; 005b7cd7
    FMUL ST0                            ; 005b7cda
    FSUBP                               ; 005b7cdc
    FLD float ptr [EDX + 0x4]           ; 005b7cde
    FCHS                                ; 005b7ce1
    FMUL float ptr [EDX + 0xc]          ; 005b7ce3
    FLD float ptr [EDX]                 ; 005b7ce6
    FMUL float ptr [EDX + 0x8]          ; 005b7ce8
    FADDP                               ; 005b7ceb
    CALL FUN_005c1d69                   ; 005b7ced
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1d69()
    MOV dword ptr [ESP + 0x4],0xbfc90fdb ; 005b7cf2
    XOR EAX,EAX                         ; 005b7cfa
    FSTP float ptr [ESP + 0x8]          ; 005b7cfc
    MOV dword ptr [ESP + 0xc],EAX       ; 005b7d00
    LEA ESI,[ESP + 0x4]                 ; 005b7d04
    MOV EDI,ECX                         ; 005b7d08
    MOVSD ES:EDI,ESI                    ; 005b7d0a
    MOVSD ES:EDI,ESI                    ; 005b7d0b
    MOVSD ES:EDI,ESI                    ; 005b7d0c
    MOV EAX,ECX                         ; 005b7d0d
    MOV ESP,EBP                         ; 005b7d0f
    POP EBP                             ; 005b7d11
    POP EDI                             ; 005b7d12
    POP EBX                             ; 005b7d13
    RET                                 ; 005b7d14
    FLD float ptr [EDX + 0x8]           ; 005b7d15
        ;   Label: LAB_005b7d15
    FMUL ST0                            ; 005b7d18
    FSUBR float ptr [0x005fa1a0]        ; 005b7d1a | DAT_005fa1a0
    FLD float ptr [EDX + 0xc]           ; 005b7d20
    FMUL ST0                            ; 005b7d23
    FSUBP                               ; 005b7d25
    FLD float ptr [EDX + 0x4]           ; 005b7d27
    FCHS                                ; 005b7d2a
    FMUL float ptr [EDX + 0xc]          ; 005b7d2c
    FLD float ptr [EDX]                 ; 005b7d2f
    FMUL float ptr [EDX + 0x8]          ; 005b7d31
    FADDP                               ; 005b7d34
    CALL FUN_005c1d69                   ; 005b7d36
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1d69()
    MOV EBX,0x3fc90fdb                  ; 005b7d3b
    XOR ESI,ESI                         ; 005b7d40
    MOV dword ptr [ESP + 0x4],EBX       ; 005b7d42
    MOV dword ptr [ESP + 0xc],ESI       ; 005b7d46
    FSTP float ptr [ESP + 0x8]          ; 005b7d4a
    LEA ESI,[ESP + 0x4]                 ; 005b7d4e
    MOV EDI,ECX                         ; 005b7d52
    MOVSD ES:EDI,ESI                    ; 005b7d54
    MOVSD ES:EDI,ESI                    ; 005b7d55
    MOVSD ES:EDI,ESI                    ; 005b7d56
    MOV EAX,ECX                         ; 005b7d57
    MOV ESP,EBP                         ; 005b7d59
    POP EBP                             ; 005b7d5b
    POP EDI                             ; 005b7d5c
    POP EBX                             ; 005b7d5d
    RET                                 ; 005b7d5e

