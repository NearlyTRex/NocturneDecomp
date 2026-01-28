; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40 (CDrawSurface *this_ptr,char *format,...)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined        Stack[-0x1008]:1  local_1008
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 at 0048a31c
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20
;   crt_stdio.c_vsprintf_FUN_005fdba8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489c40
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurfacePrintf_FUN_00489c40
    SUB ESP,0x1004                      ; 00489c41
    LEA EAX,[ESP + 0x1014]              ; 00489c47
    MOV dword ptr [ESP + 0x1000],EAX    ; 00489c4e
    LEA EAX,[ESP + 0x1000]              ; 00489c55
    PUSH EAX                            ; 00489c5c
    MOV EDX,dword ptr [ESP + 0x1014]    ; 00489c5d
    PUSH EDX                            ; 00489c64
    LEA EAX,[ESP + 0x8]                 ; 00489c65
    PUSH EAX                            ; 00489c69
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 00489c6a
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t * args)
    ADD ESP,0xc                         ; 00489c6f
    MOV EAX,ESP                         ; 00489c72
    PUSH EAX                            ; 00489c74
    MOV EBX,dword ptr [ESP + 0x1010]    ; 00489c75
    XOR ECX,ECX                         ; 00489c7c
    PUSH EBX                            ; 00489c7e
    MOV dword ptr [ESP + 0x1008],ECX    ; 00489c7f
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20 ; 00489c86
        ;   XREF to: 00489c20 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00489c20(CDrawSurface * this_ptr, char * text)
    ADD ESP,0x8                         ; 00489c8b
    ADD ESP,0x1004                      ; 00489c8e
    POP EBX                             ; 00489c94
    RET                                 ; 00489c95

