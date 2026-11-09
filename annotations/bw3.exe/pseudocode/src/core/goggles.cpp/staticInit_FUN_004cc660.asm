; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_goggles_cpp_staticInit_FUN_004cc660(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x7df978                       ; 004cc660
        ;   Label: core_goggles.cpp_staticInit_FUN_004cc660
    PUSH 0x1                            ; 004cc665
    PUSH 0x5fecf0                       ; 004cc667
    PUSH 0x4cc690                       ; 004cc66c
    PUSH 0x5c45f8                       ; 004cc671
    PUSH 0x1d22e08                      ; 004cc676
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004cc67b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004cc680
    RET                                 ; 004cc683

