; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_drip_cpp_FUN_00462030(void)
;
;
; Called Functions:
;   core_drip.cpp_CDrip_ctor_FUN_00462060
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x334                          ; 00462030
        ;   Label: core_drip.cpp_FUN_00462030
    CALL crt_unknown.c_FUN_0056497c     ; 00462035
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0046203a
    TEST EAX,EAX                        ; 0046203d
    JNZ 0x00462042                      ; 0046203f
        ;   XREF to: 00462042 (CONDITIONAL_JUMP)  ; LAB_00462042
    RET                                 ; 00462041
    PUSH EAX                            ; 00462042
        ;   Label: LAB_00462042
    CALL core_drip.cpp_CDrip_ctor_FUN_00462060 ; 00462043
        ;   XREF to: 00462060 (UNCONDITIONAL_CALL)  ; CDrip * core_drip.cpp_CDrip_ctor_FUN_00462060(CDrip * this_ptr)
    ADD ESP,0x4                         ; 00462048
    RET                                 ; 0046204b

