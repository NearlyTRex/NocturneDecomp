; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_bat.cpp_CBat_FUN_00414fb0(CBat * this_ptr)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Move_bat_along_course_0061542e
;   TerminatedCString s_anon_00615445
;
; Called Functions:
;   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
;   core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414fb0
        ;   Label: core_bat.cpp_CBat_FUN_00414fb0
    MOV EBX,dword ptr [ESP + 0xc]       ; 00414fb1
    PUSH EBX                            ; 00414fb5
    MOV EDX,dword ptr [ESP + 0xc]       ; 00414fb6
    PUSH EDX                            ; 00414fba
    CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150 ; 00414fbb
        ;   XREF to: 0040d150 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor * this_ptr, int * y_pos)
    ADD ESP,0x8                         ; 00414fc0
    PUSH 0x61542e                       ; 00414fc3 | = "Move bat along course."
    MOV ECX,dword ptr [EBX]             ; 00414fc8
    PUSH 0x615445                       ; 00414fca | = "</>"
    ADD ECX,0xb                         ; 00414fcf
    PUSH EBX                            ; 00414fd2
    MOV dword ptr [EBX],ECX             ; 00414fd3
    CALL core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0 ; 00414fd5
        ;   XREF to: 0040d1e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_drawTwoColumnPropertyLine_FUN_0040d1e0(int * y_position, char * left_text, char * right_text)
    ADD ESP,0xc                         ; 00414fda
    POP EBX                             ; 00414fdd
    RET                                 ; 00414fde

