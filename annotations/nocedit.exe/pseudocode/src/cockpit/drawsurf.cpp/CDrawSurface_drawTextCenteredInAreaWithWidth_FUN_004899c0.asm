; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0 (CDrawSurface *this_ptr,int x,int y,int width,int height,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; char *           Stack[0x18]:4   text
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20 at 00489c37
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_00489a30 at 00489a9b
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthWrapper_FUN_00489a00 at 00489a22
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004899c0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_004899c0
    PUSH ESI                            ; 004899c1
    PUSH EDI                            ; 004899c2
    PUSH EBP                            ; 004899c3
    PUSH 0x7                            ; 004899c4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004899c6
    PUSH EDX                            ; 004899ca
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004899cb
    PUSH ECX                            ; 004899cf
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004899d0
    PUSH EBX                            ; 004899d4
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004899d5
    PUSH ESI                            ; 004899d9
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004899da
    PUSH EDI                            ; 004899de
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004899df
    PUSH EBP                            ; 004899e3
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120 ; 004899e4
        ;   XREF to: 00489120 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x1c                        ; 004899e9
    POP EBP                             ; 004899ec
    POP EDI                             ; 004899ed
    POP ESI                             ; 004899ee
    POP EBX                             ; 004899ef
    RET                                 ; 004899f0

