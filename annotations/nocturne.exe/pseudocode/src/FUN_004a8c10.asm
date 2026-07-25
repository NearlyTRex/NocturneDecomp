; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a8c10(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c78bc0
;   undefined4 DAT_01c78bc4
;   undefined4 DAT_01c78bc8
;   undefined4 DAT_01c78bcc
;   undefined4 DAT_01c78bd0
;   undefined4 DAT_01c78bd4
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004a8c10
        ;   Label: FUN_004a8c10
    PUSH 0x1bcdebc                      ; 004a8c11
    PUSH 0x7                            ; 004a8c16
    MOV EDX,0xbf19999a                  ; 004a8c18
    PUSH 0x5b9650                       ; 004a8c1d
    MOV ESI,0x3f19999a                  ; 004a8c22
    XOR ECX,ECX                         ; 004a8c27
    PUSH 0x4a8c70                       ; 004a8c29
    MOV dword ptr [0x01c78bc0],EDX      ; 004a8c2e | DAT_01c78bc0
    MOV dword ptr [0x01c78bc4],ECX      ; 004a8c34 | DAT_01c78bc4
    PUSH 0x584abd                       ; 004a8c3a
    MOV dword ptr [0x01c78bc8],ECX      ; 004a8c3f | DAT_01c78bc8
    MOV dword ptr [0x01c78bcc],ESI      ; 004a8c45 | DAT_01c78bcc
    PUSH 0x1c78bd8                      ; 004a8c4b
    MOV dword ptr [0x01c78bd0],ECX      ; 004a8c50 | DAT_01c78bd0
    MOV dword ptr [0x01c78bd4],ECX      ; 004a8c56 | DAT_01c78bd4
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 004a8c5c
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 004a8c61
    POP ESI                             ; 004a8c64
    RET                                 ; 004a8c65

