; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004483a0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b9aa9
;   undefined4 DAT_005b9ab1
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004483a0
        ;   Label: FUN_004483a0
    SUB ESP,0x18                        ; 004483a1
    MOV EDX,dword ptr [ESP + 0x20]      ; 004483a4
    MOV EAX,ESI                         ; 004483a8
    FLD double ptr [0x005b9aa9]         ; 004483aa | DAT_005b9aa9
    FLD float ptr [EDX + 0x158]         ; 004483b0
    FMUL ST1                            ; 004483b6
    FLD float ptr [EDX + 0x160]         ; 004483b8
    FMUL ST2                            ; 004483be
    FLD float ptr [EDX + 0x158]         ; 004483c0
    FCHS                                ; 004483c6
    FMUL ST3                            ; 004483c8
    FLD float ptr [EDX + 0x160]         ; 004483ca
    FCHS                                ; 004483d0
    FMULP ST4                           ; 004483d2
    FLD float ptr [EDX + 0x15c]         ; 004483d4
    MOV ECX,0xbdcccccd                  ; 004483da
    MOV EDI,ESI                         ; 004483df
    MOV ESI,ESP                         ; 004483e1
    MOV dword ptr [ESP + 0x4],ECX       ; 004483e3
    FADD double ptr [0x005b9ab1]        ; 004483e7 | DAT_005b9ab1
    FXCH ST3                            ; 004483ed
    FSTP float ptr [ESP + 0xc]          ; 004483ef
    FXCH ST2                            ; 004483f3
    FSTP float ptr [ESP + 0x10]         ; 004483f5
    FSTP float ptr [ESP + 0x14]         ; 004483f9
    MOV ECX,0x6                         ; 004483fd
    FXCH                                ; 00448402
    FSTP float ptr [ESP + 0x8]          ; 00448404
    FSTP float ptr [ESP]                ; 00448408
    MOVSD.REP ES:EDI,ESI                ; 0044840b
    ADD ESP,0x18                        ; 0044840d
    POP EDI                             ; 00448410
    RET                                 ; 00448411

