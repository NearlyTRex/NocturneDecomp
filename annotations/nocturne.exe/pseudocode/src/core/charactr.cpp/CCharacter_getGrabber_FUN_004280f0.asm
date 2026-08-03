; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_charactr_cpp_CCharacter_getGrabber_FUN_004280f0(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004280f0
        ;   Label: core_charactr.cpp_CCharacter_getGrabber_FUN_004280f0
    MOV EAX,dword ptr [EAX + 0x2590]    ; 004280f4
    RET                                 ; 004280fa

