; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00569440(undefined4 param_1,float *param_2,float param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2529
;
; Called Functions:
;   FUN_00568d60
;   FUN_00569040
;   FUN_00569f30
;   FUN_005a7520
;   FUN_005b77b0
;   FUN_005b7af0
;   FUN_005b7b30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569440
        ;   Label: FUN_00569440
    PUSH EBP                            ; 00569441
    SUB ESP,0xc8                        ; 00569442
    MOV EBP,dword ptr [ESP + 0xd4]      ; 00569448
    MOV EBX,dword ptr [ESP + 0xd8]      ; 0056944f
    FLD float ptr [ESP + 0xdc]          ; 00569456
    FCOMP double ptr [0x005f2529]       ; 0056945d | DAT_005f2529
    FNSTSW AX                           ; 00569463
    SAHF                                ; 00569465
    JA 0x00569471                       ; 00569466
        ;   XREF to: 00569471 (CONDITIONAL_JUMP)  ; LAB_00569471
    ADD ESP,0xc8                        ; 00569468
    POP EBP                             ; 0056946e
    POP EBX                             ; 0056946f
    RET                                 ; 00569470
    PUSH EDI                            ; 00569471
        ;   Label: LAB_00569471
    PUSH ESI                            ; 00569472
    PUSH EBP                            ; 00569473
    CALL FUN_00569f30                   ; 00569474
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 00569479
    MOV EDX,dword ptr [ESP + 0xe8]      ; 0056947c
    PUSH EDX                            ; 00569483
    PUSH EBP                            ; 00569484
    LEA ESI,[ESP + 0xb4]                ; 00569485
    LEA EDI,[ESP + 0xc0]                ; 0056948c
    CALL FUN_00569040                   ; 00569493
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined FUN_00569040()
    LEA ESI,[ESP + 0xb4]                ; 00569498
    ADD ESP,0x8                         ; 0056949f
    MOVSD ES:EDI,ESI                    ; 005694a2
    MOVSD ES:EDI,ESI                    ; 005694a3
    MOVSD ES:EDI,ESI                    ; 005694a4
    FLD float ptr [EBX]                 ; 005694a5
    FLD float ptr [EBX + 0x4]           ; 005694a7
    FLD float ptr [EBX + 0x8]           ; 005694aa
    LEA EDI,[ESP + 0x94]                ; 005694ad
    LEA ESI,[ESP + 0xc4]                ; 005694b4
    FXCH ST2                            ; 005694bb
    FSUB float ptr [ESP + 0xb8]         ; 005694bd
    FXCH                                ; 005694c4
    FSUB float ptr [ESP + 0xbc]         ; 005694c6
    FXCH ST2                            ; 005694cd
    FSUB float ptr [ESP + 0xc0]         ; 005694cf
    FXCH                                ; 005694d6
    FSTP float ptr [ESP + 0xc4]         ; 005694d8
    FXCH                                ; 005694df
    FSTP float ptr [ESP + 0xc8]         ; 005694e1
    FSTP float ptr [ESP + 0xcc]         ; 005694e8
    MOVSD ES:EDI,ESI                    ; 005694ef
    MOVSD ES:EDI,ESI                    ; 005694f0
    MOVSD ES:EDI,ESI                    ; 005694f1
    LEA ESI,[ESP + 0x94]                ; 005694f2
    PUSH ESI                            ; 005694f9
    LEA ESI,[ESP + 0xa4]                ; 005694fa
    LEA EDI,[ESP + 0x8c]                ; 00569501
    CALL FUN_005a7520                   ; 00569508
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[ESP + 0xa4]                ; 0056950d
    ADD ESP,0x4                         ; 00569514
    MOVSD ES:EDI,ESI                    ; 00569517
    MOVSD ES:EDI,ESI                    ; 00569518
    MOVSD ES:EDI,ESI                    ; 00569519
    PUSH dword ptr [ESP + 0x88]         ; 0056951a
    LEA ESI,[ESP + 0x5c]                ; 00569521
    LEA EDI,[ESP + 0x1c]                ; 00569525
    CALL FUN_005b7af0                   ; 00569529
        ;   XREF to: 005b7af0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7af0()
    LEA ESI,[ESP + 0x5c]                ; 0056952e
    ADD ESP,0x4                         ; 00569532
    MOVSD ES:EDI,ESI                    ; 00569535
    MOVSD ES:EDI,ESI                    ; 00569536
    MOVSD ES:EDI,ESI                    ; 00569537
    MOVSD ES:EDI,ESI                    ; 00569538
    LEA ESI,[ESP + 0x18]                ; 00569539
    PUSH ESI                            ; 0056953d
    PUSH dword ptr [ESP + 0x90]         ; 0056953e
    LEA ESI,[ESP + 0x70]                ; 00569545
    LEA EDI,[ESP + 0x80]                ; 00569549
    CALL FUN_005b7b30                   ; 00569550
        ;   XREF to: 005b7b30 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7b30()
    LEA ESI,[ESP + 0x70]                ; 00569555
    ADD ESP,0x4                         ; 00569559
    MOVSD ES:EDI,ESI                    ; 0056955c
    MOVSD ES:EDI,ESI                    ; 0056955d
    MOVSD ES:EDI,ESI                    ; 0056955e
    MOVSD ES:EDI,ESI                    ; 0056955f
    LEA ESI,[ESP + 0x7c]                ; 00569560
    PUSH ESI                            ; 00569564
    MOV ECX,dword ptr [ESP + 0xf4]      ; 00569565
    PUSH ECX                            ; 0056956c
    LEA ESI,[ESP + 0x44]                ; 0056956d
    LEA EDI,[ESP + 0x14]                ; 00569571
    CALL FUN_005b77b0                   ; 00569575
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77b0()
    LEA ESI,[ESP + 0x44]                ; 0056957a
    ADD ESP,0x8                         ; 0056957e
    MOVSD ES:EDI,ESI                    ; 00569581
    MOVSD ES:EDI,ESI                    ; 00569582
    MOVSD ES:EDI,ESI                    ; 00569583
    MOVSD ES:EDI,ESI                    ; 00569584
    LEA ESI,[ESP + 0xc]                 ; 00569585
    PUSH ESI                            ; 00569589
    LEA ESI,[ESP + 0x30]                ; 0056958a
    LEA EDI,[ESP + 0x50]                ; 0056958e
    CALL FUN_005b77b0                   ; 00569592
        ;   XREF to: 005b77b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77b0()
    ADD ESP,0x8                         ; 00569597
    LEA ESI,[ESP + 0x28]                ; 0056959a
    MOV EBX,dword ptr [ESP + 0xf0]      ; 0056959e
    MOVSD ES:EDI,ESI                    ; 005695a5
    MOVSD ES:EDI,ESI                    ; 005695a6
    MOVSD ES:EDI,ESI                    ; 005695a7
    MOVSD ES:EDI,ESI                    ; 005695a8
    PUSH EBX                            ; 005695a9
    MOV ESI,dword ptr [ESP + 0xec]      ; 005695aa
    PUSH ESI                            ; 005695b1
    LEA ESI,[ESP + 0x50]                ; 005695b2
    PUSH dword ptr [ESP + 0xec]         ; 005695b6
    PUSH ESI                            ; 005695bd
    PUSH EBP                            ; 005695be
    CALL FUN_00568d60                   ; 005695bf
        ;   XREF to: 00568d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00568d60()
    ADD ESP,0x14                        ; 005695c4
    POP ESI                             ; 005695c7
    POP EDI                             ; 005695c8
    ADD ESP,0xc8                        ; 005695c9
    POP EBP                             ; 005695cf
    POP EBX                             ; 005695d0
    RET                                 ; 005695d1

