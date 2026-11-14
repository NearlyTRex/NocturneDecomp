; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_setSpeaker_FUN_0054aca0(CScript *this_ptr,CDemonActor *actor)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 at 0042e245
;   core_script.cpp_CScript_resetDialogState_FUN_0054ae10 at 0054ae1a
;   core_script.cpp_CScript_step_FUN_00544460 at 00546603
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0054aca0
        ;   Label: core_script.cpp_CScript_setSpeaker_FUN_0054aca0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0054aca4
    CMP EDX,dword ptr [EAX + 0x4]       ; 0054aca8
    JZ 0x0054acae                       ; 0054acab
        ;   XREF to: 0054acae (CONDITIONAL_JUMP)  ; LAB_0054acae
    RET                                 ; 0054acad
    MOV dword ptr [EAX + 0x4],0x0       ; 0054acae
        ;   Label: LAB_0054acae
    MOV byte ptr [EAX + 0x50],0x0       ; 0054acb5
    RET                                 ; 0054acb9

