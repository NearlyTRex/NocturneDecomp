; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_imp_cpp_staticInit_FUN_004f2790(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x1c3f668                      ; 004f2790
        ;   Label: core_imp.cpp_staticInit_FUN_004f2790
    PUSH 0x1                            ; 004f2795
    PUSH 0x61efec                       ; 004f2797
    PUSH 0x4f27c0                       ; 004f279c
    PUSH 0x5e548a                       ; 004f27a1
    PUSH 0x1d06d28                      ; 004f27a6
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 004f27ab
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004f27b0
    RET                                 ; 004f27b3

