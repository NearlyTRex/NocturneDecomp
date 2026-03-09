; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00489af0(CDrawSurface *this_ptr,int y,char *format,...)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   y
; char *           Stack[0xc]:4   format
; Local Variables:
; char[4096]       Stack[-0x100c]:4096  local_100c
; va_list_t        Stack[-0xc]:4  local_c
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0
;   crt_stdio.c__vsprintf_FUN_005fdba8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489af0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00489af0
    PUSH ESI                            ; 00489af1
    SUB ESP,0x1004                      ; 00489af2
    LEA EAX,[ESP + 0x101c]              ; 00489af8
    MOV dword ptr [ESP + 0x1000],EAX    ; 00489aff
    LEA EAX,[ESP + 0x1000]              ; 00489b06
    PUSH EAX                            ; 00489b0d
    MOV EDX,dword ptr [ESP + 0x101c]    ; 00489b0e
    PUSH EDX                            ; 00489b15
    LEA EAX,[ESP + 0x8]                 ; 00489b16
    PUSH EAX                            ; 00489b1a
    CALL crt_stdio.c__vsprintf_FUN_005fdba8 ; 00489b1b
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00489b20
    MOV EBX,dword ptr [ESP + 0x1014]    ; 00489b23
    PUSH EBX                            ; 00489b2a
    LEA EAX,[ESP + 0x4]                 ; 00489b2b
    PUSH EAX                            ; 00489b2f
    MOV ESI,dword ptr [ESP + 0x1018]    ; 00489b30
    XOR ECX,ECX                         ; 00489b37
    PUSH ESI                            ; 00489b39
    MOV dword ptr [ESP + 0x100c],ECX    ; 00489b3a
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0 ; 00489b41
        ;   XREF to: 00489ab0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0(CDrawSurface * this_ptr, char * text, int y)
    ADD ESP,0xc                         ; 00489b46
    ADD ESP,0x1004                      ; 00489b49
    POP ESI                             ; 00489b4f
    POP EBX                             ; 00489b50
    RET                                 ; 00489b51

