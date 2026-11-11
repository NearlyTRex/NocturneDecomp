; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMoon * core_moon_cpp_CMoon_dtor_FUN_00521c00(CMoon *this_ptr,uint flags)
;
; Parameters:
; CMoon *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00466880
;   core_moon.cpp_CMoon_free_FUN_00521d50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521c00
        ;   Label: core_moon.cpp_CMoon_dtor_FUN_00521c00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00521c01
    PUSH EBX                            ; 00521c05
    CALL core_moon.cpp_CMoon_free_FUN_00521d50 ; 00521c06
        ;   XREF to: 00521d50 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_free_FUN_00521d50(CMoon * this_ptr)
    ADD ESP,0x4                         ; 00521c0b
    PUSH 0x0                            ; 00521c0e
    ADD EBX,0x738                       ; 00521c10
    PUSH EBX                            ; 00521c16
    CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00466880 ; 00521c17
        ;   XREF to: 00466880 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00466880(CKeyFramedModel * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00521c1c
    PUSH 0x0                            ; 00521c1f
    SUB EAX,0x398                       ; 00521c21
    PUSH EAX                            ; 00521c26
    CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00466880 ; 00521c27
        ;   XREF to: 00466880 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00466880(CKeyFramedModel * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00521c2c
    PUSH 0x0                            ; 00521c2f
    SUB EAX,0x398                       ; 00521c31
    PUSH EAX                            ; 00521c36
    CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00466880 ; 00521c37
        ;   XREF to: 00466880 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00466880(CKeyFramedModel * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00521c3c
    SUB EAX,0x8                         ; 00521c3f
    POP EBX                             ; 00521c42
    RET                                 ; 00521c43

