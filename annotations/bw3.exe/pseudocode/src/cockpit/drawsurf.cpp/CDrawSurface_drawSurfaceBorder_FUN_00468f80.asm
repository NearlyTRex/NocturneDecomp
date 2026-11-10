; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawSurfaceBorder_FUN_00468f80(CDrawSurface *this_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0046a750 at 0046a81e
;   core_script.cpp_CScript_renderEditor_FUN_00529210 at 005293a9
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_00468f20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00468f80
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawSurfaceBorder_FUN_00468f80
    MOV EAX,dword ptr [EDX + 0x4]       ; 00468f84
    DEC EAX                             ; 00468f87
    PUSH EAX                            ; 00468f88
    MOV EAX,dword ptr [EDX]             ; 00468f89
    DEC EAX                             ; 00468f8b
    PUSH EAX                            ; 00468f8c
    PUSH 0x0                            ; 00468f8d
    PUSH 0x0                            ; 00468f8f
    PUSH EDX                            ; 00468f91
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_00468f20 ; 00468f92
        ;   XREF to: 00468f20 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_00468f20(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 00468f97
    RET                                 ; 00468f9a

