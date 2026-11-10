; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_setSpeaker_FUN_00530390(CScript *this_ptr,CDemonActor *actor)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[3]:
;   core_charactr.cpp_FUN_0042cd70 at 0042d103
;   core_script.cpp_CScript_resetDialogState_FUN_00530500 at 0053050a
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052bcea
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00530390
        ;   Label: core_script.cpp_CScript_setSpeaker_FUN_00530390
    MOV EDX,dword ptr [ESP + 0x8]       ; 00530394
    CMP EDX,dword ptr [EAX + 0x4]       ; 00530398
    JZ 0x0053039e                       ; 0053039b
        ;   XREF to: 0053039e (CONDITIONAL_JUMP)  ; LAB_0053039e
    RET                                 ; 0053039d
    MOV dword ptr [EAX + 0x4],0x0       ; 0053039e
        ;   Label: LAB_0053039e
    MOV byte ptr [EAX + 0x50],0x0       ; 005303a5
    RET                                 ; 005303a9

