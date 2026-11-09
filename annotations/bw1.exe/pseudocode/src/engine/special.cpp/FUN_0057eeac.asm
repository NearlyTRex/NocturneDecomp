; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_special_cpp_FUN_0057eeac(void)
;
;
; XREF[2]:
;   engine_mini3d.cpp_FUN_00516060 at 005162aa
;   engine_mini3d.cpp_FUN_005168c0 at 00516ab2
;
; Referenced Globals:
;   undefined4 DAT_00623964
;   undefined4 DAT_006239a0
;   undefined4 DAT_006239a4
;   undefined4 DAT_006239ac
;   undefined4 DAT_006239c8
;   undefined4 DAT_006239cc
;   undefined4 DAT_00623dd0
;   undefined4 DAT_00623dd4
;   undefined4 DAT_00623dd8
;   undefined8 DAT_00623ddc
;   undefined8 DAT_00623e50
;   undefined4 DAT_00623e58
;   undefined4 DAT_00623e60
;   undefined8 DAT_00623e70
;   undefined4 DAT_00623e78
;   ... and 23 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0057eeac
        ;   Label: engine_special.cpp_FUN_0057eeac
    PUSH EDI                            ; 0057eead
    PUSH EBP                            ; 0057eeae
    MOV EAX,dword ptr [ESI + 0x8]       ; 0057eeaf
    MOV ECX,dword ptr [EDI + 0x8]       ; 0057eeb2
    CMP EAX,ECX                         ; 0057eeb5
    JBE 0x0057eebc                      ; 0057eeb7
        ;   XREF to: 0057eebc (CONDITIONAL_JUMP)  ; LAB_0057eebc
    XCHG EAX,ECX                        ; 0057eeb9
    XCHG EDI,ESI                        ; 0057eeba
    SHR ECX,0x10                        ; 0057eebc
        ;   Label: LAB_0057eebc
    SHR EAX,0x10                        ; 0057eebf
    MOV EBP,dword ptr [EBX*0x4 + 0x1c4480c] ; 0057eec2 | DAT_01c4480c
    MOV EBX,dword ptr [EBX*0x4 + 0x1c4354c] ; 0057eec9 | DAT_01c4354c
    SUB ECX,EAX                         ; 0057eed0
    JLE 0x0057f2a0                      ; 0057eed2
        ;   XREF to: 0057f2a0 (CONDITIONAL_JUMP)  ; LAB_0057f2a0
    LEA EBX,[EBX + EAX*0x4]             ; 0057eed8
    SHL ECX,0x2                         ; 0057eedb
    LEA EBP,[EBP + EAX*0x4]             ; 0057eede
    MOV dword ptr [0x00623964],ECX      ; 0057eee2 | DAT_00623964
    MOV dword ptr [0x006239c8],EBX      ; 0057eee8 | DAT_006239c8
    MOV dword ptr [0x006239cc],EBP      ; 0057eeee | DAT_006239cc
    CMP dword ptr [0x01c51d14],0x80     ; 0057eef4 | DAT_01c51d14
    JZ 0x0057f430                       ; 0057eefe
        ;   XREF to: 0057f430 (CONDITIONAL_JUMP)  ; LAB_0057f430
    MOV EAX,dword ptr [EDI + 0x18]      ; 0057ef04
    MOV EBX,dword ptr [ESI + 0x18]      ; 0057ef07
    SUB EAX,EBX                         ; 0057ef0a
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057ef0c
    MOV dword ptr [0x006239a0],EBX      ; 0057ef12 | DAT_006239a0
    MOV dword ptr [0x00623dd0],EDX      ; 0057ef18 | DAT_00623dd0
    MOV EAX,dword ptr [EDI + 0x20]      ; 0057ef1e
    MOV EBX,dword ptr [ESI + 0x20]      ; 0057ef21
    SUB EAX,EBX                         ; 0057ef24
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057ef26
    MOV dword ptr [0x006239a4],EBX      ; 0057ef2c | DAT_006239a4
    MOV dword ptr [0x00623dd4],EDX      ; 0057ef32 | DAT_00623dd4
    MOV EAX,dword ptr [EDI + 0x28]      ; 0057ef38
    MOV EBX,dword ptr [ESI + 0x28]      ; 0057ef3b
    SUB EAX,EBX                         ; 0057ef3e
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057ef40
    MOV dword ptr [0x006239ac],EBX      ; 0057ef46 | DAT_006239ac
    MOV dword ptr [0x00623dd8],EDX      ; 0057ef4c | DAT_00623dd8
    TEST dword ptr [0x01c51d14],0x8     ; 0057ef52 | DAT_01c51d14
    JZ 0x0057ef80                       ; 0057ef5c
        ;   XREF to: 0057ef80 (CONDITIONAL_JUMP)  ; LAB_0057ef80
    MOV EAX,dword ptr [EDI + 0x30]      ; 0057ef5e
    MOV EBX,dword ptr [ESI + 0x30]      ; 0057ef61
    SUB EAX,EBX                         ; 0057ef64
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057ef66
    MOV dword ptr [0x00623e90],EBX      ; 0057ef6c | DAT_00623e90
    MOV dword ptr [0x00623e98],EDX      ; 0057ef72 | DAT_00623e98
    JMP 0x0057ef94                      ; 0057ef78
        ;   XREF to: 0057ef94 (UNCONDITIONAL_JUMP)  ; LAB_0057ef94
    MOV dword ptr [0x00623e90],0x0      ; 0057ef80 | DAT_00623e90
        ;   Label: LAB_0057ef80
    MOV dword ptr [0x00623e98],0x0      ; 0057ef8a | DAT_00623e98
    TEST dword ptr [0x01c51d14],0x20    ; 0057ef94 | DAT_01c51d14
        ;   Label: LAB_0057ef94
    JZ 0x0057efba                       ; 0057ef9e
        ;   XREF to: 0057efba (CONDITIONAL_JUMP)  ; LAB_0057efba
    MOV EAX,dword ptr [EDI + 0x48]      ; 0057efa0
    MOV EBX,dword ptr [ESI + 0x48]      ; 0057efa3
    SUB EAX,EBX                         ; 0057efa6
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057efa8
    MOV dword ptr [0x00623ea0],EBX      ; 0057efae | DAT_00623ea0
    MOV dword ptr [0x00623ea8],EDX      ; 0057efb4 | DAT_00623ea8
    MOV EAX,dword ptr [EDI + 0x10]      ; 0057efba
        ;   Label: LAB_0057efba
    MOV EBX,dword ptr [ESI + 0x10]      ; 0057efbd
    SHR EAX,0x1                         ; 0057efc0
    SHR EBX,0x1                         ; 0057efc2
    SUB EAX,EBX                         ; 0057efc4
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057efc6
    AND EBX,0xffff                      ; 0057efcc
    AND EDX,0xffff                      ; 0057efd2
    MOV dword ptr [0x00623e50],EBX      ; 0057efd8 | DAT_00623e50
    MOV dword ptr [0x00623e70],EDX      ; 0057efde | DAT_00623e70
    MOV EAX,dword ptr [EDI + 0x38]      ; 0057efe4
    MOV EBX,dword ptr [ESI + 0x38]      ; 0057efe7
    SHR EAX,0x1                         ; 0057efea
    SHR EBX,0x1                         ; 0057efec
    SUB EAX,EBX                         ; 0057efee
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057eff0
    AND EBX,0xffff                      ; 0057eff6
    AND EDX,0xffff                      ; 0057effc
    MOV dword ptr [0x00623e58],EBX      ; 0057f002 | DAT_00623e58
    MOV dword ptr [0x00623e78],EDX      ; 0057f008 | DAT_00623e78
    MOV EAX,dword ptr [EDI + 0x40]      ; 0057f00e
    MOV EBX,dword ptr [ESI + 0x40]      ; 0057f011
    SHR EAX,0x1                         ; 0057f014
    SHR EBX,0x1                         ; 0057f016
    SUB EAX,EBX                         ; 0057f018
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057f01a
    AND EBX,0xffff                      ; 0057f020
    AND EDX,0xffff                      ; 0057f026
    MOV dword ptr [0x00623e60],EBX      ; 0057f02c | DAT_00623e60
    MOV dword ptr [0x00623e80],EDX      ; 0057f032 | DAT_00623e80
    MOVQ MM5,qword ptr [0x00623e50]     ; 0057f038 | DAT_00623e50
    MOVQ MM6,qword ptr [0x00623e70]     ; 0057f03f | DAT_00623e70
    PSLLQ MM5,0x10                      ; 0057f046
    PSLLQ MM6,0x10                      ; 0057f04a
    POR MM5,qword ptr [0x00623e58]      ; 0057f04e | DAT_00623e58
    POR MM6,qword ptr [0x00623e78]      ; 0057f055 | DAT_00623e78
    PSLLQ MM5,0x10                      ; 0057f05c
    PSLLQ MM6,0x10                      ; 0057f060
    POR MM5,qword ptr [0x00623e60]      ; 0057f064 | DAT_00623e60
    POR MM6,qword ptr [0x00623e80]      ; 0057f06b | DAT_00623e80
    MOVQ qword ptr [0x00623eb0],MM6     ; 0057f072 | DAT_00623eb0
    MOV ECX,dword ptr [0x006239a0]      ; 0057f079 | DAT_006239a0
    MOV EDX,dword ptr [0x006239a4]      ; 0057f07f | DAT_006239a4
    MOV ESI,dword ptr [0x006239ac]      ; 0057f085 | DAT_006239ac
    MOV EDI,0x0                         ; 0057f08b
    MOV EBP,dword ptr [0x00623e90]      ; 0057f090 | DAT_00623e90
    PXOR MM7,MM7                        ; 0057f096
    TEST dword ptr [0x01c51d14],0x20    ; 0057f099 | DAT_01c51d14
    JZ 0x0057f2a6                       ; 0057f0a3
        ;   XREF to: 0057f2a6 (CONDITIONAL_JUMP)  ; LAB_0057f2a6
    MOVD MM6,dword ptr [0x00623ea0]     ; 0057f0a9 | DAT_00623ea0
    TEST dword ptr [0x01c51d14],0x40    ; 0057f0b0 | DAT_01c51d14
        ;   Label: LAB_0057f0b0
    JZ 0x0057f0cc                       ; 0057f0ba
        ;   XREF to: 0057f0cc (CONDITIONAL_JUMP)  ; LAB_0057f0cc
    LEA EAX,[EDI]                       ; 0057f0bc
    ADD EAX,dword ptr [0x006239cc]      ; 0057f0be | DAT_006239cc
    CMP ESI,dword ptr [EAX]             ; 0057f0c4
    JL 0x0057f25b                       ; 0057f0c6
        ;   XREF to: 0057f25b (CONDITIONAL_JUMP)  ; LAB_0057f25b
    MOVD MM0,ECX                        ; 0057f0cc
        ;   Label: LAB_0057f0cc
    MOVD MM2,EDX                        ; 0057f0cf
    PSRLQ MM0,qword ptr [0x00623eb8]    ; 0057f0d2 | DAT_00623eb8
    PSRLQ MM2,qword ptr [0x00623ed8]    ; 0057f0d9 | DAT_00623ed8
    PAND MM0,qword ptr [0x00623ef8]     ; 0057f0e0 | DAT_00623ef8
    PAND MM2,qword ptr [0x00623f18]     ; 0057f0e7 | DAT_00623f18
    PADDD MM0,MM2                       ; 0057f0ee
    MOVD EBX,MM0                        ; 0057f0f1
    TEST dword ptr [0x01c50944],0xffffffff ; 0057f0f4 | DAT_01c50944
    JNZ 0x0057f138                      ; 0057f0fe
        ;   XREF to: 0057f138 (CONDITIONAL_JUMP)  ; LAB_0057f138
    ADD EBX,dword ptr [0x01c50930]      ; 0057f100 | DAT_01c50930
    MOVZX EAX,byte ptr [EBX]            ; 0057f106
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c4e3d4] ; 0057f109 | DAT_01c4e3d4
    PUNPCKLBW MM0,MM7                   ; 0057f111
    TEST dword ptr [0x01c50934],0xffffffff ; 0057f114 | DAT_01c50934
    JZ 0x0057f131                       ; 0057f11e
        ;   XREF to: 0057f131 (CONDITIONAL_JUMP)  ; LAB_0057f131
    SUB EBX,dword ptr [0x01c50930]      ; 0057f120 | DAT_01c50930
    ADD EBX,dword ptr [0x01c50934]      ; 0057f126 | DAT_01c50934
    MOVZX EAX,byte ptr [EBX]            ; 0057f12c
    JMP 0x0057f14c                      ; 0057f12f
        ;   XREF to: 0057f14c (UNCONDITIONAL_JUMP)  ; LAB_0057f14c
    MOV EAX,0xff                        ; 0057f131
        ;   Label: LAB_0057f131
    JMP 0x0057f14c                      ; 0057f136
        ;   XREF to: 0057f14c (UNCONDITIONAL_JUMP)  ; LAB_0057f14c
    SHL EBX,0x2                         ; 0057f138
        ;   Label: LAB_0057f138
    ADD EBX,dword ptr [0x01c50930]      ; 0057f13b | DAT_01c50930
    MOV EAX,dword ptr [EBX]             ; 0057f141
    MOVD MM0,EAX                        ; 0057f143
    PUNPCKLBW MM0,MM7                   ; 0057f146
    SHR EAX,0x18                        ; 0057f149
    TEST EAX,0xffffffff                 ; 0057f14c
        ;   Label: LAB_0057f14c
    JZ 0x0057f25b                       ; 0057f151
        ;   XREF to: 0057f25b (CONDITIONAL_JUMP)  ; LAB_0057f25b
    MOV EBX,EDI                         ; 0057f157
    ADD EBX,dword ptr [0x006239c8]      ; 0057f159 | DAT_006239c8
    MOVD MM4,dword ptr [EBX]            ; 0057f15f
    PUNPCKLBW MM4,MM7                   ; 0057f162
    PSLLW MM0,0x4                       ; 0057f165
    MOVQ MM7,MM5                        ; 0057f169
    PSRLW MM7,0x3                       ; 0057f16c
    PMULHW MM0,MM7                      ; 0057f170
    PXOR MM7,MM7                        ; 0057f173
    PACKUSWB MM0,MM7                    ; 0057f176
    PUNPCKLBW MM0,MM7                   ; 0057f179
    MOVD EBX,MM6                        ; 0057f17c
    IMUL EAX,EBX                        ; 0057f17f
    SHR EAX,0x10                        ; 0057f182
    TEST dword ptr [0x01c51d14],0x8     ; 0057f185 | DAT_01c51d14
    JNZ 0x0057f193                      ; 0057f18f
        ;   XREF to: 0057f193 (CONDITIONAL_JUMP)  ; LAB_0057f193
    JMP 0x0057f1c1                      ; 0057f191
        ;   XREF to: 0057f1c1 (UNCONDITIONAL_JUMP)  ; LAB_0057f1c1
    MOV EBX,EBP                         ; 0057f193
        ;   Label: LAB_0057f193
    SAR EBX,0x8                         ; 0057f195
    MOVQ MM1,qword ptr [EBX*0x8 + 0x6247d0] ; 0057f198 | DAT_006247d0
    MOVQ MM2,MM1                        ; 0057f1a0
    PXOR MM2,qword ptr [0x00624fc8]     ; 0057f1a3 | DAT_00624fc8
    MOVD MM3,dword ptr [0x01c51d1c]     ; 0057f1aa | DAT_01c51d1c
    PUNPCKLBW MM3,MM7                   ; 0057f1b1
    PMULLW MM0,MM2                      ; 0057f1b4
    PMULLW MM3,MM1                      ; 0057f1b7
    PADDW MM0,MM3                       ; 0057f1ba
    PSRLW MM0,0x8                       ; 0057f1bd
    MOVQ MM2,qword ptr [EAX*0x8 + 0x6247d0] ; 0057f1c1 | DAT_006247d0
        ;   Label: LAB_0057f1c1
    MOVQ MM3,MM2                        ; 0057f1c9
    PXOR MM3,qword ptr [0x00624fc8]     ; 0057f1cc | DAT_00624fc8
    CMP dword ptr [0x01c51d0c],0x1      ; 0057f1d3 | DAT_01c51d0c
    JZ 0x0057f200                       ; 0057f1da
        ;   XREF to: 0057f200 (CONDITIONAL_JUMP)  ; LAB_0057f200
    CMP dword ptr [0x01c51d0c],0x2      ; 0057f1dc | DAT_01c51d0c
    JZ 0x0057f210                       ; 0057f1e3
        ;   XREF to: 0057f210 (CONDITIONAL_JUMP)  ; LAB_0057f210
    CMP dword ptr [0x01c51d0c],0x3      ; 0057f1e5 | DAT_01c51d0c
    JZ 0x0057f220                       ; 0057f1ec
        ;   XREF to: 0057f220 (CONDITIONAL_JUMP)  ; LAB_0057f220
    PMULLW MM0,MM2                      ; 0057f1ee
    PMULLW MM4,MM3                      ; 0057f1f1
    JMP 0x0057f230                      ; 0057f1f4
        ;   XREF to: 0057f230 (UNCONDITIONAL_JUMP)  ; LAB_0057f230
    PMULLW MM0,MM2                      ; 0057f200
        ;   Label: LAB_0057f200
    PSLLW MM4,0x8                       ; 0057f203
    JMP 0x0057f230                      ; 0057f207
        ;   XREF to: 0057f230 (UNCONDITIONAL_JUMP)  ; LAB_0057f230
    PMULLW MM4,MM0                      ; 0057f210
        ;   Label: LAB_0057f210
    PMULLW MM0,MM2                      ; 0057f213
    JMP 0x0057f230                      ; 0057f216
        ;   XREF to: 0057f230 (UNCONDITIONAL_JUMP)  ; LAB_0057f230
    MOVQ MM1,MM0                        ; 0057f220
        ;   Label: LAB_0057f220
    PXOR MM1,qword ptr [0x00624fc8]     ; 0057f223 | DAT_00624fc8
    PMULLW MM4,MM1                      ; 0057f22a
    PMULLW MM0,MM2                      ; 0057f22d
    PADDUSW MM0,MM4                     ; 0057f230
        ;   Label: LAB_0057f230
    PSRLW MM0,0x8                       ; 0057f233
    PACKUSWB MM0,MM7                    ; 0057f237
    MOV EBX,EDI                         ; 0057f23a
    ADD EBX,dword ptr [0x006239c8]      ; 0057f23c | DAT_006239c8
    MOVD dword ptr [EBX],MM0            ; 0057f242
    TEST dword ptr [0x01c51d14],0x80    ; 0057f245 | DAT_01c51d14
    JZ 0x0057f25b                       ; 0057f24f
        ;   XREF to: 0057f25b (CONDITIONAL_JUMP)  ; LAB_0057f25b
    MOV EAX,EDI                         ; 0057f251
    ADD EAX,dword ptr [0x006239cc]      ; 0057f253 | DAT_006239cc
    MOV dword ptr [EAX],ESI             ; 0057f259
    ADD EDI,0x4                         ; 0057f25b
        ;   Label: LAB_0057f25b
    CMP EDI,dword ptr [0x00623964]      ; 0057f25e | DAT_00623964
    JNC 0x0057f2a0                      ; 0057f264
        ;   XREF to: 0057f2a0 (CONDITIONAL_JUMP)  ; LAB_0057f2a0
    ADD ECX,dword ptr [0x00623dd0]      ; 0057f266 | DAT_00623dd0
    PADDW MM5,qword ptr [0x00623eb0]    ; 0057f26c | DAT_00623eb0
    ADD EDX,dword ptr [0x00623dd4]      ; 0057f273 | DAT_00623dd4
    MOVQ MM0,MM5                        ; 0057f279
    ADD ESI,dword ptr [0x00623dd8]      ; 0057f27c | DAT_00623dd8
    PCMPGTW MM5,qword ptr [0x00623ddc]  ; 0057f282 | DAT_00623ddc
    ADD EBP,dword ptr [0x00623e98]      ; 0057f289 | DAT_00623e98
    PAND MM5,MM0                        ; 0057f28f
    PADDD MM6,qword ptr [0x00623ea8]    ; 0057f292 | DAT_00623ea8
    JMP 0x0057f0b0                      ; 0057f299
        ;   XREF to: 0057f0b0 (UNCONDITIONAL_JUMP)  ; LAB_0057f0b0
    POP EBP                             ; 0057f2a0
        ;   Label: LAB_0057f2a0
    EMMS                                ; 0057f2a1
    POP EDI                             ; 0057f2a3
    POP ESI                             ; 0057f2a4
    RET                                 ; 0057f2a5
    MOVD MM1,dword ptr [0x01c51d1c]     ; 0057f2a6 | DAT_01c51d1c
        ;   Label: LAB_0057f2a6
    PUNPCKLBW MM1,MM7                   ; 0057f2ad
    TEST dword ptr [0x01c51d14],0x8     ; 0057f2b0 | DAT_01c51d14
    JNZ 0x0057f2cb                      ; 0057f2ba
        ;   XREF to: 0057f2cb (CONDITIONAL_JUMP)  ; LAB_0057f2cb
    MOV EBP,0x0                         ; 0057f2bc
    MOV dword ptr [0x00623e98],0x0      ; 0057f2c1 | DAT_00623e98
    TEST dword ptr [0x01c51d14],0x40    ; 0057f2cb | DAT_01c51d14
        ;   Label: LAB_0057f2cb
    JZ 0x0057f2e7                       ; 0057f2d5
        ;   XREF to: 0057f2e7 (CONDITIONAL_JUMP)  ; LAB_0057f2e7
    LEA EAX,[EDI]                       ; 0057f2d7
    ADD EAX,dword ptr [0x006239cc]      ; 0057f2d9 | DAT_006239cc
    CMP ESI,dword ptr [EAX]             ; 0057f2df
    JL 0x0057f3b7                       ; 0057f2e1
        ;   XREF to: 0057f3b7 (CONDITIONAL_JUMP)  ; LAB_0057f3b7
    TEST dword ptr [0x01c51d14],0x1     ; 0057f2e7 | DAT_01c51d14
        ;   Label: LAB_0057f2e7
    JZ 0x0057f406                       ; 0057f2f1
        ;   XREF to: 0057f406 (CONDITIONAL_JUMP)  ; LAB_0057f406
    MOVD MM0,ECX                        ; 0057f2f7
    MOVD MM2,EDX                        ; 0057f2fa
    PSRLQ MM0,qword ptr [0x00623eb8]    ; 0057f2fd | DAT_00623eb8
    PSRLQ MM2,qword ptr [0x00623ed8]    ; 0057f304 | DAT_00623ed8
    PAND MM0,qword ptr [0x00623ef8]     ; 0057f30b | DAT_00623ef8
    PAND MM2,qword ptr [0x00623f18]     ; 0057f312 | DAT_00623f18
    PADDD MM0,MM2                       ; 0057f319
    MOVD EBX,MM0                        ; 0057f31c
    TEST dword ptr [0x01c50944],0xffffffff ; 0057f31f | DAT_01c50944
    JNZ 0x0057f33e                      ; 0057f329
        ;   XREF to: 0057f33e (CONDITIONAL_JUMP)  ; LAB_0057f33e
    ADD EBX,dword ptr [0x01c50930]      ; 0057f32b | DAT_01c50930
    MOVZX EAX,byte ptr [EBX]            ; 0057f331
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c4e3d4] ; 0057f334 | DAT_01c4e3d4
    JMP 0x0057f34a                      ; 0057f33c
        ;   XREF to: 0057f34a (UNCONDITIONAL_JUMP)  ; LAB_0057f34a
    SHL EBX,0x2                         ; 0057f33e
        ;   Label: LAB_0057f33e
    ADD EBX,dword ptr [0x01c50930]      ; 0057f341 | DAT_01c50930
    MOVD MM0,dword ptr [EBX]            ; 0057f347
    MOVQ MM3,MM5                        ; 0057f34a
        ;   Label: LAB_0057f34a
    PUNPCKLBW MM0,MM7                   ; 0057f34d
    PSRLW MM3,0x3                       ; 0057f350
    PSLLW MM0,0x4                       ; 0057f354
    PMULHW MM0,MM3                      ; 0057f358
    PACKUSWB MM0,MM7                    ; 0057f35b
    TEST dword ptr [0x01c51d14],0x8     ; 0057f35e | DAT_01c51d14
    JZ 0x0057f397                       ; 0057f368
        ;   XREF to: 0057f397 (CONDITIONAL_JUMP)  ; LAB_0057f397
    MOV EAX,EBP                         ; 0057f36a
    SAR EAX,0x8                         ; 0057f36c
    MOVQ MM3,qword ptr [EAX*0x8 + 0x6247d0] ; 0057f36f | DAT_006247d0
    MOVQ MM4,MM1                        ; 0057f377
    MOVQ MM2,MM3                        ; 0057f37a
    PMULLW MM4,MM3                      ; 0057f37d
    PXOR MM2,qword ptr [0x00624fc8]     ; 0057f380 | DAT_00624fc8
    PUNPCKLBW MM0,MM7                   ; 0057f387
    PMULLW MM0,MM2                      ; 0057f38a
    PADDW MM0,MM4                       ; 0057f38d
    PSRLW MM0,0x8                       ; 0057f390
    PACKUSWB MM0,MM7                    ; 0057f394
    MOV EBX,dword ptr [0x006239c8]      ; 0057f397 | DAT_006239c8
        ;   Label: LAB_0057f397
    ADD EBX,EDI                         ; 0057f39d
    MOVD dword ptr [EBX],MM0            ; 0057f39f
    TEST dword ptr [0x01c51d14],0x80    ; 0057f3a2 | DAT_01c51d14
    JZ 0x0057f3b7                       ; 0057f3ac
        ;   XREF to: 0057f3b7 (CONDITIONAL_JUMP)  ; LAB_0057f3b7
    MOV EAX,[0x006239cc]                ; 0057f3ae | DAT_006239cc
    ADD EAX,EDI                         ; 0057f3b3
    MOV dword ptr [EAX],ESI             ; 0057f3b5
    ADD EDI,0x4                         ; 0057f3b7
        ;   Label: LAB_0057f3b7
    CMP EDI,dword ptr [0x00623964]      ; 0057f3ba | DAT_00623964
    JNC 0x0057f2a0                      ; 0057f3c0
        ;   XREF to: 0057f2a0 (CONDITIONAL_JUMP)  ; LAB_0057f2a0
    ADD ECX,dword ptr [0x00623dd0]      ; 0057f3c6 | DAT_00623dd0
    PADDW MM5,qword ptr [0x00623eb0]    ; 0057f3cc | DAT_00623eb0
    ADD EDX,dword ptr [0x00623dd4]      ; 0057f3d3 | DAT_00623dd4
    MOVQ MM0,MM5                        ; 0057f3d9
    ADD ESI,dword ptr [0x00623dd8]      ; 0057f3dc | DAT_00623dd8
    PCMPGTW MM5,qword ptr [0x00623ddc]  ; 0057f3e2 | DAT_00623ddc
    ADD EBP,dword ptr [0x00623e98]      ; 0057f3e9 | DAT_00623e98
    PAND MM5,MM0                        ; 0057f3ef
    JMP 0x0057f2cb                      ; 0057f3f2
        ;   XREF to: 0057f2cb (UNCONDITIONAL_JUMP)  ; LAB_0057f2cb
    TEST dword ptr [0x01c51d14],0x200   ; 0057f406 | DAT_01c51d14
        ;   Label: LAB_0057f406
    JNZ 0x0057f420                      ; 0057f410
        ;   XREF to: 0057f420 (CONDITIONAL_JUMP)  ; LAB_0057f420
    MOVD MM0,dword ptr [0x01c4f020]     ; 0057f412 | DAT_01c4f020
    JMP 0x0057f34a                      ; 0057f419
        ;   XREF to: 0057f34a (UNCONDITIONAL_JUMP)  ; LAB_0057f34a
    MOVD MM0,dword ptr [0x00623fc8]     ; 0057f420 | DAT_00623fc8
        ;   Label: LAB_0057f420
    JMP 0x0057f34a                      ; 0057f427
        ;   XREF to: 0057f34a (UNCONDITIONAL_JUMP)  ; LAB_0057f34a
    MOV EAX,dword ptr [EDI + 0x28]      ; 0057f430
        ;   Label: LAB_0057f430
    MOV EBX,dword ptr [ESI + 0x28]      ; 0057f433
    SUB EAX,EBX                         ; 0057f436
    IMUL dword ptr [ECX + 0x1c4f034]    ; 0057f438
    MOV dword ptr [0x006239ac],EBX      ; 0057f43e | DAT_006239ac
    MOV dword ptr [0x00623dd8],EDX      ; 0057f444 | DAT_00623dd8
    MOV EAX,[0x006239ac]                ; 0057f44a | DAT_006239ac
    MOV EBX,dword ptr [0x00623dd8]      ; 0057f44f | DAT_00623dd8
    MOV ESI,dword ptr [0x006239cc]      ; 0057f455 | DAT_006239cc
    MOV ECX,dword ptr [0x00623964]      ; 0057f45b | DAT_00623964
    MOV dword ptr [ESI],EAX             ; 0057f461
        ;   Label: LAB_0057f461
    ADD EAX,EBX                         ; 0057f463
    ADD ESI,0x4                         ; 0057f465
    SUB ECX,0x4                         ; 0057f468
    JG 0x0057f461                       ; 0057f46b
        ;   XREF to: 0057f461 (CONDITIONAL_JUMP)  ; LAB_0057f461
    POP EBP                             ; 0057f46d
    EMMS                                ; 0057f46e
    POP EDI                             ; 0057f470
    POP ESI                             ; 0057f471
    RET                                 ; 0057f472

