; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_setSpeaker_FUN_00529990(CScript *this_ptr,CDemonActor *actor)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 at 00424554
;   core_script.cpp_CScript_resetDialogState_FUN_00529b00 at 00529b0a
;   core_script.cpp_FUN_00522350 at 0052474e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00529990
        ;   Label: core_script.cpp_CScript_setSpeaker_FUN_00529990
    MOV EDX,dword ptr [ESP + 0x8]       ; 00529994
    CMP EDX,dword ptr [EAX + 0x4]       ; 00529998
    JZ 0x0052999e                       ; 0052999b
        ;   XREF to: 0052999e (CONDITIONAL_JUMP)  ; LAB_0052999e
    RET                                 ; 0052999d
    MOV dword ptr [EAX + 0x4],0x0       ; 0052999e
        ;   Label: LAB_0052999e
    MOV byte ptr [EAX + 0x50],0x0       ; 005299a5
    RET                                 ; 005299a9

