; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sentinel_cpp_staticInit_FUN_0054b9b0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 0054b9b0
        ;   Label: core_sentinel.cpp_staticInit_FUN_0054b9b0
    PUSH 0x2                            ; 0054b9b5
    PUSH 0x622bc0                       ; 0054b9b7
    PUSH 0x54b9e0                       ; 0054b9bc
    PUSH 0x5f02b9                       ; 0054b9c1
    PUSH 0x1e8212c                      ; 0054b9c6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0054b9cb
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0054b9d0
    RET                                 ; 0054b9d3

