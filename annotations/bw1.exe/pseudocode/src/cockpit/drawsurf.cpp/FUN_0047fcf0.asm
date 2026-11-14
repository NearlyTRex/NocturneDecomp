; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_FUN_0047fcf0(CDrawSurface *this_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00481090 at 004819de
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_0047fb20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0047fcf0
        ;   Label: cockpit_drawsurf.cpp_FUN_0047fcf0
    MOV EAX,dword ptr [EDX + 0x4]       ; 0047fcf4
    DEC EAX                             ; 0047fcf7
    PUSH EAX                            ; 0047fcf8
    MOV EAX,dword ptr [EDX]             ; 0047fcf9
    DEC EAX                             ; 0047fcfb
    PUSH EAX                            ; 0047fcfc
    PUSH 0x0                            ; 0047fcfd
    PUSH 0x0                            ; 0047fcff
    PUSH EDX                            ; 0047fd01
    CALL cockpit_drawsurf.cpp_FUN_0047fb20 ; 0047fd02
        ;   XREF to: 0047fb20 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_0047fb20(CDrawSurface * this_ptr, int x1, int y1, int x2, ...)
    ADD ESP,0x14                        ; 0047fd07
    RET                                 ; 0047fd0a

