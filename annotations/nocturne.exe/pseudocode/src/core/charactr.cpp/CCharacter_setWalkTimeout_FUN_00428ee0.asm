; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setWalkTimeout_FUN_00428ee0(CCharacter *this_ptr,float timeout)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   timeout
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00428ee0
        ;   Label: core_charactr.cpp_CCharacter_setWalkTimeout_FUN_00428ee0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00428ee4
    MOV dword ptr [EDX + 0x25ac],EAX    ; 00428ee8
    RET                                 ; 00428eee

