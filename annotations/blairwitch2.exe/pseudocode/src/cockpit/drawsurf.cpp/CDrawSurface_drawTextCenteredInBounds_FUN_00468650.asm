; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00468650(CDrawSurface *this_ptr,char *text,int x,int width,int y)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   y
;
; XREF[2]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00468680 at 0046869c
;   cockpit_drawsurf.cpp_FUN_004686b0 at 00468713
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468650
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00468650
    PUSH ESI                            ; 00468651
    PUSH EDI                            ; 00468652
    PUSH 0x5                            ; 00468653
    PUSH 0x0                            ; 00468655
    MOV EDX,dword ptr [ESP + 0x28]      ; 00468657
    PUSH EDX                            ; 0046865b
    MOV ECX,dword ptr [ESP + 0x28]      ; 0046865c
    PUSH ECX                            ; 00468660
    MOV EBX,dword ptr [ESP + 0x28]      ; 00468661
    PUSH EBX                            ; 00468665
    MOV ESI,dword ptr [ESP + 0x28]      ; 00468666
    PUSH ESI                            ; 0046866a
    MOV EDI,dword ptr [ESP + 0x28]      ; 0046866b
    PUSH EDI                            ; 0046866f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70 ; 00468670
        ;   XREF to: 00467f70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00467f70(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 00468675
    POP EDI                             ; 00468678
    POP ESI                             ; 00468679
    POP EBX                             ; 0046867a
    RET                                 ; 0046867b

