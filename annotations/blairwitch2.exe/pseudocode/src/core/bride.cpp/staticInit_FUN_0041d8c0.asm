; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bride_cpp_staticInit_FUN_0041d8c0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007bcc88
;   undefined4 DAT_007bcc8c
;   undefined4 DAT_007bcc90
;   undefined4 DAT_007bcc94
;   undefined4 DAT_007bcc98
;   undefined4 DAT_007bcc9c
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0041d8c0
        ;   Label: core_bride.cpp_staticInit_FUN_0041d8c0
    PUSH 0x1c264a8                      ; 0041d8c1
    PUSH 0x4                            ; 0041d8c6
    MOV EDX,0xbf19999a                  ; 0041d8c8
    PUSH 0x6099a0                       ; 0041d8cd
    MOV ESI,0x3f19999a                  ; 0041d8d2
    XOR ECX,ECX                         ; 0041d8d7
    PUSH 0x41d920                       ; 0041d8d9
    MOV dword ptr [0x007bcc88],EDX      ; 0041d8de | DAT_007bcc88
    MOV dword ptr [0x007bcc8c],ECX      ; 0041d8e4 | DAT_007bcc8c
    PUSH 0x5cc701                       ; 0041d8ea
    MOV dword ptr [0x007bcc90],ECX      ; 0041d8ef | DAT_007bcc90
    MOV dword ptr [0x007bcc94],ESI      ; 0041d8f5 | DAT_007bcc94
    PUSH 0x7bcca0                       ; 0041d8fb
    MOV dword ptr [0x007bcc98],ECX      ; 0041d900 | DAT_007bcc98
    MOV dword ptr [0x007bcc9c],ECX      ; 0041d906 | DAT_007bcc9c
    CALL core_actor.cpp_registerActorClass_FUN_0040c450 ; 0041d90c
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c450(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factory_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0041d911
    POP ESI                             ; 0041d914
    RET                                 ; 0041d915

