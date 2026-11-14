; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_staticInit_FUN_004e6f30(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH 0x2d0c118                      ; 004e6f30
        ;   Label: core_melee.cpp_staticInit_FUN_004e6f30
    PUSH 0x7                            ; 004e6f35
    PUSH 0x600344                       ; 004e6f37
    PUSH 0x4e6f60                       ; 004e6f3c
    PUSH 0x5c704a                       ; 004e6f41
    PUSH 0x1d72bd0                      ; 004e6f46
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 004e6f4b
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004e6f50
    RET                                 ; 004e6f53

