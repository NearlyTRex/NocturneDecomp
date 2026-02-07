; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_platfrm_cpp_CPlatform_showEditorHelp_FUN_0054f060(CPlatform *this_ptr,int *y_pos)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   y_pos
;
; Referenced Globals:
;   TerminatedCString s_Move_platform_forward_ba_0063fc7e
;   TerminatedCString s_anon_0063fca4
;   TerminatedCString s_You_are_using_a_manual_c_0063fca8
;   TerminatedCString s_For_a_manual_course_you__0063fcd9
;   TerminatedCString s_and_the_game_will_do_its_0063fd16
;   TerminatedCString s_Manual_courses_can_only__0063fd5d
;   TerminatedCString s_translation_or_rotation__0063fda4
;   TerminatedCString s_In_the_editor_a_green_bo_0063fdf9
;   TerminatedCString s_the_ending_position_0063fe50
;   TerminatedCString s_To_move_the_start_or_end_0063fe65
;   TerminatedCString s_to_slew_either_by_pressi_0063fead
;   TerminatedCString s_Slam_the_start_and_end_p_0063fefc
;   TerminatedCString s_CTRL_HOME_0063ff44
;   TerminatedCString s_After_creating_a_platfor_0063ff4e
;   TerminatedCString s_is_to_switch_the_slew_mo_0063ff8e
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f060
        ;   Label: core_platfrm.cpp_CPlatform_showEditorHelp_FUN_0054f060
    PUSH ESI                            ; 0054f061
    PUSH EDI                            ; 0054f062
    PUSH EBP                            ; 0054f063
    MOV EBX,dword ptr [ESP + 0x18]      ; 0054f064
    PUSH 0x63fc7e                       ; 0054f068 | = "Move platform forward/back on course."
    PUSH 0x63fca4                       ; 0054f06d | = "</>"
    PUSH EBX                            ; 0054f072
    CALL core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0 ; 0054f073
        ;   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0(int * y_position, char * left_text, char * right_text)
    MOV EDX,dword ptr [EBX]             ; 0054f078
    ADD ESP,0xc                         ; 0054f07a
    ADD EDX,0xb                         ; 0054f07d
    MOV EAX,dword ptr [ESP + 0x14]      ; 0054f080
    MOV dword ptr [EBX],EDX             ; 0054f084
    CMP byte ptr [EAX + 0x2f0],0x0      ; 0054f086
    JNZ 0x0054f237                      ; 0054f08d
        ;   XREF to: 0054f237 (CONDITIONAL_JUMP)  ; LAB_0054f237
    MOV EBP,dword ptr [EBX]             ; 0054f093
    PUSH EBP                            ; 0054f095
    MOV EAX,[0x02d02558]                ; 0054f096 | g_ClipLeft
    PUSH EAX                            ; 0054f09b
    PUSH 0x63fca8                       ; 0054f09c | = "You are using a manual course for thi..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054f0a1
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EDX,dword ptr [EBX]             ; 0054f0a6
    ADD ESP,0xc                         ; 0054f0a8
    ADD EDX,0x16                        ; 0054f0ab
    PUSH EDX                            ; 0054f0ae
    MOV ESI,dword ptr [0x02d02558]      ; 0054f0af | g_ClipLeft
    PUSH ESI                            ; 0054f0b5
    PUSH 0x63fcd9                       ; 0054f0b6 | = "For a manual course, you specify the ..."
    MOV dword ptr [EBX],EDX             ; 0054f0bb
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054f0bd
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EDI,dword ptr [EBX]             ; 0054f0c2
    ADD ESP,0xc                         ; 0054f0c4
    ADD EDI,0xb                         ; 0054f0c7
    PUSH EDI                            ; 0054f0ca
    MOV EAX,[0x02d02558]                ; 0054f0cb | g_ClipLeft
    PUSH EAX                            ; 0054f0d0
    PUSH 0x63fd16                       ; 0054f0d1 | = "and the game will do its best to inte..."
    MOV dword ptr [EBX],EDI             ; 0054f0d6
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054f0d8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EDX,dword ptr [EBX]             ; 0054f0dd
    ADD ESP,0xc                         ; 0054f0df
    ADD EDX,0xb                         ; 0054f0e2
    PUSH EDX                            ; 0054f0e5
    MOV ESI,dword ptr [0x02d02558]      ; 0054f0e6 | g_ClipLeft
    PUSH ESI                            ; 0054f0ec
    PUSH 0x63fd5d                       ; 0054f0ed | = "Manual courses can only be used in ve..."
    MOV dword ptr [EBX],EDX             ; 0054f0f2
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054f0f4
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EDI,dword ptr [EBX]             ; 0054f0f9
    ADD ESP,0xc                         ; 0054f0fb
    ADD EDI,0xb                         ; 0054f0fe
    PUSH EDI                            ; 0054f101
    MOV EAX,[0x02d02558]                ; 0054f102 | g_ClipLeft
    PUSH EAX                            ; 0054f107
    PUSH 0x63fda4                       ; 0054f108 | = "translation or rotation.  For finer c..."
    MOV dword ptr [EBX],EDI             ; 0054f10d
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054f10f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EDX,dword ptr [EBX]             ; 0054f114
    ADD ESP,0xc                         ; 0054f116
    ADD EDX,0x16                        ; 0054f119
    PUSH EDX                            ; 0054f11c
    MOV ESI,dword ptr [0x02d02558]      ; 0054f11d | g_ClipLeft
    PUSH ESI                            ; 0054f123
    PUSH 0x63fdf9                       ; 0054f124 | = "In the editor, a green box graphicall..."
    MOV dword ptr [EBX],EDX             ; 0054f129
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054f12b
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EDI,dword ptr [EBX]             ; 0054f130
    ADD ESP,0xc                         ; 0054f132
    ADD EDI,0xb                         ; 0054f135
    PUSH EDI                            ; 0054f138
    MOV EAX,[0x02d02558]                ; 0054f139 | g_ClipLeft
    PUSH EAX                            ; 0054f13e
    PUSH 0x63fe50                       ; 0054f13f | = "the ending position."
    MOV dword ptr [EBX],EDI             ; 0054f144
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054f146
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EDX,dword ptr [EBX]             ; 0054f14b
    ADD ESP,0xc                         ; 0054f14d
    ADD EDX,0x16                        ; 0054f150
    PUSH EDX                            ; 0054f153
    MOV ESI,dword ptr [0x02d02558]      ; 0054f154 | g_ClipLeft
    PUSH ESI                            ; 0054f15a
    PUSH 0x63fe65                       ; 0054f15b | = "To move the start or end positions, y..."
    MOV dword ptr [EBX],EDX             ; 0054f160
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054f162
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EDI,dword ptr [EBX]             ; 0054f167
    ADD ESP,0xc                         ; 0054f169
    ADD EDI,0xb                         ; 0054f16c
    PUSH EDI                            ; 0054f16f
    MOV EAX,[0x02d02558]                ; 0054f170 | g_ClipLeft
    PUSH EAX                            ; 0054f175
    PUSH 0x63fead                       ; 0054f176 | = "to slew, either by pressing Y, or cli..."
    MOV dword ptr [EBX],EDI             ; 0054f17b
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054f17d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0054f182
    PUSH 0x63fefc                       ; 0054f185 | = "Slam the start and end position to th..."
    MOV EDX,dword ptr [EBX]             ; 0054f18a
    PUSH 0x63ff44                       ; 0054f18c | = "CTRL+HOME"
    ADD EDX,0x16                        ; 0054f191
    PUSH EBX                            ; 0054f194
    MOV dword ptr [EBX],EDX             ; 0054f195
    CALL core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0 ; 0054f197
        ;   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0(int * y_position, char * left_text, char * right_text)
    MOV ECX,dword ptr [EBX]             ; 0054f19c
    ADD ESP,0xc                         ; 0054f19e
    ADD ECX,0xb                         ; 0054f1a1
    PUSH ECX                            ; 0054f1a4
    MOV EDI,dword ptr [0x02d02558]      ; 0054f1a5 | g_ClipLeft
    PUSH EDI                            ; 0054f1ab
    PUSH 0x63ff4e                       ; 0054f1ac | = "After creating a platform, the easies..."
    MOV dword ptr [EBX],ECX             ; 0054f1b1
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054f1b3
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0054f1b8
    MOV EBP,dword ptr [EBX]             ; 0054f1bb
    ADD EBP,0xb                         ; 0054f1bd
    PUSH EBP                            ; 0054f1c0
    MOV EDX,dword ptr [0x02d02558]      ; 0054f1c1 | g_ClipLeft
    PUSH EDX                            ; 0054f1c7
    PUSH 0x63ff8e                       ; 0054f1c8 | = "is to switch the slew mode to \"Start..."
    MOV dword ptr [EBX],EBP             ; 0054f1cd
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054f1cf
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV ECX,dword ptr [EBX]             ; 0054f1d4
    ADD ESP,0xc                         ; 0054f1d6
    ADD ECX,0xb                         ; 0054f1d9
    PUSH ECX                            ; 0054f1dc
    MOV EDI,dword ptr [0x02d02558]      ; 0054f1dd | g_ClipLeft
    PUSH EDI                            ; 0054f1e3
    PUSH 0x63ffd6                       ; 0054f1e4 | = "it to start out (not worrying about t..."
    MOV dword ptr [EBX],ECX             ; 0054f1e9
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054f1eb
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EBP,dword ptr [EBX]             ; 0054f1f0
    ADD ESP,0xc                         ; 0054f1f2
    ADD EBP,0xb                         ; 0054f1f5
    PUSH EBP                            ; 0054f1f8
    MOV EDX,dword ptr [0x02d02558]      ; 0054f1f9 | g_ClipLeft
    PUSH EDX                            ; 0054f1ff
    PUSH 0x64001c                       ; 0054f200 | = "press CTRL+HOME to snap the end posit..."
    MOV dword ptr [EBX],EBP             ; 0054f205
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054f207
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV ECX,dword ptr [EBX]             ; 0054f20c
    ADD ESP,0xc                         ; 0054f20e
    ADD ECX,0xb                         ; 0054f211
    PUSH ECX                            ; 0054f214
    MOV EDI,dword ptr [0x02d02558]      ; 0054f215 | g_ClipLeft
    PUSH EDI                            ; 0054f21b
    PUSH 0x64005e                       ; 0054f21c | = "Finally, switch the slew mode to \"En..."
    MOV dword ptr [EBX],ECX             ; 0054f221
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054f223
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EBP,dword ptr [EBX]             ; 0054f228
    ADD EBP,0xb                         ; 0054f22a
    ADD ESP,0xc                         ; 0054f22d
    MOV dword ptr [EBX],EBP             ; 0054f230
    POP EBP                             ; 0054f232
    POP EDI                             ; 0054f233
    POP ESI                             ; 0054f234
    POP EBX                             ; 0054f235
    RET                                 ; 0054f236
    MOV ECX,dword ptr [EBX]             ; 0054f237
        ;   Label: LAB_0054f237
    PUSH ECX                            ; 0054f239
    MOV ESI,dword ptr [0x02d02558]      ; 0054f23a | g_ClipLeft
    PUSH ESI                            ; 0054f240
    PUSH 0x6400ac                       ; 0054f241 | = "You are using an explicit .PTH course..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054f246
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EDI,dword ptr [EBX]             ; 0054f24b
    ADD ESP,0xc                         ; 0054f24d
    ADD EDI,0x16                        ; 0054f250
    PUSH EDI                            ; 0054f253
    MOV EAX,[0x02d02558]                ; 0054f254 | g_ClipLeft
    PUSH EAX                            ; 0054f259
    PUSH 0x6400ea                       ; 0054f25a | = "Since you are using a .PTH file, you ..."
    MOV dword ptr [EBX],EDI             ; 0054f25f
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054f261
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EDX,dword ptr [EBX]             ; 0054f266
    ADD ESP,0xc                         ; 0054f268
    ADD EDX,0xb                         ; 0054f26b
    PUSH EDX                            ; 0054f26e
    MOV ESI,dword ptr [0x02d02558]      ; 0054f26f | g_ClipLeft
    PUSH ESI                            ; 0054f275
    PUSH 0x640137                       ; 0054f276 | = "is hardwired into the course."
    MOV dword ptr [EBX],EDX             ; 0054f27b
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0054f27d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EDI,dword ptr [EBX]             ; 0054f282
    ADD EDI,0xb                         ; 0054f284
    ADD ESP,0xc                         ; 0054f287
    MOV dword ptr [EBX],EDI             ; 0054f28a
    POP EBP                             ; 0054f28c
    POP EDI                             ; 0054f28d
    POP ESI                             ; 0054f28e
    POP EBX                             ; 0054f28f
    RET                                 ; 0054f290

