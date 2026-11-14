; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBoth_FUN_0046a150(CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBothPrintf_FUN_0046a1b0 at 0046a20a
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a150
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_0046a150
    PUSH ESI                            ; 0046a151
    PUSH 0x4                            ; 0046a152
    PUSH 0x0                            ; 0046a154
    MOV EDX,dword ptr [ESP + 0x20]      ; 0046a156
    PUSH EDX                            ; 0046a15a
    PUSH 0x0                            ; 0046a15b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0046a15d
    PUSH ECX                            ; 0046a161
    MOV EBX,dword ptr [ESP + 0x24]      ; 0046a162
    PUSH EBX                            ; 0046a166
    MOV ESI,dword ptr [ESP + 0x24]      ; 0046a167
    PUSH ESI                            ; 0046a16b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40 ; 0046a16c
        ;   XREF to: 00469b40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 0046a171
    POP ESI                             ; 0046a174
    POP EBX                             ; 0046a175
    RET                                 ; 0046a176

