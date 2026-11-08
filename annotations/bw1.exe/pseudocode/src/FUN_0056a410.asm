; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056a410(int param_1,undefined4 param_2,undefined4 param_3,float param_4)
;
;
; Called Functions:
;   FUN_0056a4b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0056a410
        ;   Label: FUN_0056a410
    PUSH EDI                            ; 0056a411
    SUB ESP,0x30                        ; 0056a412
    PUSH dword ptr [ESP + 0x44]         ; 0056a415
    MOV EDX,dword ptr [ESP + 0x40]      ; 0056a419
    PUSH dword ptr [ESP + 0x44]         ; 0056a41d
    PUSH EDX                            ; 0056a421
    LEA ESI,[ESP + 0x18]                ; 0056a422
    LEA EDI,[ESP + 0x24]                ; 0056a426
    CALL FUN_0056a4b0                   ; 0056a42a
        ;   XREF to: 0056a4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056a4b0()
    LEA ESI,[ESP + 0x18]                ; 0056a42f
    ADD ESP,0xc                         ; 0056a433
    MOVSD ES:EDI,ESI                    ; 0056a436
    MOVSD ES:EDI,ESI                    ; 0056a437
    MOVSD ES:EDI,ESI                    ; 0056a438
    FLD float ptr [ESP + 0x48]          ; 0056a439
    FLD float ptr [ESP + 0x18]          ; 0056a43d
    FMUL ST1                            ; 0056a441
    FLD float ptr [ESP + 0x1c]          ; 0056a443
    FMUL ST2                            ; 0056a447
    FLD float ptr [ESP + 0x20]          ; 0056a449
    FMULP ST3                           ; 0056a44d
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0056a44f
    MOV EDI,ESP                         ; 0056a453
    LEA ESI,[ESP + 0x24]                ; 0056a455
    FXCH                                ; 0056a459
    FSTP float ptr [ESP + 0x24]         ; 0056a45b
    FSTP float ptr [ESP + 0x28]         ; 0056a45f
    FSTP float ptr [ESP + 0x2c]         ; 0056a463
    MOVSD ES:EDI,ESI                    ; 0056a467
    MOVSD ES:EDI,ESI                    ; 0056a468
    MOVSD ES:EDI,ESI                    ; 0056a469
    FLD float ptr [EAX + 0x2344]        ; 0056a46a
    FLD float ptr [EAX + 0x2348]        ; 0056a470
    FLD float ptr [EAX + 0x234c]        ; 0056a476
    FXCH ST2                            ; 0056a47c
    FADD float ptr [ESP]                ; 0056a47e
    FXCH                                ; 0056a481
    FADD float ptr [ESP + 0x4]          ; 0056a483
    FXCH ST2                            ; 0056a487
    FADD float ptr [ESP + 0x8]          ; 0056a489
    FXCH                                ; 0056a48d
    FSTP float ptr [EAX + 0x2344]       ; 0056a48f
    FXCH                                ; 0056a495
    FSTP float ptr [EAX + 0x2348]       ; 0056a497
    FSTP float ptr [EAX + 0x234c]       ; 0056a49d
    ADD ESP,0x30                        ; 0056a4a3
    POP EDI                             ; 0056a4a6
    POP ESI                             ; 0056a4a7
    RET                                 ; 0056a4a8

