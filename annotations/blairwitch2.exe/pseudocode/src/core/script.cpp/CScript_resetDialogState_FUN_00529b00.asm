; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_resetDialogState_FUN_00529b00(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_FUN_004b82e0 at 004b8d4a
;   core_script.cpp_CScript_skipCinematic_FUN_00529b30 at 00529b4d
;
; Called Functions:
;   core_script.cpp_CScript_setSpeaker_FUN_00529990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529b00
        ;   Label: core_script.cpp_CScript_resetDialogState_FUN_00529b00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00529b01
    MOV EDX,dword ptr [EBX + 0x4]       ; 00529b05
    PUSH EDX                            ; 00529b08
    PUSH EBX                            ; 00529b09
    CALL core_script.cpp_CScript_setSpeaker_FUN_00529990 ; 00529b0a
        ;   XREF to: 00529990 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_setSpeaker_FUN_00529990(CScript * this_ptr, CDemonActor * actor)
    MOV dword ptr [EBX + 0x48],0x0      ; 00529b0f
    ADD ESP,0x8                         ; 00529b16
    MOV dword ptr [EBX + 0x4c],0x0      ; 00529b19
    POP EBX                             ; 00529b20
    RET                                 ; 00529b21

