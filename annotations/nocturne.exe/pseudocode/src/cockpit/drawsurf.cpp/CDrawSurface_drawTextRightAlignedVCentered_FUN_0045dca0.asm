; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_0045dca0(CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0045dd00 at 0045dd5a
;   cockpit_drawsurf.cpp_FUN_0045dcd0 at 0045dce6
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dca0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_0045dca0
    PUSH ESI                            ; 0045dca1
    PUSH 0x3                            ; 0045dca2
    PUSH 0x0                            ; 0045dca4
    MOV EDX,dword ptr [ESP + 0x20]      ; 0045dca6
    PUSH EDX                            ; 0045dcaa
    PUSH 0x0                            ; 0045dcab
    MOV ECX,dword ptr [ESP + 0x24]      ; 0045dcad
    PUSH ECX                            ; 0045dcb1
    MOV EBX,dword ptr [ESP + 0x24]      ; 0045dcb2
    PUSH EBX                            ; 0045dcb6
    MOV ESI,dword ptr [ESP + 0x24]      ; 0045dcb7
    PUSH ESI                            ; 0045dcbb
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 ; 0045dcbc
        ;   XREF to: 0045d760 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 0045dcc1
    POP ESI                             ; 0045dcc4
    POP EBX                             ; 0045dcc5
    RET                                 ; 0045dcc6

