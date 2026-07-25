; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a8c70(void)
;
;
; Called Functions:
;   core_ghoul.cpp_CGhoul_ctor_FUN_004a8ca0
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbda0                         ; 004a8c70
        ;   Label: FUN_004a8c70
    CALL FUN_0056497c                   ; 004a8c75
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 004a8c7a
    TEST EAX,EAX                        ; 004a8c7d
    JNZ 0x004a8c82                      ; 004a8c7f
        ;   XREF to: 004a8c82 (CONDITIONAL_JUMP)  ; LAB_004a8c82
    RET                                 ; 004a8c81
    PUSH EAX                            ; 004a8c82
        ;   Label: LAB_004a8c82
    CALL core_ghoul.cpp_CGhoul_ctor_FUN_004a8ca0 ; 004a8c83
        ;   XREF to: 004a8ca0 (UNCONDITIONAL_CALL)  ; undefined core_ghoul.cpp_CGhoul_ctor_FUN_004a8ca0()
    ADD ESP,0x4                         ; 004a8c88
    RET                                 ; 004a8c8b

