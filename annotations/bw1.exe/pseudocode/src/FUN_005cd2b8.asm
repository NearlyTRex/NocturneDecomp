; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005cd2b8(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005cd3b8 at 005cd3de
;
; Called Functions:
;   FUN_005cd0f0
;   FUN_005cd144
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd2b8
        ;   Label: FUN_005cd2b8
    PUSH 0x2                            ; 005cd2b9
    CALL FUN_005cd144                   ; 005cd2bb
        ;   XREF to: 005cd144 (UNCONDITIONAL_CALL)  ; undefined FUN_005cd144()
    ADD ESP,0x4                         ; 005cd2c0
    MOV EBX,EAX                         ; 005cd2c3
    CMP EAX,0x1                         ; 005cd2c5
    JZ 0x005cd2f0                       ; 005cd2c8
        ;   XREF to: 005cd2f0 (CONDITIONAL_JUMP)  ; LAB_005cd2f0
    CMP EAX,0x2                         ; 005cd2ca
    JZ 0x005cd2f0                       ; 005cd2cd
        ;   XREF to: 005cd2f0 (CONDITIONAL_JUMP)  ; LAB_005cd2f0
    CMP EAX,0x3                         ; 005cd2cf
    JZ 0x005cd2f0                       ; 005cd2d2
        ;   XREF to: 005cd2f0 (CONDITIONAL_JUMP)  ; LAB_005cd2f0
    PUSH 0x2                            ; 005cd2d4
    PUSH 0x2                            ; 005cd2d6
    CALL FUN_005cd0f0                   ; 005cd2d8
        ;   XREF to: 005cd0f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005cd0f0()
    ADD ESP,0x8                         ; 005cd2dd
    MOV EDX,dword ptr [ESP + 0x8]       ; 005cd2e0
    PUSH EDX                            ; 005cd2e4
    PUSH 0x2                            ; 005cd2e5
    CALL EBX                            ; 005cd2e7
    ADD ESP,0x8                         ; 005cd2e9
    XOR EAX,EAX                         ; 005cd2ec
    POP EBX                             ; 005cd2ee
    RET                                 ; 005cd2ef
    MOV EAX,0xffffffff                  ; 005cd2f0
        ;   Label: LAB_005cd2f0
    POP EBX                             ; 005cd2f5
    RET                                 ; 005cd2f6

