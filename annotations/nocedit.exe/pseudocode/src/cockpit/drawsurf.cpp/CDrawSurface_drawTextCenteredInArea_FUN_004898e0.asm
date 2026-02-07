; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0 (CDrawSurface *this_ptr,char *text,int x,int y,int height)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
; int              Stack[0x14]:4   height
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60 at 00489b77
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940 at 004899a3
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWrapper_FUN_00489910 at 0048992c
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004898e0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_004898e0
    PUSH ESI                            ; 004898e1
    PUSH EDI                            ; 004898e2
    PUSH 0x6                            ; 004898e3
    MOV EDX,dword ptr [ESP + 0x24]      ; 004898e5
    PUSH EDX                            ; 004898e9
    MOV ECX,dword ptr [ESP + 0x24]      ; 004898ea
    PUSH ECX                            ; 004898ee
    PUSH 0x0                            ; 004898ef
    MOV EBX,dword ptr [ESP + 0x28]      ; 004898f1
    PUSH EBX                            ; 004898f5
    MOV ESI,dword ptr [ESP + 0x28]      ; 004898f6
    PUSH ESI                            ; 004898fa
    MOV EDI,dword ptr [ESP + 0x28]      ; 004898fb
    PUSH EDI                            ; 004898ff
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 ; 00489900
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 00489905
    POP EDI                             ; 00489908
    POP ESI                             ; 00489909
    POP EBX                             ; 0048990a
    RET                                 ; 0048990b

