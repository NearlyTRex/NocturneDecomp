; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_00468940(CDrawSurface *param_1,int param_2,undefined4 param_3)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00468900
;   crt_stdio.c_vsprintf_FUN_005b7768
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468940
        ;   Label: cockpit_drawsurf.cpp_FUN_00468940
    PUSH ESI                            ; 00468941
    SUB ESP,0x1004                      ; 00468942
    LEA EAX,[ESP + 0x101c]              ; 00468948
    MOV dword ptr [ESP + 0x1000],EAX    ; 0046894f
    LEA EAX,[ESP + 0x1000]              ; 00468956
    PUSH EAX                            ; 0046895d
    MOV EDX,dword ptr [ESP + 0x101c]    ; 0046895e
    PUSH EDX                            ; 00468965
    LEA EAX,[ESP + 0x8]                 ; 00468966
    PUSH EAX                            ; 0046896a
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 0046896b
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005b7768()
    ADD ESP,0xc                         ; 00468970
    MOV EBX,dword ptr [ESP + 0x1014]    ; 00468973
    PUSH EBX                            ; 0046897a
    LEA EAX,[ESP + 0x4]                 ; 0046897b
    PUSH EAX                            ; 0046897f
    MOV ESI,dword ptr [ESP + 0x1018]    ; 00468980
    XOR ECX,ECX                         ; 00468987
    PUSH ESI                            ; 00468989
    MOV dword ptr [ESP + 0x100c],ECX    ; 0046898a
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00468900 ; 00468991
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00468900(CDrawSurface * this_ptr, char * param_2, int param_3)
    ADD ESP,0xc                         ; 00468996
    ADD ESP,0x1004                      ; 00468999
    POP ESI                             ; 0046899f
    POP EBX                             ; 004689a0
    RET                                 ; 004689a1

