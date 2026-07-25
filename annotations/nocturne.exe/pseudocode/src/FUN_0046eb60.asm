; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046eb60(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01bca0c4
;   undefined4 DAT_01bca0c8
;   undefined4 DAT_01bca0cc
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH 0x2ddf970                      ; 0046eb60
        ;   Label: FUN_0046eb60
    PUSH 0x1                            ; 0046eb65
    PUSH 0x5b6d24                       ; 0046eb67
    PUSH 0x46eba0                       ; 0046eb6c
    PUSH 0x57e4c6                       ; 0046eb71
    PUSH 0x1bca088                      ; 0046eb76
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0046eb7b
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    MOV ECX,0xc2000000                  ; 0046eb80
    XOR EDX,EDX                         ; 0046eb85
    ADD ESP,0x18                        ; 0046eb87
    MOV dword ptr [0x01bca0c4],EDX      ; 0046eb8a | DAT_01bca0c4
    MOV dword ptr [0x01bca0c8],ECX      ; 0046eb90 | DAT_01bca0c8
    MOV dword ptr [0x01bca0cc],EDX      ; 0046eb96 | DAT_01bca0cc
    RET                                 ; 0046eb9c

