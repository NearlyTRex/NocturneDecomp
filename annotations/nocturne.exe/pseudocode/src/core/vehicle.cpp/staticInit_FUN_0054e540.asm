; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vehicle_cpp_staticInit_FUN_0054e540(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CVehicle_005972b8
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 0054e540
        ;   Label: core_vehicle.cpp_staticInit_FUN_0054e540
    PUSH 0x3                            ; 0054e545
    PUSH 0x5c11a0                       ; 0054e547
    PUSH 0x54e570                       ; 0054e54c
    PUSH 0x5972b8                       ; 0054e551 | = "CVehicle"
    PUSH 0x2dd1190                      ; 0054e556
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0054e55b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0054e560
    RET                                 ; 0054e563

