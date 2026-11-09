; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f6d00(undefined4 param_1,undefined4 param_2,ushort *param_3,int param_4,int param_5)
;
;
; XREF[5]:
;   engine_mini3d.cpp_FUN_004f3920 at 004f3b91
;   engine_mini3d.cpp_FUN_004f3c40 at 004f3e4f
;   engine_mini3d.cpp_FUN_004f3ff0 at 004f408a
;   engine_mini3d.cpp_FUN_004f40a0 at 004f43fb
;   engine_mini3d.cpp_FUN_004f8750 at 004f8b78
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01d09b7c
;   undefined4 DAT_0264bca0
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f6850
;   engine_mini3d.cpp_FUN_004f6970
;   engine_mini3d.cpp_FUN_004f6a70
;   engine_mini3d.cpp_FUN_004f7280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6d00
        ;   Label: engine_mini3d.cpp_FUN_004f6d00
    PUSH ESI                            ; 004f6d01
    PUSH EDI                            ; 004f6d02
    MOV ESI,dword ptr [ESP + 0x14]      ; 004f6d03
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f6d07
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004f6d0b
    CMP dword ptr [ESP + 0x20],0x0      ; 004f6d0f
    JNZ 0x004f6d91                      ; 004f6d14
        ;   XREF to: 004f6d91 (CONDITIONAL_JUMP)  ; LAB_004f6d91
    CMP dword ptr [0x0264bca0],0x0      ; 004f6d1a | DAT_0264bca0
    JZ 0x004f6d2c                       ; 004f6d21
        ;   XREF to: 004f6d2c (CONDITIONAL_JUMP)  ; LAB_004f6d2c
    CMP dword ptr [0x01c37788],0x0      ; 004f6d23 | DAT_01c37788
    JNZ 0x004f6d74                      ; 004f6d2a
        ;   XREF to: 004f6d74 (CONDITIONAL_JUMP)  ; LAB_004f6d74
    XOR ESI,ESI                         ; 004f6d2c
        ;   Label: LAB_004f6d2c
    TEST EDI,EDI                        ; 004f6d2e
    JLE 0x004f6d70                      ; 004f6d30
        ;   XREF to: 004f6d70 (CONDITIONAL_JUMP)  ; LAB_004f6d70
    XOR EAX,EAX                         ; 004f6d32
        ;   Label: LAB_004f6d32
    MOV AX,word ptr [EBX + 0x4]         ; 004f6d34
    MOV EDX,EAX                         ; 004f6d38
    MOV EAX,[0x01d09b7c]                ; 004f6d3a | DAT_01d09b7c
    SHL EDX,0x6                         ; 004f6d3f
    ADD EDX,EAX                         ; 004f6d42
    PUSH EDX                            ; 004f6d44
    XOR EDX,EDX                         ; 004f6d45
    MOV DX,word ptr [EBX + 0x2]         ; 004f6d47
    SHL EDX,0x6                         ; 004f6d4b
    ADD EDX,EAX                         ; 004f6d4e
    PUSH EDX                            ; 004f6d50
    XOR EDX,EDX                         ; 004f6d51
    MOV DX,word ptr [EBX]               ; 004f6d53
    SHL EDX,0x6                         ; 004f6d56
    ADD EAX,EDX                         ; 004f6d59
    PUSH EAX                            ; 004f6d5b
    ADD EBX,0x6                         ; 004f6d5c
    INC ESI                             ; 004f6d5f
    CALL engine_mini3d.cpp_FUN_004f7280 ; 004f6d60
        ;   XREF to: 004f7280 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7280()
    ADD ESP,0xc                         ; 004f6d65
    CMP ESI,EDI                         ; 004f6d68
    JL 0x004f6d32                       ; 004f6d6a
        ;   XREF to: 004f6d32 (CONDITIONAL_JUMP)  ; LAB_004f6d32
    LEA EAX,[EAX]                       ; 004f6d6c
    POP EDI                             ; 004f6d70
        ;   Label: LAB_004f6d70
    POP ESI                             ; 004f6d71
    POP EBX                             ; 004f6d72
    RET                                 ; 004f6d73
    MOV EAX,[0x01c38b54]                ; 004f6d74 | DAT_01c38b54
        ;   Label: LAB_004f6d74
    PUSH EAX                            ; 004f6d79
    PUSH EDI                            ; 004f6d7a
    PUSH EBX                            ; 004f6d7b
    PUSH ESI                            ; 004f6d7c
    MOV EDX,dword ptr [0x01d09b7c]      ; 004f6d7d | DAT_01d09b7c
    PUSH EDX                            ; 004f6d83
    CALL dword ptr [0x0264bca0]         ; 004f6d84 | DAT_0264bca0
    ADD ESP,0x14                        ; 004f6d8a
    POP EDI                             ; 004f6d8d
    POP ESI                             ; 004f6d8e
    POP EBX                             ; 004f6d8f
    RET                                 ; 004f6d90
    PUSH ESI                            ; 004f6d91
        ;   Label: LAB_004f6d91
    CALL engine_mini3d.cpp_FUN_004f6850 ; 004f6d92
        ;   XREF to: 004f6850 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f6850()
    ADD ESP,0x4                         ; 004f6d97
    XOR ESI,ESI                         ; 004f6d9a
    TEST EDI,EDI                        ; 004f6d9c
    JLE 0x004f6de0                      ; 004f6d9e
        ;   XREF to: 004f6de0 (CONDITIONAL_JUMP)  ; LAB_004f6de0
    XOR EAX,EAX                         ; 004f6da0
        ;   Label: LAB_004f6da0
    MOV AX,word ptr [EBX + 0x4]         ; 004f6da2
    MOV EDX,EAX                         ; 004f6da6
    MOV EAX,[0x01d09b7c]                ; 004f6da8 | DAT_01d09b7c
    SHL EDX,0x6                         ; 004f6dad
    ADD EDX,EAX                         ; 004f6db0
    PUSH EDX                            ; 004f6db2
    XOR EDX,EDX                         ; 004f6db3
    MOV DX,word ptr [EBX + 0x2]         ; 004f6db5
    SHL EDX,0x6                         ; 004f6db9
    ADD EDX,EAX                         ; 004f6dbc
    PUSH EDX                            ; 004f6dbe
    XOR EDX,EDX                         ; 004f6dbf
    MOV DX,word ptr [EBX]               ; 004f6dc1
    SHL EDX,0x6                         ; 004f6dc4
    ADD EAX,EDX                         ; 004f6dc7
    PUSH EAX                            ; 004f6dc9
    ADD EBX,0x6                         ; 004f6dca
    INC ESI                             ; 004f6dcd
    CALL engine_mini3d.cpp_FUN_004f6a70 ; 004f6dce
        ;   XREF to: 004f6a70 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f6a70()
    ADD ESP,0xc                         ; 004f6dd3
    CMP ESI,EDI                         ; 004f6dd6
    JL 0x004f6da0                       ; 004f6dd8
        ;   XREF to: 004f6da0 (CONDITIONAL_JUMP)  ; LAB_004f6da0
    LEA EAX,[EAX]                       ; 004f6dda
    CALL engine_mini3d.cpp_FUN_004f6970 ; 004f6de0
        ;   XREF to: 004f6970 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f6970()
        ;   Label: LAB_004f6de0
    POP EDI                             ; 004f6de5
    POP ESI                             ; 004f6de6
    POP EBX                             ; 004f6de7
    RET                                 ; 004f6de8

