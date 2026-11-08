; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00438830(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005cdfd2
;   undefined4 DAT_005cdfda
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00438830
        ;   Label: FUN_00438830
    SUB ESP,0x18                        ; 00438831
    MOV EDX,dword ptr [ESP + 0x20]      ; 00438834
    MOV EAX,ESI                         ; 00438838
    FLD double ptr [0x005cdfd2]         ; 0043883a | DAT_005cdfd2
    FLD float ptr [EDX + 0x884]         ; 00438840
    FMUL ST1                            ; 00438846
    FLD float ptr [EDX + 0x88c]         ; 00438848
    FMUL ST2                            ; 0043884e
    FLD float ptr [EDX + 0x884]         ; 00438850
    FCHS                                ; 00438856
    FMUL ST3                            ; 00438858
    FLD float ptr [EDX + 0x88c]         ; 0043885a
    FCHS                                ; 00438860
    FMULP ST4                           ; 00438862
    FLD float ptr [EDX + 0x888]         ; 00438864
    MOV ECX,0xbdcccccd                  ; 0043886a
    MOV EDI,ESI                         ; 0043886f
    MOV ESI,ESP                         ; 00438871
    MOV dword ptr [ESP + 0x4],ECX       ; 00438873
    FADD double ptr [0x005cdfda]        ; 00438877 | DAT_005cdfda
    FXCH ST3                            ; 0043887d
    FSTP float ptr [ESP + 0xc]          ; 0043887f
    FXCH ST2                            ; 00438883
    FSTP float ptr [ESP + 0x10]         ; 00438885
    FSTP float ptr [ESP + 0x14]         ; 00438889
    MOV ECX,0x6                         ; 0043888d
    FXCH                                ; 00438892
    FSTP float ptr [ESP + 0x8]          ; 00438894
    FSTP float ptr [ESP]                ; 00438898
    MOVSD.REP ES:EDI,ESI                ; 0043889b
    ADD ESP,0x18                        ; 0043889d
    POP EDI                             ; 004388a0
    RET                                 ; 004388a1

