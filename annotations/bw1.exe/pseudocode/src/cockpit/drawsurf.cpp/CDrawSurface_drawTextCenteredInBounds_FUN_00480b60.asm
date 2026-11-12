; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00480b60(CDrawSurface *this_ptr,char *text,int x,int width,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   y
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00480e10 at 00480e26
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00480bc0 at 00480c23
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00480b90 at 00480bac
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480b60
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00480b60
    PUSH ESI                            ; 00480b61
    PUSH EDI                            ; 00480b62
    PUSH 0x5                            ; 00480b63
    PUSH 0x0                            ; 00480b65
    MOV EDX,dword ptr [ESP + 0x28]      ; 00480b67
    PUSH EDX                            ; 00480b6b
    MOV ECX,dword ptr [ESP + 0x28]      ; 00480b6c
    PUSH ECX                            ; 00480b70
    MOV EBX,dword ptr [ESP + 0x28]      ; 00480b71
    PUSH EBX                            ; 00480b75
    MOV ESI,dword ptr [ESP + 0x28]      ; 00480b76
    PUSH ESI                            ; 00480b7a
    MOV EDI,dword ptr [ESP + 0x28]      ; 00480b7b
    PUSH EDI                            ; 00480b7f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480 ; 00480b80
        ;   XREF to: 00480480 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 00480b85
    POP EDI                             ; 00480b88
    POP ESI                             ; 00480b89
    POP EBX                             ; 00480b8a
    RET                                 ; 00480b8b

