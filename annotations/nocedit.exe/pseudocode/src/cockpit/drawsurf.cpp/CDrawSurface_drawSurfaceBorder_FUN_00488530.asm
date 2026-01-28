; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530(CDrawSurface *this_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 00489dfe
;   core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80 at 00559f19
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00488530
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00488530
    MOV EAX,dword ptr [EDX + 0x4]       ; 00488534
    DEC EAX                             ; 00488537
    PUSH EAX                            ; 00488538
    MOV EAX,dword ptr [EDX]             ; 00488539
    DEC EAX                             ; 0048853b
    PUSH EAX                            ; 0048853c
    PUSH 0x0                            ; 0048853d
    PUSH 0x0                            ; 0048853f
    PUSH EDX                            ; 00488541
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0 ; 00488542
        ;   XREF to: 004884d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 00488547
    RET                                 ; 0048854a

