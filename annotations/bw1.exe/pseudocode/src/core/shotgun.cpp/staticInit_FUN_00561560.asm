; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_shotgun_cpp_staticInit_FUN_00561560(void)
;
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c160
;
; *****************************************************************************

section .text

    PUSH 0x2c99738                      ; 00561560
        ;   Label: core_shotgun.cpp_staticInit_FUN_00561560
    PUSH 0x1                            ; 00561565
    PUSH 0x6231e8                       ; 00561567
    PUSH 0x561590                       ; 0056156c
    PUSH 0x5f198f                       ; 00561571
    PUSH 0x269cc68                      ; 00561576
    CALL core_actor.cpp_registerActorClass_FUN_0040c160 ; 0056157b
        ;   XREF to: 0040c160 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c160(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00561580
    RET                                 ; 00561583

