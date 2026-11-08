; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00410d40(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005cb61f
;   undefined4 DAT_005cb627
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00410d40
        ;   Label: FUN_00410d40
    SUB ESP,0x18                        ; 00410d41
    MOV EDX,dword ptr [ESP + 0x20]      ; 00410d44
    MOV EAX,ESI                         ; 00410d48
    FLD double ptr [0x005cb61f]         ; 00410d4a | DAT_005cb61f
    FLD float ptr [EDX + 0x2b4]         ; 00410d50
    FMUL ST1                            ; 00410d56
    FLD float ptr [EDX + 0x2bc]         ; 00410d58
    FMUL ST2                            ; 00410d5e
    FLD float ptr [EDX + 0x2b4]         ; 00410d60
    FCHS                                ; 00410d66
    FMUL ST3                            ; 00410d68
    FLD float ptr [EDX + 0x2bc]         ; 00410d6a
    FCHS                                ; 00410d70
    FMULP ST4                           ; 00410d72
    FLD float ptr [EDX + 0x2b8]         ; 00410d74
    MOV ECX,0xbdcccccd                  ; 00410d7a
    MOV EDI,ESI                         ; 00410d7f
    MOV ESI,ESP                         ; 00410d81
    MOV dword ptr [ESP + 0x4],ECX       ; 00410d83
    FADD double ptr [0x005cb627]        ; 00410d87 | DAT_005cb627
    FXCH ST3                            ; 00410d8d
    FSTP float ptr [ESP + 0xc]          ; 00410d8f
    FXCH ST2                            ; 00410d93
    FSTP float ptr [ESP + 0x10]         ; 00410d95
    FSTP float ptr [ESP + 0x14]         ; 00410d99
    MOV ECX,0x6                         ; 00410d9d
    FXCH                                ; 00410da2
    FSTP float ptr [ESP + 0x8]          ; 00410da4
    FSTP float ptr [ESP]                ; 00410da8
    MOVSD.REP ES:EDI,ESI                ; 00410dab
    ADD ESP,0x18                        ; 00410dad
    POP EDI                             ; 00410db0
    RET                                 ; 00410db1

