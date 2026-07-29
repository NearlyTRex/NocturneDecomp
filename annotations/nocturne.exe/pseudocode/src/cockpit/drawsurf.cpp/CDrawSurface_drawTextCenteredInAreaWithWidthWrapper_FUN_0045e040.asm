; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidthWrapper_FUN_0045e040(CDrawSurface *this_ptr,int x,int y,int width,int height,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; char *           Stack[0x18]:4   text
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e040
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthWrapper_FUN_0045e040
    PUSH ESI                            ; 0045e041
    PUSH EDI                            ; 0045e042
    PUSH EBP                            ; 0045e043
    MOV EDX,dword ptr [ESP + 0x24]      ; 0045e044
    PUSH EDX                            ; 0045e048
    MOV ECX,dword ptr [ESP + 0x24]      ; 0045e049
    PUSH ECX                            ; 0045e04d
    MOV EBX,dword ptr [ESP + 0x24]      ; 0045e04e
    PUSH EBX                            ; 0045e052
    MOV ESI,dword ptr [ESP + 0x24]      ; 0045e053
    PUSH ESI                            ; 0045e057
    MOV EDI,dword ptr [ESP + 0x38]      ; 0045e058
    PUSH EDI                            ; 0045e05c
    MOV EBP,dword ptr [ESP + 0x28]      ; 0045e05d
    PUSH EBP                            ; 0045e061
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000 ; 0045e062
        ;   XREF to: 0045e000 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x18                        ; 0045e067
    POP EBP                             ; 0045e06a
    POP EDI                             ; 0045e06b
    POP ESI                             ; 0045e06c
    POP EBX                             ; 0045e06d
    RET                                 ; 0045e06e

