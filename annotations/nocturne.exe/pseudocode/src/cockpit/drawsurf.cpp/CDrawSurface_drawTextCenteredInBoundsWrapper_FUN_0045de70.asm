; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_0045de70(CDrawSurface *this_ptr,int x,int y,int width,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; char *           Stack[0x14]:4   text
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0045e370 at 0045e558
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0045de40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045de70
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_0045de70
    PUSH ESI                            ; 0045de71
    PUSH EDI                            ; 0045de72
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0045de73
    PUSH EDX                            ; 0045de77
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0045de78
    PUSH ECX                            ; 0045de7c
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0045de7d
    PUSH EBX                            ; 0045de81
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0045de82
    PUSH ESI                            ; 0045de86
    MOV EDI,dword ptr [ESP + 0x20]      ; 0045de87
    PUSH EDI                            ; 0045de8b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0045de40 ; 0045de8c
        ;   XREF to: 0045de40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0045de40(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x14                        ; 0045de91
    POP EDI                             ; 0045de94
    POP ESI                             ; 0045de95
    POP EBX                             ; 0045de96
    RET                                 ; 0045de97

