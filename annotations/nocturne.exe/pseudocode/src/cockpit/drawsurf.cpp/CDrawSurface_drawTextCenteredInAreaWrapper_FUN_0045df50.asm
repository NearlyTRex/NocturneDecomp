; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWrapper_FUN_0045df50(CDrawSurface *this_ptr,int x,int y,int height,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   height
; char *           Stack[0x14]:4   text
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_0045df20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045df50
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaWrapper_FUN_0045df50
    PUSH ESI                            ; 0045df51
    PUSH EDI                            ; 0045df52
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0045df53
    PUSH EDX                            ; 0045df57
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0045df58
    PUSH ECX                            ; 0045df5c
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0045df5d
    PUSH EBX                            ; 0045df61
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0045df62
    PUSH ESI                            ; 0045df66
    MOV EDI,dword ptr [ESP + 0x20]      ; 0045df67
    PUSH EDI                            ; 0045df6b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_0045df20 ; 0045df6c
        ;   XREF to: 0045df20 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_0045df20(CDrawSurface * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x14                        ; 0045df71
    POP EDI                             ; 0045df74
    POP ESI                             ; 0045df75
    POP EBX                             ; 0045df76
    RET                                 ; 0045df77

