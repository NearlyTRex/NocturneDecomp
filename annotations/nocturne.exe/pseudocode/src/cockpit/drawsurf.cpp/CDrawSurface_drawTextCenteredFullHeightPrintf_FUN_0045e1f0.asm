; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_0045e1f0(CDrawSurface *this_ptr,int x,char *format,...)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x
; char *           Stack[0xc]:4   format
; Local Variables:
; undefined        Stack[-0x100c]:1  local_100c
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_0045e1a0
;   crt_stdio.c_vsprintf_FUN_00563a08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e1f0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeightPrintf_FUN_0045e1f0
    PUSH ESI                            ; 0045e1f1
    SUB ESP,0x1004                      ; 0045e1f2
    LEA EAX,[ESP + 0x101c]              ; 0045e1f8
    MOV dword ptr [ESP + 0x1000],EAX    ; 0045e1ff
    LEA EAX,[ESP + 0x1000]              ; 0045e206
    PUSH EAX                            ; 0045e20d
    MOV EDX,dword ptr [ESP + 0x101c]    ; 0045e20e
    PUSH EDX                            ; 0045e215
    LEA EAX,[ESP + 0x8]                 ; 0045e216
    PUSH EAX                            ; 0045e21a
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 0045e21b
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_00563a08(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0045e220
    MOV EBX,dword ptr [ESP + 0x1014]    ; 0045e223
    PUSH EBX                            ; 0045e22a
    LEA EAX,[ESP + 0x4]                 ; 0045e22b
    PUSH EAX                            ; 0045e22f
    MOV ESI,dword ptr [ESP + 0x1018]    ; 0045e230
    XOR ECX,ECX                         ; 0045e237
    PUSH ESI                            ; 0045e239
    MOV dword ptr [ESP + 0x100c],ECX    ; 0045e23a
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_0045e1a0 ; 0045e241
        ;   XREF to: 0045e1a0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullHeight_FUN_0045e1a0(CDrawSurface * this_ptr, char * text, int x)
    ADD ESP,0xc                         ; 0045e246
    ADD ESP,0x1004                      ; 0045e249
    POP ESI                             ; 0045e24f
    POP EBX                             ; 0045e250
    RET                                 ; 0045e251

