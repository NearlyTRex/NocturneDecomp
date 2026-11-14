; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSps * __cdecl core_sps_cpp_factoryFuncSps_FUN_005681e0(void)
;
;
; Called Functions:
;   core_sps.cpp_CSps_ctor_FUN_00568210
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x594                          ; 005681e0
        ;   Label: core_sps.cpp_factoryFuncSps_FUN_005681e0
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 005681e5
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 005681ea
    TEST EAX,EAX                        ; 005681ed
    JNZ 0x005681f2                      ; 005681ef
        ;   XREF to: 005681f2 (CONDITIONAL_JUMP)  ; LAB_005681f2
    RET                                 ; 005681f1
    PUSH EAX                            ; 005681f2
        ;   Label: LAB_005681f2
    CALL core_sps.cpp_CSps_ctor_FUN_00568210 ; 005681f3
        ;   XREF to: 00568210 (UNCONDITIONAL_CALL)  ; CSps * core_sps.cpp_CSps_ctor_FUN_00568210(CSps * this_ptr)
    ADD ESP,0x4                         ; 005681f8
    RET                                 ; 005681fb

