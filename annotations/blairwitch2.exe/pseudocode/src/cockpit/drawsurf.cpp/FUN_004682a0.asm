; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_004682a0(CDrawSurface *param_1,int param_2,int param_3,undefined4 param_4)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_FUN_00468b80 at 00469000
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00468240
;   crt_stdio.c_vsprintf_FUN_005b7768
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004682a0
        ;   Label: cockpit_drawsurf.cpp_FUN_004682a0
    PUSH ESI                            ; 004682a1
    PUSH EDI                            ; 004682a2
    SUB ESP,0x1004                      ; 004682a3
    LEA EAX,[ESP + 0x1024]              ; 004682a9
    MOV dword ptr [ESP + 0x1000],EAX    ; 004682b0
    LEA EAX,[ESP + 0x1000]              ; 004682b7
    PUSH EAX                            ; 004682be
    MOV EDX,dword ptr [ESP + 0x1024]    ; 004682bf
    PUSH EDX                            ; 004682c6
    LEA EAX,[ESP + 0x8]                 ; 004682c7
    PUSH EAX                            ; 004682cb
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 004682cc
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005b7768()
    ADD ESP,0xc                         ; 004682d1
    MOV EBX,dword ptr [ESP + 0x101c]    ; 004682d4
    PUSH EBX                            ; 004682db
    MOV ESI,dword ptr [ESP + 0x101c]    ; 004682dc
    PUSH ESI                            ; 004682e3
    LEA EAX,[ESP + 0x8]                 ; 004682e4
    PUSH EAX                            ; 004682e8
    MOV EDI,dword ptr [ESP + 0x1020]    ; 004682e9
    XOR ECX,ECX                         ; 004682f0
    PUSH EDI                            ; 004682f2
    MOV dword ptr [ESP + 0x1010],ECX    ; 004682f3
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00468240 ; 004682fa
        ;   XREF to: 00468240 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00468240(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 004682ff
    ADD ESP,0x1004                      ; 00468302
    POP EDI                             ; 00468308
    POP ESI                             ; 00468309
    POP EBX                             ; 0046830a
    RET                                 ; 0046830b

