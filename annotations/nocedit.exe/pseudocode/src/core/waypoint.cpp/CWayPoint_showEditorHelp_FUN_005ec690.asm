; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_waypoint_cpp_CWayPoint_showEditorHelp_FUN_005ec690(CWayPoint *this_ptr,int *y_pos)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   y_pos
;
; Referenced Globals:
;   TerminatedCString s_Prev_next_waypoint_on_tr_0065759d
;   TerminatedCString s_anon_006575ba
;   TerminatedCString s_Add_WayPoint_BEFORE_this_006575be
;   TerminatedCString s_CTRL_B_006575e1
;   TerminatedCString s_Add_WayPoint_AFTER_this__006575e8
;   TerminatedCString s_CTRL_A_0065760a
;   TerminatedCString s_Insert_WayPoint_into_tra_00657611
;   TerminatedCString s_CTRL_I_0065762d
;
; Called Functions:
;   core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
;   core_trigger.cpp_CTrigger_showEditorHelp_FUN_005e1350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ec690
        ;   Label: core_waypoint.cpp_CWayPoint_showEditorHelp_FUN_005ec690
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ec691
    PUSH EBX                            ; 005ec695
    MOV EDX,dword ptr [ESP + 0xc]       ; 005ec696
    PUSH EDX                            ; 005ec69a
    CALL core_trigger.cpp_CTrigger_showEditorHelp_FUN_005e1350 ; 005ec69b
        ;   XREF to: 005e1350 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_showEditorHelp_FUN_005e1350(CTrigger * this_ptr, int * y_pos)
    ADD ESP,0x8                         ; 005ec6a0
    PUSH 0x65759d                       ; 005ec6a3 | = "Prev/next waypoint on trail."
    MOV ECX,dword ptr [EBX]             ; 005ec6a8
    PUSH 0x6575ba                       ; 005ec6aa | = "</>"
    ADD ECX,0xb                         ; 005ec6af
    PUSH EBX                            ; 005ec6b2
    MOV dword ptr [EBX],ECX             ; 005ec6b3
    CALL core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0 ; 005ec6b5
        ;   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0(int * y_position, char * left_text, char * right_text)
    ADD ESP,0xc                         ; 005ec6ba
    PUSH 0x6575be                       ; 005ec6bd | = "Add WayPoint BEFORE this waypoint."
    PUSH 0x6575e1                       ; 005ec6c2 | = "CTRL+B"
    PUSH EBX                            ; 005ec6c7
    CALL core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0 ; 005ec6c8
        ;   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0(int * y_position, char * left_text, char * right_text)
    ADD ESP,0xc                         ; 005ec6cd
    PUSH 0x6575e8                       ; 005ec6d0 | = "Add WayPoint AFTER this waypoint."
    PUSH 0x65760a                       ; 005ec6d5 | = "CTRL+A"
    PUSH EBX                            ; 005ec6da
    CALL core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0 ; 005ec6db
        ;   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0(int * y_position, char * left_text, char * right_text)
    ADD ESP,0xc                         ; 005ec6e0
    PUSH 0x657611                       ; 005ec6e3 | = "Insert WayPoint into trail."
    PUSH 0x65762d                       ; 005ec6e8 | = "CTRL+I"
    PUSH EBX                            ; 005ec6ed
    CALL core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0 ; 005ec6ee
        ;   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0(int * y_position, char * left_text, char * right_text)
    ADD ESP,0xc                         ; 005ec6f3
    POP EBX                             ; 005ec6f6
    RET                                 ; 005ec6f7

