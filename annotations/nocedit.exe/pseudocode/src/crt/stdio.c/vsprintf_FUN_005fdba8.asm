; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_vsprintf_FUN_005fdba8(char *buffer,char *format,va_list_t args)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; char *           Stack[0x8]:4   format
; va_list_t        Stack[0xc]:4   args
;
; XREF[38]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_00489790 at 004897bc
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_00489bb0 at 00489bdb
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40 at 00489c6a
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00489af0 at 00489b1b
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_00489940 at 0048996d
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30 at 00489a5d
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_00489860 at 0048988d
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0 at 0048961c
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450 at 0048947c
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_004896c0 at 004896ec
;   ... and 28 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fdba8
        ;   Label: crt_stdio.c_vsprintf_FUN_005fdba8
    PUSH 0x5fdb90                       ; 005fdba9
    MOV EDX,dword ptr [ESP + 0x14]      ; 005fdbae
    PUSH EDX                            ; 005fdbb2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005fdbb3
    PUSH EBX                            ; 005fdbb7
    MOV ECX,dword ptr [ESP + 0x14]      ; 005fdbb8
    PUSH ECX                            ; 005fdbbc
    CALL 0x00602950                     ; 005fdbbd
        ;   XREF to: 00602950 (UNCONDITIONAL_CALL)  ; LAB_0060294e+2
    ADD ESP,0x10                        ; 005fdbc2
    MOV EDX,dword ptr [ESP + 0x8]       ; 005fdbc5
    MOV byte ptr [EDX + EAX*0x1],0x0    ; 005fdbc9
    POP EBX                             ; 005fdbcd
    RET                                 ; 005fdbce

