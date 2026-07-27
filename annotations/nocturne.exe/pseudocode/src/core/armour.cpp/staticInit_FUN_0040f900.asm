; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_armour_cpp_staticInit_FUN_0040f900(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CArmour_00578452
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x1bcdebc                      ; 0040f900
        ;   Label: core_armour.cpp_staticInit_FUN_0040f900
    PUSH 0x1                            ; 0040f905
    PUSH 0x5acedc                       ; 0040f907
    PUSH 0x40f930                       ; 0040f90c
    PUSH 0x578452                       ; 0040f911 | = "CArmour"
    PUSH 0x764270                       ; 0040f916
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0040f91b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040f920
    RET                                 ; 0040f923

