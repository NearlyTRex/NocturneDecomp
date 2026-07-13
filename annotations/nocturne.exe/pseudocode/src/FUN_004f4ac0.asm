; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f4ac0(char *param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_004f46b0
;   FUN_004f4ef0
;   FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4ac0
        ;   Label: FUN_004f4ac0
    PUSH ESI                            ; 004f4ac1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f4ac2
    MOV DL,0x2e                         ; 004f4ac6
    MOV ESI,EBX                         ; 004f4ac8
    MOV AL,byte ptr [ESI]               ; 004f4aca
        ;   Label: LAB_004f4aca
    CMP AL,DL                           ; 004f4acc
    JZ 0x004f4ae2                       ; 004f4ace
        ;   XREF to: 004f4ae2 (CONDITIONAL_JUMP)  ; LAB_004f4ae2
    CMP AL,0x0                          ; 004f4ad0
    JZ 0x004f4ae0                       ; 004f4ad2
        ;   XREF to: 004f4ae0 (CONDITIONAL_JUMP)  ; LAB_004f4ae0
    INC ESI                             ; 004f4ad4
    MOV AL,byte ptr [ESI]               ; 004f4ad5
    CMP AL,DL                           ; 004f4ad7
    JZ 0x004f4ae2                       ; 004f4ad9
        ;   XREF to: 004f4ae2 (CONDITIONAL_JUMP)  ; LAB_004f4ae2
    INC ESI                             ; 004f4adb
    CMP AL,0x0                          ; 004f4adc
    JNZ 0x004f4aca                      ; 004f4ade
        ;   XREF to: 004f4aca (CONDITIONAL_JUMP)  ; LAB_004f4aca
    SUB ESI,ESI                         ; 004f4ae0
        ;   Label: LAB_004f4ae0
    TEST ESI,ESI                        ; 004f4ae2
        ;   Label: LAB_004f4ae2
    JNZ 0x004f4ae9                      ; 004f4ae4
        ;   XREF to: 004f4ae9 (CONDITIONAL_JUMP)  ; LAB_004f4ae9
    POP ESI                             ; 004f4ae6
        ;   Label: LAB_004f4ae6
    POP EBX                             ; 004f4ae7
    RET                                 ; 004f4ae8
    PUSH 0x58d1e6                       ; 004f4ae9
        ;   Label: LAB_004f4ae9
    PUSH ESI                            ; 004f4aee
    CALL FUN_00564520                   ; 004f4aef
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined FUN_00564520()
    ADD ESP,0x8                         ; 004f4af4
    TEST EAX,EAX                        ; 004f4af7
    JZ 0x004f4b1e                       ; 004f4af9
        ;   XREF to: 004f4b1e (CONDITIONAL_JUMP)  ; LAB_004f4b1e
    PUSH 0x58d1eb                       ; 004f4afb
    PUSH ESI                            ; 004f4b00
    CALL FUN_00564520                   ; 004f4b01
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined FUN_00564520()
    ADD ESP,0x8                         ; 004f4b06
    TEST EAX,EAX                        ; 004f4b09
    JNZ 0x004f4ae6                      ; 004f4b0b
        ;   XREF to: 004f4ae6 (CONDITIONAL_JUMP)  ; LAB_004f4ae6
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f4b0d
    PUSH ECX                            ; 004f4b11
    PUSH EBX                            ; 004f4b12
    CALL FUN_004f4ef0                   ; 004f4b13
        ;   XREF to: 004f4ef0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f4ef0()
    ADD ESP,0x8                         ; 004f4b18
    POP ESI                             ; 004f4b1b
    POP EBX                             ; 004f4b1c
    RET                                 ; 004f4b1d
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f4b1e
        ;   Label: LAB_004f4b1e
    PUSH EDX                            ; 004f4b22
    PUSH EBX                            ; 004f4b23
    CALL FUN_004f46b0                   ; 004f4b24
        ;   XREF to: 004f46b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f46b0()
    ADD ESP,0x8                         ; 004f4b29
    POP ESI                             ; 004f4b2c
    POP EBX                             ; 004f4b2d
    RET                                 ; 004f4b2e

