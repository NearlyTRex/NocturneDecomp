; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059b8d0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f80ac
;   undefined4 DAT_005f80b4
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0059b8d0
        ;   Label: FUN_0059b8d0
    SUB ESP,0x18                        ; 0059b8d1
    MOV EDX,dword ptr [ESP + 0x20]      ; 0059b8d4
    MOV EAX,ESI                         ; 0059b8d8
    FLD double ptr [0x005f80ac]         ; 0059b8da | DAT_005f80ac
    FLD float ptr [EDX + 0x160]         ; 0059b8e0
    FMUL ST1                            ; 0059b8e6
    FLD float ptr [EDX + 0x168]         ; 0059b8e8
    FMUL ST2                            ; 0059b8ee
    FLD float ptr [EDX + 0x160]         ; 0059b8f0
    FCHS                                ; 0059b8f6
    FMUL ST3                            ; 0059b8f8
    FLD float ptr [EDX + 0x168]         ; 0059b8fa
    FCHS                                ; 0059b900
    FMULP ST4                           ; 0059b902
    FLD float ptr [EDX + 0x164]         ; 0059b904
    MOV ECX,0xbdcccccd                  ; 0059b90a
    MOV EDI,ESI                         ; 0059b90f
    MOV ESI,ESP                         ; 0059b911
    MOV dword ptr [ESP + 0x4],ECX       ; 0059b913
    FADD double ptr [0x005f80b4]        ; 0059b917 | DAT_005f80b4
    FXCH ST3                            ; 0059b91d
    FSTP float ptr [ESP + 0xc]          ; 0059b91f
    FXCH ST2                            ; 0059b923
    FSTP float ptr [ESP + 0x10]         ; 0059b925
    FSTP float ptr [ESP + 0x14]         ; 0059b929
    MOV ECX,0x6                         ; 0059b92d
    FXCH                                ; 0059b932
    FSTP float ptr [ESP + 0x8]          ; 0059b934
    FSTP float ptr [ESP]                ; 0059b938
    MOVSD.REP ES:EDI,ESI                ; 0059b93b
    ADD ESP,0x18                        ; 0059b93d
    POP EDI                             ; 0059b940
    RET                                 ; 0059b941

