; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_staticInit_FUN_004a8c10(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CGhoul_00584abd
;   CVector3f CVector3f_01c78bc0
;   undefined4 CVector3f_01c78bc0.y
;   undefined4 CVector3f_01c78bc0.z
;   CVector3f CVector3f_01c78bcc
;   undefined4 CVector3f_01c78bcc.y
;   undefined4 CVector3f_01c78bcc.z
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004a8c10
        ;   Label: core_ghoul.cpp_staticInit_FUN_004a8c10
    PUSH 0x1bcdebc                      ; 004a8c11
    PUSH 0x7                            ; 004a8c16
    MOV EDX,0xbf19999a                  ; 004a8c18
    PUSH 0x5b9650                       ; 004a8c1d
    MOV ESI,0x3f19999a                  ; 004a8c22
    XOR ECX,ECX                         ; 004a8c27
    PUSH 0x4a8c70                       ; 004a8c29
    MOV dword ptr [0x01c78bc0],EDX      ; 004a8c2e | CVector3f_01c78bc0
    MOV dword ptr [0x01c78bc4],ECX      ; 004a8c34 | CVector3f_01c78bc0.y
    PUSH 0x584abd                       ; 004a8c3a | = "CGhoul"
    MOV dword ptr [0x01c78bc8],ECX      ; 004a8c3f | CVector3f_01c78bc0.z
    MOV dword ptr [0x01c78bcc],ESI      ; 004a8c45 | CVector3f_01c78bcc
    PUSH 0x1c78bd8                      ; 004a8c4b
    MOV dword ptr [0x01c78bd0],ECX      ; 004a8c50 | CVector3f_01c78bcc.y
    MOV dword ptr [0x01c78bd4],ECX      ; 004a8c56 | CVector3f_01c78bcc.z
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004a8c5c
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004a8c61
    POP ESI                             ; 004a8c64
    RET                                 ; 004a8c65

