; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_teleport.cpp_CTeleportDest_FUN_005da970(CTeleportDest * this_ptr)
;
; Parameters:
; CTeleportDest *  Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Show_list_of_teleporters_00654c87
;   TerminatedCString s_T_00654cc0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
;   core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005da970
        ;   Label: core_teleport.cpp_CTeleportDest_FUN_005da970
    MOV EBX,dword ptr [ESP + 0xc]       ; 005da971
    PUSH EBX                            ; 005da975
    MOV EDX,dword ptr [ESP + 0xc]       ; 005da976
    PUSH EDX                            ; 005da97a
    CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150 ; 005da97b | void core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor * this_ptr, int * y_pos)
        ;   XREF to: 0040d150 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005da980
    PUSH 0x654c87                       ; 005da983 | = "Show list of teleporters which go to ..." | s_Show_list_of_teleporters_00654c87 = Show list of teleporters which go to this teleport dest.
    MOV ECX,dword ptr [EBX]             ; 005da988
    PUSH 0x654cc0                       ; 005da98a | = "T" | s_T_00654cc0 = T
    ADD ECX,0xb                         ; 005da98f
    PUSH EBX                            ; 005da992
    MOV dword ptr [EBX],ECX             ; 005da993
    CALL core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0 ; 005da995 | void core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0(int * y_position, char * left_text, char * right_text)
        ;   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005da99a
    POP EBX                             ; 005da99d
    RET                                 ; 005da99e

