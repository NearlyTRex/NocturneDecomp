; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammobox_cpp_staticInit_FUN_0040efe0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CAmmoBox_00578344
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 0040efe0
        ;   Label: core_ammobox.cpp_staticInit_FUN_0040efe0
    PUSH 0x4                            ; 0040efe5
    PUSH 0x5aceb4                       ; 0040efe7
    PUSH 0x40f010                       ; 0040efec
    PUSH 0x578344                       ; 0040eff1 | = "CAmmoBox"
    PUSH 0x7641f8                       ; 0040eff6
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0040effb
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040f000
    RET                                 ; 0040f003

