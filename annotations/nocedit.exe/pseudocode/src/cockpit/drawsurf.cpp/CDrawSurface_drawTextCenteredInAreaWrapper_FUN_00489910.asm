; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWrapper_FUN_00489910(CDrawSurface * this_ptr, int x, int y, int height, char * text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   height
; char *           Stack[0x14]:4   text
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489910
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWrapper_FUN_00489910
    PUSH ESI                            ; 00489911
    PUSH EDI                            ; 00489912
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00489913
    PUSH EDX                            ; 00489917
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00489918
    PUSH ECX                            ; 0048991c
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0048991d
    PUSH EBX                            ; 00489921
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00489922
    PUSH ESI                            ; 00489926
    MOV EDI,dword ptr [ESP + 0x20]      ; 00489927
    PUSH EDI                            ; 0048992b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0 ; 0048992c
        ;   XREF to: 004898e0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0(CDrawSurface * this_ptr, int x, int y, int height, ...)
    ADD ESP,0x14                        ; 00489931
    POP EDI                             ; 00489934
    POP ESI                             ; 00489935
    POP EBX                             ; 00489936
    RET                                 ; 00489937

