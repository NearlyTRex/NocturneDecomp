; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char FUN_005c4f48(void)
;
;
; XREF[1]:
;   FUN_005c4ff8 at 005c5073
;
; Referenced Globals:
;   undefined1 DAT_0061f7cc
;
; *****************************************************************************

section .text

    CMP byte ptr [0x0061f7cc],0x0       ; 005c4f48 | DAT_0061f7cc
        ;   Label: FUN_005c4f48
    JNZ 0x005c4f6a                      ; 005c4f4f
        ;   XREF to: 005c4f6a (CONDITIONAL_JUMP)  ; LAB_005c4f6a
    PUSH 0x1                            ; 005c4f51
    PUSH 0x5c4eb0                       ; 005c4f53
    CALL dword ptr CS:[0x5c860c]        ; 005c4f58
    TEST EAX,EAX                        ; 005c4f5f
    JZ 0x005c4f6a                       ; 005c4f61
        ;   XREF to: 005c4f6a (CONDITIONAL_JUMP)  ; LAB_005c4f6a
    MOV byte ptr [0x0061f7cc],0x1       ; 005c4f63 | DAT_0061f7cc
    XOR EAX,EAX                         ; 005c4f6a
        ;   Label: LAB_005c4f6a
    MOV AL,[0x0061f7cc]                 ; 005c4f6c | DAT_0061f7cc
    RET                                 ; 005c4f71

