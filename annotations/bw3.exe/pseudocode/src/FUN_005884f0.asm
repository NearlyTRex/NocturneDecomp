; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_005884f0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d8397
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005884f0
        ;   Label: FUN_005884f0
    SUB ESP,0x4c                        ; 005884f1
    MOV ESI,dword ptr [ESP + 0x54]      ; 005884f4
    MOV dword ptr [ESP + 0x48],0x3f800000 ; 005884f8
    TEST ESI,ESI                        ; 00588500
    JNZ 0x0058850d                      ; 00588502
        ;   XREF to: 0058850d (CONDITIONAL_JUMP)  ; LAB_0058850d
    MOV EAX,dword ptr [ESP + 0x48]      ; 00588504
    ADD ESP,0x4c                        ; 00588508
    POP ESI                             ; 0058850b
    RET                                 ; 0058850c
    PUSH EDI                            ; 0058850d
        ;   Label: LAB_0058850d
    PUSH ESI                            ; 0058850e
    MOV EAX,dword ptr [ESI + 0x154]     ; 0058850f
    LEA ESI,[ESP + 0x20]                ; 00588515
    LEA EDI,[ESP + 0x8]                 ; 00588519
    CALL dword ptr [EAX + 0x1c]         ; 0058851d
    MOV ECX,0x6                         ; 00588520
    LEA ESI,[ESP + 0x20]                ; 00588525
    ADD ESP,0x4                         ; 00588529
    LEA EAX,[ESP + 0x4]                 ; 0058852c
    MOVSD.REP ES:EDI,ESI                ; 00588530
    FLD float ptr [EAX + 0xc]           ; 00588532
    FLD float ptr [EAX + 0x10]          ; 00588535
    FLD float ptr [EAX + 0x14]          ; 00588538
    LEA EDI,[ESP + 0x40]                ; 0058853b
    LEA ESI,[ESP + 0x34]                ; 0058853f
    FXCH ST2                            ; 00588543
    FSUB float ptr [ESP + 0x4]          ; 00588545
    FXCH                                ; 00588549
    FSUB float ptr [ESP + 0x8]          ; 0058854b
    FXCH ST2                            ; 0058854f
    FSUB float ptr [ESP + 0xc]          ; 00588551
    FXCH                                ; 00588555
    FSTP float ptr [ESP + 0x34]         ; 00588557
    FXCH                                ; 0058855b
    FSTP float ptr [ESP + 0x38]         ; 0058855d
    FSTP float ptr [ESP + 0x3c]         ; 00588561
    MOVSD ES:EDI,ESI                    ; 00588565
    MOVSD ES:EDI,ESI                    ; 00588566
    MOVSD ES:EDI,ESI                    ; 00588567
    FLD float ptr [ESP + 0x48]          ; 00588568
    FMUL double ptr [0x005d8397]        ; 0058856c | DAT_005d8397
    FLD1                                ; 00588572
    FADDP                               ; 00588574
    FSTP float ptr [ESP + 0x4c]         ; 00588576
    POP EDI                             ; 0058857a
    MOV EAX,dword ptr [ESP + 0x48]      ; 0058857b
    ADD ESP,0x4c                        ; 0058857f
    POP ESI                             ; 00588582
    RET                                 ; 00588583

