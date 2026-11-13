; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tbplayer_cpp_staticInit_FUN_00571ab0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1d65404                      ; 00571ab0
        ;   Label: core_tbplayer.cpp_staticInit_FUN_00571ab0
    PUSH 0x1                            ; 00571ab5
    PUSH 0x61e340                       ; 00571ab7
    PUSH 0x571b00                       ; 00571abc
    PUSH 0x5ec3ce                       ; 00571ac1
    PUSH 0x264bfc0                      ; 00571ac6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 00571acb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00571ad0
    PUSH 0x1d65404                      ; 00571ad3
    PUSH 0x1                            ; 00571ad8
    PUSH 0x61e344                       ; 00571ada
    PUSH 0x571d80                       ; 00571adf
    PUSH 0x5ec3da                       ; 00571ae4
    PUSH 0x264bffc                      ; 00571ae9
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 00571aee
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00571af3
    RET                                 ; 00571af6

