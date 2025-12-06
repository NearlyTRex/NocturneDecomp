; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CMoon * core_moon.cpp_CMoon_dtor_FUN_00529ab0(CMoon * this_ptr)
;
; Parameters:
; CMoon *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90
;   core_moon.cpp_CMoon_free_FUN_00529ce0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529ab0
        ;   Label: core_moon.cpp_CMoon_dtor_FUN_00529ab0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00529ab1
    PUSH EBX                            ; 00529ab5
    CALL core_moon.cpp_CMoon_free_FUN_00529ce0 ; 00529ab6 | void core_moon.cpp_CMoon_free_FUN_00529ce0(CMoon * this_ptr)
        ;   XREF to: 00529ce0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00529abb
    PUSH 0x0                            ; 00529abe
    ADD EBX,0x8                         ; 00529ac0
    PUSH EBX                            ; 00529ac3
    CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90 ; 00529ac4 | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90(CKeyFramedModel * this_ptr)
        ;   XREF to: 00476d90 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00529ac9
    SUB EAX,0x8                         ; 00529acc
    POP EBX                             ; 00529acf
    RET                                 ; 00529ad0

