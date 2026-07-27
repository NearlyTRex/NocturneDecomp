; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_shovel_cpp_staticInit_FUN_005169b0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CShovel_005910bd
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x2ddf970                      ; 005169b0
        ;   Label: core_shovel.cpp_staticInit_FUN_005169b0
    PUSH 0x1                            ; 005169b5
    PUSH 0x5be950                       ; 005169b7
    PUSH 0x5169e0                       ; 005169bc
    PUSH 0x5910bd                       ; 005169c1 | = "CShovel"
    PUSH 0x26718d8                      ; 005169c6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 005169cb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005169d0
    RET                                 ; 005169d3

