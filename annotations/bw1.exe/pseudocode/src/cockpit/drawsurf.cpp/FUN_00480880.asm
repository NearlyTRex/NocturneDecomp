; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_00480880(CDrawSurface *param_1,int param_2,int param_3,undefined4 param_4)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00481090 at 00481534
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_00480820
;   crt_stdio.c_vsprintf_FUN_005bfb18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480880
        ;   Label: cockpit_drawsurf.cpp_FUN_00480880
    PUSH ESI                            ; 00480881
    PUSH EDI                            ; 00480882
    SUB ESP,0x1004                      ; 00480883
    LEA EAX,[ESP + 0x1024]              ; 00480889
    MOV dword ptr [ESP + 0x1000],EAX    ; 00480890
    LEA EAX,[ESP + 0x1000]              ; 00480897
    PUSH EAX                            ; 0048089e
    MOV EDX,dword ptr [ESP + 0x1024]    ; 0048089f
    PUSH EDX                            ; 004808a6
    LEA EAX,[ESP + 0x8]                 ; 004808a7
    PUSH EAX                            ; 004808ab
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 004808ac
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005bfb18()
    ADD ESP,0xc                         ; 004808b1
    MOV EBX,dword ptr [ESP + 0x101c]    ; 004808b4
    PUSH EBX                            ; 004808bb
    MOV ESI,dword ptr [ESP + 0x101c]    ; 004808bc
    PUSH ESI                            ; 004808c3
    LEA EAX,[ESP + 0x8]                 ; 004808c4
    PUSH EAX                            ; 004808c8
    MOV EDI,dword ptr [ESP + 0x1020]    ; 004808c9
    XOR ECX,ECX                         ; 004808d0
    PUSH EDI                            ; 004808d2
    MOV dword ptr [ESP + 0x1010],ECX    ; 004808d3
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_00480820 ; 004808da
        ;   XREF to: 00480820 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_00480820(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 004808df
    ADD ESP,0x1004                      ; 004808e2
    POP EDI                             ; 004808e8
    POP ESI                             ; 004808e9
    POP EBX                             ; 004808ea
    RET                                 ; 004808eb

