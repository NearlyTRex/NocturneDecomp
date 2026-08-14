; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_fire_cpp_CKeyFramedModel_getBoundsMin_FUN_004c9450(CKeyFramedModel *this_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c9450
        ;   Label: core_fire.cpp_CKeyFramedModel_getBoundsMin_FUN_004c9450
    ADD EAX,0x5678                      ; 004c9454
    RET                                 ; 004c9459

