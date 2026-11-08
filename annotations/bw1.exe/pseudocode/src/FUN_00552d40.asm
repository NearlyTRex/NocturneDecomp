; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00552d40(undefined4 param_1,float *param_2,float *param_3,int param_4)
;
; Local Variables:
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
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   FUN_005a9f10 at 005aa22b
;   FUN_005ab030 at 005ab181
;
; Referenced Globals:
;   undefined4 DAT_005f0a06
;   undefined4 DAT_00629014
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;   undefined4 DAT_01cc804c
;   undefined4 DAT_01fe5c88
;
; Called Functions:
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552d40
        ;   Label: FUN_00552d40
    PUSH ESI                            ; 00552d41
    PUSH EDI                            ; 00552d42
    PUSH EBP                            ; 00552d43
    MOV EBP,ESP                         ; 00552d44
    SUB ESP,0x4c                        ; 00552d46
    AND ESP,0xfffffff8                  ; 00552d49
    MOV EDX,dword ptr [EBP + 0x18]      ; 00552d4c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00552d4f
    FLD float ptr [EDX]                 ; 00552d52
    FLD float ptr [EDX + 0x4]           ; 00552d54
    FLD float ptr [EDX + 0x8]           ; 00552d57
    LEA EDI,[ESP + 0x18]                ; 00552d5a
    XOR ECX,ECX                         ; 00552d5e
    LEA ESI,[ESP + 0x24]                ; 00552d60
    MOV dword ptr [ESP],ECX             ; 00552d64
    FXCH ST2                            ; 00552d67
    FADD float ptr [EAX]                ; 00552d69
    FXCH                                ; 00552d6b
    FADD float ptr [EAX + 0x4]          ; 00552d6d
    FXCH ST2                            ; 00552d70
    FADD float ptr [EAX + 0x8]          ; 00552d72
    FXCH                                ; 00552d75
    FSTP float ptr [ESP + 0x24]         ; 00552d77
    FXCH                                ; 00552d7b
    FSTP float ptr [ESP + 0x28]         ; 00552d7d
    FSTP float ptr [ESP + 0x2c]         ; 00552d81
    MOVSD ES:EDI,ESI                    ; 00552d85
    MOVSD ES:EDI,ESI                    ; 00552d86
    MOVSD ES:EDI,ESI                    ; 00552d87
    MOV dword ptr [ESP + 0x8],ECX       ; 00552d88
    MOV EDI,dword ptr [0x01fe5c88]      ; 00552d8c | DAT_01fe5c88
    MOV dword ptr [ESP + 0x4],ECX       ; 00552d92
    TEST EDI,EDI                        ; 00552d96
    JLE 0x00552dbe                      ; 00552d98
        ;   XREF to: 00552dbe (CONDITIONAL_JUMP)  ; LAB_00552dbe
    LEA EBX,[EDI*0x4 + 0x0]             ; 00552d9a
    MOV EDX,dword ptr [ECX + 0x1fe5c8c] ; 00552da1
        ;   Label: LAB_00552da1
    TEST dword ptr [EDX + 0x11d4],0x7fffffff ; 00552da7
    JNZ 0x00552e79                      ; 00552db1
        ;   XREF to: 00552e79 (CONDITIONAL_JUMP)  ; LAB_00552e79
    ADD ECX,0x4                         ; 00552db7
        ;   Label: LAB_00552db7
    CMP ECX,EBX                         ; 00552dba
    JL 0x00552da1                       ; 00552dbc
        ;   XREF to: 00552da1 (CONDITIONAL_JUMP)  ; LAB_00552da1
    CMP dword ptr [0x01fe5c88],0x0      ; 00552dbe | DAT_01fe5c88
        ;   Label: LAB_00552dbe
    JNZ 0x00552dd7                      ; 00552dc5
        ;   XREF to: 00552dd7 (CONDITIONAL_JUMP)  ; LAB_00552dd7
    MOV EDX,0x43000000                  ; 00552dc7
    MOV dword ptr [ESP],EDX             ; 00552dcc
    MOV dword ptr [ESP + 0x8],EDX       ; 00552dcf
    MOV dword ptr [ESP + 0x4],EDX       ; 00552dd3
    MOV EDX,dword ptr [EBP + 0x20]      ; 00552dd7
        ;   Label: LAB_00552dd7
    LEA EAX,[EDX*0x4 + 0x0]             ; 00552dda
    SUB EAX,EDX                         ; 00552de1
    MOV EBX,0x629014                    ; 00552de3 | DAT_00629014
    SHL EAX,0x4                         ; 00552de8
    FLD float ptr [ESP + 0x4]           ; 00552deb
    ADD EBX,EAX                         ; 00552def
    FCOMP double ptr [0x005f0a06]       ; 00552df1 | DAT_005f0a06
    FNSTSW AX                           ; 00552df7
    SAHF                                ; 00552df9
    JBE 0x00552e04                      ; 00552dfa
        ;   XREF to: 00552e04 (CONDITIONAL_JUMP)  ; LAB_00552e04
    MOV dword ptr [ESP + 0x4],0x437f0000 ; 00552dfc
    FLD float ptr [ESP]                 ; 00552e04
        ;   Label: LAB_00552e04
    FCOMP double ptr [0x005f0a06]       ; 00552e07 | DAT_005f0a06
    FNSTSW AX                           ; 00552e0d
    SAHF                                ; 00552e0f
    JBE 0x00552e19                      ; 00552e10
        ;   XREF to: 00552e19 (CONDITIONAL_JUMP)  ; LAB_00552e19
    MOV dword ptr [ESP],0x437f0000      ; 00552e12
    FLD float ptr [ESP + 0x8]           ; 00552e19
        ;   Label: LAB_00552e19
    FCOMP double ptr [0x005f0a06]       ; 00552e1d | DAT_005f0a06
    FNSTSW AX                           ; 00552e23
    SAHF                                ; 00552e25
    JA 0x00552f3e                       ; 00552e26
        ;   XREF to: 00552f3e (CONDITIONAL_JUMP)  ; LAB_00552f3e
    FLD float ptr [ESP + 0x4]           ; 00552e2c
        ;   Label: LAB_00552e2c
    FLD float ptr [ESP]                 ; 00552e30
    FLD float ptr [ESP + 0x8]           ; 00552e33
    FXCH ST2                            ; 00552e37
    CALL FUN_005c03a0                   ; 00552e39
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x40]        ; 00552e3e
    MOV EAX,dword ptr [ESP + 0x40]      ; 00552e42
    CALL FUN_005c03a0                   ; 00552e46
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    SHL EAX,0x8                         ; 00552e4b
    FISTP dword ptr [ESP + 0x40]        ; 00552e4e
    MOV dword ptr [EBX + 0x20],EAX      ; 00552e52 | DAT_00629034
    MOV EAX,dword ptr [ESP + 0x40]      ; 00552e55
    CALL FUN_005c03a0                   ; 00552e59
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    SHL EAX,0x8                         ; 00552e5e
    FISTP dword ptr [ESP + 0x40]        ; 00552e61
    MOV dword ptr [EBX + 0x24],EAX      ; 00552e65 | DAT_00629038
    MOV EAX,dword ptr [ESP + 0x40]      ; 00552e68
    SHL EAX,0x8                         ; 00552e6c
    MOV dword ptr [EBX + 0x28],EAX      ; 00552e6f | DAT_0062903c
    MOV ESP,EBP                         ; 00552e72
    POP EBP                             ; 00552e74
    POP EDI                             ; 00552e75
    POP ESI                             ; 00552e76
    POP EBX                             ; 00552e77
    RET                                 ; 00552e78
    LEA EAX,[EDX + 0x104]               ; 00552e79
        ;   Label: LAB_00552e79
    LEA EDI,[ESP + 0xc]                 ; 00552e7f
    LEA ESI,[ESP + 0x30]                ; 00552e83
    FLD float ptr [EAX]                 ; 00552e87
    FLD float ptr [EAX + 0x4]           ; 00552e89
    FLD float ptr [EAX + 0x8]           ; 00552e8c
    FXCH ST2                            ; 00552e8f
    FSUB float ptr [ESP + 0x18]         ; 00552e91
    FXCH                                ; 00552e95
    FSUB float ptr [ESP + 0x1c]         ; 00552e97
    FXCH ST2                            ; 00552e9b
    FSUB float ptr [ESP + 0x20]         ; 00552e9d
    FXCH                                ; 00552ea1
    FSTP float ptr [ESP + 0x30]         ; 00552ea3
    FXCH                                ; 00552ea7
    FSTP float ptr [ESP + 0x34]         ; 00552ea9
    FSTP float ptr [ESP + 0x38]         ; 00552ead
    MOVSD ES:EDI,ESI                    ; 00552eb1
    MOVSD ES:EDI,ESI                    ; 00552eb2
    MOVSD ES:EDI,ESI                    ; 00552eb3
    FLD float ptr [ESP + 0x10]          ; 00552eb4
    FMUL ST0                            ; 00552eb8
    FLD float ptr [ESP + 0xc]           ; 00552eba
    FMUL ST0                            ; 00552ebe
    FADDP                               ; 00552ec0
    FLD float ptr [ESP + 0x14]          ; 00552ec2
    FMUL ST0                            ; 00552ec6
    FADDP                               ; 00552ec8
    FSTP float ptr [ESP + 0x48]         ; 00552eca
    MOV EAX,dword ptr [ESP + 0x48]      ; 00552ece
    MOV EDI,dword ptr [0x01cc804c]      ; 00552ed2 | DAT_01cc804c
    SAR EAX,0x1                         ; 00552ed8
    ADD EAX,EDI                         ; 00552eda
    MOV dword ptr [ESP + 0x44],EAX      ; 00552edc
    FLD float ptr [ESP + 0x44]          ; 00552ee0
    FCOMP float ptr [EDX + 0x11d4]      ; 00552ee4
    FNSTSW AX                           ; 00552eea
    SAHF                                ; 00552eec
    JA 0x00552db7                       ; 00552eed
        ;   XREF to: 00552db7 (CONDITIONAL_JUMP)  ; LAB_00552db7
    FLD float ptr [ESP + 0x44]          ; 00552ef3
    FDIV float ptr [EDX + 0x11d4]       ; 00552ef7
    FLD float ptr [EDX + 0x11c4]        ; 00552efd
    FLD1                                ; 00552f03
    FSUBRP ST2,ST0                      ; 00552f05
    FMUL ST1                            ; 00552f07
    FLD float ptr [EDX + 0x11c8]        ; 00552f09
    FMUL ST2                            ; 00552f0f
    FLD float ptr [EDX + 0x11cc]        ; 00552f11
    FMULP ST3                           ; 00552f17
    FXCH                                ; 00552f19
    FADD float ptr [ESP + 0x4]          ; 00552f1b
    FXCH                                ; 00552f1f
    FADD float ptr [ESP]                ; 00552f21
    FXCH ST2                            ; 00552f24
    FADD float ptr [ESP + 0x8]          ; 00552f26
    FXCH                                ; 00552f2a
    FSTP float ptr [ESP + 0x4]          ; 00552f2c
    FXCH                                ; 00552f30
    FSTP float ptr [ESP]                ; 00552f32
    FSTP float ptr [ESP + 0x8]          ; 00552f35
    JMP 0x00552db7                      ; 00552f39
        ;   XREF to: 00552db7 (UNCONDITIONAL_JUMP)  ; LAB_00552db7
    MOV dword ptr [ESP + 0x8],0x437f0000 ; 00552f3e
        ;   Label: LAB_00552f3e
    JMP 0x00552e2c                      ; 00552f46
        ;   XREF to: 00552e2c (UNCONDITIONAL_JUMP)  ; LAB_00552e2c

