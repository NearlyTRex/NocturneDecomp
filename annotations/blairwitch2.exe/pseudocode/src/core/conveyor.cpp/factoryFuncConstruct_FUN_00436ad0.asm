; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_conveyor_cpp_factoryFuncConstruct_FUN_00436ad0(void)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005b8be2
;   unkafter_conveyor.cpp_CConstruct_ctor_FUN_00436b00
;
; *****************************************************************************

section .text

    PUSH 0x112e4                        ; 00436ad0
        ;   Label: core_conveyor.cpp_factoryFuncConstruct_FUN_00436ad0
    CALL crt_unknown.c_FUN_005b8be2     ; 00436ad5
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 00436ada
    TEST EAX,EAX                        ; 00436add
    JNZ 0x00436ae2                      ; 00436adf
        ;   XREF to: 00436ae2 (CONDITIONAL_JUMP)  ; LAB_00436ae2
    RET                                 ; 00436ae1
    PUSH EAX                            ; 00436ae2
        ;   Label: LAB_00436ae2
    CALL unkafter_conveyor.cpp_CConstruct_ctor_FUN_00436b00 ; 00436ae3
        ;   XREF to: 00436b00 (UNCONDITIONAL_CALL)  ; CConstruct * unkafter_conveyor.cpp_CConstruct_ctor_FUN_00436b00(CConstruct * this_ptr)
    ADD ESP,0x4                         ; 00436ae8
    RET                                 ; 00436aeb

