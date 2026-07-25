; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ee920(void)
;
;
; Called Functions:
;   FUN_004ee950
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x1f570                        ; 004ee920
        ;   Label: FUN_004ee920
    CALL FUN_0056497c                   ; 004ee925
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 004ee92a
    TEST EAX,EAX                        ; 004ee92d
    JNZ 0x004ee932                      ; 004ee92f
        ;   XREF to: 004ee932 (CONDITIONAL_JUMP)  ; LAB_004ee932
    RET                                 ; 004ee931
    PUSH EAX                            ; 004ee932
        ;   Label: LAB_004ee932
    CALL FUN_004ee950                   ; 004ee933
        ;   XREF to: 004ee950 (UNCONDITIONAL_CALL)  ; undefined FUN_004ee950()
    ADD ESP,0x4                         ; 004ee938
    RET                                 ; 004ee93b

