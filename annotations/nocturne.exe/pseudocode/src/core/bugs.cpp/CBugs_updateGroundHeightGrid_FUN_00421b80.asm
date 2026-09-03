; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_updateGroundHeightGrid_FUN_00421b80(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x84]:8  local_84
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
; undefined8       Stack[-0x40]:8  local_40
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422370 at 00422746
;   core_bugs.cpp_CBugs_updateBugsBehavior_FUN_00422050 at 004220ef
;
; Referenced Globals:
;   float FLOAT_00579d09 = 0.5
;   double DOUBLE_00579d0d = 5.40342189935737E-315
;   double DOUBLE_00579d15 = 0.5
;   float FLOAT_0059aea8 = 0.5
;   undefined4 DAT_00764b58
;   undefined1 DAT_00764b5c
;   CDemonRaytrace g_CDemonRaytrace_01fba938
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_00468580
;   crt_math.c_floor_FUN_005648c0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421b80
        ;   Label: core_bugs.cpp_CBugs_updateGroundHeightGrid_FUN_00421b80
    PUSH EBP                            ; 00421b81
    SUB ESP,0x74                        ; 00421b82
    FLD1                                ; 00421b85
    FDIV float ptr [0x0059aea8]         ; 00421b87 | FLOAT_0059aea8
    MOV EBX,dword ptr [ESP + 0x80]      ; 00421b8d
    FLD float ptr [EBX + 0x19834]       ; 00421b94
    FADD float ptr [EBX + 0x19840]      ; 00421b9a
    FST float ptr [ESP + 0x24]          ; 00421ba0
    FLD float ptr [EBX + 0x19838]       ; 00421ba4
    FADD float ptr [EBX + 0x19844]      ; 00421baa
    FXCH                                ; 00421bb0
    FLD float ptr [0x00579d09]          ; 00421bb2 | FLOAT_00579d09
    FXCH                                ; 00421bb8
    FMUL ST1                            ; 00421bba
    FXCH ST2                            ; 00421bbc
    FST float ptr [ESP + 0x28]          ; 00421bbe
    FLD float ptr [EBX + 0x1983c]       ; 00421bc2
    FADD float ptr [EBX + 0x19848]      ; 00421bc8
    FXCH                                ; 00421bce
    FMUL ST2                            ; 00421bd0
    FXCH                                ; 00421bd2
    FST float ptr [ESP + 0x2c]          ; 00421bd4
    FMULP ST2                           ; 00421bd8
    FXCH ST2                            ; 00421bda
    FSTP float ptr [ESP + 0x18]         ; 00421bdc
    FXCH                                ; 00421be0
    FSTP float ptr [ESP + 0x1c]         ; 00421be2
    FSTP float ptr [ESP + 0x20]         ; 00421be6
    FLD float ptr [EBX + 0x20]          ; 00421bea
    FADD float ptr [ESP + 0x18]         ; 00421bed
    FSTP float ptr [ESP + 0xc]          ; 00421bf1
    FLD float ptr [EBX + 0x24]          ; 00421bf5
    FADD float ptr [ESP + 0x1c]         ; 00421bf8
    FLD float ptr [ESP + 0xc]           ; 00421bfc
    FXCH                                ; 00421c00
    FSTP float ptr [ESP + 0x10]         ; 00421c02
    FLD float ptr [EBX + 0x28]          ; 00421c06
    FXCH ST2                            ; 00421c09
    FSTP float ptr [ESP + 0x70]         ; 00421c0b
    FXCH                                ; 00421c0f
    FADD float ptr [ESP + 0x20]         ; 00421c11
    FXCH                                ; 00421c15
    FMUL float ptr [ESP + 0x70]         ; 00421c17
    FXCH                                ; 00421c1b
    FSTP float ptr [ESP + 0x14]         ; 00421c1d
    SUB ESP,0x8                         ; 00421c21
    FSTP double ptr [ESP]               ; 00421c24
    CALL crt_math.c_floor_FUN_005648c0  ; 00421c27
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005648c0(double input_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 00421c2c
    MOV dword ptr [ESP + 0x48],EDX      ; 00421c30
    FLD double ptr [ESP + 0x44]         ; 00421c34
    ADD ESP,0x8                         ; 00421c38
    FLD float ptr [ESP + 0x14]          ; 00421c3b
    FMUL float ptr [ESP + 0x70]         ; 00421c3f
    FXCH                                ; 00421c43
    CALL crt_math.c_round_FUN_00563a30  ; 00421c45
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x48]        ; 00421c4a
    SUB ESP,0x8                         ; 00421c4e
    FSTP double ptr [ESP]               ; 00421c51
    CALL crt_math.c_floor_FUN_005648c0  ; 00421c54
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005648c0(double input_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 00421c59
    MOV dword ptr [ESP + 0x48],EDX      ; 00421c5d
    FLD double ptr [ESP + 0x44]         ; 00421c61
    ADD ESP,0x8                         ; 00421c65
    MOV EAX,dword ptr [ESP + 0x48]      ; 00421c68
    MOV dword ptr [ESP + 0x70],EAX      ; 00421c6c
    FILD dword ptr [ESP + 0x70]         ; 00421c70
    FMUL float ptr [0x0059aea8]         ; 00421c74 | FLOAT_0059aea8
    FXCH                                ; 00421c7a
    CALL crt_math.c_round_FUN_00563a30  ; 00421c7c
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x6c]        ; 00421c81
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00421c85
    FSUB float ptr [EBX + 0x20]         ; 00421c89
    MOV dword ptr [ESP + 0x70],EAX      ; 00421c8c
    FLD float ptr [0x0059aea8]          ; 00421c90 | FLOAT_0059aea8
    FMUL float ptr [0x00579d0d]         ; 00421c96 | DOUBLE_00579d0d
    FILD dword ptr [ESP + 0x70]         ; 00421c9c
    FMUL float ptr [0x0059aea8]         ; 00421ca0 | FLOAT_0059aea8
    FXCH                                ; 00421ca6
    FMUL double ptr [0x00579d15]        ; 00421ca8 | DOUBLE_00579d15
    MOV EDX,dword ptr [EBX + 0x1984c]   ; 00421cae
    MOV EAX,dword ptr [ESP + 0x48]      ; 00421cb4
    FXCH                                ; 00421cb8
    FSUB float ptr [EBX + 0x28]         ; 00421cba
    FXCH ST2                            ; 00421cbd
    FSUB ST0,ST1                        ; 00421cbf
    FXCH ST2                            ; 00421cc1
    FSUBRP                              ; 00421cc3
    FXCH                                ; 00421cc5
    FSTP float ptr [EBX + 0x19854]      ; 00421cc7
    FSTP float ptr [EBX + 0x19858]      ; 00421ccd
    CMP EAX,EDX                         ; 00421cd3
    JNZ 0x00421ce7                      ; 00421cd5
        ;   XREF to: 00421ce7 (CONDITIONAL_JUMP)  ; LAB_00421ce7
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00421cd7
    CMP EAX,dword ptr [EBX + 0x19850]   ; 00421cdb
    JZ 0x00421eb0                       ; 00421ce1
        ;   XREF to: 00421eb0 (CONDITIONAL_JUMP)  ; LAB_00421eb0
    PUSH EDI                            ; 00421ce7
        ;   Label: LAB_00421ce7
    PUSH ESI                            ; 00421ce8
    MOV EAX,dword ptr [ESP + 0x88]      ; 00421ce9
    MOV EBX,dword ptr [ESP + 0x50]      ; 00421cf0
    MOV EAX,dword ptr [EAX + 0x1984c]   ; 00421cf4
    SUB EAX,EBX                         ; 00421cfa
    MOV dword ptr [ESP + 0x6c],EAX      ; 00421cfc
    MOV EAX,dword ptr [ESP + 0x88]      ; 00421d00
    MOV ESI,dword ptr [ESP + 0x74]      ; 00421d07
    MOV EAX,dword ptr [EAX + 0x19850]   ; 00421d0b
    SUB EAX,ESI                         ; 00421d11
    MOV ECX,0x240                       ; 00421d13
    MOV dword ptr [ESP + 0x68],EAX      ; 00421d18
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00421d1c
    MOV EDI,0x764b58                    ; 00421d20 | DAT_00764b58
    ADD EAX,0xb                         ; 00421d25
    MOV EBX,dword ptr [ESP + 0x88]      ; 00421d28
    MOV dword ptr [ESP + 0x60],EAX      ; 00421d2f
    MOV EAX,dword ptr [ESP + 0x68]      ; 00421d33
    MOV ESI,dword ptr [ESP + 0x88]      ; 00421d37
    ADD EAX,0xb                         ; 00421d3e
    ADD ESI,0x12720                     ; 00421d41
    MOV dword ptr [ESP + 0x64],EAX      ; 00421d47
    PUSH EDI                            ; 00421d4b | DAT_00764b58
    MOV EAX,ECX                         ; 00421d4c
    SHR ECX,0x2                         ; 00421d4e
    MOVSD.REP ES:EDI,ESI                ; 00421d51 | DAT_00764b58 | DAT_00764b5c
    MOV CL,AL                           ; 00421d53
    AND CL,0x3                          ; 00421d55
    MOVSB.REP ES:EDI,ESI                ; 00421d58 | DAT_00764b5c
    POP EDI                             ; 00421d5a
    MOV EAX,dword ptr [EBX + 0x20]      ; 00421d5b
    ADD EBX,0x20                        ; 00421d5e
    MOV dword ptr [ESP + 0x8],EAX       ; 00421d61
    LEA EAX,[EBX + 0x4]                 ; 00421d65
    MOV EAX,dword ptr [EAX]             ; 00421d68
    MOV dword ptr [ESP + 0xc],EAX       ; 00421d6a
    LEA EAX,[EBX + 0x8]                 ; 00421d6e
    MOV EAX,dword ptr [EAX]             ; 00421d71
    MOV dword ptr [ESP + 0x10],EAX      ; 00421d73
    MOV EAX,dword ptr [ESP + 0x88]      ; 00421d77
    FLD float ptr [ESP + 0x8]           ; 00421d7e
    FADD float ptr [EAX + 0x19854]      ; 00421d82
    FLD float ptr [ESP + 0x10]          ; 00421d88
    FXCH                                ; 00421d8c
    FSTP float ptr [ESP + 0x8]          ; 00421d8e
    FADD float ptr [EAX + 0x19858]      ; 00421d92
    MOV EAX,dword ptr [ESP + 0x8]       ; 00421d98
    MOV dword ptr [ESP + 0x38],EAX      ; 00421d9c
    MOV EAX,dword ptr [ESP + 0xc]       ; 00421da0
    FSTP float ptr [ESP + 0x10]         ; 00421da4
    MOV dword ptr [ESP + 0x3c],EAX      ; 00421da8
    MOV EAX,dword ptr [ESP + 0x10]      ; 00421dac
    MOV dword ptr [ESP + 0x40],EAX      ; 00421db0
    MOV EAX,dword ptr [ESP + 0x88]      ; 00421db4
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00421dbb
    MOV dword ptr [ESP + 0x5c],EAX      ; 00421dbf
    LEA EAX,[EBX*0x4 + 0x0]             ; 00421dc3
    SUB EAX,EBX                         ; 00421dca
    SHL EAX,0x4                         ; 00421dcc
    NEG EAX                             ; 00421dcf
    MOV dword ptr [ESP + 0x58],EAX      ; 00421dd1
    MOV EAX,dword ptr [ESP + 0x68]      ; 00421dd5
    XOR EDI,EDI                         ; 00421dd9
    SHL EAX,0x2                         ; 00421ddb
    MOV dword ptr [ESP + 0x70],EDI      ; 00421dde
    MOV dword ptr [ESP + 0x54],EAX      ; 00421de2
    MOV EAX,dword ptr [ESP + 0x70]      ; 00421de6
        ;   Label: LAB_00421de6
    MOV dword ptr [ESP + 0x78],EAX      ; 00421dea
    FILD dword ptr [ESP + 0x78]         ; 00421dee
    FMUL float ptr [0x0059aea8]         ; 00421df2 | FLOAT_0059aea8
    MOV EDI,dword ptr [ESP + 0x5c]      ; 00421df8
    MOV EBP,dword ptr [ESP + 0x58]      ; 00421dfc
    XOR EBX,EBX                         ; 00421e00
    MOV EAX,dword ptr [ESP + 0x54]      ; 00421e02
    MOV ESI,EDI                         ; 00421e06
    NEG EAX                             ; 00421e08
    FADD float ptr [ESP + 0x8]          ; 00421e0a
    ADD EBP,EAX                         ; 00421e0e
    FSTP float ptr [ESP + 0x38]         ; 00421e10
    MOV dword ptr [ESP + 0x78],EBX      ; 00421e14
        ;   Label: LAB_00421e14
    FILD dword ptr [ESP + 0x78]         ; 00421e18
    FMUL float ptr [0x0059aea8]         ; 00421e1c | FLOAT_0059aea8
    MOV EAX,dword ptr [ESP + 0x70]      ; 00421e22
    FADD float ptr [ESP + 0x10]         ; 00421e26
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00421e2a
    FSTP float ptr [ESP + 0x40]         ; 00421e2e
    CMP EAX,EDX                         ; 00421e32
    JL 0x00421eb6                       ; 00421e34
        ;   XREF to: 00421eb6 (CONDITIONAL_JUMP)  ; LAB_00421eb6
    CMP EAX,dword ptr [ESP + 0x60]      ; 00421e3a
    JG 0x00421eb6                       ; 00421e3e
        ;   XREF to: 00421eb6 (CONDITIONAL_JUMP)  ; LAB_00421eb6
    CMP EBX,dword ptr [ESP + 0x68]      ; 00421e44
    JL 0x00421eb6                       ; 00421e48
        ;   XREF to: 00421eb6 (CONDITIONAL_JUMP)  ; LAB_00421eb6
    CMP EBX,dword ptr [ESP + 0x64]      ; 00421e4a
    JG 0x00421eb6                       ; 00421e4e
        ;   XREF to: 00421eb6 (CONDITIONAL_JUMP)  ; LAB_00421eb6
    MOV EAX,dword ptr [EBP + 0x764b58]  ; 00421e50 | DAT_00764b58 | DAT_00764b5c
    MOV dword ptr [ESI + 0x12720],EAX   ; 00421e56
    ADD ESI,0x4                         ; 00421e5c
        ;   Label: LAB_00421e5c
    ADD EBP,0x4                         ; 00421e5f
    INC EBX                             ; 00421e62
    ADD EDI,0x4                         ; 00421e63
    CMP EBX,0xc                         ; 00421e66
    JL 0x00421e14                       ; 00421e69
        ;   XREF to: 00421e14 (CONDITIONAL_JUMP)  ; LAB_00421e14
    MOV EBX,dword ptr [ESP + 0x58]      ; 00421e6b
    MOV ESI,dword ptr [ESP + 0x70]      ; 00421e6f
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00421e73
    ADD EBX,0x30                        ; 00421e77
    INC ESI                             ; 00421e7a
    ADD ECX,0x30                        ; 00421e7b
    MOV dword ptr [ESP + 0x58],EBX      ; 00421e7e
    MOV dword ptr [ESP + 0x70],ESI      ; 00421e82
    MOV dword ptr [ESP + 0x5c],ECX      ; 00421e86
    CMP ESI,0xc                         ; 00421e8a
    JL 0x00421de6                       ; 00421e8d
        ;   XREF to: 00421de6 (CONDITIONAL_JUMP)  ; LAB_00421de6
    MOV EBX,dword ptr [ESP + 0x88]      ; 00421e93
    MOV EAX,dword ptr [ESP + 0x50]      ; 00421e9a
    MOV dword ptr [EBX + 0x1984c],EAX   ; 00421e9e
    MOV EAX,dword ptr [ESP + 0x74]      ; 00421ea4
    MOV dword ptr [EBX + 0x19850],EAX   ; 00421ea8
    POP ESI                             ; 00421eae
    POP EDI                             ; 00421eaf
    ADD ESP,0x74                        ; 00421eb0
        ;   Label: LAB_00421eb0
    POP EBP                             ; 00421eb3
    POP EBX                             ; 00421eb4
    RET                                 ; 00421eb5
    PUSH 0x0                            ; 00421eb6
        ;   Label: LAB_00421eb6
    LEA EAX,[ESP + 0x50]                ; 00421eb8
    PUSH EAX                            ; 00421ebc
    LEA EAX,[ESP + 0x40]                ; 00421ebd
    PUSH EAX                            ; 00421ec1
    PUSH 0x1fba938                      ; 00421ec2 | g_CDemonRaytrace_01fba938
    CALL core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_00468580 ; 00421ec7
        ;   XREF to: 00468580 (UNCONDITIONAL_CALL)  ; float core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_00468580(CDemonRaytrace * this_ptr, CVector3f * pos, int * hit_flag, CVector3f * normal_out)
    MOV dword ptr [ESP + 0x88],EAX      ; 00421ecc
    FLD float ptr [ESP + 0x88]          ; 00421ed3
    ADD ESP,0x10                        ; 00421eda
    MOV EAX,dword ptr [ESP + 0x88]      ; 00421edd
    FSUB float ptr [EAX + 0x24]         ; 00421ee4
    FSTP float ptr [EDI + 0x12720]      ; 00421ee7
    JMP 0x00421e5c                      ; 00421eed
        ;   XREF to: 00421e5c (UNCONDITIONAL_JUMP)  ; LAB_00421e5c

