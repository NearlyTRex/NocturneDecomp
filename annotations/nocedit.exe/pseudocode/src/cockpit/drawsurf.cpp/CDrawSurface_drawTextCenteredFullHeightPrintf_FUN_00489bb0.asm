; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_00489bb0(CDrawSurface *this_ptr,int x,char *format,...)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; char *           Stack[0xc]:4   format
; Local Variables:
; char[4096]       Stack[-0x100c]:4096  local_100c
; va_list_t        Stack[-0xc]:4  local_c
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60
;   crt_stdio.c_vsprintf_FUN_005fdba8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489bb0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_00489bb0
    PUSH ESI                            ; 00489bb1
    SUB ESP,0x1004                      ; 00489bb2
    LEA EAX,[ESP + 0x101c]              ; 00489bb8
    MOV dword ptr [ESP + 0x1000],EAX    ; 00489bbf
    LEA EAX,[ESP + 0x1000]              ; 00489bc6
    PUSH EAX                            ; 00489bcd
    MOV EDX,dword ptr [ESP + 0x101c]    ; 00489bce
    PUSH EDX                            ; 00489bd5
    LEA EAX,[ESP + 0x8]                 ; 00489bd6
    PUSH EAX                            ; 00489bda
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 00489bdb
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00489be0
    MOV EBX,dword ptr [ESP + 0x1014]    ; 00489be3
    PUSH EBX                            ; 00489bea
    LEA EAX,[ESP + 0x4]                 ; 00489beb
    PUSH EAX                            ; 00489bef
    MOV ESI,dword ptr [ESP + 0x1018]    ; 00489bf0
    XOR ECX,ECX                         ; 00489bf7
    PUSH ESI                            ; 00489bf9
    MOV dword ptr [ESP + 0x100c],ECX    ; 00489bfa
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60 ; 00489c01
        ;   XREF to: 00489b60 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_00489b60(CDrawSurface * this_ptr, char * text, int x)
    ADD ESP,0xc                         ; 00489c06
    ADD ESP,0x1004                      ; 00489c09
    POP ESI                             ; 00489c0f
    POP EBX                             ; 00489c10
    RET                                 ; 00489c11

