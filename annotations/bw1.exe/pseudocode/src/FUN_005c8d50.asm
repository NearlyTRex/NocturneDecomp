; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c8d50(void)
;
;
; XREF[1]:
;   FUN_005c50fc at 005c5131
;
; Referenced Globals:
;   void* PTR_GetStdHandle_005d05cc = 001d0f7e
;
; Called Functions:
;   FUN_005c8bc0
;   FUN_005c8db8
;   GetStdHandle
;
; *****************************************************************************

section .text

    PUSH -0xa                           ; 005c8d50
        ;   Label: FUN_005c8d50
    CALL dword ptr CS:[0x5d05cc]        ; 005c8d52 | PTR_GetStdHandle_005d05cc
    MOV EDX,EAX                         ; 005c8d59
    TEST EAX,EAX                        ; 005c8d5b
    JZ 0x005c8d64                       ; 005c8d5d
        ;   XREF to: 005c8d64 (CONDITIONAL_JUMP)  ; LAB_005c8d64
    CMP EAX,-0x1                        ; 005c8d5f
    JNZ 0x005c8d69                      ; 005c8d62
        ;   XREF to: 005c8d69 (CONDITIONAL_JUMP)  ; LAB_005c8d69
    CALL FUN_005c8db8                   ; 005c8d64
        ;   XREF to: 005c8db8 (UNCONDITIONAL_CALL)  ; undefined FUN_005c8db8()
        ;   Label: LAB_005c8d64
    PUSH EAX                            ; 005c8d69
        ;   Label: LAB_005c8d69
    CALL FUN_005c8bc0                   ; 005c8d6a
        ;   XREF to: 005c8bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c8bc0()
    ADD ESP,0x4                         ; 005c8d6f
    PUSH -0xb                           ; 005c8d72
    CALL dword ptr CS:[0x5d05cc]        ; 005c8d74 | PTR_GetStdHandle_005d05cc
    MOV EDX,EAX                         ; 005c8d7b
    TEST EAX,EAX                        ; 005c8d7d
    JZ 0x005c8d86                       ; 005c8d7f
        ;   XREF to: 005c8d86 (CONDITIONAL_JUMP)  ; LAB_005c8d86
    CMP EAX,-0x1                        ; 005c8d81
    JNZ 0x005c8d8b                      ; 005c8d84
        ;   XREF to: 005c8d8b (CONDITIONAL_JUMP)  ; LAB_005c8d8b
    CALL FUN_005c8db8                   ; 005c8d86
        ;   XREF to: 005c8db8 (UNCONDITIONAL_CALL)  ; undefined FUN_005c8db8()
        ;   Label: LAB_005c8d86
    PUSH EAX                            ; 005c8d8b
        ;   Label: LAB_005c8d8b
    CALL FUN_005c8bc0                   ; 005c8d8c
        ;   XREF to: 005c8bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c8bc0()
    ADD ESP,0x4                         ; 005c8d91
    PUSH -0xc                           ; 005c8d94
    CALL dword ptr CS:[0x5d05cc]        ; 005c8d96 | PTR_GetStdHandle_005d05cc
    MOV EDX,EAX                         ; 005c8d9d
    TEST EAX,EAX                        ; 005c8d9f
    JZ 0x005c8da8                       ; 005c8da1
        ;   XREF to: 005c8da8 (CONDITIONAL_JUMP)  ; LAB_005c8da8
    CMP EAX,-0x1                        ; 005c8da3
    JNZ 0x005c8dad                      ; 005c8da6
        ;   XREF to: 005c8dad (CONDITIONAL_JUMP)  ; LAB_005c8dad
    CALL FUN_005c8db8                   ; 005c8da8
        ;   XREF to: 005c8db8 (UNCONDITIONAL_CALL)  ; undefined FUN_005c8db8()
        ;   Label: LAB_005c8da8
    PUSH EAX                            ; 005c8dad
        ;   Label: LAB_005c8dad
    CALL FUN_005c8bc0                   ; 005c8dae
        ;   XREF to: 005c8bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c8bc0()
    ADD ESP,0x4                         ; 005c8db3
    RET                                 ; 005c8db6

