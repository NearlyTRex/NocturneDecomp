; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041fb20(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00764ad8
;   undefined4 DAT_00764adc
;   undefined4 DAT_00764ae0
;   undefined4 DAT_00764ae4
;   undefined4 DAT_00764ae8
;   undefined4 DAT_00764aec
;
; Called Functions:
;   core_actor.cpp_registerActorClass_FUN_0040d3f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0041fb20
        ;   Label: FUN_0041fb20
    PUSH 0x1bcdebc                      ; 0041fb21
    PUSH 0x4                            ; 0041fb26
    MOV EDX,0xbf19999a                  ; 0041fb28
    PUSH 0x5ad0e0                       ; 0041fb2d
    MOV ESI,0x3f19999a                  ; 0041fb32
    XOR ECX,ECX                         ; 0041fb37
    PUSH 0x41fb80                       ; 0041fb39
    MOV dword ptr [0x00764ad8],EDX      ; 0041fb3e | DAT_00764ad8
    MOV dword ptr [0x00764adc],ECX      ; 0041fb44 | DAT_00764adc
    PUSH 0x5799ed                       ; 0041fb4a
    MOV dword ptr [0x00764ae0],ECX      ; 0041fb4f | DAT_00764ae0
    MOV dword ptr [0x00764ae4],ESI      ; 0041fb55 | DAT_00764ae4
    PUSH 0x764af0                       ; 0041fb5b
    MOV dword ptr [0x00764ae8],ECX      ; 0041fb60 | DAT_00764ae8
    MOV dword ptr [0x00764aec],ECX      ; 0041fb66 | DAT_00764aec
    CALL core_actor.cpp_registerActorClass_FUN_0040d3f0 ; 0041fb6c
        ;   XREF to: 0040d3f0 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040d3f0(CDemonActorType * this_ptr, char * class_name, CDemonActor_FactoryFunc * factor_func, int * max_version, ...)
    ADD ESP,0x18                        ; 0041fb71
    POP ESI                             ; 0041fb74
    RET                                 ; 0041fb75

