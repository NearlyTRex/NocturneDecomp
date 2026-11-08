; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0046a700(void)
;
;
; XREF[1]:
;   FUN_00529210 at 00529287
;
; Referenced Globals:
;   undefined4 DAT_01bdd7c4
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01bdd7c4]      ; 0046a700 | DAT_01bdd7c4
        ;   Label: FUN_0046a700
    TEST EDX,EDX                        ; 0046a706
    JZ 0x0046a711                       ; 0046a708
        ;   XREF to: 0046a711 (CONDITIONAL_JUMP)  ; LAB_0046a711
    MOV EAX,dword ptr [EDX + 0x41f0]    ; 0046a70a
    RET                                 ; 0046a710
    MOV EAX,0xb                         ; 0046a711
        ;   Label: LAB_0046a711
    RET                                 ; 0046a716

