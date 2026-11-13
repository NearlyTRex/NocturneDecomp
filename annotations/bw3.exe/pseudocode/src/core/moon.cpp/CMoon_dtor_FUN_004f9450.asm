; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMoon * __cdecl core_moon_cpp_CMoon_dtor_FUN_004f9450(CMoon *this_ptr,uint flags)
;
; Parameters:
; CMoon *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00460530
;   core_moon.cpp_CMoon_free_FUN_004f9580
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f9450
        ;   Label: core_moon.cpp_CMoon_dtor_FUN_004f9450
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f9451
    PUSH EBX                            ; 004f9455
    CALL core_moon.cpp_CMoon_free_FUN_004f9580 ; 004f9456
        ;   XREF to: 004f9580 (UNCONDITIONAL_CALL)  ; void core_moon.cpp_CMoon_free_FUN_004f9580(CMoon * this_ptr)
    ADD ESP,0x4                         ; 004f945b
    PUSH 0x0                            ; 004f945e
    ADD EBX,0x738                       ; 004f9460
    PUSH EBX                            ; 004f9466
    CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00460530 ; 004f9467
        ;   XREF to: 00460530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00460530(CKeyFramedModel * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f946c
    PUSH 0x0                            ; 004f946f
    SUB EAX,0x398                       ; 004f9471
    PUSH EAX                            ; 004f9476
    CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00460530 ; 004f9477
        ;   XREF to: 00460530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00460530(CKeyFramedModel * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f947c
    PUSH 0x0                            ; 004f947f
    SUB EAX,0x398                       ; 004f9481
    PUSH EAX                            ; 004f9486
    CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00460530 ; 004f9487
        ;   XREF to: 00460530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00460530(CKeyFramedModel * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f948c
    SUB EAX,0x8                         ; 004f948f
    POP EBX                             ; 004f9492
    RET                                 ; 004f9493

