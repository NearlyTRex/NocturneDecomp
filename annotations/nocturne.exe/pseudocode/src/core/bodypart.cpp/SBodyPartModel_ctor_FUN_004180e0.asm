; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBodyPartModel * __cdecl core_bodypart_cpp_SBodyPartModel_ctor_FUN_004180e0(SBodyPartModel *this_ptr)
;
; Parameters:
; SBodyPartModel * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004180e0
        ;   Label: core_bodypart.cpp_SBodyPartModel_ctor_FUN_004180e0
    ADD EAX,0x18                        ; 004180e4
    PUSH EAX                            ; 004180e7
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 004180e8
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004180ed
    SUB EAX,0x18                        ; 004180f0
    RET                                 ; 004180f3

