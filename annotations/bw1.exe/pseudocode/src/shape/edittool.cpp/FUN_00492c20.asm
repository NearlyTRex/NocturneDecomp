; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00492c20(int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_01c3f544
;   undefined4 DAT_01c4f020
;
; Called Functions:
;   engine_2d.c_fillRectWithBorder_FUN_00403250
;   engine_mini3d.cpp_FUN_00517d50
;   engine_mini3d.cpp_FUN_00518010
;   engine_mini3d.cpp_FUN_00518290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492c20
        ;   Label: shape_edittool.cpp_FUN_00492c20
    PUSH ESI                            ; 00492c21
    PUSH EDI                            ; 00492c22
    PUSH EBP                            ; 00492c23
    MOV EBX,dword ptr [ESP + 0x14]      ; 00492c24
    MOV EDI,dword ptr [ESP + 0x18]      ; 00492c28
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00492c2c
    MOV EBP,dword ptr [ESP + 0x20]      ; 00492c30
    MOV EAX,dword ptr [ESP + 0x28]      ; 00492c34
    MOV EDX,dword ptr [0x01c3f544]      ; 00492c38 | DAT_01c3f544
    TEST EDX,EDX                        ; 00492c3e
    JZ 0x00492d26                       ; 00492c40
        ;   XREF to: 00492d26 (CONDITIONAL_JUMP)  ; LAB_00492d26
    JNZ 0x00492ccb                      ; 00492c46
        ;   XREF to: 00492ccb (CONDITIONAL_JUMP)  ; LAB_00492ccb
    MOV [0x01c4f020],EAX                ; 00492c4c | DAT_01c4f020
    LEA EAX,[EBP + 0x1]                 ; 00492c51
        ;   Label: LAB_00492c51
    PUSH EAX                            ; 00492c54
    LEA EAX,[ESI + 0x1]                 ; 00492c55
    PUSH EAX                            ; 00492c58
    LEA EAX,[EDI + -0x1]                ; 00492c59
    PUSH EAX                            ; 00492c5c
    LEA EAX,[EBX + -0x1]                ; 00492c5d
    PUSH EAX                            ; 00492c60
    CALL engine_mini3d.cpp_FUN_00518290 ; 00492c61
        ;   XREF to: 00518290 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00518290()
    MOV ECX,dword ptr [0x01c3f544]      ; 00492c66 | DAT_01c3f544
    ADD ESP,0x10                        ; 00492c6c
    TEST ECX,ECX                        ; 00492c6f
    JZ 0x00492d0c                       ; 00492c71
        ;   XREF to: 00492d0c (CONDITIONAL_JUMP)  ; LAB_00492d0c
    MOV EDX,dword ptr [ESP + 0x24]      ; 00492c77
    AND EDX,0xff                        ; 00492c7b
    LEA EAX,[EDX*0x4 + 0x0]             ; 00492c81
    SUB EAX,EDX                         ; 00492c88
    XOR EDX,EDX                         ; 00492c8a
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 00492c8c
    MOV ECX,EDX                         ; 00492c92
    XOR EDX,EDX                         ; 00492c94
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 00492c96
    SHL ECX,0x8                         ; 00492c9c
    SHL EDX,0x10                        ; 00492c9f
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 00492ca2
    OR EDX,ECX                          ; 00492ca8
    AND EAX,0xff                        ; 00492caa
    OR EDX,EAX                          ; 00492caf
    PUSH EDX                            ; 00492cb1
    CALL engine_mini3d.cpp_FUN_00517d50 ; 00492cb2
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 00492cb7
    PUSH EBP                            ; 00492cba
    PUSH ESI                            ; 00492cbb
    PUSH EDI                            ; 00492cbc
    PUSH EBX                            ; 00492cbd
    CALL engine_mini3d.cpp_FUN_00518010 ; 00492cbe
        ;   XREF to: 00518010 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00518010()
    ADD ESP,0x10                        ; 00492cc3
    POP EBP                             ; 00492cc6
    POP EDI                             ; 00492cc7
    POP ESI                             ; 00492cc8
    POP EBX                             ; 00492cc9
    RET                                 ; 00492cca
    AND EAX,0xff                        ; 00492ccb
        ;   Label: LAB_00492ccb
    MOV EDX,EAX                         ; 00492cd0
    SHL EAX,0x2                         ; 00492cd2
    SUB EAX,EDX                         ; 00492cd5
    XOR EDX,EDX                         ; 00492cd7
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 00492cd9
    MOV ECX,EDX                         ; 00492cdf
    XOR EDX,EDX                         ; 00492ce1
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 00492ce3
    SHL ECX,0x8                         ; 00492ce9
    SHL EDX,0x10                        ; 00492cec
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 00492cef
    OR EDX,ECX                          ; 00492cf5
    AND EAX,0xff                        ; 00492cf7
    OR EAX,EDX                          ; 00492cfc
    PUSH EAX                            ; 00492cfe
    CALL engine_mini3d.cpp_FUN_00517d50 ; 00492cff
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 00492d04
    JMP 0x00492c51                      ; 00492d07
        ;   XREF to: 00492c51 (UNCONDITIONAL_JUMP)  ; LAB_00492c51
    MOV EAX,dword ptr [ESP + 0x24]      ; 00492d0c
        ;   Label: LAB_00492d0c
    MOV [0x01c4f020],EAX                ; 00492d10 | DAT_01c4f020
    PUSH EBP                            ; 00492d15
    PUSH ESI                            ; 00492d16
    PUSH EDI                            ; 00492d17
    PUSH EBX                            ; 00492d18
    CALL engine_mini3d.cpp_FUN_00518010 ; 00492d19
        ;   XREF to: 00518010 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00518010()
    ADD ESP,0x10                        ; 00492d1e
    POP EBP                             ; 00492d21
    POP EDI                             ; 00492d22
    POP ESI                             ; 00492d23
    POP EBX                             ; 00492d24
    RET                                 ; 00492d25
    PUSH EAX                            ; 00492d26
        ;   Label: LAB_00492d26
    MOV ECX,dword ptr [ESP + 0x28]      ; 00492d27
    PUSH ECX                            ; 00492d2b
    PUSH EBP                            ; 00492d2c
    PUSH ESI                            ; 00492d2d
    PUSH EDI                            ; 00492d2e
    PUSH EBX                            ; 00492d2f
    CALL engine_2d.c_fillRectWithBorder_FUN_00403250 ; 00492d30
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectWithBorder_FUN_00403250(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x18                        ; 00492d35
    POP EBP                             ; 00492d38
    POP EDI                             ; 00492d39
    POP ESI                             ; 00492d3a
    POP EBX                             ; 00492d3b
    RET                                 ; 00492d3c

