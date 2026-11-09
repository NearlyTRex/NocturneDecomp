; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_00480ca0(CDrawSurface *param_1,int param_2,int param_3,int param_4,undefined4 param_5)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00481090 at 00481631
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_00480c40
;   crt_stdio.c_vsprintf_FUN_005bfb18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480ca0
        ;   Label: cockpit_drawsurf.cpp_FUN_00480ca0
    PUSH ESI                            ; 00480ca1
    PUSH EDI                            ; 00480ca2
    PUSH EBP                            ; 00480ca3
    SUB ESP,0x1004                      ; 00480ca4
    LEA EAX,[ESP + 0x102c]              ; 00480caa
    MOV dword ptr [ESP + 0x1000],EAX    ; 00480cb1
    LEA EAX,[ESP + 0x1000]              ; 00480cb8
    PUSH EAX                            ; 00480cbf
    MOV EDX,dword ptr [ESP + 0x102c]    ; 00480cc0
    PUSH EDX                            ; 00480cc7
    LEA EAX,[ESP + 0x8]                 ; 00480cc8
    PUSH EAX                            ; 00480ccc
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 00480ccd
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005bfb18()
    ADD ESP,0xc                         ; 00480cd2
    MOV EBX,dword ptr [ESP + 0x1024]    ; 00480cd5
    PUSH EBX                            ; 00480cdc
    MOV ESI,dword ptr [ESP + 0x1024]    ; 00480cdd
    PUSH ESI                            ; 00480ce4
    MOV EDI,dword ptr [ESP + 0x1024]    ; 00480ce5
    PUSH EDI                            ; 00480cec
    LEA EAX,[ESP + 0xc]                 ; 00480ced
    PUSH EAX                            ; 00480cf1
    MOV EBP,dword ptr [ESP + 0x1028]    ; 00480cf2
    XOR ECX,ECX                         ; 00480cf9
    PUSH EBP                            ; 00480cfb
    MOV dword ptr [ESP + 0x1014],ECX    ; 00480cfc
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_00480c40 ; 00480d03
        ;   XREF to: 00480c40 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInArea_FUN_00480c40(CDrawSurface * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x14                        ; 00480d08
    ADD ESP,0x1004                      ; 00480d0b
    POP EBP                             ; 00480d11
    POP EDI                             ; 00480d12
    POP ESI                             ; 00480d13
    POP EBX                             ; 00480d14
    RET                                 ; 00480d15

