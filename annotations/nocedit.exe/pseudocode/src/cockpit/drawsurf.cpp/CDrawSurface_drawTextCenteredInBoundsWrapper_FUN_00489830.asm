; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830 (CDrawSurface *this_ptr,int x,int y,int width,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; char *           Stack[0x14]:4   text
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 00489f18
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489830
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830
    PUSH ESI                            ; 00489831
    PUSH EDI                            ; 00489832
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00489833
    PUSH EDX                            ; 00489837
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00489838
    PUSH ECX                            ; 0048983c
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0048983d
    PUSH EBX                            ; 00489841
    MOV ESI,dword ptr [ESP + 0x2c]      ; 00489842
    PUSH ESI                            ; 00489846
    MOV EDI,dword ptr [ESP + 0x20]      ; 00489847
    PUSH EDI                            ; 0048984b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800 ; 0048984c
        ;   XREF to: 00489800 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x14                        ; 00489851
    POP EDI                             ; 00489854
    POP ESI                             ; 00489855
    POP EBX                             ; 00489856
    RET                                 ; 00489857

