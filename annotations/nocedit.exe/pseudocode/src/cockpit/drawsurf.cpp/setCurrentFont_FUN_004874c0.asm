; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0(CBitFont * font_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   font_ptr
;
; XREF[2]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 00489ea5
;   core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80 at 00559ddf
;
; Referenced Globals:
;   CBitFont* g_CurrentFont
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004874c0
        ;   Label: cockpit_drawsurf.cpp_setCurrentFont_FUN_004874c0
    MOV [0x02c6d558],EAX                ; 004874c4 | g_CurrentFont
    RET                                 ; 004874c9

