; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setWalkTimeout_FUN_00431610(CCharacter *this_ptr,float timeout)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   timeout
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00431610
        ;   Label: core_charactr.cpp_CCharacter_setWalkTimeout_FUN_00431610
    MOV EAX,dword ptr [ESP + 0x8]       ; 00431614
    MOV dword ptr [EDX + 0x2710],EAX    ; 00431618
    RET                                 ; 0043161e

