; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420(CDrawSurface * this_ptr, int x, int y, char * text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   text
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 00489ebb
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489420
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
    PUSH ESI                            ; 00489421
    MOV EDX,dword ptr [ESP + 0x14]      ; 00489422
    PUSH EDX                            ; 00489426
    MOV ECX,dword ptr [ESP + 0x14]      ; 00489427
    PUSH ECX                            ; 0048942b
    MOV EBX,dword ptr [ESP + 0x20]      ; 0048942c
    PUSH EBX                            ; 00489430
    MOV ESI,dword ptr [ESP + 0x18]      ; 00489431
    PUSH ESI                            ; 00489435
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0 ; 00489436 | void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0(CDrawSurface * this_ptr, int x, int y, char * text)
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0048943b
    POP ESI                             ; 0048943e
    POP EBX                             ; 0048943f
    RET                                 ; 00489440

