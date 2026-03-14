; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bride_cpp_staticInit_FUN_00423700(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CBride_00616a9d
;   int g_CBrideClassVersion = 0x4
;   CVector3f CVector3f_00822c88
;   undefined4 CVector3f_00822c88.y
;   undefined4 CVector3f_00822c88.z
;   CVector3f CVector3f_00822c94
;   undefined4 CVector3f_00822c94.y
;   undefined4 CVector3f_00822c94.z
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
    MOV dword ptr [0x00822c88],EDX      ; 0042371e | CVector3f_00822c88
    MOV dword ptr [0x00822c8c],ECX      ; 00423724 | CVector3f_00822c88.y
    PUSH 0x616a9d                       ; 0042372a | = "CBride"
    MOV dword ptr [0x00822c90],ECX      ; 0042372f | CVector3f_00822c88.z
    MOV dword ptr [0x00822c94],ESI      ; 00423735 | CVector3f_00822c94
    PUSH 0x822ca0                       ; 0042373b | g_CBrideClassInfo
    MOV dword ptr [0x00822c98],ECX      ; 00423740 | CVector3f_00822c94.y
    MOV dword ptr [0x00822c9c],ECX      ; 00423746 | CVector3f_00822c94.z
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0042374c
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00423751
    POP ESI                             ; 00423754
    RET                                 ; 00423755

