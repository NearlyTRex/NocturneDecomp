; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spike_cpp_factoryFuncSpike_FUN_00582f60(void)
;
;
; Called Functions:
;   core_spike.cpp_CSpike_ctor_FUN_00582f90
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x560                          ; 00582f60
        ;   Label: core_spike.cpp_factoryFuncSpike_FUN_00582f60
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 00582f65
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 00582f6a
    TEST EAX,EAX                        ; 00582f6d
    JNZ 0x00582f72                      ; 00582f6f
        ;   XREF to: 00582f72 (CONDITIONAL_JUMP)  ; LAB_00582f72
    RET                                 ; 00582f71
    PUSH EAX                            ; 00582f72
        ;   Label: LAB_00582f72
    CALL core_spike.cpp_CSpike_ctor_FUN_00582f90 ; 00582f73
        ;   XREF to: 00582f90 (UNCONDITIONAL_CALL)  ; CSpike * core_spike.cpp_CSpike_ctor_FUN_00582f90(CSpike * this_ptr)
    ADD ESP,0x4                         ; 00582f78
    RET                                 ; 00582f7b

