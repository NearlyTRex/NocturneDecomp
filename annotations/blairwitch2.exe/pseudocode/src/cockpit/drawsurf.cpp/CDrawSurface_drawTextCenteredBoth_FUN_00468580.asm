; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredBoth_FUN_00468580(CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_004685e0 at 0046863a
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468580
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00468580
    PUSH ESI                            ; 00468581
    PUSH 0x4                            ; 00468582
    PUSH 0x0                            ; 00468584
    MOV EDX,dword ptr [ESP + 0x20]      ; 00468586
    PUSH EDX                            ; 0046858a
    PUSH 0x0                            ; 0046858b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0046858d
    PUSH ECX                            ; 00468591
    MOV EBX,dword ptr [ESP + 0x24]      ; 00468592
    PUSH EBX                            ; 00468596
    MOV ESI,dword ptr [ESP + 0x24]      ; 00468597
    PUSH ESI                            ; 0046859b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70 ; 0046859c
        ;   XREF to: 00467f70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 004685a1
    POP ESI                             ; 004685a4
    POP EBX                             ; 004685a5
    RET                                 ; 004685a6

