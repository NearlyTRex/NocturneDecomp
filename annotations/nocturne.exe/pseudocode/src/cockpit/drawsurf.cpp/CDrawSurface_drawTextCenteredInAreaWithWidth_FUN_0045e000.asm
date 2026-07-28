; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000(CDrawSurface *this_ptr,char *text,int x,int width,int y,int height)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   y
; int              Stack[0x18]:4   height
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0045e260 at 0045e277
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthPrintf_FUN_0045e070 at 0045e0db
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidthWrapper_FUN_0045e040 at 0045e062
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e000
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_0045e000
    PUSH ESI                            ; 0045e001
    PUSH EDI                            ; 0045e002
    PUSH EBP                            ; 0045e003
    PUSH 0x7                            ; 0045e004
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0045e006
    PUSH EDX                            ; 0045e00a
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0045e00b
    PUSH ECX                            ; 0045e00f
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0045e010
    PUSH EBX                            ; 0045e014
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0045e015
    PUSH ESI                            ; 0045e019
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0045e01a
    PUSH EDI                            ; 0045e01e
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0045e01f
    PUSH EBP                            ; 0045e023
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 ; 0045e024
        ;   XREF to: 0045d760 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 0045e029
    POP EBP                             ; 0045e02c
    POP EDI                             ; 0045e02d
    POP ESI                             ; 0045e02e
    POP EBX                             ; 0045e02f
    RET                                 ; 0045e030

