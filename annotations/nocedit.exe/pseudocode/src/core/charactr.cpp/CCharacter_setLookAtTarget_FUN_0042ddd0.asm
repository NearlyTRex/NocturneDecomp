; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setLookAtTarget_FUN_0042ddd0(CCharacter *this_ptr,CDemonActor *target)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   target
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055dbe7
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042ddd0
        ;   Label: core_charactr.cpp_CCharacter_setLookAtTarget_FUN_0042ddd0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042ddd4
    MOV dword ptr [EDX + 0x25d4],EAX    ; 0042ddd8
    RET                                 ; 0042ddde

