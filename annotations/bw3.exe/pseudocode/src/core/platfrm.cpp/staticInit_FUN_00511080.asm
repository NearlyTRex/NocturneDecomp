; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_platfrm_cpp_staticInit_FUN_00511080(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 00511080
        ;   Label: core_platfrm.cpp_staticInit_FUN_00511080
    PUSH 0xb                            ; 00511085
    PUSH 0x603718                       ; 00511087
    PUSH 0x5110b0                       ; 0051108c
    PUSH 0x5cc273                       ; 00511091
    PUSH 0x1ed2ab4                      ; 00511096
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0051109b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005110a0
    RET                                 ; 005110a3

