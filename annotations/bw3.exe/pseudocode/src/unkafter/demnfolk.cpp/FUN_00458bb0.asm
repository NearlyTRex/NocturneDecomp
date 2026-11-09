; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_demnfolk_cpp_FUN_00458bb0(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00458b94 = 00458c3e
;   undefined4 DAT_005ba972
;   undefined4 DAT_005ba97a
;   undefined4 DAT_005ba982
;
; Called Functions:
;   core_skeleton.cpp_FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00458bb0
        ;   Label: unkafter_demnfolk.cpp_FUN_00458bb0
    PUSH ESI                            ; 00458bb1
    PUSH EDI                            ; 00458bb2
    PUSH EBP                            ; 00458bb3
    MOV EBP,ESP                         ; 00458bb4
    SUB ESP,0x90                        ; 00458bb6
    AND ESP,0xfffffff8                  ; 00458bbc
    MOV EBX,dword ptr [EBP + 0x14]      ; 00458bbf
    MOV EDX,dword ptr [EBX + 0xd10c]    ; 00458bc2
    PUSH EDX                            ; 00458bc8
    LEA EAX,[EBX + 0x158]               ; 00458bc9
    PUSH EAX                            ; 00458bcf
    LEA ESI,[ESP + 0x20]                ; 00458bd0
    LEA EDI,[ESP + 0x2c]                ; 00458bd4
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 00458bd8
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x20]                ; 00458bdd
    ADD ESP,0x8                         ; 00458be1
    LEA EAX,[ESP + 0x24]                ; 00458be4
    MOV ECX,dword ptr [EBP + 0x18]      ; 00458be8
    MOVSD ES:EDI,ESI                    ; 00458beb
    MOVSD ES:EDI,ESI                    ; 00458bec
    MOVSD ES:EDI,ESI                    ; 00458bed
    CMP EAX,ECX                         ; 00458bee
    JNZ 0x00458d28                      ; 00458bf0
        ;   XREF to: 00458d28 (CONDITIONAL_JUMP)  ; LAB_00458d28
    MOV ESI,0x1                         ; 00458bf6
        ;   Label: LAB_00458bf6
    XOR EDI,EDI                         ; 00458bfb
    LEA EAX,[EBX + 0x158]               ; 00458bfd
    MOV dword ptr [ESP + 0x84],EDI      ; 00458c03
    MOV dword ptr [ESP + 0x88],EAX      ; 00458c0a
    MOV dword ptr [ESP + 0x8c],ESI      ; 00458c11
    MOV EDX,dword ptr [ESP + 0x84]      ; 00458c18
        ;   Label: LAB_00458c18
    ADD EDX,dword ptr [EBX + 0x6c]      ; 00458c1f
    MOV ESI,0x4                         ; 00458c22
    MOV EAX,EDX                         ; 00458c27
    SAR EDX,0x1f                        ; 00458c29
    IDIV ESI                            ; 00458c2c
    CMP EDX,0x3                         ; 00458c2e
    JA 0x00458d02                       ; 00458c31
        ;   XREF to: 00458d02 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x458b94]  ; 00458c37 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xd114]    ; 00458c3e
        ;   Label: caseD_0
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00458c44
    JZ 0x00458d02                       ; 00458c4c
        ;   XREF to: 00458d02 (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0xd0fc]    ; 00458c52
    PUSH ECX                            ; 00458c58
    MOV ESI,dword ptr [ESP + 0x8c]      ; 00458c59
    PUSH ESI                            ; 00458c60
    LEA ESI,[ESP + 0x74]                ; 00458c61
    LEA EDI,[ESP + 0x68]                ; 00458c65
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 00458c69
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x74]                ; 00458c6e
    LEA EAX,[ESP + 0x68]                ; 00458c72
    ADD ESP,0x8                         ; 00458c76
    LEA EDX,[ESP + 0x30]                ; 00458c79
    MOVSD ES:EDI,ESI                    ; 00458c7d
    MOVSD ES:EDI,ESI                    ; 00458c7e
    MOVSD ES:EDI,ESI                    ; 00458c7f
    CMP EDX,EAX                         ; 00458c80
    JZ 0x00458c9c                       ; 00458c82
        ;   XREF to: 00458c9c (CONDITIONAL_JUMP)  ; LAB_00458c9c
    MOV EAX,dword ptr [ESP + 0x60]      ; 00458c84
    MOV dword ptr [ESP + 0x30],EAX      ; 00458c88
    MOV EAX,dword ptr [ESP + 0x64]      ; 00458c8c
    MOV dword ptr [ESP + 0x34],EAX      ; 00458c90
    MOV EAX,dword ptr [ESP + 0x68]      ; 00458c94
    MOV dword ptr [ESP + 0x38],EAX      ; 00458c98
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 00458c9c
        ;   Label: LAB_00458c9c
    FLD double ptr [0x005ba972]         ; 00458ca4 | DAT_005ba972
    FLD float ptr [ESP + 0x30]          ; 00458caa
    FMUL ST1                            ; 00458cae
    FLD float ptr [ESP + 0x34]          ; 00458cb0
    FMUL double ptr [0x005ba97a]        ; 00458cb4 | DAT_005ba97a
    FLD float ptr [ESP + 0x24]          ; 00458cba
    FMULP ST3                           ; 00458cbe
    FLD float ptr [ESP + 0x28]          ; 00458cc0
    FMUL double ptr [0x005ba982]        ; 00458cc4 | DAT_005ba982
    MOV EAX,dword ptr [EBP + 0x18]      ; 00458cca
    FADDP                               ; 00458ccd
    FXCH ST2                            ; 00458ccf
    FADDP                               ; 00458cd1
    FXCH                                ; 00458cd3
    FSTP float ptr [ESP + 0x34]         ; 00458cd5
    ADD EDX,EAX                         ; 00458cd9
    LEA EAX,[ESP + 0x30]                ; 00458cdb
    FSTP float ptr [ESP + 0x30]         ; 00458cdf
        ;   Label: LAB_00458cdf
    CMP EDX,EAX                         ; 00458ce3
    JZ 0x00458cfb                       ; 00458ce5
        ;   XREF to: 00458cfb (CONDITIONAL_JUMP)  ; LAB_00458cfb
    MOV EAX,dword ptr [ESP + 0x30]      ; 00458ce7
    MOV dword ptr [EDX],EAX             ; 00458ceb
    MOV EAX,dword ptr [ESP + 0x34]      ; 00458ced
    MOV dword ptr [EDX + 0x4],EAX       ; 00458cf1
    MOV EAX,dword ptr [ESP + 0x38]      ; 00458cf4
    MOV dword ptr [EDX + 0x8],EAX       ; 00458cf8
        ;   Label: LAB_00458cf8
    INC dword ptr [ESP + 0x8c]          ; 00458cfb
        ;   Label: LAB_00458cfb
    MOV ECX,dword ptr [ESP + 0x84]      ; 00458d02
        ;   Label: default
    INC ECX                             ; 00458d09
    MOV dword ptr [ESP + 0x84],ECX      ; 00458d0a
    CMP ECX,0x4                         ; 00458d11
    JL 0x00458c18                       ; 00458d14
        ;   XREF to: 00458c18 (CONDITIONAL_JUMP)  ; LAB_00458c18
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00458d1a
    MOV ESP,EBP                         ; 00458d21
    POP EBP                             ; 00458d23
    POP EDI                             ; 00458d24
    POP ESI                             ; 00458d25
    POP EBX                             ; 00458d26
    RET                                 ; 00458d27
    MOV EAX,dword ptr [ESP + 0x24]      ; 00458d28
        ;   Label: LAB_00458d28
    MOV dword ptr [ECX],EAX             ; 00458d2c
    MOV EAX,dword ptr [ESP + 0x28]      ; 00458d2e
    MOV dword ptr [ECX + 0x4],EAX       ; 00458d32
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00458d35
    MOV dword ptr [ECX + 0x8],EAX       ; 00458d39
    JMP 0x00458bf6                      ; 00458d3c
        ;   XREF to: 00458bf6 (UNCONDITIONAL_JUMP)  ; LAB_00458bf6
    MOV EAX,dword ptr [EBX + 0xd11c]    ; 00458d41
        ;   Label: caseD_1
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00458d47
    JZ 0x00458d02                       ; 00458d4f
        ;   XREF to: 00458d02 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBX + 0xd100]    ; 00458d51
    PUSH EAX                            ; 00458d57
    MOV EDX,dword ptr [ESP + 0x8c]      ; 00458d58
    PUSH EDX                            ; 00458d5f
    LEA ESI,[ESP + 0x50]                ; 00458d60
    LEA EDI,[ESP + 0x14]                ; 00458d64
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 00458d68
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x50]                ; 00458d6d
    LEA EAX,[ESP + 0x14]                ; 00458d71
    ADD ESP,0x8                         ; 00458d75
    LEA EDX,[ESP + 0x30]                ; 00458d78
    MOVSD ES:EDI,ESI                    ; 00458d7c
    MOVSD ES:EDI,ESI                    ; 00458d7d
    MOVSD ES:EDI,ESI                    ; 00458d7e
    CMP EDX,EAX                         ; 00458d7f
    JZ 0x00458d9b                       ; 00458d81
        ;   XREF to: 00458d9b (CONDITIONAL_JUMP)  ; LAB_00458d9b
    MOV EAX,dword ptr [ESP + 0xc]       ; 00458d83
    MOV dword ptr [ESP + 0x30],EAX      ; 00458d87
    MOV EAX,dword ptr [ESP + 0x10]      ; 00458d8b
    MOV dword ptr [ESP + 0x34],EAX      ; 00458d8f
    MOV EAX,dword ptr [ESP + 0x14]      ; 00458d93
    MOV dword ptr [ESP + 0x38],EAX      ; 00458d97
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 00458d9b
        ;   Label: LAB_00458d9b
    FLD double ptr [0x005ba972]         ; 00458da3 | DAT_005ba972
    FLD float ptr [ESP + 0x30]          ; 00458da9
    FMUL ST1                            ; 00458dad
    FLD float ptr [ESP + 0x34]          ; 00458daf
    FMUL double ptr [0x005ba97a]        ; 00458db3 | DAT_005ba97a
    FLD float ptr [ESP + 0x24]          ; 00458db9
    FMULP ST3                           ; 00458dbd
    FLD float ptr [ESP + 0x28]          ; 00458dbf
    FMUL double ptr [0x005ba982]        ; 00458dc3 | DAT_005ba982
    MOV ESI,dword ptr [EBP + 0x18]      ; 00458dc9
    LEA EAX,[ESP + 0x30]                ; 00458dcc
    FADDP                               ; 00458dd0
    FXCH ST2                            ; 00458dd2
    FADDP                               ; 00458dd4
    FXCH                                ; 00458dd6
    FSTP float ptr [ESP + 0x34]         ; 00458dd8
    ADD EDX,ESI                         ; 00458ddc
    JMP 0x00458cdf                      ; 00458dde
        ;   XREF to: 00458cdf (UNCONDITIONAL_JUMP)  ; LAB_00458cdf
    MOV EAX,dword ptr [EBX + 0xd12c]    ; 00458de3
        ;   Label: caseD_2
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00458de9
    JZ 0x00458d02                       ; 00458df1
        ;   XREF to: 00458d02 (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [EBX + 0xd0e8]    ; 00458df7
    PUSH ESI                            ; 00458dfd
    MOV EDI,dword ptr [ESP + 0x8c]      ; 00458dfe
    PUSH EDI                            ; 00458e05
    LEA ESI,[ESP + 0x8]                 ; 00458e06
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 00458e0a
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    ADD ESP,0x8                         ; 00458e0f
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 00458e12
    LEA EDI,[ESP + 0x78]                ; 00458e1a
    MOV ESI,ESP                         ; 00458e1e
    MOV ECX,dword ptr [EBP + 0x18]      ; 00458e20
    LEA EAX,[ESP + 0x78]                ; 00458e23
    ADD EDX,ECX                         ; 00458e27
    MOVSD ES:EDI,ESI                    ; 00458e29
    MOVSD ES:EDI,ESI                    ; 00458e2a
    MOVSD ES:EDI,ESI                    ; 00458e2b
    CMP EDX,EAX                         ; 00458e2c
    JZ 0x00458cfb                       ; 00458e2e
        ;   XREF to: 00458cfb (CONDITIONAL_JUMP)  ; LAB_00458cfb
    MOV EAX,dword ptr [ESP + 0x78]      ; 00458e34
    MOV dword ptr [EDX],EAX             ; 00458e38
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00458e3a
    MOV dword ptr [EDX + 0x4],EAX       ; 00458e3e
    MOV EAX,dword ptr [ESP + 0x80]      ; 00458e41
    JMP 0x00458cf8                      ; 00458e48
        ;   XREF to: 00458cf8 (UNCONDITIONAL_JUMP)  ; LAB_00458cf8
    MOV EAX,dword ptr [EBX + 0xd128]    ; 00458e4d
        ;   Label: caseD_3
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00458e53
    JZ 0x00458d02                       ; 00458e5b
        ;   XREF to: 00458d02 (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [EBX + 0xd110]    ; 00458e61
    PUSH ECX                            ; 00458e67
    MOV ESI,dword ptr [ESP + 0x8c]      ; 00458e68
    PUSH ESI                            ; 00458e6f
    LEA ESI,[ESP + 0x44]                ; 00458e70
    LEA EDI,[ESP + 0x5c]                ; 00458e74
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 00458e78
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x44]                ; 00458e7d
    ADD ESP,0x8                         ; 00458e81
    MOVSD ES:EDI,ESI                    ; 00458e84
    MOVSD ES:EDI,ESI                    ; 00458e85
    MOVSD ES:EDI,ESI                    ; 00458e86
    IMUL EDX,dword ptr [ESP + 0x8c],0xc ; 00458e87
    ADD EDX,dword ptr [EBP + 0x18]      ; 00458e8f
    LEA EAX,[ESP + 0x54]                ; 00458e92
    CMP EDX,EAX                         ; 00458e96
    JZ 0x00458cfb                       ; 00458e98
        ;   XREF to: 00458cfb (CONDITIONAL_JUMP)  ; LAB_00458cfb
    MOV EAX,dword ptr [ESP + 0x54]      ; 00458e9e
    MOV dword ptr [EDX],EAX             ; 00458ea2
    MOV EAX,dword ptr [ESP + 0x58]      ; 00458ea4
    MOV dword ptr [EDX + 0x4],EAX       ; 00458ea8
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00458eab
    JMP 0x00458cf8                      ; 00458eaf
        ;   XREF to: 00458cf8 (UNCONDITIONAL_JUMP)  ; LAB_00458cf8

