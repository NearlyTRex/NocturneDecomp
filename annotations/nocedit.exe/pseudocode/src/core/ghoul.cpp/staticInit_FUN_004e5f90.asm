; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_staticInit_FUN_004e5f90(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CGhoul_0062dae2
;   int g_CGhoulClassVersion = 0x7
;   CDemonActorType g_CEnemyClassInfo
;   CVector3f g_GhoulOffsetMinusX
;   undefined4 g_GhoulOffsetMinusX.y
;   undefined4 g_GhoulOffsetMinusX.z
;   CVector3f g_GhoulOffsetPlusX
;   undefined4 g_GhoulOffsetPlusX.y
;   undefined4 g_GhoulOffsetPlusX.z
;   CDemonActorType g_CGhoulClassInfo
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c2e0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e5f90
        ;   Label: core_ghoul.cpp_staticInit_FUN_004e5f90
    PUSH 0x2cf2bb8                      ; 004e5f91 | g_CEnemyClassInfo
    PUSH 0x7                            ; 004e5f96
    MOV EDX,0xbf19999a                  ; 004e5f98
    PUSH 0x67b92c                       ; 004e5f9d | g_CGhoulClassVersion
    MOV ESI,0x3f19999a                  ; 004e5fa2
    XOR ECX,ECX                         ; 004e5fa7
    PUSH 0x4e5ff0                       ; 004e5fa9
    MOV dword ptr [0x02d832a8],EDX      ; 004e5fae | g_GhoulOffsetMinusX
    MOV dword ptr [0x02d832ac],ECX      ; 004e5fb4 | g_GhoulOffsetMinusX.y
    PUSH 0x62dae2                       ; 004e5fba | = "CGhoul"
    MOV dword ptr [0x02d832b0],ECX      ; 004e5fbf | g_GhoulOffsetMinusX.z
    MOV dword ptr [0x02d832b4],ESI      ; 004e5fc5 | g_GhoulOffsetPlusX
    PUSH 0x2d832c0                      ; 004e5fcb | g_CGhoulClassInfo
    MOV dword ptr [0x02d832b8],ECX      ; 004e5fd0 | g_GhoulOffsetPlusX.y
    MOV dword ptr [0x02d832bc],ECX      ; 004e5fd6 | g_GhoulOffsetPlusX.z
    CALL core_actor.cpp_registerActorClass_FUN_0040c2e0 ; 004e5fdc
        ;   XREF to: 0040c2e0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004e5fe1
    POP ESI                             ; 004e5fe4
    RET                                 ; 004e5fe5

