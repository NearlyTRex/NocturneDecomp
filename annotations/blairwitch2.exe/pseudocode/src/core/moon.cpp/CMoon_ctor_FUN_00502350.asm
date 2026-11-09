; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMoon * core_moon_cpp_CMoon_ctor_FUN_00502350(CMoon *this_ptr)
;
; Parameters:
; CMoon *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_menu.cpp_staticInit_FUN_004eae70 at 004eae96
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_0044dc10
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00502350
        ;   Label: core_moon.cpp_CMoon_ctor_FUN_00502350
    ADD EAX,0x8                         ; 00502354
    PUSH EAX                            ; 00502357
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_0044dc10 ; 00502358
        ;   XREF to: 0044dc10 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_0044dc10(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0050235d
    ADD EAX,0x398                       ; 00502360
    PUSH EAX                            ; 00502365
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_0044dc10 ; 00502366
        ;   XREF to: 0044dc10 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_0044dc10(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0050236b
    ADD EAX,0x398                       ; 0050236e
    PUSH EAX                            ; 00502373
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_0044dc10 ; 00502374
        ;   XREF to: 0044dc10 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_0044dc10(CKeyFramedModel * this_ptr)
    SUB EAX,0x738                       ; 00502379
    ADD ESP,0x4                         ; 0050237e
    MOV dword ptr [EAX],0x0             ; 00502381
    RET                                 ; 00502387

