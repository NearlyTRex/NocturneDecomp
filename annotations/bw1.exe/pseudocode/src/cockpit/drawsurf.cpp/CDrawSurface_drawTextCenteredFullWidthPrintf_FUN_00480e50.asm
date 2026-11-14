; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00480e50(CDrawSurface *this_ptr,int y,char *format)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   y
; char *           Stack[0xc]:4   format
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00480e10
;   crt_stdio.c_vsprintf_FUN_005bfb18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480e50
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthPrintf_FUN_00480e50
    PUSH ESI                            ; 00480e51
    SUB ESP,0x1004                      ; 00480e52
    LEA EAX,[ESP + 0x101c]              ; 00480e58
    MOV dword ptr [ESP + 0x1000],EAX    ; 00480e5f
    LEA EAX,[ESP + 0x1000]              ; 00480e66
    PUSH EAX                            ; 00480e6d
    MOV EDX,dword ptr [ESP + 0x101c]    ; 00480e6e
    PUSH EDX                            ; 00480e75
    LEA EAX,[ESP + 0x8]                 ; 00480e76
    PUSH EAX                            ; 00480e7a
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 00480e7b
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005bfb18(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00480e80
    MOV EBX,dword ptr [ESP + 0x1014]    ; 00480e83
    PUSH EBX                            ; 00480e8a
    LEA EAX,[ESP + 0x4]                 ; 00480e8b
    PUSH EAX                            ; 00480e8f
    MOV ESI,dword ptr [ESP + 0x1018]    ; 00480e90
    XOR ECX,ECX                         ; 00480e97
    PUSH ESI                            ; 00480e99
    MOV dword ptr [ESP + 0x100c],ECX    ; 00480e9a
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00480e10 ; 00480ea1
        ;   XREF to: 00480e10 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00480e10(CDrawSurface * this_ptr, char * param_2, int param_3)
    ADD ESP,0xc                         ; 00480ea6
    ADD ESP,0x1004                      ; 00480ea9
    POP ESI                             ; 00480eaf
    POP EBX                             ; 00480eb0
    RET                                 ; 00480eb1

