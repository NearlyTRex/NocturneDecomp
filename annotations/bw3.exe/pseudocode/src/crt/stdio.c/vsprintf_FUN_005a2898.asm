; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_vsprintf_FUN_005a2898(char *buffer,char *format,va_list_t args)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; char *           Stack[0x8]:4   format
; va_list_t        Stack[0xc]:4   args
;
; XREF[30]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_0046a1b0 at 0046a1dc
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_0046a660 at 0046a68a
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_0046a510 at 0046a53b
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0046a360 at 0046a38d
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0046a450 at 0046a47d
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_0046a280 at 0046a2ad
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_0046a010 at 0046a03c
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00469e70 at 00469e9c
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCenteredPrintf_FUN_0046a0e0 at 0046a10c
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantPrintf_FUN_00469f40 at 00469f6c
;   ... and 20 more
;
; Called Functions:
;   crt_unknown.c_FUN_005a6190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2898
        ;   Label: crt_stdio.c_vsprintf_FUN_005a2898
    PUSH 0x5a2880                       ; 005a2899
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a289e
    PUSH EDX                            ; 005a28a2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a28a3
    PUSH EBX                            ; 005a28a7
    MOV ECX,dword ptr [ESP + 0x14]      ; 005a28a8
    PUSH ECX                            ; 005a28ac
    CALL crt_unknown.c_FUN_005a6190     ; 005a28ad
        ;   XREF to: 005a6190 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a6190()
    ADD ESP,0x10                        ; 005a28b2
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a28b5
    MOV byte ptr [EDX + EAX*0x1],0x0    ; 005a28b9
    POP EBX                             ; 005a28bd
    RET                                 ; 005a28be

