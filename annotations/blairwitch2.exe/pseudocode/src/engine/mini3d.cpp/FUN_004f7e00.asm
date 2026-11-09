; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint engine_mini3d_cpp_FUN_004f7e00(int param_1,int param_2,ushort *param_3,uint param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   engine_mini3d.cpp_FUN_004f3920 at 004f3a42
;   engine_mini3d.cpp_FUN_004f3c40 at 004f3e0f
;   engine_mini3d.cpp_FUN_004f3ef0 at 004f402c
;   engine_mini3d.cpp_FUN_004f40a0 at 004f438c
;
; Referenced Globals:
;   TerminatedCString s_engine_mini3d_cpp_005ddf04
;   TerminatedCString s_CMini3D_polyList_Too_man_005ddf19
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d09854
;   undefined4 DAT_01d09b80
;   undefined4 DAT_01d0d2b4
;   undefined4 DAT_01e61b58
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_mini3d.cpp_FUN_004f38c0
;   engine_mini3d.cpp_FUN_004f4620
;   engine_mini3d.cpp_FUN_004f4730
;   engine_mini3d.cpp_FUN_004f8110
;   engine_mini3d.cpp_FUN_004f8330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7e00
        ;   Label: engine_mini3d.cpp_FUN_004f7e00
    PUSH ESI                            ; 004f7e01
    PUSH EDI                            ; 004f7e02
    PUSH EBP                            ; 004f7e03
    SUB ESP,0x4                         ; 004f7e04
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004f7e07
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f7e0b
    MOV EDX,dword ptr [0x01e61b58]      ; 004f7e0f | DAT_01e61b58
    MOV ECX,dword ptr [0x01d09854]      ; 004f7e15 | DAT_01d09854
    ADD EDX,EAX                         ; 004f7e1b
    ADD ECX,EBP                         ; 004f7e1d
    MOV dword ptr [0x01e61b58],EDX      ; 004f7e1f | DAT_01e61b58
    MOV dword ptr [0x01d09854],ECX      ; 004f7e25 | DAT_01d09854
    CALL engine_mini3d.cpp_FUN_004f38c0 ; 004f7e2b
        ;   XREF to: 004f38c0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f38c0()
    CMP EBP,0x2710                      ; 004f7e30
    JG 0x004f7ed8                       ; 004f7e36
        ;   XREF to: 004f7ed8 (CONDITIONAL_JUMP)  ; LAB_004f7ed8
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f7e3c
        ;   Label: LAB_004f7e3c
    MOV EBX,dword ptr [0x01d09b80]      ; 004f7e40 | DAT_01d09b80
    XOR EDI,EDI                         ; 004f7e46
    MOV EAX,[0x01d0d2b4]                ; 004f7e48 | DAT_01d0d2b4
    MOV dword ptr [ESP],EDI             ; 004f7e4d
    CMP EAX,0x1                         ; 004f7e50
    JNZ 0x004f7f01                      ; 004f7e53
        ;   XREF to: 004f7f01 (CONDITIONAL_JUMP)  ; LAB_004f7f01
    TEST EBP,EBP                        ; 004f7e59
    JLE 0x004f7e80                      ; 004f7e5b
        ;   XREF to: 004f7e80 (CONDITIONAL_JUMP)  ; LAB_004f7e80
    PUSH EBX                            ; 004f7e5d
        ;   Label: LAB_004f7e5d
    PUSH ESI                            ; 004f7e5e
    INC EDI                             ; 004f7e5f
    CALL engine_mini3d.cpp_FUN_004f4620 ; 004f7e60
        ;   XREF to: 004f4620 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f4620()
    ADD ESP,0x8                         ; 004f7e65
    MOV EAX,dword ptr [EBX + 0x10]      ; 004f7e68
    MOV EDX,dword ptr [ESP]             ; 004f7e6b
    ADD EBX,0x20                        ; 004f7e6e
    OR EDX,EAX                          ; 004f7e71
    ADD ESI,0x20                        ; 004f7e73
    MOV dword ptr [ESP],EDX             ; 004f7e76
    CMP EDI,EBP                         ; 004f7e79
    JL 0x004f7e5d                       ; 004f7e7b
        ;   XREF to: 004f7e5d (CONDITIONAL_JUMP)  ; LAB_004f7e5d
    LEA EAX,[EAX]                       ; 004f7e7d
    CMP dword ptr [ESP],0x0             ; 004f7e80
        ;   Label: LAB_004f7e80
    JNZ 0x004f7f23                      ; 004f7e84
        ;   XREF to: 004f7f23 (CONDITIONAL_JUMP)  ; LAB_004f7f23
    MOV ESI,dword ptr [ESP + 0x24]      ; 004f7e8a
    XOR EDI,EDI                         ; 004f7e8e
    TEST ESI,ESI                        ; 004f7e90
    JLE 0x004f7ed0                      ; 004f7e92
        ;   XREF to: 004f7ed0 (CONDITIONAL_JUMP)  ; LAB_004f7ed0
    MOV EBX,dword ptr [ESP + 0x20]      ; 004f7e94
    MOVZX EBP,word ptr [EBX + 0x4]      ; 004f7e98
        ;   Label: LAB_004f7e98
    MOV ESI,dword ptr [0x01d09b80]      ; 004f7e9c | DAT_01d09b80
    SHL EBP,0x5                         ; 004f7ea2
    ADD EBP,ESI                         ; 004f7ea5
    PUSH EBP                            ; 004f7ea7
    MOVZX EBP,word ptr [EBX + 0x2]      ; 004f7ea8
    SHL EBP,0x5                         ; 004f7eac
    ADD EBP,ESI                         ; 004f7eaf
    PUSH EBP                            ; 004f7eb1
    MOVZX EBP,word ptr [EBX]            ; 004f7eb2
    SHL EBP,0x5                         ; 004f7eb5
    ADD ESI,EBP                         ; 004f7eb8
    PUSH ESI                            ; 004f7eba
    CALL engine_mini3d.cpp_FUN_004f8110 ; 004f7ebb
        ;   XREF to: 004f8110 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8110()
    ADD ESP,0xc                         ; 004f7ec0
    INC EDI                             ; 004f7ec3
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f7ec4
    ADD EBX,0x6                         ; 004f7ec8
    CMP EDI,EAX                         ; 004f7ecb
    JL 0x004f7e98                       ; 004f7ecd
        ;   XREF to: 004f7e98 (CONDITIONAL_JUMP)  ; LAB_004f7e98
    NOP                                 ; 004f7ecf
    ADD ESP,0x4                         ; 004f7ed0
        ;   Label: LAB_004f7ed0
    POP EBP                             ; 004f7ed3
    POP EDI                             ; 004f7ed4
    POP ESI                             ; 004f7ed5
    POP EBX                             ; 004f7ed6
    RET                                 ; 004f7ed7
    PUSH EBP                            ; 004f7ed8
        ;   Label: LAB_004f7ed8
    MOV EBX,0x5ddf04                    ; 004f7ed9 | = "..\\engine\\mini3d.cpp"
    MOV ESI,0x12e4                      ; 004f7ede
    PUSH 0x5ddf19                       ; 004f7ee3 | = "CMini3D::polyList - Too many verticie..."
    MOV dword ptr [0x01d046a0],EBX      ; 004f7ee8 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004f7eee | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004f7ef4
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 004f7ef9
    JMP 0x004f7e3c                      ; 004f7efc
        ;   XREF to: 004f7e3c (UNCONDITIONAL_JUMP)  ; LAB_004f7e3c
    TEST EBP,EBP                        ; 004f7f01
        ;   Label: LAB_004f7f01
    JLE 0x004f7e80                      ; 004f7f03
        ;   XREF to: 004f7e80 (CONDITIONAL_JUMP)  ; LAB_004f7e80
    PUSH EBX                            ; 004f7f09
        ;   Label: LAB_004f7f09
    PUSH ESI                            ; 004f7f0a
    INC EDI                             ; 004f7f0b
    CALL engine_mini3d.cpp_FUN_004f4730 ; 004f7f0c
        ;   XREF to: 004f4730 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f4730()
    ADD EBX,0x20                        ; 004f7f11
    ADD ESP,0x8                         ; 004f7f14
    ADD ESI,0x20                        ; 004f7f17
    CMP EDI,EBP                         ; 004f7f1a
    JL 0x004f7f09                       ; 004f7f1c
        ;   XREF to: 004f7f09 (CONDITIONAL_JUMP)  ; LAB_004f7f09
    JMP 0x004f7e80                      ; 004f7f1e
        ;   XREF to: 004f7e80 (UNCONDITIONAL_JUMP)  ; LAB_004f7e80
    MOV EBX,dword ptr [ESP + 0x24]      ; 004f7f23
        ;   Label: LAB_004f7f23
    XOR EDI,EDI                         ; 004f7f27
    TEST EBX,EBX                        ; 004f7f29
    JLE 0x004f7ed0                      ; 004f7f2b
        ;   XREF to: 004f7ed0 (CONDITIONAL_JUMP)  ; LAB_004f7ed0
    MOV EBX,dword ptr [ESP + 0x20]      ; 004f7f2d
    XOR ESI,ESI                         ; 004f7f31
        ;   Label: LAB_004f7f31
    MOV SI,word ptr [EBX + 0x4]         ; 004f7f33
    MOV EBP,ESI                         ; 004f7f37
    MOV ESI,dword ptr [0x01d09b80]      ; 004f7f39 | DAT_01d09b80
    SHL EBP,0x5                         ; 004f7f3f
    ADD EBP,ESI                         ; 004f7f42
    PUSH EBP                            ; 004f7f44
    MOVZX EBP,word ptr [EBX + 0x2]      ; 004f7f45
    SHL EBP,0x5                         ; 004f7f49
    ADD EBP,ESI                         ; 004f7f4c
    PUSH EBP                            ; 004f7f4e
    MOVZX EBP,word ptr [EBX]            ; 004f7f4f
    SHL EBP,0x5                         ; 004f7f52
    ADD ESI,EBP                         ; 004f7f55
    PUSH ESI                            ; 004f7f57
    CALL engine_mini3d.cpp_FUN_004f8330 ; 004f7f58
        ;   XREF to: 004f8330 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8330()
    ADD ESP,0xc                         ; 004f7f5d
    INC EDI                             ; 004f7f60
    MOV EBP,dword ptr [ESP + 0x24]      ; 004f7f61
    ADD EBX,0x6                         ; 004f7f65
    CMP EDI,EBP                         ; 004f7f68
    JL 0x004f7f31                       ; 004f7f6a
        ;   XREF to: 004f7f31 (CONDITIONAL_JUMP)  ; LAB_004f7f31
    ADD ESP,0x4                         ; 004f7f6c
    POP EBP                             ; 004f7f6f
    POP EDI                             ; 004f7f70
    POP ESI                             ; 004f7f71
    POP EBX                             ; 004f7f72
    RET                                 ; 004f7f73

