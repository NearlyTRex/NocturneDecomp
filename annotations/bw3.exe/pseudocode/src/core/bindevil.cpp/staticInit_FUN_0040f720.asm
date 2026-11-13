; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bindevil_cpp_staticInit_FUN_0040f720(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 0040f720
        ;   Label: core_bindevil.cpp_staticInit_FUN_0040f720
    PUSH 0x1                            ; 0040f725
    PUSH 0x5f0c00                       ; 0040f727
    PUSH 0x40f750                       ; 0040f72c
    PUSH 0x5b6317                       ; 0040f731
    PUSH 0x7dfecc                       ; 0040f736
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0040f73b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040f740
    RET                                 ; 0040f743

