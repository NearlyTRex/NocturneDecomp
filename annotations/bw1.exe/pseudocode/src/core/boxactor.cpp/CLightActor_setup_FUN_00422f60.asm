; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CLightActor_setup_FUN_00422f60(CLightActor *this_ptr)
;
; Parameters:
; CLightActor *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_boxactor.cpp_CBoxActor_setup_FUN_00421de0
;   core_boxactor.cpp_FUN_004232c0
;   core_dlight.cpp_CDemonLight_init_FUN_00462590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422f60
        ;   Label: core_boxactor.cpp_CLightActor_setup_FUN_00422f60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00422f61
    PUSH EBX                            ; 00422f65
    CALL core_boxactor.cpp_FUN_004232c0 ; 00422f66
        ;   XREF to: 004232c0 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_FUN_004232c0(CLightActor * this_ptr)
    ADD ESP,0x4                         ; 00422f6b
    PUSH EBX                            ; 00422f6e
    CALL core_boxactor.cpp_CBoxActor_setup_FUN_00421de0 ; 00422f6f
        ;   XREF to: 00421de0 (UNCONDITIONAL_CALL)  ; void core_boxactor.cpp_CBoxActor_setup_FUN_00421de0(CBoxActor * this_ptr)
    ADD ESP,0x4                         ; 00422f74
    LEA EAX,[EBX + 0x67c]               ; 00422f77
    PUSH EAX                            ; 00422f7d
    CALL core_dlight.cpp_CDemonLight_init_FUN_00462590 ; 00422f7e
        ;   XREF to: 00462590 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_init_FUN_00462590(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 00422f83
    POP EBX                             ; 00422f86
    RET                                 ; 00422f87

