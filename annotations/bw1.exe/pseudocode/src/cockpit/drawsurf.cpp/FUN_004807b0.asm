; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_004807b0(CDrawSurface *param_1,int param_2,int param_3,undefined4 param_4)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00481090 at 00481510
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00480750
;   crt_stdio.c_vsprintf_FUN_005bfb18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004807b0
        ;   Label: cockpit_drawsurf.cpp_FUN_004807b0
    PUSH ESI                            ; 004807b1
    PUSH EDI                            ; 004807b2
    SUB ESP,0x1004                      ; 004807b3
    LEA EAX,[ESP + 0x1024]              ; 004807b9
    MOV dword ptr [ESP + 0x1000],EAX    ; 004807c0
    LEA EAX,[ESP + 0x1000]              ; 004807c7
    PUSH EAX                            ; 004807ce
    MOV EDX,dword ptr [ESP + 0x1024]    ; 004807cf
    PUSH EDX                            ; 004807d6
    LEA EAX,[ESP + 0x8]                 ; 004807d7
    PUSH EAX                            ; 004807db
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 004807dc
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005bfb18()
    ADD ESP,0xc                         ; 004807e1
    MOV EBX,dword ptr [ESP + 0x101c]    ; 004807e4
    PUSH EBX                            ; 004807eb
    MOV ESI,dword ptr [ESP + 0x101c]    ; 004807ec
    PUSH ESI                            ; 004807f3
    LEA EAX,[ESP + 0x8]                 ; 004807f4
    PUSH EAX                            ; 004807f8
    MOV EDI,dword ptr [ESP + 0x1020]    ; 004807f9
    XOR ECX,ECX                         ; 00480800
    PUSH EDI                            ; 00480802
    MOV dword ptr [ESP + 0x1010],ECX    ; 00480803
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00480750 ; 0048080a
        ;   XREF to: 00480750 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00480750(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 0048080f
    ADD ESP,0x1004                      ; 00480812
    POP EDI                             ; 00480818
    POP ESI                             ; 00480819
    POP EBX                             ; 0048081a
    RET                                 ; 0048081b

