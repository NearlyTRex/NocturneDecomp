; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_005149a0(undefined4 *param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_005126d0 at 00512826
;
; Referenced Globals:
;   undefined4 DAT_005e8e93
;   undefined4 DAT_0061f600
;
; Called Functions:
;   engine_mini3d.cpp_FUN_00513ca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005149a0
        ;   Label: engine_mini3d.cpp_FUN_005149a0
    PUSH ESI                            ; 005149a1
    PUSH EDI                            ; 005149a2
    PUSH EBP                            ; 005149a3
    SUB ESP,0x30                        ; 005149a4
    MOV EDI,dword ptr [ESP + 0x44]      ; 005149a7
    MOV EBP,dword ptr [ESP + 0x48]      ; 005149ab
    FLD float ptr [EBP]                 ; 005149af
    MOV EAX,ESP                         ; 005149b2
    FSTP float ptr [EDI]                ; 005149b4
    FLD float ptr [EBP + 0x4]           ; 005149b6
    PUSH EAX                            ; 005149b9
    FSTP float ptr [EDI + 0x4]          ; 005149ba
    FLD float ptr [EBP + 0x8]           ; 005149bd
    PUSH EBP                            ; 005149c0
    FSTP float ptr [EDI + 0x8]          ; 005149c1
    MOV dword ptr [EDI + 0xc],0x0       ; 005149c4
    CALL engine_mini3d.cpp_FUN_00513ca0 ; 005149cb
        ;   XREF to: 00513ca0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00513ca0()
    ADD ESP,0x8                         ; 005149d0
    FLD float ptr [ESP]                 ; 005149d3
    FMUL float ptr [0x005e8e93]         ; 005149d6 | DAT_005e8e93
    LEA EBX,[ESP + 0x1c]                ; 005149dc
    LEA EAX,[ESP + 0x10]                ; 005149e0
    FSTP float ptr [ESP + 0x1c]         ; 005149e4
    FLD float ptr [EBX]                 ; 005149e8
    FLD float ptr [0x0061f600]          ; 005149ea | DAT_0061f600
    FSUBP                               ; 005149f0
    FISTP dword ptr [EAX]               ; 005149f2
    FLD float ptr [ESP + 0x4]           ; 005149f4
    FMUL float ptr [0x005e8e93]         ; 005149f8 | DAT_005e8e93
    LEA EBX,[ESP + 0x24]                ; 005149fe
    LEA EAX,[ESP + 0x14]                ; 00514a02
    FSTP float ptr [ESP + 0x24]         ; 00514a06
    FLD float ptr [EBX]                 ; 00514a0a
    FLD float ptr [0x0061f600]          ; 00514a0c | DAT_0061f600
    FSUBP                               ; 00514a12
    FISTP dword ptr [EAX]               ; 00514a14
    FLD float ptr [ESP + 0x8]           ; 00514a16
    FMUL float ptr [0x005e8e93]         ; 00514a1a | DAT_005e8e93
    LEA EBX,[ESP + 0x28]                ; 00514a20
    LEA EAX,[ESP + 0x20]                ; 00514a24
    FSTP float ptr [ESP + 0x28]         ; 00514a28
    FLD float ptr [EBX]                 ; 00514a2c
    FLD float ptr [0x0061f600]          ; 00514a2e | DAT_0061f600
    FSUBP                               ; 00514a34
    FISTP dword ptr [EAX]               ; 00514a36
    FLD float ptr [ESP + 0xc]           ; 00514a38
    FMUL float ptr [0x005e8e93]         ; 00514a3c | DAT_005e8e93
    LEA EBX,[ESP + 0x2c]                ; 00514a42
    LEA EAX,[ESP + 0x18]                ; 00514a46
    FSTP float ptr [ESP + 0x2c]         ; 00514a4a
    FLD float ptr [EBX]                 ; 00514a4e
    FLD float ptr [0x0061f600]          ; 00514a50 | DAT_0061f600
    FSUBP                               ; 00514a56
    FISTP dword ptr [EAX]               ; 00514a58
    MOV EAX,dword ptr [ESP + 0x14]      ; 00514a5a
    MOV EDX,dword ptr [ESP + 0x10]      ; 00514a5e
    MOV EBX,dword ptr [ESP + 0x20]      ; 00514a62
    SHL EAX,0x8                         ; 00514a66
    SHL EBX,0x10                        ; 00514a69
    OR EAX,EDX                          ; 00514a6c
    OR EBX,EAX                          ; 00514a6e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00514a70
    SHL EAX,0x18                        ; 00514a74
    MOV dword ptr [EDI + 0x14],0x0      ; 00514a77
    OR EBX,EAX                          ; 00514a7e
    MOV dword ptr [EDI + 0x10],EBX      ; 00514a80
    MOV EAX,dword ptr [EBP + 0x18]      ; 00514a83
    MOV dword ptr [EDI + 0x18],EAX      ; 00514a86
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00514a89
    MOV dword ptr [EDI + 0x1c],EAX      ; 00514a8c
    ADD ESP,0x30                        ; 00514a8f
    POP EBP                             ; 00514a92
    POP EDI                             ; 00514a93
    POP ESI                             ; 00514a94
    POP EBX                             ; 00514a95
    RET                                 ; 00514a96

