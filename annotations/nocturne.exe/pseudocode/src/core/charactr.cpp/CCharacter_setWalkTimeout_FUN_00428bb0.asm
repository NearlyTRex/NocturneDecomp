; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setWalkTimeout_FUN_00428bb0(CCharacter *this_ptr,float timeout)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   timeout
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00428bb0
        ;   Label: core_charactr.cpp_CCharacter_setWalkTimeout_FUN_00428bb0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00428bb4
    MOV dword ptr [EDX + 0x25a4],EAX    ; 00428bb8
    RET                                 ; 00428bbe

