; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_fire_cpp_CKeyFramedModel_getBoundsMin_FUN_0048c920(CKeyFramedModel *model_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   model_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048c920
        ;   Label: core_fire.cpp_CKeyFramedModel_getBoundsMin_FUN_0048c920
    ADD EAX,0x338                       ; 0048c924
    RET                                 ; 0048c929

