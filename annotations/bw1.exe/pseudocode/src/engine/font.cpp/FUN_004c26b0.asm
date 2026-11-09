; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_FUN_004c26b0(int text_color)
;
; Parameters:
; int              Stack[0x4]:4   text_color
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00480480 at 00480524
;
; Referenced Globals:
;   undefined4 DAT_01cc8ce4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c26b0
        ;   Label: engine_font.cpp_FUN_004c26b0
    MOV [0x01cc8ce4],EAX                ; 004c26b4 | DAT_01cc8ce4
    RET                                 ; 004c26b9

