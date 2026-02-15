; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_charactr_cpp_CCharacter_getGrabber_FUN_0042bf80(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042bf80
        ;   Label: core_charactr.cpp_CCharacter_getGrabber_FUN_0042bf80
    MOV EAX,dword ptr [EAX + 0x2598]    ; 0042bf84
    RET                                 ; 0042bf8a

