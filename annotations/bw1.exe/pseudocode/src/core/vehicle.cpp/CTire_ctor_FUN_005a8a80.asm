; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTire * __cdecl core_vehicle_cpp_CTire_ctor_FUN_005a8a80(CTire *this_ptr)
;
; Parameters:
; CTire *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a8a80
        ;   Label: core_vehicle.cpp_CTire_ctor_FUN_005a8a80
    ADD EAX,0x14                        ; 005a8a84
    PUSH EAX                            ; 005a8a87
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 005a8a88
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a8a8d
    SUB EAX,0x14                        ; 005a8a90
    RET                                 ; 005a8a93

