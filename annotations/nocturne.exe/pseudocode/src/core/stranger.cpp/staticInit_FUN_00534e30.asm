; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_staticInit_FUN_00534e30(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CStranger_005951c7
;   CVector3f CVector3f_02dc9f34
;   undefined4 CVector3f_02dc9f34.y
;   undefined4 CVector3f_02dc9f34.z
;   CVector3f CVector3f_02dc9f40
;   undefined4 CVector3f_02dc9f40.y
;   undefined4 CVector3f_02dc9f40.z
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534e30
        ;   Label: core_stranger.cpp_staticInit_FUN_00534e30
    PUSH ESI                            ; 00534e31
    PUSH 0x1cae0ec                      ; 00534e32
    PUSH 0x9                            ; 00534e37
    MOV EDX,0x3f05e354                  ; 00534e39
    MOV ECX,0x3d656042                  ; 00534e3e
    PUSH 0x5c0ff0                       ; 00534e43
    MOV EBX,0x3e010625                  ; 00534e48
    MOV ESI,0xbf05e354                  ; 00534e4d
    PUSH 0x535090                       ; 00534e52
    MOV dword ptr [0x02dc9f34],EDX      ; 00534e57 | CVector3f_02dc9f34
    MOV dword ptr [0x02dc9f38],ECX      ; 00534e5d | CVector3f_02dc9f34.y
    PUSH 0x5951c7                       ; 00534e63 | = "CStranger"
    MOV dword ptr [0x02dc9f3c],EBX      ; 00534e68 | CVector3f_02dc9f34.z
    MOV dword ptr [0x02dc9f40],ESI      ; 00534e6e | CVector3f_02dc9f40
    PUSH 0x2dc9fac                      ; 00534e74
    MOV dword ptr [0x02dc9f44],ECX      ; 00534e79 | CVector3f_02dc9f40.y
    MOV dword ptr [0x02dc9f48],EBX      ; 00534e7f | CVector3f_02dc9f40.z
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 00534e85
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 00534e8a
    POP ESI                             ; 00534e8d
    POP EBX                             ; 00534e8e
    RET                                 ; 00534e8f

