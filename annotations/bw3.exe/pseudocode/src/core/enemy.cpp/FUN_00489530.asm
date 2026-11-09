; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_enemy_cpp_FUN_00489530(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005bdc6f
;   undefined4 DAT_005bdc77
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489530
        ;   Label: core_enemy.cpp_FUN_00489530
    PUSH EDI                            ; 00489531
    PUSH EBP                            ; 00489532
    MOV EBP,ESP                         ; 00489533
    SUB ESP,0x60                        ; 00489535
    AND ESP,0xfffffff8                  ; 00489538
    MOV EBX,ESI                         ; 0048953b
    MOV ESI,dword ptr [EBP + 0x10]      ; 0048953d
    PUSH ESI                            ; 00489540
    MOV EAX,dword ptr [ESI + 0x154]     ; 00489541
    LEA ESI,[ESP + 0x4]                 ; 00489547
    LEA EDI,[ESP + 0x1c]                ; 0048954b
    CALL dword ptr [EAX + 0x1c]         ; 0048954f
    MOV ECX,0x6                         ; 00489552
    LEA ESI,[ESP + 0x4]                 ; 00489557
    ADD ESP,0x4                         ; 0048955b
    MOVSD.REP ES:EDI,ESI                ; 0048955e
    FLD float ptr [ESP + 0x28]          ; 00489560
    FSUB float ptr [ESP + 0x1c]         ; 00489564
    FMUL double ptr [0x005bdc77]        ; 00489568 | DAT_005bdc77
    FLD float ptr [ESP + 0x18]          ; 0048956e
    FLD float ptr [ESP + 0x1c]          ; 00489572
    FLD float ptr [ESP + 0x20]          ; 00489576
    LEA EDI,[ESP + 0x48]                ; 0048957a
    LEA ESI,[ESP + 0x54]                ; 0048957e
    FXCH ST2                            ; 00489582
    FADD float ptr [ESP + 0x24]         ; 00489584
    FXCH                                ; 00489588
    FADD float ptr [ESP + 0x28]         ; 0048958a
    FXCH ST2                            ; 0048958e
    FADD float ptr [ESP + 0x2c]         ; 00489590
    FXCH                                ; 00489594
    FSTP float ptr [ESP + 0x54]         ; 00489596
    FXCH                                ; 0048959a
    FSTP float ptr [ESP + 0x58]         ; 0048959c
    FSTP float ptr [ESP + 0x5c]         ; 004895a0
    MOVSD ES:EDI,ESI                    ; 004895a4
    MOVSD ES:EDI,ESI                    ; 004895a5
    MOVSD ES:EDI,ESI                    ; 004895a6
    FLD float ptr [0x005bdc6f]          ; 004895a7 | DAT_005bdc6f
    FLD float ptr [ESP + 0x48]          ; 004895ad
    FMUL ST1                            ; 004895b1
    FLD float ptr [ESP + 0x4c]          ; 004895b3
    FMUL ST2                            ; 004895b7
    FLD float ptr [ESP + 0x50]          ; 004895b9
    FMULP ST3                           ; 004895bd
    FLD float ptr [ESP + 0x28]          ; 004895bf
    LEA EDI,[ESP + 0x30]                ; 004895c3
    LEA ESI,[ESP + 0x3c]                ; 004895c7
    FXCH ST2                            ; 004895cb
    FSTP float ptr [ESP + 0x3c]         ; 004895cd
    FSTP float ptr [ESP + 0x40]         ; 004895d1
    FXCH                                ; 004895d5
    FSTP float ptr [ESP + 0x44]         ; 004895d7
    MOVSD ES:EDI,ESI                    ; 004895db
    MOVSD ES:EDI,ESI                    ; 004895dc
    MOVSD ES:EDI,ESI                    ; 004895dd
    FSUBRP                              ; 004895de
    LEA ESI,[ESP + 0x30]                ; 004895e0
    MOV EDI,EBX                         ; 004895e4
    FSTP float ptr [ESP + 0x34]         ; 004895e6
    MOVSD ES:EDI,ESI                    ; 004895ea
    MOVSD ES:EDI,ESI                    ; 004895eb
    MOVSD ES:EDI,ESI                    ; 004895ec
    MOV EAX,EBX                         ; 004895ed
    MOV ESP,EBP                         ; 004895ef
    POP EBP                             ; 004895f1
    POP EDI                             ; 004895f2
    POP EBX                             ; 004895f3
    RET                                 ; 004895f4

