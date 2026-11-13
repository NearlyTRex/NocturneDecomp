; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGoggles * __cdecl core_goggles_cpp_factoryFuncGoggles_FUN_004cc690(void)
;
;
; Called Functions:
;   core_goggles.cpp_CGoggles_ctor_FUN_004cc6c0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x2d8                          ; 004cc690
        ;   Label: core_goggles.cpp_factoryFuncGoggles_FUN_004cc690
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 004cc695
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 004cc69a
    TEST EAX,EAX                        ; 004cc69d
    JNZ 0x004cc6a2                      ; 004cc69f
        ;   XREF to: 004cc6a2 (CONDITIONAL_JUMP)  ; LAB_004cc6a2
    RET                                 ; 004cc6a1
    PUSH EAX                            ; 004cc6a2
        ;   Label: LAB_004cc6a2
    CALL core_goggles.cpp_CGoggles_ctor_FUN_004cc6c0 ; 004cc6a3
        ;   XREF to: 004cc6c0 (UNCONDITIONAL_CALL)  ; CGoggles * core_goggles.cpp_CGoggles_ctor_FUN_004cc6c0(CGoggles * this_ptr)
    ADD ESP,0x4                         ; 004cc6a8
    RET                                 ; 004cc6ab

