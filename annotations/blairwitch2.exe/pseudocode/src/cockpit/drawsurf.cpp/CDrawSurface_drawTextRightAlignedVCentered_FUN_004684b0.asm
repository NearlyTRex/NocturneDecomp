; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_004684b0(CDrawSurface *this_ptr,char *text,int x,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00468510 at 0046856a
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_00467f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004684b0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_004684b0
    PUSH ESI                            ; 004684b1
    PUSH 0x3                            ; 004684b2
    PUSH 0x0                            ; 004684b4
    MOV EDX,dword ptr [ESP + 0x20]      ; 004684b6
    PUSH EDX                            ; 004684ba
    PUSH 0x0                            ; 004684bb
    MOV ECX,dword ptr [ESP + 0x24]      ; 004684bd
    PUSH ECX                            ; 004684c1
    MOV EBX,dword ptr [ESP + 0x24]      ; 004684c2
    PUSH EBX                            ; 004684c6
    MOV ESI,dword ptr [ESP + 0x24]      ; 004684c7
    PUSH ESI                            ; 004684cb
    CALL cockpit_drawsurf.cpp_FUN_00467f70 ; 004684cc
        ;   XREF to: 00467f70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467f70(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 004684d1
    POP ESI                             ; 004684d4
    POP EBX                             ; 004684d5
    RET                                 ; 004684d6

