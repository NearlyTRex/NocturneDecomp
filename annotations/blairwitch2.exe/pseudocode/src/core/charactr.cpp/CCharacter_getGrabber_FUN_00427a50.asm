; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_charactr_cpp_CCharacter_getGrabber_FUN_00427a50(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00427a50
        ;   Label: core_charactr.cpp_CCharacter_getGrabber_FUN_00427a50
    MOV EAX,dword ptr [EAX + 0x276c]    ; 00427a54
    RET                                 ; 00427a5a

