; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dest_cpp_factoryFuncActorDestination_FUN_0045d1c0(void)
;
;
; Called Functions:
;   core_dest.cpp_CActorDestination_ctor_FUN_0045d1f0
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH 0x1f4                          ; 0045d1c0
        ;   Label: core_dest.cpp_factoryFuncActorDestination_FUN_0045d1c0
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 0045d1c5
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 0045d1ca
    TEST EAX,EAX                        ; 0045d1cd
    JNZ 0x0045d1d2                      ; 0045d1cf
        ;   XREF to: 0045d1d2 (CONDITIONAL_JUMP)  ; LAB_0045d1d2
    RET                                 ; 0045d1d1
    PUSH EAX                            ; 0045d1d2
        ;   Label: LAB_0045d1d2
    CALL core_dest.cpp_CActorDestination_ctor_FUN_0045d1f0 ; 0045d1d3
        ;   XREF to: 0045d1f0 (UNCONDITIONAL_CALL)  ; CActorDestination * core_dest.cpp_CActorDestination_ctor_FUN_0045d1f0(CActorDestination * this_ptr)
    ADD ESP,0x4                         ; 0045d1d8
    RET                                 ; 0045d1db

