; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c04b0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e077a
;   undefined4 DAT_005e0782
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c04b0
        ;   Label: FUN_004c04b0
    PUSH EDI                            ; 004c04b1
    SUB ESP,0x20                        ; 004c04b2
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004c04b5
    MOV EDX,ESI                         ; 004c04b9
    FLD float ptr [ECX + 0x158]         ; 004c04bb
    FLD ST0                             ; 004c04c1
    FLD double ptr [0x005e077a]         ; 004c04c3 | DAT_005e077a
    FXCH                                ; 004c04c9
    FMUL ST1                            ; 004c04cb
    FXCH ST2                            ; 004c04cd
    FLD double ptr [0x005e0782]         ; 004c04cf | DAT_005e0782
    FXCH                                ; 004c04d5
    FMUL ST1                            ; 004c04d7
    FLD float ptr [ECX + 0x160]         ; 004c04d9
    FMUL ST3                            ; 004c04df
    FMULP ST2                           ; 004c04e1
    MOV EDI,ESI                         ; 004c04e3
    MOV EAX,dword ptr [ECX + 0x15c]     ; 004c04e5
    XOR EBX,EBX                         ; 004c04eb
    MOV ECX,0x6                         ; 004c04ed
    MOV ESI,ESP                         ; 004c04f2
    MOV dword ptr [ESP + 0x4],EBX       ; 004c04f4
    MOV dword ptr [ESP + 0x10],EAX      ; 004c04f8
    FXCH ST3                            ; 004c04fc
    FSTP float ptr [ESP]                ; 004c04fe
    FXCH ST2                            ; 004c0501
    FSTP float ptr [ESP + 0xc]          ; 004c0503
    FSTP float ptr [ESP + 0x8]          ; 004c0507
    FSTP float ptr [ESP + 0x14]         ; 004c050b
    MOVSD.REP ES:EDI,ESI                ; 004c050f
    MOV EAX,EDX                         ; 004c0511
    ADD ESP,0x20                        ; 004c0513
    POP EDI                             ; 004c0516
    POP EBX                             ; 004c0517
    RET                                 ; 004c0518

