; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00492d40(int param_1,int param_2,int param_3,int param_4,uint param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_01c3f544
;   undefined4 DAT_01c4f020
;
; Called Functions:
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_mini3d.cpp_FUN_00517d50
;   engine_mini3d.cpp_FUN_00518010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492d40
        ;   Label: shape_edittool.cpp_FUN_00492d40
    MOV EAX,dword ptr [ESP + 0x18]      ; 00492d41
    MOV EDX,dword ptr [0x01c3f544]      ; 00492d45 | DAT_01c3f544
    TEST EDX,EDX                        ; 00492d4b
    JZ 0x00492db2                       ; 00492d4d
        ;   XREF to: 00492db2 (CONDITIONAL_JUMP)  ; LAB_00492db2
    JNZ 0x00492d74                      ; 00492d4f
        ;   XREF to: 00492d74 (CONDITIONAL_JUMP)  ; LAB_00492d74
    MOV [0x01c4f020],EAX                ; 00492d51 | DAT_01c4f020
    MOV EAX,dword ptr [ESP + 0x14]      ; 00492d56
        ;   Label: LAB_00492d56
    PUSH EAX                            ; 00492d5a
    MOV EDX,dword ptr [ESP + 0x14]      ; 00492d5b
    PUSH EDX                            ; 00492d5f
    MOV ECX,dword ptr [ESP + 0x14]      ; 00492d60
    PUSH ECX                            ; 00492d64
    MOV EBX,dword ptr [ESP + 0x14]      ; 00492d65
    PUSH EBX                            ; 00492d69
    CALL engine_mini3d.cpp_FUN_00518010 ; 00492d6a
        ;   XREF to: 00518010 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00518010()
    ADD ESP,0x10                        ; 00492d6f
    POP EBX                             ; 00492d72
    RET                                 ; 00492d73
    AND EAX,0xff                        ; 00492d74
        ;   Label: LAB_00492d74
    MOV EDX,EAX                         ; 00492d79
    SHL EAX,0x2                         ; 00492d7b
    SUB EAX,EDX                         ; 00492d7e
    XOR EDX,EDX                         ; 00492d80
    MOV DL,byte ptr [EAX + 0x1c4e9f9]   ; 00492d82
    MOV ECX,EDX                         ; 00492d88
    XOR EDX,EDX                         ; 00492d8a
    MOV DL,byte ptr [EAX + 0x1c4e9f8]   ; 00492d8c
    SHL ECX,0x8                         ; 00492d92
    SHL EDX,0x10                        ; 00492d95
    MOV AL,byte ptr [EAX + 0x1c4e9fa]   ; 00492d98
    OR EDX,ECX                          ; 00492d9e
    AND EAX,0xff                        ; 00492da0
    OR EAX,EDX                          ; 00492da5
    PUSH EAX                            ; 00492da7
    CALL engine_mini3d.cpp_FUN_00517d50 ; 00492da8
        ;   XREF to: 00517d50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00517d50()
    ADD ESP,0x4                         ; 00492dad
    JMP 0x00492d56                      ; 00492db0
        ;   XREF to: 00492d56 (UNCONDITIONAL_JUMP)  ; LAB_00492d56
    PUSH EDI                            ; 00492db2
        ;   Label: LAB_00492db2
    PUSH ESI                            ; 00492db3
    PUSH EAX                            ; 00492db4
    MOV ECX,dword ptr [ESP + 0x20]      ; 00492db5
    PUSH ECX                            ; 00492db9
    MOV EBX,dword ptr [ESP + 0x20]      ; 00492dba
    PUSH EBX                            ; 00492dbe
    MOV ESI,dword ptr [ESP + 0x20]      ; 00492dbf
    PUSH ESI                            ; 00492dc3
    MOV EDI,dword ptr [ESP + 0x20]      ; 00492dc4
    PUSH EDI                            ; 00492dc8
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 00492dc9
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 00492dce
    POP ESI                             ; 00492dd1
    POP EDI                             ; 00492dd2
    POP EBX                             ; 00492dd3
    RET                                 ; 00492dd4

