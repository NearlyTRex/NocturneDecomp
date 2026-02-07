; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthWrapper_FUN_00489a00 (CDrawSurface *this_ptr,int x,int y,int width,int height,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; char *           Stack[0x18]:4   text
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489a00
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthWrapper_FUN_00489a00
    PUSH ESI                            ; 00489a01
    PUSH EDI                            ; 00489a02
    PUSH EBP                            ; 00489a03
    MOV EDX,dword ptr [ESP + 0x24]      ; 00489a04
    PUSH EDX                            ; 00489a08
    MOV ECX,dword ptr [ESP + 0x24]      ; 00489a09
    PUSH ECX                            ; 00489a0d
    MOV EBX,dword ptr [ESP + 0x24]      ; 00489a0e
    PUSH EBX                            ; 00489a12
    MOV ESI,dword ptr [ESP + 0x24]      ; 00489a13
    PUSH ESI                            ; 00489a17
    MOV EDI,dword ptr [ESP + 0x38]      ; 00489a18
    PUSH EDI                            ; 00489a1c
    MOV EBP,dword ptr [ESP + 0x28]      ; 00489a1d
    PUSH EBP                            ; 00489a21
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0 ; 00489a22
        ;   XREF to: 004899c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x18                        ; 00489a27
    POP EBP                             ; 00489a2a
    POP EDI                             ; 00489a2b
    POP ESI                             ; 00489a2c
    POP EBX                             ; 00489a2d
    RET                                 ; 00489a2e

