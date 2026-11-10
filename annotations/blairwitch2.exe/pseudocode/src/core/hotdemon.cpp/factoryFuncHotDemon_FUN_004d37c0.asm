; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hotdemon_cpp_factoryFuncHotDemon_FUN_004d37c0(void)
;
;
; Called Functions:
;   core_hotdemon.cpp_CHotDemon_ctor_FUN_004d37f0
;   crt_unknown.c_debugAllocTracked1_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x10b2c                        ; 004d37c0
        ;   Label: core_hotdemon.cpp_factoryFuncHotDemon_FUN_004d37c0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005b8be2 ; 004d37c5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005b8be2()
    ADD ESP,0x4                         ; 004d37ca
    TEST EAX,EAX                        ; 004d37cd
    JNZ 0x004d37d2                      ; 004d37cf
        ;   XREF to: 004d37d2 (CONDITIONAL_JUMP)  ; LAB_004d37d2
    RET                                 ; 004d37d1
    PUSH EAX                            ; 004d37d2
        ;   Label: LAB_004d37d2
    CALL core_hotdemon.cpp_CHotDemon_ctor_FUN_004d37f0 ; 004d37d3
        ;   XREF to: 004d37f0 (UNCONDITIONAL_CALL)  ; CHotDemon * core_hotdemon.cpp_CHotDemon_ctor_FUN_004d37f0(CHotDemon * this_ptr)
    ADD ESP,0x4                         ; 004d37d8
    RET                                 ; 004d37db

