; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054d9c0(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0xb8]:1  local_b8
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
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[4]:
;   FUN_00458200 at 00458249
;   FUN_004c90b0 at 004c90d1
;   FUN_0054dbd0 at 0054dc88
;   FUN_0058beb0 at 0058bef9
;
; Called Functions:
;   FUN_0054eac0
;   FUN_00583260
;   FUN_00583660
;   FUN_005855f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d9c0
        ;   Label: FUN_0054d9c0
    PUSH EDI                            ; 0054d9c1
    PUSH EBP                            ; 0054d9c2
    SUB ESP,0xac                        ; 0054d9c3
    MOV EBX,dword ptr [ESP + 0xbc]      ; 0054d9c9
    MOV EBP,ESI                         ; 0054d9d0
    CMP dword ptr [ESP + 0xc0],0x0      ; 0054d9d2
    JL 0x0054dade                       ; 0054d9da
        ;   XREF to: 0054dade (CONDITIONAL_JUMP)  ; LAB_0054dade
    PUSH EBX                            ; 0054d9e0
    CALL FUN_0054eac0                   ; 0054d9e1
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 0054d9e6
    MOV ESI,dword ptr [ESP + 0xc0]      ; 0054d9e9
    MOV EDX,EAX                         ; 0054d9f0
    LEA EAX,[ESI*0x8 + 0x0]             ; 0054d9f2
    ADD EAX,ESI                         ; 0054d9f9
    MOV EDX,dword ptr [EDX + EAX*0x4 + 0x1de9c] ; 0054d9fb
    LEA EAX,[ESI*0x4 + 0x0]             ; 0054da02
    SUB EAX,ESI                         ; 0054da09
    SHL EAX,0x2                         ; 0054da0b
    MOV dword ptr [ESP + 0xa8],EAX      ; 0054da0e
    TEST EDX,EDX                        ; 0054da15
    JL 0x0054db0b                       ; 0054da17
        ;   XREF to: 0054db0b (CONDITIONAL_JUMP)  ; LAB_0054db0b
    PUSH EDX                            ; 0054da1d
    PUSH EBX                            ; 0054da1e
    LEA ESI,[ESP + 0x8]                 ; 0054da1f
    LEA EDI,[ESP + 0x68]                ; 0054da23
    CALL FUN_0054d9c0                   ; 0054da27
        ;   XREF to: 0054d9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054d9c0()
    MOV ECX,0xc                         ; 0054da2c
    LEA ESI,[ESP + 0x8]                 ; 0054da31
    ADD ESP,0x8                         ; 0054da35
    LEA EAX,[ESP + 0x60]                ; 0054da38
    MOVSD.REP ES:EDI,ESI                ; 0054da3c
    PUSH EAX                            ; 0054da3e
    MOV ECX,dword ptr [ESP + 0xac]      ; 0054da3f
    LEA EAX,[EBX + 0x58]                ; 0054da46
    ADD EAX,ECX                         ; 0054da49
    PUSH EAX                            ; 0054da4b
    LEA ESI,[ESP + 0xa4]                ; 0054da4c
    LEA EDI,[ESP + 0x98]                ; 0054da53
    CALL FUN_00583260                   ; 0054da5a
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined FUN_00583260()
    LEA ESI,[ESP + 0xa4]                ; 0054da5f
    ADD ESP,0x8                         ; 0054da66
    MOVSD ES:EDI,ESI                    ; 0054da69
    MOVSD ES:EDI,ESI                    ; 0054da6a
    MOVSD ES:EDI,ESI                    ; 0054da6b
    MOV EAX,dword ptr [ESP + 0x90]      ; 0054da6c
    MOV dword ptr [ESP + 0x3c],EAX      ; 0054da73
    MOV EAX,dword ptr [ESP + 0x94]      ; 0054da77
    MOV dword ptr [ESP + 0x4c],EAX      ; 0054da7e
    MOV EAX,dword ptr [ESP + 0x98]      ; 0054da82
    MOV dword ptr [ESP + 0x5c],EAX      ; 0054da89
    MOV EDX,dword ptr [ESP + 0xc0]      ; 0054da8d
        ;   Label: LAB_0054da8d
    LEA EAX,[EBX + 0x6b0]               ; 0054da94
    SHL EDX,0x4                         ; 0054da9a
    ADD EAX,EDX                         ; 0054da9d
    PUSH EAX                            ; 0054da9f
    LEA EAX,[ESP + 0x34]                ; 0054daa0
    PUSH EAX                            ; 0054daa4
    CALL FUN_005855f0                   ; 0054daa5
        ;   XREF to: 005855f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005855f0()
    ADD ESP,0x8                         ; 0054daaa
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0054daad
    SHL EAX,0x2                         ; 0054dab4
    ADD EBX,EAX                         ; 0054dab7
    CMP dword ptr [EBX + 0xcf0],0x3f800000 ; 0054dab9
    JNZ 0x0054db3a                      ; 0054dac3
        ;   XREF to: 0054db3a (CONDITIONAL_JUMP)  ; LAB_0054db3a
    MOV ECX,0xc                         ; 0054dac5
        ;   Label: LAB_0054dac5
    LEA ESI,[ESP + 0x30]                ; 0054daca
    MOV EDI,EBP                         ; 0054dace
    MOVSD.REP ES:EDI,ESI                ; 0054dad0
    MOV EAX,EBP                         ; 0054dad2
    ADD ESP,0xac                        ; 0054dad4
    POP EBP                             ; 0054dada
    POP EDI                             ; 0054dadb
    POP EBX                             ; 0054dadc
    RET                                 ; 0054dadd
    LEA EAX,[ESP + 0x30]                ; 0054dade
        ;   Label: LAB_0054dade
    PUSH EAX                            ; 0054dae2
    CALL FUN_00583660                   ; 0054dae3
        ;   XREF to: 00583660 (UNCONDITIONAL_CALL)  ; undefined FUN_00583660()
    ADD ESP,0x4                         ; 0054dae8
    MOV EAX,dword ptr [EBX + 0x6a4]     ; 0054daeb
    MOV dword ptr [ESP + 0x3c],EAX      ; 0054daf1
    MOV EAX,dword ptr [EBX + 0x6a8]     ; 0054daf5
    MOV dword ptr [ESP + 0x4c],EAX      ; 0054dafb
    MOV EAX,dword ptr [EBX + 0x6ac]     ; 0054daff
    MOV dword ptr [ESP + 0x5c],EAX      ; 0054db05
    JMP 0x0054dac5                      ; 0054db09
        ;   XREF to: 0054dac5 (UNCONDITIONAL_JUMP)  ; LAB_0054dac5
    FLD float ptr [EBX + 0x6a4]         ; 0054db0b
        ;   Label: LAB_0054db0b
    FADD float ptr [EBX + EAX*0x1 + 0x58] ; 0054db11
    FSTP float ptr [ESP + 0x3c]         ; 0054db15
    FLD float ptr [EBX + 0x6a8]         ; 0054db19
    FADD float ptr [EBX + EAX*0x1 + 0x5c] ; 0054db1f
    FSTP float ptr [ESP + 0x4c]         ; 0054db23
    FLD float ptr [EBX + 0x6ac]         ; 0054db27
    FADD float ptr [EBX + EAX*0x1 + 0x60] ; 0054db2d
    FSTP float ptr [ESP + 0x5c]         ; 0054db31
    JMP 0x0054da8d                      ; 0054db35
        ;   XREF to: 0054da8d (UNCONDITIONAL_JUMP)  ; LAB_0054da8d
    FLD float ptr [ESP + 0x30]          ; 0054db3a
        ;   Label: LAB_0054db3a
    FMUL float ptr [EBX + 0xcf0]        ; 0054db3e
    FLD float ptr [ESP + 0x34]          ; 0054db44
    FXCH                                ; 0054db48
    FSTP float ptr [ESP + 0x30]         ; 0054db4a
    FMUL float ptr [EBX + 0xcf0]        ; 0054db4e
    FLD float ptr [ESP + 0x38]          ; 0054db54
    FXCH                                ; 0054db58
    FSTP float ptr [ESP + 0x34]         ; 0054db5a
    FMUL float ptr [EBX + 0xcf0]        ; 0054db5e
    FLD float ptr [ESP + 0x40]          ; 0054db64
    FXCH                                ; 0054db68
    FSTP float ptr [ESP + 0x38]         ; 0054db6a
    FMUL float ptr [EBX + 0xcf0]        ; 0054db6e
    FLD float ptr [ESP + 0x44]          ; 0054db74
    FXCH                                ; 0054db78
    FSTP float ptr [ESP + 0x40]         ; 0054db7a
    FMUL float ptr [EBX + 0xcf0]        ; 0054db7e
    FLD float ptr [ESP + 0x48]          ; 0054db84
    FXCH                                ; 0054db88
    FSTP float ptr [ESP + 0x44]         ; 0054db8a
    FMUL float ptr [EBX + 0xcf0]        ; 0054db8e
    FLD float ptr [ESP + 0x50]          ; 0054db94
    FXCH                                ; 0054db98
    FSTP float ptr [ESP + 0x48]         ; 0054db9a
    FMUL float ptr [EBX + 0xcf0]        ; 0054db9e
    FLD float ptr [ESP + 0x54]          ; 0054dba4
    FXCH                                ; 0054dba8
    FSTP float ptr [ESP + 0x50]         ; 0054dbaa
    FMUL float ptr [EBX + 0xcf0]        ; 0054dbae
    FLD float ptr [ESP + 0x58]          ; 0054dbb4
    FXCH                                ; 0054dbb8
    FSTP float ptr [ESP + 0x54]         ; 0054dbba
    FMUL float ptr [EBX + 0xcf0]        ; 0054dbbe
    FSTP float ptr [ESP + 0x58]         ; 0054dbc4
    JMP 0x0054dac5                      ; 0054dbc8
        ;   XREF to: 0054dac5 (UNCONDITIONAL_JUMP)  ; LAB_0054dac5

