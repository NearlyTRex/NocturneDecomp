; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0042b430(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d5629
;
; Called Functions:
;   FUN_00408b40
;   FUN_00524a40
;   FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b430
        ;   Label: FUN_0042b430
    PUSH EBP                            ; 0042b431
    SUB ESP,0x7c                        ; 0042b432
    MOV EBP,dword ptr [ESP + 0x88]      ; 0042b435
    PUSH 0xc                            ; 0042b43c
    LEA EBX,[EBP + 0x158]               ; 0042b43e
    PUSH EBX                            ; 0042b444
    CALL FUN_00524a40                   ; 0042b445
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00524a40()
    MOV dword ptr [ESP + 0x80],EAX      ; 0042b44a
    FLD float ptr [ESP + 0x80]          ; 0042b451
    FLDZ                                ; 0042b458
    ADD ESP,0x8                         ; 0042b45a
    FCOMPP                              ; 0042b45d
    FNSTSW AX                           ; 0042b45f
    SAHF                                ; 0042b461
    JC 0x0042b46c                       ; 0042b462
        ;   XREF to: 0042b46c (CONDITIONAL_JUMP)  ; LAB_0042b46c
    XOR EAX,EAX                         ; 0042b464
    ADD ESP,0x7c                        ; 0042b466
    POP EBP                             ; 0042b469
    POP EBX                             ; 0042b46a
    RET                                 ; 0042b46b
    PUSH EDI                            ; 0042b46c
        ;   Label: LAB_0042b46c
    PUSH ESI                            ; 0042b46d
    MOV EDX,dword ptr [EBP + 0xc290]    ; 0042b46e
    PUSH EDX                            ; 0042b474
    PUSH EBX                            ; 0042b475
    LEA ESI,[ESP + 0x70]                ; 0042b476
    LEA EDI,[ESP + 0x10]                ; 0042b47a
    CALL FUN_00569130                   ; 0042b47e
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA ESI,[ESP + 0x70]                ; 0042b483
    ADD ESP,0x8                         ; 0042b487
    MOVSD ES:EDI,ESI                    ; 0042b48a
    MOVSD ES:EDI,ESI                    ; 0042b48b
    MOVSD ES:EDI,ESI                    ; 0042b48c
    MOV ECX,dword ptr [EBP + 0xc294]    ; 0042b48d
    PUSH ECX                            ; 0042b493
    PUSH EBX                            ; 0042b494
    LEA ESI,[ESP + 0x40]                ; 0042b495
    LEA EDI,[ESP + 0x58]                ; 0042b499
    CALL FUN_00569130                   ; 0042b49d
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    ADD ESP,0x8                         ; 0042b4a2
    LEA ESI,[ESP + 0x38]                ; 0042b4a5
    FLD float ptr [ESP + 0x8]           ; 0042b4a9
    FLD float ptr [ESP + 0xc]           ; 0042b4ad
    MOVSD ES:EDI,ESI                    ; 0042b4b1
    MOVSD ES:EDI,ESI                    ; 0042b4b2
    MOVSD ES:EDI,ESI                    ; 0042b4b3
    FLD float ptr [ESP + 0x10]          ; 0042b4b4
    LEA EDI,[ESP + 0x44]                ; 0042b4b8
    LEA ESI,[ESP + 0x74]                ; 0042b4bc
    FXCH ST2                            ; 0042b4c0
    FADD float ptr [ESP + 0x50]         ; 0042b4c2
    FXCH                                ; 0042b4c6
    FADD float ptr [ESP + 0x54]         ; 0042b4c8
    FXCH ST2                            ; 0042b4cc
    FADD float ptr [ESP + 0x58]         ; 0042b4ce
    FXCH                                ; 0042b4d2
    FSTP float ptr [ESP + 0x74]         ; 0042b4d4
    FXCH                                ; 0042b4d8
    FSTP float ptr [ESP + 0x78]         ; 0042b4da
    FSTP float ptr [ESP + 0x7c]         ; 0042b4de
    MOVSD ES:EDI,ESI                    ; 0042b4e2
    MOVSD ES:EDI,ESI                    ; 0042b4e3
    MOVSD ES:EDI,ESI                    ; 0042b4e4
    FLD float ptr [0x005d5629]          ; 0042b4e5 | DAT_005d5629
    FLD float ptr [ESP + 0x44]          ; 0042b4eb
    FMUL ST1                            ; 0042b4ef
    FLD float ptr [ESP + 0x48]          ; 0042b4f1
    FMUL ST2                            ; 0042b4f5
    LEA EAX,[ESP + 0x20]                ; 0042b4f7
    FLD float ptr [ESP + 0x4c]          ; 0042b4fb
    FMULP ST3                           ; 0042b4ff
    PUSH EAX                            ; 0042b501
    LEA EDI,[ESP + 0x24]                ; 0042b502
    LEA ESI,[ESP + 0x18]                ; 0042b506
    FXCH                                ; 0042b50a
    FSTP float ptr [ESP + 0x18]         ; 0042b50c
    FSTP float ptr [ESP + 0x1c]         ; 0042b510
    FSTP float ptr [ESP + 0x20]         ; 0042b514
    MOVSD ES:EDI,ESI                    ; 0042b518
    MOVSD ES:EDI,ESI                    ; 0042b519
    MOVSD ES:EDI,ESI                    ; 0042b51a
    PUSH EBP                            ; 0042b51b
    LEA ESI,[ESP + 0x64]                ; 0042b51c
    LEA EDI,[ESP + 0x34]                ; 0042b520
    CALL FUN_00408b40                   ; 0042b524
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x64]                ; 0042b529
    ADD ESP,0x8                         ; 0042b52d
    LEA EAX,[ESP + 0x2c]                ; 0042b530
    MOV EBX,dword ptr [ESP + 0x94]      ; 0042b534
    MOVSD ES:EDI,ESI                    ; 0042b53b
    MOVSD ES:EDI,ESI                    ; 0042b53c
    MOVSD ES:EDI,ESI                    ; 0042b53d
    CMP EAX,EBX                         ; 0042b53e
    JZ 0x0042b556                       ; 0042b540
        ;   XREF to: 0042b556 (CONDITIONAL_JUMP)  ; LAB_0042b556
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042b542
    MOV dword ptr [EBX],EAX             ; 0042b546
    MOV EAX,dword ptr [ESP + 0x30]      ; 0042b548
    MOV dword ptr [EBX + 0x4],EAX       ; 0042b54c
    MOV EAX,dword ptr [ESP + 0x34]      ; 0042b54f
    MOV dword ptr [EBX + 0x8],EAX       ; 0042b553
    MOV EAX,0x1                         ; 0042b556
        ;   Label: LAB_0042b556
    POP ESI                             ; 0042b55b
    POP EDI                             ; 0042b55c
    ADD ESP,0x7c                        ; 0042b55d
    POP EBP                             ; 0042b560
    POP EBX                             ; 0042b561
    RET                                 ; 0042b562

