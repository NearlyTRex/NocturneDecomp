; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_waypoint_cpp_staticInit_FUN_00552380(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CWayPoint_00597738
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x2dd1084                      ; 00552380
        ;   Label: core_waypoint.cpp_staticInit_FUN_00552380
    PUSH 0x2                            ; 00552385
    PUSH 0x5c1578                       ; 00552387
    PUSH 0x5524a0                       ; 0055238c
    PUSH 0x597738                       ; 00552391 | = "CWayPoint"
    PUSH 0x2ddf514                      ; 00552396
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0055239b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005523a0
    RET                                 ; 005523a3

