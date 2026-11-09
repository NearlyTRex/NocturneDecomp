; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_ctor_FUN_00417cf0(SBodyPartModel *this_ptr)
;
; Parameters:
; SBodyPartModel * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00417cf0
        ;   Label: core_bodypart.cpp_SBodyPartModel_ctor_FUN_00417cf0
    ADD EAX,0x18                        ; 00417cf4
    PUSH EAX                            ; 00417cf7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80 ; 00417cf8
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00417cfd
    SUB EAX,0x18                        ; 00417d00
    RET                                 ; 00417d03

