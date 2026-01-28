; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_ctor_FUN_0041b660(SBodyPartModel *this_ptr)
;
; Parameters:
; SBodyPartModel * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041b660
        ;   Label: core_bodypart.cpp_SBodyPartModel_ctor_FUN_0041b660
    ADD EAX,0x18                        ; 0041b664
    PUSH EAX                            ; 0041b667
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 0041b668
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041b66d
    SUB EAX,0x18                        ; 0041b670
    RET                                 ; 0041b673

