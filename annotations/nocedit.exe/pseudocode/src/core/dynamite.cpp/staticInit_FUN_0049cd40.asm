; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_dynamite.cpp_staticInit_FUN_0049cd40(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CDynamite_00622e62
;   int g_CDynamiteClassVersion = 0x1
;   CDemonActorType g_CDynamiteClassInfo
;   undefined4 DAT_02ceed24
;   undefined4 DAT_02ceed28
;   undefined4 DAT_02ceed2c
;   CDemonActorType g_CWeaponClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH 0x3f95d40                      ; 0049cd40 | g_CWeaponClassInfo
        ;   Label: core_dynamite.cpp_staticInit_FUN_0049cd40
    PUSH 0x1                            ; 0049cd45
    PUSH 0x678a34                       ; 0049cd47 | g_CDynamiteClassVersion
    PUSH 0x49cd80                       ; 0049cd4c
    PUSH 0x622e62                       ; 0049cd51 | = "CDynamite"
    PUSH 0x2ceece8                      ; 0049cd56 | g_CDynamiteClassInfo
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 0049cd5b
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    MOV ECX,0xc2000000                  ; 0049cd60
    XOR EDX,EDX                         ; 0049cd65
    ADD ESP,0x18                        ; 0049cd67
    MOV dword ptr [0x02ceed24],EDX      ; 0049cd6a | DAT_02ceed24
    MOV dword ptr [0x02ceed28],ECX      ; 0049cd70 | DAT_02ceed28
    MOV dword ptr [0x02ceed2c],EDX      ; 0049cd76 | DAT_02ceed2c
    RET                                 ; 0049cd7c

