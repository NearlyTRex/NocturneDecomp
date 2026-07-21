; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boxactor_cpp_CLightActor_setup_FUN_0041f3a0(int param_1)
;
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_setup_FUN_0041e430
;   core_dlight.cpp_CDemonLight_init_FUN_0044e1e0
;   FUN_0041f6e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041f3a0
        ;   Label: core_boxactor.cpp_CLightActor_setup_FUN_0041f3a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041f3a1
    PUSH EBX                            ; 0041f3a5
    CALL FUN_0041f6e0                   ; 0041f3a6
        ;   XREF to: 0041f6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041f6e0()
    ADD ESP,0x4                         ; 0041f3ab
    PUSH EBX                            ; 0041f3ae
    CALL core_boxactor.cpp_CBoxActor_setup_FUN_0041e430 ; 0041f3af
        ;   XREF to: 0041e430 (UNCONDITIONAL_CALL)  ; undefined core_boxactor.cpp_CBoxActor_setup_FUN_0041e430()
    ADD ESP,0x4                         ; 0041f3b4
    LEA EAX,[EBX + 0x668]               ; 0041f3b7
    PUSH EAX                            ; 0041f3bd
    CALL core_dlight.cpp_CDemonLight_init_FUN_0044e1e0 ; 0041f3be
        ;   XREF to: 0044e1e0 (UNCONDITIONAL_CALL)  ; undefined core_dlight.cpp_CDemonLight_init_FUN_0044e1e0()
    ADD ESP,0x4                         ; 0041f3c3
    POP EBX                             ; 0041f3c6
    RET                                 ; 0041f3c7

