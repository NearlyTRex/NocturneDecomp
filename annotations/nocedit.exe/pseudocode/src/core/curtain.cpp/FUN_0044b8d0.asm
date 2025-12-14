; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_curtain.cpp_FUN_0044b8d0()
;
;
; Referenced Globals:
;   TerminatedCString s_With_CTRL_held_down_use__00619dea
;   TerminatedCString s_Left_Right_changes_width_00619e1a
;   TerminatedCString s_Up_Down_changes_height_y_00619e3e
;   TerminatedCString s_You_cannot_change_the_th_00619e60
;   int g_ClipLeft
;
; Called Functions:
;   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044b8d0
        ;   Label: core_curtain.cpp_FUN_0044b8d0
    PUSH EDI                            ; 0044b8d1
    PUSH EBP                            ; 0044b8d2
    MOV EBX,dword ptr [ESP + 0x14]      ; 0044b8d3
    PUSH EBX                            ; 0044b8d7
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044b8d8
    PUSH EDX                            ; 0044b8dc
    CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150 ; 0044b8dd
        ;   XREF to: 0040d150 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor * this_ptr, int * y_pos)
    MOV ECX,dword ptr [EBX]             ; 0044b8e2
    ADD ESP,0x8                         ; 0044b8e4
    ADD ECX,0xb                         ; 0044b8e7
    PUSH ECX                            ; 0044b8ea
    MOV EDI,dword ptr [0x02d02558]      ; 0044b8eb | g_ClipLeft
    PUSH EDI                            ; 0044b8f1
    PUSH 0x619dea                       ; 0044b8f2 | = "With CTRL held down, use slew keys to..."
    MOV dword ptr [EBX],ECX             ; 0044b8f7
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0044b8f9
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EBP,dword ptr [EBX]             ; 0044b8fe
    ADD ESP,0xc                         ; 0044b900
    ADD EBP,0xb                         ; 0044b903
    PUSH EBP                            ; 0044b906
    MOV EDX,dword ptr [0x02d02558]      ; 0044b907 | g_ClipLeft
    PUSH EDX                            ; 0044b90d
    PUSH 0x619e1a                       ; 0044b90e | = "  Left/Right changes width (x-size)"
    MOV dword ptr [EBX],EBP             ; 0044b913
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0044b915
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV ECX,dword ptr [EBX]             ; 0044b91a
    ADD ESP,0xc                         ; 0044b91c
    ADD ECX,0xb                         ; 0044b91f
    PUSH ECX                            ; 0044b922
    MOV EDI,dword ptr [0x02d02558]      ; 0044b923 | g_ClipLeft
    PUSH EDI                            ; 0044b929
    PUSH 0x619e3e                       ; 0044b92a | = "  Up/Down changes height (y-size)"
    MOV dword ptr [EBX],ECX             ; 0044b92f
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0044b931
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV EBP,dword ptr [EBX]             ; 0044b936
    ADD ESP,0xc                         ; 0044b938
    ADD EBP,0xb                         ; 0044b93b
    PUSH EBP                            ; 0044b93e
    MOV EDX,dword ptr [0x02d02558]      ; 0044b93f | g_ClipLeft
    PUSH EDX                            ; 0044b945
    PUSH 0x619e60                       ; 0044b946 | = "  You cannot change the thickness (z-..."
    MOV dword ptr [EBX],EBP             ; 0044b94b
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0044b94d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    MOV ECX,dword ptr [EBX]             ; 0044b952
    ADD ECX,0xb                         ; 0044b954
    ADD ESP,0xc                         ; 0044b957
    MOV dword ptr [EBX],ECX             ; 0044b95a
    POP EBP                             ; 0044b95c
    POP EDI                             ; 0044b95d
    POP EBX                             ; 0044b95e
    RET                                 ; 0044b95f

