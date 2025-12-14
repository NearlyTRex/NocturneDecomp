; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_werewolf.cpp_staticInit_FUN_005efb70(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CWerewolf_00657c34
;   int g_CWerewolfClassVersion = 0x6
;   CDemonActorType g_CEnemyClassInfo
;   undefined4 DAT_03f96b44
;   undefined4 DAT_03f96b48
;   undefined4 DAT_03f96b4c
;   undefined4 DAT_03f96b50
;   undefined4 DAT_03f96b54
;   undefined4 DAT_03f96b58
;   CDemonActorType g_CWerewolfClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005efb70
        ;   Label: core_werewolf.cpp_staticInit_FUN_005efb70
    PUSH ESI                            ; 005efb71
    PUSH 0x2cf2bb8                      ; 005efb72 | g_CEnemyClassInfo
    PUSH 0x6                            ; 005efb77
    MOV EDX,0xbe8f5c29                  ; 005efb79
    MOV ECX,0x3ed70a3d                  ; 005efb7e
    PUSH 0x684958                       ; 005efb83 | g_CWerewolfClassVersion
    MOV EBX,0x3f19999a                  ; 005efb88
    MOV ESI,0x3eb33333                  ; 005efb8d
    PUSH 0x5efbd0                       ; 005efb92
    MOV dword ptr [0x03f96b44],EDX      ; 005efb97 | DAT_03f96b44
    MOV dword ptr [0x03f96b48],ECX      ; 005efb9d | DAT_03f96b48
    PUSH 0x657c34                       ; 005efba3 | = "CWerewolf"
    MOV dword ptr [0x03f96b4c],EBX      ; 005efba8 | DAT_03f96b4c
    MOV dword ptr [0x03f96b50],ESI      ; 005efbae | DAT_03f96b50
    PUSH 0x3f96b5c                      ; 005efbb4 | g_CWerewolfClassInfo
    MOV dword ptr [0x03f96b54],ECX      ; 005efbb9 | DAT_03f96b54
    MOV dword ptr [0x03f96b58],EBX      ; 005efbbf | DAT_03f96b58
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005efbc5
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005efbca
    POP ESI                             ; 005efbcd
    POP EBX                             ; 005efbce
    RET                                 ; 005efbcf

