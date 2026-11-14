; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sentinel_cpp_staticInit_FUN_005310a0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x1c5bc10                      ; 005310a0
        ;   Label: core_sentinel.cpp_staticInit_FUN_005310a0
    PUSH 0x2                            ; 005310a5
    PUSH 0x603ad0                       ; 005310a7
    PUSH 0x5310d0                       ; 005310ac
    PUSH 0x5cff4a                       ; 005310b1
    PUSH 0x1ed788c                      ; 005310b6
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 005310bb
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005310c0
    RET                                 ; 005310c3

