; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gun_cpp_staticInit_FUN_004b2700(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CGun_005853fd
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x2ddf970                      ; 004b2700
        ;   Label: core_gun.cpp_staticInit_FUN_004b2700
    PUSH 0x1                            ; 004b2705
    PUSH 0x5ba900                       ; 004b2707
    PUSH 0x4b2730                       ; 004b270c
    PUSH 0x5853fd                       ; 004b2711 | = "CGun"
    PUSH 0x1cadfdc                      ; 004b2716
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004b271b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004b2720
    RET                                 ; 004b2723

