; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f0a50(int param_1)
;
; Local Variables:
; undefined        Stack[-0x2e8]:1  local_2e8
; undefined        Stack[-0x2b8]:1  local_2b8
; undefined        Stack[-0x288]:1  local_288
; undefined        Stack[-0x258]:1  local_258
; undefined        Stack[-0x228]:1  local_228
; undefined        Stack[-0x1f8]:1  local_1f8
; undefined        Stack[-0x1c8]:1  local_1c8
; undefined        Stack[-0x198]:1  local_198
; undefined        Stack[-0x168]:1  local_168
; undefined        Stack[-0x138]:1  local_138
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x11c]:4  local_11c
; undefined4       Stack[-0x10c]:4  local_10c
; undefined        Stack[-0x108]:1  local_108
; undefined        Stack[-0xd8]:1  local_d8
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004f08a0 at 004f09b4
;
; Referenced Globals:
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   FUN_00547890
;   FUN_005916b0
;   FUN_00591ad0
;   FUN_00591c10
;   FUN_00591de0
;   FUN_005934e0
;   FUN_005935a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0a50
        ;   Label: FUN_004f0a50
    PUSH ESI                            ; 004f0a51
    PUSH EDI                            ; 004f0a52
    PUSH EBP                            ; 004f0a53
    SUB ESP,0x2d8                       ; 004f0a54
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 004f0a5a
    ADD EAX,0x2b4                       ; 004f0a61
    PUSH EAX                            ; 004f0a66
    CALL FUN_00547890                   ; 004f0a67
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 004f0a6c
    MOV EAX,dword ptr [EAX + 0x1d1f8]   ; 004f0a6f
    XOR EDX,EDX                         ; 004f0a75
    MOV ECX,dword ptr [ESP + 0x2ec]     ; 004f0a77
    MOV dword ptr [ESP + 0x2d0],EAX     ; 004f0a7e
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 004f0a85
    MOV dword ptr [ESP + 0x2d4],ECX     ; 004f0a8c
    MOV EBP,ECX                         ; 004f0a93
    ADD EAX,0x30c                       ; 004f0a95
    MOV EBX,dword ptr [0x01cedef4]      ; 004f0a9a | DAT_01cedef4
        ;   Label: LAB_004f0a9a
    MOV ECX,dword ptr [ESP + 0x2d0]     ; 004f0aa0
    SHL EBX,0x2                         ; 004f0aa7
    CMP EDX,ECX                         ; 004f0aaa
    JL 0x004f0b56                       ; 004f0aac
        ;   XREF to: 004f0b56 (CONDITIONAL_JUMP)  ; LAB_004f0b56
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 004f0ab2
    MOV EDX,dword ptr [EBX + 0x1cedee4] ; 004f0ab9
    ADD EAX,0x958                       ; 004f0abf
    ADD EDX,0x958                       ; 004f0ac4
    CMP EAX,EDX                         ; 004f0aca
    JZ 0x004f0ade                       ; 004f0acc
        ;   XREF to: 004f0ade (CONDITIONAL_JUMP)  ; LAB_004f0ade
    MOV ECX,dword ptr [EDX]             ; 004f0ace
    MOV dword ptr [EAX],ECX             ; 004f0ad0
    MOV ECX,dword ptr [EDX + 0x4]       ; 004f0ad2
    MOV dword ptr [EAX + 0x4],ECX       ; 004f0ad5
    MOV ECX,dword ptr [EDX + 0x8]       ; 004f0ad8
    MOV dword ptr [EAX + 0x8],ECX       ; 004f0adb
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 004f0ade
        ;   Label: LAB_004f0ade
    MOV dword ptr [EAX + 0x24e4],0xffffffff ; 004f0ae5
    MOV EAX,[0x01cedef4]                ; 004f0aef | DAT_01cedef4
    MOV ESI,dword ptr [EAX*0x4 + 0x1cedee4] ; 004f0af4
    MOV ESI,dword ptr [ESI + 0x2ea0]    ; 004f0afb
    MOV EDX,dword ptr [ESI + 0x104]     ; 004f0b01
    MOV EDI,dword ptr [ESP + 0x2ec]     ; 004f0b07
    LEA ECX,[EDX*0x4 + 0x0]             ; 004f0b0e
    MOV EDI,dword ptr [EDI + 0x10ccc]   ; 004f0b15
    SUB ECX,EDX                         ; 004f0b1b
    MOV ESI,dword ptr [ESI + 0x10c]     ; 004f0b1d
    SHL ECX,0x2                         ; 004f0b23
    PUSH EDI                            ; 004f0b26
    MOV EAX,ECX                         ; 004f0b27
    SHR ECX,0x2                         ; 004f0b29
    MOVSD.REP ES:EDI,ESI                ; 004f0b2c
    MOV CL,AL                           ; 004f0b2e
    AND CL,0x3                          ; 004f0b30
    MOVSB.REP ES:EDI,ESI                ; 004f0b33
    POP EDI                             ; 004f0b35
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 004f0b36
    MOV EBX,dword ptr [EAX + 0x4b6f4]   ; 004f0b3d
    TEST EBX,EBX                        ; 004f0b43
    JNZ 0x004f0bd9                      ; 004f0b45
        ;   XREF to: 004f0bd9 (CONDITIONAL_JUMP)  ; LAB_004f0bd9
    ADD ESP,0x2d8                       ; 004f0b4b
        ;   Label: LAB_004f0b4b
    POP EBP                             ; 004f0b51
    POP EDI                             ; 004f0b52
    POP ESI                             ; 004f0b53
    POP EBX                             ; 004f0b54
    RET                                 ; 004f0b55
    MOV ESI,EDX                         ; 004f0b56
        ;   Label: LAB_004f0b56
    MOV ECX,dword ptr [EBX + 0x1cedee4] ; 004f0b58
    SHL ESI,0x4                         ; 004f0b5e
    LEA EDI,[EBP + 0x964]               ; 004f0b61
    LEA ESI,[ECX + ESI*0x1 + 0x964]     ; 004f0b67
    MOVSD ES:EDI,ESI                    ; 004f0b6e
    MOVSD ES:EDI,ESI                    ; 004f0b6f
    MOVSD ES:EDI,ESI                    ; 004f0b70
    MOVSD ES:EDI,ESI                    ; 004f0b71
    IMUL ESI,EDX,0x30                   ; 004f0b72
    MOV ECX,dword ptr [EBX + 0x1cedee4] ; 004f0b75
    MOV EDI,dword ptr [ESP + 0x2d4]     ; 004f0b7b
    ADD ESI,ECX                         ; 004f0b82
    LEA EDI,[EDI + 0x1134]              ; 004f0b84
    MOV ECX,0xc                         ; 004f0b8a
    LEA ESI,[ESI + 0x1134]              ; 004f0b8f
    MOVSD.REP ES:EDI,ESI                ; 004f0b95
    MOV ECX,dword ptr [EBX + 0x1cedee4] ; 004f0b97
    IMUL EBX,EDX,0xc                    ; 004f0b9d
    ADD ECX,0x30c                       ; 004f0ba0
    ADD ECX,EBX                         ; 004f0ba6
    CMP EAX,ECX                         ; 004f0ba8
    JZ 0x004f0bbc                       ; 004f0baa
        ;   XREF to: 004f0bbc (CONDITIONAL_JUMP)  ; LAB_004f0bbc
    MOV EBX,dword ptr [ECX]             ; 004f0bac
    MOV dword ptr [EAX],EBX             ; 004f0bae
    MOV EBX,dword ptr [ECX + 0x4]       ; 004f0bb0
    MOV dword ptr [EAX + 0x4],EBX       ; 004f0bb3
    MOV EBX,dword ptr [ECX + 0x8]       ; 004f0bb6
    MOV dword ptr [EAX + 0x8],EBX       ; 004f0bb9
    MOV ESI,dword ptr [ESP + 0x2d4]     ; 004f0bbc
        ;   Label: LAB_004f0bbc
    ADD EBP,0x10                        ; 004f0bc3
    INC EDX                             ; 004f0bc6
    ADD ESI,0x30                        ; 004f0bc7
    ADD EAX,0xc                         ; 004f0bca
    MOV dword ptr [ESP + 0x2d4],ESI     ; 004f0bcd
    JMP 0x004f0a9a                      ; 004f0bd4
        ;   XREF to: 004f0a9a (UNCONDITIONAL_JUMP)  ; LAB_004f0a9a
    LEA EDX,[EBX + 0x30]                ; 004f0bd9
        ;   Label: LAB_004f0bd9
    PUSH EDX                            ; 004f0bdc
    LEA EAX,[EBX + 0x20]                ; 004f0bdd
    PUSH EAX                            ; 004f0be0
    LEA EAX,[ESP + 0x188]               ; 004f0be1
    PUSH EAX                            ; 004f0be8
    CALL FUN_00591ad0                   ; 004f0be9
        ;   XREF to: 00591ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00591ad0()
    ADD ESP,0xc                         ; 004f0bee
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 004f0bf1
    MOV EAX,dword ptr [EAX + 0x4b6f4]   ; 004f0bf8
    LEA EDX,[EAX + 0x30]                ; 004f0bfe
    PUSH EDX                            ; 004f0c01
    ADD EAX,0x20                        ; 004f0c02
    PUSH EAX                            ; 004f0c05
    LEA EAX,[ESP + 0x1e8]               ; 004f0c06
    PUSH EAX                            ; 004f0c0d
    CALL FUN_00591c10                   ; 004f0c0e
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined FUN_00591c10()
    MOV EAX,[0x01cedef4]                ; 004f0c13 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004f0c18
    ADD ESP,0xc                         ; 004f0c1f
    LEA EDX,[EAX + 0x30]                ; 004f0c22
    PUSH EDX                            ; 004f0c25
    ADD EAX,0x20                        ; 004f0c26
    PUSH EAX                            ; 004f0c29
    LEA EAX,[ESP + 0xf8]                ; 004f0c2a
    PUSH EAX                            ; 004f0c31
    CALL FUN_00591c10                   ; 004f0c32
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined FUN_00591c10()
    ADD ESP,0xc                         ; 004f0c37
    LEA EAX,[ESP + 0x1e0]               ; 004f0c3a
    PUSH EAX                            ; 004f0c41
    LEA ESI,[ESP + 0x154]               ; 004f0c42
    PUSH 0x0                            ; 004f0c49
    LEA EDI,[ESP + 0x218]               ; 004f0c4b
    CALL FUN_005935a0                   ; 004f0c52
        ;   XREF to: 005935a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005935a0()
    ADD ESP,0x4                         ; 004f0c57
    LEA EAX,[ESP + 0x214]               ; 004f0c5a
    MOV ECX,0xc                         ; 004f0c61
    PUSH EAX                            ; 004f0c66
    LEA EAX,[ESP + 0x188]               ; 004f0c67
    LEA ESI,[ESP + 0x158]               ; 004f0c6e
    PUSH EAX                            ; 004f0c75
    LEA EAX,[ESP + 0xfc]                ; 004f0c76
    MOVSD.REP ES:EDI,ESI                ; 004f0c7d
    PUSH EAX                            ; 004f0c7f
    LEA ESI,[ESP + 0x250]               ; 004f0c80
    LEA EDI,[ESP + 0x130]               ; 004f0c87
    CALL FUN_005916b0                   ; 004f0c8e
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005916b0()
    MOV ECX,0xc                         ; 004f0c93
    LEA ESI,[ESP + 0x250]               ; 004f0c98
    ADD ESP,0x8                         ; 004f0c9f
    LEA EAX,[ESP + 0x128]               ; 004f0ca2
    MOVSD.REP ES:EDI,ESI                ; 004f0ca9
    PUSH EAX                            ; 004f0cab
    LEA ESI,[ESP + 0x27c]               ; 004f0cac
    LEA EDI,[ESP + 0xc]                 ; 004f0cb3
    CALL FUN_005916b0                   ; 004f0cb7
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005916b0()
    MOV ECX,0xc                         ; 004f0cbc
    LEA ESI,[ESP + 0x27c]               ; 004f0cc1
    ADD ESP,0x8                         ; 004f0cc8
    LEA EAX,[ESP + 0x4]                 ; 004f0ccb
    MOVSD.REP ES:EDI,ESI                ; 004f0ccf
    PUSH EAX                            ; 004f0cd1
    LEA ESI,[ESP + 0x68]                ; 004f0cd2
    LEA EDI,[ESP + 0x1b8]               ; 004f0cd6
    CALL FUN_005916b0                   ; 004f0cdd
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005916b0()
    MOV ECX,0xc                         ; 004f0ce2
    ADD ESP,0x8                         ; 004f0ce7
    LEA EAX,[ESP + 0x1b0]               ; 004f0cea
    LEA ESI,[ESP + 0x60]                ; 004f0cf1
    PUSH EAX                            ; 004f0cf5
    MOVSD.REP ES:EDI,ESI                ; 004f0cf6
    PUSH 0x0                            ; 004f0cf8
    LEA ESI,[ESP + 0x98]                ; 004f0cfa
    LEA EDI,[ESP + 0x38]                ; 004f0d01
    CALL FUN_005934e0                   ; 004f0d05
        ;   XREF to: 005934e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005934e0()
    MOV ECX,0xc                         ; 004f0d0a
    LEA ESI,[ESP + 0x98]                ; 004f0d0f
    ADD ESP,0x4                         ; 004f0d16
    LEA EAX,[ESP + 0x34]                ; 004f0d19
    MOVSD.REP ES:EDI,ESI                ; 004f0d1d
    PUSH EAX                            ; 004f0d1f
    LEA ESI,[ESP + 0xc8]                ; 004f0d20
    LEA EDI,[ESP + 0x1b8]               ; 004f0d27
    CALL FUN_005916b0                   ; 004f0d2e
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005916b0()
    MOV ECX,0xc                         ; 004f0d33
    LEA ESI,[ESP + 0xc8]                ; 004f0d38
    ADD ESP,0x8                         ; 004f0d3f
    MOVSD.REP ES:EDI,ESI                ; 004f0d42
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 004f0d44
    MOV dword ptr [ESP + 0x2ac],EAX     ; 004f0d4b
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 004f0d52
    LEA EDI,[ESP + 0x2c4]               ; 004f0d59
    MOV dword ptr [ESP + 0x2b0],EAX     ; 004f0d60
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 004f0d67
    LEA ESI,[ESP + 0x2ac]               ; 004f0d6e
    MOV dword ptr [ESP + 0x2b4],EAX     ; 004f0d75
    MOVSD ES:EDI,ESI                    ; 004f0d7c
    MOVSD ES:EDI,ESI                    ; 004f0d7d
    MOVSD ES:EDI,ESI                    ; 004f0d7e
    MOV EDX,dword ptr [ESP + 0x2ec]     ; 004f0d7f
    MOV EAX,dword ptr [ESP + 0x2c4]     ; 004f0d86
    MOV dword ptr [EDX + 0x20],EAX      ; 004f0d8d
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 004f0d90
    MOV dword ptr [EDX + 0x24],EAX      ; 004f0d97
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 004f0d9a
    MOV dword ptr [EDX + 0x28],EAX      ; 004f0da1
    LEA EAX,[ESP + 0x1b0]               ; 004f0da4
    PUSH EAX                            ; 004f0dab
    LEA ESI,[ESP + 0x2bc]               ; 004f0dac
    LEA EDI,[ESP + 0x2a4]               ; 004f0db3
    CALL FUN_00591de0                   ; 004f0dba
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00591de0()
    ADD ESP,0x4                         ; 004f0dbf
    LEA ESI,[ESP + 0x2b8]               ; 004f0dc2
    MOV EDX,dword ptr [ESP + 0x2ec]     ; 004f0dc9
    LEA EAX,[ESP + 0x2a0]               ; 004f0dd0
    ADD EDX,0x30                        ; 004f0dd7
    MOVSD ES:EDI,ESI                    ; 004f0dda
    MOVSD ES:EDI,ESI                    ; 004f0ddb
    MOVSD ES:EDI,ESI                    ; 004f0ddc
    CMP EDX,EAX                         ; 004f0ddd
    JZ 0x004f0b4b                       ; 004f0ddf
        ;   XREF to: 004f0b4b (CONDITIONAL_JUMP)  ; LAB_004f0b4b
    MOV EAX,dword ptr [ESP + 0x2a0]     ; 004f0de5
    MOV dword ptr [EDX],EAX             ; 004f0dec
    MOV EAX,dword ptr [ESP + 0x2a4]     ; 004f0dee
    MOV dword ptr [EDX + 0x4],EAX       ; 004f0df5
    MOV EAX,dword ptr [ESP + 0x2a8]     ; 004f0df8
    MOV dword ptr [EDX + 0x8],EAX       ; 004f0dff
    ADD ESP,0x2d8                       ; 004f0e02
    POP EBP                             ; 004f0e08
    POP EDI                             ; 004f0e09
    POP ESI                             ; 004f0e0a
    POP EBX                             ; 004f0e0b
    RET                                 ; 004f0e0c

