; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setLookAtTarget_FUN_00429c60(CCharacter *this_ptr,CDemonActor *target)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   target
;
; XREF[1]:
;   core_script.cpp_FUN_00522350 at 00526091
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00429c60
        ;   Label: core_charactr.cpp_CCharacter_setLookAtTarget_FUN_00429c60
    MOV EAX,dword ptr [ESP + 0x8]       ; 00429c64
    MOV dword ptr [EDX + 0x27d0],EAX    ; 00429c68
    RET                                 ; 00429c6e

