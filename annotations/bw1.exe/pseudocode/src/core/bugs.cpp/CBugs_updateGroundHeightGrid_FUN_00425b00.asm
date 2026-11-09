; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_00425b00(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0xb0]:8  local_b0
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined8       Stack[-0x48]:8  local_48
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_bugs.cpp_FUN_00426030 at 004260e8
;   core_bugs.cpp_FUN_004263d0 at 00426808
;
; Referenced Globals:
;   undefined4 DAT_005d50fc
;   undefined4 DAT_005d5100
;   undefined4 DAT_005d5108
;   undefined4 DAT_005fd228
;   undefined4 DAT_007c53b4
;   undefined1 DAT_007c53b8
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_FUN_0048bdc0
;   crt_math.c_floor_FUN_005c0880
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425b00
        ;   Label: core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00425b00
    PUSH ESI                            ; 00425b01
    PUSH EDI                            ; 00425b02
    PUSH EBP                            ; 00425b03
    SUB ESP,0x98                        ; 00425b04
    FLD1                                ; 00425b0a
    MOV EAX,dword ptr [ESP + 0xac]      ; 00425b0c
    LEA EDI,[ESP + 0x18]                ; 00425b13
    MOV ESI,ESP                         ; 00425b17
    FLD float ptr [EAX + 0x19d78]       ; 00425b19
    FLD float ptr [EAX + 0x19d7c]       ; 00425b1f
    FLD float ptr [EAX + 0x19d80]       ; 00425b25
    FXCH ST2                            ; 00425b2b
    FADD float ptr [EAX + 0x19d84]      ; 00425b2d
    FXCH ST3                            ; 00425b33
    FDIV float ptr [0x005fd228]         ; 00425b35 | DAT_005fd228
    FXCH                                ; 00425b3b
    FADD float ptr [EAX + 0x19d88]      ; 00425b3d
    FXCH ST2                            ; 00425b43
    FADD float ptr [EAX + 0x19d8c]      ; 00425b45
    FXCH ST3                            ; 00425b4b
    FSTP float ptr [ESP]                ; 00425b4d
    FXCH                                ; 00425b50
    FSTP float ptr [ESP + 0x4]          ; 00425b52
    FXCH                                ; 00425b56
    FSTP float ptr [ESP + 0x8]          ; 00425b58
    MOVSD ES:EDI,ESI                    ; 00425b5c
    MOVSD ES:EDI,ESI                    ; 00425b5d
    MOVSD ES:EDI,ESI                    ; 00425b5e
    FLD float ptr [0x005d50fc]          ; 00425b5f | DAT_005d50fc
    FLD float ptr [ESP + 0x18]          ; 00425b65
    FMUL ST1                            ; 00425b69
    FLD float ptr [ESP + 0x1c]          ; 00425b6b
    FMUL ST2                            ; 00425b6f
    FLD float ptr [ESP + 0x20]          ; 00425b71
    FMULP ST3                           ; 00425b75
    LEA EDI,[ESP + 0x54]                ; 00425b77
    LEA ESI,[ESP + 0x30]                ; 00425b7b
    FXCH                                ; 00425b7f
    FSTP float ptr [ESP + 0x30]         ; 00425b81
    FSTP float ptr [ESP + 0x34]         ; 00425b85
    FSTP float ptr [ESP + 0x38]         ; 00425b89
    MOVSD ES:EDI,ESI                    ; 00425b8d
    MOVSD ES:EDI,ESI                    ; 00425b8e
    MOVSD ES:EDI,ESI                    ; 00425b8f
    FLD float ptr [EAX + 0x20]          ; 00425b90
    FLD float ptr [EAX + 0x24]          ; 00425b93
    FLD float ptr [EAX + 0x28]          ; 00425b96
    LEA EDI,[ESP + 0xc]                 ; 00425b99
    LEA ESI,[ESP + 0x48]                ; 00425b9d
    FXCH ST2                            ; 00425ba1
    FADD float ptr [ESP + 0x54]         ; 00425ba3
    FXCH                                ; 00425ba7
    FADD float ptr [ESP + 0x58]         ; 00425ba9
    FXCH ST2                            ; 00425bad
    FADD float ptr [ESP + 0x5c]         ; 00425baf
    FXCH                                ; 00425bb3
    FSTP float ptr [ESP + 0x48]         ; 00425bb5
    FXCH                                ; 00425bb9
    FSTP float ptr [ESP + 0x4c]         ; 00425bbb
    FSTP float ptr [ESP + 0x50]         ; 00425bbf
    MOVSD ES:EDI,ESI                    ; 00425bc3
    MOVSD ES:EDI,ESI                    ; 00425bc4
    MOVSD ES:EDI,ESI                    ; 00425bc5
    FLD float ptr [ESP + 0xc]           ; 00425bc6
    FXCH                                ; 00425bca
    FSTP float ptr [ESP + 0x94]         ; 00425bcc
    FMUL float ptr [ESP + 0x94]         ; 00425bd3
    SUB ESP,0x8                         ; 00425bda
    FSTP double ptr [ESP]               ; 00425bdd
    MOV EBX,EAX                         ; 00425be0
    CALL crt_math.c_floor_FUN_005c0880  ; 00425be2
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x68],EAX      ; 00425be7
    MOV dword ptr [ESP + 0x6c],EDX      ; 00425beb
    FLD double ptr [ESP + 0x68]         ; 00425bef
    ADD ESP,0x8                         ; 00425bf3
    FLD float ptr [ESP + 0x14]          ; 00425bf6
    FMUL float ptr [ESP + 0x94]         ; 00425bfa
    FXCH                                ; 00425c01
    CALL crt_math.c_round_FUN_005c03a0  ; 00425c03
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x70]        ; 00425c08
    SUB ESP,0x8                         ; 00425c0c
    FSTP double ptr [ESP]               ; 00425c0f
    CALL crt_math.c_floor_FUN_005c0880  ; 00425c12
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x68],EAX      ; 00425c17
    MOV dword ptr [ESP + 0x6c],EDX      ; 00425c1b
    FLD double ptr [ESP + 0x68]         ; 00425c1f
    ADD ESP,0x8                         ; 00425c23
    MOV EAX,dword ptr [ESP + 0x70]      ; 00425c26
    MOV dword ptr [ESP + 0x94],EAX      ; 00425c2a
    FILD dword ptr [ESP + 0x94]         ; 00425c31
    FMUL float ptr [0x005fd228]         ; 00425c38 | DAT_005fd228
    MOV EAX,EBX                         ; 00425c3e
    FSUB float ptr [EAX + 0x20]         ; 00425c40
    FLD float ptr [0x005fd228]          ; 00425c43 | DAT_005fd228
    FMUL float ptr [0x005d5100]         ; 00425c49 | DAT_005d5100
    FMUL double ptr [0x005d5108]        ; 00425c4f | DAT_005d5108
    FXCH ST2                            ; 00425c55
    CALL crt_math.c_round_FUN_005c03a0  ; 00425c57
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 00425c5c
    FSUB ST0,ST2                        ; 00425c5e
    FXCH                                ; 00425c60
    FISTP dword ptr [ESP + 0x6c]        ; 00425c62
    FSTP float ptr [EAX + 0x19d98]      ; 00425c66
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00425c6c
    MOV dword ptr [ESP + 0x94],EAX      ; 00425c70
    FILD dword ptr [ESP + 0x94]         ; 00425c77
    FMUL float ptr [0x005fd228]         ; 00425c7e | DAT_005fd228
    MOV EAX,EBX                         ; 00425c84
    FSUB float ptr [EAX + 0x28]         ; 00425c86
    FSUBRP                              ; 00425c89
    FSTP float ptr [EAX + 0x19d9c]      ; 00425c8b
    MOV EAX,dword ptr [ESP + 0x70]      ; 00425c91
    CMP EAX,dword ptr [EBX + 0x19d90]   ; 00425c95
    JNZ 0x00425cad                      ; 00425c9b
        ;   XREF to: 00425cad (CONDITIONAL_JUMP)  ; LAB_00425cad
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00425c9d
    CMP EAX,dword ptr [EBX + 0x19d94]   ; 00425ca1
    JZ 0x00425e95                       ; 00425ca7
        ;   XREF to: 00425e95 (CONDITIONAL_JUMP)  ; LAB_00425e95
    MOV EAX,dword ptr [ESP + 0xac]      ; 00425cad
        ;   Label: LAB_00425cad
    MOV EBX,dword ptr [ESP + 0x70]      ; 00425cb4
    MOV EAX,dword ptr [EAX + 0x19d90]   ; 00425cb8
    SUB EAX,EBX                         ; 00425cbe
    MOV dword ptr [ESP + 0x88],EAX      ; 00425cc0
    MOV EAX,dword ptr [ESP + 0xac]      ; 00425cc7
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00425cce
    MOV EAX,dword ptr [EAX + 0x19d94]   ; 00425cd2
    SUB EAX,ESI                         ; 00425cd8
    MOV dword ptr [ESP + 0x84],EAX      ; 00425cda
    MOV EAX,dword ptr [ESP + 0x88]      ; 00425ce1
    MOV ECX,0x240                       ; 00425ce8
    ADD EAX,0xb                         ; 00425ced
    MOV EDI,0x7c53b4                    ; 00425cf0 | DAT_007c53b4
    MOV dword ptr [ESP + 0x80],EAX      ; 00425cf5
    MOV EAX,dword ptr [ESP + 0x84]      ; 00425cfc
    MOV ESI,dword ptr [ESP + 0xac]      ; 00425d03
    ADD EAX,0xb                         ; 00425d0a
    ADD ESI,0x12c64                     ; 00425d0d
    MOV dword ptr [ESP + 0x7c],EAX      ; 00425d13
    PUSH EDI                            ; 00425d17 | DAT_007c53b4
    MOV EAX,ECX                         ; 00425d18
    SHR ECX,0x2                         ; 00425d1a
    MOVSD.REP ES:EDI,ESI                ; 00425d1d | DAT_007c53b4 | DAT_007c53b8
    MOV CL,AL                           ; 00425d1f
    AND CL,0x3                          ; 00425d21
    MOVSB.REP ES:EDI,ESI                ; 00425d24 | DAT_007c53b8
    POP EDI                             ; 00425d26
    MOV ESI,dword ptr [ESP + 0xac]      ; 00425d27
    LEA EDI,[ESP + 0x3c]                ; 00425d2e
    LEA ESI,[ESI + 0x20]                ; 00425d32
    MOV EBX,dword ptr [ESP + 0x88]      ; 00425d35
    MOV EAX,dword ptr [ESP + 0xac]      ; 00425d3c
    MOVSD ES:EDI,ESI                    ; 00425d43
    MOVSD ES:EDI,ESI                    ; 00425d44
    MOVSD ES:EDI,ESI                    ; 00425d45
    MOV dword ptr [ESP + 0x90],EAX      ; 00425d46
    FLD float ptr [ESP + 0x3c]          ; 00425d4d
    FLD float ptr [ESP + 0x44]          ; 00425d51
    LEA EDI,[ESP + 0x24]                ; 00425d55
    FADD float ptr [EAX + 0x19d9c]      ; 00425d59
    FXCH                                ; 00425d5f
    FADD float ptr [EAX + 0x19d98]      ; 00425d61
    LEA EAX,[EBX*0x4 + 0x0]             ; 00425d67
    LEA ESI,[ESP + 0x3c]                ; 00425d6e
    SUB EAX,EBX                         ; 00425d72
    FSTP float ptr [ESP + 0x3c]         ; 00425d74
    SHL EAX,0x4                         ; 00425d78
    FSTP float ptr [ESP + 0x44]         ; 00425d7b
    NEG EAX                             ; 00425d7f
    MOVSD ES:EDI,ESI                    ; 00425d81
    MOVSD ES:EDI,ESI                    ; 00425d82
    MOVSD ES:EDI,ESI                    ; 00425d83
    MOV dword ptr [ESP + 0x78],EAX      ; 00425d84
    MOV EAX,dword ptr [ESP + 0x84]      ; 00425d88
    XOR EDI,EDI                         ; 00425d8f
    SHL EAX,0x2                         ; 00425d91
    MOV dword ptr [ESP + 0x8c],EDI      ; 00425d94
    MOV dword ptr [ESP + 0x74],EAX      ; 00425d9b
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00425d9f
        ;   Label: LAB_00425d9f
    MOV dword ptr [ESP + 0x94],EAX      ; 00425da6
    FILD dword ptr [ESP + 0x94]         ; 00425dad
    FMUL float ptr [0x005fd228]         ; 00425db4 | DAT_005fd228
    MOV EBP,dword ptr [ESP + 0x90]      ; 00425dba
    MOV ESI,dword ptr [ESP + 0x78]      ; 00425dc1
    XOR EBX,EBX                         ; 00425dc5
    MOV EAX,dword ptr [ESP + 0x74]      ; 00425dc7
    MOV EDI,EBP                         ; 00425dcb
    NEG EAX                             ; 00425dcd
    FADD float ptr [ESP + 0x3c]         ; 00425dcf
    ADD ESI,EAX                         ; 00425dd3
    FSTP float ptr [ESP + 0x24]         ; 00425dd5
    MOV dword ptr [ESP + 0x94],EBX      ; 00425dd9
        ;   Label: LAB_00425dd9
    FILD dword ptr [ESP + 0x94]         ; 00425de0
    FMUL float ptr [0x005fd228]         ; 00425de7 | DAT_005fd228
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00425ded
    FADD float ptr [ESP + 0x44]         ; 00425df4
    MOV EDX,dword ptr [ESP + 0x88]      ; 00425df8
    FSTP float ptr [ESP + 0x2c]         ; 00425dff
    CMP EAX,EDX                         ; 00425e03
    JL 0x00425ea0                       ; 00425e05
        ;   XREF to: 00425ea0 (CONDITIONAL_JUMP)  ; LAB_00425ea0
    CMP EAX,dword ptr [ESP + 0x80]      ; 00425e0b
    JG 0x00425ea0                       ; 00425e12
        ;   XREF to: 00425ea0 (CONDITIONAL_JUMP)  ; LAB_00425ea0
    CMP EBX,dword ptr [ESP + 0x84]      ; 00425e18
    JL 0x00425ea0                       ; 00425e1f
        ;   XREF to: 00425ea0 (CONDITIONAL_JUMP)  ; LAB_00425ea0
    CMP EBX,dword ptr [ESP + 0x7c]      ; 00425e25
    JG 0x00425ea0                       ; 00425e29
        ;   XREF to: 00425ea0 (CONDITIONAL_JUMP)  ; LAB_00425ea0
    MOV EAX,dword ptr [ESI + 0x7c53b4]  ; 00425e2b | DAT_007c53b4 | DAT_007c53b8
    MOV dword ptr [EDI + 0x12c64],EAX   ; 00425e31
    ADD EDI,0x4                         ; 00425e37
        ;   Label: LAB_00425e37
    ADD ESI,0x4                         ; 00425e3a
    INC EBX                             ; 00425e3d
    ADD EBP,0x4                         ; 00425e3e
    CMP EBX,0xc                         ; 00425e41
    JL 0x00425dd9                       ; 00425e44
        ;   XREF to: 00425dd9 (CONDITIONAL_JUMP)  ; LAB_00425dd9
    MOV EBX,dword ptr [ESP + 0x78]      ; 00425e46
    MOV ESI,dword ptr [ESP + 0x8c]      ; 00425e4a
    MOV ECX,dword ptr [ESP + 0x90]      ; 00425e51
    ADD EBX,0x30                        ; 00425e58
    INC ESI                             ; 00425e5b
    ADD ECX,0x30                        ; 00425e5c
    MOV dword ptr [ESP + 0x78],EBX      ; 00425e5f
    MOV dword ptr [ESP + 0x8c],ESI      ; 00425e63
    MOV dword ptr [ESP + 0x90],ECX      ; 00425e6a
    CMP ESI,0xc                         ; 00425e71
    JL 0x00425d9f                       ; 00425e74
        ;   XREF to: 00425d9f (CONDITIONAL_JUMP)  ; LAB_00425d9f
    MOV EBX,dword ptr [ESP + 0xac]      ; 00425e7a
    MOV EAX,dword ptr [ESP + 0x70]      ; 00425e81
    MOV dword ptr [EBX + 0x19d90],EAX   ; 00425e85
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00425e8b
    MOV dword ptr [EBX + 0x19d94],EAX   ; 00425e8f
    ADD ESP,0x98                        ; 00425e95
        ;   Label: LAB_00425e95
    POP EBP                             ; 00425e9b
    POP EDI                             ; 00425e9c
    POP ESI                             ; 00425e9d
    POP EBX                             ; 00425e9e
    RET                                 ; 00425e9f
    PUSH 0x0                            ; 00425ea0
        ;   Label: LAB_00425ea0
    LEA EAX,[ESP + 0x6c]                ; 00425ea2
    PUSH EAX                            ; 00425ea6
    LEA EAX,[ESP + 0x2c]                ; 00425ea7
    PUSH EAX                            ; 00425eab
    PUSH 0x1fe5c1c                      ; 00425eac | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_FUN_0048bdc0   ; 00425eb1
        ;   XREF to: 0048bdc0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048bdc0()
    MOV dword ptr [ESP + 0xa4],EAX      ; 00425eb6
    FLD float ptr [ESP + 0xa4]          ; 00425ebd
    ADD ESP,0x10                        ; 00425ec4
    MOV EAX,dword ptr [ESP + 0xac]      ; 00425ec7
    FSUB float ptr [EAX + 0x24]         ; 00425ece
    FSTP float ptr [EBP + 0x12c64]      ; 00425ed1
    JMP 0x00425e37                      ; 00425ed7
        ;   XREF to: 00425e37 (UNCONDITIONAL_JUMP)  ; LAB_00425e37

