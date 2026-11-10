; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_charactr_cpp_CCharacter_getGrabber_FUN_00430800(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00430800
        ;   Label: core_charactr.cpp_CCharacter_getGrabber_FUN_00430800
    MOV EAX,dword ptr [EAX + 0x26fc]    ; 00430804
    RET                                 ; 0043080a

