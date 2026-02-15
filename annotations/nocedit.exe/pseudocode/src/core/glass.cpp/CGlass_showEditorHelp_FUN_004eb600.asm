; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_CGlass_showEditorHelp_FUN_004eb600(CGlass *this_ptr,int *y_pos)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   y_pos
;
; Referenced Globals:
;   TerminatedCString s_With_CTRL_held_down_use__0062e1a9
;   TerminatedCString s_Left_Right_changes_width_0062e1db
;   TerminatedCString s_Up_Down_changes_height_y_0062e1ff
;   TerminatedCString s_You_cannot_change_the_th_0062e221
;   int g_ClipLeft
;
; Called Functions:
;   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb600
        ;   Label: core_glass.cpp_CGlass_showEditorHelp_FUN_004eb600
    PUSH EDI                            ; 004eb601
    PUSH EBP                            ; 004eb602
    MOV EBX,dword ptr [ESP + 0x14]      ; 004eb603
    PUSH EBX                            ; 004eb607
    MOV EDX,dword ptr [ESP + 0x14]      ; 004eb608
    PUSH EDX                            ; 004eb60c
    CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150 ; 004eb60d
        ;   XREF to: 0040d150 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor * this_ptr, int * y_pos)
    MOV ECX,dword ptr [EBX]             ; 004eb612
    ADD ESP,0x8                         ; 004eb614
    ADD ECX,0xb                         ; 004eb617
    PUSH ECX                            ; 004eb61a
    MOV EDI,dword ptr [0x02d02558]      ; 004eb61b | g_ClipLeft
    PUSH EDI                            ; 004eb621
    PUSH 0x62e1a9                       ; 004eb622 | = "With CTRL held down, use slew keys to..."
    MOV dword ptr [EBX],ECX             ; 004eb627
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004eb629
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EBP,dword ptr [EBX]             ; 004eb62e
    ADD ESP,0xc                         ; 004eb630
    ADD EBP,0xb                         ; 004eb633
    PUSH EBP                            ; 004eb636
    MOV EDX,dword ptr [0x02d02558]      ; 004eb637 | g_ClipLeft
    PUSH EDX                            ; 004eb63d
    PUSH 0x62e1db                       ; 004eb63e | = "  Left/Right changes width (x-size)"
    MOV dword ptr [EBX],EBP             ; 004eb643
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004eb645
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV ECX,dword ptr [EBX]             ; 004eb64a
    ADD ESP,0xc                         ; 004eb64c
    ADD ECX,0xb                         ; 004eb64f
    PUSH ECX                            ; 004eb652
    MOV EDI,dword ptr [0x02d02558]      ; 004eb653 | g_ClipLeft
    PUSH EDI                            ; 004eb659
    PUSH 0x62e1ff                       ; 004eb65a | = "  Up/Down changes height (y-size)"
    MOV dword ptr [EBX],ECX             ; 004eb65f
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004eb661
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EBP,dword ptr [EBX]             ; 004eb666
    ADD ESP,0xc                         ; 004eb668
    ADD EBP,0xb                         ; 004eb66b
    PUSH EBP                            ; 004eb66e
    MOV EDX,dword ptr [0x02d02558]      ; 004eb66f | g_ClipLeft
    PUSH EDX                            ; 004eb675
    PUSH 0x62e221                       ; 004eb676 | = "  You cannot change the thickness (z-..."
    MOV dword ptr [EBX],EBP             ; 004eb67b
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004eb67d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV ECX,dword ptr [EBX]             ; 004eb682
    ADD ECX,0xb                         ; 004eb684
    ADD ESP,0xc                         ; 004eb687
    MOV dword ptr [EBX],ECX             ; 004eb68a
    POP EBP                             ; 004eb68c
    POP EDI                             ; 004eb68d
    POP EBX                             ; 004eb68e
    RET                                 ; 004eb68f

