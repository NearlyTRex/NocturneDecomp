; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_bride.cpp_staticInit_FUN_00423700(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBride_00616a9d
;   int g_CBrideClassVersion = 0x4
;   undefined4 DAT_00822c88
;   undefined4 DAT_00822c8c
;   undefined4 DAT_00822c90
;   undefined4 DAT_00822c94
;   undefined4 DAT_00822c98
;   undefined4 DAT_00822c9c
;   CDemonActorType g_CBrideClassInfo
;   CDemonActorType g_CEnemyClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00423700
        ;   Label: core_bride.cpp_staticInit_FUN_00423700
    PUSH 0x2cf2bb8                      ; 00423701 | g_CEnemyClassInfo
    PUSH 0x4                            ; 00423706
    MOV EDX,0xbf19999a                  ; 00423708
    PUSH 0x66e648                       ; 0042370d | g_CBrideClassVersion
    MOV ESI,0x3f19999a                  ; 00423712
    XOR ECX,ECX                         ; 00423717
    PUSH 0x423760                       ; 00423719
    MOV dword ptr [0x00822c88],EDX      ; 0042371e | DAT_00822c88
    MOV dword ptr [0x00822c8c],ECX      ; 00423724 | DAT_00822c8c
    PUSH 0x616a9d                       ; 0042372a | = "CBride"
    MOV dword ptr [0x00822c90],ECX      ; 0042372f | DAT_00822c90
    MOV dword ptr [0x00822c94],ESI      ; 00423735 | DAT_00822c94
    PUSH 0x822ca0                       ; 0042373b | g_CBrideClassInfo
    MOV dword ptr [0x00822c98],ECX      ; 00423740 | DAT_00822c98
    MOV dword ptr [0x00822c9c],ECX      ; 00423746 | DAT_00822c9c
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0042374c
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00423751
    POP ESI                             ; 00423754
    RET                                 ; 00423755

