; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * core_vehicle_cpp_CTire_ctor_FUN_0054f870(int param_1)
;
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054f870
        ;   Label: core_vehicle.cpp_CTire_ctor_FUN_0054f870
    ADD EAX,0x14                        ; 0054f874
    PUSH EAX                            ; 0054f877
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 0054f878
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054f87d
    SUB EAX,0x14                        ; 0054f880
    RET                                 ; 0054f883

