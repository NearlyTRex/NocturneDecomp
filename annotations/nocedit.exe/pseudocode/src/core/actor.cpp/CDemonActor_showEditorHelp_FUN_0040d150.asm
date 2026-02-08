; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor *this_ptr,int *y_pos)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   y_pos
;
; XREF[17]:
;   core_barrier.cpp_CBarrier_showEditorHelp_FUN_00414610 at 0041461c
;   core_bat.cpp_CBat_showEditorHelp_FUN_00414fb0 at 00414fbb
;   core_curtain.cpp_CCurtain_showEditorHelp_FUN_0044b8d0 at 0044b8dd
;   core_emitter.cpp_CEmitter_showEditorHelp_FUN_004a9350 at 004a935d
;   core_flame.cpp_CFlame_showEditorHelp_FUN_004cb0a0 at 004cb0ad
;   core_flies.cpp_CFlies_showEditorHelp_FUN_004ccc70 at 004ccc7d
;   core_frankgen.cpp_CFrankenstienMachine_showEditorHelp_FUN_004d2740 at 004d274b
;   core_glass.cpp_CGlass_showEditorHelp_FUN_004eb600 at 004eb60d
;   core_grave.cpp_CGrave_showEditorHelp_FUN_004eead0 at 004eeadd
;   core_ladder.cpp_CLadder_showEditorHelp_FUN_00502e50 at 00502e5d
;   ... and 7 more
;
; Referenced Globals:
;   TerminatedCString s_Use_standard_slew_keys_t_00614340
;   TerminatedCString s_Arrow_keys_move_around_00614360
;   TerminatedCString s_Q_A_move_up_down_00614379
;   TerminatedCString s_End_PgDn_rotate_hozontal_0061438c
;   TerminatedCString s_F5_F8_Pitch_006143b3
;   TerminatedCString s_Home_PgUp_bank_006143c1
;   TerminatedCString s_Use_right_mouse_button_t_006143d2
;   TerminatedCString s_Position_to_ground_00614406
;   TerminatedCString s_G_0061441a
;
; Called Functions:
;   core_actor.cpp_drawTextLine_FUN_0040d240
;   core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d150
        ;   Label: core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040d151
    PUSH 0x614340                       ; 0040d155 | = "Use standard slew keys to move:"
    PUSH EBX                            ; 0040d15a
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 0040d15b
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 0040d160
    PUSH 0x614360                       ; 0040d163 | = "  Arrow keys move around"
    PUSH EBX                            ; 0040d168
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 0040d169
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 0040d16e
    PUSH 0x614379                       ; 0040d171 | = "  Q/A move up/down"
    PUSH EBX                            ; 0040d176
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 0040d177
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 0040d17c
    PUSH 0x61438c                       ; 0040d17f | = "  End/PgDn rotate hozontally (heading)"
    PUSH EBX                            ; 0040d184
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 0040d185
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 0040d18a
    PUSH 0x6143b3                       ; 0040d18d | = "  F5/F8 Pitch"
    PUSH EBX                            ; 0040d192
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 0040d193
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 0040d198
    PUSH 0x6143c1                       ; 0040d19b | = "  Home/PgUp bank"
    PUSH EBX                            ; 0040d1a0
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 0040d1a1
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 0040d1a6
    MOV EDX,dword ptr [EBX]             ; 0040d1a9
    PUSH 0x6143d2                       ; 0040d1ab | = "Use right mouse button to move to the..."
    ADD EDX,0xb                         ; 0040d1b0
    PUSH EBX                            ; 0040d1b3
    MOV dword ptr [EBX],EDX             ; 0040d1b4
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 0040d1b6
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 0040d1bb
    PUSH 0x614406                       ; 0040d1be | = "Position to ground."
    MOV ECX,dword ptr [EBX]             ; 0040d1c3
    PUSH 0x61441a                       ; 0040d1c5 | = "G"
    ADD ECX,0xb                         ; 0040d1ca
    PUSH EBX                            ; 0040d1cd
    MOV dword ptr [EBX],ECX             ; 0040d1ce
    CALL core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0 ; 0040d1d0
        ;   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0(int * y_position, char * left_text, char * right_text)
    ADD ESP,0xc                         ; 0040d1d5
    POP EBX                             ; 0040d1d8
    RET                                 ; 0040d1d9

