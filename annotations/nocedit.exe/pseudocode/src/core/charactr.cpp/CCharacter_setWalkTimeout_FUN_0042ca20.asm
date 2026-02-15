; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setWalkTimeout_FUN_0042ca20(CCharacter *this_ptr,float timeout)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   timeout
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042ca20
        ;   Label: core_charactr.cpp_CCharacter_setWalkTimeout_FUN_0042ca20
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042ca24
    MOV dword ptr [EDX + 0x25ac],EAX    ; 0042ca28
    RET                                 ; 0042ca2e

