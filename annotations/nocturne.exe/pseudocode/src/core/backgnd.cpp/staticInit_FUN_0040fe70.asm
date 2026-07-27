; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_backgnd_cpp_staticInit_FUN_0040fe70(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBackgroundActor_005784b9
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 0040fe70
        ;   Label: core_backgnd.cpp_staticInit_FUN_0040fe70
    PUSH 0x2                            ; 0040fe75
    PUSH 0x5acf20                       ; 0040fe77
    PUSH 0x40fea0                       ; 0040fe7c
    PUSH 0x5784b9                       ; 0040fe81 | = "CBackgroundActor"
    PUSH 0x7642ac                       ; 0040fe86
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0040fe8b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040fe90
    RET                                 ; 0040fe93

