; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800(CDrawSurface *this_ptr,char *text,int x,int width,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   y
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0 at 00489ac6
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860 at 004898c3
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830 at 0048984c
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489800
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
    PUSH ESI                            ; 00489801
    PUSH EDI                            ; 00489802
    PUSH 0x5                            ; 00489803
    PUSH 0x0                            ; 00489805
    MOV EDX,dword ptr [ESP + 0x28]      ; 00489807
    PUSH EDX                            ; 0048980b
    MOV ECX,dword ptr [ESP + 0x28]      ; 0048980c
    PUSH ECX                            ; 00489810
    MOV EBX,dword ptr [ESP + 0x28]      ; 00489811
    PUSH EBX                            ; 00489815
    MOV ESI,dword ptr [ESP + 0x28]      ; 00489816
    PUSH ESI                            ; 0048981a
    MOV EDI,dword ptr [ESP + 0x28]      ; 0048981b
    PUSH EDI                            ; 0048981f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 ; 00489820
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 00489825
    POP EDI                             ; 00489828
    POP ESI                             ; 00489829
    POP EBX                             ; 0048982a
    RET                                 ; 0048982b

