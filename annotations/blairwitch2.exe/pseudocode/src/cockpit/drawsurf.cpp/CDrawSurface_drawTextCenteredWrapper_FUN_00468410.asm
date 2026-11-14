; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00468410(CDrawSurface *this_ptr,int x,int y,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; char *           Stack[0x10]:4   text
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00468b80 at 00468d50
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_004683e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468410
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_00468410
    PUSH ESI                            ; 00468411
    MOV EDX,dword ptr [ESP + 0x14]      ; 00468412
    PUSH EDX                            ; 00468416
    MOV ECX,dword ptr [ESP + 0x14]      ; 00468417
    PUSH ECX                            ; 0046841b
    MOV EBX,dword ptr [ESP + 0x20]      ; 0046841c
    PUSH EBX                            ; 00468420
    MOV ESI,dword ptr [ESP + 0x18]      ; 00468421
    PUSH ESI                            ; 00468425
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_004683e0 ; 00468426
        ;   XREF to: 004683e0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_004683e0(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 0046842b
    POP ESI                             ; 0046842e
    POP EBX                             ; 0046842f
    RET                                 ; 00468430

