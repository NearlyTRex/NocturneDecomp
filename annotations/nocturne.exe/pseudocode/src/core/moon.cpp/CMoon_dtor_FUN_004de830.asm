; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_moon_cpp_CMoon_dtor_FUN_004de830(CMoon *param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00452630
;   core_moon.cpp_CMoon_free_FUN_004dea60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004de830
        ;   Label: core_moon.cpp_CMoon_dtor_FUN_004de830
    MOV EBX,dword ptr [ESP + 0x8]       ; 004de831
    PUSH EBX                            ; 004de835
    CALL core_moon.cpp_CMoon_free_FUN_004dea60 ; 004de836
        ;   XREF to: 004dea60 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_free_FUN_004dea60(CMoon * this_ptr)
    ADD ESP,0x4                         ; 004de83b
    PUSH 0x0                            ; 004de83e
    ADD EBX,0x8                         ; 004de840
    PUSH EBX                            ; 004de843
    CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00452630 ; 004de844
        ;   XREF to: 00452630 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00452630(CKeyFramedModel * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004de849
    SUB EAX,0x8                         ; 004de84c
    POP EBX                             ; 004de84f
    RET                                 ; 004de850

