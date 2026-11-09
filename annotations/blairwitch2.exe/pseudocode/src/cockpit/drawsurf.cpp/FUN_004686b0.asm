; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_004686b0(CDrawSurface *param_1,int param_2,int param_3,int param_4,undefined4 param_5)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00468b80 at 004690e1
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00468650
;   crt_stdio.c_vsprintf_FUN_005b7768
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004686b0
        ;   Label: cockpit_drawsurf.cpp_FUN_004686b0
    PUSH ESI                            ; 004686b1
    PUSH EDI                            ; 004686b2
    PUSH EBP                            ; 004686b3
    SUB ESP,0x1004                      ; 004686b4
    LEA EAX,[ESP + 0x102c]              ; 004686ba
    MOV dword ptr [ESP + 0x1000],EAX    ; 004686c1
    LEA EAX,[ESP + 0x1000]              ; 004686c8
    PUSH EAX                            ; 004686cf
    MOV EDX,dword ptr [ESP + 0x102c]    ; 004686d0
    PUSH EDX                            ; 004686d7
    LEA EAX,[ESP + 0x8]                 ; 004686d8
    PUSH EAX                            ; 004686dc
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 004686dd
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005b7768()
    ADD ESP,0xc                         ; 004686e2
    MOV EBX,dword ptr [ESP + 0x1024]    ; 004686e5
    PUSH EBX                            ; 004686ec
    MOV ESI,dword ptr [ESP + 0x1024]    ; 004686ed
    PUSH ESI                            ; 004686f4
    MOV EDI,dword ptr [ESP + 0x1024]    ; 004686f5
    PUSH EDI                            ; 004686fc
    LEA EAX,[ESP + 0xc]                 ; 004686fd
    PUSH EAX                            ; 00468701
    MOV EBP,dword ptr [ESP + 0x1028]    ; 00468702
    XOR ECX,ECX                         ; 00468709
    PUSH EBP                            ; 0046870b
    MOV dword ptr [ESP + 0x1014],ECX    ; 0046870c
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00468650 ; 00468713
        ;   XREF to: 00468650 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00468650(CDrawSurface * this_ptr, char * text, int x, int width, ...)
    ADD ESP,0x14                        ; 00468718
    ADD ESP,0x1004                      ; 0046871b
    POP EBP                             ; 00468721
    POP EDI                             ; 00468722
    POP ESI                             ; 00468723
    POP EBX                             ; 00468724
    RET                                 ; 00468725

