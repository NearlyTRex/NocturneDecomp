; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_00480950(CDrawSurface *param_1,int param_2,int param_3,undefined4 param_4)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00481090 at 00481555
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_004808f0
;   crt_stdio.c_vsprintf_FUN_005bfb18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480950
        ;   Label: cockpit_drawsurf.cpp_FUN_00480950
    PUSH ESI                            ; 00480951
    PUSH EDI                            ; 00480952
    SUB ESP,0x1004                      ; 00480953
    LEA EAX,[ESP + 0x1024]              ; 00480959
    MOV dword ptr [ESP + 0x1000],EAX    ; 00480960
    LEA EAX,[ESP + 0x1000]              ; 00480967
    PUSH EAX                            ; 0048096e
    MOV EDX,dword ptr [ESP + 0x1024]    ; 0048096f
    PUSH EDX                            ; 00480976
    LEA EAX,[ESP + 0x8]                 ; 00480977
    PUSH EAX                            ; 0048097b
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 0048097c
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005bfb18()
    ADD ESP,0xc                         ; 00480981
    MOV EBX,dword ptr [ESP + 0x101c]    ; 00480984
    PUSH EBX                            ; 0048098b
    MOV ESI,dword ptr [ESP + 0x101c]    ; 0048098c
    PUSH ESI                            ; 00480993
    LEA EAX,[ESP + 0x8]                 ; 00480994
    PUSH EAX                            ; 00480998
    MOV EDI,dword ptr [ESP + 0x1020]    ; 00480999
    XOR ECX,ECX                         ; 004809a0
    PUSH EDI                            ; 004809a2
    MOV dword ptr [ESP + 0x1010],ECX    ; 004809a3
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_004808f0 ; 004809aa
        ;   XREF to: 004808f0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_004808f0(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 004809af
    ADD ESP,0x1004                      ; 004809b2
    POP EDI                             ; 004809b8
    POP ESI                             ; 004809b9
    POP EBX                             ; 004809ba
    RET                                 ; 004809bb

