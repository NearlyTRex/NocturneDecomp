; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059c980(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   FUN_0046b960
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0060b280]      ; 0059c980 | DAT_0060b280
        ;   Label: FUN_0059c980
    PUSH EDX                            ; 0059c986
    CALL FUN_0046b960                   ; 0059c987
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 0059c98c
    TEST EAX,EAX                        ; 0059c98f
    JZ 0x0059c995                       ; 0059c991
        ;   XREF to: 0059c995 (CONDITIONAL_JUMP)  ; LAB_0059c995
    XOR EAX,EAX                         ; 0059c993
    RET                                 ; 0059c995
        ;   Label: LAB_0059c995

