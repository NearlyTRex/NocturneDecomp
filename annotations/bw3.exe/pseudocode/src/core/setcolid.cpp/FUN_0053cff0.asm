; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_setcolid_cpp_FUN_0053cff0(undefined4 param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined8       Stack[-0xc8]:8  local_c8
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
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
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_prye.cpp_FUN_005220d0 at 005221ed
;
; Referenced Globals:
;   undefined4 DAT_005d0ace
;   undefined4 DAT_005d0ad2
;
; Called Functions:
;   core_setcolid.cpp_FUN_0053ccc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053cff0
        ;   Label: core_setcolid.cpp_FUN_0053cff0
    PUSH ESI                            ; 0053cff1
    PUSH EDI                            ; 0053cff2
    PUSH EBP                            ; 0053cff3
    MOV EBP,ESP                         ; 0053cff4
    SUB ESP,0xb8                        ; 0053cff6
    AND ESP,0xfffffff8                  ; 0053cffc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0053cfff
    LEA EDI,[ESP + 0x24]                ; 0053d002
    MOV ESI,dword ptr [EBP + 0x18]      ; 0053d006
    MOVSD ES:EDI,ESI                    ; 0053d009
    MOVSD ES:EDI,ESI                    ; 0053d00a
    MOVSD ES:EDI,ESI                    ; 0053d00b
    XOR EDX,EDX                         ; 0053d00c
    LEA EDI,[ESP + 0x90]                ; 0053d00e
    MOV ESI,EAX                         ; 0053d015
    XOR EBX,EBX                         ; 0053d017
    MOV dword ptr [ESP + 0xac],EDX      ; 0053d019
    MOVSD ES:EDI,ESI                    ; 0053d020
    MOVSD ES:EDI,ESI                    ; 0053d021
    MOVSD ES:EDI,ESI                    ; 0053d022
    MOV dword ptr [ESP + 0xb0],EDX      ; 0053d023
    MOV ESI,0xbe23d70a                  ; 0053d02a
    MOV dword ptr [ESP + 0xa0],EDX      ; 0053d02f
    MOV dword ptr [ESP + 0x9c],ESI      ; 0053d036
    FLD float ptr [0x005d0ace]          ; 0053d03d | DAT_005d0ace
        ;   Label: LAB_0053d03d
    FLD float ptr [ESP + 0x90]          ; 0053d043
    FMUL ST1                            ; 0053d04a
    FLD float ptr [ESP + 0x94]          ; 0053d04c
    FMUL ST2                            ; 0053d053
    FLD float ptr [ESP + 0x98]          ; 0053d055
    FMULP ST3                           ; 0053d05c
    FLD float ptr [ESP + 0x24]          ; 0053d05e
    FLD float ptr [ESP + 0x28]          ; 0053d062
    FLD float ptr [ESP + 0x2c]          ; 0053d066
    MOV EAX,0x3dcccccd                  ; 0053d06a
    LEA EDI,[ESP + 0x84]                ; 0053d06f
    MOV dword ptr [ESP + 0xa8],EAX      ; 0053d076
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0053d07d
    LEA ESI,[ESP + 0x6c]                ; 0053d084
    MOV dword ptr [ESP + 0x6c],EAX      ; 0053d088
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0053d08c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053d093
    MOV dword ptr [ESP + 0x70],EAX      ; 0053d096
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0053d09a
    FXCH ST4                            ; 0053d0a1
    FSTP float ptr [ESP + 0x3c]         ; 0053d0a3
    MOV dword ptr [ESP + 0x74],EAX      ; 0053d0a7
    FXCH ST2                            ; 0053d0ab
    FSTP float ptr [ESP + 0x40]         ; 0053d0ad
    MOVSD ES:EDI,ESI                    ; 0053d0b1
    MOVSD ES:EDI,ESI                    ; 0053d0b2
    MOVSD ES:EDI,ESI                    ; 0053d0b3
    LEA EAX,[ESP + 0x60]                ; 0053d0b4
    LEA EDI,[ESP + 0x78]                ; 0053d0b8
    LEA ESI,[ESP + 0x3c]                ; 0053d0bc
    FXCH ST3                            ; 0053d0c0
    FSTP float ptr [ESP + 0x44]         ; 0053d0c2
    PUSH EAX                            ; 0053d0c6
    MOVSD ES:EDI,ESI                    ; 0053d0c7
    MOVSD ES:EDI,ESI                    ; 0053d0c8
    MOVSD ES:EDI,ESI                    ; 0053d0c9
    LEA EAX,[ESP + 0x28]                ; 0053d0ca
    LEA EDI,[ESP + 0x58]                ; 0053d0ce
    LEA ESI,[ESP + 0x1c]                ; 0053d0d2
    PUSH EAX                            ; 0053d0d6
    FXCH ST2                            ; 0053d0d7
    FADD float ptr [ESP + 0x80]         ; 0053d0d9
    FXCH ST2                            ; 0053d0e0
    FADD float ptr [ESP + 0x84]         ; 0053d0e2
    FXCH                                ; 0053d0e9
    FADD float ptr [ESP + 0x88]         ; 0053d0eb
    FXCH ST2                            ; 0053d0f2
    FSTP float ptr [ESP + 0x20]         ; 0053d0f4
    FSTP float ptr [ESP + 0x24]         ; 0053d0f8
    FSTP float ptr [ESP + 0x28]         ; 0053d0fc
    MOVSD ES:EDI,ESI                    ; 0053d100
    MOVSD ES:EDI,ESI                    ; 0053d101
    MOVSD ES:EDI,ESI                    ; 0053d102
    PUSH EDX                            ; 0053d103
    FLD float ptr [ESP + 0x60]          ; 0053d104
    FLD float ptr [ESP + 0x64]          ; 0053d108
    FLD float ptr [ESP + 0x68]          ; 0053d10c
    LEA EDI,[ESP + 0x6c]                ; 0053d110
    LEA ESI,[ESP + 0x3c]                ; 0053d114
    FXCH ST2                            ; 0053d118
    FADD float ptr [ESP + 0x90]         ; 0053d11a
    FXCH                                ; 0053d121
    FADD float ptr [ESP + 0x94]         ; 0053d123
    FXCH ST2                            ; 0053d12a
    FADD float ptr [ESP + 0x98]         ; 0053d12c
    FXCH                                ; 0053d133
    FSTP float ptr [ESP + 0x3c]         ; 0053d135
    FXCH                                ; 0053d139
    FSTP float ptr [ESP + 0x40]         ; 0053d13b
    FSTP float ptr [ESP + 0x44]         ; 0053d13f
    MOVSD ES:EDI,ESI                    ; 0053d143
    MOVSD ES:EDI,ESI                    ; 0053d144
    MOVSD ES:EDI,ESI                    ; 0053d145
    CALL core_setcolid.cpp_FUN_0053ccc0 ; 0053d146
        ;   XREF to: 0053ccc0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053ccc0()
    MOV dword ptr [ESP + 0xc0],EAX      ; 0053d14b
    FLD float ptr [ESP + 0xc0]          ; 0053d152
    ADD ESP,0xc                         ; 0053d159
    FLDZ                                ; 0053d15c
    FXCH                                ; 0053d15e
    FST float ptr [ESP + 0x8]           ; 0053d160
    FSTP double ptr [ESP]               ; 0053d164
    FCOMP double ptr [ESP]              ; 0053d167
    FNSTSW AX                           ; 0053d16a
    SAHF                                ; 0053d16c
    JA 0x0053d17d                       ; 0053d16d
        ;   XREF to: 0053d17d (CONDITIONAL_JUMP)  ; LAB_0053d17d
    FLD1                                ; 0053d16f
    FCOMP double ptr [ESP]              ; 0053d171
    FNSTSW AX                           ; 0053d174
    SAHF                                ; 0053d176
    JNC 0x0053d24a                      ; 0053d177
        ;   XREF to: 0053d24a (CONDITIONAL_JUMP)  ; LAB_0053d24a
    LEA EAX,[ESP + 0x24]                ; 0053d17d
        ;   Label: LAB_0053d17d
    LEA EDX,[ESP + 0x60]                ; 0053d181
    CMP EAX,EDX                         ; 0053d185
    JZ 0x0053d1a1                       ; 0053d187
        ;   XREF to: 0053d1a1 (CONDITIONAL_JUMP)  ; LAB_0053d1a1
    MOV EAX,dword ptr [ESP + 0x60]      ; 0053d189
    MOV dword ptr [ESP + 0x24],EAX      ; 0053d18d
    MOV EAX,dword ptr [ESP + 0x64]      ; 0053d191
    MOV dword ptr [ESP + 0x28],EAX      ; 0053d195
    MOV EAX,dword ptr [ESP + 0x68]      ; 0053d199
    MOV dword ptr [ESP + 0x2c],EAX      ; 0053d19d
    FLDZ                                ; 0053d1a1
        ;   Label: LAB_0053d1a1
    FLD float ptr [ESP + 0xa8]          ; 0053d1a3
    FXCH                                ; 0053d1aa
    FMUL ST1                            ; 0053d1ac
    FLD ST1                             ; 0053d1ae
    FMUL float ptr [0x005d0ad2]         ; 0053d1b0 | DAT_005d0ad2
    FLD float ptr [ESP + 0x90]          ; 0053d1b6
    FLD float ptr [ESP + 0x94]          ; 0053d1bd
    FLD float ptr [ESP + 0x98]          ; 0053d1c4
    FLD float ptr [ESP + 0xac]          ; 0053d1cb
    LEA EDI,[ESP + 0xc]                 ; 0053d1d2
    LEA ESI,[ESP + 0x48]                ; 0053d1d6
    INC EBX                             ; 0053d1da
    FXCH ST5                            ; 0053d1db
    FSTP float ptr [ESP + 0x48]         ; 0053d1dd
    MOV EAX,dword ptr [ESP + 0x48]      ; 0053d1e1
    FXCH ST4                            ; 0053d1e5
    FADDP ST5,ST0                       ; 0053d1e7
    MOV dword ptr [ESP + 0x50],EAX      ; 0053d1e9
    FXCH ST2                            ; 0053d1ed
    FSTP float ptr [ESP + 0x4c]         ; 0053d1ef
    MOVSD ES:EDI,ESI                    ; 0053d1f3
    MOVSD ES:EDI,ESI                    ; 0053d1f4
    MOVSD ES:EDI,ESI                    ; 0053d1f5
    FXCH ST3                            ; 0053d1f6
    FSTP float ptr [ESP + 0xac]         ; 0053d1f8
    FXCH ST2                            ; 0053d1ff
    FADD float ptr [ESP + 0xc]          ; 0053d201
    FXCH ST2                            ; 0053d205
    FADD float ptr [ESP + 0x10]         ; 0053d207
    FXCH                                ; 0053d20b
    FADD float ptr [ESP + 0x14]         ; 0053d20d
    FXCH ST2                            ; 0053d211
    FSTP float ptr [ESP + 0x90]         ; 0053d213
    FSTP float ptr [ESP + 0x94]         ; 0053d21a
    FSTP float ptr [ESP + 0x98]         ; 0053d221
    CMP EBX,0x64                        ; 0053d228
    JL 0x0053d03d                       ; 0053d22b
        ;   XREF to: 0053d03d (CONDITIONAL_JUMP)  ; LAB_0053d03d
    MOV dword ptr [ESP + 0xa4],0xbf800000 ; 0053d231
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0053d23c
    MOV ESP,EBP                         ; 0053d243
    POP EBP                             ; 0053d245
    POP EDI                             ; 0053d246
    POP ESI                             ; 0053d247
    POP EBX                             ; 0053d248
    RET                                 ; 0053d249
    FLD float ptr [ESP + 0x8]           ; 0053d24a
        ;   Label: LAB_0053d24a
    FMUL float ptr [0x005d0ace]         ; 0053d24e | DAT_005d0ace
    FADD float ptr [ESP + 0xac]         ; 0053d254
    FSTP float ptr [ESP + 0xa4]         ; 0053d25b
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0053d262
    MOV ESP,EBP                         ; 0053d269
    POP EBP                             ; 0053d26b
    POP EDI                             ; 0053d26c
    POP ESI                             ; 0053d26d
    POP EBX                             ; 0053d26e
    RET                                 ; 0053d26f

