; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_00433c50(CCharacter *this_ptr,CDemonActor *target)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   target
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00544460 at 005480a9
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00433c50
        ;   Label: core_charactr.cpp_FUN_00433c50
    MOV EAX,dword ptr [ESP + 0x8]       ; 00433c54
    MOV dword ptr [EDX + 0x2764],EAX    ; 00433c58
    RET                                 ; 00433c5e

