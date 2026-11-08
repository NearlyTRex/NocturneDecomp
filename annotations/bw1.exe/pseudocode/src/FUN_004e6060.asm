; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e6060(undefined4 param_1,undefined4 param_2,float *param_3,int param_4,int param_5)
;
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x68]:4  local_68
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
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[21]:
;   FUN_00409f20 at 0040a27a
;   FUN_00428ae0 at 00429589
;   FUN_00430d90 at 0043108b
;   FUN_004316b0 at 0043189d
;   FUN_004319e0 at 00431b32
;   FUN_00459100 at 00459bf7
;   FUN_0046bde0 at 0046c729
;   FUN_0047cc20 at 0047cf0b
;   FUN_0049f310 at 0049f68d
;   FUN_004a0770 at 004a07f6
;   ... and 11 more
;
; Called Functions:
;   FUN_0040cc00
;   FUN_0045f3e0
;   FUN_004e5f40
;   FUN_005c1d69
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6060
        ;   Label: FUN_004e6060
    PUSH ESI                            ; 004e6061
    PUSH EDI                            ; 004e6062
    PUSH EBP                            ; 004e6063
    MOV EBP,ESP                         ; 004e6064
    SUB ESP,0x74                        ; 004e6066
    AND ESP,0xfffffff8                  ; 004e6069
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004e606c
    CMP dword ptr [EBP + 0x24],0x2      ; 004e606f
    JZ 0x004e60a0                       ; 004e6073
        ;   XREF to: 004e60a0 (CONDITIONAL_JUMP)  ; LAB_004e60a0
    TEST EBX,EBX                        ; 004e6075
    JNZ 0x004e60a7                      ; 004e6077
        ;   XREF to: 004e60a7 (CONDITIONAL_JUMP)  ; LAB_004e60a7
    MOV EDX,dword ptr [EBP + 0x20]      ; 004e6079
    XOR ESI,ESI                         ; 004e607c
    TEST EDX,EDX                        ; 004e607e
    JLE 0x004e60a0                      ; 004e6080
        ;   XREF to: 004e60a0 (CONDITIONAL_JUMP)  ; LAB_004e60a0
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e6082
    MOV EDI,dword ptr [EBP + 0x20]      ; 004e6085
    MOV EDX,dword ptr [EBP + 0x24]      ; 004e6088
        ;   Label: LAB_004e6088
    PUSH EDX                            ; 004e608b
    PUSH 0x0                            ; 004e608c
    MOV ECX,dword ptr [EBP + 0x18]      ; 004e608e
    PUSH ECX                            ; 004e6091
    PUSH EBX                            ; 004e6092
    INC ESI                             ; 004e6093
    CALL FUN_004e5f40                   ; 004e6094
        ;   XREF to: 004e5f40 (UNCONDITIONAL_CALL)  ; undefined FUN_004e5f40()
    ADD ESP,0x10                        ; 004e6099
    CMP ESI,EDI                         ; 004e609c
    JL 0x004e6088                       ; 004e609e
        ;   XREF to: 004e6088 (CONDITIONAL_JUMP)  ; LAB_004e6088
    MOV ESP,EBP                         ; 004e60a0
        ;   Label: LAB_004e60a0
    POP EBP                             ; 004e60a2
    POP EDI                             ; 004e60a3
    POP ESI                             ; 004e60a4
    POP EBX                             ; 004e60a5
    RET                                 ; 004e60a6
    FLD float ptr [EBX + 0x4]           ; 004e60a7
        ;   Label: LAB_004e60a7
    FMUL ST0                            ; 004e60aa
    FLD float ptr [EBX]                 ; 004e60ac
    FMUL ST0                            ; 004e60ae
    FADDP                               ; 004e60b0
    FLD float ptr [EBX + 0x8]           ; 004e60b2
    FMUL ST0                            ; 004e60b5
    FADDP                               ; 004e60b7
    FSQRT                               ; 004e60b9
    LEA EAX,[ESP + 0x40]                ; 004e60bb
    FSTP float ptr [ESP + 0x68]         ; 004e60bf
    CMP EAX,EBX                         ; 004e60c3
    JZ 0x004e60db                       ; 004e60c5
        ;   XREF to: 004e60db (CONDITIONAL_JUMP)  ; LAB_004e60db
    MOV EAX,dword ptr [EBX]             ; 004e60c7
    MOV dword ptr [ESP + 0x40],EAX      ; 004e60c9
    MOV EAX,dword ptr [EBX + 0x4]       ; 004e60cd
    MOV dword ptr [ESP + 0x44],EAX      ; 004e60d0
    MOV EAX,dword ptr [EBX + 0x8]       ; 004e60d4
    MOV dword ptr [ESP + 0x48],EAX      ; 004e60d7
    FLD float ptr [ESP + 0x44]          ; 004e60db
        ;   Label: LAB_004e60db
    FMUL ST0                            ; 004e60df
    FLD float ptr [ESP + 0x40]          ; 004e60e1
    FMUL ST0                            ; 004e60e5
    FADDP                               ; 004e60e7
    FLD float ptr [ESP + 0x48]          ; 004e60e9
    FMUL ST0                            ; 004e60ed
    FADDP                               ; 004e60ef
    FSQRT                               ; 004e60f1
    FLDZ                                ; 004e60f3
    FXCH                                ; 004e60f5
    FSTP float ptr [ESP + 0x64]         ; 004e60f7
    FCOMP float ptr [ESP + 0x64]        ; 004e60fb
    FNSTSW AX                           ; 004e60ff
    SAHF                                ; 004e6101
    JNC 0x004e627d                      ; 004e6102
        ;   XREF to: 004e627d (CONDITIONAL_JUMP)  ; LAB_004e627d
    FLD1                                ; 004e6108
    FLD float ptr [ESP + 0x40]          ; 004e610a
    FXCH                                ; 004e610e
    FDIV float ptr [ESP + 0x64]         ; 004e6110
    FXCH                                ; 004e6114
    FMUL ST1                            ; 004e6116
    FLD float ptr [ESP + 0x44]          ; 004e6118
    FMUL ST2                            ; 004e611c
    FLD float ptr [ESP + 0x48]          ; 004e611e
    FMULP ST3                           ; 004e6122
    FXCH                                ; 004e6124
    FSTP float ptr [ESP + 0x40]         ; 004e6126
    FSTP float ptr [ESP + 0x44]         ; 004e612a
    FSTP float ptr [ESP + 0x48]         ; 004e612e
    FLD float ptr [ESP + 0x48]          ; 004e6132
        ;   Label: LAB_004e6132
    FLD float ptr [ESP + 0x40]          ; 004e6136
    CALL FUN_005c1d69                   ; 004e613a
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1d69()
    FLD float ptr [ESP + 0x48]          ; 004e613f
    FMUL ST0                            ; 004e6143
    FLD float ptr [ESP + 0x40]          ; 004e6145
    FMUL ST0                            ; 004e6149
    FADDP                               ; 004e614b
    FSQRT                               ; 004e614d
    FLD float ptr [ESP + 0x44]          ; 004e614f
    CALL FUN_005c1d69                   ; 004e6153
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1d69()
    XOR EDI,EDI                         ; 004e6158
    XOR EBX,EBX                         ; 004e615a
    MOV dword ptr [ESP + 0x54],EDI      ; 004e615c
    FXCH                                ; 004e6160
    FSTP float ptr [ESP + 0x50]         ; 004e6162
    FCHS                                ; 004e6166
    MOV EAX,dword ptr [EBP + 0x20]      ; 004e6168
    FSTP float ptr [ESP + 0x4c]         ; 004e616b
    TEST EAX,EAX                        ; 004e616f
    JLE 0x004e60a0                      ; 004e6171
        ;   XREF to: 004e60a0 (CONDITIONAL_JUMP)  ; LAB_004e60a0
    PUSH 0x3f490fdb                     ; 004e6177
        ;   Label: LAB_004e6177
    LEA EDI,[ESP + 0x2c]                ; 004e617c
    LEA ESI,[ESP + 0x50]                ; 004e6180
    PUSH 0xbf490fdb                     ; 004e6184
    MOVSD ES:EDI,ESI                    ; 004e6189
    MOVSD ES:EDI,ESI                    ; 004e618a
    MOVSD ES:EDI,ESI                    ; 004e618b
    CALL FUN_0040cc00                   ; 004e618c
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x78],EAX      ; 004e6191
    FLD float ptr [ESP + 0x78]          ; 004e6195
    ADD ESP,0x8                         ; 004e6199
    PUSH 0x3f490fdb                     ; 004e619c
    FADD float ptr [ESP + 0x2c]         ; 004e61a1
    PUSH 0xbf490fdb                     ; 004e61a5
    FSTP float ptr [ESP + 0x30]         ; 004e61aa
    CALL FUN_0040cc00                   ; 004e61ae
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x78],EAX      ; 004e61b3
    FLD float ptr [ESP + 0x78]          ; 004e61b7
    ADD ESP,0x8                         ; 004e61bb
    LEA EAX,[ESP + 0x28]                ; 004e61be
    PUSH EAX                            ; 004e61c2
    LEA EAX,[ESP + 0x4]                 ; 004e61c3
    FADD float ptr [ESP + 0x30]         ; 004e61c7
    PUSH EAX                            ; 004e61cb
    FSTP float ptr [ESP + 0x34]         ; 004e61cc
    CALL FUN_0045f3e0                   ; 004e61d0
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f3e0()
    ADD ESP,0x8                         ; 004e61d5
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e61d8
    MOV dword ptr [ESP + 0x28],EAX      ; 004e61dc
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e61e0
    PUSH 0x3f000000                     ; 004e61e4
    MOV dword ptr [ESP + 0x30],EAX      ; 004e61e9
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e61ed
    PUSH 0xbf000000                     ; 004e61f1
    MOV dword ptr [ESP + 0x38],EAX      ; 004e61f6
    CALL FUN_0040cc00                   ; 004e61fa
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    ADD ESP,0x8                         ; 004e61ff
    FLD float ptr [ESP + 0x68]          ; 004e6202
    FLD float ptr [ESP + 0x28]          ; 004e6206
    FMUL ST1                            ; 004e620a
    FLD float ptr [ESP + 0x2c]          ; 004e620c
    FMUL ST2                            ; 004e6210
    FLD float ptr [ESP + 0x30]          ; 004e6212
    FMULP ST3                           ; 004e6216
    LEA EDI,[ESP + 0x58]                ; 004e6218
    LEA ESI,[ESP + 0x34]                ; 004e621c
    FXCH                                ; 004e6220
    FSTP float ptr [ESP + 0x34]         ; 004e6222
    FSTP float ptr [ESP + 0x38]         ; 004e6226
    FSTP float ptr [ESP + 0x3c]         ; 004e622a
    MOVSD ES:EDI,ESI                    ; 004e622e
    MOVSD ES:EDI,ESI                    ; 004e622f
    MOVSD ES:EDI,ESI                    ; 004e6230
    LEA EAX,[ESP + 0x28]                ; 004e6231
    LEA ESI,[ESP + 0x58]                ; 004e6235
    CMP EAX,ESI                         ; 004e6239
    JZ 0x004e6255                       ; 004e623b
        ;   XREF to: 004e6255 (CONDITIONAL_JUMP)  ; LAB_004e6255
    MOV EAX,dword ptr [ESP + 0x58]      ; 004e623d
    MOV dword ptr [ESP + 0x28],EAX      ; 004e6241
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004e6245
    MOV dword ptr [ESP + 0x2c],EAX      ; 004e6249
    MOV EAX,dword ptr [ESP + 0x60]      ; 004e624d
    MOV dword ptr [ESP + 0x30],EAX      ; 004e6251
    MOV ECX,dword ptr [EBP + 0x24]      ; 004e6255
        ;   Label: LAB_004e6255
    PUSH ECX                            ; 004e6258
    LEA EAX,[ESP + 0x2c]                ; 004e6259
    PUSH EAX                            ; 004e625d
    MOV ESI,dword ptr [EBP + 0x18]      ; 004e625e
    PUSH ESI                            ; 004e6261
    MOV EDI,dword ptr [EBP + 0x14]      ; 004e6262
    PUSH EDI                            ; 004e6265
    CALL FUN_004e5f40                   ; 004e6266
        ;   XREF to: 004e5f40 (UNCONDITIONAL_CALL)  ; undefined FUN_004e5f40()
    ADD ESP,0x10                        ; 004e626b
    INC EBX                             ; 004e626e
    CMP EBX,dword ptr [EBP + 0x20]      ; 004e626f
    JGE 0x004e60a0                      ; 004e6272
        ;   XREF to: 004e60a0 (CONDITIONAL_JUMP)  ; LAB_004e60a0
    JMP 0x004e6177                      ; 004e6278
        ;   XREF to: 004e6177 (UNCONDITIONAL_JUMP)  ; LAB_004e6177
    XOR ECX,ECX                         ; 004e627d
        ;   Label: LAB_004e627d
    MOV dword ptr [ESP + 0x44],ECX      ; 004e627f
    MOV dword ptr [ESP + 0x40],ECX      ; 004e6283
    MOV dword ptr [ESP + 0x48],ECX      ; 004e6287
    JMP 0x004e6132                      ; 004e628b
        ;   XREF to: 004e6132 (UNCONDITIONAL_JUMP)  ; LAB_004e6132

