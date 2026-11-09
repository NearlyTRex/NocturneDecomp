; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_wateract_cpp_FUN_00587650(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005edfb6
;   undefined4 DAT_005edfbe
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00587650
        ;   Label: core_wateract.cpp_FUN_00587650
    SUB ESP,0x18                        ; 00587651
    MOV EDX,dword ptr [ESP + 0x20]      ; 00587654
    MOV EAX,ESI                         ; 00587658
    FLD double ptr [0x005edfb6]         ; 0058765a | DAT_005edfb6
    FLD float ptr [EDX + 0x2b4]         ; 00587660
    FMUL ST1                            ; 00587666
    FLD float ptr [EDX + 0x2bc]         ; 00587668
    FMUL ST2                            ; 0058766e
    FLD float ptr [EDX + 0x2b4]         ; 00587670
    FCHS                                ; 00587676
    FMUL ST3                            ; 00587678
    FLD float ptr [EDX + 0x2bc]         ; 0058767a
    FCHS                                ; 00587680
    FMULP ST4                           ; 00587682
    FLD float ptr [EDX + 0x2b8]         ; 00587684
    MOV ECX,0xbdcccccd                  ; 0058768a
    MOV EDI,ESI                         ; 0058768f
    MOV ESI,ESP                         ; 00587691
    MOV dword ptr [ESP + 0x4],ECX       ; 00587693
    FADD double ptr [0x005edfbe]        ; 00587697 | DAT_005edfbe
    FXCH ST3                            ; 0058769d
    FSTP float ptr [ESP + 0xc]          ; 0058769f
    FXCH ST2                            ; 005876a3
    FSTP float ptr [ESP + 0x10]         ; 005876a5
    FSTP float ptr [ESP + 0x14]         ; 005876a9
    MOV ECX,0x6                         ; 005876ad
    FXCH                                ; 005876b2
    FSTP float ptr [ESP + 0x8]          ; 005876b4
    FSTP float ptr [ESP]                ; 005876b8
    MOVSD.REP ES:EDI,ESI                ; 005876bb
    ADD ESP,0x18                        ; 005876bd
    POP EDI                             ; 005876c0
    RET                                 ; 005876c1

