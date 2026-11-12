; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTrap * __cdecl core_trap_cpp_factoryFuncTrap_FUN_0056ccd0(void)
;
;
; XREF[1]:
;   core_trap.cpp_staticInit_FUN_0056cca0 at 0056ccac
;
; Called Functions:
;   core_trap.cpp_CTrap_ctor_FUN_0056cd00
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x2dc                          ; 0056ccd0
        ;   Label: core_trap.cpp_factoryFuncTrap_FUN_0056ccd0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 0056ccd5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0056ccda
    TEST EAX,EAX                        ; 0056ccdd
    JNZ 0x0056cce2                      ; 0056ccdf
        ;   XREF to: 0056cce2 (CONDITIONAL_JUMP)  ; LAB_0056cce2
    RET                                 ; 0056cce1
    PUSH EAX                            ; 0056cce2
        ;   Label: LAB_0056cce2
    CALL core_trap.cpp_CTrap_ctor_FUN_0056cd00 ; 0056cce3
        ;   XREF to: 0056cd00 (UNCONDITIONAL_CALL)  ; CTrap * core_trap.cpp_CTrap_ctor_FUN_0056cd00(CTrap * this_ptr)
    ADD ESP,0x4                         ; 0056cce8
    RET                                 ; 0056cceb

