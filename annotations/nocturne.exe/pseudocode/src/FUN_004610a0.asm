; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004610a0(int *param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_004216d0 at 004217fd
;   FUN_00518ec0 at 00518f09
;
; Referenced Globals:
;   undefined4 DAT_006b0260
;   undefined4 DAT_01c00c70
;
; Called Functions:
;   FUN_00401710
;   FUN_00431530
;   FUN_00431630
;   FUN_00431730
;   FUN_00431830
;   FUN_004cd300
;   FUN_004f99d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004610a0
        ;   Label: FUN_004610a0
    PUSH ESI                            ; 004610a1
    PUSH EDI                            ; 004610a2
    PUSH EBP                            ; 004610a3
    SUB ESP,0x90                        ; 004610a4
    MOV EBP,dword ptr [ESP + 0xa4]      ; 004610aa
    MOV EAX,[0x006b0260]                ; 004610b1 | DAT_006b0260
    MOV EBX,dword ptr [ESP + 0xa8]      ; 004610b6
    MOV [0x01c00c70],EAX                ; 004610bd | DAT_01c00c70
    LEA EAX,[EBX*0x4 + 0x0]             ; 004610c2
    MOV ECX,0xc                         ; 004610c9
    SUB EAX,EBX                         ; 004610ce
    MOV ESI,dword ptr [EBP]             ; 004610d0
    SHL EAX,0x4                         ; 004610d3
    LEA EDI,[ESP + 0x60]                ; 004610d6
    ADD ESI,EAX                         ; 004610da
    MOV EBX,dword ptr [ESP + 0xac]      ; 004610dc
    MOVSD.REP ES:EDI,ESI                ; 004610e3
    LEA EAX,[EBX*0x4 + 0x0]             ; 004610e5
    MOV ECX,0xc                         ; 004610ec
    SUB EAX,EBX                         ; 004610f1
    MOV ESI,dword ptr [EBP]             ; 004610f3
    SHL EAX,0x4                         ; 004610f6
    MOV EDI,ESP                         ; 004610f9
    ADD ESI,EAX                         ; 004610fb
    MOVSD.REP ES:EDI,ESI                ; 004610fd
    MOV EAX,dword ptr [ESP + 0x70]      ; 004610ff
    AND EAX,dword ptr [ESP + 0x10]      ; 00461103
    TEST EAX,0x80000000                 ; 00461107
    JNZ 0x004612fe                      ; 0046110c
        ;   XREF to: 004612fe (CONDITIONAL_JUMP)  ; LAB_004612fe
    XOR EBX,EBX                         ; 00461112
        ;   Label: LAB_00461112
    MOV EAX,dword ptr [ESP]             ; 00461114
        ;   Label: LAB_00461114
    CMP EAX,dword ptr [ESP + 0x8]       ; 00461117
    JLE 0x00461143                      ; 0046111b
        ;   XREF to: 00461143 (CONDITIONAL_JUMP)  ; LAB_00461143
    LEA EAX,[ESP + 0x30]                ; 0046111d
    PUSH EAX                            ; 00461121
    LEA EAX,[ESP + 0x4]                 ; 00461122
    PUSH EAX                            ; 00461126
    LEA EAX,[ESP + 0x68]                ; 00461127
    PUSH EAX                            ; 0046112b
    LEA EDI,[ESP + 0xc]                 ; 0046112c
    LEA ESI,[ESP + 0x3c]                ; 00461130
    CALL FUN_00431530                   ; 00461134
        ;   XREF to: 00431530 (UNCONDITIONAL_CALL)  ; undefined FUN_00431530()
    MOV ECX,0xc                         ; 00461139
    ADD ESP,0xc                         ; 0046113e
    MOVSD.REP ES:EDI,ESI                ; 00461141
    MOV EAX,dword ptr [ESP + 0x8]       ; 00461143
        ;   Label: LAB_00461143
    MOV ESI,dword ptr [ESP]             ; 00461147
    NEG EAX                             ; 0046114a
    CMP EAX,ESI                         ; 0046114c
    JLE 0x00461176                      ; 0046114e
        ;   XREF to: 00461176 (CONDITIONAL_JUMP)  ; LAB_00461176
    LEA EAX,[ESP + 0x30]                ; 00461150
    PUSH EAX                            ; 00461154
    LEA EAX,[ESP + 0x4]                 ; 00461155
    PUSH EAX                            ; 00461159
    LEA EAX,[ESP + 0x68]                ; 0046115a
    PUSH EAX                            ; 0046115e
    LEA EDI,[ESP + 0xc]                 ; 0046115f
    LEA ESI,[ESP + 0x3c]                ; 00461163
    CALL FUN_00431630                   ; 00461167
        ;   XREF to: 00431630 (UNCONDITIONAL_CALL)  ; undefined FUN_00431630()
    MOV ECX,0xc                         ; 0046116c
    ADD ESP,0xc                         ; 00461171
    MOVSD.REP ES:EDI,ESI                ; 00461174
    MOV EAX,dword ptr [ESP + 0x4]       ; 00461176
        ;   Label: LAB_00461176
    CMP EAX,dword ptr [ESP + 0x8]       ; 0046117a
    JLE 0x004611a6                      ; 0046117e
        ;   XREF to: 004611a6 (CONDITIONAL_JUMP)  ; LAB_004611a6
    LEA EAX,[ESP + 0x30]                ; 00461180
    PUSH EAX                            ; 00461184
    LEA EAX,[ESP + 0x4]                 ; 00461185
    PUSH EAX                            ; 00461189
    LEA EAX,[ESP + 0x68]                ; 0046118a
    PUSH EAX                            ; 0046118e
    LEA EDI,[ESP + 0xc]                 ; 0046118f
    LEA ESI,[ESP + 0x3c]                ; 00461193
    CALL FUN_00431730                   ; 00461197
        ;   XREF to: 00431730 (UNCONDITIONAL_CALL)  ; undefined FUN_00431730()
    MOV ECX,0xc                         ; 0046119c
    ADD ESP,0xc                         ; 004611a1
    MOVSD.REP ES:EDI,ESI                ; 004611a4
    MOV EAX,dword ptr [ESP + 0x8]       ; 004611a6
        ;   Label: LAB_004611a6
    MOV EDX,dword ptr [ESP + 0x4]       ; 004611aa
    NEG EAX                             ; 004611ae
    CMP EAX,EDX                         ; 004611b0
    JLE 0x004611da                      ; 004611b2
        ;   XREF to: 004611da (CONDITIONAL_JUMP)  ; LAB_004611da
    LEA EAX,[ESP + 0x30]                ; 004611b4
    PUSH EAX                            ; 004611b8
    LEA EAX,[ESP + 0x4]                 ; 004611b9
    PUSH EAX                            ; 004611bd
    LEA EAX,[ESP + 0x68]                ; 004611be
    PUSH EAX                            ; 004611c2
    LEA EDI,[ESP + 0xc]                 ; 004611c3
    LEA ESI,[ESP + 0x3c]                ; 004611c7
    CALL FUN_00431830                   ; 004611cb
        ;   XREF to: 00431830 (UNCONDITIONAL_CALL)  ; undefined FUN_00431830()
    MOV ECX,0xc                         ; 004611d0
    ADD ESP,0xc                         ; 004611d5
    MOVSD.REP ES:EDI,ESI                ; 004611d8
    MOV EAX,dword ptr [ESP + 0x60]      ; 004611da
        ;   Label: LAB_004611da
    CMP EAX,dword ptr [ESP + 0x68]      ; 004611de
    JLE 0x0046120a                      ; 004611e2
        ;   XREF to: 0046120a (CONDITIONAL_JUMP)  ; LAB_0046120a
    LEA EAX,[ESP + 0x30]                ; 004611e4
    PUSH EAX                            ; 004611e8
    LEA EAX,[ESP + 0x64]                ; 004611e9
    PUSH EAX                            ; 004611ed
    LEA EAX,[ESP + 0x8]                 ; 004611ee
    PUSH EAX                            ; 004611f2
    LEA EDI,[ESP + 0x6c]                ; 004611f3
    LEA ESI,[ESP + 0x3c]                ; 004611f7
    CALL FUN_00431530                   ; 004611fb
        ;   XREF to: 00431530 (UNCONDITIONAL_CALL)  ; undefined FUN_00431530()
    MOV ECX,0xc                         ; 00461200
    ADD ESP,0xc                         ; 00461205
    MOVSD.REP ES:EDI,ESI                ; 00461208
    MOV EAX,dword ptr [ESP + 0x68]      ; 0046120a
        ;   Label: LAB_0046120a
    MOV ESI,dword ptr [ESP + 0x60]      ; 0046120e
    NEG EAX                             ; 00461212
    CMP EAX,ESI                         ; 00461214
    JLE 0x0046123e                      ; 00461216
        ;   XREF to: 0046123e (CONDITIONAL_JUMP)  ; LAB_0046123e
    LEA EAX,[ESP + 0x30]                ; 00461218
    PUSH EAX                            ; 0046121c
    LEA EAX,[ESP + 0x64]                ; 0046121d
    PUSH EAX                            ; 00461221
    LEA EAX,[ESP + 0x8]                 ; 00461222
    PUSH EAX                            ; 00461226
    LEA EDI,[ESP + 0x6c]                ; 00461227
    LEA ESI,[ESP + 0x3c]                ; 0046122b
    CALL FUN_00431630                   ; 0046122f
        ;   XREF to: 00431630 (UNCONDITIONAL_CALL)  ; undefined FUN_00431630()
    MOV ECX,0xc                         ; 00461234
    ADD ESP,0xc                         ; 00461239
    MOVSD.REP ES:EDI,ESI                ; 0046123c
    MOV EAX,dword ptr [ESP + 0x64]      ; 0046123e
        ;   Label: LAB_0046123e
    CMP EAX,dword ptr [ESP + 0x68]      ; 00461242
    JLE 0x0046126e                      ; 00461246
        ;   XREF to: 0046126e (CONDITIONAL_JUMP)  ; LAB_0046126e
    LEA EAX,[ESP + 0x30]                ; 00461248
    PUSH EAX                            ; 0046124c
    LEA EAX,[ESP + 0x64]                ; 0046124d
    PUSH EAX                            ; 00461251
    LEA EAX,[ESP + 0x8]                 ; 00461252
    PUSH EAX                            ; 00461256
    LEA EDI,[ESP + 0x6c]                ; 00461257
    LEA ESI,[ESP + 0x3c]                ; 0046125b
    CALL FUN_00431730                   ; 0046125f
        ;   XREF to: 00431730 (UNCONDITIONAL_CALL)  ; undefined FUN_00431730()
    MOV ECX,0xc                         ; 00461264
    ADD ESP,0xc                         ; 00461269
    MOVSD.REP ES:EDI,ESI                ; 0046126c
    MOV EAX,dword ptr [ESP + 0x68]      ; 0046126e
        ;   Label: LAB_0046126e
    MOV EDX,dword ptr [ESP + 0x64]      ; 00461272
    NEG EAX                             ; 00461276
    CMP EAX,EDX                         ; 00461278
    JLE 0x004612a2                      ; 0046127a
        ;   XREF to: 004612a2 (CONDITIONAL_JUMP)  ; LAB_004612a2
    LEA EAX,[ESP + 0x30]                ; 0046127c
    PUSH EAX                            ; 00461280
    LEA EAX,[ESP + 0x64]                ; 00461281
    PUSH EAX                            ; 00461285
    LEA EAX,[ESP + 0x8]                 ; 00461286
    PUSH EAX                            ; 0046128a
    LEA EDI,[ESP + 0x6c]                ; 0046128b
    LEA ESI,[ESP + 0x3c]                ; 0046128f
    CALL FUN_00431830                   ; 00461293
        ;   XREF to: 00431830 (UNCONDITIONAL_CALL)  ; undefined FUN_00431830()
    MOV ECX,0xc                         ; 00461298
    ADD ESP,0xc                         ; 0046129d
    MOVSD.REP ES:EDI,ESI                ; 004612a0
    INC EBX                             ; 004612a2
        ;   Label: LAB_004612a2
    CMP EBX,0x2                         ; 004612a3
    JL 0x00461114                       ; 004612a6
        ;   XREF to: 00461114 (CONDITIONAL_JUMP)  ; LAB_00461114
    MOV EAX,dword ptr [ESP + 0x60]      ; 004612ac
    MOV ECX,dword ptr [ESP + 0x68]      ; 004612b0
    CMP EAX,ECX                         ; 004612b4
    JG 0x004612f3                       ; 004612b6
        ;   XREF to: 004612f3 (CONDITIONAL_JUMP)  ; LAB_004612f3
    MOV EBX,ECX                         ; 004612b8
    NEG EBX                             ; 004612ba
    CMP EBX,EAX                         ; 004612bc
    JG 0x004612f3                       ; 004612be
        ;   XREF to: 004612f3 (CONDITIONAL_JUMP)  ; LAB_004612f3
    MOV EAX,dword ptr [ESP + 0x64]      ; 004612c0
    CMP EAX,ECX                         ; 004612c4
    JG 0x004612f3                       ; 004612c6
        ;   XREF to: 004612f3 (CONDITIONAL_JUMP)  ; LAB_004612f3
    CMP EBX,EAX                         ; 004612c8
    JG 0x004612f3                       ; 004612ca
        ;   XREF to: 004612f3 (CONDITIONAL_JUMP)  ; LAB_004612f3
    MOV EAX,dword ptr [ESP]             ; 004612cc
    MOV EDX,dword ptr [ESP + 0x8]       ; 004612cf
    CMP EAX,EDX                         ; 004612d3
    JG 0x004612f3                       ; 004612d5
        ;   XREF to: 004612f3 (CONDITIONAL_JUMP)  ; LAB_004612f3
    MOV EBX,EDX                         ; 004612d7
    NEG EBX                             ; 004612d9
    CMP EBX,EAX                         ; 004612db
    JG 0x004612f3                       ; 004612dd
        ;   XREF to: 004612f3 (CONDITIONAL_JUMP)  ; LAB_004612f3
    MOV EAX,dword ptr [ESP + 0x4]       ; 004612df
    CMP EAX,EDX                         ; 004612e3
    JG 0x004612f3                       ; 004612e5
        ;   XREF to: 004612f3 (CONDITIONAL_JUMP)  ; LAB_004612f3
    CMP EBX,EAX                         ; 004612e7
    JG 0x004612f3                       ; 004612e9
        ;   XREF to: 004612f3 (CONDITIONAL_JUMP)  ; LAB_004612f3
    TEST ECX,ECX                        ; 004612eb
    JLE 0x004612f3                      ; 004612ed
        ;   XREF to: 004612f3 (CONDITIONAL_JUMP)  ; LAB_004612f3
    TEST EDX,EDX                        ; 004612ef
    JG 0x00461307                       ; 004612f1
        ;   XREF to: 00461307 (CONDITIONAL_JUMP)  ; LAB_00461307
    ADD ESP,0x90                        ; 004612f3
        ;   Label: LAB_004612f3
    POP EBP                             ; 004612f9
    POP EDI                             ; 004612fa
    POP ESI                             ; 004612fb
    POP EBX                             ; 004612fc
    RET                                 ; 004612fd
    TEST AL,0xff                        ; 004612fe
        ;   Label: LAB_004612fe
    JNZ 0x004612f3                      ; 00461300
        ;   XREF to: 004612f3 (CONDITIONAL_JUMP)  ; LAB_004612f3
    JMP 0x00461112                      ; 00461302
        ;   XREF to: 00461112 (UNCONDITIONAL_JUMP)  ; LAB_00461112
    MOV ECX,0xc                         ; 00461307
        ;   Label: LAB_00461307
    MOV EDI,dword ptr [EBP]             ; 0046130c
    LEA ESI,[ESP + 0x60]                ; 0046130f
    ADD EDI,0xea5a0                     ; 00461313
    MOVSD.REP ES:EDI,ESI                ; 00461319
    MOV ECX,0xc                         ; 0046131b
    MOV EDI,dword ptr [EBP]             ; 00461320
    MOV ESI,ESP                         ; 00461323
    ADD EDI,0xea5d0                     ; 00461325
    PUSH 0x4e1e                         ; 0046132b
    MOVSD.REP ES:EDI,ESI                ; 00461330
    CALL FUN_004cd300                   ; 00461332
        ;   XREF to: 004cd300 (UNCONDITIONAL_CALL)  ; undefined FUN_004cd300()
    ADD ESP,0x4                         ; 00461337
    PUSH 0x4e1f                         ; 0046133a
    CALL FUN_004cd300                   ; 0046133f
        ;   XREF to: 004cd300 (UNCONDITIONAL_CALL)  ; undefined FUN_004cd300()
    ADD ESP,0x4                         ; 00461344
    MOV EAX,dword ptr [EBP]             ; 00461347
    PUSH 0x2                            ; 0046134a
    ADD EAX,0xea5a0                     ; 0046134c
    PUSH EAX                            ; 00461351
    CALL FUN_004f99d0                   ; 00461352
        ;   XREF to: 004f99d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f99d0()
    MOV EBX,dword ptr [EBP]             ; 00461357
    LEA EAX,[EBX + 0xea5d0]             ; 0046135a
    ADD ESP,0x8                         ; 00461360
    MOV ECX,dword ptr [EAX + 0x8]       ; 00461363
    MOV ESI,dword ptr [EAX + 0x14]      ; 00461366
    PUSH ECX                            ; 00461369
    SAR ESI,0x10                        ; 0046136a
    MOV EAX,dword ptr [EAX + 0x10]      ; 0046136d
    PUSH ESI                            ; 00461370
    SAR EAX,0x10                        ; 00461371
    PUSH EAX                            ; 00461374
    LEA EAX,[EBX + 0xea5a0]             ; 00461375
    MOV EBX,dword ptr [EAX + 0x8]       ; 0046137b
    PUSH EBX                            ; 0046137e
    MOV EBX,dword ptr [EAX + 0x14]      ; 0046137f
    SAR EBX,0x10                        ; 00461382
    MOV EAX,dword ptr [EAX + 0x10]      ; 00461385
    PUSH EBX                            ; 00461388
    SAR EAX,0x10                        ; 00461389
    PUSH EAX                            ; 0046138c
    CALL FUN_00401710                   ; 0046138d
        ;   XREF to: 00401710 (UNCONDITIONAL_CALL)  ; undefined FUN_00401710()
    ADD ESP,0x18                        ; 00461392
    ADD ESP,0x90                        ; 00461395
    POP EBP                             ; 0046139b
    POP EDI                             ; 0046139c
    POP ESI                             ; 0046139d
    POP EBX                             ; 0046139e
    RET                                 ; 0046139f

