; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_setCurrentFont_FUN_0045baa0(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_0045e370 at 0045e4e5
;   FUN_004fe9d0 at 004fea2f
;
; Referenced Globals:
;   undefined4 DAT_01b4d718
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045baa0
        ;   Label: cockpit_drawsurf.cpp_setCurrentFont_FUN_0045baa0
    MOV [0x01b4d718],EAX                ; 0045baa4 | DAT_01b4d718
    RET                                 ; 0045baa9

