; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setWalkTimeout_FUN_004287a0(CCharacter *this_ptr,float timeout)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   timeout
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004287a0
        ;   Label: core_charactr.cpp_CCharacter_setWalkTimeout_FUN_004287a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004287a4
    MOV dword ptr [EDX + 0x2780],EAX    ; 004287a8
    RET                                 ; 004287ae

