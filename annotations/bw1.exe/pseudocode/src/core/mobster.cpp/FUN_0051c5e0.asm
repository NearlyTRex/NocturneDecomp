; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mobster_cpp_FUN_0051c5e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e9c3a
;   undefined4 DAT_005e9c42
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c5e0
        ;   Label: core_mobster.cpp_FUN_0051c5e0
    PUSH EDI                            ; 0051c5e1
    PUSH EBP                            ; 0051c5e2
    MOV EBP,ESP                         ; 0051c5e3
    SUB ESP,0x60                        ; 0051c5e5
    AND ESP,0xfffffff8                  ; 0051c5e8
    MOV EBX,ESI                         ; 0051c5eb
    MOV ESI,dword ptr [EBP + 0x10]      ; 0051c5ed
    PUSH ESI                            ; 0051c5f0
    MOV EAX,dword ptr [ESI + 0x154]     ; 0051c5f1
    LEA ESI,[ESP + 0x1c]                ; 0051c5f7
    LEA EDI,[ESP + 0x4]                 ; 0051c5fb
    CALL dword ptr [EAX + 0x1c]         ; 0051c5ff
    MOV ECX,0x6                         ; 0051c602
    LEA ESI,[ESP + 0x1c]                ; 0051c607
    ADD ESP,0x4                         ; 0051c60b
    MOVSD.REP ES:EDI,ESI                ; 0051c60e
    FLD float ptr [ESP]                 ; 0051c610
    FLD float ptr [ESP + 0x4]           ; 0051c613
    FLD float ptr [ESP + 0x8]           ; 0051c617
    LEA EDI,[ESP + 0x54]                ; 0051c61b
    LEA ESI,[ESP + 0x30]                ; 0051c61f
    FXCH ST2                            ; 0051c623
    FADD float ptr [ESP + 0xc]          ; 0051c625
    FXCH                                ; 0051c629
    FADD float ptr [ESP + 0x10]         ; 0051c62b
    FXCH ST2                            ; 0051c62f
    FADD float ptr [ESP + 0x14]         ; 0051c631
    FXCH                                ; 0051c635
    FSTP float ptr [ESP + 0x30]         ; 0051c637
    FXCH                                ; 0051c63b
    FSTP float ptr [ESP + 0x34]         ; 0051c63d
    FSTP float ptr [ESP + 0x38]         ; 0051c641
    MOVSD ES:EDI,ESI                    ; 0051c645
    MOVSD ES:EDI,ESI                    ; 0051c646
    MOVSD ES:EDI,ESI                    ; 0051c647
    FLD float ptr [0x005e9c3a]          ; 0051c648 | DAT_005e9c3a
    FLD float ptr [ESP + 0x54]          ; 0051c64e
    FMUL ST1                            ; 0051c652
    FLD float ptr [ESP + 0x58]          ; 0051c654
    FMUL ST2                            ; 0051c658
    FLD float ptr [ESP + 0x5c]          ; 0051c65a
    FMULP ST3                           ; 0051c65e
    FLD float ptr [ESP + 0x8]           ; 0051c660
    LEA EDI,[ESP + 0x3c]                ; 0051c664
    LEA ESI,[ESP + 0x48]                ; 0051c668
    FXCH ST2                            ; 0051c66c
    FSTP float ptr [ESP + 0x48]         ; 0051c66e
    FSTP float ptr [ESP + 0x4c]         ; 0051c672
    FXCH                                ; 0051c676
    FSTP float ptr [ESP + 0x50]         ; 0051c678
    MOVSD ES:EDI,ESI                    ; 0051c67c
    MOVSD ES:EDI,ESI                    ; 0051c67d
    MOVSD ES:EDI,ESI                    ; 0051c67e
    FADD double ptr [0x005e9c42]        ; 0051c67f | DAT_005e9c42
    LEA ESI,[ESP + 0x3c]                ; 0051c685
    MOV EDI,EBX                         ; 0051c689
    FSTP float ptr [ESP + 0x44]         ; 0051c68b
    MOVSD ES:EDI,ESI                    ; 0051c68f
    MOVSD ES:EDI,ESI                    ; 0051c690
    MOVSD ES:EDI,ESI                    ; 0051c691
    MOV EAX,EBX                         ; 0051c692
    MOV ESP,EBP                         ; 0051c694
    POP EBP                             ; 0051c696
    POP EDI                             ; 0051c697
    POP EBX                             ; 0051c698
    RET                                 ; 0051c699

