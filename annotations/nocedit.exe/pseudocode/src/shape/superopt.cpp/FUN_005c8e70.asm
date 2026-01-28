; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown int shape_superopt_cpp_FUN_005c8e70(void)
;
; Local Variables:
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined8       Stack[-0xcc]:8  local_cc
; undefined8       Stack[-0xc4]:8  local_c4
; undefined8       Stack[-0xbc]:8  local_bc
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined8       Stack[-0x9c]:8  local_9c
; undefined8       Stack[-0x94]:8  local_94
; undefined8       Stack[-0x8c]:8  local_8c
; undefined8       Stack[-0x84]:8  local_84
; undefined8       Stack[-0x7c]:8  local_7c
; undefined8       Stack[-0x74]:8  local_74
; undefined1       Stack[-0x6c]:1  local_6c
; undefined8       Stack[-0x54]:8  local_54
; undefined8       Stack[-0x44]:8  local_44
; undefined8       Stack[-0x3c]:8  local_3c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[1]:
;   shape_superopt.cpp_EdgeListCheckPlusFreesLarge_FUN_005c84c0 at 005c879b
;
; Called Functions:
;   shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590
;   shape_superopt.cpp_FUN_005c9100
;   shape_superopt.cpp_FUN_005c9aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c8e70
        ;   Label: shape_superopt.cpp_FUN_005c8e70
    PUSH ESI                            ; 005c8e71
    PUSH EDI                            ; 005c8e72
    PUSH EBP                            ; 005c8e73
    MOV EBP,ESP                         ; 005c8e74
    SUB ESP,0xd4                        ; 005c8e76
    SUB EBP,0x76                        ; 005c8e7c
    MOV EBX,dword ptr [EBP + 0x8a]      ; 005c8e7f
    XOR EDX,EDX                         ; 005c8e85
    MOV EAX,dword ptr [EBX + 0x2c]      ; 005c8e87
    MOV dword ptr [EBP + 0x6e],EDX      ; 005c8e8a
    MOV dword ptr [EBP + 0x62],EDX      ; 005c8e8d
    MOV dword ptr [EBP + 0x4a],EDX      ; 005c8e90
    MOV dword ptr [EBP + 0x4e],EDX      ; 005c8e93
    TEST EAX,EAX                        ; 005c8e96
    JBE 0x005c8fff                      ; 005c8e98
        ;   XREF to: 005c8fff (CONDITIONAL_JUMP)  ; LAB_005c8fff
    LEA EAX,[EBX + 0x14]                ; 005c8e9e
    MOV dword ptr [EBP + 0x5e],EDX      ; 005c8ea1
    MOV dword ptr [EBP + 0x6a],EAX      ; 005c8ea4
    MOV EDX,dword ptr [EBP + 0x5e]      ; 005c8ea7
        ;   Label: LAB_005c8ea7
    MOV EAX,dword ptr [EBX + 0x30]      ; 005c8eaa
    ADD EDX,EAX                         ; 005c8ead
    MOV ESI,EDX                         ; 005c8eaf
    MOV ECX,0x6                         ; 005c8eb1
    LEA EDI,[EBP + 0x1a]                ; 005c8eb6
    LEA ESI,[ESI + 0x10]                ; 005c8eb9
    MOVSD.REP ES:EDI,ESI                ; 005c8ebc
    FLD double ptr [EDX + 0x28]         ; 005c8ebe
    FLD double ptr [EDX + 0x30]         ; 005c8ec1
    FLD double ptr [EDX + 0x38]         ; 005c8ec4
    MOV ECX,0x6                         ; 005c8ec7
    LEA EDI,[EBP + 0x2]                 ; 005c8ecc
    LEA ESI,[EBP + -0x16]               ; 005c8ecf
    FXCH ST2                            ; 005c8ed2
    FSUB double ptr [EDX + 0x10]        ; 005c8ed4
    FXCH                                ; 005c8ed7
    FSUB double ptr [EDX + 0x18]        ; 005c8ed9
    FXCH ST2                            ; 005c8edc
    FSUB double ptr [EDX + 0x20]        ; 005c8ede
    FXCH                                ; 005c8ee1
    FSTP double ptr [EBP + -0x16]       ; 005c8ee3
    FXCH                                ; 005c8ee6
    FSTP double ptr [EBP + -0xe]        ; 005c8ee8
    FSTP double ptr [EBP + -0x6]        ; 005c8eeb
    MOVSD.REP ES:EDI,ESI                ; 005c8eee
    MOV EAX,dword ptr [EBP + 0x2]       ; 005c8ef0
    MOV dword ptr [EBP + -0x2e],EAX     ; 005c8ef3
    MOV EAX,dword ptr [EBP + 0x6]       ; 005c8ef6
    MOV dword ptr [EBP + -0x2a],EAX     ; 005c8ef9
    MOV EAX,dword ptr [EBP + 0xa]       ; 005c8efc
    MOV dword ptr [EBP + -0x26],EAX     ; 005c8eff
    MOV EAX,dword ptr [EBP + 0xe]       ; 005c8f02
    MOV dword ptr [EBP + -0x22],EAX     ; 005c8f05
    MOV EAX,dword ptr [EBP + 0x12]      ; 005c8f08
    MOV dword ptr [EBP + -0x1e],EAX     ; 005c8f0b
    MOV EAX,dword ptr [EBP + 0x16]      ; 005c8f0e
    MOV dword ptr [EBP + -0x1a],EAX     ; 005c8f11
    MOV EAX,dword ptr [EBP + 0x6a]      ; 005c8f14
    FLD double ptr [EBP + 0xa]          ; 005c8f17
    FMUL double ptr [EAX + 0x10]        ; 005c8f1a
    FLD double ptr [EBP + 0x12]         ; 005c8f1d
    FMUL double ptr [EAX + 0x8]         ; 005c8f20
    FSUBP                               ; 005c8f23
    FLD double ptr [EBP + 0x12]         ; 005c8f25
    FXCH                                ; 005c8f28
    FSTP double ptr [EBP + -0x46]       ; 005c8f2a
    FMUL double ptr [EAX]               ; 005c8f2d
    FLD double ptr [EBP + 0x2]          ; 005c8f2f
    FMUL double ptr [EAX + 0x10]        ; 005c8f32
    FSUBP                               ; 005c8f35
    FLD double ptr [EBP + 0x2]          ; 005c8f37
    FXCH                                ; 005c8f3a
    FSTP double ptr [EBP + -0x3e]       ; 005c8f3c
    FMUL double ptr [EAX + 0x8]         ; 005c8f3f
    FLD double ptr [EBP + -0x3e]        ; 005c8f42
    FMUL ST0                            ; 005c8f45
    FLD double ptr [EBP + 0xa]          ; 005c8f47
    FMUL double ptr [EAX]               ; 005c8f4a
    FLD double ptr [EBP + -0x46]        ; 005c8f4c
    FMUL ST0                            ; 005c8f4f
    FXCH                                ; 005c8f51
    FSUBP ST3,ST0                       ; 005c8f53
    FADDP                               ; 005c8f55
    FXCH                                ; 005c8f57
    FST double ptr [EBP + -0x36]        ; 005c8f59
    FMUL double ptr [EBP + -0x36]       ; 005c8f5c
    FADDP                               ; 005c8f5f
    FSQRT                               ; 005c8f61
    FLD double ptr [EBP + -0x46]        ; 005c8f63
    FLD1                                ; 005c8f66
    FDIVRP ST2,ST0                      ; 005c8f68
    FMUL ST1                            ; 005c8f6a
    FLD double ptr [EBP + -0x3e]        ; 005c8f6c
    XOR EAX,EAX                         ; 005c8f6f
    FMUL ST2                            ; 005c8f71
    MOV dword ptr [EBP + 0x5a],EAX      ; 005c8f73
    MOV dword ptr [EBP + 0x72],EAX      ; 005c8f76
    LEA EAX,[EBP + 0x72]                ; 005c8f79
    FLD double ptr [EBP + -0x36]        ; 005c8f7c
    PUSH EAX                            ; 005c8f7f
    LEA EAX,[EBP + 0x5a]                ; 005c8f80
    FMULP ST3                           ; 005c8f83
    PUSH EAX                            ; 005c8f85
    FXCH                                ; 005c8f86
    FSTP double ptr [EBP + -0x46]       ; 005c8f88
    MOV EAX,dword ptr [EBP + -0x46]     ; 005c8f8b
    MOV ECX,dword ptr [EBP + 0x92]      ; 005c8f8e
    MOV dword ptr [EBP + -0x5e],EAX     ; 005c8f94
    MOV EAX,dword ptr [EBP + -0x42]     ; 005c8f97
    FSTP double ptr [EBP + -0x3e]       ; 005c8f9a
    MOV dword ptr [EBP + -0x5a],EAX     ; 005c8f9d
    MOV EAX,dword ptr [EBP + -0x3e]     ; 005c8fa0
    MOV ESI,dword ptr [EBP + 0x8e]      ; 005c8fa3
    MOV dword ptr [EBP + -0x56],EAX     ; 005c8fa9
    MOV EAX,dword ptr [EBP + -0x3a]     ; 005c8fac
    FSTP double ptr [EBP + -0x36]       ; 005c8faf
    MOV dword ptr [EBP + -0x52],EAX     ; 005c8fb2
    MOV EAX,dword ptr [EBP + -0x36]     ; 005c8fb5
    PUSH ECX                            ; 005c8fb8
    MOV dword ptr [EBP + -0x4e],EAX     ; 005c8fb9
    MOV EAX,dword ptr [EBP + -0x32]     ; 005c8fbc
    PUSH ESI                            ; 005c8fbf
    MOV dword ptr [EBP + -0x4a],EAX     ; 005c8fc0
    LEA EAX,[EBP + -0x5e]               ; 005c8fc3
    PUSH EAX                            ; 005c8fc6
    LEA EAX,[EBP + 0x1a]                ; 005c8fc7
    PUSH EAX                            ; 005c8fca
    PUSH EBX                            ; 005c8fcb
    MOV dword ptr [EBP + 0x66],EDX      ; 005c8fcc
    CALL shape_superopt.cpp_FUN_005c9aa0 ; 005c8fcf
        ;   XREF to: 005c9aa0 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_FUN_005c9aa0()
    MOV EDI,dword ptr [EBP + 0x5a]      ; 005c8fd4
    ADD ESP,0x1c                        ; 005c8fd7
    TEST EDI,EDI                        ; 005c8fda
    JZ 0x005c8fe4                       ; 005c8fdc
        ;   XREF to: 005c8fe4 (CONDITIONAL_JUMP)  ; LAB_005c8fe4
    CMP dword ptr [EBP + 0x72],0x0      ; 005c8fde
    JNZ 0x005c900a                      ; 005c8fe2
        ;   XREF to: 005c900a (CONDITIONAL_JUMP)  ; LAB_005c900a
    MOV EDX,dword ptr [EBP + 0x5e]      ; 005c8fe4
        ;   Label: LAB_005c8fe4
    MOV ECX,dword ptr [EBP + 0x62]      ; 005c8fe7
    MOV ESI,dword ptr [EBX + 0x2c]      ; 005c8fea
    ADD EDX,0x60                        ; 005c8fed
    INC ECX                             ; 005c8ff0
    MOV dword ptr [EBP + 0x5e],EDX      ; 005c8ff1
    MOV dword ptr [EBP + 0x62],ECX      ; 005c8ff4
    CMP ECX,ESI                         ; 005c8ff7
    JC 0x005c8ea7                       ; 005c8ff9
        ;   XREF to: 005c8ea7 (CONDITIONAL_JUMP)  ; LAB_005c8ea7
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005c8fff
        ;   Label: LAB_005c8fff
    LEA ESP,[EBP + 0x76]                ; 005c9002
    POP EBP                             ; 005c9005
    POP EDI                             ; 005c9006
    POP ESI                             ; 005c9007
    POP EBX                             ; 005c9008
    RET                                 ; 005c9009
    MOV EDI,0x1                         ; 005c900a
        ;   Label: LAB_005c900a
    PUSH EDI                            ; 005c900f
    LEA EAX,[EBP + 0x5a]                ; 005c9010
    PUSH EAX                            ; 005c9013
    MOV EDX,dword ptr [EBP + 0x8e]      ; 005c9014
    PUSH EDX                            ; 005c901a
    PUSH EBX                            ; 005c901b
    MOV ESI,EDI                         ; 005c901c
    CALL shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590 ; 005c901e
        ;   XREF to: 005ca590 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590()
    ADD ESP,0x10                        ; 005c9023
    TEST EAX,EAX                        ; 005c9026
    JZ 0x005c90e7                       ; 005c9028
        ;   XREF to: 005c90e7 (CONDITIONAL_JUMP)  ; LAB_005c90e7
    PUSH 0x1                            ; 005c902e
        ;   Label: LAB_005c902e
    LEA EAX,[EBP + 0x72]                ; 005c9030
    PUSH EAX                            ; 005c9033
    MOV ECX,dword ptr [EBP + 0x92]      ; 005c9034
    PUSH ECX                            ; 005c903a
    PUSH EBX                            ; 005c903b
    CALL shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590 ; 005c903c
        ;   XREF to: 005ca590 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_ComplexEdgeListSplit_UnevenCheck_FUN_005ca590()
    ADD ESP,0x10                        ; 005c9041
    TEST EAX,EAX                        ; 005c9044
    JZ 0x005c90ee                       ; 005c9046
        ;   XREF to: 005c90ee (CONDITIONAL_JUMP)  ; LAB_005c90ee
    TEST EDI,EDI                        ; 005c904c
        ;   Label: LAB_005c904c
    JNZ 0x005c9058                      ; 005c904e
        ;   XREF to: 005c9058 (CONDITIONAL_JUMP)  ; LAB_005c9058
    TEST ESI,ESI                        ; 005c9050
    JZ 0x005c90f5                       ; 005c9052
        ;   XREF to: 005c90f5 (CONDITIONAL_JUMP)  ; LAB_005c90f5
    MOV ESI,dword ptr [EBP + 0x5a]      ; 005c9058
        ;   Label: LAB_005c9058
    PUSH ESI                            ; 005c905b
    MOV EDI,dword ptr [EBP + 0x8e]      ; 005c905c
    PUSH EDI                            ; 005c9062
    PUSH EBX                            ; 005c9063
    CALL shape_superopt.cpp_FUN_005c9100 ; 005c9064
        ;   XREF to: 005c9100 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_FUN_005c9100()
    MOV dword ptr [EBP + 0x52],EAX      ; 005c9069
    MOV dword ptr [EBP + 0x56],EDX      ; 005c906c
    ADD ESP,0xc                         ; 005c906f
    MOV EAX,dword ptr [EBP + 0x52]      ; 005c9072
    MOV dword ptr [EBP + 0x42],EAX      ; 005c9075
    MOV EAX,dword ptr [EBP + 0x56]      ; 005c9078
    MOV dword ptr [EBP + 0x46],EAX      ; 005c907b
    FLD double ptr [EBP + 0x42]         ; 005c907e
    FCOMP double ptr [EBP + 0x4a]       ; 005c9081
    FNSTSW AX                           ; 005c9084
    SAHF                                ; 005c9086
    JBE 0x005c909b                      ; 005c9087
        ;   XREF to: 005c909b (CONDITIONAL_JUMP)  ; LAB_005c909b
    MOV EAX,dword ptr [EBP + 0x42]      ; 005c9089
    MOV dword ptr [EBP + 0x4a],EAX      ; 005c908c
    MOV EAX,dword ptr [EBP + 0x46]      ; 005c908f
    MOV dword ptr [EBP + 0x4e],EAX      ; 005c9092
    MOV EAX,dword ptr [EBP + 0x66]      ; 005c9095
    MOV dword ptr [EBP + 0x6e],EAX      ; 005c9098
    MOV EAX,dword ptr [EBP + 0x72]      ; 005c909b
        ;   Label: LAB_005c909b
    PUSH EAX                            ; 005c909e
    MOV EDX,dword ptr [EBP + 0x92]      ; 005c909f
    PUSH EDX                            ; 005c90a5
    PUSH EBX                            ; 005c90a6
    CALL shape_superopt.cpp_FUN_005c9100 ; 005c90a7
        ;   XREF to: 005c9100 (UNCONDITIONAL_CALL)  ; undefined shape_superopt.cpp_FUN_005c9100()
    MOV dword ptr [EBP + 0x52],EAX      ; 005c90ac
    MOV dword ptr [EBP + 0x56],EDX      ; 005c90af
    ADD ESP,0xc                         ; 005c90b2
    MOV EAX,dword ptr [EBP + 0x52]      ; 005c90b5
    MOV dword ptr [EBP + 0x32],EAX      ; 005c90b8
    MOV EAX,dword ptr [EBP + 0x56]      ; 005c90bb
    MOV dword ptr [EBP + 0x36],EAX      ; 005c90be
    FLD double ptr [EBP + 0x32]         ; 005c90c1
    FCOMP double ptr [EBP + 0x4a]       ; 005c90c4
    FNSTSW AX                           ; 005c90c7
    SAHF                                ; 005c90c9
    JBE 0x005c8fe4                      ; 005c90ca
        ;   XREF to: 005c8fe4 (CONDITIONAL_JUMP)  ; LAB_005c8fe4
    MOV EAX,dword ptr [EBP + 0x32]      ; 005c90d0
    MOV dword ptr [EBP + 0x4a],EAX      ; 005c90d3
    MOV EAX,dword ptr [EBP + 0x36]      ; 005c90d6
    MOV dword ptr [EBP + 0x4e],EAX      ; 005c90d9
    MOV EAX,dword ptr [EBP + 0x66]      ; 005c90dc
    MOV dword ptr [EBP + 0x6e],EAX      ; 005c90df
    JMP 0x005c8fe4                      ; 005c90e2
        ;   XREF to: 005c8fe4 (UNCONDITIONAL_JUMP)  ; LAB_005c8fe4
    XOR EDI,EDI                         ; 005c90e7
        ;   Label: LAB_005c90e7
    JMP 0x005c902e                      ; 005c90e9
        ;   XREF to: 005c902e (UNCONDITIONAL_JUMP)  ; LAB_005c902e
    XOR ESI,ESI                         ; 005c90ee
        ;   Label: LAB_005c90ee
    JMP 0x005c904c                      ; 005c90f0
        ;   XREF to: 005c904c (UNCONDITIONAL_JUMP)  ; LAB_005c904c
    XOR EAX,EAX                         ; 005c90f5
        ;   Label: LAB_005c90f5
    LEA ESP,[EBP + 0x76]                ; 005c90f7
    POP EBP                             ; 005c90fa
    POP EDI                             ; 005c90fb
    POP ESI                             ; 005c90fc
    POP EBX                             ; 005c90fd
    RET                                 ; 005c90fe

