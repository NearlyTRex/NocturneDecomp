; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setCurrentFont_FUN_00466350(CBitFont *font_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   font_ptr
;
; XREF[2]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00468b80 at 00468cf5
;   core_script.cpp_CScript_renderEditor_FUN_00521af0 at 00521b4f
;
; Referenced Globals:
;   undefined4 DAT_01ba5c30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00466350
        ;   Label: cockpit_drawsurf.cpp_setCurrentFont_FUN_00466350
    MOV [0x01ba5c30],EAX                ; 00466354 | DAT_01ba5c30
    RET                                 ; 00466359

