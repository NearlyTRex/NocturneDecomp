; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_flies.cpp_FUN_004ccc70()
;
;
; Referenced Globals:
;   TerminatedCString s_With_CTRL_held_down_use__0062a486
;   int g_ClipLeft
;
; Called Functions:
;   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ccc70
        ;   Label: core_flies.cpp_FUN_004ccc70
    PUSH EDI                            ; 004ccc71
    PUSH EBP                            ; 004ccc72
    MOV EBX,dword ptr [ESP + 0x14]      ; 004ccc73
    PUSH EBX                            ; 004ccc77
    MOV EDX,dword ptr [ESP + 0x14]      ; 004ccc78
    PUSH EDX                            ; 004ccc7c
    CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150 ; 004ccc7d | void core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor * this_ptr, int * y_pos)
        ;   XREF to: 0040d150 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EBX]             ; 004ccc82
    ADD ESP,0x8                         ; 004ccc84
    ADD ECX,0xb                         ; 004ccc87
    PUSH ECX                            ; 004ccc8a
    MOV EDI,dword ptr [0x02d02558]      ; 004ccc8b | int g_ClipLeft
    PUSH EDI                            ; 004ccc91
    PUSH 0x62a486                       ; 004ccc92 | = "With CTRL held down, use slew keys to..." | s_With_CTRL_held_down_use__0062a486 = With CTRL held down, use slew keys to size box.
    MOV dword ptr [EBX],ECX             ; 004ccc97
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004ccc99 | void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
    MOV EBP,dword ptr [EBX]             ; 004ccc9e
    ADD EBP,0xb                         ; 004ccca0
    ADD ESP,0xc                         ; 004ccca3
    MOV dword ptr [EBX],EBP             ; 004ccca6
    POP EBP                             ; 004ccca8
    POP EDI                             ; 004ccca9
    POP EBX                             ; 004cccaa
    RET                                 ; 004cccab

