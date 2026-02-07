; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_ladder_cpp_CLadder_showEditorHelp_FUN_00502e50(CLadder *this_ptr,int *y_pos)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   y_pos
;
; Referenced Globals:
;   TerminatedCString s_With_CTRL_held_down_use__00630e90
;   int g_ClipLeft
;
; Called Functions:
;   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502e50
        ;   Label: core_ladder.cpp_CLadder_showEditorHelp_FUN_00502e50
    PUSH EDI                            ; 00502e51
    PUSH EBP                            ; 00502e52
    MOV EBX,dword ptr [ESP + 0x14]      ; 00502e53
    PUSH EBX                            ; 00502e57
    MOV EDX,dword ptr [ESP + 0x14]      ; 00502e58
    PUSH EDX                            ; 00502e5c
    CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150 ; 00502e5d
        ;   XREF to: 0040d150 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor * this_ptr, int * y_pos)
    MOV ECX,dword ptr [EBX]             ; 00502e62
    ADD ESP,0x8                         ; 00502e64
    ADD ECX,0xb                         ; 00502e67
    PUSH ECX                            ; 00502e6a
    MOV EDI,dword ptr [0x02d02558]      ; 00502e6b | g_ClipLeft
    PUSH EDI                            ; 00502e71
    PUSH 0x630e90                       ; 00502e72 | = "With CTRL held down, use slew keys to..."
    MOV dword ptr [EBX],ECX             ; 00502e77
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00502e79
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EBP,dword ptr [EBX]             ; 00502e7e
    ADD EBP,0xb                         ; 00502e80
    ADD ESP,0xc                         ; 00502e83
    MOV dword ptr [EBX],EBP             ; 00502e86
    POP EBP                             ; 00502e88
    POP EDI                             ; 00502e89
    POP EBX                             ; 00502e8a
    RET                                 ; 00502e8b

