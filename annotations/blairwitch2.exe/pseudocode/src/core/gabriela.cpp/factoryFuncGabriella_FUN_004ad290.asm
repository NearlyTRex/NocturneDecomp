; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gabriela_cpp_factoryFuncGabriella_FUN_004ad290(void)
;
;
; Called Functions:
;   core_gabriela.cpp_CGabriella_ctor_FUN_004ad2c0
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x601b4                        ; 004ad290
        ;   Label: core_gabriela.cpp_factoryFuncGabriella_FUN_004ad290
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 004ad295
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 004ad29a
    TEST EAX,EAX                        ; 004ad29d
    JNZ 0x004ad2a2                      ; 004ad29f
        ;   XREF to: 004ad2a2 (CONDITIONAL_JUMP)  ; LAB_004ad2a2
    RET                                 ; 004ad2a1
    PUSH EAX                            ; 004ad2a2
        ;   Label: LAB_004ad2a2
    CALL core_gabriela.cpp_CGabriella_ctor_FUN_004ad2c0 ; 004ad2a3
        ;   XREF to: 004ad2c0 (UNCONDITIONAL_CALL)  ; CGabriella * core_gabriela.cpp_CGabriella_ctor_FUN_004ad2c0(CGabriella * this_ptr)
    ADD ESP,0x4                         ; 004ad2a8
    RET                                 ; 004ad2ab

