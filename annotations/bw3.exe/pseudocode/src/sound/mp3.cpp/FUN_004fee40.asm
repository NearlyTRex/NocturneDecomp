; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fee40(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)
;
; Local Variables:
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
;   FUN_00502d60 at 00503310
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005ca0cf
;   TerminatedCString s_Side_info_bad_block_type_005ca0e0
;   TerminatedCString s_sound_mp3_cpp_005ca119
;   TerminatedCString s_Side_info_bad_block_type_005ca12a
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01d94b98
;
; Called Functions:
;   FUN_004e4330
;   FUN_004fd4f0
;   FUN_004fd5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fee40
        ;   Label: FUN_004fee40
    PUSH ESI                            ; 004fee41
    PUSH EDI                            ; 004fee42
    PUSH EBP                            ; 004fee43
    SUB ESP,0x4c                        ; 004fee44
    MOV EBX,dword ptr [ESP + 0x64]      ; 004fee47
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004fee4b
    MOV EDX,dword ptr [EAX + 0x10]      ; 004fee4f
    MOV EAX,dword ptr [EAX]             ; 004fee52
    MOV dword ptr [ESP + 0x10],EDX      ; 004fee54
    CMP dword ptr [EAX],0x0             ; 004fee58
    JZ 0x004ff153                       ; 004fee5b
        ;   XREF to: 004ff153 (CONDITIONAL_JUMP)  ; LAB_004ff153
    PUSH 0x9                            ; 004fee61
    PUSH EBX                            ; 004fee63
    CALL FUN_004fd5e0                   ; 004fee64
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004fee69
    MOV EDX,dword ptr [ESP + 0x68]      ; 004fee6c
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fee70
    MOV dword ptr [EDX],EAX             ; 004fee74
    CMP ESI,0x1                         ; 004fee76
    JNZ 0x004ff0dc                      ; 004fee79
        ;   XREF to: 004ff0dc (CONDITIONAL_JUMP)  ; LAB_004ff0dc
    PUSH 0x5                            ; 004fee7f
    PUSH EBX                            ; 004fee81
        ;   Label: LAB_004fee81
    CALL FUN_004fd5e0                   ; 004fee82
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004fee87
    MOV EDX,dword ptr [ESP + 0x68]      ; 004fee8a
    MOV dword ptr [EDX + 0x4],EAX       ; 004fee8e
    MOV EDI,dword ptr [ESP + 0x10]      ; 004fee91
    XOR EBP,EBP                         ; 004fee95
    TEST EDI,EDI                        ; 004fee97
    JLE 0x004feedb                      ; 004fee99
        ;   XREF to: 004feedb (CONDITIONAL_JUMP)  ; LAB_004feedb
    MOV EAX,dword ptr [ESP + 0x68]      ; 004fee9b
    ADD EAX,0x10                        ; 004fee9f
    MOV dword ptr [ESP],EAX             ; 004feea2
    IMUL EAX,EBP,0xa0                   ; 004feea5
        ;   Label: LAB_004feea5
    MOV ESI,dword ptr [ESP + 0x68]      ; 004feeab
    MOV EDI,dword ptr [ESP]             ; 004feeaf
    ADD ESI,EAX                         ; 004feeb2
    PUSH EBX                            ; 004feeb4
        ;   Label: LAB_004feeb4
    ADD ESI,0x4                         ; 004feeb5
    CALL FUN_004fd4f0                   ; 004feeb8
        ;   XREF to: 004fd4f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd4f0()
    ADD ESP,0x4                         ; 004feebd
    MOV dword ptr [ESI + 0x4],EAX       ; 004feec0
    CMP ESI,EDI                         ; 004feec3
    JNZ 0x004feeb4                      ; 004feec5
        ;   XREF to: 004feeb4 (CONDITIONAL_JUMP)  ; LAB_004feeb4
    MOV EAX,dword ptr [ESP]             ; 004feec7
    MOV EDX,dword ptr [ESP + 0x10]      ; 004feeca
    ADD EAX,0xa0                        ; 004feece
    INC EBP                             ; 004feed3
    MOV dword ptr [ESP],EAX             ; 004feed4
    CMP EBP,EDX                         ; 004feed7
    JL 0x004feea5                       ; 004feed9
        ;   XREF to: 004feea5 (CONDITIONAL_JUMP)  ; LAB_004feea5
    XOR ECX,ECX                         ; 004feedb
        ;   Label: LAB_004feedb
    MOV dword ptr [ESP + 0x4],ECX       ; 004feedd
    XOR ESI,ESI                         ; 004feee1
        ;   Label: LAB_004feee1
    MOV EDI,dword ptr [ESP + 0x10]      ; 004feee3
    MOV dword ptr [ESP + 0x28],ESI      ; 004feee7
    TEST EDI,EDI                        ; 004feeeb
    JLE 0x004ff0bd                      ; 004feeed
        ;   XREF to: 004ff0bd (CONDITIONAL_JUMP)  ; LAB_004ff0bd
    MOV EAX,dword ptr [ESP + 0x4]       ; 004feef3
    MOV EDX,dword ptr [ESP + 0x68]      ; 004feef7
    MOV dword ptr [ESP + 0xc],EAX       ; 004feefb
    MOV dword ptr [ESP + 0x40],EAX      ; 004feeff
    MOV dword ptr [ESP + 0x44],EAX      ; 004fef03
    ADD EAX,EDX                         ; 004fef07
    MOV dword ptr [ESP + 0x38],EAX      ; 004fef09
    MOV dword ptr [ESP + 0x18],EAX      ; 004fef0d
    MOV dword ptr [ESP + 0x1c],EAX      ; 004fef11
    MOV dword ptr [ESP + 0x30],EAX      ; 004fef15
    PUSH 0xc                            ; 004fef19
        ;   Label: LAB_004fef19
    PUSH EBX                            ; 004fef1b
    CALL FUN_004fd5e0                   ; 004fef1c
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004fef21
    IMUL EBP,dword ptr [ESP + 0x28],0xa0 ; 004fef24
    PUSH 0x9                            ; 004fef2c
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004fef2e
    PUSH EBX                            ; 004fef32
    MOV ESI,dword ptr [ESP + 0x70]      ; 004fef33
    MOV dword ptr [EDX + 0x18],EAX      ; 004fef37
    CALL FUN_004fd5e0                   ; 004fef3a
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004fef3f
    PUSH 0x8                            ; 004fef42
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004fef44
    PUSH EBX                            ; 004fef48
    MOV dword ptr [EDX + 0x1c],EAX      ; 004fef49
    CALL FUN_004fd5e0                   ; 004fef4c
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004fef51
    PUSH 0x4                            ; 004fef54
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004fef56
    PUSH EBX                            ; 004fef5a
    MOV dword ptr [EDX + 0x20],EAX      ; 004fef5b
    CALL FUN_004fd5e0                   ; 004fef5e
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004fef63
    MOV EDX,dword ptr [ESP + 0x38]      ; 004fef66
    PUSH EBX                            ; 004fef6a
    MOV dword ptr [EDX + 0x24],EAX      ; 004fef6b
    CALL FUN_004fd4f0                   ; 004fef6e
        ;   XREF to: 004fd4f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd4f0()
    ADD ESP,0x4                         ; 004fef73
    MOV EDX,dword ptr [ESP + 0x38]      ; 004fef76
    ADD EBP,ESI                         ; 004fef7a
    MOV dword ptr [EDX + 0x28],EAX      ; 004fef7c
    TEST EAX,EAX                        ; 004fef7f
    JZ 0x004ff10a                       ; 004fef81
        ;   XREF to: 004ff10a (CONDITIONAL_JUMP)  ; LAB_004ff10a
    PUSH 0x2                            ; 004fef87
    PUSH EBX                            ; 004fef89
    CALL FUN_004fd5e0                   ; 004fef8a
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004fef8f
    MOV EDX,dword ptr [ESP + 0x38]      ; 004fef92
    PUSH EBX                            ; 004fef96
    MOV dword ptr [EDX + 0x2c],EAX      ; 004fef97
    CALL FUN_004fd4f0                   ; 004fef9a
        ;   XREF to: 004fd4f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd4f0()
    ADD ESP,0x4                         ; 004fef9f
    MOV EDI,dword ptr [ESP + 0xc]       ; 004fefa2
    MOV EDX,dword ptr [ESP + 0x38]      ; 004fefa6
    ADD EDI,EBP                         ; 004fefaa
    MOV dword ptr [EDX + 0x30],EAX      ; 004fefac
    MOV ESI,EDI                         ; 004fefaf
    ADD EDI,0x8                         ; 004fefb1
    PUSH 0x5                            ; 004fefb4
        ;   Label: LAB_004fefb4
    PUSH EBX                            ; 004fefb6
    ADD ESI,0x4                         ; 004fefb7
    CALL FUN_004fd5e0                   ; 004fefba
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004fefbf
    MOV dword ptr [ESI + 0x30],EAX      ; 004fefc2
    CMP ESI,EDI                         ; 004fefc5
    JNZ 0x004fefb4                      ; 004fefc7
        ;   XREF to: 004fefb4 (CONDITIONAL_JUMP)  ; LAB_004fefb4
    IMUL EBP,dword ptr [ESP + 0x28],0xa0 ; 004fefc9
    MOV EDX,dword ptr [ESP + 0x68]      ; 004fefd1
    XOR ESI,EDI                         ; 004fefd5
    ADD EBP,EDX                         ; 004fefd7
    PUSH 0x3                            ; 004fefd9
        ;   Label: LAB_004fefd9
    PUSH EBX                            ; 004fefdb
    CALL FUN_004fd5e0                   ; 004fefdc
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004fefe1
    MOV EDX,dword ptr [ESP + 0x44]      ; 004fefe4
    ADD EDX,EBP                         ; 004fefe8
    LEA EDI,[EDX + ESI*0x1]             ; 004fefea
    ADD ESI,0x4                         ; 004fefed
    MOV dword ptr [EDI + 0x40],EAX      ; 004feff0
    CMP ESI,0xc                         ; 004feff3
    JNZ 0x004fefd9                      ; 004feff6
        ;   XREF to: 004fefd9 (CONDITIONAL_JUMP)  ; LAB_004fefd9
    MOV ECX,dword ptr [EDX + 0x2c]      ; 004feff8
    TEST ECX,ECX                        ; 004feffb
    JNZ 0x004ff0e3                      ; 004feffd
        ;   XREF to: 004ff0e3 (CONDITIONAL_JUMP)  ; LAB_004ff0e3
    PUSH 0x1d94b98                      ; 004ff003 | DAT_01d94b98
    MOV EBP,0x5ca0cf                    ; 004ff008 | = "..\\sound\\mp3.cpp"
    MOV EAX,0x6d5                       ; 004ff00d
    PUSH 0x5ca0e0                       ; 004ff012 | = "Side info bad: block_type == 0 in spl..."
    MOV dword ptr [0x01d71de0],EBP      ; 004ff017 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004ff01d | DAT_01d71de4
    CALL FUN_004e4330                   ; 004ff022
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 004ff027
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004ff02a
        ;   Label: LAB_004ff02a
    MOV EDX,0x14                        ; 004ff02e
    MOV ECX,dword ptr [EAX + 0x4c]      ; 004ff033
    MOV EAX,EDX                         ; 004ff036
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004ff038
    SUB EAX,ECX                         ; 004ff03c
    MOV dword ptr [EDX + 0x50],EAX      ; 004ff03e
    PUSH EBX                            ; 004ff041
        ;   Label: LAB_004ff041
    CALL FUN_004fd4f0                   ; 004ff042
        ;   XREF to: 004fd4f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd4f0()
    ADD ESP,0x4                         ; 004ff047
    MOV EDX,dword ptr [ESP + 0x30]      ; 004ff04a
    PUSH EBX                            ; 004ff04e
    MOV dword ptr [EDX + 0x54],EAX      ; 004ff04f
    CALL FUN_004fd4f0                   ; 004ff052
        ;   XREF to: 004fd4f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd4f0()
    ADD ESP,0x4                         ; 004ff057
    MOV EDX,dword ptr [ESP + 0x30]      ; 004ff05a
    PUSH EBX                            ; 004ff05e
    MOV dword ptr [EDX + 0x58],EAX      ; 004ff05f
    CALL FUN_004fd4f0                   ; 004ff062
        ;   XREF to: 004fd4f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd4f0()
    ADD ESP,0x4                         ; 004ff067
    MOV EDX,dword ptr [ESP + 0x30]      ; 004ff06a
    MOV EBP,dword ptr [ESP + 0x38]      ; 004ff06e
    MOV ECX,dword ptr [ESP + 0x30]      ; 004ff072
    MOV ESI,dword ptr [ESP + 0x28]      ; 004ff076
    MOV EDI,dword ptr [ESP + 0x10]      ; 004ff07a
    ADD EBP,0xa0                        ; 004ff07e
    ADD ECX,0xa0                        ; 004ff084
    INC ESI                             ; 004ff08a
    MOV dword ptr [EDX + 0x5c],EAX      ; 004ff08b
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ff08e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004ff092
    MOV dword ptr [ESP + 0x38],EBP      ; 004ff096
    MOV dword ptr [ESP + 0x30],ECX      ; 004ff09a
    MOV dword ptr [ESP + 0x28],ESI      ; 004ff09e
    ADD EAX,0xa0                        ; 004ff0a2
    ADD EDX,0xa0                        ; 004ff0a7
    MOV dword ptr [ESP + 0x18],EAX      ; 004ff0ad
    MOV dword ptr [ESP + 0x1c],EDX      ; 004ff0b1
    CMP ESI,EDI                         ; 004ff0b5
    JL 0x004fef19                       ; 004ff0b7
        ;   XREF to: 004fef19 (CONDITIONAL_JUMP)  ; LAB_004fef19
    MOV EBP,dword ptr [ESP + 0x4]       ; 004ff0bd
        ;   Label: LAB_004ff0bd
    ADD EBP,0x48                        ; 004ff0c1
    MOV dword ptr [ESP + 0x4],EBP       ; 004ff0c4
    CMP EBP,0x90                        ; 004ff0c8
    JNZ 0x004feee1                      ; 004ff0ce
        ;   XREF to: 004feee1 (CONDITIONAL_JUMP)  ; LAB_004feee1
    ADD ESP,0x4c                        ; 004ff0d4
        ;   Label: LAB_004ff0d4
    POP EBP                             ; 004ff0d7
    POP EDI                             ; 004ff0d8
    POP ESI                             ; 004ff0d9
    POP EBX                             ; 004ff0da
    RET                                 ; 004ff0db
    PUSH 0x3                            ; 004ff0dc
        ;   Label: LAB_004ff0dc
    JMP 0x004fee81                      ; 004ff0de
        ;   XREF to: 004fee81 (UNCONDITIONAL_JUMP)  ; LAB_004fee81
    CMP ECX,0x2                         ; 004ff0e3
        ;   Label: LAB_004ff0e3
    JNZ 0x004ff0fa                      ; 004ff0e6
        ;   XREF to: 004ff0fa (CONDITIONAL_JUMP)  ; LAB_004ff0fa
    CMP dword ptr [EDX + 0x30],0x0      ; 004ff0e8
    JNZ 0x004ff0fa                      ; 004ff0ec
        ;   XREF to: 004ff0fa (CONDITIONAL_JUMP)  ; LAB_004ff0fa
    MOV dword ptr [EDX + 0x4c],0x8      ; 004ff0ee
    JMP 0x004ff02a                      ; 004ff0f5
        ;   XREF to: 004ff02a (UNCONDITIONAL_JUMP)  ; LAB_004ff02a
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ff0fa
        ;   Label: LAB_004ff0fa
    MOV dword ptr [EAX + 0x4c],0x7      ; 004ff0fe
    JMP 0x004ff02a                      ; 004ff105
        ;   XREF to: 004ff02a (UNCONDITIONAL_JUMP)  ; LAB_004ff02a
    XOR ESI,ESI                         ; 004ff10a
        ;   Label: LAB_004ff10a
    PUSH 0x5                            ; 004ff10c
        ;   Label: LAB_004ff10c
    PUSH EBX                            ; 004ff10e
    CALL FUN_004fd5e0                   ; 004ff10f
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004ff114
    MOV EDI,dword ptr [ESP + 0x40]      ; 004ff117
    ADD EDI,EBP                         ; 004ff11b
    LEA EDX,[EDI + ESI*0x1]             ; 004ff11d
    ADD ESI,0x4                         ; 004ff120
    MOV dword ptr [EDX + 0x34],EAX      ; 004ff123
    CMP ESI,0xc                         ; 004ff126
    JNZ 0x004ff10c                      ; 004ff129
        ;   XREF to: 004ff10c (CONDITIONAL_JUMP)  ; LAB_004ff10c
    PUSH 0x4                            ; 004ff12b
    PUSH EBX                            ; 004ff12d
    CALL FUN_004fd5e0                   ; 004ff12e
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004ff133
    PUSH 0x3                            ; 004ff136
    PUSH EBX                            ; 004ff138
    MOV dword ptr [EDI + 0x4c],EAX      ; 004ff139
    CALL FUN_004fd5e0                   ; 004ff13c
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    MOV dword ptr [EDI + 0x2c],0x0      ; 004ff141
    ADD ESP,0x8                         ; 004ff148
    MOV dword ptr [EDI + 0x50],EAX      ; 004ff14b
    JMP 0x004ff041                      ; 004ff14e
        ;   XREF to: 004ff041 (UNCONDITIONAL_JUMP)  ; LAB_004ff041
    PUSH 0x8                            ; 004ff153
        ;   Label: LAB_004ff153
    PUSH EBX                            ; 004ff155
    CALL FUN_004fd5e0                   ; 004ff156
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004ff15b
    MOV EDX,dword ptr [ESP + 0x68]      ; 004ff15e
    MOV ECX,dword ptr [ESP + 0x10]      ; 004ff162
    MOV dword ptr [EDX],EAX             ; 004ff166
    CMP ECX,0x1                         ; 004ff168
    JNZ 0x004ff2d7                      ; 004ff16b
        ;   XREF to: 004ff2d7 (CONDITIONAL_JUMP)  ; LAB_004ff2d7
    PUSH ECX                            ; 004ff171
    PUSH EBX                            ; 004ff172
        ;   Label: LAB_004ff172
    CALL FUN_004fd5e0                   ; 004ff173
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004ff178
    MOV EDX,dword ptr [ESP + 0x68]      ; 004ff17b
    MOV dword ptr [EDX + 0x4],EAX       ; 004ff17f
    XOR ESI,ESI                         ; 004ff182
    MOV EDI,dword ptr [ESP + 0x10]      ; 004ff184
    MOV dword ptr [ESP + 0x2c],ESI      ; 004ff188
    TEST EDI,EDI                        ; 004ff18c
    JLE 0x004ff0d4                      ; 004ff18e
        ;   XREF to: 004ff0d4 (CONDITIONAL_JUMP)  ; LAB_004ff0d4
    MOV EAX,dword ptr [ESP + 0x68]      ; 004ff194
    MOV dword ptr [ESP + 0x8],ESI       ; 004ff198
    MOV dword ptr [ESP + 0x48],ESI      ; 004ff19c
    MOV dword ptr [ESP + 0x3c],ESI      ; 004ff1a0
    MOV dword ptr [ESP + 0x34],EAX      ; 004ff1a4
    MOV dword ptr [ESP + 0x14],EAX      ; 004ff1a8
    MOV dword ptr [ESP + 0x20],EAX      ; 004ff1ac
    MOV dword ptr [ESP + 0x24],EAX      ; 004ff1b0
    PUSH 0xc                            ; 004ff1b4
        ;   Label: LAB_004ff1b4
    PUSH EBX                            ; 004ff1b6
    CALL FUN_004fd5e0                   ; 004ff1b7
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004ff1bc
    IMUL EBP,dword ptr [ESP + 0x2c],0xa0 ; 004ff1bf
    PUSH 0x9                            ; 004ff1c7
    MOV EDX,dword ptr [ESP + 0x38]      ; 004ff1c9
    PUSH EBX                            ; 004ff1cd
    MOV ESI,dword ptr [ESP + 0x70]      ; 004ff1ce
    MOV dword ptr [EDX + 0x18],EAX      ; 004ff1d2
    CALL FUN_004fd5e0                   ; 004ff1d5
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004ff1da
    PUSH 0x8                            ; 004ff1dd
    MOV EDX,dword ptr [ESP + 0x38]      ; 004ff1df
    PUSH EBX                            ; 004ff1e3
    MOV dword ptr [EDX + 0x1c],EAX      ; 004ff1e4
    CALL FUN_004fd5e0                   ; 004ff1e7
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004ff1ec
    PUSH 0x9                            ; 004ff1ef
    MOV EDX,dword ptr [ESP + 0x38]      ; 004ff1f1
    PUSH EBX                            ; 004ff1f5
    MOV dword ptr [EDX + 0x20],EAX      ; 004ff1f6
    CALL FUN_004fd5e0                   ; 004ff1f9
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004ff1fe
    MOV EDX,dword ptr [ESP + 0x34]      ; 004ff201
    PUSH EBX                            ; 004ff205
    MOV dword ptr [EDX + 0x24],EAX      ; 004ff206
    CALL FUN_004fd4f0                   ; 004ff209
        ;   XREF to: 004fd4f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd4f0()
    ADD ESP,0x4                         ; 004ff20e
    MOV EDX,dword ptr [ESP + 0x34]      ; 004ff211
    ADD EBP,ESI                         ; 004ff215
    MOV dword ptr [EDX + 0x28],EAX      ; 004ff217
    TEST EAX,EAX                        ; 004ff21a
    JNZ 0x004ff2de                      ; 004ff21c
        ;   XREF to: 004ff2de (CONDITIONAL_JUMP)  ; LAB_004ff2de
    XOR ESI,ESI                         ; 004ff222
    PUSH 0x5                            ; 004ff224
        ;   Label: LAB_004ff224
    PUSH EBX                            ; 004ff226
    CALL FUN_004fd5e0                   ; 004ff227
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004ff22c
    MOV EDI,dword ptr [ESP + 0x48]      ; 004ff22f
    ADD EDI,EBP                         ; 004ff233
    LEA EDX,[EDI + ESI*0x1]             ; 004ff235
    ADD ESI,0x4                         ; 004ff238
    MOV dword ptr [EDX + 0x34],EAX      ; 004ff23b
    CMP ESI,0xc                         ; 004ff23e
    JNZ 0x004ff224                      ; 004ff241
        ;   XREF to: 004ff224 (CONDITIONAL_JUMP)  ; LAB_004ff224
    PUSH 0x4                            ; 004ff243
    PUSH EBX                            ; 004ff245
    CALL FUN_004fd5e0                   ; 004ff246
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004ff24b
    PUSH 0x3                            ; 004ff24e
    PUSH EBX                            ; 004ff250
    MOV dword ptr [EDI + 0x4c],EAX      ; 004ff251
    CALL FUN_004fd5e0                   ; 004ff254
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    MOV dword ptr [EDI + 0x2c],0x0      ; 004ff259
    ADD ESP,0x8                         ; 004ff260
    MOV dword ptr [EDI + 0x50],EAX      ; 004ff263
    PUSH EBX                            ; 004ff266
        ;   Label: LAB_004ff266
    CALL FUN_004fd4f0                   ; 004ff267
        ;   XREF to: 004fd4f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd4f0()
    ADD ESP,0x4                         ; 004ff26c
    MOV EDX,dword ptr [ESP + 0x24]      ; 004ff26f
    PUSH EBX                            ; 004ff273
    MOV dword ptr [EDX + 0x58],EAX      ; 004ff274
    CALL FUN_004fd4f0                   ; 004ff277
        ;   XREF to: 004fd4f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd4f0()
    ADD ESP,0x4                         ; 004ff27c
    MOV EDX,dword ptr [ESP + 0x24]      ; 004ff27f
    MOV EBP,dword ptr [ESP + 0x34]      ; 004ff283
    MOV ECX,dword ptr [ESP + 0x24]      ; 004ff287
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004ff28b
    MOV EDI,dword ptr [ESP + 0x10]      ; 004ff28f
    ADD EBP,0xa0                        ; 004ff293
    ADD ECX,0xa0                        ; 004ff299
    INC ESI                             ; 004ff29f
    MOV dword ptr [EDX + 0x5c],EAX      ; 004ff2a0
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ff2a3
    MOV EDX,dword ptr [ESP + 0x20]      ; 004ff2a7
    MOV dword ptr [ESP + 0x34],EBP      ; 004ff2ab
    MOV dword ptr [ESP + 0x24],ECX      ; 004ff2af
    MOV dword ptr [ESP + 0x2c],ESI      ; 004ff2b3
    ADD EAX,0xa0                        ; 004ff2b7
    ADD EDX,0xa0                        ; 004ff2bc
    MOV dword ptr [ESP + 0x14],EAX      ; 004ff2c2
    MOV dword ptr [ESP + 0x20],EDX      ; 004ff2c6
    CMP ESI,EDI                         ; 004ff2ca
    JGE 0x004ff0d4                      ; 004ff2cc
        ;   XREF to: 004ff0d4 (CONDITIONAL_JUMP)  ; LAB_004ff0d4
    JMP 0x004ff1b4                      ; 004ff2d2
        ;   XREF to: 004ff1b4 (UNCONDITIONAL_JUMP)  ; LAB_004ff1b4
    PUSH 0x2                            ; 004ff2d7
        ;   Label: LAB_004ff2d7
    JMP 0x004ff172                      ; 004ff2d9
        ;   XREF to: 004ff172 (UNCONDITIONAL_JUMP)  ; LAB_004ff172
    PUSH 0x2                            ; 004ff2de
        ;   Label: LAB_004ff2de
    PUSH EBX                            ; 004ff2e0
    CALL FUN_004fd5e0                   ; 004ff2e1
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004ff2e6
    MOV EDX,dword ptr [ESP + 0x34]      ; 004ff2e9
    PUSH EBX                            ; 004ff2ed
    MOV dword ptr [EDX + 0x2c],EAX      ; 004ff2ee
    CALL FUN_004fd4f0                   ; 004ff2f1
        ;   XREF to: 004fd4f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd4f0()
    ADD ESP,0x4                         ; 004ff2f6
    MOV EDI,dword ptr [ESP + 0x8]       ; 004ff2f9
    MOV EDX,dword ptr [ESP + 0x34]      ; 004ff2fd
    ADD EDI,EBP                         ; 004ff301
    MOV dword ptr [EDX + 0x30],EAX      ; 004ff303
    MOV ESI,EDI                         ; 004ff306
    ADD EDI,0x8                         ; 004ff308
    PUSH 0x5                            ; 004ff30b
        ;   Label: LAB_004ff30b
    PUSH EBX                            ; 004ff30d
    ADD ESI,0x4                         ; 004ff30e
    CALL FUN_004fd5e0                   ; 004ff311
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004ff316
    MOV dword ptr [ESI + 0x30],EAX      ; 004ff319
    CMP ESI,EDI                         ; 004ff31c
    JNZ 0x004ff30b                      ; 004ff31e
        ;   XREF to: 004ff30b (CONDITIONAL_JUMP)  ; LAB_004ff30b
    IMUL EBP,dword ptr [ESP + 0x2c],0xa0 ; 004ff320
    MOV EDX,dword ptr [ESP + 0x68]      ; 004ff328
    XOR ESI,EDI                         ; 004ff32c
    ADD EBP,EDX                         ; 004ff32e
    PUSH 0x3                            ; 004ff330
        ;   Label: LAB_004ff330
    PUSH EBX                            ; 004ff332
    CALL FUN_004fd5e0                   ; 004ff333
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004ff338
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004ff33b
    ADD EDX,EBP                         ; 004ff33f
    LEA EDI,[EDX + ESI*0x1]             ; 004ff341
    ADD ESI,0x4                         ; 004ff344
    MOV dword ptr [EDI + 0x40],EAX      ; 004ff347
    CMP ESI,0xc                         ; 004ff34a
    JNZ 0x004ff330                      ; 004ff34d
        ;   XREF to: 004ff330 (CONDITIONAL_JUMP)  ; LAB_004ff330
    MOV ECX,dword ptr [EDX + 0x2c]      ; 004ff34f
    TEST ECX,ECX                        ; 004ff352
    JNZ 0x004ff399                      ; 004ff354
        ;   XREF to: 004ff399 (CONDITIONAL_JUMP)  ; LAB_004ff399
    PUSH 0x1d94b98                      ; 004ff356 | DAT_01d94b98
    MOV EBP,0x5ca119                    ; 004ff35b | = "..\\sound\\mp3.cpp"
    MOV EAX,0x704                       ; 004ff360
    PUSH 0x5ca12a                       ; 004ff365 | = "Side info bad: block_type == 0 in spl..."
    MOV dword ptr [0x01d71de0],EBP      ; 004ff36a | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004ff370 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004ff375
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 004ff37a
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ff37d
        ;   Label: LAB_004ff37d
    MOV EDX,0x14                        ; 004ff381
    MOV ECX,dword ptr [EAX + 0x4c]      ; 004ff386
    MOV EAX,EDX                         ; 004ff389
    MOV EDX,dword ptr [ESP + 0x20]      ; 004ff38b
    SUB EAX,ECX                         ; 004ff38f
    MOV dword ptr [EDX + 0x50],EAX      ; 004ff391
    JMP 0x004ff266                      ; 004ff394
        ;   XREF to: 004ff266 (UNCONDITIONAL_JUMP)  ; LAB_004ff266
    CMP ECX,0x2                         ; 004ff399
        ;   Label: LAB_004ff399
    JNZ 0x004ff3ad                      ; 004ff39c
        ;   XREF to: 004ff3ad (CONDITIONAL_JUMP)  ; LAB_004ff3ad
    CMP dword ptr [EDX + 0x30],0x0      ; 004ff39e
    JNZ 0x004ff3ad                      ; 004ff3a2
        ;   XREF to: 004ff3ad (CONDITIONAL_JUMP)  ; LAB_004ff3ad
    MOV dword ptr [EDX + 0x4c],0x8      ; 004ff3a4
    JMP 0x004ff37d                      ; 004ff3ab
        ;   XREF to: 004ff37d (UNCONDITIONAL_JUMP)  ; LAB_004ff37d
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ff3ad
        ;   Label: LAB_004ff3ad
    MOV dword ptr [EAX + 0x4c],0x7      ; 004ff3b1
    JMP 0x004ff37d                      ; 004ff3b8
        ;   XREF to: 004ff37d (UNCONDITIONAL_JUMP)  ; LAB_004ff37d

