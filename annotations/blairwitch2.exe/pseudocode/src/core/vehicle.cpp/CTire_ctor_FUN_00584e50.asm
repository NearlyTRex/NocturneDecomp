; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTire * __cdecl core_vehicle_cpp_CTire_ctor_FUN_00584e50(CTire *this_ptr)
;
; Parameters:
; CTire *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00584e50
        ;   Label: core_vehicle.cpp_CTire_ctor_FUN_00584e50
    ADD EAX,0x14                        ; 00584e54
    PUSH EAX                            ; 00584e57
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 00584e58
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00584e5d
    SUB EAX,0x14                        ; 00584e60
    RET                                 ; 00584e63

