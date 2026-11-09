; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_00468440(CDrawSurface *param_1,int param_2,int param_3,undefined4 param_4)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00468b80 at 00469045
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_004683e0
;   crt_stdio.c_vsprintf_FUN_005b7768
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468440
        ;   Label: cockpit_drawsurf.cpp_FUN_00468440
    PUSH ESI                            ; 00468441
    PUSH EDI                            ; 00468442
    SUB ESP,0x1004                      ; 00468443
    LEA EAX,[ESP + 0x1024]              ; 00468449
    MOV dword ptr [ESP + 0x1000],EAX    ; 00468450
    LEA EAX,[ESP + 0x1000]              ; 00468457
    PUSH EAX                            ; 0046845e
    MOV EDX,dword ptr [ESP + 0x1024]    ; 0046845f
    PUSH EDX                            ; 00468466
    LEA EAX,[ESP + 0x8]                 ; 00468467
    PUSH EAX                            ; 0046846b
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 0046846c
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005b7768()
    ADD ESP,0xc                         ; 00468471
    MOV EBX,dword ptr [ESP + 0x101c]    ; 00468474
    PUSH EBX                            ; 0046847b
    MOV ESI,dword ptr [ESP + 0x101c]    ; 0046847c
    PUSH ESI                            ; 00468483
    LEA EAX,[ESP + 0x8]                 ; 00468484
    PUSH EAX                            ; 00468488
    MOV EDI,dword ptr [ESP + 0x1020]    ; 00468489
    XOR ECX,ECX                         ; 00468490
    PUSH EDI                            ; 00468492
    MOV dword ptr [ESP + 0x1010],ECX    ; 00468493
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_004683e0 ; 0046849a
        ;   XREF to: 004683e0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_004683e0(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 0046849f
    ADD ESP,0x1004                      ; 004684a2
    POP EDI                             ; 004684a8
    POP ESI                             ; 004684a9
    POP EBX                             ; 004684aa
    RET                                 ; 004684ab

