; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00595040(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f76be
;   undefined4 DAT_005f76c6
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00595040
        ;   Label: FUN_00595040
    SUB ESP,0x18                        ; 00595041
    MOV EDX,dword ptr [ESP + 0x20]      ; 00595044
    MOV EAX,ESI                         ; 00595048
    FLD double ptr [0x005f76be]         ; 0059504a | DAT_005f76be
    FLD float ptr [EDX + 0x158]         ; 00595050
    FMUL ST1                            ; 00595056
    FLD float ptr [EDX + 0x160]         ; 00595058
    FMUL ST2                            ; 0059505e
    FLD float ptr [EDX + 0x158]         ; 00595060
    FCHS                                ; 00595066
    FMUL ST3                            ; 00595068
    FLD float ptr [EDX + 0x160]         ; 0059506a
    FCHS                                ; 00595070
    FMULP ST4                           ; 00595072
    FLD float ptr [EDX + 0x15c]         ; 00595074
    MOV ECX,0xbdcccccd                  ; 0059507a
    MOV EDI,ESI                         ; 0059507f
    MOV ESI,ESP                         ; 00595081
    MOV dword ptr [ESP + 0x4],ECX       ; 00595083
    FADD double ptr [0x005f76c6]        ; 00595087 | DAT_005f76c6
    FXCH ST3                            ; 0059508d
    FSTP float ptr [ESP + 0xc]          ; 0059508f
    FXCH ST2                            ; 00595093
    FSTP float ptr [ESP + 0x10]         ; 00595095
    FSTP float ptr [ESP + 0x14]         ; 00595099
    MOV ECX,0x6                         ; 0059509d
    FXCH                                ; 005950a2
    FSTP float ptr [ESP + 0x8]          ; 005950a4
    FSTP float ptr [ESP]                ; 005950a8
    MOVSD.REP ES:EDI,ESI                ; 005950ab
    ADD ESP,0x18                        ; 005950ad
    POP EDI                             ; 005950b0
    RET                                 ; 005950b1

