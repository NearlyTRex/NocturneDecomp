; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setDoorTarget_FUN_00432550(CCharacter *this_ptr,CDoor *door_target)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CDoor *          Stack[0x8]:4   door_target
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00432550
        ;   Label: core_charactr.cpp_CCharacter_setDoorTarget_FUN_00432550
    MOV EAX,dword ptr [ESP + 0x8]       ; 00432554
    MOV dword ptr [EDX + 0x2740],EAX    ; 00432558
    RET                                 ; 0043255e

