; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hotdemon_cpp_FUN_004b8c70(void)
;
;
; Called Functions:
;   core_hotdemon.cpp_CHotDemon_ctor_FUN_004b8ca0
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0xbd58                         ; 004b8c70
        ;   Label: core_hotdemon.cpp_FUN_004b8c70
    CALL crt_unknown.c_FUN_0056497c     ; 004b8c75
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 004b8c7a
    TEST EAX,EAX                        ; 004b8c7d
    JNZ 0x004b8c82                      ; 004b8c7f
        ;   XREF to: 004b8c82 (CONDITIONAL_JUMP)  ; LAB_004b8c82
    RET                                 ; 004b8c81
    PUSH EAX                            ; 004b8c82
        ;   Label: LAB_004b8c82
    CALL core_hotdemon.cpp_CHotDemon_ctor_FUN_004b8ca0 ; 004b8c83
        ;   XREF to: 004b8ca0 (UNCONDITIONAL_CALL)  ; CHotDemon * core_hotdemon.cpp_CHotDemon_ctor_FUN_004b8ca0(CHotDemon * this_ptr)
    ADD ESP,0x4                         ; 004b8c88
    RET                                 ; 004b8c8b

