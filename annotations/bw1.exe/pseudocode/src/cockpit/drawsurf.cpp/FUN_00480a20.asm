; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_00480a20(CDrawSurface *param_1,int param_2,int param_3,undefined4 param_4)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00481090 at 00481578
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_004809c0
;   crt_stdio.c_vsprintf_FUN_005bfb18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480a20
        ;   Label: cockpit_drawsurf.cpp_FUN_00480a20
    PUSH ESI                            ; 00480a21
    PUSH EDI                            ; 00480a22
    SUB ESP,0x1004                      ; 00480a23
    LEA EAX,[ESP + 0x1024]              ; 00480a29
    MOV dword ptr [ESP + 0x1000],EAX    ; 00480a30
    LEA EAX,[ESP + 0x1000]              ; 00480a37
    PUSH EAX                            ; 00480a3e
    MOV EDX,dword ptr [ESP + 0x1024]    ; 00480a3f
    PUSH EDX                            ; 00480a46
    LEA EAX,[ESP + 0x8]                 ; 00480a47
    PUSH EAX                            ; 00480a4b
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 00480a4c
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005bfb18()
    ADD ESP,0xc                         ; 00480a51
    MOV EBX,dword ptr [ESP + 0x101c]    ; 00480a54
    PUSH EBX                            ; 00480a5b
    MOV ESI,dword ptr [ESP + 0x101c]    ; 00480a5c
    PUSH ESI                            ; 00480a63
    LEA EAX,[ESP + 0x8]                 ; 00480a64
    PUSH EAX                            ; 00480a68
    MOV EDI,dword ptr [ESP + 0x1020]    ; 00480a69
    XOR ECX,ECX                         ; 00480a70
    PUSH EDI                            ; 00480a72
    MOV dword ptr [ESP + 0x1010],ECX    ; 00480a73
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_004809c0 ; 00480a7a
        ;   XREF to: 004809c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVCentered_FUN_004809c0(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 00480a7f
    ADD ESP,0x1004                      ; 00480a82
    POP EDI                             ; 00480a88
    POP ESI                             ; 00480a89
    POP EBX                             ; 00480a8a
    RET                                 ; 00480a8b

