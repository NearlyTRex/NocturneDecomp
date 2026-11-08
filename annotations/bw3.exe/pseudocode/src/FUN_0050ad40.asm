; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0050ad40(int param_1)
;
;
; XREF[9]:
;   FUN_004101f0 at 00410205
;   FUN_004d2620 at 004d265a
;   FUN_00509af0 at 00509b05
;   FUN_0050a530 at 0050a583
;   FUN_005274e0 at 00527533
;   FUN_00599e40 at 00599e79
;   FUN_0059a970 at 0059a9a9
;   FUN_0059b540 at 0059b579
;   FUN_005a1b50 at 005a1b65
;
; Referenced Globals:
;   undefined4 DAT_01ec1518
;
; Called Functions:
;   FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050ad40
        ;   Label: FUN_0050ad40
    PUSH ESI                            ; 0050ad41
    PUSH EDI                            ; 0050ad42
    PUSH EBP                            ; 0050ad43
    MOV EDI,dword ptr [0x01ec1518]      ; 0050ad44 | DAT_01ec1518
    MOV ESI,dword ptr [ESP + 0x14]      ; 0050ad4a
    XOR ECX,ECX                         ; 0050ad4e
    TEST EDI,EDI                        ; 0050ad50
    JLE 0x0050ad71                      ; 0050ad52
        ;   XREF to: 0050ad71 (CONDITIONAL_JUMP)  ; LAB_0050ad71
    LEA EBX,[EDI*0x4 + 0x0]             ; 0050ad54
    XOR EAX,EAX                         ; 0050ad5b
    MOV EBP,dword ptr [EAX + 0x1ec151c] ; 0050ad5d
        ;   Label: LAB_0050ad5d
    LEA EDX,[EAX + 0x4]                 ; 0050ad63
    CMP ESI,EBP                         ; 0050ad66
    JZ 0x0050ad7e                       ; 0050ad68
        ;   XREF to: 0050ad7e (CONDITIONAL_JUMP)  ; LAB_0050ad7e
    MOV EAX,EDX                         ; 0050ad6a
    INC ECX                             ; 0050ad6c
    CMP EDX,EBX                         ; 0050ad6d
    JL 0x0050ad5d                       ; 0050ad6f
        ;   XREF to: 0050ad5d (CONDITIONAL_JUMP)  ; LAB_0050ad5d
    MOV EAX,ESI                         ; 0050ad71
        ;   Label: LAB_0050ad71
    MOV dword ptr [0x01ec1518],EDI      ; 0050ad73 | DAT_01ec1518
    POP EBP                             ; 0050ad79
    POP EDI                             ; 0050ad7a
    POP ESI                             ; 0050ad7b
    POP EBX                             ; 0050ad7c
    RET                                 ; 0050ad7d
    DEC EDI                             ; 0050ad7e
        ;   Label: LAB_0050ad7e
    MOV EBX,EDI                         ; 0050ad7f
    SUB EBX,ECX                         ; 0050ad81
    LEA ECX,[EBX*0x4 + 0x0]             ; 0050ad83
    PUSH ECX                            ; 0050ad8a
    ADD EDX,0x1ec151c                   ; 0050ad8b
    PUSH EDX                            ; 0050ad91
    ADD EAX,0x1ec151c                   ; 0050ad92
    PUSH EAX                            ; 0050ad97
    MOV dword ptr [0x01ec1518],EDI      ; 0050ad98 | DAT_01ec1518
    CALL FUN_005a54c0                   ; 0050ad9e
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a54c0()
    MOV EDI,dword ptr [0x01ec1518]      ; 0050ada3 | DAT_01ec1518
    XOR EAX,EAX                         ; 0050ada9
    ADD ESP,0xc                         ; 0050adab
    MOV dword ptr [EDI*0x4 + 0x1ec151c],EAX ; 0050adae
    MOV EAX,ESI                         ; 0050adb5
    MOV dword ptr [0x01ec1518],EDI      ; 0050adb7 | DAT_01ec1518
    POP EBP                             ; 0050adbd
    POP EDI                             ; 0050adbe
    POP ESI                             ; 0050adbf
    POP EBX                             ; 0050adc0
    RET                                 ; 0050adc1

