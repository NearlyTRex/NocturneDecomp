; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00494110(void)
;
; Local Variables:
; undefined4       Stack[-0x12c8]:4  local_12c8
;
; XREF[1]:
;   FUN_00496dd0 at 00496dd5
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;   undefined4 DAT_01c50948
;
; Called Functions:
;   FUN_00581f50
;   FUN_00581fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494110
        ;   Label: FUN_00494110
    PUSH EBP                            ; 00494111
    SUB ESP,0x12c0                      ; 00494112
    CMP dword ptr [0x01c50948],0x0      ; 00494118 | DAT_01c50948
    JZ 0x004941cd                       ; 0049411f
        ;   XREF to: 004941cd (CONDITIONAL_JUMP)  ; LAB_004941cd
    MOV ECX,dword ptr [0x0061b49c]      ; 00494125 | DAT_0061b49c
    TEST ECX,ECX                        ; 0049412b
    JLE 0x00494150                      ; 0049412d
        ;   XREF to: 00494150 (CONDITIONAL_JUMP)  ; LAB_00494150
    LEA EBX,[ECX*0x4 + 0x0]             ; 0049412f
    XOR EAX,EAX                         ; 00494136
    ADD EAX,0x4                         ; 00494138
        ;   Label: LAB_00494138
    MOV EDX,dword ptr [EAX + 0x1c43548] ; 0049413b | DAT_01c4354c | DAT_01c43550
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 00494141
    CMP EAX,EBX                         ; 00494145
    JL 0x00494138                       ; 00494147
        ;   XREF to: 00494138 (CONDITIONAL_JUMP)  ; LAB_00494138
    LEA EAX,[EAX]                       ; 00494149
    NOP                                 ; 0049414f
    CALL FUN_00581f50                   ; 00494150
        ;   XREF to: 00581f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00581f50()
        ;   Label: LAB_00494150
    TEST EAX,EAX                        ; 00494155
    JZ 0x004941cd                       ; 00494157
        ;   XREF to: 004941cd (CONDITIONAL_JUMP)  ; LAB_004941cd
    PUSH EDI                            ; 0049415d
    PUSH ESI                            ; 0049415e
    MOV EBX,dword ptr [0x0061b4a0]      ; 0049415f | DAT_0061b4a0
    MOV EDX,dword ptr [0x0061b498]      ; 00494165 | DAT_0061b498
    IMUL EDX,EBX                        ; 0049416b
    MOV EAX,EDX                         ; 0049416e
    SAR EDX,0x1f                        ; 00494170
    SHL EDX,0x3                         ; 00494173
    SBB EAX,EDX                         ; 00494176
    SAR EAX,0x3                         ; 00494178
    MOV ESI,dword ptr [0x0061b49c]      ; 0049417b | DAT_0061b49c
    XOR EBX,EBX                         ; 00494181
    MOV EBP,EAX                         ; 00494183
    TEST ESI,ESI                        ; 00494185
    JLE 0x004941c1                      ; 00494187
        ;   XREF to: 004941c1 (CONDITIONAL_JUMP)  ; LAB_004941c1
    XOR EDX,EDX                         ; 00494189
    MOV EAX,dword ptr [EDX + 0x1c4354c] ; 0049418b | DAT_01c4354c | DAT_01c43550
        ;   Label: LAB_0049418b
    TEST EAX,EAX                        ; 00494191
    JZ 0x004941b3                       ; 00494193
        ;   XREF to: 004941b3 (CONDITIONAL_JUMP)  ; LAB_004941b3
    MOV ECX,dword ptr [ESP + EDX*0x1 + 0x8] ; 00494195
    TEST ECX,ECX                        ; 00494199
    JZ 0x004941b3                       ; 0049419b
        ;   XREF to: 004941b3 (CONDITIONAL_JUMP)  ; LAB_004941b3
    MOV ESI,ECX                         ; 0049419d
    MOV EDI,EAX                         ; 0049419f
    MOV ECX,EBP                         ; 004941a1
    PUSH EDI                            ; 004941a3
    MOV EAX,ECX                         ; 004941a4
    SHR ECX,0x2                         ; 004941a6
    MOVSD.REP ES:EDI,ESI                ; 004941a9
    MOV CL,AL                           ; 004941ab
    AND CL,0x3                          ; 004941ad
    MOVSB.REP ES:EDI,ESI                ; 004941b0
    POP EDI                             ; 004941b2
    MOV EDI,dword ptr [0x0061b49c]      ; 004941b3 | DAT_0061b49c
        ;   Label: LAB_004941b3
    INC EBX                             ; 004941b9
    ADD EDX,0x4                         ; 004941ba
    CMP EBX,EDI                         ; 004941bd
    JL 0x0049418b                       ; 004941bf
        ;   XREF to: 0049418b (CONDITIONAL_JUMP)  ; LAB_0049418b
    PUSH 0x1                            ; 004941c1
        ;   Label: LAB_004941c1
    CALL FUN_00581fa0                   ; 004941c3
        ;   XREF to: 00581fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00581fa0()
    ADD ESP,0x4                         ; 004941c8
    POP ESI                             ; 004941cb
    POP EDI                             ; 004941cc
    ADD ESP,0x12c0                      ; 004941cd
        ;   Label: LAB_004941cd
    POP EBP                             ; 004941d3
    POP EBX                             ; 004941d4
    RET                                 ; 004941d5

