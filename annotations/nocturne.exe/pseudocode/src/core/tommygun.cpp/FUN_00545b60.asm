; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tommygun_cpp_FUN_00545b60(void)
;
;
; Called Functions:
;   core_tommygun.cpp_CTommyGun_ctor_FUN_00545b90
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x57c                          ; 00545b60
        ;   Label: core_tommygun.cpp_FUN_00545b60
    CALL crt_unknown.c_FUN_0056497c     ; 00545b65
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 00545b6a
    TEST EAX,EAX                        ; 00545b6d
    JNZ 0x00545b72                      ; 00545b6f
        ;   XREF to: 00545b72 (CONDITIONAL_JUMP)  ; LAB_00545b72
    RET                                 ; 00545b71
    PUSH EAX                            ; 00545b72
        ;   Label: LAB_00545b72
    CALL core_tommygun.cpp_CTommyGun_ctor_FUN_00545b90 ; 00545b73
        ;   XREF to: 00545b90 (UNCONDITIONAL_CALL)  ; CTommyGun * core_tommygun.cpp_CTommyGun_ctor_FUN_00545b90(CTommyGun * this_ptr)
    ADD ESP,0x4                         ; 00545b78
    RET                                 ; 00545b7b

