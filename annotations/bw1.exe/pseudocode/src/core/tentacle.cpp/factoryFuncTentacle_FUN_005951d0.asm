; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTentacle * __cdecl core_tentacle_cpp_factoryFuncTentacle_FUN_005951d0(void)
;
;
; Called Functions:
;   core_tentacle.cpp_CTentacle_ctor_FUN_00595200
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0xc2d8                         ; 005951d0
        ;   Label: core_tentacle.cpp_factoryFuncTentacle_FUN_005951d0
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 005951d5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 005951da
    TEST EAX,EAX                        ; 005951dd
    JNZ 0x005951e2                      ; 005951df
        ;   XREF to: 005951e2 (CONDITIONAL_JUMP)  ; LAB_005951e2
    RET                                 ; 005951e1
    PUSH EAX                            ; 005951e2
        ;   Label: LAB_005951e2
    CALL core_tentacle.cpp_CTentacle_ctor_FUN_00595200 ; 005951e3
        ;   XREF to: 00595200 (UNCONDITIONAL_CALL)  ; CTentacle * core_tentacle.cpp_CTentacle_ctor_FUN_00595200(CTentacle * this_ptr)
    ADD ESP,0x4                         ; 005951e8
    RET                                 ; 005951eb

