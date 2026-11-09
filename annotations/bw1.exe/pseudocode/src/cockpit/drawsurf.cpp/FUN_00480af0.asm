; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_00480af0(CDrawSurface *param_1,int param_2,int param_3,undefined4 param_4)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00481090 at 004815aa
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00480a90
;   crt_stdio.c_vsprintf_FUN_005bfb18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480af0
        ;   Label: cockpit_drawsurf.cpp_FUN_00480af0
    PUSH ESI                            ; 00480af1
    PUSH EDI                            ; 00480af2
    SUB ESP,0x1004                      ; 00480af3
    LEA EAX,[ESP + 0x1024]              ; 00480af9
    MOV dword ptr [ESP + 0x1000],EAX    ; 00480b00
    LEA EAX,[ESP + 0x1000]              ; 00480b07
    PUSH EAX                            ; 00480b0e
    MOV EDX,dword ptr [ESP + 0x1024]    ; 00480b0f
    PUSH EDX                            ; 00480b16
    LEA EAX,[ESP + 0x8]                 ; 00480b17
    PUSH EAX                            ; 00480b1b
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 00480b1c
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005bfb18()
    ADD ESP,0xc                         ; 00480b21
    MOV EBX,dword ptr [ESP + 0x101c]    ; 00480b24
    PUSH EBX                            ; 00480b2b
    MOV ESI,dword ptr [ESP + 0x101c]    ; 00480b2c
    PUSH ESI                            ; 00480b33
    LEA EAX,[ESP + 0x8]                 ; 00480b34
    PUSH EAX                            ; 00480b38
    MOV EDI,dword ptr [ESP + 0x1020]    ; 00480b39
    XOR ECX,ECX                         ; 00480b40
    PUSH EDI                            ; 00480b42
    MOV dword ptr [ESP + 0x1010],ECX    ; 00480b43
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00480a90 ; 00480b4a
        ;   XREF to: 00480a90 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredBoth_FUN_00480a90(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 00480b4f
    ADD ESP,0x1004                      ; 00480b52
    POP EDI                             ; 00480b58
    POP ESI                             ; 00480b59
    POP EBX                             ; 00480b5a
    RET                                 ; 00480b5b

