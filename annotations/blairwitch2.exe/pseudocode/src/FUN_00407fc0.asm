; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00407fc0(uint param_1,uint param_2,int param_3,undefined4 param_4,uint param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_0070c5bc
;   undefined4 DAT_0070c5c4
;   undefined4 DAT_0070c5c8
;   undefined4 DAT_0070c5ec
;   undefined4 DAT_0070c5f4
;   undefined4 DAT_0070c5f8
;
; Called Functions:
;   FUN_00401310
;   FUN_00430650
;   FUN_00430750
;   FUN_00430850
;   FUN_00430950
;   FUN_004e8f50
;   FUN_0051c5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407fc0
        ;   Label: FUN_00407fc0
    PUSH ESI                            ; 00407fc1
    PUSH EDI                            ; 00407fc2
    PUSH EBP                            ; 00407fc3
    SUB ESP,0x30                        ; 00407fc4
    MOV EAX,dword ptr [ESP + 0x54]      ; 00407fc7
    AND EAX,dword ptr [ESP + 0x84]      ; 00407fcb
    TEST EAX,0x80000000                 ; 00407fd2
    JNZ 0x004081d1                      ; 00407fd7
        ;   XREF to: 004081d1 (CONDITIONAL_JUMP)  ; LAB_004081d1
    XOR EBX,EBX                         ; 00407fdd
        ;   Label: LAB_00407fdd
    MOV EAX,dword ptr [ESP + 0x74]      ; 00407fdf
        ;   Label: LAB_00407fdf
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00407fe3
    JLE 0x00408010                      ; 00407fe7
        ;   XREF to: 00408010 (CONDITIONAL_JUMP)  ; LAB_00408010
    MOV EAX,ESP                         ; 00407fe9
    PUSH EAX                            ; 00407feb
    LEA EAX,[ESP + 0x78]                ; 00407fec
    PUSH EAX                            ; 00407ff0
    LEA EAX,[ESP + 0x4c]                ; 00407ff1
    PUSH EAX                            ; 00407ff5
    LEA EDI,[ESP + 0x80]                ; 00407ff6
    LEA ESI,[ESP + 0xc]                 ; 00407ffd
    CALL FUN_00430650                   ; 00408001
        ;   XREF to: 00430650 (UNCONDITIONAL_CALL)  ; undefined FUN_00430650()
    MOV ECX,0xc                         ; 00408006
    ADD ESP,0xc                         ; 0040800b
    MOVSD.REP ES:EDI,ESI                ; 0040800e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00408010
        ;   Label: LAB_00408010
    MOV ESI,dword ptr [ESP + 0x74]      ; 00408014
    NEG EAX                             ; 00408018
    CMP EAX,ESI                         ; 0040801a
    JLE 0x00408045                      ; 0040801c
        ;   XREF to: 00408045 (CONDITIONAL_JUMP)  ; LAB_00408045
    MOV EAX,ESP                         ; 0040801e
    PUSH EAX                            ; 00408020
    LEA EAX,[ESP + 0x78]                ; 00408021
    PUSH EAX                            ; 00408025
    LEA EAX,[ESP + 0x4c]                ; 00408026
    PUSH EAX                            ; 0040802a
    LEA EDI,[ESP + 0x80]                ; 0040802b
    LEA ESI,[ESP + 0xc]                 ; 00408032
    CALL FUN_00430750                   ; 00408036
        ;   XREF to: 00430750 (UNCONDITIONAL_CALL)  ; undefined FUN_00430750()
    MOV ECX,0xc                         ; 0040803b
    ADD ESP,0xc                         ; 00408040
    MOVSD.REP ES:EDI,ESI                ; 00408043
    MOV EAX,dword ptr [ESP + 0x78]      ; 00408045
        ;   Label: LAB_00408045
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00408049
    JLE 0x00408076                      ; 0040804d
        ;   XREF to: 00408076 (CONDITIONAL_JUMP)  ; LAB_00408076
    MOV EAX,ESP                         ; 0040804f
    PUSH EAX                            ; 00408051
    LEA EAX,[ESP + 0x78]                ; 00408052
    PUSH EAX                            ; 00408056
    LEA EAX,[ESP + 0x4c]                ; 00408057
    PUSH EAX                            ; 0040805b
    LEA EDI,[ESP + 0x80]                ; 0040805c
    LEA ESI,[ESP + 0xc]                 ; 00408063
    CALL FUN_00430850                   ; 00408067
        ;   XREF to: 00430850 (UNCONDITIONAL_CALL)  ; undefined FUN_00430850()
    MOV ECX,0xc                         ; 0040806c
    ADD ESP,0xc                         ; 00408071
    MOVSD.REP ES:EDI,ESI                ; 00408074
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00408076
        ;   Label: LAB_00408076
    MOV EBP,dword ptr [ESP + 0x78]      ; 0040807a
    NEG EAX                             ; 0040807e
    CMP EAX,EBP                         ; 00408080
    JLE 0x004080ab                      ; 00408082
        ;   XREF to: 004080ab (CONDITIONAL_JUMP)  ; LAB_004080ab
    MOV EAX,ESP                         ; 00408084
    PUSH EAX                            ; 00408086
    LEA EAX,[ESP + 0x78]                ; 00408087
    PUSH EAX                            ; 0040808b
    LEA EAX,[ESP + 0x4c]                ; 0040808c
    PUSH EAX                            ; 00408090
    LEA EDI,[ESP + 0x80]                ; 00408091
    LEA ESI,[ESP + 0xc]                 ; 00408098
    CALL FUN_00430950                   ; 0040809c
        ;   XREF to: 00430950 (UNCONDITIONAL_CALL)  ; undefined FUN_00430950()
    MOV ECX,0xc                         ; 004080a1
    ADD ESP,0xc                         ; 004080a6
    MOVSD.REP ES:EDI,ESI                ; 004080a9
    MOV EAX,dword ptr [ESP + 0x44]      ; 004080ab
        ;   Label: LAB_004080ab
    CMP EAX,dword ptr [ESP + 0x4c]      ; 004080af
    JLE 0x004080d9                      ; 004080b3
        ;   XREF to: 004080d9 (CONDITIONAL_JUMP)  ; LAB_004080d9
    MOV EAX,ESP                         ; 004080b5
    PUSH EAX                            ; 004080b7
    LEA EAX,[ESP + 0x48]                ; 004080b8
    PUSH EAX                            ; 004080bc
    LEA EAX,[ESP + 0x7c]                ; 004080bd
    PUSH EAX                            ; 004080c1
    LEA EDI,[ESP + 0x50]                ; 004080c2
    LEA ESI,[ESP + 0xc]                 ; 004080c6
    CALL FUN_00430650                   ; 004080ca
        ;   XREF to: 00430650 (UNCONDITIONAL_CALL)  ; undefined FUN_00430650()
    MOV ECX,0xc                         ; 004080cf
    ADD ESP,0xc                         ; 004080d4
    MOVSD.REP ES:EDI,ESI                ; 004080d7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004080d9
        ;   Label: LAB_004080d9
    MOV ECX,dword ptr [ESP + 0x44]      ; 004080dd
    NEG EAX                             ; 004080e1
    CMP EAX,ECX                         ; 004080e3
    JLE 0x0040810b                      ; 004080e5
        ;   XREF to: 0040810b (CONDITIONAL_JUMP)  ; LAB_0040810b
    MOV EAX,ESP                         ; 004080e7
    PUSH EAX                            ; 004080e9
    LEA EAX,[ESP + 0x48]                ; 004080ea
    PUSH EAX                            ; 004080ee
    LEA EAX,[ESP + 0x7c]                ; 004080ef
    PUSH EAX                            ; 004080f3
    LEA EDI,[ESP + 0x50]                ; 004080f4
    LEA ESI,[ESP + 0xc]                 ; 004080f8
    CALL FUN_00430750                   ; 004080fc
        ;   XREF to: 00430750 (UNCONDITIONAL_CALL)  ; undefined FUN_00430750()
    MOV ECX,0xc                         ; 00408101
    ADD ESP,0xc                         ; 00408106
    MOVSD.REP ES:EDI,ESI                ; 00408109
    MOV EAX,dword ptr [ESP + 0x48]      ; 0040810b
        ;   Label: LAB_0040810b
    CMP EAX,dword ptr [ESP + 0x4c]      ; 0040810f
    JLE 0x00408139                      ; 00408113
        ;   XREF to: 00408139 (CONDITIONAL_JUMP)  ; LAB_00408139
    MOV EAX,ESP                         ; 00408115
    PUSH EAX                            ; 00408117
    LEA EAX,[ESP + 0x48]                ; 00408118
    PUSH EAX                            ; 0040811c
    LEA EAX,[ESP + 0x7c]                ; 0040811d
    PUSH EAX                            ; 00408121
    LEA EDI,[ESP + 0x50]                ; 00408122
    LEA ESI,[ESP + 0xc]                 ; 00408126
    CALL FUN_00430850                   ; 0040812a
        ;   XREF to: 00430850 (UNCONDITIONAL_CALL)  ; undefined FUN_00430850()
    MOV ECX,0xc                         ; 0040812f
    ADD ESP,0xc                         ; 00408134
    MOVSD.REP ES:EDI,ESI                ; 00408137
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00408139
        ;   Label: LAB_00408139
    MOV EDI,dword ptr [ESP + 0x48]      ; 0040813d
    NEG EAX                             ; 00408141
    CMP EAX,EDI                         ; 00408143
    JLE 0x0040816b                      ; 00408145
        ;   XREF to: 0040816b (CONDITIONAL_JUMP)  ; LAB_0040816b
    MOV EAX,ESP                         ; 00408147
    PUSH EAX                            ; 00408149
    LEA EAX,[ESP + 0x48]                ; 0040814a
    PUSH EAX                            ; 0040814e
    LEA EAX,[ESP + 0x7c]                ; 0040814f
    PUSH EAX                            ; 00408153
    LEA EDI,[ESP + 0x50]                ; 00408154
    LEA ESI,[ESP + 0xc]                 ; 00408158
    CALL FUN_00430950                   ; 0040815c
        ;   XREF to: 00430950 (UNCONDITIONAL_CALL)  ; undefined FUN_00430950()
    MOV ECX,0xc                         ; 00408161
    ADD ESP,0xc                         ; 00408166
    MOVSD.REP ES:EDI,ESI                ; 00408169
    INC EBX                             ; 0040816b
        ;   Label: LAB_0040816b
    CMP EBX,0x2                         ; 0040816c
    JL 0x00407fdf                       ; 0040816f
        ;   XREF to: 00407fdf (CONDITIONAL_JUMP)  ; LAB_00407fdf
    MOV EAX,dword ptr [ESP + 0x44]      ; 00408175
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00408179
    CMP EAX,EBP                         ; 0040817d
    JG 0x004081bf                       ; 0040817f
        ;   XREF to: 004081bf (CONDITIONAL_JUMP)  ; LAB_004081bf
    MOV EBX,EBP                         ; 00408181
    NEG EBX                             ; 00408183
    CMP EBX,EAX                         ; 00408185
    JG 0x004081bf                       ; 00408187
        ;   XREF to: 004081bf (CONDITIONAL_JUMP)  ; LAB_004081bf
    MOV EAX,dword ptr [ESP + 0x48]      ; 00408189
    CMP EAX,EBP                         ; 0040818d
    JG 0x004081bf                       ; 0040818f
        ;   XREF to: 004081bf (CONDITIONAL_JUMP)  ; LAB_004081bf
    CMP EBX,EAX                         ; 00408191
    JG 0x004081bf                       ; 00408193
        ;   XREF to: 004081bf (CONDITIONAL_JUMP)  ; LAB_004081bf
    MOV EAX,dword ptr [ESP + 0x74]      ; 00408195
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00408199
    CMP EAX,EBX                         ; 0040819d
    JG 0x004081bf                       ; 0040819f
        ;   XREF to: 004081bf (CONDITIONAL_JUMP)  ; LAB_004081bf
    NEG EBX                             ; 004081a1
    CMP EBX,EAX                         ; 004081a3
    JG 0x004081bf                       ; 004081a5
        ;   XREF to: 004081bf (CONDITIONAL_JUMP)  ; LAB_004081bf
    MOV EAX,dword ptr [ESP + 0x78]      ; 004081a7
    MOV EDI,dword ptr [ESP + 0x7c]      ; 004081ab
    CMP EAX,EDI                         ; 004081af
    JG 0x004081bf                       ; 004081b1
        ;   XREF to: 004081bf (CONDITIONAL_JUMP)  ; LAB_004081bf
    CMP EBX,EAX                         ; 004081b3
    JG 0x004081bf                       ; 004081b5
        ;   XREF to: 004081bf (CONDITIONAL_JUMP)  ; LAB_004081bf
    TEST EBP,EBP                        ; 004081b7
    JLE 0x004081bf                      ; 004081b9
        ;   XREF to: 004081bf (CONDITIONAL_JUMP)  ; LAB_004081bf
    TEST EDI,EDI                        ; 004081bb
    JG 0x004081da                       ; 004081bd
        ;   XREF to: 004081da (CONDITIONAL_JUMP)  ; LAB_004081da
    ADD ESP,0x30                        ; 004081bf
        ;   Label: LAB_004081bf
    POP EBP                             ; 004081c2
    POP EDI                             ; 004081c3
    POP ESI                             ; 004081c4
    POP EBX                             ; 004081c5
    LEA EAX,[EAX]                       ; 004081c6
    LEA EDX,[EDX]                       ; 004081cc
    RET                                 ; 004081d0
    TEST AL,0xff                        ; 004081d1
        ;   Label: LAB_004081d1
    JNZ 0x004081bf                      ; 004081d3
        ;   XREF to: 004081bf (CONDITIONAL_JUMP)  ; LAB_004081bf
    JMP 0x00407fdd                      ; 004081d5
        ;   XREF to: 00407fdd (UNCONDITIONAL_JUMP)  ; LAB_00407fdd
    MOV ECX,0xc                         ; 004081da
        ;   Label: LAB_004081da
    LEA ESI,[ESP + 0x44]                ; 004081df
    MOV EDI,0x70c5b4                    ; 004081e3
    MOVSD.REP ES:EDI,ESI                ; 004081e8
    MOV ECX,0xc                         ; 004081ea
    LEA ESI,[ESP + 0x74]                ; 004081ef
    MOV EDI,0x70c5e4                    ; 004081f3
    PUSH 0x4e1e                         ; 004081f8
    MOVSD.REP ES:EDI,ESI                ; 004081fd
    CALL FUN_004e8f50                   ; 004081ff
        ;   XREF to: 004e8f50 (UNCONDITIONAL_CALL)  ; undefined FUN_004e8f50()
    ADD ESP,0x4                         ; 00408204
    PUSH 0x4e1f                         ; 00408207
    CALL FUN_004e8f50                   ; 0040820c
        ;   XREF to: 004e8f50 (UNCONDITIONAL_CALL)  ; undefined FUN_004e8f50()
    ADD ESP,0x4                         ; 00408211
    MOV EAX,0x622014                    ; 00408214
    PUSH 0x2                            ; 00408219
    ADD EAX,0xea5a0                     ; 0040821b
    PUSH EAX                            ; 00408220
    CALL FUN_0051c5c0                   ; 00408221
        ;   XREF to: 0051c5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051c5c0()
    ADD ESP,0x8                         ; 00408226
    MOV ECX,dword ptr [0x0070c5ec]      ; 00408229 | DAT_0070c5ec
    MOV EAX,[0x0070c5f8]                ; 0040822f | DAT_0070c5f8
    PUSH ECX                            ; 00408234
    SAR EAX,0x10                        ; 00408235
    PUSH EAX                            ; 00408238
    MOV EAX,[0x0070c5f4]                ; 00408239 | DAT_0070c5f4
    SAR EAX,0x10                        ; 0040823e
    PUSH EAX                            ; 00408241
    MOV EBX,dword ptr [0x0070c5bc]      ; 00408242 | DAT_0070c5bc
    MOV EAX,[0x0070c5c8]                ; 00408248 | DAT_0070c5c8
    PUSH EBX                            ; 0040824d
    SAR EAX,0x10                        ; 0040824e
    PUSH EAX                            ; 00408251
    MOV EAX,[0x0070c5c4]                ; 00408252 | DAT_0070c5c4
    SAR EAX,0x10                        ; 00408257
    PUSH EAX                            ; 0040825a
    CALL FUN_00401310                   ; 0040825b
        ;   XREF to: 00401310 (UNCONDITIONAL_CALL)  ; undefined FUN_00401310()
    ADD ESP,0x18                        ; 00408260
    ADD ESP,0x30                        ; 00408263
    POP EBP                             ; 00408266
    POP EDI                             ; 00408267
    POP ESI                             ; 00408268
    POP EBX                             ; 00408269
    RET                                 ; 0040826a

