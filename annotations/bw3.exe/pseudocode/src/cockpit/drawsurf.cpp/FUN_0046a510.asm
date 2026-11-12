; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0046a510(CDrawSurface *param_1,int param_2,undefined4 param_3)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0046a4d0
;   crt_stdio.c_vsprintf_FUN_005a2898
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a510
        ;   Label: cockpit_drawsurf.cpp_FUN_0046a510
    PUSH ESI                            ; 0046a511
    SUB ESP,0x1004                      ; 0046a512
    LEA EAX,[ESP + 0x101c]              ; 0046a518
    MOV dword ptr [ESP + 0x1000],EAX    ; 0046a51f
    LEA EAX,[ESP + 0x1000]              ; 0046a526
    PUSH EAX                            ; 0046a52d
    MOV EDX,dword ptr [ESP + 0x101c]    ; 0046a52e
    PUSH EDX                            ; 0046a535
    LEA EAX,[ESP + 0x8]                 ; 0046a536
    PUSH EAX                            ; 0046a53a
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 0046a53b
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005a2898()
    ADD ESP,0xc                         ; 0046a540
    MOV EBX,dword ptr [ESP + 0x1014]    ; 0046a543
    PUSH EBX                            ; 0046a54a
    LEA EAX,[ESP + 0x4]                 ; 0046a54b
    PUSH EAX                            ; 0046a54f
    MOV ESI,dword ptr [ESP + 0x1018]    ; 0046a550
    XOR ECX,ECX                         ; 0046a557
    PUSH ESI                            ; 0046a559
    MOV dword ptr [ESP + 0x100c],ECX    ; 0046a55a
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0046a4d0 ; 0046a561
        ;   XREF to: 0046a4d0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_0046a4d0(CDrawSurface * this_ptr, char * param_2, int param_3)
    ADD ESP,0xc                         ; 0046a566
    ADD ESP,0x1004                      ; 0046a569
    POP ESI                             ; 0046a56f
    POP EBX                             ; 0046a570
    RET                                 ; 0046a571

