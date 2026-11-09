; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00512c60(int param_1,int param_2,undefined4 param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d224b4
;   undefined4 DAT_01d227e0
;   undefined4 DAT_01d25f14
;   undefined4 DAT_01e7dac8
;   undefined4 DAT_02c83460
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_mini3d.cpp_FUN_005124f0
;   engine_mini3d.cpp_FUN_00512670
;   engine_mini3d.cpp_FUN_00513260
;   engine_mini3d.cpp_FUN_005140c0
;   engine_mini3d.cpp_FUN_00516c60
;   engine_mini3d.cpp_FUN_00516cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00512c60
        ;   Label: engine_mini3d.cpp_FUN_00512c60
    PUSH ESI                            ; 00512c61
    PUSH EDI                            ; 00512c62
    PUSH EBP                            ; 00512c63
    MOV ESI,dword ptr [ESP + 0x14]      ; 00512c64
    MOV EBX,dword ptr [ESP + 0x20]      ; 00512c68
    MOV EDX,dword ptr [0x01e7dac8]      ; 00512c6c | DAT_01e7dac8
    MOV ECX,dword ptr [0x01d224b4]      ; 00512c72 | DAT_01d224b4
    ADD EDX,EBX                         ; 00512c78
    MOV EBX,dword ptr [ESP + 0x18]      ; 00512c7a
    MOV dword ptr [0x01e7dac8],EDX      ; 00512c7e | DAT_01e7dac8
    ADD ECX,EBX                         ; 00512c84
    MOV EBX,dword ptr [0x01d25f14]      ; 00512c86 | DAT_01d25f14
    MOV dword ptr [0x01d224b4],ECX      ; 00512c8c | DAT_01d224b4
    TEST EBX,EBX                        ; 00512c92
    JNZ 0x00512d7c                      ; 00512c94
        ;   XREF to: 00512d7c (CONDITIONAL_JUMP)  ; LAB_00512d7c
    CMP dword ptr [0x02c83460],0x0      ; 00512c9a | DAT_02c83460
    JZ 0x00512cb0                       ; 00512ca1
        ;   XREF to: 00512cb0 (CONDITIONAL_JUMP)  ; LAB_00512cb0
    CMP dword ptr [0x01c50948],0x0      ; 00512ca3 | DAT_01c50948
    JNZ 0x00512d93                      ; 00512caa
        ;   XREF to: 00512d93 (CONDITIONAL_JUMP)  ; LAB_00512d93
    CALL engine_mini3d.cpp_FUN_005124f0 ; 00512cb0
        ;   XREF to: 005124f0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005124f0()
        ;   Label: LAB_00512cb0
    CALL engine_mini3d.cpp_FUN_00516c60 ; 00512cb5
        ;   XREF to: 00516c60 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00516c60()
    CALL engine_mini3d.cpp_FUN_00512670 ; 00512cba
        ;   XREF to: 00512670 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00512670()
    MOV EAX,dword ptr [ESP + 0x18]      ; 00512cbf
    CMP EAX,0x2710                      ; 00512cc3
    JLE 0x00512cee                      ; 00512cc8
        ;   XREF to: 00512cee (CONDITIONAL_JUMP)  ; LAB_00512cee
    PUSH EAX                            ; 00512cca
    MOV EDX,0x5e8df6                    ; 00512ccb
    MOV ECX,0x7e6                       ; 00512cd0
    PUSH 0x5e8e0b                       ; 00512cd5
    MOV dword ptr [0x01d1d400],EDX      ; 00512cda | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00512ce0 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00512ce6
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00512ceb
    MOV EAX,dword ptr [ESP + 0x18]      ; 00512cee
        ;   Label: LAB_00512cee
    MOV EBX,dword ptr [0x01d227e0]      ; 00512cf2 | DAT_01d227e0
    XOR EDI,EDI                         ; 00512cf8
    XOR EBP,EBP                         ; 00512cfa
    TEST EAX,EAX                        ; 00512cfc
    JLE 0x00512d50                      ; 00512cfe
        ;   XREF to: 00512d50 (CONDITIONAL_JUMP)  ; LAB_00512d50
    PUSH EBX                            ; 00512d00
        ;   Label: LAB_00512d00
    PUSH ESI                            ; 00512d01
    CALL engine_mini3d.cpp_FUN_00513260 ; 00512d02
        ;   XREF to: 00513260 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00513260()
    ADD ESP,0x8                         ; 00512d07
    PUSH EBX                            ; 00512d0a
    ADD ESI,0x24                        ; 00512d0b
    INC EDI                             ; 00512d0e
    CALL engine_mini3d.cpp_FUN_005140c0 ; 00512d0f
        ;   XREF to: 005140c0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005140c0()
    FLD float ptr [ESI + -0x8]          ; 00512d14
    ADD ESP,0x4                         ; 00512d17
    MOV ECX,dword ptr [EBX + 0x10]      ; 00512d1a
    FSTP float ptr [EBX + 0x1c]         ; 00512d1d
    ADD EBX,0x40                        ; 00512d20
    FLD float ptr [ESI + -0x4]          ; 00512d23
    MOV EAX,dword ptr [ESP + 0x18]      ; 00512d26
    OR EBP,ECX                          ; 00512d2a
    FSTP float ptr [EBX + -0x20]        ; 00512d2c
    MOV EDX,dword ptr [ESI + -0x18]     ; 00512d2f
    MOV dword ptr [EBX + -0x1c],EDX     ; 00512d32
    MOV EDX,dword ptr [ESI + -0x14]     ; 00512d35
    MOV dword ptr [EBX + -0x18],EDX     ; 00512d38
    MOV EDX,dword ptr [ESI + -0x10]     ; 00512d3b
    MOV dword ptr [EBX + -0x14],EDX     ; 00512d3e
    MOV EDX,dword ptr [ESI + -0xc]      ; 00512d41
    MOV dword ptr [EBX + -0x10],EDX     ; 00512d44
    CMP EDI,EAX                         ; 00512d47
    JL 0x00512d00                       ; 00512d49
        ;   XREF to: 00512d00 (CONDITIONAL_JUMP)  ; LAB_00512d00
    LEA EAX,[EAX]                       ; 00512d4b
    MOV EBP,dword ptr [ESP + 0x20]      ; 00512d7c
        ;   Label: LAB_00512d7c
    PUSH EBP                            ; 00512d80
    MOV EAX,dword ptr [ESP + 0x20]      ; 00512d81
    PUSH EAX                            ; 00512d85
    MOV EDX,dword ptr [ESP + 0x20]      ; 00512d86
    PUSH EDX                            ; 00512d8a
    PUSH ESI                            ; 00512d8b
    CALL engine_mini3d.cpp_FUN_00516cc0 ; 00512d8c
        ;   XREF to: 00516cc0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00516cc0()
    JMP 0x00512d74                      ; 00512d91
        ;   XREF to: 00512d74 (UNCONDITIONAL_JUMP)  ; LAB_00512d74
    MOV EDX,dword ptr [0x01c51d14]      ; 00512d93 | DAT_01c51d14
        ;   Label: LAB_00512d93
    PUSH EDX                            ; 00512d99
    MOV ECX,dword ptr [ESP + 0x24]      ; 00512d9a
    PUSH ECX                            ; 00512d9e
    MOV EBX,dword ptr [ESP + 0x24]      ; 00512d9f
    PUSH EBX                            ; 00512da3
    MOV EDI,dword ptr [ESP + 0x24]      ; 00512da4
    PUSH EDI                            ; 00512da8
    PUSH ESI                            ; 00512da9
    CALL dword ptr [0x02c83460]         ; 00512daa | DAT_02c83460
    ADD ESP,0x14                        ; 00512db0
    POP EBP                             ; 00512db3
    POP EDI                             ; 00512db4
    POP ESI                             ; 00512db5
    POP EBX                             ; 00512db6
    RET                                 ; 00512db7

