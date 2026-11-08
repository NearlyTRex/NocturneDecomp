; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00487910(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d2bfe
;   undefined4 DAT_005d2c06
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00487910
        ;   Label: FUN_00487910
    SUB ESP,0x18                        ; 00487911
    MOV EDX,dword ptr [ESP + 0x20]      ; 00487914
    MOV EAX,ESI                         ; 00487918
    FLD double ptr [0x005d2bfe]         ; 0048791a | DAT_005d2bfe
    FLD float ptr [EDX + 0x2b8]         ; 00487920
    FMUL ST1                            ; 00487926
    FLD float ptr [EDX + 0x2c0]         ; 00487928
    FMUL ST2                            ; 0048792e
    FLD float ptr [EDX + 0x2b8]         ; 00487930
    FCHS                                ; 00487936
    FMUL ST3                            ; 00487938
    FLD float ptr [EDX + 0x2c0]         ; 0048793a
    FCHS                                ; 00487940
    FMULP ST4                           ; 00487942
    FLD float ptr [EDX + 0x2bc]         ; 00487944
    MOV ECX,0xbdcccccd                  ; 0048794a
    MOV EDI,ESI                         ; 0048794f
    MOV ESI,ESP                         ; 00487951
    MOV dword ptr [ESP + 0x4],ECX       ; 00487953
    FADD double ptr [0x005d2c06]        ; 00487957 | DAT_005d2c06
    FXCH ST3                            ; 0048795d
    FSTP float ptr [ESP + 0xc]          ; 0048795f
    FXCH ST2                            ; 00487963
    FSTP float ptr [ESP + 0x10]         ; 00487965
    FSTP float ptr [ESP + 0x14]         ; 00487969
    MOV ECX,0x6                         ; 0048796d
    FXCH                                ; 00487972
    FSTP float ptr [ESP + 0x8]          ; 00487974
    FSTP float ptr [ESP]                ; 00487978
    MOVSD.REP ES:EDI,ESI                ; 0048797b
    ADD ESP,0x18                        ; 0048797d
    POP EDI                             ; 00487980
    RET                                 ; 00487981

