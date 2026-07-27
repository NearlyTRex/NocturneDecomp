; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_werewolf_cpp_staticInit_FUN_00555a00(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CWerewolf_00597cc9
;   CVector3f CVector3f_02de0774
;   undefined4 CVector3f_02de0774.y
;   undefined4 CVector3f_02de0774.z
;   CVector3f CVector3f_02de0780
;   undefined4 CVector3f_02de0780.y
;   undefined4 CVector3f_02de0780.z
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555a00
        ;   Label: core_werewolf.cpp_staticInit_FUN_00555a00
    PUSH ESI                            ; 00555a01
    PUSH 0x1bcdebc                      ; 00555a02
    PUSH 0x6                            ; 00555a07
    MOV EDX,0xbe8f5c29                  ; 00555a09
    MOV ECX,0x3ed70a3d                  ; 00555a0e
    PUSH 0x5c1614                       ; 00555a13
    MOV EBX,0x3f19999a                  ; 00555a18
    MOV ESI,0x3eb33333                  ; 00555a1d
    PUSH 0x555a60                       ; 00555a22
    MOV dword ptr [0x02de0774],EDX      ; 00555a27 | CVector3f_02de0774
    MOV dword ptr [0x02de0778],ECX      ; 00555a2d | CVector3f_02de0774.y
    PUSH 0x597cc9                       ; 00555a33 | = "CWerewolf"
    MOV dword ptr [0x02de077c],EBX      ; 00555a38 | CVector3f_02de0774.z
    MOV dword ptr [0x02de0780],ESI      ; 00555a3e | CVector3f_02de0780
    PUSH 0x2de078c                      ; 00555a44
    MOV dword ptr [0x02de0784],ECX      ; 00555a49 | CVector3f_02de0780.y
    MOV dword ptr [0x02de0788],EBX      ; 00555a4f | CVector3f_02de0780.z
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 00555a55
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00555a5a
    POP ESI                             ; 00555a5d
    POP EBX                             ; 00555a5e
    RET                                 ; 00555a5f

