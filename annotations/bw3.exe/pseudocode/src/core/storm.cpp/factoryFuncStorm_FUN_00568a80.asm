; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStorm * __cdecl core_storm_cpp_factoryFuncStorm_FUN_00568a80(void)
;
;
; Called Functions:
;   core_storm.cpp_CStorm_ctor_FUN_00568ab0
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    PUSH 0x594                          ; 00568a80
        ;   Label: core_storm.cpp_factoryFuncStorm_FUN_00568a80
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 00568a85
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 00568a8a
    TEST EAX,EAX                        ; 00568a8d
    JNZ 0x00568a92                      ; 00568a8f
        ;   XREF to: 00568a92 (CONDITIONAL_JUMP)  ; LAB_00568a92
    RET                                 ; 00568a91
    PUSH EAX                            ; 00568a92
        ;   Label: LAB_00568a92
    CALL core_storm.cpp_CStorm_ctor_FUN_00568ab0 ; 00568a93
        ;   XREF to: 00568ab0 (UNCONDITIONAL_CALL)  ; CStorm * core_storm.cpp_CStorm_ctor_FUN_00568ab0(CStorm * this_ptr)
    ADD ESP,0x4                         ; 00568a98
    RET                                 ; 00568a9b

