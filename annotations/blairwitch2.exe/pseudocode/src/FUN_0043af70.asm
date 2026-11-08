; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043af70(int param_1)
;
; Local Variables:
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
;   FUN_00441f40 at 00441f45
;
; Called Functions:
;   FUN_0043af40
;   FUN_005b77c0
;   FUN_005b849c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043af70
        ;   Label: FUN_0043af70
    PUSH ESI                            ; 0043af71
    PUSH EDI                            ; 0043af72
    PUSH EBP                            ; 0043af73
    SUB ESP,0x3c                        ; 0043af74
    PUSH 0x1000                         ; 0043af77
    PUSH 0x0                            ; 0043af7c
    MOV EDX,dword ptr [ESP + 0x58]      ; 0043af7e
    PUSH EDX                            ; 0043af82
    XOR EBP,EBP                         ; 0043af83
    CALL FUN_005b77c0                   ; 0043af85
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 0043af8a
    MOV ECX,0x1000                      ; 0043af8d
    MOV EAX,dword ptr [ESP + 0x50]      ; 0043af92
    MOV dword ptr [ESP + 0x10],ECX      ; 0043af96
    MOV dword ptr [ESP + 0x14],EAX      ; 0043af9a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043af9e
        ;   Label: LAB_0043af9e
    XOR EDI,EDI                         ; 0043afa2
    MOV dword ptr [ESP + 0x18],EAX      ; 0043afa4
    MOV EAX,EDI                         ; 0043afa8
        ;   Label: LAB_0043afa8
    SHL EAX,0x4                         ; 0043afaa
    MOV ESI,dword ptr [ESP + 0x50]      ; 0043afad
    LEA EBX,[EAX + EBP*0x1]             ; 0043afb1
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043afb4
    ADD EBX,ESI                         ; 0043afb8
    ADD EAX,EDX                         ; 0043afba
    MOV ESI,dword ptr [ESP + 0x14]      ; 0043afbc
    ADD ESI,EAX                         ; 0043afc0
    ADD EBX,0x100                       ; 0043afc2
        ;   Label: LAB_0043afc2
    CALL FUN_005b849c                   ; 0043afc8
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; undefined FUN_005b849c()
    MOV byte ptr [EBX + 0xffffff00],AL  ; 0043afcd
    CMP EBX,ESI                         ; 0043afd3
    JNZ 0x0043afc2                      ; 0043afd5
        ;   XREF to: 0043afc2 (CONDITIONAL_JUMP)  ; LAB_0043afc2
    INC EDI                             ; 0043afd7
    CMP EDI,0x10                        ; 0043afd8
    JL 0x0043afa8                       ; 0043afdb
        ;   XREF to: 0043afa8 (CONDITIONAL_JUMP)  ; LAB_0043afa8
    MOV ECX,dword ptr [ESP + 0x10]      ; 0043afdd
    INC ECX                             ; 0043afe1
    INC EBP                             ; 0043afe2
    MOV dword ptr [ESP + 0x10],ECX      ; 0043afe3
    CMP EBP,0x10                        ; 0043afe7
    JL 0x0043af9e                       ; 0043afea
        ;   XREF to: 0043af9e (CONDITIONAL_JUMP)  ; LAB_0043af9e
    XOR EBX,ESI                         ; 0043afec
    MOV ESI,0xffffffff                  ; 0043afee
    MOV dword ptr [ESP + 0x38],EBX      ; 0043aff3
    MOV dword ptr [ESP + 0x1c],ESI      ; 0043aff7
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0043affb
        ;   Label: LAB_0043affb
    MOV EBP,0xffffffff                  ; 0043afff
    AND EAX,0xf                         ; 0043b004
    XOR EDI,EDI                         ; 0043b007
    MOV dword ptr [ESP + 0x20],EAX      ; 0043b009
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043b00d
    MOV dword ptr [ESP + 0x28],EBP      ; 0043b011
    INC EAX                             ; 0043b015
    MOV dword ptr [ESP + 0x30],EDI      ; 0043b016
    AND EAX,0xf                         ; 0043b01a
    MOV dword ptr [ESP + 0x2c],EDI      ; 0043b01d
    MOV dword ptr [ESP + 0x24],EAX      ; 0043b021
    MOV EAX,dword ptr [ESP + 0x30]      ; 0043b025
        ;   Label: LAB_0043b025
    MOV ECX,dword ptr [ESP + 0x28]      ; 0043b029
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0043b02d
    MOV EDX,dword ptr [ESP + 0x30]      ; 0043b031
    MOV EDI,dword ptr [ESP + 0x50]      ; 0043b035
    MOV EBP,dword ptr [ESP + 0x20]      ; 0043b039
    XOR ESI,ESI                         ; 0043b03d
    MOV dword ptr [ESP + 0x34],EAX      ; 0043b03f
    AND ECX,0xf                         ; 0043b043
    INC EBX                             ; 0043b046
    MOV EAX,dword ptr [ESP + 0x24]      ; 0043b047
    ADD EBP,EDX                         ; 0043b04b
    ADD EAX,EDX                         ; 0043b04d
    AND EBX,0xf                         ; 0043b04f
    ADD EAX,EDI                         ; 0043b052
    SHL EBX,0x4                         ; 0043b054
    MOV dword ptr [ESP + 0xc],EAX       ; 0043b057
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043b05b
    SHL ECX,0x4                         ; 0043b05f
    ADD EAX,EBX                         ; 0043b062
    ADD EBP,EDI                         ; 0043b064
    ADD EAX,EDI                         ; 0043b066
    MOV EBX,dword ptr [ESP + 0x38]      ; 0043b068
    MOV dword ptr [ESP],EAX             ; 0043b06c
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043b06f
    ADD EBX,EDX                         ; 0043b073
    ADD EAX,ECX                         ; 0043b075
    ADD EBX,EDI                         ; 0043b077
    ADD EAX,EDI                         ; 0043b079
    MOV EDI,0xffffffff                  ; 0043b07b
    MOV dword ptr [ESP + 0x4],EAX       ; 0043b080
    MOV ECX,EDI                         ; 0043b084
        ;   Label: LAB_0043b084
    AND ECX,0xf                         ; 0043b086
    MOV EAX,dword ptr [ESP + 0x50]      ; 0043b089
    SHL ECX,0x8                         ; 0043b08d
    MOV EDX,dword ptr [ESP + 0x34]      ; 0043b090
    ADD ECX,EAX                         ; 0043b094
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043b096
    ADD ECX,EDX                         ; 0043b09a
    ADD ECX,EAX                         ; 0043b09c
    XOR EAX,EAX                         ; 0043b09e
    MOV AL,byte ptr [ECX]               ; 0043b0a0
    XOR ECX,ECX                         ; 0043b0a2
    MOV CL,byte ptr [EBX]               ; 0043b0a4
    ADD ECX,EAX                         ; 0043b0a6
    INC ESI                             ; 0043b0a8
    MOV dword ptr [ESP + 0x8],ECX       ; 0043b0a9
    MOV ECX,ESI                         ; 0043b0ad
    AND ECX,0xf                         ; 0043b0af
    MOV EDX,dword ptr [ESP + 0x50]      ; 0043b0b2
    SHL ECX,0x8                         ; 0043b0b6
    MOV EAX,dword ptr [ESP + 0x34]      ; 0043b0b9
    ADD ECX,EDX                         ; 0043b0bd
    ADD ECX,EAX                         ; 0043b0bf
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043b0c1
    MOV AL,byte ptr [ECX + EAX*0x1]     ; 0043b0c5
    MOV ECX,dword ptr [ESP + 0x8]       ; 0043b0c8
    AND EAX,0xff                        ; 0043b0cc
    MOV EDX,dword ptr [ESP + 0x4]       ; 0043b0d1
    ADD ECX,EAX                         ; 0043b0d5
    XOR EAX,EAX                         ; 0043b0d7
    MOV AL,byte ptr [EDX]               ; 0043b0d9
    MOV EDX,dword ptr [ESP]             ; 0043b0db
    ADD ECX,EAX                         ; 0043b0de
    XOR EAX,EAX                         ; 0043b0e0
    MOV AL,byte ptr [EDX]               ; 0043b0e2
    ADD EAX,ECX                         ; 0043b0e4
    XOR ECX,ECX                         ; 0043b0e6
    MOV CL,byte ptr [EBP]               ; 0043b0e8
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043b0eb
    ADD ECX,EAX                         ; 0043b0ef
    XOR EAX,EAX                         ; 0043b0f1
    MOV AL,byte ptr [EDX]               ; 0043b0f3
    XOR EDX,EDX                         ; 0043b0f5
    ADD EAX,ECX                         ; 0043b0f7
    MOV ECX,0x7                         ; 0043b0f9
    DIV ECX                             ; 0043b0fe
    ADD EBP,0x100                       ; 0043b100
    ADD EBX,0x100                       ; 0043b106
    INC EDI                             ; 0043b10c
    MOV ECX,dword ptr [ESP + 0xc]       ; 0043b10d
    MOV EDX,dword ptr [ESP + 0x4]       ; 0043b111
    MOV byte ptr [EBX + 0xffffff00],AL  ; 0043b115
    MOV EAX,dword ptr [ESP]             ; 0043b11b
    ADD ECX,0x100                       ; 0043b11e
    ADD EDX,0x100                       ; 0043b124
    MOV dword ptr [ESP + 0xc],ECX       ; 0043b12a
    ADD EAX,0x100                       ; 0043b12e
    MOV dword ptr [ESP + 0x4],EDX       ; 0043b133
    MOV dword ptr [ESP],EAX             ; 0043b137
    CMP ESI,0x10                        ; 0043b13a
    JL 0x0043b084                       ; 0043b13d
        ;   XREF to: 0043b084 (CONDITIONAL_JUMP)  ; LAB_0043b084
    MOV EBX,dword ptr [ESP + 0x30]      ; 0043b143
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0043b147
    MOV ECX,dword ptr [ESP + 0x28]      ; 0043b14b
    ADD EBX,0x10                        ; 0043b14f
    INC ESI                             ; 0043b152
    INC ECX                             ; 0043b153
    MOV dword ptr [ESP + 0x30],EBX      ; 0043b154
    MOV dword ptr [ESP + 0x2c],ESI      ; 0043b158
    MOV dword ptr [ESP + 0x28],ECX      ; 0043b15c
    CMP ESI,0x10                        ; 0043b160
    JL 0x0043b025                       ; 0043b163
        ;   XREF to: 0043b025 (CONDITIONAL_JUMP)  ; LAB_0043b025
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043b169
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0043b16d
    INC EAX                             ; 0043b171
    INC EBP                             ; 0043b172
    MOV dword ptr [ESP + 0x38],EAX      ; 0043b173
    MOV dword ptr [ESP + 0x1c],EBP      ; 0043b177
    CMP EAX,0x10                        ; 0043b17b
    JL 0x0043affb                       ; 0043b17e
        ;   XREF to: 0043affb (CONDITIONAL_JUMP)  ; LAB_0043affb
    MOV ECX,dword ptr [ESP + 0x50]      ; 0043b184
    PUSH ECX                            ; 0043b188
    CALL FUN_0043af40                   ; 0043b189
        ;   XREF to: 0043af40 (UNCONDITIONAL_CALL)  ; undefined FUN_0043af40()
    ADD ESP,0x4                         ; 0043b18e
    ADD ESP,0x3c                        ; 0043b191
    POP EBP                             ; 0043b194
    POP EDI                             ; 0043b195
    POP ESI                             ; 0043b196
    POP EBX                             ; 0043b197
    RET                                 ; 0043b198

