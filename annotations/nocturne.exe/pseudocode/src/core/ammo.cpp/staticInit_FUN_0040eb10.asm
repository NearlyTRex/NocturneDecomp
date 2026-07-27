; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammo_cpp_staticInit_FUN_0040eb10(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CAmmo_005781e5
;   int g_INT_005acea0 = 0x1
;   CDemonActorType g_CDemonActorActorType_00763e48
;   CDemonActorType g_CAmmoActorType_007641bc
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x763e48                       ; 0040eb10 | g_CDemonActorActorType_00763e48
        ;   Label: core_ammo.cpp_staticInit_FUN_0040eb10
    PUSH 0x1                            ; 0040eb15
    PUSH 0x5acea0                       ; 0040eb17 | g_INT_005acea0
    PUSH 0x40eb40                       ; 0040eb1c
    PUSH 0x5781e5                       ; 0040eb21 | = "CAmmo"
    PUSH 0x7641bc                       ; 0040eb26 | g_CAmmoActorType_007641bc
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0040eb2b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0040eb30
    RET                                 ; 0040eb33

