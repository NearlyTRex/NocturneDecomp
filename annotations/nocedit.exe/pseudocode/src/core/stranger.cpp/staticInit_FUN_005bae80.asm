; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_stranger_cpp_staticInit_FUN_005bae80(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CStranger_0065318c
;   int g_CStrangerClassVersion = 0x9
;   CDemonActorType g_CHeroClassInfo
;   float FLOAT_03f6bab0
;   float FLOAT_03f6bab4
;   float FLOAT_03f6bab8
;   float FLOAT_03f6babc
;   float FLOAT_03f6bac0
;   float FLOAT_03f6bac4
;   CDemonActorType g_CStrangerClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bae80
        ;   Label: core_stranger.cpp_staticInit_FUN_005bae80
    PUSH ESI                            ; 005bae81
    PUSH 0x2db87d4                      ; 005bae82 | g_CHeroClassInfo
    PUSH 0x9                            ; 005bae87
    MOV EDX,0x3f05e354                  ; 005bae89
    MOV ECX,0x3d656042                  ; 005bae8e
    PUSH 0x6841bc                       ; 005bae93 | g_CStrangerClassVersion
    MOV EBX,0x3e010625                  ; 005bae98
    MOV ESI,0xbf05e354                  ; 005bae9d
    PUSH 0x5bb0e0                       ; 005baea2
    MOV dword ptr [0x03f6bab0],EDX      ; 005baea7 | FLOAT_03f6bab0
    MOV dword ptr [0x03f6bab4],ECX      ; 005baead | FLOAT_03f6bab4
    PUSH 0x65318c                       ; 005baeb3 | = "CStranger"
    MOV dword ptr [0x03f6bab8],EBX      ; 005baeb8 | FLOAT_03f6bab8
    MOV dword ptr [0x03f6babc],ESI      ; 005baebe | FLOAT_03f6babc
    PUSH 0x3f6bb28                      ; 005baec4 | g_CStrangerClassInfo
    MOV dword ptr [0x03f6bac0],ECX      ; 005baec9 | FLOAT_03f6bac0
    MOV dword ptr [0x03f6bac4],EBX      ; 005baecf | FLOAT_03f6bac4
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 005baed5
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 005baeda
    POP ESI                             ; 005baedd
    POP EBX                             ; 005baede
    RET                                 ; 005baedf

