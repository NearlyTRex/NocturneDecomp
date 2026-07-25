; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005467f0(void)
;
;
; Called Functions:
;   FUN_00546820
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x2d4                          ; 005467f0
        ;   Label: FUN_005467f0
    CALL FUN_0056497c                   ; 005467f5
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 005467fa
    TEST EAX,EAX                        ; 005467fd
    JNZ 0x00546802                      ; 005467ff
        ;   XREF to: 00546802 (CONDITIONAL_JUMP)  ; LAB_00546802
    RET                                 ; 00546801
    PUSH EAX                            ; 00546802
        ;   Label: LAB_00546802
    CALL FUN_00546820                   ; 00546803
        ;   XREF to: 00546820 (UNCONDITIONAL_CALL)  ; undefined FUN_00546820()
    ADD ESP,0x4                         ; 00546808
    RET                                 ; 0054680b

