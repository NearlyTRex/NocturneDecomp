; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_fillFullSurface_FUN_0045d2b0(CDrawSurface *this_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0045e370 at 0045e427
;   core_script.cpp_CScript_renderEditor_FUN_004fe9d0 at 004fea25
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_0045d110
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0045d2b0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_fillFullSurface_FUN_0045d2b0
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045d2b4
    DEC EAX                             ; 0045d2b7
    PUSH EAX                            ; 0045d2b8
    MOV EAX,dword ptr [EDX]             ; 0045d2b9
    DEC EAX                             ; 0045d2bb
    PUSH EAX                            ; 0045d2bc
    PUSH 0x0                            ; 0045d2bd
    PUSH 0x0                            ; 0045d2bf
    PUSH EDX                            ; 0045d2c1
    CALL cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_0045d110 ; 0045d2c2
        ;   XREF to: 0045d110 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_fillRectangle_FUN_0045d110(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 0045d2c7
    RET                                 ; 0045d2ca

