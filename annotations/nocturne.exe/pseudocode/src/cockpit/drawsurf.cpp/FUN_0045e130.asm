; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0045e130(CDrawSurface *param_1,int param_2,char *param_3)
;
; Local Variables:
; undefined        Stack[-0x100c]:1  local_100c
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0045e0f0
;   crt_stdio.c_vsprintf_FUN_00563a08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045e130
        ;   Label: cockpit_drawsurf.cpp_FUN_0045e130
    PUSH ESI                            ; 0045e131
    SUB ESP,0x1004                      ; 0045e132
    LEA EAX,[ESP + 0x101c]              ; 0045e138
    MOV dword ptr [ESP + 0x1000],EAX    ; 0045e13f
    LEA EAX,[ESP + 0x1000]              ; 0045e146
    PUSH EAX                            ; 0045e14d
    MOV EDX,dword ptr [ESP + 0x101c]    ; 0045e14e
    PUSH EDX                            ; 0045e155
    LEA EAX,[ESP + 0x8]                 ; 0045e156
    PUSH EAX                            ; 0045e15a
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 0045e15b
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_00563a08(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0045e160
    MOV EBX,dword ptr [ESP + 0x1014]    ; 0045e163
    PUSH EBX                            ; 0045e16a
    LEA EAX,[ESP + 0x4]                 ; 0045e16b
    PUSH EAX                            ; 0045e16f
    MOV ESI,dword ptr [ESP + 0x1018]    ; 0045e170
    XOR ECX,ECX                         ; 0045e177
    PUSH ESI                            ; 0045e179
    MOV dword ptr [ESP + 0x100c],ECX    ; 0045e17a
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0045e0f0 ; 0045e181
        ;   XREF to: 0045e0f0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0045e0f0(CDrawSurface * this_ptr, char * text, int y)
    ADD ESP,0xc                         ; 0045e186
    ADD ESP,0x1004                      ; 0045e189
    POP ESI                             ; 0045e18f
    POP EBX                             ; 0045e190
    RET                                 ; 0045e191

