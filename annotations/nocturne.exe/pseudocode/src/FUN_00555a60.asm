; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00555a60(void)
;
;
; Called Functions:
;   core_werewolf.cpp_CWerewolf_ctor_FUN_00555a90
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbd6c                         ; 00555a60
        ;   Label: FUN_00555a60
    CALL FUN_0056497c                   ; 00555a65
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 00555a6a
    TEST EAX,EAX                        ; 00555a6d
    JNZ 0x00555a72                      ; 00555a6f
        ;   XREF to: 00555a72 (CONDITIONAL_JUMP)  ; LAB_00555a72
    RET                                 ; 00555a71
    PUSH EAX                            ; 00555a72
        ;   Label: LAB_00555a72
    CALL core_werewolf.cpp_CWerewolf_ctor_FUN_00555a90 ; 00555a73
        ;   XREF to: 00555a90 (UNCONDITIONAL_CALL)  ; undefined core_werewolf.cpp_CWerewolf_ctor_FUN_00555a90()
    ADD ESP,0x4                         ; 00555a78
    RET                                 ; 00555a7b

