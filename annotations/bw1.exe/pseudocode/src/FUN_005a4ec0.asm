; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a4ec0(int param_1)
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

    PUSH EBX                            ; 005a4ec0
        ;   Label: FUN_005a4ec0
    SUB ESP,0x30                        ; 005a4ec1
    MOV EBX,dword ptr [ESP + 0x38]      ; 005a4ec4
    CMP dword ptr [EBX + 0xc424],0x3    ; 005a4ec8
    JNZ 0x005a4ed8                      ; 005a4ecf
        ;   XREF to: 005a4ed8 (CONDITIONAL_JUMP)  ; LAB_005a4ed8
    XOR EAX,EAX                         ; 005a4ed1
    ADD ESP,0x30                        ; 005a4ed3
    POP EBX                             ; 005a4ed6
    RET                                 ; 005a4ed7
    PUSH EDI                            ; 005a4ed8
        ;   Label: LAB_005a4ed8
    PUSH ESI                            ; 005a4ed9
    PUSH EBX                            ; 005a4eda
    CALL FUN_004087b0                   ; 005a4edb
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    ADD ESP,0x4                         ; 005a4ee0
    PUSH 0x0                            ; 005a4ee3
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a4ee5
    PUSH EBX                            ; 005a4eeb
    LEA ESI,[ESP + 0x10]                ; 005a4eec
    LEA EDI,[ESP + 0x28]                ; 005a4ef0
    CALL dword ptr [EAX + 0x1c]         ; 005a4ef4
    MOV ECX,0x6                         ; 005a4ef7
    ADD ESP,0x4                         ; 005a4efc
    LEA EAX,[ESP + 0x24]                ; 005a4eff
    LEA ESI,[ESP + 0xc]                 ; 005a4f03
    PUSH EAX                            ; 005a4f07
    MOVSD.REP ES:EDI,ESI                ; 005a4f08
    CALL FUN_004207b0                   ; 005a4f0a
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 005a4f0f
    MOV ESI,EAX                         ; 005a4f12
    TEST EAX,EAX                        ; 005a4f14
    JZ 0x005a4f2f                       ; 005a4f16
        ;   XREF to: 005a4f2f (CONDITIONAL_JUMP)  ; LAB_005a4f2f
    PUSH -0x1                           ; 005a4f18
    LEA EAX,[EBX + 0xc26c]              ; 005a4f1a
    PUSH dword ptr [EBX + 0xc268]       ; 005a4f20
    PUSH EAX                            ; 005a4f26
    CALL FUN_004688a0                   ; 005a4f27
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 005a4f2c
    PUSH EBX                            ; 005a4f2f
        ;   Label: LAB_005a4f2f
    CALL FUN_004087f0                   ; 005a4f30
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 005a4f35
    MOV EAX,ESI                         ; 005a4f38
    POP ESI                             ; 005a4f3a
    POP EDI                             ; 005a4f3b
    ADD ESP,0x30                        ; 005a4f3c
    POP EBX                             ; 005a4f3f
    RET                                 ; 005a4f40

