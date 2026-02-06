; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_frankgen_cpp_CFrankenstienMachine_showEditorHelp_FUN_004d2740 (CFrankenstienMachine *this_ptr,int *y_pos)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   y_pos
;
; Referenced Globals:
;   TerminatedCString s_Move_bat_along_course_0062ac0d
;   TerminatedCString s_anon_0062ac24
;
; Called Functions:
;   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
;   core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2740
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_showEditorHelp_FUN_004d2740
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d2741
    PUSH EBX                            ; 004d2745
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d2746
    PUSH EDX                            ; 004d274a
    CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150 ; 004d274b
        ;   XREF to: 0040d150 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor * this_ptr, int * y_pos)
    ADD ESP,0x8                         ; 004d2750
    PUSH 0x62ac0d                       ; 004d2753 | = "Move bat along course."
    MOV ECX,dword ptr [EBX]             ; 004d2758
    PUSH 0x62ac24                       ; 004d275a | = "</>"
    ADD ECX,0xb                         ; 004d275f
    PUSH EBX                            ; 004d2762
    MOV dword ptr [EBX],ECX             ; 004d2763
    CALL core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0 ; 004d2765
        ;   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0(int * y_position, char * left_text, char * right_text)
    ADD ESP,0xc                         ; 004d276a
    POP EBX                             ; 004d276d
    RET                                 ; 004d276e

