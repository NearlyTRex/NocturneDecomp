; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HANDLE FUN_005c0af8(void)
;
;
; XREF[2]:
;   FUN_005befc0 at 005bf05b
;   FUN_005c0a90 at 005c0aa4
;
; Referenced Globals:
;   void* PTR_CreateEventA_005c8514 = 001c8c54
;   undefined4 DAT_0061f4e0
;
; Called Functions:
;   CreateEventA
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005c0af8
        ;   Label: FUN_005c0af8
    PUSH 0x0                            ; 005c0afa
    PUSH 0x0                            ; 005c0afc
    PUSH 0x0                            ; 005c0afe
    CALL dword ptr CS:[0x5c8514]        ; 005c0b00 | PTR_CreateEventA_005c8514
    MOV EDX,EAX                         ; 005c0b07
    TEST EAX,EAX                        ; 005c0b09
    JNZ 0x005c0b1a                      ; 005c0b0b
        ;   XREF to: 005c0b1a (CONDITIONAL_JUMP)  ; LAB_005c0b1a
    MOV EDX,dword ptr [0x0061f4e0]      ; 005c0b0d | DAT_0061f4e0
    INC EDX                             ; 005c0b13
    MOV dword ptr [0x0061f4e0],EDX      ; 005c0b14 | DAT_0061f4e0
    MOV EAX,EDX                         ; 005c0b1a
        ;   Label: LAB_005c0b1a
    RET                                 ; 005c0b1c

