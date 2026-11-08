; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041fad0(int param_1)
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
;   FUN_00420000 at 004200b8
;   FUN_004203a0 at 004207d8
;
; Referenced Globals:
;   undefined4 DAT_005cca0d
;   undefined4 DAT_005cca11
;   undefined4 DAT_005cca19
;   undefined4 DAT_005f3e28
;   undefined4 DAT_007bcd08
;   undefined1 DAT_007bcd0c
;   undefined4 DAT_01fc9c68
;
; Called Functions:
;   FUN_004738d0
;   FUN_005b7ff0
;   FUN_005b84d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041fad0
        ;   Label: FUN_0041fad0
    PUSH ESI                            ; 0041fad1
    PUSH EDI                            ; 0041fad2
    PUSH EBP                            ; 0041fad3
    SUB ESP,0x98                        ; 0041fad4
    FLD1                                ; 0041fada
    MOV EAX,dword ptr [ESP + 0xac]      ; 0041fadc
    LEA EDI,[ESP + 0x18]                ; 0041fae3
    MOV ESI,ESP                         ; 0041fae7
    FLD float ptr [EAX + 0x1e608]       ; 0041fae9
    FLD float ptr [EAX + 0x1e60c]       ; 0041faef
    FLD float ptr [EAX + 0x1e610]       ; 0041faf5
    FXCH ST2                            ; 0041fafb
    FADD float ptr [EAX + 0x1e614]      ; 0041fafd
    FXCH ST3                            ; 0041fb03
    FDIV float ptr [0x005f3e28]         ; 0041fb05 | DAT_005f3e28
    FXCH                                ; 0041fb0b
    FADD float ptr [EAX + 0x1e618]      ; 0041fb0d
    FXCH ST2                            ; 0041fb13
    FADD float ptr [EAX + 0x1e61c]      ; 0041fb15
    FXCH ST3                            ; 0041fb1b
    FSTP float ptr [ESP]                ; 0041fb1d
    FXCH                                ; 0041fb20
    FSTP float ptr [ESP + 0x4]          ; 0041fb22
    FXCH                                ; 0041fb26
    FSTP float ptr [ESP + 0x8]          ; 0041fb28
    MOVSD ES:EDI,ESI                    ; 0041fb2c
    MOVSD ES:EDI,ESI                    ; 0041fb2d
    MOVSD ES:EDI,ESI                    ; 0041fb2e
    FLD float ptr [0x005cca0d]          ; 0041fb2f | DAT_005cca0d
    FLD float ptr [ESP + 0x18]          ; 0041fb35
    FMUL ST1                            ; 0041fb39
    FLD float ptr [ESP + 0x1c]          ; 0041fb3b
    FMUL ST2                            ; 0041fb3f
    FLD float ptr [ESP + 0x20]          ; 0041fb41
    FMULP ST3                           ; 0041fb45
    LEA EDI,[ESP + 0x54]                ; 0041fb47
    LEA ESI,[ESP + 0x30]                ; 0041fb4b
    FXCH                                ; 0041fb4f
    FSTP float ptr [ESP + 0x30]         ; 0041fb51
    FSTP float ptr [ESP + 0x34]         ; 0041fb55
    FSTP float ptr [ESP + 0x38]         ; 0041fb59
    MOVSD ES:EDI,ESI                    ; 0041fb5d
    MOVSD ES:EDI,ESI                    ; 0041fb5e
    MOVSD ES:EDI,ESI                    ; 0041fb5f
    FLD float ptr [EAX + 0x20]          ; 0041fb60
    FLD float ptr [EAX + 0x24]          ; 0041fb63
    FLD float ptr [EAX + 0x28]          ; 0041fb66
    LEA EDI,[ESP + 0xc]                 ; 0041fb69
    LEA ESI,[ESP + 0x48]                ; 0041fb6d
    FXCH ST2                            ; 0041fb71
    FADD float ptr [ESP + 0x54]         ; 0041fb73
    FXCH                                ; 0041fb77
    FADD float ptr [ESP + 0x58]         ; 0041fb79
    FXCH ST2                            ; 0041fb7d
    FADD float ptr [ESP + 0x5c]         ; 0041fb7f
    FXCH                                ; 0041fb83
    FSTP float ptr [ESP + 0x48]         ; 0041fb85
    FXCH                                ; 0041fb89
    FSTP float ptr [ESP + 0x4c]         ; 0041fb8b
    FSTP float ptr [ESP + 0x50]         ; 0041fb8f
    MOVSD ES:EDI,ESI                    ; 0041fb93
    MOVSD ES:EDI,ESI                    ; 0041fb94
    MOVSD ES:EDI,ESI                    ; 0041fb95
    FLD float ptr [ESP + 0xc]           ; 0041fb96
    FXCH                                ; 0041fb9a
    FSTP float ptr [ESP + 0x94]         ; 0041fb9c
    FMUL float ptr [ESP + 0x94]         ; 0041fba3
    SUB ESP,0x8                         ; 0041fbaa
    FSTP double ptr [ESP]               ; 0041fbad
    MOV EBX,EAX                         ; 0041fbb0
    CALL FUN_005b84d0                   ; 0041fbb2
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b84d0()
    MOV dword ptr [ESP + 0x68],EAX      ; 0041fbb7
    MOV dword ptr [ESP + 0x6c],EDX      ; 0041fbbb
    FLD double ptr [ESP + 0x68]         ; 0041fbbf
    ADD ESP,0x8                         ; 0041fbc3
    FLD float ptr [ESP + 0x14]          ; 0041fbc6
    FMUL float ptr [ESP + 0x94]         ; 0041fbca
    FXCH                                ; 0041fbd1
    CALL FUN_005b7ff0                   ; 0041fbd3
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x70]        ; 0041fbd8
    SUB ESP,0x8                         ; 0041fbdc
    FSTP double ptr [ESP]               ; 0041fbdf
    CALL FUN_005b84d0                   ; 0041fbe2
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b84d0()
    MOV dword ptr [ESP + 0x68],EAX      ; 0041fbe7
    MOV dword ptr [ESP + 0x6c],EDX      ; 0041fbeb
    FLD double ptr [ESP + 0x68]         ; 0041fbef
    ADD ESP,0x8                         ; 0041fbf3
    MOV EAX,dword ptr [ESP + 0x70]      ; 0041fbf6
    MOV dword ptr [ESP + 0x94],EAX      ; 0041fbfa
    FILD dword ptr [ESP + 0x94]         ; 0041fc01
    FMUL float ptr [0x005f3e28]         ; 0041fc08 | DAT_005f3e28
    MOV EAX,EBX                         ; 0041fc0e
    FSUB float ptr [EAX + 0x20]         ; 0041fc10
    FLD float ptr [0x005f3e28]          ; 0041fc13 | DAT_005f3e28
    FMUL float ptr [0x005cca11]         ; 0041fc19 | DAT_005cca11
    FMUL double ptr [0x005cca19]        ; 0041fc1f | DAT_005cca19
    FXCH ST2                            ; 0041fc25
    CALL FUN_005b7ff0                   ; 0041fc27
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FXCH                                ; 0041fc2c
    FSUB ST0,ST2                        ; 0041fc2e
    FXCH                                ; 0041fc30
    FISTP dword ptr [ESP + 0x6c]        ; 0041fc32
    FSTP float ptr [EAX + 0x1e628]      ; 0041fc36
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0041fc3c
    MOV dword ptr [ESP + 0x94],EAX      ; 0041fc40
    FILD dword ptr [ESP + 0x94]         ; 0041fc47
    FMUL float ptr [0x005f3e28]         ; 0041fc4e | DAT_005f3e28
    MOV EAX,EBX                         ; 0041fc54
    FSUB float ptr [EAX + 0x28]         ; 0041fc56
    FSUBRP                              ; 0041fc59
    FSTP float ptr [EAX + 0x1e62c]      ; 0041fc5b
    MOV EAX,dword ptr [ESP + 0x70]      ; 0041fc61
    CMP EAX,dword ptr [EBX + 0x1e620]   ; 0041fc65
    JNZ 0x0041fc7d                      ; 0041fc6b
        ;   XREF to: 0041fc7d (CONDITIONAL_JUMP)  ; LAB_0041fc7d
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0041fc6d
    CMP EAX,dword ptr [EBX + 0x1e624]   ; 0041fc71
    JZ 0x0041fe65                       ; 0041fc77
        ;   XREF to: 0041fe65 (CONDITIONAL_JUMP)  ; LAB_0041fe65
    MOV EAX,dword ptr [ESP + 0xac]      ; 0041fc7d
        ;   Label: LAB_0041fc7d
    MOV EBX,dword ptr [ESP + 0x70]      ; 0041fc84
    MOV EAX,dword ptr [EAX + 0x1e620]   ; 0041fc88
    SUB EAX,EBX                         ; 0041fc8e
    MOV dword ptr [ESP + 0x88],EAX      ; 0041fc90
    MOV EAX,dword ptr [ESP + 0xac]      ; 0041fc97
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0041fc9e
    MOV EAX,dword ptr [EAX + 0x1e624]   ; 0041fca2
    SUB EAX,ESI                         ; 0041fca8
    MOV dword ptr [ESP + 0x84],EAX      ; 0041fcaa
    MOV EAX,dword ptr [ESP + 0x88]      ; 0041fcb1
    MOV ECX,0x240                       ; 0041fcb8
    ADD EAX,0xb                         ; 0041fcbd
    MOV EDI,0x7bcd08                    ; 0041fcc0 | DAT_007bcd08
    MOV dword ptr [ESP + 0x80],EAX      ; 0041fcc5
    MOV EAX,dword ptr [ESP + 0x84]      ; 0041fccc
    MOV ESI,dword ptr [ESP + 0xac]      ; 0041fcd3
    ADD EAX,0xb                         ; 0041fcda
    ADD ESI,0x174f4                     ; 0041fcdd
    MOV dword ptr [ESP + 0x7c],EAX      ; 0041fce3
    PUSH EDI                            ; 0041fce7 | DAT_007bcd08
    MOV EAX,ECX                         ; 0041fce8
    SHR ECX,0x2                         ; 0041fcea
    MOVSD.REP ES:EDI,ESI                ; 0041fced | DAT_007bcd08 | DAT_007bcd0c
    MOV CL,AL                           ; 0041fcef
    AND CL,0x3                          ; 0041fcf1
    MOVSB.REP ES:EDI,ESI                ; 0041fcf4 | DAT_007bcd0c
    POP EDI                             ; 0041fcf6
    MOV ESI,dword ptr [ESP + 0xac]      ; 0041fcf7
    LEA EDI,[ESP + 0x3c]                ; 0041fcfe
    LEA ESI,[ESI + 0x20]                ; 0041fd02
    MOV EBX,dword ptr [ESP + 0x88]      ; 0041fd05
    MOV EAX,dword ptr [ESP + 0xac]      ; 0041fd0c
    MOVSD ES:EDI,ESI                    ; 0041fd13
    MOVSD ES:EDI,ESI                    ; 0041fd14
    MOVSD ES:EDI,ESI                    ; 0041fd15
    MOV dword ptr [ESP + 0x90],EAX      ; 0041fd16
    FLD float ptr [ESP + 0x3c]          ; 0041fd1d
    FLD float ptr [ESP + 0x44]          ; 0041fd21
    LEA EDI,[ESP + 0x24]                ; 0041fd25
    FADD float ptr [EAX + 0x1e62c]      ; 0041fd29
    FXCH                                ; 0041fd2f
    FADD float ptr [EAX + 0x1e628]      ; 0041fd31
    LEA EAX,[EBX*0x4 + 0x0]             ; 0041fd37
    LEA ESI,[ESP + 0x3c]                ; 0041fd3e
    SUB EAX,EBX                         ; 0041fd42
    FSTP float ptr [ESP + 0x3c]         ; 0041fd44
    SHL EAX,0x4                         ; 0041fd48
    FSTP float ptr [ESP + 0x44]         ; 0041fd4b
    NEG EAX                             ; 0041fd4f
    MOVSD ES:EDI,ESI                    ; 0041fd51
    MOVSD ES:EDI,ESI                    ; 0041fd52
    MOVSD ES:EDI,ESI                    ; 0041fd53
    MOV dword ptr [ESP + 0x78],EAX      ; 0041fd54
    MOV EAX,dword ptr [ESP + 0x84]      ; 0041fd58
    XOR EDI,EDI                         ; 0041fd5f
    SHL EAX,0x2                         ; 0041fd61
    MOV dword ptr [ESP + 0x8c],EDI      ; 0041fd64
    MOV dword ptr [ESP + 0x74],EAX      ; 0041fd6b
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0041fd6f
        ;   Label: LAB_0041fd6f
    MOV dword ptr [ESP + 0x94],EAX      ; 0041fd76
    FILD dword ptr [ESP + 0x94]         ; 0041fd7d
    FMUL float ptr [0x005f3e28]         ; 0041fd84 | DAT_005f3e28
    MOV EBP,dword ptr [ESP + 0x90]      ; 0041fd8a
    MOV ESI,dword ptr [ESP + 0x78]      ; 0041fd91
    XOR EBX,EBX                         ; 0041fd95
    MOV EAX,dword ptr [ESP + 0x74]      ; 0041fd97
    MOV EDI,EBP                         ; 0041fd9b
    NEG EAX                             ; 0041fd9d
    FADD float ptr [ESP + 0x3c]         ; 0041fd9f
    ADD ESI,EAX                         ; 0041fda3
    FSTP float ptr [ESP + 0x24]         ; 0041fda5
    MOV dword ptr [ESP + 0x94],EBX      ; 0041fda9
        ;   Label: LAB_0041fda9
    FILD dword ptr [ESP + 0x94]         ; 0041fdb0
    FMUL float ptr [0x005f3e28]         ; 0041fdb7 | DAT_005f3e28
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0041fdbd
    FADD float ptr [ESP + 0x44]         ; 0041fdc4
    MOV EDX,dword ptr [ESP + 0x88]      ; 0041fdc8
    FSTP float ptr [ESP + 0x2c]         ; 0041fdcf
    CMP EAX,EDX                         ; 0041fdd3
    JL 0x0041fe70                       ; 0041fdd5
        ;   XREF to: 0041fe70 (CONDITIONAL_JUMP)  ; LAB_0041fe70
    CMP EAX,dword ptr [ESP + 0x80]      ; 0041fddb
    JG 0x0041fe70                       ; 0041fde2
        ;   XREF to: 0041fe70 (CONDITIONAL_JUMP)  ; LAB_0041fe70
    CMP EBX,dword ptr [ESP + 0x84]      ; 0041fde8
    JL 0x0041fe70                       ; 0041fdef
        ;   XREF to: 0041fe70 (CONDITIONAL_JUMP)  ; LAB_0041fe70
    CMP EBX,dword ptr [ESP + 0x7c]      ; 0041fdf5
    JG 0x0041fe70                       ; 0041fdf9
        ;   XREF to: 0041fe70 (CONDITIONAL_JUMP)  ; LAB_0041fe70
    MOV EAX,dword ptr [ESI + 0x7bcd08]  ; 0041fdfb | DAT_007bcd08 | DAT_007bcd0c
    MOV dword ptr [EDI + 0x174f4],EAX   ; 0041fe01
    ADD EDI,0x4                         ; 0041fe07
        ;   Label: LAB_0041fe07
    ADD ESI,0x4                         ; 0041fe0a
    INC EBX                             ; 0041fe0d
    ADD EBP,0x4                         ; 0041fe0e
    CMP EBX,0xc                         ; 0041fe11
    JL 0x0041fda9                       ; 0041fe14
        ;   XREF to: 0041fda9 (CONDITIONAL_JUMP)  ; LAB_0041fda9
    MOV EBX,dword ptr [ESP + 0x78]      ; 0041fe16
    MOV ESI,dword ptr [ESP + 0x8c]      ; 0041fe1a
    MOV ECX,dword ptr [ESP + 0x90]      ; 0041fe21
    ADD EBX,0x30                        ; 0041fe28
    INC ESI                             ; 0041fe2b
    ADD ECX,0x30                        ; 0041fe2c
    MOV dword ptr [ESP + 0x78],EBX      ; 0041fe2f
    MOV dword ptr [ESP + 0x8c],ESI      ; 0041fe33
    MOV dword ptr [ESP + 0x90],ECX      ; 0041fe3a
    CMP ESI,0xc                         ; 0041fe41
    JL 0x0041fd6f                       ; 0041fe44
        ;   XREF to: 0041fd6f (CONDITIONAL_JUMP)  ; LAB_0041fd6f
    MOV EBX,dword ptr [ESP + 0xac]      ; 0041fe4a
    MOV EAX,dword ptr [ESP + 0x70]      ; 0041fe51
    MOV dword ptr [EBX + 0x1e620],EAX   ; 0041fe55
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0041fe5b
    MOV dword ptr [EBX + 0x1e624],EAX   ; 0041fe5f
    ADD ESP,0x98                        ; 0041fe65
        ;   Label: LAB_0041fe65
    POP EBP                             ; 0041fe6b
    POP EDI                             ; 0041fe6c
    POP ESI                             ; 0041fe6d
    POP EBX                             ; 0041fe6e
    RET                                 ; 0041fe6f
    PUSH 0x0                            ; 0041fe70
        ;   Label: LAB_0041fe70
    LEA EAX,[ESP + 0x6c]                ; 0041fe72
    PUSH EAX                            ; 0041fe76
    LEA EAX,[ESP + 0x2c]                ; 0041fe77
    PUSH EAX                            ; 0041fe7b
    PUSH 0x1fc9c68                      ; 0041fe7c | DAT_01fc9c68
    CALL FUN_004738d0                   ; 0041fe81
        ;   XREF to: 004738d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004738d0()
    MOV dword ptr [ESP + 0xa4],EAX      ; 0041fe86
    FLD float ptr [ESP + 0xa4]          ; 0041fe8d
    ADD ESP,0x10                        ; 0041fe94
    MOV EAX,dword ptr [ESP + 0xac]      ; 0041fe97
    FSUB float ptr [EAX + 0x24]         ; 0041fe9e
    FSTP float ptr [EBP + 0x174f4]      ; 0041fea1
    JMP 0x0041fe07                      ; 0041fea7
        ;   XREF to: 0041fe07 (UNCONDITIONAL_JUMP)  ; LAB_0041fe07

