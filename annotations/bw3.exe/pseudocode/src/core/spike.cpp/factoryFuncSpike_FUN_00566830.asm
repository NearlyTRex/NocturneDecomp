; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpike * __cdecl core_spike_cpp_factoryFuncSpike_FUN_00566830(void)
;
;
; Called Functions:
;   core_spike.cpp_CSpike_ctor_FUN_00566860
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x560                          ; 00566830
        ;   Label: core_spike.cpp_factoryFuncSpike_FUN_00566830
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00566835
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 0056683a
    TEST EAX,EAX                        ; 0056683d
    JNZ 0x00566842                      ; 0056683f
        ;   XREF to: 00566842 (CONDITIONAL_JUMP)  ; LAB_00566842
    RET                                 ; 00566841
    PUSH EAX                            ; 00566842
        ;   Label: LAB_00566842
    CALL core_spike.cpp_CSpike_ctor_FUN_00566860 ; 00566843
        ;   XREF to: 00566860 (UNCONDITIONAL_CALL)  ; CSpike * core_spike.cpp_CSpike_ctor_FUN_00566860(CSpike * this_ptr)
    ADD ESP,0x4                         ; 00566848
    RET                                 ; 0056684b

