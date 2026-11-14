; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_004673b0(CDrawSurface *this_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00468b80 at 00468c4e
;   core_script.cpp_CScript_renderEditor_FUN_00521af0 at 00521c89
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_00467350
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004673b0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_004673b0
    MOV EAX,dword ptr [EDX + 0x4]       ; 004673b4
    DEC EAX                             ; 004673b7
    PUSH EAX                            ; 004673b8
    MOV EAX,dword ptr [EDX]             ; 004673b9
    DEC EAX                             ; 004673bb
    PUSH EAX                            ; 004673bc
    PUSH 0x0                            ; 004673bd
    PUSH 0x0                            ; 004673bf
    PUSH EDX                            ; 004673c1
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_00467350 ; 004673c2
        ;   XREF to: 00467350 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_00467350(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 004673c7
    RET                                 ; 004673ca

