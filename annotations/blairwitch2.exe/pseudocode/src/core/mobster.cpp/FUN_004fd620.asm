; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mobster_cpp_FUN_004fd620(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005debed
;   undefined4 DAT_005debf5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd620
        ;   Label: core_mobster.cpp_FUN_004fd620
    PUSH EDI                            ; 004fd621
    PUSH EBP                            ; 004fd622
    MOV EBP,ESP                         ; 004fd623
    SUB ESP,0x60                        ; 004fd625
    AND ESP,0xfffffff8                  ; 004fd628
    MOV EBX,ESI                         ; 004fd62b
    MOV ESI,dword ptr [EBP + 0x10]      ; 004fd62d
    PUSH ESI                            ; 004fd630
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 004fd631
    LEA ESI,[ESP + 0x1c]                ; 004fd637
    LEA EDI,[ESP + 0x4]                 ; 004fd63b
    CALL dword ptr [EAX + 0x24]         ; 004fd63f
    MOV ECX,0x6                         ; 004fd642
    LEA ESI,[ESP + 0x1c]                ; 004fd647
    ADD ESP,0x4                         ; 004fd64b
    MOVSD.REP ES:EDI,ESI                ; 004fd64e
    FLD float ptr [ESP]                 ; 004fd650
    FLD float ptr [ESP + 0x4]           ; 004fd653
    FLD float ptr [ESP + 0x8]           ; 004fd657
    LEA EDI,[ESP + 0x54]                ; 004fd65b
    LEA ESI,[ESP + 0x30]                ; 004fd65f
    FXCH ST2                            ; 004fd663
    FADD float ptr [ESP + 0xc]          ; 004fd665
    FXCH                                ; 004fd669
    FADD float ptr [ESP + 0x10]         ; 004fd66b
    FXCH ST2                            ; 004fd66f
    FADD float ptr [ESP + 0x14]         ; 004fd671
    FXCH                                ; 004fd675
    FSTP float ptr [ESP + 0x30]         ; 004fd677
    FXCH                                ; 004fd67b
    FSTP float ptr [ESP + 0x34]         ; 004fd67d
    FSTP float ptr [ESP + 0x38]         ; 004fd681
    MOVSD ES:EDI,ESI                    ; 004fd685
    MOVSD ES:EDI,ESI                    ; 004fd686
    MOVSD ES:EDI,ESI                    ; 004fd687
    FLD float ptr [0x005debed]          ; 004fd688 | DAT_005debed
    FLD float ptr [ESP + 0x54]          ; 004fd68e
    FMUL ST1                            ; 004fd692
    FLD float ptr [ESP + 0x58]          ; 004fd694
    FMUL ST2                            ; 004fd698
    FLD float ptr [ESP + 0x5c]          ; 004fd69a
    FMULP ST3                           ; 004fd69e
    FLD float ptr [ESP + 0x8]           ; 004fd6a0
    LEA EDI,[ESP + 0x3c]                ; 004fd6a4
    LEA ESI,[ESP + 0x48]                ; 004fd6a8
    FXCH ST2                            ; 004fd6ac
    FSTP float ptr [ESP + 0x48]         ; 004fd6ae
    FSTP float ptr [ESP + 0x4c]         ; 004fd6b2
    FXCH                                ; 004fd6b6
    FSTP float ptr [ESP + 0x50]         ; 004fd6b8
    MOVSD ES:EDI,ESI                    ; 004fd6bc
    MOVSD ES:EDI,ESI                    ; 004fd6bd
    MOVSD ES:EDI,ESI                    ; 004fd6be
    FADD double ptr [0x005debf5]        ; 004fd6bf | DAT_005debf5
    LEA ESI,[ESP + 0x3c]                ; 004fd6c5
    MOV EDI,EBX                         ; 004fd6c9
    FSTP float ptr [ESP + 0x44]         ; 004fd6cb
    MOVSD ES:EDI,ESI                    ; 004fd6cf
    MOVSD ES:EDI,ESI                    ; 004fd6d0
    MOVSD ES:EDI,ESI                    ; 004fd6d1
    MOV EAX,EBX                         ; 004fd6d2
    MOV ESP,EBP                         ; 004fd6d4
    POP EBP                             ; 004fd6d6
    POP EDI                             ; 004fd6d7
    POP EBX                             ; 004fd6d8
    RET                                 ; 004fd6d9

