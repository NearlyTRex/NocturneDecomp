; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0045df80(CDrawSurface *param_1,int param_2,int param_3,int param_4,char *param_5)
;
; Local Variables:
; undefined        Stack[-0x1014]:1  local_1014
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0045e370 at 0045e911
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_0045df20
;   crt_stdio.c_vsprintf_FUN_00563a08
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045df80
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInAreaPrintf_FUN_0045df80
    PUSH ESI                            ; 0045df81
    PUSH EDI                            ; 0045df82
    PUSH EBP                            ; 0045df83
    SUB ESP,0x1004                      ; 0045df84
    LEA EAX,[ESP + 0x102c]              ; 0045df8a
    MOV dword ptr [ESP + 0x1000],EAX    ; 0045df91
    LEA EAX,[ESP + 0x1000]              ; 0045df98
    PUSH EAX                            ; 0045df9f
    MOV EDX,dword ptr [ESP + 0x102c]    ; 0045dfa0
    PUSH EDX                            ; 0045dfa7
    LEA EAX,[ESP + 0x8]                 ; 0045dfa8
    PUSH EAX                            ; 0045dfac
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 0045dfad
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_00563a08(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0045dfb2
    MOV EBX,dword ptr [ESP + 0x1024]    ; 0045dfb5
    PUSH EBX                            ; 0045dfbc
    MOV ESI,dword ptr [ESP + 0x1024]    ; 0045dfbd
    PUSH ESI                            ; 0045dfc4
    MOV EDI,dword ptr [ESP + 0x1024]    ; 0045dfc5
    PUSH EDI                            ; 0045dfcc
    LEA EAX,[ESP + 0xc]                 ; 0045dfcd
    PUSH EAX                            ; 0045dfd1
    MOV EBP,dword ptr [ESP + 0x1028]    ; 0045dfd2
    XOR ECX,ECX                         ; 0045dfd9
    PUSH EBP                            ; 0045dfdb
    MOV dword ptr [ESP + 0x1014],ECX    ; 0045dfdc
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_0045df20 ; 0045dfe3
        ;   XREF to: 0045df20 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_0045df20(CDrawSurface * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x14                        ; 0045dfe8
    ADD ESP,0x1004                      ; 0045dfeb
    POP EBP                             ; 0045dff1
    POP EDI                             ; 0045dff2
    POP ESI                             ; 0045dff3
    POP EBX                             ; 0045dff4
    RET                                 ; 0045dff5

