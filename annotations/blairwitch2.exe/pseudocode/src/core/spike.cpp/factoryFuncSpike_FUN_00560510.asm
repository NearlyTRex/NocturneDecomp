; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spike_cpp_factoryFuncSpike_FUN_00560510(void)
;
;
; Called Functions:
;   core_spike.cpp_CSpike_ctor_FUN_00560540
;   crt_unknown.c_FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH 0x6bc                          ; 00560510
        ;   Label: core_spike.cpp_factoryFuncSpike_FUN_00560510
    CALL crt_unknown.c_FUN_005b8be2     ; 00560515
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8be2()
    ADD ESP,0x4                         ; 0056051a
    TEST EAX,EAX                        ; 0056051d
    JNZ 0x00560522                      ; 0056051f
        ;   XREF to: 00560522 (CONDITIONAL_JUMP)  ; LAB_00560522
    RET                                 ; 00560521
    PUSH EAX                            ; 00560522
        ;   Label: LAB_00560522
    CALL core_spike.cpp_CSpike_ctor_FUN_00560540 ; 00560523
        ;   XREF to: 00560540 (UNCONDITIONAL_CALL)  ; CSpike * core_spike.cpp_CSpike_ctor_FUN_00560540(CSpike * this_ptr)
    ADD ESP,0x4                         ; 00560528
    RET                                 ; 0056052b

