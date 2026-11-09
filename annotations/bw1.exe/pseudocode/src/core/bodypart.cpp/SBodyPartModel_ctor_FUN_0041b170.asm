; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_ctor_FUN_0041b170(SBodyPartModel *this_ptr)
;
; Parameters:
; SBodyPartModel * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041b170
        ;   Label: core_bodypart.cpp_SBodyPartModel_ctor_FUN_0041b170
    ADD EAX,0x18                        ; 0041b174
    PUSH EAX                            ; 0041b177
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860 ; 0041b178
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00468860(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041b17d
    SUB EAX,0x18                        ; 0041b180
    RET                                 ; 0041b183

