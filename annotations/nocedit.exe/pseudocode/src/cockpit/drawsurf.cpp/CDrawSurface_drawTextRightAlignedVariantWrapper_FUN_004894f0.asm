; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVariantWrapper_FUN_004894f0(CDrawSurface *this_ptr,int x,int y,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   text
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004894f0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariantWrapper_FUN_004894f0
    PUSH ESI                            ; 004894f1
    MOV EDX,dword ptr [ESP + 0x14]      ; 004894f2
    PUSH EDX                            ; 004894f6
    MOV ECX,dword ptr [ESP + 0x14]      ; 004894f7
    PUSH ECX                            ; 004894fb
    MOV EBX,dword ptr [ESP + 0x20]      ; 004894fc
    PUSH EBX                            ; 00489500
    MOV ESI,dword ptr [ESP + 0x18]      ; 00489501
    PUSH ESI                            ; 00489505
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0 ; 00489506
        ;   XREF to: 004894c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_004894c0(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 0048950b
    POP ESI                             ; 0048950e
    POP EBX                             ; 0048950f
    RET                                 ; 00489510

