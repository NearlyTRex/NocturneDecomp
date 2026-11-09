; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0046a3e0(CDrawSurface *this_ptr,char *text,int x,int width,int y,int height)
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
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0046a640 at 0046a657
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0046a450 at 0046a4bb
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_00469b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a3e0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0046a3e0
    PUSH ESI                            ; 0046a3e1
    PUSH EDI                            ; 0046a3e2
    PUSH EBP                            ; 0046a3e3
    PUSH 0x7                            ; 0046a3e4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0046a3e6
    PUSH EDX                            ; 0046a3ea
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0046a3eb
    PUSH ECX                            ; 0046a3ef
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0046a3f0
    PUSH EBX                            ; 0046a3f4
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0046a3f5
    PUSH ESI                            ; 0046a3f9
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0046a3fa
    PUSH EDI                            ; 0046a3fe
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0046a3ff
    PUSH EBP                            ; 0046a403
    CALL cockpit_drawsurf.cpp_FUN_00469b40 ; 0046a404
        ;   XREF to: 00469b40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00469b40(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 0046a409
    POP EBP                             ; 0046a40c
    POP EDI                             ; 0046a40d
    POP ESI                             ; 0046a40e
    POP EBX                             ; 0046a40f
    RET                                 ; 0046a410

