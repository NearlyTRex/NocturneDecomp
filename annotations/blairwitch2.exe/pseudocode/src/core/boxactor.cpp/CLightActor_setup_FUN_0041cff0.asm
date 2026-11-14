; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CLightActor_setup_FUN_0041cff0(CLightActor *this_ptr)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_setup_FUN_0041be70
;   core_boxactor.cpp_CLightActor_setupLightModel_FUN_0041d350
;   core_dlight.cpp_CDemonLight_init_FUN_00449d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041cff0
        ;   Label: core_boxactor.cpp_CLightActor_setup_FUN_0041cff0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0041cff1
    PUSH EBX                            ; 0041cff5
    CALL core_boxactor.cpp_CLightActor_setupLightModel_FUN_0041d350 ; 0041cff6
        ;   XREF to: 0041d350 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CLightActor_setupLightModel_FUN_0041d350(CLightActor * this_ptr)
    ADD ESP,0x4                         ; 0041cffb
    PUSH EBX                            ; 0041cffe
    CALL core_boxactor.cpp_CBoxActor_setup_FUN_0041be70 ; 0041cfff
        ;   XREF to: 0041be70 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_setup_FUN_0041be70(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 0041d004
    LEA EAX,[EBX + 0x7d8]               ; 0041d007
    PUSH EAX                            ; 0041d00d
    CALL core_dlight.cpp_CDemonLight_init_FUN_00449d90 ; 0041d00e
        ;   XREF to: 00449d90 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_init_FUN_00449d90(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0041d013
    POP EBX                             ; 0041d016
    RET                                 ; 0041d017

