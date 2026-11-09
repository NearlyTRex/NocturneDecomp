; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_ghoul_cpp_FUN_004e0c50(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004e0c34 = 004e0cdb
;   undefined4 DAT_005e3e09
;   undefined4 DAT_005e3e11
;   undefined4 DAT_005e3e19
;   undefined4 DAT_01cd0d98
;   undefined4 DAT_01cd0dac
;   undefined4 DAT_01cd0db0
;   undefined4 DAT_01cd0dbc
;   undefined4 DAT_01cd0dc0
;
; Called Functions:
;   core_skeleton.cpp_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0c50
        ;   Label: core_ghoul.cpp_FUN_004e0c50
    PUSH ESI                            ; 004e0c51
    PUSH EDI                            ; 004e0c52
    PUSH EBP                            ; 004e0c53
    MOV EBP,ESP                         ; 004e0c54
    SUB ESP,0x8c                        ; 004e0c56
    AND ESP,0xfffffff8                  ; 004e0c5c
    MOV EDX,dword ptr [0x01cd0dbc]      ; 004e0c5f | DAT_01cd0dbc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e0c65
    PUSH EDX                            ; 004e0c68
    ADD EAX,0x158                       ; 004e0c69
    PUSH EAX                            ; 004e0c6e
    LEA ESI,[ESP + 0x20]                ; 004e0c6f
    LEA EDI,[ESP + 0x2c]                ; 004e0c73
    CALL core_skeleton.cpp_FUN_00569130 ; 004e0c77
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x20]                ; 004e0c7c
    ADD ESP,0x8                         ; 004e0c80
    LEA EAX,[ESP + 0x24]                ; 004e0c83
    MOV ECX,dword ptr [EBP + 0x18]      ; 004e0c87
    MOVSD ES:EDI,ESI                    ; 004e0c8a
    MOVSD ES:EDI,ESI                    ; 004e0c8b
    MOVSD ES:EDI,ESI                    ; 004e0c8c
    CMP EAX,ECX                         ; 004e0c8d
    JNZ 0x004e0dbf                      ; 004e0c8f
        ;   XREF to: 004e0dbf (CONDITIONAL_JUMP)  ; LAB_004e0dbf
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e0c95
        ;   Label: LAB_004e0c95
    MOV EBX,0x1                         ; 004e0c98
    XOR ESI,ESI                         ; 004e0c9d
    ADD EAX,0x158                       ; 004e0c9f
    MOV dword ptr [ESP + 0x84],ESI      ; 004e0ca4
    MOV dword ptr [ESP + 0x88],EAX      ; 004e0cab
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e0cb2
        ;   Label: LAB_004e0cb2
    MOV EDX,dword ptr [ESP + 0x84]      ; 004e0cb5
    ADD EDX,dword ptr [EAX + 0x6c]      ; 004e0cbc
    MOV ESI,0x4                         ; 004e0cbf
    MOV EAX,EDX                         ; 004e0cc4
    SAR EDX,0x1f                        ; 004e0cc6
    IDIV ESI                            ; 004e0cc9
    CMP EDX,0x3                         ; 004e0ccb
    JA 0x004e0d9e                       ; 004e0cce
        ;   XREF to: 004e0d9e (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4e0c34]  ; 004e0cd4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e0cdb
        ;   Label: caseD_0
    MOV EAX,dword ptr [EAX + 0xc28c]    ; 004e0cde
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e0ce4
    SHL EAX,0x2                         ; 004e0ce7
    ADD EAX,EDX                         ; 004e0cea
    CMP dword ptr [EAX + 0x2298],0x0    ; 004e0cec
    JZ 0x004e0d9e                       ; 004e0cf3
        ;   XREF to: 004e0d9e (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [0x01cd0dac]      ; 004e0cf9 | DAT_01cd0dac
    PUSH ESI                            ; 004e0cff
    MOV EDI,dword ptr [ESP + 0x8c]      ; 004e0d00
    PUSH EDI                            ; 004e0d07
    LEA ESI,[ESP + 0x44]                ; 004e0d08
    CALL core_skeleton.cpp_FUN_00569130 ; 004e0d0c
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA EDI,[ESP + 0x68]                ; 004e0d11
    LEA ESI,[ESP + 0x44]                ; 004e0d15
    LEA EDX,[ESP + 0x68]                ; 004e0d19
    ADD ESP,0x8                         ; 004e0d1d
    LEA EAX,[ESP + 0x30]                ; 004e0d20
    MOVSD ES:EDI,ESI                    ; 004e0d24
    MOVSD ES:EDI,ESI                    ; 004e0d25
    MOVSD ES:EDI,ESI                    ; 004e0d26
    CMP EAX,EDX                         ; 004e0d27
    JZ 0x004e0d43                       ; 004e0d29
        ;   XREF to: 004e0d43 (CONDITIONAL_JUMP)  ; LAB_004e0d43
    MOV EAX,dword ptr [ESP + 0x60]      ; 004e0d2b
    MOV dword ptr [ESP + 0x30],EAX      ; 004e0d2f
    MOV EAX,dword ptr [ESP + 0x64]      ; 004e0d33
    MOV dword ptr [ESP + 0x34],EAX      ; 004e0d37
    MOV EAX,dword ptr [ESP + 0x68]      ; 004e0d3b
    MOV dword ptr [ESP + 0x38],EAX      ; 004e0d3f
        ;   Label: LAB_004e0d3f
    IMUL EDX,EBX,0xc                    ; 004e0d43
        ;   Label: LAB_004e0d43
    FLD double ptr [0x005e3e09]         ; 004e0d46 | DAT_005e3e09
    FLD float ptr [ESP + 0x30]          ; 004e0d4c
    FMUL ST1                            ; 004e0d50
    FLD float ptr [ESP + 0x34]          ; 004e0d52
    FMUL double ptr [0x005e3e11]        ; 004e0d56 | DAT_005e3e11
    FLD float ptr [ESP + 0x24]          ; 004e0d5c
    FMULP ST3                           ; 004e0d60
    FLD float ptr [ESP + 0x28]          ; 004e0d62
    FMUL double ptr [0x005e3e19]        ; 004e0d66 | DAT_005e3e19
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e0d6c
    FADDP                               ; 004e0d6f
    FXCH ST2                            ; 004e0d71
    FADDP                               ; 004e0d73
    FXCH                                ; 004e0d75
    FSTP float ptr [ESP + 0x34]         ; 004e0d77
    ADD EDX,EAX                         ; 004e0d7b
    LEA EAX,[ESP + 0x30]                ; 004e0d7d
    FSTP float ptr [ESP + 0x30]         ; 004e0d81
    CMP EDX,EAX                         ; 004e0d85
    JZ 0x004e0d9d                       ; 004e0d87
        ;   XREF to: 004e0d9d (CONDITIONAL_JUMP)  ; LAB_004e0d9d
    MOV EAX,dword ptr [ESP + 0x30]      ; 004e0d89
    MOV dword ptr [EDX],EAX             ; 004e0d8d
    MOV EAX,dword ptr [ESP + 0x34]      ; 004e0d8f
    MOV dword ptr [EDX + 0x4],EAX       ; 004e0d93
    MOV EAX,dword ptr [ESP + 0x38]      ; 004e0d96
    MOV dword ptr [EDX + 0x8],EAX       ; 004e0d9a
        ;   Label: LAB_004e0d9a
    INC EBX                             ; 004e0d9d
        ;   Label: LAB_004e0d9d
    MOV EDX,dword ptr [ESP + 0x84]      ; 004e0d9e
        ;   Label: default
    INC EDX                             ; 004e0da5
    MOV dword ptr [ESP + 0x84],EDX      ; 004e0da6
    CMP EDX,0x4                         ; 004e0dad
    JL 0x004e0cb2                       ; 004e0db0
        ;   XREF to: 004e0cb2 (CONDITIONAL_JUMP)  ; LAB_004e0cb2
    MOV EAX,EBX                         ; 004e0db6
    MOV ESP,EBP                         ; 004e0db8
    POP EBP                             ; 004e0dba
    POP EDI                             ; 004e0dbb
    POP ESI                             ; 004e0dbc
    POP EBX                             ; 004e0dbd
    RET                                 ; 004e0dbe
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e0dbf
        ;   Label: LAB_004e0dbf
    MOV dword ptr [ECX],EAX             ; 004e0dc3
    MOV EAX,dword ptr [ESP + 0x28]      ; 004e0dc5
    MOV dword ptr [ECX + 0x4],EAX       ; 004e0dc9
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004e0dcc
    MOV dword ptr [ECX + 0x8],EAX       ; 004e0dd0
    JMP 0x004e0c95                      ; 004e0dd3
        ;   XREF to: 004e0c95 (UNCONDITIONAL_JUMP)  ; LAB_004e0c95
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e0dd8
        ;   Label: caseD_1
    MOV EAX,dword ptr [EAX + 0xc294]    ; 004e0ddb
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e0de1
    SHL EAX,0x2                         ; 004e0de4
    ADD EAX,EDX                         ; 004e0de7
    CMP dword ptr [EAX + 0x2298],0x0    ; 004e0de9
    JZ 0x004e0d9e                       ; 004e0df0
        ;   XREF to: 004e0d9e (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [0x01cd0db0]      ; 004e0df2 | DAT_01cd0db0
    PUSH ESI                            ; 004e0df8
    MOV EDI,dword ptr [ESP + 0x8c]      ; 004e0df9
    PUSH EDI                            ; 004e0e00
    LEA ESI,[ESP + 0x74]                ; 004e0e01
    CALL core_skeleton.cpp_FUN_00569130 ; 004e0e05
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA EDI,[ESP + 0x14]                ; 004e0e0a
    LEA ESI,[ESP + 0x74]                ; 004e0e0e
    LEA EDX,[ESP + 0x14]                ; 004e0e12
    ADD ESP,0x8                         ; 004e0e16
    LEA EAX,[ESP + 0x30]                ; 004e0e19
    MOVSD ES:EDI,ESI                    ; 004e0e1d
    MOVSD ES:EDI,ESI                    ; 004e0e1e
    MOVSD ES:EDI,ESI                    ; 004e0e1f
    CMP EAX,EDX                         ; 004e0e20
    JZ 0x004e0d43                       ; 004e0e22
        ;   XREF to: 004e0d43 (CONDITIONAL_JUMP)  ; LAB_004e0d43
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e0e28
    MOV dword ptr [ESP + 0x30],EAX      ; 004e0e2c
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e0e30
    MOV dword ptr [ESP + 0x34],EAX      ; 004e0e34
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e0e38
    JMP 0x004e0d3f                      ; 004e0e3c
        ;   XREF to: 004e0d3f (UNCONDITIONAL_JUMP)  ; LAB_004e0d3f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e0e41
        ;   Label: caseD_2
    MOV EAX,dword ptr [EAX + 0xc2b4]    ; 004e0e44
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e0e4a
    SHL EAX,0x2                         ; 004e0e4d
    ADD EAX,EDX                         ; 004e0e50
    CMP dword ptr [EAX + 0x2298],0x0    ; 004e0e52
    JZ 0x004e0d9e                       ; 004e0e59
        ;   XREF to: 004e0d9e (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [0x01cd0d98]      ; 004e0e5f | DAT_01cd0d98
    PUSH ESI                            ; 004e0e65
    MOV EDI,dword ptr [ESP + 0x8c]      ; 004e0e66
    PUSH EDI                            ; 004e0e6d
    LEA ESI,[ESP + 0x8]                 ; 004e0e6e
    CALL core_skeleton.cpp_FUN_00569130 ; 004e0e72
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    IMUL EDX,EBX,0xc                    ; 004e0e77
    ADD ESP,0x8                         ; 004e0e7a
    LEA EDI,[ESP + 0x78]                ; 004e0e7d
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e0e81
    MOV ESI,ESP                         ; 004e0e84
    ADD EDX,EAX                         ; 004e0e86
    LEA EAX,[ESP + 0x78]                ; 004e0e88
    MOVSD ES:EDI,ESI                    ; 004e0e8c
    MOVSD ES:EDI,ESI                    ; 004e0e8d
    MOVSD ES:EDI,ESI                    ; 004e0e8e
    CMP EDX,EAX                         ; 004e0e8f
    JZ 0x004e0d9d                       ; 004e0e91
        ;   XREF to: 004e0d9d (CONDITIONAL_JUMP)  ; LAB_004e0d9d
    MOV EAX,dword ptr [ESP + 0x78]      ; 004e0e97
    MOV dword ptr [EDX],EAX             ; 004e0e9b
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004e0e9d
    MOV dword ptr [EDX + 0x4],EAX       ; 004e0ea1
    MOV EAX,dword ptr [ESP + 0x80]      ; 004e0ea4
    JMP 0x004e0d9a                      ; 004e0eab
        ;   XREF to: 004e0d9a (UNCONDITIONAL_JUMP)  ; LAB_004e0d9a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e0eb0
        ;   Label: caseD_3
    MOV EAX,dword ptr [EAX + 0xc2b0]    ; 004e0eb3
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e0eb9
    SHL EAX,0x2                         ; 004e0ebc
    ADD EAX,EDX                         ; 004e0ebf
    CMP dword ptr [EAX + 0x2298],0x0    ; 004e0ec1
    JZ 0x004e0d9e                       ; 004e0ec8
        ;   XREF to: 004e0d9e (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [0x01cd0dc0]      ; 004e0ece | DAT_01cd0dc0
    PUSH ESI                            ; 004e0ed4
    MOV EDI,dword ptr [ESP + 0x8c]      ; 004e0ed5
    PUSH EDI                            ; 004e0edc
    LEA ESI,[ESP + 0x50]                ; 004e0edd
    CALL core_skeleton.cpp_FUN_00569130 ; 004e0ee1
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    IMUL EDX,EBX,0xc                    ; 004e0ee6
    ADD ESP,0x8                         ; 004e0ee9
    LEA EDI,[ESP + 0x54]                ; 004e0eec
    MOV EAX,dword ptr [EBP + 0x18]      ; 004e0ef0
    LEA ESI,[ESP + 0x48]                ; 004e0ef3
    ADD EDX,EAX                         ; 004e0ef7
    LEA EAX,[ESP + 0x54]                ; 004e0ef9
    MOVSD ES:EDI,ESI                    ; 004e0efd
    MOVSD ES:EDI,ESI                    ; 004e0efe
    MOVSD ES:EDI,ESI                    ; 004e0eff
    CMP EDX,EAX                         ; 004e0f00
    JZ 0x004e0d9d                       ; 004e0f02
        ;   XREF to: 004e0d9d (CONDITIONAL_JUMP)  ; LAB_004e0d9d
    MOV EAX,dword ptr [ESP + 0x54]      ; 004e0f08
    MOV dword ptr [EDX],EAX             ; 004e0f0c
    MOV EAX,dword ptr [ESP + 0x58]      ; 004e0f0e
    MOV dword ptr [EDX + 0x4],EAX       ; 004e0f12
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004e0f15
    JMP 0x004e0d9a                      ; 004e0f19
        ;   XREF to: 004e0d9a (UNCONDITIONAL_JUMP)  ; LAB_004e0d9a

