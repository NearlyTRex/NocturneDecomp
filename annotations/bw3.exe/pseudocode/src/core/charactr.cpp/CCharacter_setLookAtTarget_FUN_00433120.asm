; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setLookAtTarget_FUN_00433120(CCharacter *this_ptr,CDemonActor *target)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   target
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052d799
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00433120
        ;   Label: core_charactr.cpp_CCharacter_setLookAtTarget_FUN_00433120
    MOV EAX,dword ptr [ESP + 0x8]       ; 00433124
    MOV dword ptr [EDX + 0x2764],EAX    ; 00433128
    RET                                 ; 0043312e

