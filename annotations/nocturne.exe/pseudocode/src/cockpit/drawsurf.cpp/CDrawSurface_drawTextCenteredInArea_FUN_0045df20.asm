; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInArea_FUN_0045df20(CDrawSurface *this_ptr,char *text,int x,int y,int height)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
; int              Stack[0x14]:4   height
;
; XREF[3]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_0045e1a0 at 0045e1b7
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0045df80 at 0045dfe3
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWrapper_FUN_0045df50 at 0045df6c
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045df20
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_0045df20
    PUSH ESI                            ; 0045df21
    PUSH EDI                            ; 0045df22
    PUSH 0x6                            ; 0045df23
    MOV EDX,dword ptr [ESP + 0x24]      ; 0045df25
    PUSH EDX                            ; 0045df29
    MOV ECX,dword ptr [ESP + 0x24]      ; 0045df2a
    PUSH ECX                            ; 0045df2e
    PUSH 0x0                            ; 0045df2f
    MOV EBX,dword ptr [ESP + 0x28]      ; 0045df31
    PUSH EBX                            ; 0045df35
    MOV ESI,dword ptr [ESP + 0x28]      ; 0045df36
    PUSH ESI                            ; 0045df3a
    MOV EDI,dword ptr [ESP + 0x28]      ; 0045df3b
    PUSH EDI                            ; 0045df3f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760 ; 0045df40
        ;   XREF to: 0045d760 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_0045d760(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x1c                        ; 0045df45
    POP EDI                             ; 0045df48
    POP ESI                             ; 0045df49
    POP EBX                             ; 0045df4a
    RET                                 ; 0045df4b

