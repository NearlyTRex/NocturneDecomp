; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30(CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_0045da90 at 0045daea
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_0045da60 at 0045da76
;   core_script.cpp_CScript_renderEditor_FUN_004fe9d0 at 004feb13
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045da30
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_0045da30
    PUSH ESI                            ; 0045da31
    PUSH 0x0                            ; 0045da32
    PUSH 0x0                            ; 0045da34
    MOV EDX,dword ptr [ESP + 0x20]      ; 0045da36
    PUSH EDX                            ; 0045da3a
    PUSH 0x0                            ; 0045da3b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0045da3d
    PUSH ECX                            ; 0045da41
    MOV EBX,dword ptr [ESP + 0x24]      ; 0045da42
    PUSH EBX                            ; 0045da46
    MOV ESI,dword ptr [ESP + 0x24]      ; 0045da47
    PUSH ESI                            ; 0045da4b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 ; 0045da4c
        ;   XREF to: 0045d760 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 0045da51
    POP ESI                             ; 0045da54
    POP EBX                             ; 0045da55
    RET                                 ; 0045da56

