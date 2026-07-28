; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_vsprintf_FUN_00563a08(char *buffer,char *format,va_list_t args)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; char *           Stack[0x8]:4   format
; va_list_t        Stack[0xc]:4   args
;
; XREF[37]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_0045ddd0 at 0045ddfc
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0045e280 at 0045e2aa
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0045df80 at 0045dfad
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070 at 0045e09d
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_0045dea0 at 0045decd
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_0045dc30 at 0045dc5c
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_0045da90 at 0045dabc
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0045dd00 at 0045dd2c
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_0045db60 at 0045db8c
;   cockpit_drawsurf.cpp_FUN_0045e130 at 0045e15b
;   ... and 27 more
;
; Called Functions:
;   FUN_00569040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563a08
        ;   Label: crt_stdio.c_vsprintf_FUN_00563a08
    PUSH 0x5639f0                       ; 00563a09
    MOV EDX,dword ptr [ESP + 0x14]      ; 00563a0e
    PUSH EDX                            ; 00563a12
    MOV EBX,dword ptr [ESP + 0x14]      ; 00563a13
    PUSH EBX                            ; 00563a17
    MOV ECX,dword ptr [ESP + 0x14]      ; 00563a18
    PUSH ECX                            ; 00563a1c
    CALL FUN_00569040                   ; 00563a1d
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined FUN_00569040()
    ADD ESP,0x10                        ; 00563a22
    MOV EDX,dword ptr [ESP + 0x8]       ; 00563a25
    MOV byte ptr [EDX + EAX*0x1],0x0    ; 00563a29
    POP EBX                             ; 00563a2d
    RET                                 ; 00563a2e

