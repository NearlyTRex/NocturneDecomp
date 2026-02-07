; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_teleport_cpp_CTeleport_FUN_005dadc0(CTeleport *this_ptr)
;
; Parameters:
; CTeleport *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_With_CTRL_held_down_use__00654d43
;   TerminatedCString s_Select_my_CTeleportDest__00654d73
;   TerminatedCString s_T_00654d92
;   int g_ClipLeft
;
; Called Functions:
;   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
;   core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dadc0
        ;   Label: core_teleport.cpp_CTeleport_FUN_005dadc0
    PUSH EDI                            ; 005dadc1
    PUSH EBP                            ; 005dadc2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005dadc3
    PUSH EBX                            ; 005dadc7
    MOV EDX,dword ptr [ESP + 0x14]      ; 005dadc8
    PUSH EDX                            ; 005dadcc
    CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150 ; 005dadcd
        ;   XREF to: 0040d150 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor * this_ptr, int * y_pos)
    MOV ECX,dword ptr [EBX]             ; 005dadd2
    ADD ESP,0x8                         ; 005dadd4
    ADD ECX,0xb                         ; 005dadd7
    PUSH ECX                            ; 005dadda
    MOV EDI,dword ptr [0x02d02558]      ; 005daddb | g_ClipLeft
    PUSH EDI                            ; 005dade1
    PUSH 0x654d43                       ; 005dade2 | = "With CTRL held down, use slew keys to..."
    MOV dword ptr [EBX],ECX             ; 005dade7
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005dade9
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005dadee
    PUSH 0x654d73                       ; 005dadf1 | = "Select my CTeleportDest actor."
    MOV EBP,dword ptr [EBX]             ; 005dadf6
    PUSH 0x654d92                       ; 005dadf8 | = "T"
    ADD EBP,0x16                        ; 005dadfd
    PUSH EBX                            ; 005dae00
    MOV dword ptr [EBX],EBP             ; 005dae01
    CALL core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0 ; 005dae03
        ;   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0(int * y_position, char * left_text, char * right_text)
    ADD ESP,0xc                         ; 005dae08
    POP EBP                             ; 005dae0b
    POP EDI                             ; 005dae0c
    POP EBX                             ; 005dae0d
    RET                                 ; 005dae0e

