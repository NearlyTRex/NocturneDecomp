; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stairs_cpp_staticInit_FUN_00568350(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 00568350
        ;   Label: core_stairs.cpp_staticInit_FUN_00568350
    PUSH 0x2                            ; 00568355
    PUSH 0x606874                       ; 00568357
    PUSH 0x568380                       ; 0056835c
    PUSH 0x5d5c70                       ; 00568361
    PUSH 0x2cf61f0                      ; 00568366
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0056836b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00568370
    RET                                 ; 00568373

