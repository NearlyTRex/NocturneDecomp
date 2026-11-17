; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_werewolf_cpp_staticInit_FUN_0057d4c0(void)
;
;
; Referenced Globals:
;   CVector3f g_CVector3f_02d2025c
;   undefined4 g_CVector3f_02d2025c.y
;   undefined4 g_CVector3f_02d2025c.z
;   CVector3f g_CVector3f_02d20268
;   undefined4 g_CVector3f_02d20268.y
;   undefined4 g_CVector3f_02d20268.z
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d4c0
        ;   Label: core_werewolf.cpp_staticInit_FUN_0057d4c0
    PUSH ESI                            ; 0057d4c1
    PUSH 0x1c5bc10                      ; 0057d4c2
    PUSH 0x6                            ; 0057d4c7
    MOV EDX,0xbe8f5c29                  ; 0057d4c9
    MOV ECX,0x3ed70a3d                  ; 0057d4ce
    PUSH 0x60723c                       ; 0057d4d3
    MOV EBX,0x3f19999a                  ; 0057d4d8
    MOV ESI,0x3eb33333                  ; 0057d4dd
    PUSH 0x57d520                       ; 0057d4e2
    MOV dword ptr [0x02d2025c],EDX      ; 0057d4e7 | g_CVector3f_02d2025c
    MOV dword ptr [0x02d20260],ECX      ; 0057d4ed | g_CVector3f_02d2025c.y
    PUSH 0x5d79eb                       ; 0057d4f3
    MOV dword ptr [0x02d20264],EBX      ; 0057d4f8 | g_CVector3f_02d2025c.z
    MOV dword ptr [0x02d20268],ESI      ; 0057d4fe | g_CVector3f_02d20268
    PUSH 0x2d20274                      ; 0057d504
    MOV dword ptr [0x02d2026c],ECX      ; 0057d509 | g_CVector3f_02d20268.y
    MOV dword ptr [0x02d20270],EBX      ; 0057d50f | g_CVector3f_02d20268.z
    CALL core_actor.cpp_registerActorClass_FUN_0040c3a0 ; 0057d515
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c3a0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0057d51a
    POP ESI                             ; 0057d51d
    POP EBX                             ; 0057d51e
    RET                                 ; 0057d51f

