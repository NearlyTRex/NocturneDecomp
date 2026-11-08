; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049a0d0(int *param_1,char *param_2,char *param_3)
;
; Local Variables:
; undefined1       Stack[-0x844]:1  local_844
; undefined        Stack[-0x528]:1  local_528
; undefined        Stack[-0x414]:1  local_414
; undefined        Stack[-0x310]:1  local_310
; undefined        Stack[-0x30f]:1  local_30f
; undefined        Stack[-0x210]:1  local_210
; undefined        Stack[-0x110]:1  local_110
; undefined1       Stack[-0x10f]:1  local_10f
;
; XREF[1]:
;   FUN_0057cb30 at 0057cb48
;
; Referenced Globals:
;   TerminatedCString s_s_s_005dc5f7
;   undefined4 DAT_00622a6c
;
; Called Functions:
;   FUN_00479320
;   FUN_00479340
;   FUN_00479360
;   FUN_004793e0
;   FUN_00479460
;   FUN_00479580
;   FUN_004795b0
;   FUN_004994d0
;   FUN_004998a0
;   FUN_00499960
;   FUN_0053cb00
;   FUN_0053cb50
;   FUN_005bfb40
;   FUN_005c04e0
;   FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a0d0
        ;   Label: FUN_0049a0d0
    PUSH ESI                            ; 0049a0d1
    PUSH EDI                            ; 0049a0d2
    PUSH EBP                            ; 0049a0d3
    SUB ESP,0x834                       ; 0049a0d4
    MOV EBP,dword ptr [ESP + 0x848]     ; 0049a0da
    MOV EDI,dword ptr [ESP + 0x84c]     ; 0049a0e1
    MOV ESI,dword ptr [ESP + 0x850]     ; 0049a0e8
    TEST EDI,EDI                        ; 0049a0ef
    JZ 0x0049a29c                       ; 0049a0f1
        ;   XREF to: 0049a29c (CONDITIONAL_JUMP)  ; LAB_0049a29c
    CMP byte ptr [EDI],0x0              ; 0049a0f7
    JZ 0x0049a29c                       ; 0049a0fa
        ;   XREF to: 0049a29c (CONDITIONAL_JUMP)  ; LAB_0049a29c
    PUSH ESI                            ; 0049a100
    PUSH EDI                            ; 0049a101
    PUSH 0x5dc5f7                       ; 0049a102 | = "%s\\%s"
    LEA EAX,[ESP + 0x740]               ; 0049a107
    PUSH EAX                            ; 0049a10e
    CALL FUN_005bfb40                   ; 0049a10f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x10                        ; 0049a114
    MOV EDX,dword ptr [0x00622a6c]      ; 0049a117 | DAT_00622a6c
        ;   Label: LAB_0049a117
    TEST EDX,EDX                        ; 0049a11d
    JZ 0x0049a1f1                       ; 0049a11f
        ;   XREF to: 0049a1f1 (CONDITIONAL_JUMP)  ; LAB_0049a1f1
    MOV EAX,ESP                         ; 0049a125
    PUSH EAX                            ; 0049a127
    LEA EAX,[ESP + 0x738]               ; 0049a128
    PUSH EAX                            ; 0049a12f
    PUSH EDX                            ; 0049a130
    CALL FUN_0053cb00                   ; 0049a131
        ;   XREF to: 0053cb00 (UNCONDITIONAL_CALL)  ; undefined FUN_0053cb00()
    ADD ESP,0xc                         ; 0049a136
    CMP byte ptr [ESP],0x0              ; 0049a139
    JZ 0x0049a1f1                       ; 0049a13d
        ;   XREF to: 0049a1f1 (CONDITIONAL_JUMP)  ; LAB_0049a1f1
    LEA EAX,[ESP + 0x534]               ; 0049a143
        ;   Label: LAB_0049a143
    PUSH EAX                            ; 0049a14a
    LEA EAX,[ESP + 0x638]               ; 0049a14b
    PUSH EAX                            ; 0049a152
    PUSH 0x0                            ; 0049a153
    PUSH 0x0                            ; 0049a155
    LEA EAX,[ESP + 0x10]                ; 0049a157
    PUSH EAX                            ; 0049a15b
    CALL FUN_00479580                   ; 0049a15c
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; undefined FUN_00479580()
    ADD ESP,0x14                        ; 0049a161
    CMP byte ptr [ESP + 0x534],0x2e     ; 0049a164
    JNZ 0x0049a198                      ; 0049a16c
        ;   XREF to: 0049a198 (CONDITIONAL_JUMP)  ; LAB_0049a198
    LEA EDI,[ESP + 0x534]               ; 0049a16e
    SUB ECX,ECX                         ; 0049a175
    DEC ECX                             ; 0049a177
    XOR EAX,EAX                         ; 0049a178
    SCASB.REPNE ES:EDI                  ; 0049a17a
    NOT ECX                             ; 0049a17c
    DEC ECX                             ; 0049a17e
    PUSH ECX                            ; 0049a17f
    LEA EAX,[ESP + 0x539]               ; 0049a180
    PUSH EAX                            ; 0049a187
    LEA EAX,[ESP + 0x53c]               ; 0049a188
    PUSH EAX                            ; 0049a18f
    CALL FUN_005c25d0                   ; 0049a190
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    ADD ESP,0xc                         ; 0049a195
    LEA EAX,[ESP + 0x534]               ; 0049a198
        ;   Label: LAB_0049a198
    PUSH EAX                            ; 0049a19f
    LEA EAX,[ESP + 0x638]               ; 0049a1a0
    PUSH EAX                            ; 0049a1a7
    PUSH 0x0                            ; 0049a1a8
    PUSH 0x0                            ; 0049a1aa
    LEA EAX,[ESP + 0x440]               ; 0049a1ac
    PUSH EAX                            ; 0049a1b3
    CALL FUN_004795b0                   ; 0049a1b4
        ;   XREF to: 004795b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004795b0()
    ADD ESP,0x14                        ; 0049a1b9
    LEA EAX,[ESP + 0x430]               ; 0049a1bc
    PUSH EAX                            ; 0049a1c3
    PUSH EBP                            ; 0049a1c4
    CALL FUN_00499960                   ; 0049a1c5
        ;   XREF to: 00499960 (UNCONDITIONAL_CALL)  ; undefined FUN_00499960()
    ADD ESP,0x8                         ; 0049a1ca
    TEST EAX,EAX                        ; 0049a1cd
    JL 0x0049a2c2                       ; 0049a1cf
        ;   XREF to: 0049a2c2 (CONDITIONAL_JUMP)  ; LAB_0049a2c2
    MOV EAX,ESP                         ; 0049a1d5
        ;   Label: LAB_0049a1d5
    PUSH EAX                            ; 0049a1d7
    MOV EBX,dword ptr [0x00622a6c]      ; 0049a1d8 | DAT_00622a6c
    PUSH EBX                            ; 0049a1de
    CALL FUN_0053cb50                   ; 0049a1df
        ;   XREF to: 0053cb50 (UNCONDITIONAL_CALL)  ; undefined FUN_0053cb50()
    ADD ESP,0x8                         ; 0049a1e4
    CMP byte ptr [ESP],0x0              ; 0049a1e7
    JNZ 0x0049a143                      ; 0049a1eb
        ;   XREF to: 0049a143 (CONDITIONAL_JUMP)  ; LAB_0049a143
    LEA EAX,[ESP + 0x31c]               ; 0049a1f1
        ;   Label: LAB_0049a1f1
    PUSH EAX                            ; 0049a1f8
    MOV ESI,dword ptr [EBP]             ; 0049a1f9
    CALL FUN_00479320                   ; 0049a1fc
        ;   XREF to: 00479320 (UNCONDITIONAL_CALL)  ; undefined FUN_00479320()
    ADD ESP,0x4                         ; 0049a201
    LEA EAX,[ESP + 0x734]               ; 0049a204
    PUSH EAX                            ; 0049a20b
    LEA EAX,[ESP + 0x320]               ; 0049a20c
    PUSH EAX                            ; 0049a213
    CALL FUN_00479360                   ; 0049a214
        ;   XREF to: 00479360 (UNCONDITIONAL_CALL)  ; undefined FUN_00479360()
    ADD ESP,0x8                         ; 0049a219
    CMP byte ptr [ESP + 0x31c],0x0      ; 0049a21c
    JZ 0x0049a26f                       ; 0049a224
        ;   XREF to: 0049a26f (CONDITIONAL_JUMP)  ; LAB_0049a26f
    XOR EBX,EBX                         ; 0049a226
        ;   Label: LAB_0049a226
    XOR EDI,EDI                         ; 0049a228
    TEST ESI,ESI                        ; 0049a22a
    JLE 0x0049a2e1                      ; 0049a22c
        ;   XREF to: 0049a2e1 (CONDITIONAL_JUMP)  ; LAB_0049a2e1
    LEA EAX,[ESP + 0x31c]               ; 0049a232
        ;   Label: LAB_0049a232
    PUSH EAX                            ; 0049a239
    PUSH EBX                            ; 0049a23a
    PUSH EBP                            ; 0049a23b
    CALL FUN_004998a0                   ; 0049a23c
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004998a0()
    ADD ESP,0x8                         ; 0049a241
    PUSH EAX                            ; 0049a244
    CALL FUN_005c04e0                   ; 0049a245
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 0049a24a
    TEST EAX,EAX                        ; 0049a24d
    JNZ 0x0049a2d8                      ; 0049a24f
        ;   XREF to: 0049a2d8 (CONDITIONAL_JUMP)  ; LAB_0049a2d8
    LEA EAX,[ESP + 0x31c]               ; 0049a255
        ;   Label: LAB_0049a255
    PUSH EAX                            ; 0049a25c
    CALL FUN_004793e0                   ; 0049a25d
        ;   XREF to: 004793e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004793e0()
    ADD ESP,0x4                         ; 0049a262
    CMP byte ptr [ESP + 0x31c],0x0      ; 0049a265
    JNZ 0x0049a226                      ; 0049a26d
        ;   XREF to: 0049a226 (CONDITIONAL_JUMP)  ; LAB_0049a226
    LEA EAX,[ESP + 0x31c]               ; 0049a26f
        ;   Label: LAB_0049a26f
    PUSH EAX                            ; 0049a276
    CALL FUN_00479460                   ; 0049a277
        ;   XREF to: 00479460 (UNCONDITIONAL_CALL)  ; undefined FUN_00479460()
    ADD ESP,0x4                         ; 0049a27c
    PUSH 0x0                            ; 0049a27f
    LEA EAX,[ESP + 0x320]               ; 0049a281
    PUSH EAX                            ; 0049a288
    CALL FUN_00479340                   ; 0049a289
        ;   XREF to: 00479340 (UNCONDITIONAL_CALL)  ; undefined FUN_00479340()
    ADD ESP,0x8                         ; 0049a28e
    ADD ESP,0x834                       ; 0049a291
    POP EBP                             ; 0049a297
    POP EDI                             ; 0049a298
    POP ESI                             ; 0049a299
    POP EBX                             ; 0049a29a
    RET                                 ; 0049a29b
    LEA EDI,[ESP + 0x734]               ; 0049a29c
        ;   Label: LAB_0049a29c
    PUSH EDI                            ; 0049a2a3
    MOV AL,byte ptr [ESI]               ; 0049a2a4
        ;   Label: LAB_0049a2a4
    MOV byte ptr [EDI],AL               ; 0049a2a6
    CMP AL,0x0                          ; 0049a2a8
    JZ 0x0049a2bc                       ; 0049a2aa
        ;   XREF to: 0049a2bc (CONDITIONAL_JUMP)  ; LAB_0049a2bc
    MOV AL,byte ptr [ESI + 0x1]         ; 0049a2ac
    ADD ESI,0x2                         ; 0049a2af
    MOV byte ptr [EDI + 0x1],AL         ; 0049a2b2
    ADD EDI,0x2                         ; 0049a2b5
    CMP AL,0x0                          ; 0049a2b8
    JNZ 0x0049a2a4                      ; 0049a2ba
        ;   XREF to: 0049a2a4 (CONDITIONAL_JUMP)  ; LAB_0049a2a4
    POP EDI                             ; 0049a2bc
        ;   Label: LAB_0049a2bc
    JMP 0x0049a117                      ; 0049a2bd
        ;   XREF to: 0049a117 (UNCONDITIONAL_JUMP)  ; LAB_0049a117
    LEA EAX,[ESP + 0x430]               ; 0049a2c2
        ;   Label: LAB_0049a2c2
    PUSH EAX                            ; 0049a2c9
    PUSH EBP                            ; 0049a2ca
    CALL FUN_004994d0                   ; 0049a2cb
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004994d0()
    ADD ESP,0x8                         ; 0049a2d0
    JMP 0x0049a1d5                      ; 0049a2d3
        ;   XREF to: 0049a1d5 (UNCONDITIONAL_JUMP)  ; LAB_0049a1d5
    INC EBX                             ; 0049a2d8
        ;   Label: LAB_0049a2d8
    CMP EBX,ESI                         ; 0049a2d9
    JL 0x0049a232                       ; 0049a2db
        ;   XREF to: 0049a232 (CONDITIONAL_JUMP)  ; LAB_0049a232
    TEST EDI,EDI                        ; 0049a2e1
        ;   Label: LAB_0049a2e1
    JNZ 0x0049a255                      ; 0049a2e3
        ;   XREF to: 0049a255 (CONDITIONAL_JUMP)  ; LAB_0049a255
    LEA EAX,[ESP + 0x31c]               ; 0049a2e9
    PUSH EAX                            ; 0049a2f0
    PUSH EBP                            ; 0049a2f1
    CALL FUN_004994d0                   ; 0049a2f2
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004994d0()
    ADD ESP,0x8                         ; 0049a2f7
    JMP 0x0049a255                      ; 0049a2fa
        ;   XREF to: 0049a255 (UNCONDITIONAL_JUMP)  ; LAB_0049a255

