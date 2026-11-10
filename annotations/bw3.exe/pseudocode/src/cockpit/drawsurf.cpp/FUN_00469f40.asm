; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_00469f40(CDrawSurface *param_1,int param_2,int param_3,undefined4 param_4)
;
;
; XREF[1]:
;   cockpit_drawsurf.cpp_testDrawingSurface_FUN_0046a750 at 0046abf4
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_00469ee0
;   crt_stdio.c_vsprintf_FUN_005a2898
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469f40
        ;   Label: cockpit_drawsurf.cpp_FUN_00469f40
    PUSH ESI                            ; 00469f41
    PUSH EDI                            ; 00469f42
    SUB ESP,0x1004                      ; 00469f43
    LEA EAX,[ESP + 0x1024]              ; 00469f49
    MOV dword ptr [ESP + 0x1000],EAX    ; 00469f50
    LEA EAX,[ESP + 0x1000]              ; 00469f57
    PUSH EAX                            ; 00469f5e
    MOV EDX,dword ptr [ESP + 0x1024]    ; 00469f5f
    PUSH EDX                            ; 00469f66
    LEA EAX,[ESP + 0x8]                 ; 00469f67
    PUSH EAX                            ; 00469f6b
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 00469f6c
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005a2898()
    ADD ESP,0xc                         ; 00469f71
    MOV EBX,dword ptr [ESP + 0x101c]    ; 00469f74
    PUSH EBX                            ; 00469f7b
    MOV ESI,dword ptr [ESP + 0x101c]    ; 00469f7c
    PUSH ESI                            ; 00469f83
    LEA EAX,[ESP + 0x8]                 ; 00469f84
    PUSH EAX                            ; 00469f88
    MOV EDI,dword ptr [ESP + 0x1020]    ; 00469f89
    XOR ECX,ECX                         ; 00469f90
    PUSH EDI                            ; 00469f92
    MOV dword ptr [ESP + 0x1010],ECX    ; 00469f93
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_00469ee0 ; 00469f9a
        ;   XREF to: 00469ee0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedVariant_FUN_00469ee0(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 00469f9f
    ADD ESP,0x1004                      ; 00469fa2
    POP EDI                             ; 00469fa8
    POP ESI                             ; 00469fa9
    POP EBX                             ; 00469faa
    RET                                 ; 00469fab

