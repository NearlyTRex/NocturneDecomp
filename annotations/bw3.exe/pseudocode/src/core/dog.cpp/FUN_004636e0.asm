; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dog_cpp_FUN_004636e0(void)
;
;
; Called Functions:
;   core_dog.cpp_CDemonDog_ctor_FUN_00463710
;   crt_unknown.c_debugAllocTracked1_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0xd064                         ; 004636e0
        ;   Label: core_dog.cpp_FUN_004636e0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005a3cb2 ; 004636e5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004636ea
    TEST EAX,EAX                        ; 004636ed
    JNZ 0x004636f2                      ; 004636ef
        ;   XREF to: 004636f2 (CONDITIONAL_JUMP)  ; LAB_004636f2
    RET                                 ; 004636f1
    PUSH EAX                            ; 004636f2
        ;   Label: LAB_004636f2
    CALL core_dog.cpp_CDemonDog_ctor_FUN_00463710 ; 004636f3
        ;   XREF to: 00463710 (UNCONDITIONAL_CALL)  ; CDemonDog * core_dog.cpp_CDemonDog_ctor_FUN_00463710(CDemonDog * this_ptr)
    ADD ESP,0x4                         ; 004636f8
    RET                                 ; 004636fb

