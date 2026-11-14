; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setCurrentFont_FUN_0047e860(CBitFont *font_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   font_ptr
;
; XREF[2]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00481090 at 00481205
;   core_script.cpp_CScript_renderEditor_FUN_00543c00 at 00543c5f
;
; Referenced Globals:
;   undefined4 DAT_01bc11ec
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0047e860
        ;   Label: cockpit_drawsurf.cpp_setCurrentFont_FUN_0047e860
    MOV [0x01bc11ec],EAX                ; 0047e864 | DAT_01bc11ec
    RET                                 ; 0047e869

