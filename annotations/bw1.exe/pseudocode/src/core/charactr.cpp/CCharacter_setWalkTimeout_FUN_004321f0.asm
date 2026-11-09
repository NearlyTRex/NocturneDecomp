; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setWalkTimeout_FUN_004321f0(CCharacter *this_ptr,float timeout)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   timeout
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004321f0
        ;   Label: core_charactr.cpp_CCharacter_setWalkTimeout_FUN_004321f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004321f4
    MOV dword ptr [EDX + 0x2710],EAX    ; 004321f8
    RET                                 ; 004321fe

