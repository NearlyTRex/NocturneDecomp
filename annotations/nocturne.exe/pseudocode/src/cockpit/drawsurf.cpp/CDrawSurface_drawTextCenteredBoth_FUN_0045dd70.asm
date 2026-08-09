; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBoth_FUN_0045dd70(CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_0045ddd0 at 0045de2a
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothWrapper_FUN_0045dda0 at 0045ddb6
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dd70
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_0045dd70
    PUSH ESI                            ; 0045dd71
    PUSH 0x4                            ; 0045dd72
    PUSH 0x0                            ; 0045dd74
    MOV EDX,dword ptr [ESP + 0x20]      ; 0045dd76
    PUSH EDX                            ; 0045dd7a
    PUSH 0x0                            ; 0045dd7b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0045dd7d
    PUSH ECX                            ; 0045dd81
    MOV EBX,dword ptr [ESP + 0x24]      ; 0045dd82
    PUSH EBX                            ; 0045dd86
    MOV ESI,dword ptr [ESP + 0x24]      ; 0045dd87
    PUSH ESI                            ; 0045dd8b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 ; 0045dd8c
        ;   XREF to: 0045d760 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 0045dd91
    POP ESI                             ; 0045dd94
    POP EBX                             ; 0045dd95
    RET                                 ; 0045dd96

