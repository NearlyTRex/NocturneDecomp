; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00444b70(int *param_1,float param_2,float *param_3,undefined4 *param_4)
;
; Local Variables:
; undefined8       Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined        Stack[-0x9c]:1  local_9c
; undefined        Stack[-0x8c]:1  local_8c
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
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00444ac0 at 00444aec
;
; Referenced Globals:
;   undefined4 DAT_005b989d
;
; Called Functions:
;   FUN_00585b20
;   FUN_005a3120
;   FUN_005a3600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444b70
        ;   Label: FUN_00444b70
    PUSH ESI                            ; 00444b71
    PUSH EDI                            ; 00444b72
    PUSH EBP                            ; 00444b73
    MOV EBP,ESP                         ; 00444b74
    SUB ESP,0xa8                        ; 00444b76
    AND ESP,0xfffffff8                  ; 00444b7c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00444b7f
    MOV EDX,dword ptr [EBX + 0x8]       ; 00444b82
    TEST EDX,EDX                        ; 00444b85
    JNZ 0x00444d3b                      ; 00444b87
        ;   XREF to: 00444d3b (CONDITIONAL_JUMP)  ; LAB_00444d3b
    FLD float ptr [EBP + 0x18]          ; 00444b8d
    FLDZ                                ; 00444b90
    FCOMPP                              ; 00444b92
    FNSTSW AX                           ; 00444b94
    SAHF                                ; 00444b96
    JC 0x00444e20                       ; 00444b97
        ;   XREF to: 00444e20 (CONDITIONAL_JUMP)  ; LAB_00444e20
    MOV dword ptr [ESP + 0xa0],EDX      ; 00444b9d
    MOV dword ptr [ESP + 0x14],EDX      ; 00444ba4
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00444ba8
        ;   Label: LAB_00444ba8
    SHL EAX,0x2                         ; 00444baf
    FLD float ptr [ESP + 0x14]          ; 00444bb2
    MOV ECX,EAX                         ; 00444bb6
    SHL EAX,0x3                         ; 00444bb8
    FSTP double ptr [ESP]               ; 00444bbb
    SUB EAX,ECX                         ; 00444bbe
    FLD double ptr [ESP]                ; 00444bc0
    MOV dword ptr [ESP + 0x98],EAX      ; 00444bc3
    FCOMP double ptr [0x005b989d]       ; 00444bca | DAT_005b989d
    FNSTSW AX                           ; 00444bd0
    SAHF                                ; 00444bd2
    JBE 0x00444e86                      ; 00444bd3
        ;   XREF to: 00444e86 (CONDITIONAL_JUMP)  ; LAB_00444e86
    LEA EAX,[EDX*0x4 + 0x0]             ; 00444bd9
    MOV ECX,EAX                         ; 00444be0
    SHL EAX,0x3                         ; 00444be2
    SUB EAX,ECX                         ; 00444be5
    MOV ECX,dword ptr [EBX + 0x4]       ; 00444be7
    FLD float ptr [ESP + 0x14]          ; 00444bea
    FLD float ptr [ECX + EAX*0x1]       ; 00444bee
    FMUL ST1                            ; 00444bf1
    FLD float ptr [ECX + EAX*0x1 + 0x4] ; 00444bf3
    FMUL ST2                            ; 00444bf7
    FLD float ptr [ECX + EAX*0x1 + 0x8] ; 00444bf9
    FMULP ST3                           ; 00444bfd
    FLD1                                ; 00444bff
    LEA EDI,[ESP + 0x48]                ; 00444c01
    LEA ESI,[ESP + 0x6c]                ; 00444c05
    FSUB double ptr [ESP]               ; 00444c09
    MOV EAX,dword ptr [ESP + 0x98]      ; 00444c0c
    FXCH ST2                            ; 00444c13
    FSTP float ptr [ESP + 0x6c]         ; 00444c15
    FSTP float ptr [ESP + 0x70]         ; 00444c19
    FXCH                                ; 00444c1d
    FSTP float ptr [ESP + 0x74]         ; 00444c1f
    MOVSD ES:EDI,ESI                    ; 00444c23
    MOVSD ES:EDI,ESI                    ; 00444c24
    MOVSD ES:EDI,ESI                    ; 00444c25
    FSTP float ptr [ESP + 0x9c]         ; 00444c26
    FLD float ptr [ECX + EAX*0x1]       ; 00444c2d
    FMUL float ptr [ESP + 0x9c]         ; 00444c30
    FLD float ptr [ECX + EAX*0x1 + 0x4] ; 00444c37
    FMUL float ptr [ESP + 0x9c]         ; 00444c3b
    FLD float ptr [ECX + EAX*0x1 + 0x8] ; 00444c42
    FMUL float ptr [ESP + 0x9c]         ; 00444c46
    LEA EDI,[ESP + 0x84]                ; 00444c4d
    LEA ESI,[ESP + 0x60]                ; 00444c54
    LEA ECX,[ESP + 0x78]                ; 00444c58
    FXCH ST2                            ; 00444c5c
    FSTP float ptr [ESP + 0x60]         ; 00444c5e
    FSTP float ptr [ESP + 0x64]         ; 00444c62
    FSTP float ptr [ESP + 0x68]         ; 00444c66
    MOVSD ES:EDI,ESI                    ; 00444c6a
    MOVSD ES:EDI,ESI                    ; 00444c6b
    MOVSD ES:EDI,ESI                    ; 00444c6c
    LEA EAX,[ESP + 0x3c]                ; 00444c6d
    FLD float ptr [ESP + 0x84]          ; 00444c71
    FLD float ptr [ESP + 0x88]          ; 00444c78
    FLD float ptr [ESP + 0x8c]          ; 00444c7f
    LEA EDI,[ESP + 0x78]                ; 00444c86
    LEA ESI,[ESP + 0x54]                ; 00444c8a
    FXCH ST2                            ; 00444c8e
    FADD float ptr [ESP + 0x48]         ; 00444c90
    FXCH                                ; 00444c94
    FADD float ptr [ESP + 0x4c]         ; 00444c96
    FXCH ST2                            ; 00444c9a
    FADD float ptr [ESP + 0x50]         ; 00444c9c
    FXCH                                ; 00444ca0
    FSTP float ptr [ESP + 0x54]         ; 00444ca2
    FXCH                                ; 00444ca6
    FSTP float ptr [ESP + 0x58]         ; 00444ca8
    FSTP float ptr [ESP + 0x5c]         ; 00444cac
    MOVSD ES:EDI,ESI                    ; 00444cb0
    MOVSD ES:EDI,ESI                    ; 00444cb1
    MOVSD ES:EDI,ESI                    ; 00444cb2
    CMP EAX,ECX                         ; 00444cb3
    JZ 0x00444cd2                       ; 00444cb5
        ;   XREF to: 00444cd2 (CONDITIONAL_JUMP)  ; LAB_00444cd2
    MOV EAX,dword ptr [ESP + 0x78]      ; 00444cb7
    MOV dword ptr [ESP + 0x3c],EAX      ; 00444cbb
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00444cbf
    MOV dword ptr [ESP + 0x40],EAX      ; 00444cc3
    MOV EAX,dword ptr [ESP + 0x80]      ; 00444cc7
    MOV dword ptr [ESP + 0x44],EAX      ; 00444cce
    SHL EDX,0x2                         ; 00444cd2
        ;   Label: LAB_00444cd2
    LEA EAX,[EDX*0x8 + 0x0]             ; 00444cd5
    MOV ECX,dword ptr [EBX + 0x4]       ; 00444cdc
    SUB EAX,EDX                         ; 00444cdf
    ADD EAX,ECX                         ; 00444ce1
    ADD EAX,0xc                         ; 00444ce3
    PUSH dword ptr [ESP + 0x14]         ; 00444ce6
    PUSH EAX                            ; 00444cea
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00444ceb
    SHL EAX,0x2                         ; 00444cf2
    MOV EDX,EAX                         ; 00444cf5
    SHL EAX,0x3                         ; 00444cf7
    SUB EAX,EDX                         ; 00444cfa
    ADD EAX,ECX                         ; 00444cfc
    ADD EAX,0xc                         ; 00444cfe
    PUSH EAX                            ; 00444d01
    LEA ESI,[ESP + 0x28]                ; 00444d02
    LEA EDI,[ESP + 0x38]                ; 00444d06
    CALL FUN_00585b20                   ; 00444d0a
        ;   XREF to: 00585b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00585b20()
    LEA ESI,[ESP + 0x28]                ; 00444d0f
    ADD ESP,0xc                         ; 00444d13
    MOVSD ES:EDI,ESI                    ; 00444d16
        ;   Label: LAB_00444d16
    MOVSD ES:EDI,ESI                    ; 00444d17
    MOVSD ES:EDI,ESI                    ; 00444d18
    MOVSD ES:EDI,ESI                    ; 00444d19
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00444d1a
    LEA EAX,[ESP + 0x3c]                ; 00444d1d
    CMP EAX,EBX                         ; 00444d21
    JNZ 0x00444ecf                      ; 00444d23
        ;   XREF to: 00444ecf (CONDITIONAL_JUMP)  ; LAB_00444ecf
    MOV EDI,dword ptr [EBP + 0x20]      ; 00444d29
    LEA ESI,[ESP + 0x2c]                ; 00444d2c
    MOVSD ES:EDI,ESI                    ; 00444d30
    MOVSD ES:EDI,ESI                    ; 00444d31
    MOVSD ES:EDI,ESI                    ; 00444d32
    MOVSD ES:EDI,ESI                    ; 00444d33
    MOV ESP,EBP                         ; 00444d34
    POP EBP                             ; 00444d36
    POP EDI                             ; 00444d37
    POP ESI                             ; 00444d38
    POP EBX                             ; 00444d39
    RET                                 ; 00444d3a
    FLD float ptr [EBP + 0x18]          ; 00444d3b
        ;   Label: LAB_00444d3b
    FLDZ                                ; 00444d3e
    FILD dword ptr [EBX]                ; 00444d40
    FSTP float ptr [ESP + 0x18]         ; 00444d42
    FXCH                                ; 00444d46
    FSTP double ptr [ESP + 0x8]         ; 00444d48
    FCOMP double ptr [ESP + 0x8]        ; 00444d4c
    FNSTSW AX                           ; 00444d50
    SAHF                                ; 00444d52
    JBE 0x00444dec                      ; 00444d53
        ;   XREF to: 00444dec (CONDITIONAL_JUMP)  ; LAB_00444dec
    FLD float ptr [EBP + 0x18]          ; 00444d59
    FCHS                                ; 00444d5c
    FDIV float ptr [ESP + 0x18]         ; 00444d5e
    SUB ESP,0x8                         ; 00444d62
    FSTP double ptr [ESP]               ; 00444d65
    CALL FUN_005a3600                   ; 00444d68
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3600()
    MOV dword ptr [ESP + 0x98],EAX      ; 00444d6d
    MOV dword ptr [ESP + 0x9c],EDX      ; 00444d74
    FLD double ptr [ESP + 0x98]         ; 00444d7b
    ADD ESP,0x8                         ; 00444d82
    FMUL float ptr [ESP + 0x18]         ; 00444d85
    FADD double ptr [ESP + 0x8]         ; 00444d89
    FST float ptr [ESP + 0x10]          ; 00444d8d
    FLDZ                                ; 00444d91
    FCOMPP                              ; 00444d93
    FNSTSW AX                           ; 00444d95
    SAHF                                ; 00444d97
    JBE 0x00444da6                      ; 00444d98
        ;   XREF to: 00444da6 (CONDITIONAL_JUMP)  ; LAB_00444da6
    FLD float ptr [ESP + 0x10]          ; 00444d9a
    FADD float ptr [ESP + 0x18]         ; 00444d9e
    FSTP float ptr [ESP + 0x10]         ; 00444da2
        ;   Label: LAB_00444da2
    FLD float ptr [ESP + 0x10]          ; 00444da6
        ;   Label: LAB_00444da6
    FLD ST0                             ; 00444daa
    CALL FUN_005a3120                   ; 00444dac
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0xa0]        ; 00444db1
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00444db8
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00444dbf
    MOV dword ptr [ESP + 0xa4],EAX      ; 00444dc6
    INC EDX                             ; 00444dcd
    FILD dword ptr [ESP + 0xa4]         ; 00444dce
    FSUBP                               ; 00444dd5
    MOV EAX,dword ptr [EBX]             ; 00444dd7
    FSTP float ptr [ESP + 0x14]         ; 00444dd9
    CMP EDX,EAX                         ; 00444ddd
    JL 0x00444ba8                       ; 00444ddf
        ;   XREF to: 00444ba8 (CONDITIONAL_JUMP)  ; LAB_00444ba8
    XOR EDX,EDX                         ; 00444de5
    JMP 0x00444ba8                      ; 00444de7
        ;   XREF to: 00444ba8 (UNCONDITIONAL_JUMP)  ; LAB_00444ba8
    FLD float ptr [EBP + 0x18]          ; 00444dec
        ;   Label: LAB_00444dec
    FDIV float ptr [ESP + 0x18]         ; 00444def
    SUB ESP,0x8                         ; 00444df3
    FSTP double ptr [ESP]               ; 00444df6
    CALL FUN_005a3600                   ; 00444df9
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3600()
    MOV dword ptr [ESP + 0x98],EAX      ; 00444dfe
    MOV dword ptr [ESP + 0x9c],EDX      ; 00444e05
    FLD double ptr [ESP + 0x98]         ; 00444e0c
    ADD ESP,0x8                         ; 00444e13
    FMUL float ptr [ESP + 0x18]         ; 00444e16
    FSUBR double ptr [ESP + 0x8]        ; 00444e1a
    JMP 0x00444da2                      ; 00444e1e
        ;   XREF to: 00444da2 (UNCONDITIONAL_JUMP)  ; LAB_00444da2
    MOV ECX,dword ptr [EBX]             ; 00444e20
        ;   Label: LAB_00444e20
    DEC ECX                             ; 00444e22
    MOV dword ptr [ESP + 0xa4],ECX      ; 00444e23
    FILD dword ptr [ESP + 0xa4]         ; 00444e2a
    FCOMP float ptr [EBP + 0x18]        ; 00444e31
    FNSTSW AX                           ; 00444e34
    SAHF                                ; 00444e36
    JA 0x00444e4d                       ; 00444e37
        ;   XREF to: 00444e4d (CONDITIONAL_JUMP)  ; LAB_00444e4d
    MOV dword ptr [ESP + 0xa0],ECX      ; 00444e39
    MOV EDX,ECX                         ; 00444e40
    XOR ECX,ECX                         ; 00444e42
    MOV dword ptr [ESP + 0x14],ECX      ; 00444e44
    JMP 0x00444ba8                      ; 00444e48
        ;   XREF to: 00444ba8 (UNCONDITIONAL_JUMP)  ; LAB_00444ba8
    FLD float ptr [EBP + 0x18]          ; 00444e4d
        ;   Label: LAB_00444e4d
    FLD ST0                             ; 00444e50
    CALL FUN_005a3120                   ; 00444e52
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0xa0]        ; 00444e57
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00444e5e
    MOV dword ptr [ESP + 0xa4],EAX      ; 00444e65
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00444e6c
    FILD dword ptr [ESP + 0xa4]         ; 00444e73
    FSUBP                               ; 00444e7a
    INC EDX                             ; 00444e7c
    FSTP float ptr [ESP + 0x14]         ; 00444e7d
    JMP 0x00444ba8                      ; 00444e81
        ;   XREF to: 00444ba8 (UNCONDITIONAL_JUMP)  ; LAB_00444ba8
    MOV ECX,dword ptr [ESP + 0x98]      ; 00444e86
        ;   Label: LAB_00444e86
    MOV EDX,dword ptr [EBX + 0x4]       ; 00444e8d
    LEA EAX,[ESP + 0x3c]                ; 00444e90
    ADD EDX,ECX                         ; 00444e94
    CMP EAX,EDX                         ; 00444e96
    JZ 0x00444eae                       ; 00444e98
        ;   XREF to: 00444eae (CONDITIONAL_JUMP)  ; LAB_00444eae
    MOV EAX,dword ptr [EDX]             ; 00444e9a
    MOV dword ptr [ESP + 0x3c],EAX      ; 00444e9c
    MOV EAX,dword ptr [EDX + 0x4]       ; 00444ea0
    MOV dword ptr [ESP + 0x40],EAX      ; 00444ea3
    MOV EAX,dword ptr [EDX + 0x8]       ; 00444ea7
    MOV dword ptr [ESP + 0x44],EAX      ; 00444eaa
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00444eae
        ;   Label: LAB_00444eae
    SHL EAX,0x2                         ; 00444eb5
    MOV EDX,EAX                         ; 00444eb8
    SHL EAX,0x3                         ; 00444eba
    SUB EAX,EDX                         ; 00444ebd
    MOV EDX,dword ptr [EBX + 0x4]       ; 00444ebf
    LEA EDI,[ESP + 0x2c]                ; 00444ec2
    LEA ESI,[EDX + EAX*0x1 + 0xc]       ; 00444ec6
    JMP 0x00444d16                      ; 00444eca
        ;   XREF to: 00444d16 (UNCONDITIONAL_JUMP)  ; LAB_00444d16
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00444ecf
        ;   Label: LAB_00444ecf
    MOV dword ptr [EBX],EAX             ; 00444ed3
    MOV EAX,dword ptr [ESP + 0x40]      ; 00444ed5
    MOV dword ptr [EBX + 0x4],EAX       ; 00444ed9
    MOV EAX,dword ptr [ESP + 0x44]      ; 00444edc
    MOV dword ptr [EBX + 0x8],EAX       ; 00444ee0
    MOV EDI,dword ptr [EBP + 0x20]      ; 00444ee3
    LEA ESI,[ESP + 0x2c]                ; 00444ee6
    MOVSD ES:EDI,ESI                    ; 00444eea
    MOVSD ES:EDI,ESI                    ; 00444eeb
    MOVSD ES:EDI,ESI                    ; 00444eec
    MOVSD ES:EDI,ESI                    ; 00444eed
    MOV ESP,EBP                         ; 00444eee
    POP EBP                             ; 00444ef0
    POP EDI                             ; 00444ef1
    POP ESI                             ; 00444ef2
    POP EBX                             ; 00444ef3
    RET                                 ; 00444ef4

