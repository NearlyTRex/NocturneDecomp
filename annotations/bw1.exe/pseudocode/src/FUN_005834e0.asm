; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005834e0(int param_1)
;
;
; Called Functions:
;   FUN_004087b0
;   FUN_004087f0
;   FUN_004207b0
;   FUN_004688a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005834e0
        ;   Label: FUN_005834e0
    PUSH ESI                            ; 005834e1
    PUSH EDI                            ; 005834e2
    SUB ESP,0x30                        ; 005834e3
    MOV EBX,dword ptr [ESP + 0x40]      ; 005834e6
    PUSH EBX                            ; 005834ea
    CALL FUN_004087b0                   ; 005834eb
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    ADD ESP,0x4                         ; 005834f0
    PUSH 0x0                            ; 005834f3
    MOV EAX,dword ptr [EBX + 0x154]     ; 005834f5
    PUSH EBX                            ; 005834fb
    LEA ESI,[ESP + 0x8]                 ; 005834fc
    LEA EDI,[ESP + 0x20]                ; 00583500
    CALL dword ptr [EAX + 0x1c]         ; 00583504
    MOV ECX,0x6                         ; 00583507
    ADD ESP,0x4                         ; 0058350c
    LEA EAX,[ESP + 0x1c]                ; 0058350f
    LEA ESI,[ESP + 0x4]                 ; 00583513
    PUSH EAX                            ; 00583517
    MOVSD.REP ES:EDI,ESI                ; 00583518
    CALL FUN_004207b0                   ; 0058351a
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 0058351f
    MOV ESI,EAX                         ; 00583522
    TEST EAX,EAX                        ; 00583524
    JNZ 0x0058353a                      ; 00583526
        ;   XREF to: 0058353a (CONDITIONAL_JUMP)  ; LAB_0058353a
    PUSH EBX                            ; 00583528
    CALL FUN_004087f0                   ; 00583529
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 0058352e
    MOV EAX,ESI                         ; 00583531
    ADD ESP,0x30                        ; 00583533
    POP EDI                             ; 00583536
    POP ESI                             ; 00583537
    POP EBX                             ; 00583538
    RET                                 ; 00583539
    PUSH -0x1                           ; 0058353a
        ;   Label: LAB_0058353a
    LEA EAX,[EBX + 0x158]               ; 0058353c
    PUSH 0x0                            ; 00583542
    PUSH EAX                            ; 00583544
    CALL FUN_004688a0                   ; 00583545
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 0058354a
    PUSH EBX                            ; 0058354d
    CALL FUN_004087f0                   ; 0058354e
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 00583553
    MOV EAX,ESI                         ; 00583556
    ADD ESP,0x30                        ; 00583558
    POP EDI                             ; 0058355b
    POP ESI                             ; 0058355c
    POP EBX                             ; 0058355d
    RET                                 ; 0058355e

