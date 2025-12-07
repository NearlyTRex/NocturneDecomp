; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int cockpit_drawsurf.cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00489ce0(CDrawSurface * this_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80 at 00559df7
;
; Referenced Globals:
;   CBitFont* g_CurrentFont
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02c6d558]      ; 00489ce0 | CBitFont * g_CurrentFont
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_00489ce0
    TEST EDX,EDX                        ; 00489ce6
    JZ 0x00489cf1                       ; 00489ce8 | LAB_00489cf1
        ;   XREF to: 00489cf1 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EDX + 0x3170]    ; 00489cea
    RET                                 ; 00489cf0
    MOV EAX,0xb                         ; 00489cf1
        ;   Label: LAB_00489cf1
    RET                                 ; 00489cf6

