; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_00468730(CDrawSurface *this_ptr,char *text,int x,int y,int height)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
; int              Stack[0x14]:4   height
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00468790 at 004687f3
;
; Called Functions:
;   cockpit_drawsurf.cpp_FUN_00467f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468730
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_00468730
    PUSH ESI                            ; 00468731
    PUSH EDI                            ; 00468732
    PUSH 0x6                            ; 00468733
    MOV EDX,dword ptr [ESP + 0x24]      ; 00468735
    PUSH EDX                            ; 00468739
    MOV ECX,dword ptr [ESP + 0x24]      ; 0046873a
    PUSH ECX                            ; 0046873e
    PUSH 0x0                            ; 0046873f
    MOV EBX,dword ptr [ESP + 0x28]      ; 00468741
    PUSH EBX                            ; 00468745
    MOV ESI,dword ptr [ESP + 0x28]      ; 00468746
    PUSH ESI                            ; 0046874a
    MOV EDI,dword ptr [ESP + 0x28]      ; 0046874b
    PUSH EDI                            ; 0046874f
    CALL cockpit_drawsurf.cpp_FUN_00467f70 ; 00468750
        ;   XREF to: 00467f70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467f70(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 00468755
    POP EDI                             ; 00468758
    POP ESI                             ; 00468759
    POP EBX                             ; 0046875a
    RET                                 ; 0046875b

