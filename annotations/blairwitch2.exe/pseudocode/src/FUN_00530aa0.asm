; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00530aa0(undefined4 param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5,undefined4 param_6)
;
; Local Variables:
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined        Stack[-0x98]:1  local_98
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005311e0 at 0053120d
;
; Referenced Globals:
;   undefined4 DAT_005e5972
;   undefined4 DAT_005e597a
;   undefined4 DAT_005fb210
;   undefined4 DAT_01caf5b4
;   undefined4 DAT_01fc8e84
;   undefined4 DAT_01fc9608
;   undefined4 DAT_01fc961c
;   undefined4 DAT_01fc9ad4
;   undefined4 DAT_01fc9cd4
;   undefined4 DAT_0200e23c
;   undefined4 DAT_0200e240
;   undefined4 DAT_0200e3c0
;   undefined4 DAT_0200e3c4
;   undefined4 DAT_0200e3d4
;   undefined4 DAT_0200e3d8
;   ... and 6 more
;
; Called Functions:
;   FUN_00441720
;   FUN_00448c90
;   FUN_00449530
;   FUN_004495a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530aa0
        ;   Label: FUN_00530aa0
    PUSH ESI                            ; 00530aa1
    PUSH EDI                            ; 00530aa2
    PUSH EBP                            ; 00530aa3
    MOV EBP,ESP                         ; 00530aa4
    SUB ESP,0xd0                        ; 00530aa6
    AND ESP,0xfffffff8                  ; 00530aac
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00530aaf
    MOV EDX,dword ptr [EBP + 0x18]      ; 00530ab2
    TEST EDX,EDX                        ; 00530ab5
    JNZ 0x00530bb7                      ; 00530ab7
        ;   XREF to: 00530bb7 (CONDITIONAL_JUMP)  ; LAB_00530bb7
    MOV EDI,dword ptr [0x01fc9608]      ; 00530abd | DAT_01fc9608
    MOV dword ptr [0x0200e3c0],EDX      ; 00530ac3 | DAT_0200e3c0
    TEST EDI,EDI                        ; 00530ac9
    JLE 0x00530b02                      ; 00530acb
        ;   XREF to: 00530b02 (CONDITIONAL_JUMP)  ; LAB_00530b02
    LEA ESI,[EDI*0x4 + 0x0]             ; 00530acd
    XOR EAX,EAX                         ; 00530ad4
    MOV EBX,dword ptr [EAX + 0x1fc960c] ; 00530ad6
        ;   Label: LAB_00530ad6
    CMP dword ptr [EBX + 0x1cb4],0x0    ; 00530adc
    JZ 0x00530afb                       ; 00530ae3
        ;   XREF to: 00530afb (CONDITIONAL_JUMP)  ; LAB_00530afb
    MOV ECX,dword ptr [0x0200e3c0]      ; 00530ae5 | DAT_0200e3c0
    ADD EDX,0x4                         ; 00530aeb
    INC ECX                             ; 00530aee
    MOV dword ptr [EDX + 0x200e3c0],EBX ; 00530aef
    MOV dword ptr [0x0200e3c0],ECX      ; 00530af5 | DAT_0200e3c0
    ADD EAX,0x4                         ; 00530afb
        ;   Label: LAB_00530afb
    CMP EAX,ESI                         ; 00530afe
    JL 0x00530ad6                       ; 00530b00
        ;   XREF to: 00530ad6 (CONDITIONAL_JUMP)  ; LAB_00530ad6
    XOR EBX,EBX                         ; 00530b02
        ;   Label: LAB_00530b02
    MOV ESI,dword ptr [0x01fc8e84]      ; 00530b04 | DAT_01fc8e84
    MOV dword ptr [0x0200e23c],EBX      ; 00530b0a | DAT_0200e23c
    TEST ESI,ESI                        ; 00530b10
    JLE 0x00530b47                      ; 00530b12
        ;   XREF to: 00530b47 (CONDITIONAL_JUMP)  ; LAB_00530b47
    SHL ESI,0x2                         ; 00530b14
    XOR EDX,EDX                         ; 00530b17
    XOR EAX,EAX                         ; 00530b19
    MOV EBX,dword ptr [EAX + 0x1fc8e88] ; 00530b1b
        ;   Label: LAB_00530b1b
    CMP dword ptr [EBX + 0x1cb4],0x0    ; 00530b21
    JZ 0x00530b40                       ; 00530b28
        ;   XREF to: 00530b40 (CONDITIONAL_JUMP)  ; LAB_00530b40
    MOV ECX,dword ptr [0x0200e23c]      ; 00530b2a | DAT_0200e23c
    ADD EDX,0x4                         ; 00530b30
    INC ECX                             ; 00530b33
    MOV dword ptr [EDX + 0x200e23c],EBX ; 00530b34
    MOV dword ptr [0x0200e23c],ECX      ; 00530b3a | DAT_0200e23c
    ADD EAX,0x4                         ; 00530b40
        ;   Label: LAB_00530b40
    CMP EAX,ESI                         ; 00530b43
    JL 0x00530b1b                       ; 00530b45
        ;   XREF to: 00530b1b (CONDITIONAL_JUMP)  ; LAB_00530b1b
    MOV EAX,[0x01fc961c]                ; 00530b47 | DAT_01fc961c
        ;   Label: LAB_00530b47
    MOV [0x0200e3d4],EAX                ; 00530b4c | DAT_0200e3d4
    TEST EAX,EAX                        ; 00530b51
    JLE 0x00530b80                      ; 00530b53
        ;   XREF to: 00530b80 (CONDITIONAL_JUMP)  ; LAB_00530b80
    MOV EBX,dword ptr [0x01fc961c]      ; 00530b55 | DAT_01fc961c
    XOR EAX,EAX                         ; 00530b5b
    SHL EBX,0x2                         ; 00530b5d
    ADD EAX,0x4                         ; 00530b60
        ;   Label: LAB_00530b60
    MOV EDX,dword ptr [EAX + 0x1fc961c] ; 00530b63
    MOV dword ptr [EAX + 0x200e3d4],EDX ; 00530b69
    CMP EAX,EBX                         ; 00530b6f
    JL 0x00530b60                       ; 00530b71
        ;   XREF to: 00530b60 (CONDITIONAL_JUMP)  ; LAB_00530b60
    LEA EAX,[EAX]                       ; 00530b73
    LEA EDX,[EDX]                       ; 00530b79
    NOP                                 ; 00530b7f
    MOV EAX,[0x01fc9cd4]                ; 00530b80 | DAT_01fc9cd4
        ;   Label: LAB_00530b80
    MOV [0x0200e568],EAX                ; 00530b85 | DAT_0200e568
    TEST EAX,EAX                        ; 00530b8a
    JLE 0x00530bb0                      ; 00530b8c
        ;   XREF to: 00530bb0 (CONDITIONAL_JUMP)  ; LAB_00530bb0
    MOV EBX,dword ptr [0x01fc9cd4]      ; 00530b8e | DAT_01fc9cd4
    XOR EAX,EAX                         ; 00530b94
    SHL EBX,0x2                         ; 00530b96
    ADD EAX,0x4                         ; 00530b99
        ;   Label: LAB_00530b99
    MOV EDX,dword ptr [EAX + 0x1fc9cd4] ; 00530b9c
    MOV dword ptr [EAX + 0x200e568],EDX ; 00530ba2
    CMP EAX,EBX                         ; 00530ba8
    JL 0x00530b99                       ; 00530baa
        ;   XREF to: 00530b99 (CONDITIONAL_JUMP)  ; LAB_00530b99
    LEA EAX,[EAX]                       ; 00530bac
    MOV ESP,EBP                         ; 00530bb0
        ;   Label: LAB_00530bb0
    POP EBP                             ; 00530bb2
    POP EDI                             ; 00530bb3
    POP ESI                             ; 00530bb4
    POP EBX                             ; 00530bb5
    RET                                 ; 00530bb6
    MOV EBX,dword ptr [0x01fc9608]      ; 00530bb7 | DAT_01fc9608
        ;   Label: LAB_00530bb7
    XOR ECX,ECX                         ; 00530bbd
    XOR ESI,ESI                         ; 00530bbf
    MOV dword ptr [0x0200e3c0],ECX      ; 00530bc1 | DAT_0200e3c0
    TEST EBX,EBX                        ; 00530bc7
    JLE 0x00530c1e                      ; 00530bc9
        ;   XREF to: 00530c1e (CONDITIONAL_JUMP)  ; LAB_00530c1e
    XOR EBX,EBX                         ; 00530bcb
    MOV EAX,dword ptr [EBX + 0x1fc960c] ; 00530bcd
        ;   Label: LAB_00530bcd
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 00530bd3
    JZ 0x00530c11                       ; 00530bda
        ;   XREF to: 00530c11 (CONDITIONAL_JUMP)  ; LAB_00530c11
    MOV ECX,dword ptr [EBP + 0x24]      ; 00530bdc
    PUSH ECX                            ; 00530bdf
    MOV EDX,dword ptr [EBP + 0x20]      ; 00530be0
    PUSH EDX                            ; 00530be3
    PUSH EDI                            ; 00530be4
    MOV ECX,dword ptr [EBP + 0x18]      ; 00530be5
    PUSH ECX                            ; 00530be8
    PUSH EAX                            ; 00530be9
    CALL FUN_00441720                   ; 00530bea
        ;   XREF to: 00441720 (UNCONDITIONAL_CALL)  ; undefined FUN_00441720()
    ADD ESP,0x14                        ; 00530bef
    TEST EAX,EAX                        ; 00530bf2
    JZ 0x00530c11                       ; 00530bf4
        ;   XREF to: 00530c11 (CONDITIONAL_JUMP)  ; LAB_00530c11
    MOV EDX,dword ptr [0x0200e3c0]      ; 00530bf6 | DAT_0200e3c0
    MOV EAX,dword ptr [EBX + 0x1fc960c] ; 00530bfc
    MOV dword ptr [EDX*0x4 + 0x200e3c4],EAX ; 00530c02 | DAT_0200e3c4
    LEA EAX,[EDX + 0x1]                 ; 00530c09
    MOV [0x0200e3c0],EAX                ; 00530c0c | DAT_0200e3c0
    MOV EAX,[0x01fc9608]                ; 00530c11 | DAT_01fc9608
        ;   Label: LAB_00530c11
    INC ESI                             ; 00530c16
    ADD EBX,0x4                         ; 00530c17
    CMP ESI,EAX                         ; 00530c1a
    JL 0x00530bcd                       ; 00530c1c
        ;   XREF to: 00530bcd (CONDITIONAL_JUMP)  ; LAB_00530bcd
    MOV ECX,dword ptr [0x01fc8e84]      ; 00530c1e | DAT_01fc8e84
        ;   Label: LAB_00530c1e
    XOR EDX,EDX                         ; 00530c24
    XOR ESI,ESI                         ; 00530c26
    MOV dword ptr [0x0200e23c],EDX      ; 00530c28 | DAT_0200e23c
    TEST ECX,ECX                        ; 00530c2e
    JLE 0x00530c83                      ; 00530c30
        ;   XREF to: 00530c83 (CONDITIONAL_JUMP)  ; LAB_00530c83
    XOR EBX,EBX                         ; 00530c32
    MOV EAX,dword ptr [EBX + 0x1fc8e88] ; 00530c34
        ;   Label: LAB_00530c34
    CMP dword ptr [EAX + 0x1cb4],0x0    ; 00530c3a
    JZ 0x00530c75                       ; 00530c41
        ;   XREF to: 00530c75 (CONDITIONAL_JUMP)  ; LAB_00530c75
    MOV ECX,dword ptr [EBP + 0x24]      ; 00530c43
    PUSH ECX                            ; 00530c46
    MOV EDX,dword ptr [EBP + 0x20]      ; 00530c47
    PUSH EDX                            ; 00530c4a
    PUSH EDI                            ; 00530c4b
    MOV ECX,dword ptr [EBP + 0x18]      ; 00530c4c
    PUSH ECX                            ; 00530c4f
    PUSH EAX                            ; 00530c50
    CALL FUN_00441720                   ; 00530c51
        ;   XREF to: 00441720 (UNCONDITIONAL_CALL)  ; undefined FUN_00441720()
    ADD ESP,0x14                        ; 00530c56
    TEST EAX,EAX                        ; 00530c59
    JZ 0x00530c75                       ; 00530c5b
        ;   XREF to: 00530c75 (CONDITIONAL_JUMP)  ; LAB_00530c75
    MOV EAX,[0x0200e23c]                ; 00530c5d | DAT_0200e23c
    INC EAX                             ; 00530c62
    MOV EDX,dword ptr [EBX + 0x1fc8e88] ; 00530c63
    MOV dword ptr [EAX*0x4 + 0x200e23c],EDX ; 00530c69 | DAT_0200e240
    MOV [0x0200e23c],EAX                ; 00530c70 | DAT_0200e23c
    MOV EDX,dword ptr [0x01fc8e84]      ; 00530c75 | DAT_01fc8e84
        ;   Label: LAB_00530c75
    INC ESI                             ; 00530c7b
    ADD EBX,0x4                         ; 00530c7c
    CMP ESI,EDX                         ; 00530c7f
    JL 0x00530c34                       ; 00530c81
        ;   XREF to: 00530c34 (CONDITIONAL_JUMP)  ; LAB_00530c34
    XOR ECX,ECX                         ; 00530c83
        ;   Label: LAB_00530c83
    MOV ESI,dword ptr [0x01fc9cd4]      ; 00530c85 | DAT_01fc9cd4
    MOV dword ptr [ESP + 0xcc],ECX      ; 00530c8b
    MOV dword ptr [0x0200e568],ECX      ; 00530c92 | DAT_0200e568
    TEST ESI,ESI                        ; 00530c98
    JLE 0x00530d89                      ; 00530c9a
        ;   XREF to: 00530d89 (CONDITIONAL_JUMP)  ; LAB_00530d89
    MOV dword ptr [ESP + 0xc8],ECX      ; 00530ca0
    MOV EBX,dword ptr [ESP + 0xc8]      ; 00530ca7
        ;   Label: LAB_00530ca7
    MOV EBX,dword ptr [EBX + 0x1fc9cd8] ; 00530cae
    MOV EDX,dword ptr [EBP + 0x18]      ; 00530cb4
    LEA EAX,[EBX + 0x104]               ; 00530cb7
    LEA EDI,[ESP + 0x78]                ; 00530cbd
    LEA ESI,[ESP + 0x84]                ; 00530cc1
    FLD float ptr [EAX + 0x4]           ; 00530cc8
    FLD float ptr [EAX + 0x8]           ; 00530ccb
    FLD float ptr [EAX]                 ; 00530cce
    LEA EAX,[ESP + 0x78]                ; 00530cd0
    FSUB float ptr [EDX]                ; 00530cd4
    FXCH ST2                            ; 00530cd6
    FSUB float ptr [EDX + 0x4]          ; 00530cd8
    FXCH                                ; 00530cdb
    FSUB float ptr [EDX + 0x8]          ; 00530cdd
    FXCH ST2                            ; 00530ce0
    FSTP float ptr [ESP + 0x84]         ; 00530ce2
    FSTP float ptr [ESP + 0x88]         ; 00530ce9
    FSTP float ptr [ESP + 0x8c]         ; 00530cf0
    PUSH EAX                            ; 00530cf7
    MOV EDX,dword ptr [EBP + 0x28]      ; 00530cf8
    MOVSD ES:EDI,ESI                    ; 00530cfb
    MOVSD ES:EDI,ESI                    ; 00530cfc
    MOVSD ES:EDI,ESI                    ; 00530cfd
    PUSH EDX                            ; 00530cfe
    LEA ESI,[ESP + 0x98]                ; 00530cff
    LEA EDI,[ESP + 0x20]                ; 00530d06
    CALL FUN_004495a0                   ; 00530d0a
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004495a0()
    LEA ESI,[ESP + 0x98]                ; 00530d0f
    LEA EAX,[ESP + 0x20]                ; 00530d16
    ADD ESP,0x8                         ; 00530d1a
    LEA EDX,[ESP + 0x78]                ; 00530d1d
    MOVSD ES:EDI,ESI                    ; 00530d21
    MOVSD ES:EDI,ESI                    ; 00530d22
    MOVSD ES:EDI,ESI                    ; 00530d23
    CMP EDX,EAX                         ; 00530d24
    JZ 0x00530d43                       ; 00530d26
        ;   XREF to: 00530d43 (CONDITIONAL_JUMP)  ; LAB_00530d43
    MOV EAX,dword ptr [ESP + 0x18]      ; 00530d28
    MOV dword ptr [ESP + 0x78],EAX      ; 00530d2c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00530d30
    MOV dword ptr [ESP + 0x7c],EAX      ; 00530d34
    MOV EAX,dword ptr [ESP + 0x20]      ; 00530d38
    MOV dword ptr [ESP + 0x80],EAX      ; 00530d3c
    FLD float ptr [ESP + 0x78]          ; 00530d43
        ;   Label: LAB_00530d43
    FADD float ptr [EBX + 0x11d4]       ; 00530d47
    MOV EAX,dword ptr [EBP + 0x20]      ; 00530d4d
    FCOMP float ptr [EAX]               ; 00530d50
    FNSTSW AX                           ; 00530d52
    SAHF                                ; 00530d54
    JNC 0x0053107a                      ; 00530d55
        ;   XREF to: 0053107a (CONDITIONAL_JUMP)  ; LAB_0053107a
    MOV EDX,dword ptr [ESP + 0xc8]      ; 00530d5b
        ;   Label: LAB_00530d5b
    MOV ECX,dword ptr [ESP + 0xcc]      ; 00530d62
    MOV EBX,dword ptr [0x01fc9cd4]      ; 00530d69 | DAT_01fc9cd4
    ADD EDX,0x4                         ; 00530d6f
    INC ECX                             ; 00530d72
    MOV dword ptr [ESP + 0xc8],EDX      ; 00530d73
    MOV dword ptr [ESP + 0xcc],ECX      ; 00530d7a
    CMP ECX,EBX                         ; 00530d81
    JL 0x00530ca7                       ; 00530d83
        ;   XREF to: 00530ca7 (CONDITIONAL_JUMP)  ; LAB_00530ca7
    XOR ESI,ESI                         ; 00530d89
        ;   Label: LAB_00530d89
    MOV EDI,dword ptr [0x01fc961c]      ; 00530d8b | DAT_01fc961c
    MOV dword ptr [0x0200e3d4],ESI      ; 00530d91 | DAT_0200e3d4
    TEST EDI,EDI                        ; 00530d97
    JLE 0x00530dea                      ; 00530d99
        ;   XREF to: 00530dea (CONDITIONAL_JUMP)  ; LAB_00530dea
    XOR EBX,EBX                         ; 00530d9b
    MOV EDX,dword ptr [EBP + 0x24]      ; 00530d9d
        ;   Label: LAB_00530d9d
    PUSH EDX                            ; 00530da0
    MOV ECX,dword ptr [EBP + 0x20]      ; 00530da1
    PUSH ECX                            ; 00530da4
    MOV EDI,dword ptr [EBP + 0x28]      ; 00530da5
    PUSH EDI                            ; 00530da8
    MOV EAX,dword ptr [EBP + 0x18]      ; 00530da9
    PUSH EAX                            ; 00530dac
    MOV EDX,dword ptr [EBX + 0x1fc9620] ; 00530dad
    PUSH EDX                            ; 00530db3
    CALL FUN_00448c90                   ; 00530db4
        ;   XREF to: 00448c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00448c90()
    ADD ESP,0x14                        ; 00530db9
    TEST EAX,EAX                        ; 00530dbc
    JZ 0x00530ddc                       ; 00530dbe
        ;   XREF to: 00530ddc (CONDITIONAL_JUMP)  ; LAB_00530ddc
    MOV EDX,dword ptr [0x0200e3d4]      ; 00530dc0 | DAT_0200e3d4
    MOV EAX,dword ptr [EBX + 0x1fc9620] ; 00530dc6
    LEA ECX,[EDX + 0x1]                 ; 00530dcc
    MOV dword ptr [EDX*0x4 + 0x200e3d8],EAX ; 00530dcf | DAT_0200e3d8
    MOV dword ptr [0x0200e3d4],ECX      ; 00530dd6 | DAT_0200e3d4
    MOV EDI,dword ptr [0x01fc961c]      ; 00530ddc | DAT_01fc961c
        ;   Label: LAB_00530ddc
    INC ESI                             ; 00530de2
    ADD EBX,0x4                         ; 00530de3
    CMP ESI,EDI                         ; 00530de6
    JL 0x00530d9d                       ; 00530de8
        ;   XREF to: 00530d9d (CONDITIONAL_JUMP)  ; LAB_00530d9d
    MOV EAX,[0x01fc9ad4]                ; 00530dea | DAT_01fc9ad4
        ;   Label: LAB_00530dea
    XOR EDI,EDI                         ; 00530def
    TEST EAX,EAX                        ; 00530df1
    JLE 0x00530e44                      ; 00530df3
        ;   XREF to: 00530e44 (CONDITIONAL_JUMP)  ; LAB_00530e44
    XOR ESI,ESI                         ; 00530df5
    MOV EDX,dword ptr [EBP + 0x24]      ; 00530df7
        ;   Label: LAB_00530df7
    PUSH EDX                            ; 00530dfa
    MOV ECX,dword ptr [EBP + 0x20]      ; 00530dfb
    PUSH ECX                            ; 00530dfe
    MOV EBX,dword ptr [EBP + 0x28]      ; 00530dff
    PUSH EBX                            ; 00530e02
    MOV EAX,dword ptr [EBP + 0x18]      ; 00530e03
    PUSH EAX                            ; 00530e06
    MOV EDX,dword ptr [ESI + 0x1fc9ad8] ; 00530e07
    PUSH EDX                            ; 00530e0d
    CALL FUN_00448c90                   ; 00530e0e
        ;   XREF to: 00448c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00448c90()
    ADD ESP,0x14                        ; 00530e13
    TEST EAX,EAX                        ; 00530e16
    JZ 0x00530e36                       ; 00530e18
        ;   XREF to: 00530e36 (CONDITIONAL_JUMP)  ; LAB_00530e36
    MOV EDX,dword ptr [0x0200e3d4]      ; 00530e1a | DAT_0200e3d4
    MOV EAX,dword ptr [ESI + 0x1fc9ad8] ; 00530e20
    LEA ECX,[EDX + 0x1]                 ; 00530e26
    MOV dword ptr [EDX*0x4 + 0x200e3d8],EAX ; 00530e29 | DAT_0200e3dc
    MOV dword ptr [0x0200e3d4],ECX      ; 00530e30 | DAT_0200e3d4
    MOV EBX,dword ptr [0x01fc9ad4]      ; 00530e36 | DAT_01fc9ad4
        ;   Label: LAB_00530e36
    INC EDI                             ; 00530e3c
    ADD ESI,0x4                         ; 00530e3d
    CMP EDI,EBX                         ; 00530e40
    JL 0x00530df7                       ; 00530e42
        ;   XREF to: 00530df7 (CONDITIONAL_JUMP)  ; LAB_00530df7
    CMP dword ptr [0x0200e568],0x0      ; 00530e44 | DAT_0200e568
        ;   Label: LAB_00530e44
    JLE 0x00530bb0                      ; 00530e4b
        ;   XREF to: 00530bb0 (CONDITIONAL_JUMP)  ; LAB_00530bb0
    MOV EAX,dword ptr [EBP + 0x24]      ; 00530e51
    FLD float ptr [EAX]                 ; 00530e54
    MOV EAX,dword ptr [EBP + 0x20]      ; 00530e56
    FSUB float ptr [EAX]                ; 00530e59
    MOV EAX,dword ptr [EBP + 0x24]      ; 00530e5b
    FLD float ptr [EAX + 0x4]           ; 00530e5e
    MOV EAX,dword ptr [EBP + 0x20]      ; 00530e61
    FSUB float ptr [EAX + 0x4]          ; 00530e64
    MOV EAX,dword ptr [EBP + 0x24]      ; 00530e67
    LEA EDI,[ESP + 0x48]                ; 00530e6a
    MOV ESI,ESP                         ; 00530e6e
    FLD float ptr [EAX + 0x8]           ; 00530e70
    MOV EAX,dword ptr [EBP + 0x20]      ; 00530e73
    FXCH ST2                            ; 00530e76
    FSTP float ptr [ESP]                ; 00530e78
    FXCH                                ; 00530e7b
    FSUB float ptr [EAX + 0x8]          ; 00530e7d
    FXCH                                ; 00530e80
    FSTP float ptr [ESP + 0x4]          ; 00530e82
    FSTP float ptr [ESP + 0x8]          ; 00530e86
    LEA EAX,[ESP + 0x48]                ; 00530e8a
    MOVSD ES:EDI,ESI                    ; 00530e8e
    MOVSD ES:EDI,ESI                    ; 00530e8f
    MOVSD ES:EDI,ESI                    ; 00530e90
    PUSH EAX                            ; 00530e91
    MOV EDI,dword ptr [EBP + 0x28]      ; 00530e92
    PUSH EDI                            ; 00530e95
    LEA ESI,[ESP + 0xa4]                ; 00530e96
    CALL FUN_00449530                   ; 00530e9d
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined FUN_00449530()
    LEA EDI,[ESP + 0x44]                ; 00530ea2
    ADD ESP,0x8                         ; 00530ea6
    LEA ESI,[ESP + 0x9c]                ; 00530ea9
    MOV EAX,dword ptr [EBP + 0x18]      ; 00530eb0
    MOVSD ES:EDI,ESI                    ; 00530eb3
    MOVSD ES:EDI,ESI                    ; 00530eb4
    MOVSD ES:EDI,ESI                    ; 00530eb5
    FLD float ptr [EAX + 0x4]           ; 00530eb6
    FLD float ptr [EAX + 0x8]           ; 00530eb9
    FLD float ptr [EAX]                 ; 00530ebc
    LEA EDI,[ESP + 0x6c]                ; 00530ebe
    LEA ESI,[ESP + 0x60]                ; 00530ec2
    XOR EAX,EAX                         ; 00530ec6
    FADD float ptr [ESP + 0x3c]         ; 00530ec8
    FXCH ST2                            ; 00530ecc
    FADD float ptr [ESP + 0x40]         ; 00530ece
    FXCH                                ; 00530ed2
    FADD float ptr [ESP + 0x44]         ; 00530ed4
    FXCH ST2                            ; 00530ed8
    FSTP float ptr [ESP + 0x60]         ; 00530eda
    FSTP float ptr [ESP + 0x64]         ; 00530ede
    FSTP float ptr [ESP + 0x68]         ; 00530ee2
    MOV dword ptr [ESP + 0x2c],EAX      ; 00530ee6
    MOV dword ptr [ESP + 0x28],EAX      ; 00530eea
    MOV dword ptr [ESP + 0x24],EAX      ; 00530eee
    MOV dword ptr [ESP + 0x5c],EAX      ; 00530ef2
    MOV dword ptr [ESP + 0x58],EAX      ; 00530ef6
    MOV dword ptr [ESP + 0x54],EAX      ; 00530efa
    MOVSD ES:EDI,ESI                    ; 00530efe
    MOVSD ES:EDI,ESI                    ; 00530eff
    MOVSD ES:EDI,ESI                    ; 00530f00
    MOV EAX,[0x0200e568]                ; 00530f01 | DAT_0200e568
    XOR ESI,ESI                         ; 00530f06
    TEST EAX,EAX                        ; 00530f08
    JLE 0x00530fa4                      ; 00530f0a
        ;   XREF to: 00530fa4 (CONDITIONAL_JUMP)  ; LAB_00530fa4
    LEA EDI,[EAX*0x4 + 0x0]             ; 00530f10
    XOR EBX,EBX                         ; 00530f17
    MOV EDX,dword ptr [EBX + 0x200e56c] ; 00530f19
        ;   Label: LAB_00530f19
    TEST dword ptr [EDX + 0x11d4],0x7fffffff ; 00530f1f
    JZ 0x00531116                       ; 00530f29
        ;   XREF to: 00531116 (CONDITIONAL_JUMP)  ; LAB_00531116
    FLD float ptr [EDX + 0x108]         ; 00530f2f
    FLD float ptr [EDX + 0x104]         ; 00530f35
    FSUB float ptr [ESP + 0x6c]         ; 00530f3b
    FXCH                                ; 00530f3f
    FSUB float ptr [ESP + 0x70]         ; 00530f41
    FXCH                                ; 00530f45
    FST float ptr [ESP + 0xc0]          ; 00530f47
    FMUL float ptr [ESP + 0xc0]         ; 00530f4e
    FXCH                                ; 00530f55
    FST float ptr [ESP + 0xbc]          ; 00530f57
    FMUL float ptr [ESP + 0xbc]         ; 00530f5e
    FLD float ptr [EDX + 0x10c]         ; 00530f65
    FSUB float ptr [ESP + 0x74]         ; 00530f6b
    FXCH                                ; 00530f6f
    FADDP ST2,ST0                       ; 00530f71
    FST float ptr [ESP + 0xb8]          ; 00530f73
    FMUL float ptr [ESP + 0xb8]         ; 00530f7a
    FADDP                               ; 00530f81
    FST float ptr [ESP + 0xc4]          ; 00530f83
    FCOMP float ptr [EDX + 0x11d8]      ; 00530f8a
    FNSTSW AX                           ; 00530f90
    SAHF                                ; 00530f92
    JBE 0x00531146                      ; 00530f93
        ;   XREF to: 00531146 (CONDITIONAL_JUMP)  ; LAB_00531146
    ADD EBX,0x4                         ; 00530f99
        ;   Label: LAB_00530f99
    CMP EBX,EDI                         ; 00530f9c
    JL 0x00530f19                       ; 00530f9e
        ;   XREF to: 00530f19 (CONDITIONAL_JUMP)  ; LAB_00530f19
    TEST ESI,ESI                        ; 00530fa4
        ;   Label: LAB_00530fa4
    JZ 0x005311c4                       ; 00530fa6
        ;   XREF to: 005311c4 (CONDITIONAL_JUMP)  ; LAB_005311c4
    LEA EBX,[ESP + 0xc]                 ; 00530fac
    LEA EAX,[ESP + 0x54]                ; 00530fb0
    FLD float ptr [EAX]                 ; 00530fb4
    FMUL float ptr [0x005fb210]         ; 00530fb6 | DAT_005fb210
    FISTP dword ptr [EBX]               ; 00530fbc
    FLD float ptr [EAX + 0x4]           ; 00530fbe
    FMUL float ptr [0x005fb210]         ; 00530fc1 | DAT_005fb210
    FISTP dword ptr [EBX + 0x4]         ; 00530fc7
    FLD float ptr [EAX + 0x8]           ; 00530fca
    FMUL float ptr [0x005fb210]         ; 00530fcd | DAT_005fb210
    FISTP dword ptr [EBX + 0x8]         ; 00530fd3
    LEA EBX,[ESP + 0x30]                ; 00530fd6
        ;   Label: LAB_00530fd6
    LEA EAX,[ESP + 0x24]                ; 00530fda
    FLD float ptr [EAX]                 ; 00530fde
    FMUL float ptr [0x005fb210]         ; 00530fe0 | DAT_005fb210
    FISTP dword ptr [EBX]               ; 00530fe6
    FLD float ptr [EAX + 0x4]           ; 00530fe8
    FMUL float ptr [0x005fb210]         ; 00530feb | DAT_005fb210
    FISTP dword ptr [EBX + 0x4]         ; 00530ff1
    FLD float ptr [EAX + 0x8]           ; 00530ff4
    FMUL float ptr [0x005fb210]         ; 00530ff7 | DAT_005fb210
    FISTP dword ptr [EBX + 0x8]         ; 00530ffd
    MOV EAX,dword ptr [ESP + 0x30]      ; 00531000
    ADD EAX,dword ptr [ESP + 0xc]       ; 00531004
    MOV ECX,dword ptr [ESP + 0x10]      ; 00531008
    MOV [0x0200e8e8],EAX                ; 0053100c | DAT_0200e8e8
    MOV EAX,dword ptr [ESP + 0x34]      ; 00531011
    ADD EAX,ECX                         ; 00531015
    MOV EBX,dword ptr [ESP + 0x14]      ; 00531017
    MOV [0x0200e8ec],EAX                ; 0053101b | DAT_0200e8ec
    MOV EAX,dword ptr [ESP + 0x38]      ; 00531020
    ADD EAX,EBX                         ; 00531024
    MOV ESI,dword ptr [0x0200e8e8]      ; 00531026 | DAT_0200e8e8
    MOV [0x0200e8f0],EAX                ; 0053102c | DAT_0200e8f0
    CMP ESI,0xffff                      ; 00531031
    JLE 0x00531043                      ; 00531037
        ;   XREF to: 00531043 (CONDITIONAL_JUMP)  ; LAB_00531043
    MOV dword ptr [0x0200e8e8],0xffff   ; 00531039 | DAT_0200e8e8
    CMP dword ptr [0x0200e8ec],0xffff   ; 00531043 | DAT_0200e8ec
        ;   Label: LAB_00531043
    JLE 0x00531059                      ; 0053104d
        ;   XREF to: 00531059 (CONDITIONAL_JUMP)  ; LAB_00531059
    MOV dword ptr [0x0200e8ec],0xffff   ; 0053104f | DAT_0200e8ec
    CMP dword ptr [0x0200e8f0],0xffff   ; 00531059 | DAT_0200e8f0
        ;   Label: LAB_00531059
    JLE 0x00530bb0                      ; 00531063
        ;   XREF to: 00530bb0 (CONDITIONAL_JUMP)  ; LAB_00530bb0
    MOV dword ptr [0x0200e8f0],0xffff   ; 00531069 | DAT_0200e8f0
    MOV ESP,EBP                         ; 00531073
    POP EBP                             ; 00531075
    POP EDI                             ; 00531076
    POP ESI                             ; 00531077
    POP EBX                             ; 00531078
    RET                                 ; 00531079
    FLD float ptr [ESP + 0x7c]          ; 0053107a
        ;   Label: LAB_0053107a
    FADD float ptr [EBX + 0x11d4]       ; 0053107e
    MOV EAX,dword ptr [EBP + 0x20]      ; 00531084
    FCOMP float ptr [EAX + 0x4]         ; 00531087
    FNSTSW AX                           ; 0053108a
    SAHF                                ; 0053108c
    JC 0x00530d5b                       ; 0053108d
        ;   XREF to: 00530d5b (CONDITIONAL_JUMP)  ; LAB_00530d5b
    FLD float ptr [ESP + 0x80]          ; 00531093
    FADD float ptr [EBX + 0x11d4]       ; 0053109a
    MOV EAX,dword ptr [EBP + 0x20]      ; 005310a0
    FCOMP float ptr [EAX + 0x8]         ; 005310a3
    FNSTSW AX                           ; 005310a6
    SAHF                                ; 005310a8
    JC 0x00530d5b                       ; 005310a9
        ;   XREF to: 00530d5b (CONDITIONAL_JUMP)  ; LAB_00530d5b
    FLD float ptr [ESP + 0x78]          ; 005310af
    FSUB float ptr [EBX + 0x11d4]       ; 005310b3
    MOV EAX,dword ptr [EBP + 0x24]      ; 005310b9
    FCOMP float ptr [EAX]               ; 005310bc
    FNSTSW AX                           ; 005310be
    SAHF                                ; 005310c0
    JA 0x00530d5b                       ; 005310c1
        ;   XREF to: 00530d5b (CONDITIONAL_JUMP)  ; LAB_00530d5b
    FLD float ptr [ESP + 0x7c]          ; 005310c7
    FSUB float ptr [EBX + 0x11d4]       ; 005310cb
    MOV EAX,dword ptr [EBP + 0x24]      ; 005310d1
    FCOMP float ptr [EAX + 0x4]         ; 005310d4
    FNSTSW AX                           ; 005310d7
    SAHF                                ; 005310d9
    JA 0x00530d5b                       ; 005310da
        ;   XREF to: 00530d5b (CONDITIONAL_JUMP)  ; LAB_00530d5b
    FLD float ptr [ESP + 0x80]          ; 005310e0
    FSUB float ptr [EBX + 0x11d4]       ; 005310e7
    MOV EAX,dword ptr [EBP + 0x24]      ; 005310ed
    FCOMP float ptr [EAX + 0x8]         ; 005310f0
    FNSTSW AX                           ; 005310f3
    SAHF                                ; 005310f5
    JA 0x00530d5b                       ; 005310f6
        ;   XREF to: 00530d5b (CONDITIONAL_JUMP)  ; LAB_00530d5b
    MOV EAX,[0x0200e568]                ; 005310fc | DAT_0200e568
    LEA ECX,[EAX + 0x1]                 ; 00531101
    MOV dword ptr [EAX*0x4 + 0x200e56c],EBX ; 00531104 | DAT_0200e56c
    MOV dword ptr [0x0200e568],ECX      ; 0053110b | DAT_0200e568
    JMP 0x00530d5b                      ; 00531111
        ;   XREF to: 00530d5b (UNCONDITIONAL_JUMP)  ; LAB_00530d5b
    FLD float ptr [EDX + 0x11c4]        ; 00531116
        ;   Label: LAB_00531116
    FADD float ptr [ESP + 0x54]         ; 0053111c
    FSTP float ptr [ESP + 0x54]         ; 00531120
    FLD float ptr [EDX + 0x11c8]        ; 00531124
    FADD float ptr [ESP + 0x58]         ; 0053112a
    FSTP float ptr [ESP + 0x58]         ; 0053112e
    FLD float ptr [EDX + 0x11cc]        ; 00531132
    FADD float ptr [ESP + 0x5c]         ; 00531138
    INC ESI                             ; 0053113c
    FSTP float ptr [ESP + 0x5c]         ; 0053113d
    JMP 0x00530f99                      ; 00531141
        ;   XREF to: 00530f99 (UNCONDITIONAL_JUMP)  ; LAB_00530f99
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00531146
        ;   Label: LAB_00531146
    MOV ECX,dword ptr [0x01caf5b4]      ; 0053114d | DAT_01caf5b4
    SAR EAX,0x1                         ; 00531153
    ADD EAX,ECX                         ; 00531155
    MOV dword ptr [ESP + 0xb0],EAX      ; 00531157
    FLD float ptr [ESP + 0xb0]          ; 0053115e
    FMUL float ptr [EDX + 0x11dc]       ; 00531165
    FLD1                                ; 0053116b
    FSUBRP                              ; 0053116d
    FLD ST0                             ; 0053116f
    FMUL float ptr [0x005e5972]         ; 00531171 | DAT_005e5972
    FST ST1                             ; 00531177
    FMUL float ptr [EDX + 0x11c4]       ; 00531179
    FLD double ptr [0x005e597a]         ; 0053117f | DAT_005e597a
    FXCH                                ; 00531185
    FMUL ST1                            ; 00531187
    FLD float ptr [ESP + 0x24]          ; 00531189
    FXCH                                ; 0053118d
    FADD ST0,ST1                        ; 0053118f
    FLD ST3                             ; 00531191
    FXCH                                ; 00531193
    FSTP ST2                            ; 00531195
    FXCH                                ; 00531197
    FSTP float ptr [ESP + 0x24]         ; 00531199
    FMUL float ptr [EDX + 0x11c8]       ; 0053119d
    FMUL ST1                            ; 005311a3
    FADD float ptr [ESP + 0x28]         ; 005311a5
    FSTP float ptr [ESP + 0x28]         ; 005311a9
    FXCH                                ; 005311ad
    FMUL float ptr [EDX + 0x11cc]       ; 005311af
    FMULP                               ; 005311b5
    FADD float ptr [ESP + 0x2c]         ; 005311b7
    FSTP float ptr [ESP + 0x2c]         ; 005311bb
    JMP 0x00530f99                      ; 005311bf
        ;   XREF to: 00530f99 (UNCONDITIONAL_JUMP)  ; LAB_00530f99
    MOV EBX,0xaaaa                      ; 005311c4
        ;   Label: LAB_005311c4
    MOV dword ptr [ESP + 0x10],EBX      ; 005311c9
    MOV dword ptr [ESP + 0x14],EBX      ; 005311cd
    MOV dword ptr [ESP + 0xc],EBX       ; 005311d1
    JMP 0x00530fd6                      ; 005311d5
        ;   XREF to: 00530fd6 (UNCONDITIONAL_JUMP)  ; LAB_00530fd6

