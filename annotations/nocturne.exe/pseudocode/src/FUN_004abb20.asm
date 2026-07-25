; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004abb20(void)
;
;
; Called Functions:
;   FUN_004abb50
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xb38                          ; 004abb20
        ;   Label: FUN_004abb20
    CALL FUN_0056497c                   ; 004abb25
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 004abb2a
    TEST EAX,EAX                        ; 004abb2d
    JNZ 0x004abb32                      ; 004abb2f
        ;   XREF to: 004abb32 (CONDITIONAL_JUMP)  ; LAB_004abb32
    RET                                 ; 004abb31
    PUSH EAX                            ; 004abb32
        ;   Label: LAB_004abb32
    CALL FUN_004abb50                   ; 004abb33
        ;   XREF to: 004abb50 (UNCONDITIONAL_CALL)  ; undefined FUN_004abb50()
    ADD ESP,0x4                         ; 004abb38
    RET                                 ; 004abb3b

