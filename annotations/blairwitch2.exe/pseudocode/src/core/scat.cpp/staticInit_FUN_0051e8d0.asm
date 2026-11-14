; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_scat_cpp_staticInit_FUN_0051e8d0(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH 0x1cedf18                      ; 0051e8d0
        ;   Label: core_scat.cpp_staticInit_FUN_0051e8d0
    PUSH 0x1                            ; 0051e8d5
    PUSH 0x61b428                       ; 0051e8d7
    PUSH 0x51e970                       ; 0051e8dc
    PUSH 0x5e29ab                       ; 0051e8e1
    PUSH 0x1e620b0                      ; 0051e8e6
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0051e8eb
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0051e8f0
    RET                                 ; 0051e8f3

