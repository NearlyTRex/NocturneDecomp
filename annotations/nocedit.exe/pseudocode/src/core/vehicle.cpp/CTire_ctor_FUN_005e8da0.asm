; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CTire * core_vehicle.cpp_CTire_ctor_FUN_005e8da0(CTire * this_ptr)
;
; Parameters:
; CTire *          Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e8da0
        ;   Label: core_vehicle.cpp_CTire_ctor_FUN_005e8da0
    ADD EAX,0x14                        ; 005e8da4
    PUSH EAX                            ; 005e8da7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 005e8da8
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005e8dad
    SUB EAX,0x14                        ; 005e8db0
    RET                                 ; 005e8db3

