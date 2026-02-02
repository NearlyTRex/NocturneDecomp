; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_CScript_FUN_005602b0(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_SaveRelated_FUN_004dcee0 at 004dd6ee
;   core_script.cpp_CScript_FUN_005602e0 at 005602fd
;
; Called Functions:
;   core_script.cpp_CScript_setSpeaker_FUN_00560140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005602b0
        ;   Label: core_script.cpp_CScript_FUN_005602b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005602b1
    MOV EDX,dword ptr [EBX + 0x4]       ; 005602b5
    PUSH EDX                            ; 005602b8
    PUSH EBX                            ; 005602b9
    CALL core_script.cpp_CScript_setSpeaker_FUN_00560140 ; 005602ba
        ;   XREF to: 00560140 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_setSpeaker_FUN_00560140(CScript * this_ptr, CDemonActor * actor)
    MOV dword ptr [EBX + 0x4c],0x0      ; 005602bf
    ADD ESP,0x8                         ; 005602c6
    MOV dword ptr [EBX + 0x50],0x0      ; 005602c9
    POP EBX                             ; 005602d0
    RET                                 ; 005602d1

