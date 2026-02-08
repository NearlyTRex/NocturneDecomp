; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_barrier_cpp_CBarrier_showEditorHelp_FUN_00414610(CBarrier *this_ptr,int *y_pos)
;
; Parameters:
; CBarrier *       Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   y_pos
;
; Referenced Globals:
;   TerminatedCString s_With_CTRL_held_down_use__006151cf
;   TerminatedCString s_effectClassNameList_is_u_006151ff
;   TerminatedCString s_If_this_is_empty_then_al_0061524e
;   TerminatedCString s_actors_of_the_type_s_lis_0061529c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
;   core_actor.cpp_drawTextLine_FUN_0040d240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414610
        ;   Label: core_barrier.cpp_CBarrier_showEditorHelp_FUN_00414610
    PUSH ESI                            ; 00414611
    MOV EBX,dword ptr [ESP + 0x10]      ; 00414612
    PUSH EBX                            ; 00414616
    MOV EDX,dword ptr [ESP + 0x10]      ; 00414617
    PUSH EDX                            ; 0041461b
    CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150 ; 0041461c
        ;   XREF to: 0040d150 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor * this_ptr, int * y_pos)
    ADD ESP,0x8                         ; 00414621
    MOV ECX,dword ptr [EBX]             ; 00414624
    PUSH 0x6151cf                       ; 00414626 | = "With CTRL held down, use slew keys to..."
    ADD ECX,0xb                         ; 0041462b
    PUSH EBX                            ; 0041462e
    MOV dword ptr [EBX],ECX             ; 0041462f
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 00414631
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 00414636
    MOV ESI,dword ptr [EBX]             ; 00414639
    PUSH 0x6151ff                       ; 0041463b | = "effectClassNameList is used to select..."
    ADD ESI,0xb                         ; 00414640
    PUSH EBX                            ; 00414643
    MOV dword ptr [EBX],ESI             ; 00414644
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 00414646
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 0041464b
    PUSH 0x61524e                       ; 0041464e | = "If this is empty, then all actors are..."
    PUSH EBX                            ; 00414653
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 00414654
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 00414659
    PUSH 0x61529c                       ; 0041465c | = "actors of the type(s) listed are bloc..."
    PUSH EBX                            ; 00414661
    CALL core_actor.cpp_drawTextLine_FUN_0040d240 ; 00414662
        ;   XREF to: 0040d240 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTextLine_FUN_0040d240(int * y_position, char * text)
    ADD ESP,0x8                         ; 00414667
    POP ESI                             ; 0041466a
    POP EBX                             ; 0041466b
    RET                                 ; 0041466c

