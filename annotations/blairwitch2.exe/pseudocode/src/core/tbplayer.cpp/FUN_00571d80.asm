; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tbplayer_cpp_FUN_00571d80(void)
;
;
; Called Functions:
;   core_tbplayer.cpp_CDrummer_ctor_FUN_00571db0
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x24350                        ; 00571d80
        ;   Label: core_tbplayer.cpp_FUN_00571d80
    CALL crt_unknown.c_FUN_005b8be2     ; 00571d85
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 00571d8a
    TEST EAX,EAX                        ; 00571d8d
    JNZ 0x00571d92                      ; 00571d8f
        ;   XREF to: 00571d92 (CONDITIONAL_JUMP)  ; LAB_00571d92
    RET                                 ; 00571d91
    PUSH EAX                            ; 00571d92
        ;   Label: LAB_00571d92
    CALL core_tbplayer.cpp_CDrummer_ctor_FUN_00571db0 ; 00571d93
        ;   XREF to: 00571db0 (UNCONDITIONAL_CALL)  ; CDrummer * core_tbplayer.cpp_CDrummer_ctor_FUN_00571db0(CDrummer * this_ptr)
    ADD ESP,0x4                         ; 00571d98
    RET                                 ; 00571d9b

