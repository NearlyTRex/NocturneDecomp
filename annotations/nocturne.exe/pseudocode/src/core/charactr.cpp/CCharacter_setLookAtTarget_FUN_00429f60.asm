; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_setLookAtTarget_FUN_00429f60(CCharacter *this_ptr,CDemonActor *target)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   target
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00502697
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00429f60
        ;   Label: core_charactr.cpp_CCharacter_setLookAtTarget_FUN_00429f60
    MOV EAX,dword ptr [ESP + 0x8]       ; 00429f64
    MOV dword ptr [EDX + 0x25cc],EAX    ; 00429f68
    RET                                 ; 00429f6e

