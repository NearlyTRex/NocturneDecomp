; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_grave_cpp_CGrave_showEditorHelp_FUN_004eead0(CGrave *this_ptr,int *y_pos)
;
; Parameters:
; CGrave *         Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   y_pos
;
; Referenced Globals:
;   TerminatedCString s_Hold_down_CTRL_to_view_g_0062e532
;   int g_ClipLeft
;
; Called Functions:
;   core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eead0
        ;   Label: core_grave.cpp_CGrave_showEditorHelp_FUN_004eead0
    PUSH EDI                            ; 004eead1
    PUSH EBP                            ; 004eead2
    MOV EBX,dword ptr [ESP + 0x14]      ; 004eead3
    PUSH EBX                            ; 004eead7
    MOV EDX,dword ptr [ESP + 0x14]      ; 004eead8
    PUSH EDX                            ; 004eeadc
    CALL core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150 ; 004eeadd
        ;   XREF to: 0040d150 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_showEditorHelp_FUN_0040d150(CDemonActor * this_ptr, int * y_pos)
    MOV ECX,dword ptr [EBX]             ; 004eeae2
    ADD ESP,0x8                         ; 004eeae4
    ADD ECX,0xb                         ; 004eeae7
    PUSH ECX                            ; 004eeaea
    MOV EDI,dword ptr [0x02d02558]      ; 004eeaeb | g_ClipLeft
    PUSH EDI                            ; 004eeaf1
    PUSH 0x62e532                       ; 004eeaf2 | = "Hold down CTRL to view grave animatio..."
    MOV dword ptr [EBX],ECX             ; 004eeaf7
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 004eeaf9
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EBP,dword ptr [EBX]             ; 004eeafe
    ADD EBP,0xb                         ; 004eeb00
    ADD ESP,0xc                         ; 004eeb03
    MOV dword ptr [EBX],EBP             ; 004eeb06
    POP EBP                             ; 004eeb08
    POP EDI                             ; 004eeb09
    POP EBX                             ; 004eeb0a
    RET                                 ; 004eeb0b

