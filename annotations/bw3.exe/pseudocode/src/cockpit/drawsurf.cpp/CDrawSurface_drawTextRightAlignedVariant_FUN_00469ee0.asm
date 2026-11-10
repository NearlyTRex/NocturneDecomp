; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_00469ee0(CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00469f40 at 00469f9a
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469ee0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_00469ee0
    PUSH ESI                            ; 00469ee1
    PUSH 0x1                            ; 00469ee2
    PUSH 0x0                            ; 00469ee4
    MOV EDX,dword ptr [ESP + 0x20]      ; 00469ee6
    PUSH EDX                            ; 00469eea
    PUSH 0x0                            ; 00469eeb
    MOV ECX,dword ptr [ESP + 0x24]      ; 00469eed
    PUSH ECX                            ; 00469ef1
    MOV EBX,dword ptr [ESP + 0x24]      ; 00469ef2
    PUSH EBX                            ; 00469ef6
    MOV ESI,dword ptr [ESP + 0x24]      ; 00469ef7
    PUSH ESI                            ; 00469efb
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40 ; 00469efc
        ;   XREF to: 00469b40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 00469f01
    POP ESI                             ; 00469f04
    POP EBX                             ; 00469f05
    RET                                 ; 00469f06

