; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lightgun_cpp_staticInit_FUN_004c6dd0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CLightGun_005879dd
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x2ddf970                      ; 004c6dd0
        ;   Label: core_lightgun.cpp_staticInit_FUN_004c6dd0
    PUSH 0x1                            ; 004c6dd5
    PUSH 0x5bace0                       ; 004c6dd7
    PUSH 0x4c6e00                       ; 004c6ddc
    PUSH 0x5879dd                       ; 004c6de1 | = "CLightGun"
    PUSH 0x1cc3688                      ; 004c6de6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004c6deb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004c6df0
    RET                                 ; 004c6df3

