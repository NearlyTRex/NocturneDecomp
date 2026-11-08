; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00563cb0(int param_1,int param_2,int param_3,int *param_4)
;
; Local Variables:
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00569890 at 005698b9
;
; Referenced Globals:
;   undefined4 DAT_00605888
;
; Called Functions:
;   FUN_005b5080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563cb0
        ;   Label: FUN_00563cb0
    PUSH ESI                            ; 00563cb1
    PUSH EDI                            ; 00563cb2
    PUSH EBP                            ; 00563cb3
    SUB ESP,0x70                        ; 00563cb4
    MOV EAX,dword ptr [ESP + 0x90]      ; 00563cb7
    XOR EDX,EDX                         ; 00563cbe
    MOV dword ptr [ESP + 0x58],EAX      ; 00563cc0
    MOV EAX,dword ptr [ESP + 0x88]      ; 00563cc4
    MOV dword ptr [ESP + 0x5c],EDX      ; 00563ccb
    SHL EAX,0x2                         ; 00563ccf
    MOV dword ptr [ESP + 0x60],EDX      ; 00563cd2
    MOV dword ptr [ESP + 0x54],EAX      ; 00563cd6
    MOV EAX,dword ptr [ESP + 0x84]      ; 00563cda
        ;   Label: LAB_00563cda
    ADD EAX,dword ptr [ESP + 0x54]      ; 00563ce1
    MOV EBX,dword ptr [ESP + 0x5c]      ; 00563ce5
    CMP EBX,dword ptr [EAX + 0x2c]      ; 00563ce9
    JGE 0x00563e83                      ; 00563cec
        ;   XREF to: 00563e83 (CONDITIONAL_JUMP)  ; LAB_00563e83
    MOV EBX,dword ptr [ESP + 0x60]      ; 00563cf2
    MOV EAX,dword ptr [EAX + 0x40]      ; 00563cf6
    ADD EBX,EAX                         ; 00563cf9
    MOV dword ptr [ESP + 0x64],EBX      ; 00563cfb
    MOV EAX,dword ptr [ESP + 0x64]      ; 00563cff
    MOV DL,byte ptr [EAX]               ; 00563d03
    ADD EBX,0x10                        ; 00563d05
    CMP DL,0x1                          ; 00563d08
    JZ 0x00563de9                       ; 00563d0b
        ;   XREF to: 00563de9 (CONDITIONAL_JUMP)  ; LAB_00563de9
    ADD EAX,0x4                         ; 00563d11
    MOV dword ptr [ESP + 0x6c],EBX      ; 00563d14
    XOR EDI,EDI                         ; 00563d18
    XOR EBP,EBP                         ; 00563d1a
    MOV EBX,dword ptr [ESP + 0x64]      ; 00563d1c
    MOV dword ptr [ESP + 0x40],EDI      ; 00563d20
    MOV dword ptr [ESP + 0x3c],EDI      ; 00563d24
    MOV dword ptr [ESP + 0x44],EDI      ; 00563d28
    MOV dword ptr [ESP + 0x68],EBX      ; 00563d2c
    MOV EBX,EAX                         ; 00563d30
    MOV ESI,dword ptr [ESP + 0x64]      ; 00563d32
        ;   Label: LAB_00563d32
    XOR EAX,EAX                         ; 00563d36
    MOV AL,byte ptr [ESI]               ; 00563d38
    CMP EBP,EAX                         ; 00563d3a
    JGE 0x00563e39                      ; 00563d3c
        ;   XREF to: 00563e39 (CONDITIONAL_JUMP)  ; LAB_00563e39
    MOV ESI,dword ptr [ESP + 0x68]      ; 00563d42
    XOR EAX,EAX                         ; 00563d46
    MOV AL,byte ptr [ESI + 0x1]         ; 00563d48
    IMUL EAX,EAX,0x30                   ; 00563d4b
    ADD EAX,dword ptr [ESP + 0x8c]      ; 00563d4e
    PUSH EAX                            ; 00563d55
    MOV ESI,dword ptr [ESP + 0x70]      ; 00563d56
    PUSH ESI                            ; 00563d5a
    LEA ESI,[ESP + 0x50]                ; 00563d5b
    LEA EDI,[ESP + 0x8]                 ; 00563d5f
    CALL FUN_005b5080                   ; 00563d63
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    LEA ESI,[ESP + 0x50]                ; 00563d68
    ADD ESP,0x8                         ; 00563d6c
    MOVSD ES:EDI,ESI                    ; 00563d6f
    MOVSD ES:EDI,ESI                    ; 00563d70
    MOVSD ES:EDI,ESI                    ; 00563d71
    FLD float ptr [ESP]                 ; 00563d72
    FMUL float ptr [EBX]                ; 00563d75
    FLD float ptr [ESP + 0x4]           ; 00563d77
    FMUL float ptr [EBX]                ; 00563d7b
    FLD float ptr [ESP + 0x8]           ; 00563d7d
    FMUL float ptr [EBX]                ; 00563d81
    ADD EBX,0x4                         ; 00563d83
    INC EBP                             ; 00563d86
    FLD float ptr [ESP + 0x3c]          ; 00563d87
    FLD float ptr [ESP + 0x40]          ; 00563d8b
    FLD float ptr [ESP + 0x44]          ; 00563d8f
    MOV EAX,dword ptr [ESP + 0x68]      ; 00563d93
    LEA EDI,[ESP + 0xc]                 ; 00563d97
    LEA ESI,[ESP + 0x18]                ; 00563d9b
    INC EAX                             ; 00563d9f
    FXCH ST5                            ; 00563da0
    FSTP float ptr [ESP + 0x18]         ; 00563da2
    FXCH ST3                            ; 00563da6
    FSTP float ptr [ESP + 0x1c]         ; 00563da8
    FXCH                                ; 00563dac
    FSTP float ptr [ESP + 0x20]         ; 00563dae
    MOVSD ES:EDI,ESI                    ; 00563db2
    MOVSD ES:EDI,ESI                    ; 00563db3
    MOVSD ES:EDI,ESI                    ; 00563db4
    MOV dword ptr [ESP + 0x68],EAX      ; 00563db5
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00563db9
    FADD float ptr [ESP + 0xc]          ; 00563dbd
    FXCH                                ; 00563dc1
    FADD float ptr [ESP + 0x10]         ; 00563dc3
    FXCH ST2                            ; 00563dc7
    FADD float ptr [ESP + 0x14]         ; 00563dc9
    FXCH                                ; 00563dcd
    FSTP float ptr [ESP + 0x3c]         ; 00563dcf
    FXCH                                ; 00563dd3
    FSTP float ptr [ESP + 0x40]         ; 00563dd5
    ADD EDI,0xc                         ; 00563dd9
    FSTP float ptr [ESP + 0x44]         ; 00563ddc
    MOV dword ptr [ESP + 0x6c],EDI      ; 00563de0
    JMP 0x00563d32                      ; 00563de4
        ;   XREF to: 00563d32 (UNCONDITIONAL_JUMP)  ; LAB_00563d32
    MOV ESI,dword ptr [ESP + 0x64]      ; 00563de9
        ;   Label: LAB_00563de9
    XOR EAX,EAX                         ; 00563ded
    MOV AL,byte ptr [ESI + 0x1]         ; 00563def
    IMUL EAX,EAX,0x30                   ; 00563df2
    ADD EAX,dword ptr [ESP + 0x8c]      ; 00563df5
    PUSH EAX                            ; 00563dfc
    PUSH EBX                            ; 00563dfd
    LEA ESI,[ESP + 0x2c]                ; 00563dfe
    LEA EDI,[ESP + 0x38]                ; 00563e02
    CALL FUN_005b5080                   ; 00563e06
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    LEA ESI,[ESP + 0x2c]                ; 00563e0b
    LEA EBX,[ESP + 0x38]                ; 00563e0f
    ADD ESP,0x8                         ; 00563e13
    LEA EAX,[ESP + 0x3c]                ; 00563e16
    MOVSD ES:EDI,ESI                    ; 00563e1a
    MOVSD ES:EDI,ESI                    ; 00563e1b
    MOVSD ES:EDI,ESI                    ; 00563e1c
    CMP EAX,EBX                         ; 00563e1d
    JZ 0x00563e39                       ; 00563e1f
        ;   XREF to: 00563e39 (CONDITIONAL_JUMP)  ; LAB_00563e39
    MOV EAX,dword ptr [ESP + 0x30]      ; 00563e21
    MOV dword ptr [ESP + 0x3c],EAX      ; 00563e25
    MOV EAX,dword ptr [ESP + 0x34]      ; 00563e29
    MOV dword ptr [ESP + 0x40],EAX      ; 00563e2d
    MOV EAX,dword ptr [ESP + 0x38]      ; 00563e31
    MOV dword ptr [ESP + 0x44],EAX      ; 00563e35
    MOV EBX,dword ptr [ESP + 0x58]      ; 00563e39
        ;   Label: LAB_00563e39
    LEA EAX,[ESP + 0x3c]                ; 00563e3d
    MOV ECX,dword ptr [ESP + 0x60]      ; 00563e41
    FLD float ptr [EAX]                 ; 00563e45
    FMUL float ptr [0x00605888]         ; 00563e47 | DAT_00605888
    FISTP dword ptr [EBX]               ; 00563e4d
    FLD float ptr [EAX + 0x4]           ; 00563e4f
    FMUL float ptr [0x00605888]         ; 00563e52 | DAT_00605888
    FISTP dword ptr [EBX + 0x4]         ; 00563e58
    FLD float ptr [EAX + 0x8]           ; 00563e5b
    FMUL float ptr [0x00605888]         ; 00563e5e | DAT_00605888
    FISTP dword ptr [EBX + 0x8]         ; 00563e64
    LEA EDX,[EBX + 0xc]                 ; 00563e67
    ADD ECX,0x34                        ; 00563e6a
    MOV EBX,dword ptr [ESP + 0x5c]      ; 00563e6d
    MOV dword ptr [ESP + 0x58],EDX      ; 00563e71
    INC EBX                             ; 00563e75
    MOV dword ptr [ESP + 0x60],ECX      ; 00563e76
    MOV dword ptr [ESP + 0x5c],EBX      ; 00563e7a
    JMP 0x00563cda                      ; 00563e7e
        ;   XREF to: 00563cda (UNCONDITIONAL_JUMP)  ; LAB_00563cda
    ADD ESP,0x70                        ; 00563e83
        ;   Label: LAB_00563e83
    POP EBP                             ; 00563e86
    POP EDI                             ; 00563e87
    POP ESI                             ; 00563e88
    POP EBX                             ; 00563e89
    RET                                 ; 00563e8a

