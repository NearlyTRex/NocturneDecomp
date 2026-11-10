; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_draw320x200SizeDot_FUN_00402ade(int param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01c6b598
;   undefined4 DAT_01c6b59c
;   undefined4 DAT_01c6b5a0
;   undefined4 DAT_01c6b5a4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_2d.c_plotPixel_FUN_00401130
;   engine_2d.c_project3DPointToScreen_FUN_00401780
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 00402ade
        ;   Label: engine_2d.c_draw320x200SizeDot_FUN_00402ade
    PUSH EBX                            ; 00402ae0
    PUSH ESI                            ; 00402ae1
    PUSH EDI                            ; 00402ae2
    PUSH EBP                            ; 00402ae3
    MOV EAX,dword ptr [ESP + 0x14]      ; 00402ae4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00402ae8
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00402aec
    TEST ECX,ECX                        ; 00402af0
    JLE 0x00402b31                      ; 00402af2
        ;   XREF to: 00402b31 (CONDITIONAL_JUMP)  ; LAB_00402b31
    CMP EAX,ECX                         ; 00402af4
    JG 0x00402b31                       ; 00402af6
        ;   XREF to: 00402b31 (CONDITIONAL_JUMP)  ; LAB_00402b31
    MOV EDX,ECX                         ; 00402af8
    NEG EDX                             ; 00402afa
    CMP EAX,EDX                         ; 00402afc
    JL 0x00402b31                       ; 00402afe
        ;   XREF to: 00402b31 (CONDITIONAL_JUMP)  ; LAB_00402b31
    CMP ESI,ECX                         ; 00402b00
    JG 0x00402b31                       ; 00402b02
        ;   XREF to: 00402b31 (CONDITIONAL_JUMP)  ; LAB_00402b31
    CMP ESI,EDX                         ; 00402b04
    JL 0x00402b31                       ; 00402b06
        ;   XREF to: 00402b31 (CONDITIONAL_JUMP)  ; LAB_00402b31
    MOV EDI,dword ptr [0x005fba1c]      ; 00402b08 | DAT_005fba1c
    CMP EDI,0x190                       ; 00402b0e
    JNC 0x00402c24                      ; 00402b14
        ;   XREF to: 00402c24 (CONDITIONAL_JUMP)  ; LAB_00402c24
    CMP EDI,0xc8                        ; 00402b1a
    JNZ 0x00402c36                      ; 00402b20
        ;   XREF to: 00402c36 (CONDITIONAL_JUMP)  ; LAB_00402c36
    PUSH ECX                            ; 00402b26
    PUSH ESI                            ; 00402b27
    PUSH EAX                            ; 00402b28
    CALL engine_2d.c_project3DPointToScreen_FUN_00401780 ; 00402b29
        ;   XREF to: 00401780 (UNCONDITIONAL_CALL)  ; void engine_2d.c_project3DPointToScreen_FUN_00401780(int x_3d, int y_3d, int z_depth)
    ADD ESP,0xc                         ; 00402b2e
    POP EBP                             ; 00402b31
        ;   Label: LAB_00402b31
    POP EDI                             ; 00402b32
    POP ESI                             ; 00402b33
    POP EBX                             ; 00402b34
    RET                                 ; 00402b35
    MOV EDX,dword ptr [0x01c6b598]      ; 00402b36 | DAT_01c6b598
        ;   Label: LAB_00402b36
    MOV EBX,ECX                         ; 00402b3c
    IMUL EDX                            ; 00402b3e
    IDIV EBX                            ; 00402b40
    MOV EBX,dword ptr [0x01c6b5a0]      ; 00402b42 | DAT_01c6b5a0
    MOV EDX,dword ptr [0x01c6b59c]      ; 00402b48 | DAT_01c6b59c
    LEA EDI,[EAX + EBX*0x1]             ; 00402b4e
    MOV EBX,ECX                         ; 00402b51
    MOV EAX,ESI                         ; 00402b53
    IMUL EDX                            ; 00402b55
    IDIV EBX                            ; 00402b57
    MOV ESI,dword ptr [0x01c6b5a4]      ; 00402b59 | DAT_01c6b5a4
    ADD ESI,EAX                         ; 00402b5f
    SAR EDI,0x10                        ; 00402b61
    SAR ESI,0x10                        ; 00402b64
    TEST EDI,EDI                        ; 00402b67
    JL 0x00402b31                       ; 00402b69
        ;   XREF to: 00402b31 (CONDITIONAL_JUMP)  ; LAB_00402b31
    CMP EDI,0x13f                       ; 00402b6b
    JG 0x00402b31                       ; 00402b71
        ;   XREF to: 00402b31 (CONDITIONAL_JUMP)  ; LAB_00402b31
    TEST ESI,ESI                        ; 00402b73
    JL 0x00402b31                       ; 00402b75
        ;   XREF to: 00402b31 (CONDITIONAL_JUMP)  ; LAB_00402b31
    CMP ESI,0x18e                       ; 00402b77
    JG 0x00402b31                       ; 00402b7d
        ;   XREF to: 00402b31 (CONDITIONAL_JUMP)  ; LAB_00402b31
    PUSH ESI                            ; 00402b7f
    PUSH EDI                            ; 00402b80
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00402b81
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00402b86
    INC ESI                             ; 00402b89
    PUSH ESI                            ; 00402b8a
    PUSH EDI                            ; 00402b8b
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00402b8c
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00402b91
    POP EBP                             ; 00402b94
    POP EDI                             ; 00402b95
    POP ESI                             ; 00402b96
    POP EBX                             ; 00402b97
    RET                                 ; 00402b98
    MOV EDX,dword ptr [0x01c6b598]      ; 00402b99 | DAT_01c6b598
        ;   Label: LAB_00402b99
    MOV EBX,ECX                         ; 00402b9f
    IMUL EDX                            ; 00402ba1
    IDIV EBX                            ; 00402ba3
    MOV EDX,dword ptr [0x01c6b5a0]      ; 00402ba5 | DAT_01c6b5a0
    MOV EBX,ECX                         ; 00402bab
    LEA EDI,[EAX + EDX*0x1]             ; 00402bad
    MOV EDX,dword ptr [0x01c6b59c]      ; 00402bb0 | DAT_01c6b59c
    MOV EAX,ESI                         ; 00402bb6
    IMUL EDX                            ; 00402bb8
    IDIV EBX                            ; 00402bba
    MOV ECX,dword ptr [0x01c6b5a4]      ; 00402bbc | DAT_01c6b5a4
    LEA ESI,[EAX + ECX*0x1]             ; 00402bc2
    SAR EDI,0x10                        ; 00402bc5
    SAR ESI,0x10                        ; 00402bc8
    TEST EDI,EDI                        ; 00402bcb
    JL 0x00402b31                       ; 00402bcd
        ;   XREF to: 00402b31 (CONDITIONAL_JUMP)  ; LAB_00402b31
    CMP EDI,0x27e                       ; 00402bd3
    JG 0x00402b31                       ; 00402bd9
        ;   XREF to: 00402b31 (CONDITIONAL_JUMP)  ; LAB_00402b31
    TEST ESI,ESI                        ; 00402bdf
    JL 0x00402b31                       ; 00402be1
        ;   XREF to: 00402b31 (CONDITIONAL_JUMP)  ; LAB_00402b31
    CMP ESI,0x1de                       ; 00402be7
    JG 0x00402b31                       ; 00402bed
        ;   XREF to: 00402b31 (CONDITIONAL_JUMP)  ; LAB_00402b31
    PUSH ESI                            ; 00402bf3
    PUSH EDI                            ; 00402bf4
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00402bf5
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00402bfa
    PUSH ESI                            ; 00402bfd
    LEA EBX,[EDI + 0x1]                 ; 00402bfe
    PUSH EBX                            ; 00402c01
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00402c02
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00402c07
    INC ESI                             ; 00402c0a
    PUSH ESI                            ; 00402c0b
    PUSH EBX                            ; 00402c0c
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00402c0d
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00402c12
    PUSH ESI                            ; 00402c15
    PUSH EDI                            ; 00402c16
    CALL engine_2d.c_plotPixel_FUN_00401130 ; 00402c17
        ;   XREF to: 00401130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401130(int x, int y)
    ADD ESP,0x8                         ; 00402c1c
    POP EBP                             ; 00402c1f
    POP EDI                             ; 00402c20
    POP ESI                             ; 00402c21
    POP EBX                             ; 00402c22
    RET                                 ; 00402c23
    JBE 0x00402b36                      ; 00402c24
        ;   XREF to: 00402b36 (CONDITIONAL_JUMP)  ; LAB_00402b36
        ;   Label: LAB_00402c24
    CMP EDI,0x1e0                       ; 00402c2a
    JZ 0x00402b99                       ; 00402c30
        ;   XREF to: 00402b99 (CONDITIONAL_JUMP)  ; LAB_00402b99
    MOV EDI,0x5b511b                    ; 00402c36
        ;   Label: LAB_00402c36
    MOV EBP,0x7da                       ; 00402c3b
    PUSH 0x5b512a                       ; 00402c40
    MOV dword ptr [0x01d71de0],EDI      ; 00402c45 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBP      ; 00402c4b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00402c51
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00402c56
    POP EBP                             ; 00402c59
    POP EDI                             ; 00402c5a
    POP ESI                             ; 00402c5b
    POP EBX                             ; 00402c5c
    RET                                 ; 00402c5d

