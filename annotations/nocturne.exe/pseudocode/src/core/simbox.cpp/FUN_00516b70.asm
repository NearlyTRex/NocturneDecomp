; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_simbox_cpp_FUN_00516b70(void)
;
;
; Called Functions:
;   core_simbox.cpp_CSimBox_ctor_FUN_00516ba0
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x5c4                          ; 00516b70
        ;   Label: core_simbox.cpp_FUN_00516b70
    CALL crt_unknown.c_FUN_0056497c     ; 00516b75
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 00516b7a
    TEST EAX,EAX                        ; 00516b7d
    JNZ 0x00516b82                      ; 00516b7f
        ;   XREF to: 00516b82 (CONDITIONAL_JUMP)  ; LAB_00516b82
    RET                                 ; 00516b81
    PUSH EAX                            ; 00516b82
        ;   Label: LAB_00516b82
    CALL core_simbox.cpp_CSimBox_ctor_FUN_00516ba0 ; 00516b83
        ;   XREF to: 00516ba0 (UNCONDITIONAL_CALL)  ; undefined core_simbox.cpp_CSimBox_ctor_FUN_00516ba0()
    ADD ESP,0x4                         ; 00516b88
    RET                                 ; 00516b8b

