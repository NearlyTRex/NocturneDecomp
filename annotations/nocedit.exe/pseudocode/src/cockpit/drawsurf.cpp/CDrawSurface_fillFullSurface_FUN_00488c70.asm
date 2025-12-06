; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70(CDrawSurface * this_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 00489de7
;   core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80 at 00559dd5
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00488ad0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00488c70
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_00488c70
    MOV EAX,dword ptr [EDX + 0x4]       ; 00488c74
    DEC EAX                             ; 00488c77
    PUSH EAX                            ; 00488c78
    MOV EAX,dword ptr [EDX]             ; 00488c79
    DEC EAX                             ; 00488c7b
    PUSH EAX                            ; 00488c7c
    PUSH 0x0                            ; 00488c7d
    PUSH 0x0                            ; 00488c7f
    PUSH EDX                            ; 00488c81
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00488ad0 ; 00488c82 | void cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_00488ad0(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
        ;   XREF to: 00488ad0 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 00488c87
    RET                                 ; 00488c8a

