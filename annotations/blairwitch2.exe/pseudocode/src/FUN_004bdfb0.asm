; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bdfb0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x550]:4  local_550
; undefined        Stack[-0x54c]:1  local_54c
; undefined1       Stack[-0x54b]:1  local_54b
; undefined        Stack[-0x14c]:1  local_14c
; undefined1       Stack[-0x14b]:1  local_14b
; undefined        Stack[-0x4c]:1  local_4c
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
;   FUN_004fcb00 at 004fcca7
;
; Referenced Globals:
;   undefined4 s_Y_To_be_continued_005d89b9+2
;   TerminatedCString s_test_logo_005d89ce
;   TerminatedCString s_Mission_time_005d89d8
;   undefined1 DAT_005d89e5
;   undefined1 DAT_005d89e6
;   undefined1 DAT_005d89e7
;   TerminatedCString s_s_2d_2d_2d_2d_005d89e8
;   TerminatedCString s_Total_body_count_005d89fa
;   undefined1 DAT_005d8a0b
;   undefined1 DAT_005d8a0c
;   undefined1 DAT_005d8a0d
;   undefined1 DAT_005d8a0e
;   undefined4 DAT_005d8a13
;   undefined4 DAT_005d8a1b
;   undefined4 DAT_005d8a23
;   ... and 7 more
;
; Called Functions:
;   FUN_004032b0
;   FUN_00406da0
;   FUN_0040d420
;   FUN_0040d440
;   FUN_0040d5a0
;   FUN_0040d900
;   FUN_004a93a0
;   FUN_004ab2b0
;   FUN_004ab560
;   FUN_004b3000
;   FUN_004b3010
;   FUN_004be430
;   FUN_0050fe80
;   FUN_0055b1f0
;   FUN_00589560
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bdfb0
        ;   Label: FUN_004bdfb0
    PUSH ESI                            ; 004bdfb1
    PUSH EDI                            ; 004bdfb2
    PUSH EBP                            ; 004bdfb3
    MOV EBP,ESP                         ; 004bdfb4
    SUB ESP,0x540                       ; 004bdfb6
    AND ESP,0xfffffff8                  ; 004bdfbc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bdfbf
    CMP dword ptr [EAX + 0x278],0x2     ; 004bdfc2
    JNZ 0x004be089                      ; 004bdfc9
        ;   XREF to: 004be089 (CONDITIONAL_JUMP)  ; LAB_004be089
    MOV EAX,[0x01fc797c]                ; 004bdfcf | DAT_01fc797c
    MOV EDI,dword ptr [0x01511cc0]      ; 004bdfd4 | DAT_01511cc0
    CMP EAX,0x1e0                       ; 004bdfda
    JGE 0x004bdfe7                      ; 004bdfdf
        ;   XREF to: 004bdfe7 (CONDITIONAL_JUMP)  ; LAB_004bdfe7
    MOV EDI,dword ptr [0x01511cc4]      ; 004bdfe1 | DAT_01511cc4
    PUSH 0x58                           ; 004bdfe7
        ;   Label: LAB_004bdfe7
    PUSH EDI                            ; 004bdfe9
    CALL FUN_004ab560                   ; 004bdfea
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab560()
    ADD ESP,0x8                         ; 004bdfef
    MOV EDX,dword ptr [EBP + 0x14]      ; 004bdff2
    PUSH EDX                            ; 004bdff5
    MOV ESI,EAX                         ; 004bdff6
    CALL FUN_004b3000                   ; 004bdff8
        ;   XREF to: 004b3000 (UNCONDITIONAL_CALL)  ; undefined FUN_004b3000()
    ADD ESP,0x4                         ; 004bdffd
    XOR ECX,ECX                         ; 004be000
    MOV dword ptr [ESP],ECX             ; 004be002
    FLD float ptr [ESP]                 ; 004be005
        ;   Label: LAB_004be005
    FLDZ                                ; 004be008
    FCOMPP                              ; 004be00a
    FNSTSW AX                           ; 004be00c
    SAHF                                ; 004be00e
    JNC 0x004be071                      ; 004be00f
        ;   XREF to: 004be071 (CONDITIONAL_JUMP)  ; LAB_004be071
    CALL FUN_0055b1f0                   ; 004be011
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b1f0()
    PUSH 0x5d89bb                       ; 004be016 | s_Y_To_be_continued_005d89b9+2
    CALL FUN_0050fe80                   ; 004be01b
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    MOV EDX,dword ptr [0x006141bc]      ; 004be020 | DAT_006141bc
    ADD ESP,0x4                         ; 004be026
    SUB EDX,ESI                         ; 004be029
    PUSH EAX                            ; 004be02b
    MOV EAX,EDX                         ; 004be02c
    SAR EDX,0x1f                        ; 004be02e
    SUB EAX,EDX                         ; 004be031
    SAR EAX,0x1                         ; 004be033
    PUSH 0x0                            ; 004be035
    PUSH 0xf8                           ; 004be037
    PUSH EAX                            ; 004be03c
    MOV EAX,[0x006141b8]                ; 004be03d | DAT_006141b8
    DEC EAX                             ; 004be042
    PUSH EAX                            ; 004be043
    PUSH 0x0                            ; 004be044
    PUSH EDI                            ; 004be046
    CALL FUN_004a93a0                   ; 004be047
        ;   XREF to: 004a93a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a93a0()
    ADD ESP,0x1c                        ; 004be04c
    CALL FUN_00589560                   ; 004be04f
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; undefined FUN_00589560()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004be054
    PUSH EAX                            ; 004be057
    CALL FUN_004b3010                   ; 004be058
        ;   XREF to: 004b3010 (UNCONDITIONAL_CALL)  ; undefined FUN_004b3010()
    ADD ESP,0x4                         ; 004be05d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004be060
    FLD float ptr [ESP]                 ; 004be063
    FSUB float ptr [EAX + 0x284]        ; 004be066
    FSTP float ptr [ESP]                ; 004be06c
    JMP 0x004be005                      ; 004be06f
        ;   XREF to: 004be005 (UNCONDITIONAL_JUMP)  ; LAB_004be005
    MOV EBX,dword ptr [EBP + 0x14]      ; 004be071
        ;   Label: LAB_004be071
    CALL FUN_004032b0                   ; 004be074
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    PUSH EBX                            ; 004be079
    CALL FUN_004be430                   ; 004be07a
        ;   XREF to: 004be430 (UNCONDITIONAL_CALL)  ; undefined FUN_004be430()
    ADD ESP,0x4                         ; 004be07f
    MOV ESP,EBP                         ; 004be082
    POP EBP                             ; 004be084
    POP EDI                             ; 004be085
    POP ESI                             ; 004be086
    POP EBX                             ; 004be087
    RET                                 ; 004be088
    FLD float ptr [EAX + 0x270]         ; 004be089
        ;   Label: LAB_004be089
    FADD float ptr [EAX + 0x268]        ; 004be08f
    MOV EDX,dword ptr [EBP + 0x14]      ; 004be095
    FSTP float ptr [EAX + 0x268]        ; 004be098
    MOV EAX,dword ptr [EAX + 0x26c]     ; 004be09e
    MOV ECX,dword ptr [EDX + 0x274]     ; 004be0a4
    ADD ECX,EAX                         ; 004be0aa
    LEA EAX,[ESP + 0x504]               ; 004be0ac
    PUSH EAX                            ; 004be0b3
    MOV dword ptr [EDX + 0x274],ECX     ; 004be0b4
    CALL FUN_0040d420                   ; 004be0ba
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d420()
    ADD ESP,0x4                         ; 004be0bf
    PUSH 0x1e0                          ; 004be0c2
    PUSH 0x280                          ; 004be0c7
    PUSH 0x5d89ce                       ; 004be0cc | = "test_logo"
    LEA EAX,[ESP + 0x510]               ; 004be0d1
    PUSH EAX                            ; 004be0d8
    CALL FUN_0040d5a0                   ; 004be0d9
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d5a0()
    ADD ESP,0x10                        ; 004be0de
    CALL FUN_0055b1f0                   ; 004be0e1
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b1f0()
    PUSH 0xffff                         ; 004be0e6
    PUSH 0x0                            ; 004be0eb
    PUSH 0x0                            ; 004be0ed
    LEA EAX,[ESP + 0x510]               ; 004be0ef
    PUSH EAX                            ; 004be0f6
    CALL FUN_0040d900                   ; 004be0f7
        ;   XREF to: 0040d900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d900()
    ADD ESP,0x10                        ; 004be0fc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004be0ff
    FLD float ptr [EAX + 0x268]         ; 004be102
    FLD ST0                             ; 004be108
    FMUL double ptr [0x005d8a13]        ; 004be10a | DAT_005d8a13
    CALL FUN_005b7ff0                   ; 004be110
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x528]       ; 004be115
    MOV EAX,dword ptr [ESP + 0x528]     ; 004be11c
    MOV dword ptr [ESP + 0x53c],EAX     ; 004be123
    FILD dword ptr [ESP + 0x53c]        ; 004be12a
    FMUL double ptr [0x005d8a1b]        ; 004be131 | DAT_005d8a1b
    FSUBP                               ; 004be137
    MOV EAX,dword ptr [EBP + 0x14]      ; 004be139
    FST float ptr [EAX + 0x268]         ; 004be13c
    FLD ST0                             ; 004be142
    FMUL double ptr [0x005d8a23]        ; 004be144 | DAT_005d8a23
    CALL FUN_005b7ff0                   ; 004be14a
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x520]       ; 004be14f
    MOV EAX,dword ptr [ESP + 0x520]     ; 004be156
    MOV dword ptr [ESP + 0x53c],EAX     ; 004be15d
    FILD dword ptr [ESP + 0x53c]        ; 004be164
    FMUL double ptr [0x005d8a2b]        ; 004be16b | DAT_005d8a2b
    FSUBP                               ; 004be171
    MOV EAX,dword ptr [EBP + 0x14]      ; 004be173
    FST float ptr [EAX + 0x268]         ; 004be176
    CALL FUN_005b7ff0                   ; 004be17c
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x538]       ; 004be181
    MOV EAX,dword ptr [ESP + 0x538]     ; 004be188
    MOV dword ptr [ESP + 0x53c],EAX     ; 004be18f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004be196
    FILD dword ptr [ESP + 0x53c]        ; 004be199
    FSUBR float ptr [EAX + 0x268]       ; 004be1a0
    FST float ptr [EAX + 0x268]         ; 004be1a6
    FMUL double ptr [0x005d8a33]        ; 004be1ac | DAT_005d8a33
    PUSH 0x5d89d8                       ; 004be1b2 | = "Mission time"
    CALL FUN_005b7ff0                   ; 004be1b7
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x528]       ; 004be1bc
    CALL FUN_0050fe80                   ; 004be1c3
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004be1c8
    LEA EDI,[ESP + 0x4]                 ; 004be1cb
    MOV ESI,EAX                         ; 004be1cf
    PUSH EDI                            ; 004be1d1
    MOV AL,byte ptr [ESI]               ; 004be1d2
        ;   Label: LAB_004be1d2
    MOV byte ptr [EDI],AL               ; 004be1d4
    CMP AL,0x0                          ; 004be1d6
    JZ 0x004be1ea                       ; 004be1d8
        ;   XREF to: 004be1ea (CONDITIONAL_JUMP)  ; LAB_004be1ea
    MOV AL,byte ptr [ESI + 0x1]         ; 004be1da
    ADD ESI,0x2                         ; 004be1dd
    MOV byte ptr [EDI + 0x1],AL         ; 004be1e0
    ADD EDI,0x2                         ; 004be1e3
    CMP AL,0x0                          ; 004be1e6
    JNZ 0x004be1d2                      ; 004be1e8
        ;   XREF to: 004be1d2 (CONDITIONAL_JUMP)  ; LAB_004be1d2
    POP EDI                             ; 004be1ea
        ;   Label: LAB_004be1ea
    MOV ESI,0x5d89e5                    ; 004be1eb | DAT_005d89e5
    LEA EDI,[ESP + 0x4]                 ; 004be1f0
    MOV EBX,dword ptr [ESP + 0x524]     ; 004be1f4
    PUSH EDI                            ; 004be1fb
    SUB ECX,ECX                         ; 004be1fc
    DEC ECX                             ; 004be1fe
    MOV AL,0x0                          ; 004be1ff
    SCASB.REPNE ES:EDI                  ; 004be201
    DEC EDI                             ; 004be203
    MOV AL,byte ptr [ESI]               ; 004be204 | DAT_005d89e5 | DAT_005d89e7
        ;   Label: LAB_004be204
    MOV byte ptr [EDI],AL               ; 004be206
    CMP AL,0x0                          ; 004be208
    JZ 0x004be21c                       ; 004be20a
        ;   XREF to: 004be21c (CONDITIONAL_JUMP)  ; LAB_004be21c
    MOV AL,byte ptr [ESI + 0x1]         ; 004be20c | DAT_005d89e6 | = "%2d:%2d:%2d.%2d\n\n"
    ADD ESI,0x2                         ; 004be20f
    MOV byte ptr [EDI + 0x1],AL         ; 004be212
    ADD EDI,0x2                         ; 004be215
    CMP AL,0x0                          ; 004be218
    JNZ 0x004be204                      ; 004be21a
        ;   XREF to: 004be204 (CONDITIONAL_JUMP)  ; LAB_004be204
    POP EDI                             ; 004be21c
        ;   Label: LAB_004be21c
    PUSH EBX                            ; 004be21d
    MOV ESI,dword ptr [ESP + 0x53c]     ; 004be21e
    PUSH ESI                            ; 004be225
    MOV EDI,dword ptr [ESP + 0x528]     ; 004be226
    PUSH EDI                            ; 004be22d
    MOV EAX,dword ptr [ESP + 0x534]     ; 004be22e
    PUSH EAX                            ; 004be235
    PUSH 0x5d89e8                       ; 004be236 | = "%2d:%2d:%2d.%2d\n\n"
    LEA EAX,[ESP + 0x418]               ; 004be23b
    PUSH EAX                            ; 004be242
    XOR ESI,ESI                         ; 004be243
    CALL FUN_005b7790                   ; 004be245
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    MOV DL,0x30                         ; 004be24a
    ADD ESP,0x18                        ; 004be24c
    LEA EDI,[ESP + 0x404]               ; 004be24f
        ;   Label: LAB_004be24f
    SUB ECX,ECX                         ; 004be256
    DEC ECX                             ; 004be258
    XOR EAX,EAX                         ; 004be259
    SCASB.REPNE ES:EDI                  ; 004be25b
    NOT ECX                             ; 004be25d
    DEC ECX                             ; 004be25f
    CMP ESI,ECX                         ; 004be260
    JNC 0x004be27a                      ; 004be262
        ;   XREF to: 004be27a (CONDITIONAL_JUMP)  ; LAB_004be27a
    CMP byte ptr [ESP + ESI*0x1 + 0x404],0x20 ; 004be264
    JZ 0x004be271                       ; 004be26c
        ;   XREF to: 004be271 (CONDITIONAL_JUMP)  ; LAB_004be271
    INC ESI                             ; 004be26e
        ;   Label: LAB_004be26e
    JMP 0x004be24f                      ; 004be26f
        ;   XREF to: 004be24f (UNCONDITIONAL_JUMP)  ; LAB_004be24f
    MOV byte ptr [ESP + ESI*0x1 + 0x404],DL ; 004be271
        ;   Label: LAB_004be271
    JMP 0x004be26e                      ; 004be278
        ;   XREF to: 004be26e (UNCONDITIONAL_JUMP)  ; LAB_004be26e
    LEA ESI,[ESP + 0x404]               ; 004be27a
        ;   Label: LAB_004be27a
    LEA EDI,[ESP + 0x4]                 ; 004be281
    PUSH EDI                            ; 004be285
    SUB ECX,ECX                         ; 004be286
    DEC ECX                             ; 004be288
    MOV AL,0x0                          ; 004be289
    SCASB.REPNE ES:EDI                  ; 004be28b
    DEC EDI                             ; 004be28d
    MOV AL,byte ptr [ESI]               ; 004be28e
        ;   Label: LAB_004be28e
    MOV byte ptr [EDI],AL               ; 004be290
    CMP AL,0x0                          ; 004be292
    JZ 0x004be2a6                       ; 004be294
        ;   XREF to: 004be2a6 (CONDITIONAL_JUMP)  ; LAB_004be2a6
    MOV AL,byte ptr [ESI + 0x1]         ; 004be296
    ADD ESI,0x2                         ; 004be299
    MOV byte ptr [EDI + 0x1],AL         ; 004be29c
    ADD EDI,0x2                         ; 004be29f
    CMP AL,0x0                          ; 004be2a2
    JNZ 0x004be28e                      ; 004be2a4
        ;   XREF to: 004be28e (CONDITIONAL_JUMP)  ; LAB_004be28e
    POP EDI                             ; 004be2a6
        ;   Label: LAB_004be2a6
    PUSH 0x5d89fa                       ; 004be2a7 | = "Total body count"
    CALL FUN_0050fe80                   ; 004be2ac
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004be2b1
    LEA EDI,[ESP + 0x4]                 ; 004be2b4
    MOV ESI,EAX                         ; 004be2b8
    PUSH EDI                            ; 004be2ba
    SUB ECX,ECX                         ; 004be2bb
    DEC ECX                             ; 004be2bd
    MOV AL,0x0                          ; 004be2be
    SCASB.REPNE ES:EDI                  ; 004be2c0
    DEC EDI                             ; 004be2c2
    MOV AL,byte ptr [ESI]               ; 004be2c3
        ;   Label: LAB_004be2c3
    MOV byte ptr [EDI],AL               ; 004be2c5
    CMP AL,0x0                          ; 004be2c7
    JZ 0x004be2db                       ; 004be2c9
        ;   XREF to: 004be2db (CONDITIONAL_JUMP)  ; LAB_004be2db
    MOV AL,byte ptr [ESI + 0x1]         ; 004be2cb
    ADD ESI,0x2                         ; 004be2ce
    MOV byte ptr [EDI + 0x1],AL         ; 004be2d1
    ADD EDI,0x2                         ; 004be2d4
    CMP AL,0x0                          ; 004be2d7
    JNZ 0x004be2c3                      ; 004be2d9
        ;   XREF to: 004be2c3 (CONDITIONAL_JUMP)  ; LAB_004be2c3
    POP EDI                             ; 004be2db
        ;   Label: LAB_004be2db
    MOV ESI,0x5d8a0b                    ; 004be2dc | DAT_005d8a0b
    LEA EDI,[ESP + 0x4]                 ; 004be2e1
    PUSH EDI                            ; 004be2e5
    SUB ECX,ECX                         ; 004be2e6
    DEC ECX                             ; 004be2e8
    MOV AL,0x0                          ; 004be2e9
    SCASB.REPNE ES:EDI                  ; 004be2eb
    DEC EDI                             ; 004be2ed
    MOV AL,byte ptr [ESI]               ; 004be2ee | DAT_005d8a0b | DAT_005d8a0d
        ;   Label: LAB_004be2ee
    MOV byte ptr [EDI],AL               ; 004be2f0
    CMP AL,0x0                          ; 004be2f2
    JZ 0x004be306                       ; 004be2f4
        ;   XREF to: 004be306 (CONDITIONAL_JUMP)  ; LAB_004be306
    MOV AL,byte ptr [ESI + 0x1]         ; 004be2f6 | DAT_005d8a0c | DAT_005d8a0e
    ADD ESI,0x2                         ; 004be2f9
    MOV byte ptr [EDI + 0x1],AL         ; 004be2fc
    ADD EDI,0x2                         ; 004be2ff
    CMP AL,0x0                          ; 004be302
    JNZ 0x004be2ee                      ; 004be304
        ;   XREF to: 004be2ee (CONDITIONAL_JUMP)  ; LAB_004be2ee
    POP EDI                             ; 004be306
        ;   Label: LAB_004be306
    MOV EAX,dword ptr [EBP + 0x14]      ; 004be307
    MOV EBX,dword ptr [EAX + 0x274]     ; 004be30a
    PUSH EBX                            ; 004be310
    PUSH 0x5d8a0e                       ; 004be311 | DAT_005d8a0e
    LEA EAX,[ESP + 0x40c]               ; 004be316
    PUSH EAX                            ; 004be31d
    CALL FUN_005b7790                   ; 004be31e
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 004be323
    LEA ESI,[ESP + 0x404]               ; 004be326
    LEA EDI,[ESP + 0x4]                 ; 004be32d
    PUSH EDI                            ; 004be331
    SUB ECX,ECX                         ; 004be332
    DEC ECX                             ; 004be334
    MOV AL,0x0                          ; 004be335
    SCASB.REPNE ES:EDI                  ; 004be337
    DEC EDI                             ; 004be339
    MOV AL,byte ptr [ESI]               ; 004be33a
        ;   Label: LAB_004be33a
    MOV byte ptr [EDI],AL               ; 004be33c
    CMP AL,0x0                          ; 004be33e
    JZ 0x004be352                       ; 004be340
        ;   XREF to: 004be352 (CONDITIONAL_JUMP)  ; LAB_004be352
    MOV AL,byte ptr [ESI + 0x1]         ; 004be342
    ADD ESI,0x2                         ; 004be345
    MOV byte ptr [EDI + 0x1],AL         ; 004be348
    ADD EDI,0x2                         ; 004be34b
    CMP AL,0x0                          ; 004be34e
    JNZ 0x004be33a                      ; 004be350
        ;   XREF to: 004be33a (CONDITIONAL_JUMP)  ; LAB_004be33a
    POP EDI                             ; 004be352
        ;   Label: LAB_004be352
    MOV EAX,[0x01511cc0]                ; 004be353 | DAT_01511cc0
    PUSH 0xffff                         ; 004be358
    MOV dword ptr [ESP + 0x538],EAX     ; 004be35d
    CALL FUN_00406da0                   ; 004be364
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; undefined FUN_00406da0()
    ADD ESP,0x4                         ; 004be369
    PUSH 0xc0                           ; 004be36c
    PUSH 0x100                          ; 004be371
    PUSH 0x14                           ; 004be376
    PUSH 0x1cb2520                      ; 004be378
    LEA EAX,[ESP + 0x14]                ; 004be37d
    PUSH EAX                            ; 004be381
    MOV ESI,dword ptr [ESP + 0x548]     ; 004be382
    PUSH ESI                            ; 004be389
    CALL FUN_004ab2b0                   ; 004be38a
        ;   XREF to: 004ab2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab2b0()
    ADD ESP,0x18                        ; 004be38f
    PUSH 0x58                           ; 004be392
    XOR EDI,EDI                         ; 004be394
    PUSH ESI                            ; 004be396
    MOV EBX,EAX                         ; 004be397
    MOV dword ptr [ESP + 0x534],EAX     ; 004be399
    CALL FUN_004ab560                   ; 004be3a0
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab560()
    ADD ESP,0x8                         ; 004be3a5
    MOV ESI,0xf0                        ; 004be3a8
    MOV dword ptr [ESP + 0x530],EAX     ; 004be3ad
    TEST EBX,EBX                        ; 004be3b4
    JLE 0x004be400                      ; 004be3b6
        ;   XREF to: 004be400 (CONDITIONAL_JUMP)  ; LAB_004be400
    MOV EBX,0x1cb2520                   ; 004be3b8
    PUSH EBX                            ; 004be3bd
        ;   Label: LAB_004be3bd
    PUSH 0x0                            ; 004be3be
    PUSH 0xf8                           ; 004be3c0
    PUSH ESI                            ; 004be3c5
    PUSH 0x27f                          ; 004be3c6
    PUSH 0x1c0                          ; 004be3cb
    MOV EAX,dword ptr [ESP + 0x54c]     ; 004be3d0
    PUSH EAX                            ; 004be3d7
    INC EDI                             ; 004be3d8
    CALL FUN_004a93a0                   ; 004be3d9
        ;   XREF to: 004a93a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a93a0()
    ADD ESP,0x1c                        ; 004be3de
    ADD EBX,0x100                       ; 004be3e1
    MOV EDX,dword ptr [ESP + 0x530]     ; 004be3e7
    MOV ECX,dword ptr [ESP + 0x52c]     ; 004be3ee
    ADD ESI,EDX                         ; 004be3f5
    CMP EDI,ECX                         ; 004be3f7
    JL 0x004be3bd                       ; 004be3f9
        ;   XREF to: 004be3bd (CONDITIONAL_JUMP)  ; LAB_004be3bd
    LEA EAX,[EAX]                       ; 004be3fb
    MOV ECX,ECX                         ; 004be3fe
    CALL FUN_00589560                   ; 004be400
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; undefined FUN_00589560()
        ;   Label: LAB_004be400
    CALL FUN_004032b0                   ; 004be405
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    CALL FUN_0058ead0                   ; 004be40a
        ;   XREF to: 0058ead0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058ead0()
    CALL FUN_004032b0                   ; 004be40f
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    PUSH 0x0                            ; 004be414
    LEA EAX,[ESP + 0x508]               ; 004be416
    PUSH EAX                            ; 004be41d
    CALL FUN_0040d440                   ; 004be41e
        ;   XREF to: 0040d440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d440()
    ADD ESP,0x8                         ; 004be423
    MOV ESP,EBP                         ; 004be426
    POP EBP                             ; 004be428
    POP EDI                             ; 004be429
    POP ESI                             ; 004be42a
    POP EBX                             ; 004be42b
    RET                                 ; 004be42c

