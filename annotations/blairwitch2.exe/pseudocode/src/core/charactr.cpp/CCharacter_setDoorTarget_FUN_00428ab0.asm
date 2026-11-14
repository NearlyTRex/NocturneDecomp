; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setDoorTarget_FUN_00428ab0(CCharacter *this_ptr,CDoor *door_target)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CDoor *          Stack[0x8]:4   door_target
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00428ab0
        ;   Label: core_charactr.cpp_CCharacter_setDoorTarget_FUN_00428ab0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00428ab4
    MOV dword ptr [EDX + 0x27b0],EAX    ; 00428ab8
    RET                                 ; 00428abe

