; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0046a280(CDrawSurface *param_1,int param_2,int param_3,int param_4,undefined4 param_5)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_0046a750 at 0046acb1
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0046a220
;   crt_stdio.c_vsprintf_FUN_005a2898
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a280
        ;   Label: cockpit_drawsurf.cpp_FUN_0046a280
    PUSH ESI                            ; 0046a281
    PUSH EDI                            ; 0046a282
    PUSH EBP                            ; 0046a283
    SUB ESP,0x1004                      ; 0046a284
    LEA EAX,[ESP + 0x102c]              ; 0046a28a
    MOV dword ptr [ESP + 0x1000],EAX    ; 0046a291
    LEA EAX,[ESP + 0x1000]              ; 0046a298
    PUSH EAX                            ; 0046a29f
    MOV EDX,dword ptr [ESP + 0x102c]    ; 0046a2a0
    PUSH EDX                            ; 0046a2a7
    LEA EAX,[ESP + 0x8]                 ; 0046a2a8
    PUSH EAX                            ; 0046a2ac
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 0046a2ad
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005a2898()
    ADD ESP,0xc                         ; 0046a2b2
    MOV EBX,dword ptr [ESP + 0x1024]    ; 0046a2b5
    PUSH EBX                            ; 0046a2bc
    MOV ESI,dword ptr [ESP + 0x1024]    ; 0046a2bd
    PUSH ESI                            ; 0046a2c4
    MOV EDI,dword ptr [ESP + 0x1024]    ; 0046a2c5
    PUSH EDI                            ; 0046a2cc
    LEA EAX,[ESP + 0xc]                 ; 0046a2cd
    PUSH EAX                            ; 0046a2d1
    MOV EBP,dword ptr [ESP + 0x1028]    ; 0046a2d2
    XOR ECX,ECX                         ; 0046a2d9
    PUSH EBP                            ; 0046a2db
    MOV dword ptr [ESP + 0x1014],ECX    ; 0046a2dc
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0046a220 ; 0046a2e3
        ;   XREF to: 0046a220 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_0046a220(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x14                        ; 0046a2e8
    ADD ESP,0x1004                      ; 0046a2eb
    POP EBP                             ; 0046a2f1
    POP EDI                             ; 0046a2f2
    POP ESI                             ; 0046a2f3
    POP EBX                             ; 0046a2f4
    RET                                 ; 0046a2f5

