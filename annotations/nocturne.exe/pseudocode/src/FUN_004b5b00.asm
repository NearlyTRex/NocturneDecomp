; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b5b00(int param_1)
;
;
; XREF[1]:
;   FUN_00535900 at 005373c1
;
; Referenced Globals:
;   undefined4 s_CHealthItem_005858d1+2
;
; Called Functions:
;   FUN_0040d7e0
;   FUN_004b5950
;   FUN_004c1580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5b00
        ;   Label: FUN_004b5b00
    PUSH ESI                            ; 004b5b01
    PUSH EBP                            ; 004b5b02
    MOV EBP,ESP                         ; 004b5b03
    MOV ESI,dword ptr [EBP + 0x10]      ; 004b5b05
    LEA EBX,[ESI + 0x1f5a0]             ; 004b5b08
    MOV EAX,dword ptr [EBX + 0x334]     ; 004b5b0e
    TEST EAX,EAX                        ; 004b5b14
    JNZ 0x004b5b1c                      ; 004b5b16
        ;   XREF to: 004b5b1c (CONDITIONAL_JUMP)  ; LAB_004b5b1c
    POP EBP                             ; 004b5b18
    POP ESI                             ; 004b5b19
    POP EBX                             ; 004b5b1a
    RET                                 ; 004b5b1b
    PUSH 0x5858d3                       ; 004b5b1c | s_CHealthItem_005858d1+2
        ;   Label: LAB_004b5b1c
    PUSH EAX                            ; 004b5b21
    CALL FUN_0040d7e0                   ; 004b5b22
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d7e0()
    ADD ESP,0x8                         ; 004b5b27
    TEST EAX,EAX                        ; 004b5b2a
    JNZ 0x004b5b48                      ; 004b5b2c
        ;   XREF to: 004b5b48 (CONDITIONAL_JUMP)  ; LAB_004b5b48
    PUSH ESI                            ; 004b5b2e
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004b5b2f
    CALL dword ptr [EAX + 0x140]        ; 004b5b35
    ADD ESP,0x4                         ; 004b5b3b
    TEST EAX,EAX                        ; 004b5b3e
    JZ 0x004b5b5c                       ; 004b5b40
        ;   XREF to: 004b5b5c (CONDITIONAL_JUMP)  ; LAB_004b5b5c
    XOR EAX,EAX                         ; 004b5b42
    POP EBP                             ; 004b5b44
    POP ESI                             ; 004b5b45
    POP EBX                             ; 004b5b46
    RET                                 ; 004b5b47
    MOV EAX,dword ptr [EBX + 0x334]     ; 004b5b48
        ;   Label: LAB_004b5b48
    PUSH EAX                            ; 004b5b4e
    PUSH EBX                            ; 004b5b4f
    CALL FUN_004c1580                   ; 004b5b50
        ;   XREF to: 004c1580 (UNCONDITIONAL_CALL)  ; undefined FUN_004c1580()
    ADD ESP,0x8                         ; 004b5b55
    POP EBP                             ; 004b5b58
    POP ESI                             ; 004b5b59
    POP EBX                             ; 004b5b5a
    RET                                 ; 004b5b5b
    PUSH ESI                            ; 004b5b5c
        ;   Label: LAB_004b5b5c
    CALL FUN_004b5950                   ; 004b5b5d
        ;   XREF to: 004b5950 (UNCONDITIONAL_CALL)  ; undefined FUN_004b5950()
    ADD ESP,0x4                         ; 004b5b62
    TEST EAX,EAX                        ; 004b5b65
    JZ 0x004b5b48                       ; 004b5b67
        ;   XREF to: 004b5b48 (CONDITIONAL_JUMP)  ; LAB_004b5b48
    XOR EAX,EAX                         ; 004b5b69
    POP EBP                             ; 004b5b6b
    POP ESI                             ; 004b5b6c
    POP EBX                             ; 004b5b6d
    RET                                 ; 004b5b6e

