; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005b8515(int *param_1)
;
;
; XREF[1]:
;   FUN_005b854f at 005b856c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8515
        ;   Label: FUN_005b8515
    PUSH ESI                            ; 005b8516
    PUSH EDI                            ; 005b8517
    PUSH EBP                            ; 005b8518
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b8519
    MOV EBP,dword ptr [EBX + 0x4]       ; 005b851d
    MOV ESI,dword ptr [EBX]             ; 005b8520
    MOV EDI,dword ptr [EBP + 0x10]      ; 005b8522
    IMUL ESI,EDI                        ; 005b8525
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b8528
    MOV EBP,dword ptr [EBP + 0xc]       ; 005b852b
    ADD ESI,EAX                         ; 005b852e
    MOV EDX,dword ptr [EBX]             ; 005b8530
        ;   Label: LAB_005b8530
    TEST EDX,EDX                        ; 005b8532
    JA 0x005b853e                       ; 005b8534
        ;   XREF to: 005b853e (CONDITIONAL_JUMP)  ; LAB_005b853e
    MOV EAX,dword ptr [EBX + 0x8]       ; 005b8536
    POP EBP                             ; 005b8539
    POP EDI                             ; 005b853a
    POP ESI                             ; 005b853b
    POP EBX                             ; 005b853c
    RET                                 ; 005b853d
    PUSH 0x0                            ; 005b853e
        ;   Label: LAB_005b853e
    SUB ESI,EDI                         ; 005b8540
    LEA ECX,[EDX + -0x1]                ; 005b8542
    PUSH ESI                            ; 005b8545
    MOV dword ptr [EBX],ECX             ; 005b8546
    CALL EBP                            ; 005b8548
    ADD ESP,0x8                         ; 005b854a
    JMP 0x005b8530                      ; 005b854d
        ;   XREF to: 005b8530 (UNCONDITIONAL_JUMP)  ; LAB_005b8530

