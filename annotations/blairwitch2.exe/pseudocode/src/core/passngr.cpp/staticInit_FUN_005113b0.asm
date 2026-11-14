; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_passngr_cpp_staticInit_FUN_005113b0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1d65404                      ; 005113b0
        ;   Label: core_passngr.cpp_staticInit_FUN_005113b0
    PUSH 0x6                            ; 005113b5
    PUSH 0x61b2b8                       ; 005113b7
    PUSH 0x5113e0                       ; 005113bc
    PUSH 0x5e15d7                       ; 005113c1
    PUSH 0x1d65440                      ; 005113c6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 005113cb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005113d0
    RET                                 ; 005113d3

