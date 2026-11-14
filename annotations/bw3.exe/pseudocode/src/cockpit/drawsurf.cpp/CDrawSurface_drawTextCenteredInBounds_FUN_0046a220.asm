; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0046a220(CDrawSurface *this_ptr,char *text,int x,int width,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   y
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0046a4d0 at 0046a4e6
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsPrintf_FUN_0046a280 at 0046a2e3
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_0046a250 at 0046a26c
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a220
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0046a220
    PUSH ESI                            ; 0046a221
    PUSH EDI                            ; 0046a222
    PUSH 0x5                            ; 0046a223
    PUSH 0x0                            ; 0046a225
    MOV EDX,dword ptr [ESP + 0x28]      ; 0046a227
    PUSH EDX                            ; 0046a22b
    MOV ECX,dword ptr [ESP + 0x28]      ; 0046a22c
    PUSH ECX                            ; 0046a230
    MOV EBX,dword ptr [ESP + 0x28]      ; 0046a231
    PUSH EBX                            ; 0046a235
    MOV ESI,dword ptr [ESP + 0x28]      ; 0046a236
    PUSH ESI                            ; 0046a23a
    MOV EDI,dword ptr [ESP + 0x28]      ; 0046a23b
    PUSH EDI                            ; 0046a23f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40 ; 0046a240
        ;   XREF to: 00469b40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00469b40(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 0046a245
    POP EDI                             ; 0046a248
    POP ESI                             ; 0046a249
    POP EBX                             ; 0046a24a
    RET                                 ; 0046a24b

