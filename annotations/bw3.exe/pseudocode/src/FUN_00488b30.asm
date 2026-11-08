; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00488b30(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005bda54
;   undefined4 DAT_005bda5c
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00488b30
        ;   Label: FUN_00488b30
    SUB ESP,0x18                        ; 00488b31
    MOV EDX,dword ptr [ESP + 0x20]      ; 00488b34
    MOV EAX,ESI                         ; 00488b38
    FLD double ptr [0x005bda54]         ; 00488b3a | DAT_005bda54
    FLD float ptr [EDX + 0x15c]         ; 00488b40
    FMUL ST1                            ; 00488b46
    FLD float ptr [EDX + 0x164]         ; 00488b48
    FMUL ST2                            ; 00488b4e
    FLD float ptr [EDX + 0x15c]         ; 00488b50
    FCHS                                ; 00488b56
    FMUL ST3                            ; 00488b58
    FLD float ptr [EDX + 0x164]         ; 00488b5a
    FCHS                                ; 00488b60
    FMULP ST4                           ; 00488b62
    FLD float ptr [EDX + 0x160]         ; 00488b64
    MOV ECX,0xbdcccccd                  ; 00488b6a
    MOV EDI,ESI                         ; 00488b6f
    MOV ESI,ESP                         ; 00488b71
    MOV dword ptr [ESP + 0x4],ECX       ; 00488b73
    FADD double ptr [0x005bda5c]        ; 00488b77 | DAT_005bda5c
    FXCH ST3                            ; 00488b7d
    FSTP float ptr [ESP + 0xc]          ; 00488b7f
    FXCH ST2                            ; 00488b83
    FSTP float ptr [ESP + 0x10]         ; 00488b85
    FSTP float ptr [ESP + 0x14]         ; 00488b89
    MOV ECX,0x6                         ; 00488b8d
    FXCH                                ; 00488b92
    FSTP float ptr [ESP + 0x8]          ; 00488b94
    FSTP float ptr [ESP]                ; 00488b98
    MOVSD.REP ES:EDI,ESI                ; 00488b9b
    ADD ESP,0x18                        ; 00488b9d
    POP EDI                             ; 00488ba0
    RET                                 ; 00488ba1

