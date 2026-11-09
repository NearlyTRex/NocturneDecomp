; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_ctor_FUN_00416da0(SBodyPartModel *this_ptr)
;
; Parameters:
; SBodyPartModel * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00416da0
        ;   Label: core_bodypart.cpp_SBodyPartModel_ctor_FUN_00416da0
    ADD EAX,0x18                        ; 00416da4
    PUSH EAX                            ; 00416da7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 00416da8
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00416dad
    SUB EAX,0x18                        ; 00416db0
    RET                                 ; 00416db3

