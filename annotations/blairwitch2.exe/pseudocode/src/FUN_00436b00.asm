; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00436b00(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f46a0
;   undefined4 DAT_005f46a4
;
; Called Functions:
;   FUN_00487db0
;   FUN_005478b0
;   FUN_005b7f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436b00
        ;   Label: FUN_00436b00
    PUSH ESI                            ; 00436b01
    PUSH EDI                            ; 00436b02
    MOV EBX,dword ptr [ESP + 0x10]      ; 00436b03
    PUSH EBX                            ; 00436b07
    CALL FUN_00487db0                   ; 00436b08
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00487db0()
    ADD ESP,0x4                         ; 00436b0d
    PUSH 0x5f39a0                       ; 00436b10
    PUSH 0x18                           ; 00436b15
    ADD EAX,0x10c18                     ; 00436b17
    PUSH EAX                            ; 00436b1c
    CALL FUN_005b7f5f                   ; 00436b1d
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined FUN_005b7f5f()
    ADD ESP,0xc                         ; 00436b22
    LEA EBX,[EAX + 0xfffef3e8]          ; 00436b25
    PUSH 0x5cdc46                       ; 00436b2b
    LEA EAX,[EBX + 0x2b4]               ; 00436b30
    PUSH EAX                            ; 00436b36
    MOV ESI,0x5cdc55                    ; 00436b37
    MOV dword ptr [EBX + 0x2b0],0x5f46b4 ; 00436b3c
    CALL FUN_005478b0                   ; 00436b46
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    LEA EDI,[EBX + 0x10af8]             ; 00436b4b
    FLD float ptr [0x005f46a0]          ; 00436b51 | DAT_005f46a0
    MOV dword ptr [EBX + 0x3430],0x3f19999a ; 00436b57
    FLD float ptr [0x005f46a4]          ; 00436b61 | DAT_005f46a4
    MOV dword ptr [EBX + 0x3434],0x40000000 ; 00436b67
    ADD ESP,0x8                         ; 00436b71
    FXCH                                ; 00436b74
    FSTP float ptr [EBX + 0x3438]       ; 00436b76
    FSTP float ptr [EBX + 0x343c]       ; 00436b7c
    PUSH EDI                            ; 00436b82
    MOV AL,byte ptr [ESI]               ; 00436b83
        ;   Label: LAB_00436b83
    MOV byte ptr [EDI],AL               ; 00436b85
    CMP AL,0x0                          ; 00436b87
    JZ 0x00436b9b                       ; 00436b89
        ;   XREF to: 00436b9b (CONDITIONAL_JUMP)  ; LAB_00436b9b
    MOV AL,byte ptr [ESI + 0x1]         ; 00436b8b
    ADD ESI,0x2                         ; 00436b8e
    MOV byte ptr [EDI + 0x1],AL         ; 00436b91
    ADD EDI,0x2                         ; 00436b94
    CMP AL,0x0                          ; 00436b97
    JNZ 0x00436b83                      ; 00436b99
        ;   XREF to: 00436b83 (CONDITIONAL_JUMP)  ; LAB_00436b83
    POP EDI                             ; 00436b9b
        ;   Label: LAB_00436b9b
    MOV ESI,0x5cdc5a                    ; 00436b9c
    LEA EDI,[EBX + 0x10ba8]             ; 00436ba1
    PUSH EDI                            ; 00436ba7
    MOV AL,byte ptr [ESI]               ; 00436ba8
        ;   Label: LAB_00436ba8
    MOV byte ptr [EDI],AL               ; 00436baa
    CMP AL,0x0                          ; 00436bac
    JZ 0x00436bc0                       ; 00436bae
        ;   XREF to: 00436bc0 (CONDITIONAL_JUMP)  ; LAB_00436bc0
    MOV AL,byte ptr [ESI + 0x1]         ; 00436bb0
    ADD ESI,0x2                         ; 00436bb3
    MOV byte ptr [EDI + 0x1],AL         ; 00436bb6
    ADD EDI,0x2                         ; 00436bb9
    CMP AL,0x0                          ; 00436bbc
    JNZ 0x00436ba8                      ; 00436bbe
        ;   XREF to: 00436ba8 (CONDITIONAL_JUMP)  ; LAB_00436ba8
    POP EDI                             ; 00436bc0
        ;   Label: LAB_00436bc0
    MOV dword ptr [EBX + 0x112d8],0x0   ; 00436bc1
    MOV EAX,EBX                         ; 00436bcb
    MOV dword ptr [EBX + 0x10c0c],0x41000000 ; 00436bcd
    POP EDI                             ; 00436bd7
    POP ESI                             ; 00436bd8
    POP EBX                             ; 00436bd9
    RET                                 ; 00436bda

