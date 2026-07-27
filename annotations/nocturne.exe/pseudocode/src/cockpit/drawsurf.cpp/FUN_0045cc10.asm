; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_drawsurf_cpp_FUN_0045cc10(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)
;
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045cc10
        ;   Label: cockpit_drawsurf.cpp_FUN_0045cc10
    PUSH ESI                            ; 0045cc11
    MOV ECX,dword ptr [ESP + 0x10]      ; 0045cc12
    MOV EBX,dword ptr [ESP + 0x18]      ; 0045cc16
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045cc1a
    ADD EDX,ECX                         ; 0045cc1e
    MOV ECX,dword ptr [ESP + 0x20]      ; 0045cc20
    INC EDX                             ; 0045cc24
    SUB EDX,ECX                         ; 0045cc25
    MOV EAX,EDX                         ; 0045cc27
    SAR EDX,0x1f                        ; 0045cc29
    SUB EAX,EDX                         ; 0045cc2c
    SAR EAX,0x1                         ; 0045cc2e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0045cc30
    ADD EDX,EBX                         ; 0045cc34
    MOV EBX,dword ptr [ESP + 0x24]      ; 0045cc36
    INC EDX                             ; 0045cc3a
    SUB EDX,EBX                         ; 0045cc3b
    MOV ECX,EAX                         ; 0045cc3d
    MOV EAX,EDX                         ; 0045cc3f
    SAR EDX,0x1f                        ; 0045cc41
    SUB EAX,EDX                         ; 0045cc44
    SAR EAX,0x1                         ; 0045cc46
    LEA EDX,[EBX + EAX*0x1 + -0x1]      ; 0045cc48
    PUSH EDX                            ; 0045cc4c
    MOV EDX,dword ptr [ESP + 0x24]      ; 0045cc4d
    ADD EDX,ECX                         ; 0045cc51
    DEC EDX                             ; 0045cc53
    PUSH EDX                            ; 0045cc54
    PUSH EAX                            ; 0045cc55
    PUSH ECX                            ; 0045cc56
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045cc57
    PUSH ESI                            ; 0045cc5b
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10 ; 0045cc5c
        ;   XREF to: 0045cb10 (UNCONDITIONAL_CALL)  ; undefined cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_0045cb10()
    ADD ESP,0x14                        ; 0045cc61
    POP ESI                             ; 0045cc64
    POP EBX                             ; 0045cc65
    RET                                 ; 0045cc66

