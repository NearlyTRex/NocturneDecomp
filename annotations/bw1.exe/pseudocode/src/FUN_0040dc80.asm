; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040dc80(int param_1)
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

    PUSH EBX                            ; 0040dc80
        ;   Label: FUN_0040dc80
    PUSH ESI                            ; 0040dc81
    PUSH EDI                            ; 0040dc82
    SUB ESP,0x30                        ; 0040dc83
    MOV EBX,dword ptr [ESP + 0x40]      ; 0040dc86
    PUSH EBX                            ; 0040dc8a
    CALL FUN_004087b0                   ; 0040dc8b
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    ADD ESP,0x4                         ; 0040dc90
    PUSH 0x0                            ; 0040dc93
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040dc95
    PUSH EBX                            ; 0040dc9b
    LEA ESI,[ESP + 0x8]                 ; 0040dc9c
    LEA EDI,[ESP + 0x20]                ; 0040dca0
    CALL dword ptr [EAX + 0x1c]         ; 0040dca4
    MOV ECX,0x6                         ; 0040dca7
    ADD ESP,0x4                         ; 0040dcac
    LEA EAX,[ESP + 0x1c]                ; 0040dcaf
    LEA ESI,[ESP + 0x4]                 ; 0040dcb3
    PUSH EAX                            ; 0040dcb7
    MOVSD.REP ES:EDI,ESI                ; 0040dcb8
    CALL FUN_004207b0                   ; 0040dcba
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 0040dcbf
    MOV ESI,EAX                         ; 0040dcc2
    TEST EAX,EAX                        ; 0040dcc4
    JNZ 0x0040dcda                      ; 0040dcc6
        ;   XREF to: 0040dcda (CONDITIONAL_JUMP)  ; LAB_0040dcda
    PUSH EBX                            ; 0040dcc8
    CALL FUN_004087f0                   ; 0040dcc9
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 0040dcce
    MOV EAX,ESI                         ; 0040dcd1
    ADD ESP,0x30                        ; 0040dcd3
    POP EDI                             ; 0040dcd6
    POP ESI                             ; 0040dcd7
    POP EBX                             ; 0040dcd8
    RET                                 ; 0040dcd9
    PUSH -0x1                           ; 0040dcda
        ;   Label: LAB_0040dcda
    LEA EAX,[EBX + 0x158]               ; 0040dcdc
    PUSH 0x0                            ; 0040dce2
    PUSH EAX                            ; 0040dce4
    CALL FUN_004688a0                   ; 0040dce5
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 0040dcea
    PUSH EBX                            ; 0040dced
    CALL FUN_004087f0                   ; 0040dcee
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 0040dcf3
    MOV EAX,ESI                         ; 0040dcf6
    ADD ESP,0x30                        ; 0040dcf8
    POP EDI                             ; 0040dcfb
    POP ESI                             ; 0040dcfc
    POP EBX                             ; 0040dcfd
    RET                                 ; 0040dcfe

