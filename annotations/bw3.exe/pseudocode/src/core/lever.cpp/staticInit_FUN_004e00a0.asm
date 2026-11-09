; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_lever_cpp_staticInit_FUN_004e00a0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 004e00a0
        ;   Label: core_lever.cpp_staticInit_FUN_004e00a0
    PUSH 0x8                            ; 004e00a5
    PUSH 0x6002b0                       ; 004e00a7
    PUSH 0x4e00d0                       ; 004e00ac
    PUSH 0x5c68ca                       ; 004e00b1
    PUSH 0x1d70bfc                      ; 004e00b6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004e00bb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004e00c0
    RET                                 ; 004e00c3

