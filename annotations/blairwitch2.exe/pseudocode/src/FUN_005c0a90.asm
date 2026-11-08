; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c0a90(void)
;
;
; XREF[1]:
;   FUN_005bce2c at 005bce61
;
; Referenced Globals:
;   void* PTR_GetStdHandle_005c85bc = 001c8f56
;
; Called Functions:
;   FUN_005c0900
;   FUN_005c0af8
;   GetStdHandle
;
; *****************************************************************************

section .text

    PUSH -0xa                           ; 005c0a90
        ;   Label: FUN_005c0a90
    CALL dword ptr CS:[0x5c85bc]        ; 005c0a92 | PTR_GetStdHandle_005c85bc
    MOV EDX,EAX                         ; 005c0a99
    TEST EAX,EAX                        ; 005c0a9b
    JZ 0x005c0aa4                       ; 005c0a9d
        ;   XREF to: 005c0aa4 (CONDITIONAL_JUMP)  ; LAB_005c0aa4
    CMP EAX,-0x1                        ; 005c0a9f
    JNZ 0x005c0aa9                      ; 005c0aa2
        ;   XREF to: 005c0aa9 (CONDITIONAL_JUMP)  ; LAB_005c0aa9
    CALL FUN_005c0af8                   ; 005c0aa4
        ;   XREF to: 005c0af8 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0af8()
        ;   Label: LAB_005c0aa4
    PUSH EAX                            ; 005c0aa9
        ;   Label: LAB_005c0aa9
    CALL FUN_005c0900                   ; 005c0aaa
        ;   XREF to: 005c0900 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0900()
    ADD ESP,0x4                         ; 005c0aaf
    PUSH -0xb                           ; 005c0ab2
    CALL dword ptr CS:[0x5c85bc]        ; 005c0ab4 | PTR_GetStdHandle_005c85bc
    MOV EDX,EAX                         ; 005c0abb
    TEST EAX,EAX                        ; 005c0abd
    JZ 0x005c0ac6                       ; 005c0abf
        ;   XREF to: 005c0ac6 (CONDITIONAL_JUMP)  ; LAB_005c0ac6
    CMP EAX,-0x1                        ; 005c0ac1
    JNZ 0x005c0acb                      ; 005c0ac4
        ;   XREF to: 005c0acb (CONDITIONAL_JUMP)  ; LAB_005c0acb
    CALL FUN_005c0af8                   ; 005c0ac6
        ;   XREF to: 005c0af8 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0af8()
        ;   Label: LAB_005c0ac6
    PUSH EAX                            ; 005c0acb
        ;   Label: LAB_005c0acb
    CALL FUN_005c0900                   ; 005c0acc
        ;   XREF to: 005c0900 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0900()
    ADD ESP,0x4                         ; 005c0ad1
    PUSH -0xc                           ; 005c0ad4
    CALL dword ptr CS:[0x5c85bc]        ; 005c0ad6 | PTR_GetStdHandle_005c85bc
    MOV EDX,EAX                         ; 005c0add
    TEST EAX,EAX                        ; 005c0adf
    JZ 0x005c0ae8                       ; 005c0ae1
        ;   XREF to: 005c0ae8 (CONDITIONAL_JUMP)  ; LAB_005c0ae8
    CMP EAX,-0x1                        ; 005c0ae3
    JNZ 0x005c0aed                      ; 005c0ae6
        ;   XREF to: 005c0aed (CONDITIONAL_JUMP)  ; LAB_005c0aed
    CALL FUN_005c0af8                   ; 005c0ae8
        ;   XREF to: 005c0af8 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0af8()
        ;   Label: LAB_005c0ae8
    PUSH EAX                            ; 005c0aed
        ;   Label: LAB_005c0aed
    CALL FUN_005c0900                   ; 005c0aee
        ;   XREF to: 005c0900 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0900()
    ADD ESP,0x4                         ; 005c0af3
    RET                                 ; 005c0af6

