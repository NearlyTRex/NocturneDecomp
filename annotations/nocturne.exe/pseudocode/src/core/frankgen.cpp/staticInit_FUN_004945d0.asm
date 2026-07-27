; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_frankgen_cpp_staticInit_FUN_004945d0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CFrankenstienMachine_00581af8
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 004945d0
        ;   Label: core_frankgen.cpp_staticInit_FUN_004945d0
    PUSH 0x1                            ; 004945d5
    PUSH 0x5b9288                       ; 004945d7
    PUSH 0x494600                       ; 004945dc
    PUSH 0x581af8                       ; 004945e1 | = "CFrankenstienMachine"
    PUSH 0x1c71304                      ; 004945e6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004945eb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004945f0
    RET                                 ; 004945f3

