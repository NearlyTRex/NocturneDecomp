; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_flame_cpp_CFlame_showEditorHelp_FUN_004cb0a0(CFlame *this_ptr,int *y_pos)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   y_pos
;
; Referenced Globals:
;   TerminatedCString s_With_CTRL_held_down_use__0062a276
;   int g_ClipLeft
;
; Called Functions:
;   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb0a0
        ;   Label: core_flame.cpp_CFlame_showEditorHelp_FUN_004cb0a0
    PUSH EDI                            ; 004cb0a1
    PUSH EBP                            ; 004cb0a2
    MOV EBX,dword ptr [ESP + 0x14]      ; 004cb0a3
    PUSH EBX                            ; 004cb0a7
    MOV EDX,dword ptr [ESP + 0x14]      ; 004cb0a8
    PUSH EDX                            ; 004cb0ac
    CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150 ; 004cb0ad
        ;   XREF to: 0040d150 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor * this_ptr, int * y_pos)
    MOV ECX,dword ptr [EBX]             ; 004cb0b2
    ADD ESP,0x8                         ; 004cb0b4
    ADD ECX,0xb                         ; 004cb0b7
    PUSH ECX                            ; 004cb0ba
    MOV EDI,dword ptr [0x02d02558]      ; 004cb0bb | g_ClipLeft
    PUSH EDI                            ; 004cb0c1
    PUSH 0x62a276                       ; 004cb0c2 | = "With CTRL held down, use slew keys to..."
    MOV dword ptr [EBX],ECX             ; 004cb0c7
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004cb0c9
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EBP,dword ptr [EBX]             ; 004cb0ce
    ADD EBP,0xb                         ; 004cb0d0
    ADD ESP,0xc                         ; 004cb0d3
    MOV dword ptr [EBX],EBP             ; 004cb0d6
    POP EBP                             ; 004cb0d8
    POP EDI                             ; 004cb0d9
    POP EBX                             ; 004cb0da
    LEA EAX,[EAX]                       ; 004cb0db
    MOV ECX,ECX                         ; 004cb0de

