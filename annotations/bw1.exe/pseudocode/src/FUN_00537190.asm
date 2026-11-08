; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00537190(int param_1)
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

    PUSH EBX                            ; 00537190
        ;   Label: FUN_00537190
    PUSH ESI                            ; 00537191
    PUSH EDI                            ; 00537192
    SUB ESP,0x30                        ; 00537193
    MOV EBX,dword ptr [ESP + 0x40]      ; 00537196
    PUSH EBX                            ; 0053719a
    CALL FUN_004087b0                   ; 0053719b
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    ADD ESP,0x4                         ; 005371a0
    PUSH 0x0                            ; 005371a3
    MOV EAX,dword ptr [EBX + 0x154]     ; 005371a5
    PUSH EBX                            ; 005371ab
    LEA ESI,[ESP + 0x8]                 ; 005371ac
    LEA EDI,[ESP + 0x20]                ; 005371b0
    CALL dword ptr [EAX + 0x1c]         ; 005371b4
    MOV ECX,0x6                         ; 005371b7
    ADD ESP,0x4                         ; 005371bc
    LEA EAX,[ESP + 0x1c]                ; 005371bf
    LEA ESI,[ESP + 0x4]                 ; 005371c3
    PUSH EAX                            ; 005371c7
    MOVSD.REP ES:EDI,ESI                ; 005371c8
    CALL FUN_004207b0                   ; 005371ca
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 005371cf
    MOV ESI,EAX                         ; 005371d2
    TEST EAX,EAX                        ; 005371d4
    JNZ 0x005371ea                      ; 005371d6
        ;   XREF to: 005371ea (CONDITIONAL_JUMP)  ; LAB_005371ea
    PUSH EBX                            ; 005371d8
    CALL FUN_004087f0                   ; 005371d9
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 005371de
    MOV EAX,ESI                         ; 005371e1
    ADD ESP,0x30                        ; 005371e3
    POP EDI                             ; 005371e6
    POP ESI                             ; 005371e7
    POP EBX                             ; 005371e8
    RET                                 ; 005371e9
    PUSH -0x1                           ; 005371ea
        ;   Label: LAB_005371ea
    LEA EAX,[EBX + 0x158]               ; 005371ec
    PUSH 0x0                            ; 005371f2
    PUSH EAX                            ; 005371f4
    CALL FUN_004688a0                   ; 005371f5
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 005371fa
    PUSH EBX                            ; 005371fd
    CALL FUN_004087f0                   ; 005371fe
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 00537203
    MOV EAX,ESI                         ; 00537206
    ADD ESP,0x30                        ; 00537208
    POP EDI                             ; 0053720b
    POP ESI                             ; 0053720c
    POP EBX                             ; 0053720d
    RET                                 ; 0053720e

