; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_00480d20(CDrawSurface *this_ptr,char *text,int x,int width,int y,int height)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   y
; int              Stack[0x18]:4   height
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00480f80 at 00480f97
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00480d90 at 00480dfb
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480d20
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_00480d20
    PUSH ESI                            ; 00480d21
    PUSH EDI                            ; 00480d22
    PUSH EBP                            ; 00480d23
    PUSH 0x7                            ; 00480d24
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00480d26
    PUSH EDX                            ; 00480d2a
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00480d2b
    PUSH ECX                            ; 00480d2f
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00480d30
    PUSH EBX                            ; 00480d34
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00480d35
    PUSH ESI                            ; 00480d39
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00480d3a
    PUSH EDI                            ; 00480d3e
    MOV EBP,dword ptr [ESP + 0x2c]      ; 00480d3f
    PUSH EBP                            ; 00480d43
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480 ; 00480d44
        ;   XREF to: 00480480 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 00480d49
    POP EBP                             ; 00480d4c
    POP EDI                             ; 00480d4d
    POP ESI                             ; 00480d4e
    POP EBX                             ; 00480d4f
    RET                                 ; 00480d50

