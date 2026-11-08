; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049ff70(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005dc997
;   undefined4 DAT_005dc99f
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0049ff70
        ;   Label: FUN_0049ff70
    SUB ESP,0x18                        ; 0049ff71
    MOV EDX,dword ptr [ESP + 0x20]      ; 0049ff74
    MOV EAX,ESI                         ; 0049ff78
    FLD double ptr [0x005dc997]         ; 0049ff7a | DAT_005dc997
    FLD float ptr [EDX + 0x15c]         ; 0049ff80
    FMUL ST1                            ; 0049ff86
    FLD float ptr [EDX + 0x164]         ; 0049ff88
    FMUL ST2                            ; 0049ff8e
    FLD float ptr [EDX + 0x15c]         ; 0049ff90
    FCHS                                ; 0049ff96
    FMUL ST3                            ; 0049ff98
    FLD float ptr [EDX + 0x164]         ; 0049ff9a
    FCHS                                ; 0049ffa0
    FMULP ST4                           ; 0049ffa2
    FLD float ptr [EDX + 0x160]         ; 0049ffa4
    MOV ECX,0xbdcccccd                  ; 0049ffaa
    MOV EDI,ESI                         ; 0049ffaf
    MOV ESI,ESP                         ; 0049ffb1
    MOV dword ptr [ESP + 0x4],ECX       ; 0049ffb3
    FADD double ptr [0x005dc99f]        ; 0049ffb7 | DAT_005dc99f
    FXCH ST3                            ; 0049ffbd
    FSTP float ptr [ESP + 0xc]          ; 0049ffbf
    FXCH ST2                            ; 0049ffc3
    FSTP float ptr [ESP + 0x10]         ; 0049ffc5
    FSTP float ptr [ESP + 0x14]         ; 0049ffc9
    MOV ECX,0x6                         ; 0049ffcd
    FXCH                                ; 0049ffd2
    FSTP float ptr [ESP + 0x8]          ; 0049ffd4
    FSTP float ptr [ESP]                ; 0049ffd8
    MOVSD.REP ES:EDI,ESI                ; 0049ffdb
    ADD ESP,0x18                        ; 0049ffdd
    POP EDI                             ; 0049ffe0
    RET                                 ; 0049ffe1

