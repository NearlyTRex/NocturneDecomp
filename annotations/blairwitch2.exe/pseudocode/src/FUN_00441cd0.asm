; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00441cd0(int param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0049cd50 at 0049ce5b
;
; Referenced Globals:
;   undefined4 DAT_005f4dcc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441cd0
        ;   Label: FUN_00441cd0
    PUSH ESI                            ; 00441cd1
    PUSH EDI                            ; 00441cd2
    PUSH EBP                            ; 00441cd3
    MOV EBP,ESP                         ; 00441cd4
    SUB ESP,0x20                        ; 00441cd6
    MOV EAX,dword ptr [EBP + 0x18]      ; 00441cd9
    LEA EBX,[EBP + -0x20]               ; 00441cdc
    FLD float ptr [EAX]                 ; 00441cdf
    FMUL float ptr [0x005f4dcc]         ; 00441ce1 | DAT_005f4dcc
    FISTP dword ptr [EBX]               ; 00441ce7
    FLD float ptr [EAX + 0x4]           ; 00441ce9
    FMUL float ptr [0x005f4dcc]         ; 00441cec | DAT_005f4dcc
    FISTP dword ptr [EBX + 0x4]         ; 00441cf2
    FLD float ptr [EAX + 0x8]           ; 00441cf5
    FMUL float ptr [0x005f4dcc]         ; 00441cf8 | DAT_005f4dcc
    FISTP dword ptr [EBX + 0x8]         ; 00441cfe
    FLD float ptr [EBP + 0x1c]          ; 00441d01
    FLD float ptr [0x005f4dcc]          ; 00441d07 | DAT_005f4dcc
    FMULP                               ; 00441d0d
    FIST dword ptr [EBP + 0xfffffff8]   ; 00441d0f
    FISTP dword ptr [EBP + 0xfffffffc]  ; 00441d15
    MOV EAX,dword ptr [EBP + 0x14]      ; 00441d1b
    MOV EDX,dword ptr [EBP + -0x20]     ; 00441d1e
    SUB EDX,dword ptr [EAX + 0x16c]     ; 00441d21
    MOV EAX,dword ptr [EBP + 0x14]      ; 00441d27
    MOV dword ptr [EBP + -0x20],EDX     ; 00441d2a
    MOV ECX,dword ptr [EBP + -0x1c]     ; 00441d2d
    SUB ECX,dword ptr [EAX + 0x170]     ; 00441d30
    MOV EAX,dword ptr [EBP + 0x14]      ; 00441d36
    MOV dword ptr [EBP + -0x1c],ECX     ; 00441d39
    MOV EBX,dword ptr [EBP + -0x18]     ; 00441d3c
    SUB EBX,dword ptr [EAX + 0x174]     ; 00441d3f
    MOV EAX,EDX                         ; 00441d45
    MOV dword ptr [EBP + -0x18],EBX     ; 00441d47
    CDQ                                 ; 00441d4a
    XOR EAX,EDX                         ; 00441d4b
    SUB EAX,EDX                         ; 00441d4d
    CMP EAX,dword ptr [EBP + -0x8]      ; 00441d4f
    JGE 0x00441d65                      ; 00441d52
        ;   XREF to: 00441d65 (CONDITIONAL_JUMP)  ; LAB_00441d65
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00441d54
    CDQ                                 ; 00441d57
    XOR EAX,EDX                         ; 00441d58
    SUB EAX,EDX                         ; 00441d5a
    CMP EAX,dword ptr [EBP + -0x8]      ; 00441d5c
    JL 0x00441e5e                       ; 00441d5f
        ;   XREF to: 00441e5e (CONDITIONAL_JUMP)  ; LAB_00441e5e
    MOV EDX,dword ptr [EBP + 0x14]      ; 00441d65
        ;   Label: LAB_00441d65
    MOV EAX,dword ptr [EBP + -0x20]     ; 00441d68
    MOV EDX,dword ptr [EDX + 0x178]     ; 00441d6b
    IMUL EDX                            ; 00441d71
    SHRD EAX,EDX,0x10                   ; 00441d73
    MOV EDX,dword ptr [EBP + 0x14]      ; 00441d77
    MOV ECX,EAX                         ; 00441d7a
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00441d7c
    MOV EDX,dword ptr [EDX + 0x184]     ; 00441d7f
    IMUL EDX                            ; 00441d85
    SHRD EAX,EDX,0x10                   ; 00441d87
    MOV EDX,dword ptr [EBP + 0x14]      ; 00441d8b
    ADD ECX,EAX                         ; 00441d8e
    MOV EAX,dword ptr [EBP + -0x18]     ; 00441d90
    MOV EDX,dword ptr [EDX + 0x190]     ; 00441d93
    IMUL EDX                            ; 00441d99
    SHRD EAX,EDX,0x10                   ; 00441d9b
    MOV EDX,dword ptr [EBP + 0x14]      ; 00441d9f
    ADD ECX,EAX                         ; 00441da2
    MOV EAX,dword ptr [EBP + -0x20]     ; 00441da4
    MOV EDX,dword ptr [EDX + 0x17c]     ; 00441da7
    MOV dword ptr [EBP + -0x14],ECX     ; 00441dad
    IMUL EDX                            ; 00441db0
    SHRD EAX,EDX,0x10                   ; 00441db2
    MOV EDX,dword ptr [EBP + 0x14]      ; 00441db6
    MOV ECX,EAX                         ; 00441db9
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00441dbb
    MOV EDX,dword ptr [EDX + 0x188]     ; 00441dbe
    IMUL EDX                            ; 00441dc4
    SHRD EAX,EDX,0x10                   ; 00441dc6
    MOV EDX,dword ptr [EBP + 0x14]      ; 00441dca
    ADD ECX,EAX                         ; 00441dcd
    MOV EAX,dword ptr [EBP + -0x18]     ; 00441dcf
    MOV EDX,dword ptr [EDX + 0x194]     ; 00441dd2
    IMUL EDX                            ; 00441dd8
    SHRD EAX,EDX,0x10                   ; 00441dda
    MOV EDX,dword ptr [EBP + 0x14]      ; 00441dde
    ADD ECX,EAX                         ; 00441de1
    MOV EAX,dword ptr [EBP + -0x20]     ; 00441de3
    MOV EDX,dword ptr [EDX + 0x180]     ; 00441de6
    MOV dword ptr [EBP + -0x10],ECX     ; 00441dec
    IMUL EDX                            ; 00441def
    SHRD EAX,EDX,0x10                   ; 00441df1
    MOV EDX,dword ptr [EBP + 0x14]      ; 00441df5
    MOV ECX,EAX                         ; 00441df8
    MOV EAX,dword ptr [EBP + -0x1c]     ; 00441dfa
    MOV EDX,dword ptr [EDX + 0x18c]     ; 00441dfd
    IMUL EDX                            ; 00441e03
    SHRD EAX,EDX,0x10                   ; 00441e05
    MOV EDX,dword ptr [EBP + 0x14]      ; 00441e09
    ADD ECX,EAX                         ; 00441e0c
    MOV EAX,dword ptr [EBP + -0x18]     ; 00441e0e
    MOV EDX,dword ptr [EDX + 0x198]     ; 00441e11
    IMUL EDX                            ; 00441e17
    SHRD EAX,EDX,0x10                   ; 00441e19
    ADD ECX,EAX                         ; 00441e1d
    MOV EAX,dword ptr [EBP + -0x14]     ; 00441e1f
    MOV dword ptr [EBP + -0xc],ECX      ; 00441e22
    MOV ECX,dword ptr [EBP + -0x8]      ; 00441e25
    MOV EBX,dword ptr [EBP + -0xc]      ; 00441e28
    SUB EAX,ECX                         ; 00441e2b
    CMP EAX,EBX                         ; 00441e2d
    JG 0x00441e55                       ; 00441e2f
        ;   XREF to: 00441e55 (CONDITIONAL_JUMP)  ; LAB_00441e55
    MOV EDX,dword ptr [EBP + -0x14]     ; 00441e31
    MOV ESI,dword ptr [EBP + -0x8]      ; 00441e34
    MOV EAX,EBX                         ; 00441e37
    ADD EDX,ESI                         ; 00441e39
    NEG EAX                             ; 00441e3b
    CMP EDX,EAX                         ; 00441e3d
    JL 0x00441e55                       ; 00441e3f
        ;   XREF to: 00441e55 (CONDITIONAL_JUMP)  ; LAB_00441e55
    MOV EDX,dword ptr [EBP + -0x10]     ; 00441e41
    SUB EDX,dword ptr [EBP + -0x4]      ; 00441e44
    CMP EDX,EBX                         ; 00441e47
    JG 0x00441e55                       ; 00441e49
        ;   XREF to: 00441e55 (CONDITIONAL_JUMP)  ; LAB_00441e55
    MOV EDX,dword ptr [EBP + -0x10]     ; 00441e4b
    ADD EDX,dword ptr [EBP + -0x4]      ; 00441e4e
    CMP EDX,EAX                         ; 00441e51
    JGE 0x00441e6f                      ; 00441e53
        ;   XREF to: 00441e6f (CONDITIONAL_JUMP)  ; LAB_00441e6f
    XOR EAX,EAX                         ; 00441e55
        ;   Label: LAB_00441e55
    MOV ESP,EBP                         ; 00441e57
    POP EBP                             ; 00441e59
    POP EDI                             ; 00441e5a
    POP ESI                             ; 00441e5b
    POP EBX                             ; 00441e5c
    RET                                 ; 00441e5d
    MOV EAX,dword ptr [EBP + -0x18]     ; 00441e5e
        ;   Label: LAB_00441e5e
    CDQ                                 ; 00441e61
    XOR EAX,EDX                         ; 00441e62
    SUB EAX,EDX                         ; 00441e64
    CMP EAX,dword ptr [EBP + -0x8]      ; 00441e66
    JGE 0x00441d65                      ; 00441e69
        ;   XREF to: 00441d65 (CONDITIONAL_JUMP)  ; LAB_00441d65
    MOV EAX,0x1                         ; 00441e6f
        ;   Label: LAB_00441e6f
    MOV ESP,EBP                         ; 00441e74
    POP EBP                             ; 00441e76
    POP EDI                             ; 00441e77
    POP ESI                             ; 00441e78
    POP EBX                             ; 00441e79
    RET                                 ; 00441e7a

