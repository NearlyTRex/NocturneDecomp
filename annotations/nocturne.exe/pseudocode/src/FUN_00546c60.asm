; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00546c60(void)
;
;
; Called Functions:
;   core_trash.cpp_CTrash_ctor_FUN_00546c90
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x320                          ; 00546c60
        ;   Label: FUN_00546c60
    CALL FUN_0056497c                   ; 00546c65
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 00546c6a
    TEST EAX,EAX                        ; 00546c6d
    JNZ 0x00546c72                      ; 00546c6f
        ;   XREF to: 00546c72 (CONDITIONAL_JUMP)  ; LAB_00546c72
    RET                                 ; 00546c71
    PUSH EAX                            ; 00546c72
        ;   Label: LAB_00546c72
    CALL core_trash.cpp_CTrash_ctor_FUN_00546c90 ; 00546c73
        ;   XREF to: 00546c90 (UNCONDITIONAL_CALL)  ; undefined core_trash.cpp_CTrash_ctor_FUN_00546c90()
    ADD ESP,0x4                         ; 00546c78
    RET                                 ; 00546c7b

