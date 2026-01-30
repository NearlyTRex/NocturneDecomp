; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_stairs_cpp_FUN_005bab90(void)
;
;
; Referenced Globals:
;   TerminatedCString s_With_CTRL_held_down_006530e2
;   TerminatedCString s_Left_right_adjusts_width_006530f7
;   TerminatedCString s_Q_A_adjusts_rise_00653112
;   TerminatedCString s_Up_Down_adjusts_run_00653125
;
; Called Functions:
;   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
;   core_actor.cpp_drawTextLine_FUN_0040d240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bab90
        ;   Label: core_stairs.cpp_FUN_005bab90
    MOV EBX,dword ptr [ESP + 0xc]       ; 005bab91
    PUSH EBX                            ; 005bab95
    MOV EDX,dword ptr [ESP + 0xc]       ; 005bab96
    PUSH EDX                            ; 005bab9a
    CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150 ; 005bab9b
        ;   XREF to: 0040d150 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor * this_ptr, int * y_pos)
    ADD ESP,0x8                         ; 005baba0
    MOV ECX,dword ptr [EBX]             ; 005baba3
    PUSH 0x6530e2                       ; 005baba5 | = "With CTRL held down:"
    ADD ECX,0xb                         ; 005babaa
    PUSH EBX                            ; 005babad
    MOV dword ptr [EBX],ECX             ; 005babae
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005babb0
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005babb5
    PUSH 0x6530f7                       ; 005babb8 | = "  Left/right adjusts width"
    PUSH EBX                            ; 005babbd
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005babbe
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005babc3
    PUSH 0x653112                       ; 005babc6 | = "  Q/A adjusts rise"
    PUSH EBX                            ; 005babcb
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005babcc
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005babd1
    PUSH 0x653125                       ; 005babd4 | = "  Up/Down adjusts run"
    PUSH EBX                            ; 005babd9
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 005babda
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 005babdf
    POP EBX                             ; 005babe2
    RET                                 ; 005babe3

