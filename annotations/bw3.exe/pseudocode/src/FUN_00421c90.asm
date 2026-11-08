; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00421c90(int param_1)
;
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
;   FUN_004221c0 at 00422278
;   FUN_00422570 at 00422998
;
; Referenced Globals:
;   undefined4 DAT_005b783d
;   undefined4 DAT_005b7841
;   undefined4 DAT_005b7849
;   undefined4 DAT_005dcbc8
;   undefined4 DAT_007e1a54
;   undefined1 DAT_007e1a58
;   undefined4 DAT_0203b37c
;
; Called Functions:
;   FUN_00474940
;   FUN_005a3120
;   FUN_005a3600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421c90
        ;   Label: FUN_00421c90
    PUSH ESI                            ; 00421c91
    PUSH EDI                            ; 00421c92
    PUSH EBP                            ; 00421c93
    SUB ESP,0x98                        ; 00421c94
    FLD1                                ; 00421c9a
    MOV EAX,dword ptr [ESP + 0xac]      ; 00421c9c
    LEA EDI,[ESP + 0x18]                ; 00421ca3
    MOV ESI,ESP                         ; 00421ca7
    FLD float ptr [EAX + 0x1be68]       ; 00421ca9
    FLD float ptr [EAX + 0x1be6c]       ; 00421caf
    FLD float ptr [EAX + 0x1be70]       ; 00421cb5
    FXCH ST2                            ; 00421cbb
    FADD float ptr [EAX + 0x1be74]      ; 00421cbd
    FXCH ST3                            ; 00421cc3
    FDIV float ptr [0x005dcbc8]         ; 00421cc5 | DAT_005dcbc8
    FXCH                                ; 00421ccb
    FADD float ptr [EAX + 0x1be78]      ; 00421ccd
    FXCH ST2                            ; 00421cd3
    FADD float ptr [EAX + 0x1be7c]      ; 00421cd5
    FXCH ST3                            ; 00421cdb
    FSTP float ptr [ESP]                ; 00421cdd
    FXCH                                ; 00421ce0
    FSTP float ptr [ESP + 0x4]          ; 00421ce2
    FXCH                                ; 00421ce6
    FSTP float ptr [ESP + 0x8]          ; 00421ce8
    MOVSD ES:EDI,ESI                    ; 00421cec
    MOVSD ES:EDI,ESI                    ; 00421ced
    MOVSD ES:EDI,ESI                    ; 00421cee
    FLD float ptr [0x005b783d]          ; 00421cef | DAT_005b783d
    FLD float ptr [ESP + 0x18]          ; 00421cf5
    FMUL ST1                            ; 00421cf9
    FLD float ptr [ESP + 0x1c]          ; 00421cfb
    FMUL ST2                            ; 00421cff
    FLD float ptr [ESP + 0x20]          ; 00421d01
    FMULP ST3                           ; 00421d05
    LEA EDI,[ESP + 0x54]                ; 00421d07
    LEA ESI,[ESP + 0x30]                ; 00421d0b
    FXCH                                ; 00421d0f
    FSTP float ptr [ESP + 0x30]         ; 00421d11
    FSTP float ptr [ESP + 0x34]         ; 00421d15
    FSTP float ptr [ESP + 0x38]         ; 00421d19
    MOVSD ES:EDI,ESI                    ; 00421d1d
    MOVSD ES:EDI,ESI                    ; 00421d1e
    MOVSD ES:EDI,ESI                    ; 00421d1f
    FLD float ptr [EAX + 0x20]          ; 00421d20
    FLD float ptr [EAX + 0x24]          ; 00421d23
    FLD float ptr [EAX + 0x28]          ; 00421d26
    LEA EDI,[ESP + 0xc]                 ; 00421d29
    LEA ESI,[ESP + 0x48]                ; 00421d2d
    FXCH ST2                            ; 00421d31
    FADD float ptr [ESP + 0x54]         ; 00421d33
    FXCH                                ; 00421d37
    FADD float ptr [ESP + 0x58]         ; 00421d39
    FXCH ST2                            ; 00421d3d
    FADD float ptr [ESP + 0x5c]         ; 00421d3f
    FXCH                                ; 00421d43
    FSTP float ptr [ESP + 0x48]         ; 00421d45
    FXCH                                ; 00421d49
    FSTP float ptr [ESP + 0x4c]         ; 00421d4b
    FSTP float ptr [ESP + 0x50]         ; 00421d4f
    MOVSD ES:EDI,ESI                    ; 00421d53
    MOVSD ES:EDI,ESI                    ; 00421d54
    MOVSD ES:EDI,ESI                    ; 00421d55
    FLD float ptr [ESP + 0xc]           ; 00421d56
    FXCH                                ; 00421d5a
    FSTP float ptr [ESP + 0x94]         ; 00421d5c
    FMUL float ptr [ESP + 0x94]         ; 00421d63
    SUB ESP,0x8                         ; 00421d6a
    FSTP double ptr [ESP]               ; 00421d6d
    MOV EBX,EAX                         ; 00421d70
    CALL FUN_005a3600                   ; 00421d72
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3600()
    MOV dword ptr [ESP + 0x68],EAX      ; 00421d77
    MOV dword ptr [ESP + 0x6c],EDX      ; 00421d7b
    FLD double ptr [ESP + 0x68]         ; 00421d7f
    ADD ESP,0x8                         ; 00421d83
    FLD float ptr [ESP + 0x14]          ; 00421d86
    FMUL float ptr [ESP + 0x94]         ; 00421d8a
    FXCH                                ; 00421d91
    CALL FUN_005a3120                   ; 00421d93
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x70]        ; 00421d98
    SUB ESP,0x8                         ; 00421d9c
    FSTP double ptr [ESP]               ; 00421d9f
    CALL FUN_005a3600                   ; 00421da2
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3600()
    MOV dword ptr [ESP + 0x68],EAX      ; 00421da7
    MOV dword ptr [ESP + 0x6c],EDX      ; 00421dab
    FLD double ptr [ESP + 0x68]         ; 00421daf
    ADD ESP,0x8                         ; 00421db3
    MOV EAX,dword ptr [ESP + 0x70]      ; 00421db6
    MOV dword ptr [ESP + 0x94],EAX      ; 00421dba
    FILD dword ptr [ESP + 0x94]         ; 00421dc1
    FMUL float ptr [0x005dcbc8]         ; 00421dc8 | DAT_005dcbc8
    MOV EAX,EBX                         ; 00421dce
    FSUB float ptr [EAX + 0x20]         ; 00421dd0
    FLD float ptr [0x005dcbc8]          ; 00421dd3 | DAT_005dcbc8
    FMUL float ptr [0x005b7841]         ; 00421dd9 | DAT_005b7841
    FMUL double ptr [0x005b7849]        ; 00421ddf | DAT_005b7849
    FXCH ST2                            ; 00421de5
    CALL FUN_005a3120                   ; 00421de7
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 00421dec
    FSUB ST0,ST2                        ; 00421dee
    FXCH                                ; 00421df0
    FISTP dword ptr [ESP + 0x6c]        ; 00421df2
    FSTP float ptr [EAX + 0x1be88]      ; 00421df6
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00421dfc
    MOV dword ptr [ESP + 0x94],EAX      ; 00421e00
    FILD dword ptr [ESP + 0x94]         ; 00421e07
    FMUL float ptr [0x005dcbc8]         ; 00421e0e | DAT_005dcbc8
    MOV EAX,EBX                         ; 00421e14
    FSUB float ptr [EAX + 0x28]         ; 00421e16
    FSUBRP                              ; 00421e19
    FSTP float ptr [EAX + 0x1be8c]      ; 00421e1b
    MOV EAX,dword ptr [ESP + 0x70]      ; 00421e21
    CMP EAX,dword ptr [EBX + 0x1be80]   ; 00421e25
    JNZ 0x00421e3d                      ; 00421e2b
        ;   XREF to: 00421e3d (CONDITIONAL_JUMP)  ; LAB_00421e3d
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00421e2d
    CMP EAX,dword ptr [EBX + 0x1be84]   ; 00421e31
    JZ 0x00422025                       ; 00421e37
        ;   XREF to: 00422025 (CONDITIONAL_JUMP)  ; LAB_00422025
    MOV EAX,dword ptr [ESP + 0xac]      ; 00421e3d
        ;   Label: LAB_00421e3d
    MOV EBX,dword ptr [ESP + 0x70]      ; 00421e44
    MOV EAX,dword ptr [EAX + 0x1be80]   ; 00421e48
    SUB EAX,EBX                         ; 00421e4e
    MOV dword ptr [ESP + 0x88],EAX      ; 00421e50
    MOV EAX,dword ptr [ESP + 0xac]      ; 00421e57
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00421e5e
    MOV EAX,dword ptr [EAX + 0x1be84]   ; 00421e62
    SUB EAX,ESI                         ; 00421e68
    MOV dword ptr [ESP + 0x84],EAX      ; 00421e6a
    MOV EAX,dword ptr [ESP + 0x88]      ; 00421e71
    MOV ECX,0x240                       ; 00421e78
    ADD EAX,0xb                         ; 00421e7d
    MOV EDI,0x7e1a54                    ; 00421e80 | DAT_007e1a54
    MOV dword ptr [ESP + 0x80],EAX      ; 00421e85
    MOV EAX,dword ptr [ESP + 0x84]      ; 00421e8c
    MOV ESI,dword ptr [ESP + 0xac]      ; 00421e93
    ADD EAX,0xb                         ; 00421e9a
    ADD ESI,0x135dc                     ; 00421e9d
    MOV dword ptr [ESP + 0x7c],EAX      ; 00421ea3
    PUSH EDI                            ; 00421ea7 | DAT_007e1a54
    MOV EAX,ECX                         ; 00421ea8
    SHR ECX,0x2                         ; 00421eaa
    MOVSD.REP ES:EDI,ESI                ; 00421ead | DAT_007e1a54 | DAT_007e1a58
    MOV CL,AL                           ; 00421eaf
    AND CL,0x3                          ; 00421eb1
    MOVSB.REP ES:EDI,ESI                ; 00421eb4 | DAT_007e1a58
    POP EDI                             ; 00421eb6
    MOV ESI,dword ptr [ESP + 0xac]      ; 00421eb7
    LEA EDI,[ESP + 0x3c]                ; 00421ebe
    LEA ESI,[ESI + 0x20]                ; 00421ec2
    MOV EBX,dword ptr [ESP + 0x88]      ; 00421ec5
    MOV EAX,dword ptr [ESP + 0xac]      ; 00421ecc
    MOVSD ES:EDI,ESI                    ; 00421ed3
    MOVSD ES:EDI,ESI                    ; 00421ed4
    MOVSD ES:EDI,ESI                    ; 00421ed5
    MOV dword ptr [ESP + 0x90],EAX      ; 00421ed6
    FLD float ptr [ESP + 0x3c]          ; 00421edd
    FLD float ptr [ESP + 0x44]          ; 00421ee1
    LEA EDI,[ESP + 0x24]                ; 00421ee5
    FADD float ptr [EAX + 0x1be8c]      ; 00421ee9
    FXCH                                ; 00421eef
    FADD float ptr [EAX + 0x1be88]      ; 00421ef1
    LEA EAX,[EBX*0x4 + 0x0]             ; 00421ef7
    LEA ESI,[ESP + 0x3c]                ; 00421efe
    SUB EAX,EBX                         ; 00421f02
    FSTP float ptr [ESP + 0x3c]         ; 00421f04
    SHL EAX,0x4                         ; 00421f08
    FSTP float ptr [ESP + 0x44]         ; 00421f0b
    NEG EAX                             ; 00421f0f
    MOVSD ES:EDI,ESI                    ; 00421f11
    MOVSD ES:EDI,ESI                    ; 00421f12
    MOVSD ES:EDI,ESI                    ; 00421f13
    MOV dword ptr [ESP + 0x78],EAX      ; 00421f14
    MOV EAX,dword ptr [ESP + 0x84]      ; 00421f18
    XOR EDI,EDI                         ; 00421f1f
    SHL EAX,0x2                         ; 00421f21
    MOV dword ptr [ESP + 0x8c],EDI      ; 00421f24
    MOV dword ptr [ESP + 0x74],EAX      ; 00421f2b
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00421f2f
        ;   Label: LAB_00421f2f
    MOV dword ptr [ESP + 0x94],EAX      ; 00421f36
    FILD dword ptr [ESP + 0x94]         ; 00421f3d
    FMUL float ptr [0x005dcbc8]         ; 00421f44 | DAT_005dcbc8
    MOV EBP,dword ptr [ESP + 0x90]      ; 00421f4a
    MOV ESI,dword ptr [ESP + 0x78]      ; 00421f51
    XOR EBX,EBX                         ; 00421f55
    MOV EAX,dword ptr [ESP + 0x74]      ; 00421f57
    MOV EDI,EBP                         ; 00421f5b
    NEG EAX                             ; 00421f5d
    FADD float ptr [ESP + 0x3c]         ; 00421f5f
    ADD ESI,EAX                         ; 00421f63
    FSTP float ptr [ESP + 0x24]         ; 00421f65
    MOV dword ptr [ESP + 0x94],EBX      ; 00421f69
        ;   Label: LAB_00421f69
    FILD dword ptr [ESP + 0x94]         ; 00421f70
    FMUL float ptr [0x005dcbc8]         ; 00421f77 | DAT_005dcbc8
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00421f7d
    FADD float ptr [ESP + 0x44]         ; 00421f84
    MOV EDX,dword ptr [ESP + 0x88]      ; 00421f88
    FSTP float ptr [ESP + 0x2c]         ; 00421f8f
    CMP EAX,EDX                         ; 00421f93
    JL 0x00422030                       ; 00421f95
        ;   XREF to: 00422030 (CONDITIONAL_JUMP)  ; LAB_00422030
    CMP EAX,dword ptr [ESP + 0x80]      ; 00421f9b
    JG 0x00422030                       ; 00421fa2
        ;   XREF to: 00422030 (CONDITIONAL_JUMP)  ; LAB_00422030
    CMP EBX,dword ptr [ESP + 0x84]      ; 00421fa8
    JL 0x00422030                       ; 00421faf
        ;   XREF to: 00422030 (CONDITIONAL_JUMP)  ; LAB_00422030
    CMP EBX,dword ptr [ESP + 0x7c]      ; 00421fb5
    JG 0x00422030                       ; 00421fb9
        ;   XREF to: 00422030 (CONDITIONAL_JUMP)  ; LAB_00422030
    MOV EAX,dword ptr [ESI + 0x7e1a54]  ; 00421fbb | DAT_007e1a54 | DAT_007e1a58
    MOV dword ptr [EDI + 0x135dc],EAX   ; 00421fc1
    ADD EDI,0x4                         ; 00421fc7
        ;   Label: LAB_00421fc7
    ADD ESI,0x4                         ; 00421fca
    INC EBX                             ; 00421fcd
    ADD EBP,0x4                         ; 00421fce
    CMP EBX,0xc                         ; 00421fd1
    JL 0x00421f69                       ; 00421fd4
        ;   XREF to: 00421f69 (CONDITIONAL_JUMP)  ; LAB_00421f69
    MOV EBX,dword ptr [ESP + 0x78]      ; 00421fd6
    MOV ESI,dword ptr [ESP + 0x8c]      ; 00421fda
    MOV ECX,dword ptr [ESP + 0x90]      ; 00421fe1
    ADD EBX,0x30                        ; 00421fe8
    INC ESI                             ; 00421feb
    ADD ECX,0x30                        ; 00421fec
    MOV dword ptr [ESP + 0x78],EBX      ; 00421fef
    MOV dword ptr [ESP + 0x8c],ESI      ; 00421ff3
    MOV dword ptr [ESP + 0x90],ECX      ; 00421ffa
    CMP ESI,0xc                         ; 00422001
    JL 0x00421f2f                       ; 00422004
        ;   XREF to: 00421f2f (CONDITIONAL_JUMP)  ; LAB_00421f2f
    MOV EBX,dword ptr [ESP + 0xac]      ; 0042200a
    MOV EAX,dword ptr [ESP + 0x70]      ; 00422011
    MOV dword ptr [EBX + 0x1be80],EAX   ; 00422015
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0042201b
    MOV dword ptr [EBX + 0x1be84],EAX   ; 0042201f
    ADD ESP,0x98                        ; 00422025
        ;   Label: LAB_00422025
    POP EBP                             ; 0042202b
    POP EDI                             ; 0042202c
    POP ESI                             ; 0042202d
    POP EBX                             ; 0042202e
    RET                                 ; 0042202f
    PUSH 0x0                            ; 00422030
        ;   Label: LAB_00422030
    LEA EAX,[ESP + 0x6c]                ; 00422032
    PUSH EAX                            ; 00422036
    LEA EAX,[ESP + 0x2c]                ; 00422037
    PUSH EAX                            ; 0042203b
    PUSH 0x203b37c                      ; 0042203c | DAT_0203b37c
    CALL FUN_00474940                   ; 00422041
        ;   XREF to: 00474940 (UNCONDITIONAL_CALL)  ; undefined FUN_00474940()
    MOV dword ptr [ESP + 0xa4],EAX      ; 00422046
    FLD float ptr [ESP + 0xa4]          ; 0042204d
    ADD ESP,0x10                        ; 00422054
    MOV EAX,dword ptr [ESP + 0xac]      ; 00422057
    FSUB float ptr [EAX + 0x24]         ; 0042205e
    FSTP float ptr [EBP + 0x135dc]      ; 00422061
    JMP 0x00421fc7                      ; 00422067
        ;   XREF to: 00421fc7 (UNCONDITIONAL_JUMP)  ; LAB_00421fc7

