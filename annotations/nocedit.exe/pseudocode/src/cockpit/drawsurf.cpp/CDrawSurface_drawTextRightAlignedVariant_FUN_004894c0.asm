; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0 (CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00489520 at 0048957a
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantWrapper_FUN_004894f0 at 00489506
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004894c0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0
    PUSH ESI                            ; 004894c1
    PUSH 0x1                            ; 004894c2
    PUSH 0x0                            ; 004894c4
    MOV EDX,dword ptr [ESP + 0x20]      ; 004894c6
    PUSH EDX                            ; 004894ca
    PUSH 0x0                            ; 004894cb
    MOV ECX,dword ptr [ESP + 0x24]      ; 004894cd
    PUSH ECX                            ; 004894d1
    MOV EBX,dword ptr [ESP + 0x24]      ; 004894d2
    PUSH EBX                            ; 004894d6
    MOV ESI,dword ptr [ESP + 0x24]      ; 004894d7
    PUSH ESI                            ; 004894db
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 ; 004894dc
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 004894e1
    POP ESI                             ; 004894e4
    POP EBX                             ; 004894e5
    RET                                 ; 004894e6

