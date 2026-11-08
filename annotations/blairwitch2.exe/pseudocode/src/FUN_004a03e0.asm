; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a03e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d58a5
;   undefined4 DAT_005d58ad
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004a03e0
        ;   Label: FUN_004a03e0
    SUB ESP,0x18                        ; 004a03e1
    MOV EDX,dword ptr [ESP + 0x20]      ; 004a03e4
    MOV EAX,ESI                         ; 004a03e8
    FLD double ptr [0x005d58a5]         ; 004a03ea | DAT_005d58a5
    FLD float ptr [EDX + 0x2b4]         ; 004a03f0
    FMUL ST1                            ; 004a03f6
    FLD float ptr [EDX + 0x2bc]         ; 004a03f8
    FMUL ST2                            ; 004a03fe
    FLD float ptr [EDX + 0x2b4]         ; 004a0400
    FCHS                                ; 004a0406
    FMUL ST3                            ; 004a0408
    FLD float ptr [EDX + 0x2bc]         ; 004a040a
    FCHS                                ; 004a0410
    FMULP ST4                           ; 004a0412
    FLD float ptr [EDX + 0x2b8]         ; 004a0414
    MOV ECX,0xbdcccccd                  ; 004a041a
    MOV EDI,ESI                         ; 004a041f
    MOV ESI,ESP                         ; 004a0421
    MOV dword ptr [ESP + 0x4],ECX       ; 004a0423
    FADD double ptr [0x005d58ad]        ; 004a0427 | DAT_005d58ad
    FXCH ST3                            ; 004a042d
    FSTP float ptr [ESP + 0xc]          ; 004a042f
    FXCH ST2                            ; 004a0433
    FSTP float ptr [ESP + 0x10]         ; 004a0435
    FSTP float ptr [ESP + 0x14]         ; 004a0439
    MOV ECX,0x6                         ; 004a043d
    FXCH                                ; 004a0442
    FSTP float ptr [ESP + 0x8]          ; 004a0444
    FSTP float ptr [ESP]                ; 004a0448
    MOVSD.REP ES:EDI,ESI                ; 004a044b
    ADD ESP,0x18                        ; 004a044d
    POP EDI                             ; 004a0450
    RET                                 ; 004a0451

