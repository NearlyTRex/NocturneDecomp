; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00412170(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004123d0 at 00412476
;
; Referenced Globals:
;   undefined1* switchdataD_00412158 = 004121ad
;   TerminatedCString s_limb_wav_005d3896
;   undefined4 DAT_005d38a1
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf3a4
;   undefined4 DAT_01ccf58c
;
; Called Functions:
;   FUN_0040cd00
;   FUN_00418940
;   FUN_00419b90
;   FUN_004311a0
;   FUN_00431210
;   FUN_004352e0
;   FUN_005c084c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412170
        ;   Label: FUN_00412170
    PUSH ESI                            ; 00412171
    PUSH EDI                            ; 00412172
    PUSH EBP                            ; 00412173
    SUB ESP,0xc                         ; 00412174
    MOV EBX,dword ptr [ESP + 0x20]      ; 00412177
    MOV ESI,dword ptr [ESP + 0x24]      ; 0041217b
    FLD float ptr [ESI + 0x2c]          ; 0041217f
    FLDZ                                ; 00412182
    FCOMPP                              ; 00412184
    FNSTSW AX                           ; 00412186
    SAHF                                ; 00412188
    JNC 0x004121b5                      ; 00412189
        ;   XREF to: 004121b5 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 0041218b
    JNZ 0x004121b5                      ; 0041218e
        ;   XREF to: 004121b5 (CONDITIONAL_JUMP)  ; default
    CALL FUN_005c084c                   ; 00412190
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; undefined FUN_005c084c()
    MOV EDX,EAX                         ; 00412195
    MOV EDI,0x6                         ; 00412197
    SAR EDX,0x1f                        ; 0041219c
    IDIV EDI                            ; 0041219f
    CMP EDX,0x5                         ; 004121a1
    JA 0x004121b5                       ; 004121a4
        ;   XREF to: 004121b5 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x412158]  ; 004121a6 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xc28c]    ; 004121ad
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 004121b3
        ;   Label: LAB_004121b3
    MOV ECX,dword ptr [EBX + 0xc28c]    ; 004121b5
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 004121bb
    CMP EAX,ECX                         ; 004121bd
    JNZ 0x00412269                      ; 004121bf
        ;   XREF to: 00412269 (CONDITIONAL_JUMP)  ; LAB_00412269
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004121c5
        ;   Label: LAB_004121c5
    MOV EBP,dword ptr [EBX + 0xc26c]    ; 004121c8
    MOV dword ptr [ESP + 0x8],EAX       ; 004121ce
    CMP EBP,dword ptr [ESI]             ; 004121d2
    JNZ 0x004121de                      ; 004121d4
        ;   XREF to: 004121de (CONDITIONAL_JUMP)  ; LAB_004121de
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 004121d6
    MOV EDX,dword ptr [EBX + 0xc270]    ; 004121de
        ;   Label: LAB_004121de
    CMP EDX,dword ptr [ESI]             ; 004121e4
    JNZ 0x004121f0                      ; 004121e6
        ;   XREF to: 004121f0 (CONDITIONAL_JUMP)  ; LAB_004121f0
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 004121e8
    MOV EAX,[0x0061d95c]                ; 004121f0 | DAT_0061d95c
        ;   Label: LAB_004121f0
    CMP dword ptr [EAX + 0x1fc],0x0     ; 004121f5 | DAT_01ccf58c
    JZ 0x00412206                       ; 004121fc
        ;   XREF to: 00412206 (CONDITIONAL_JUMP)  ; LAB_00412206
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004121fe
    MOV EAX,[0x0061d95c]                ; 00412206 | DAT_0061d95c
        ;   Label: LAB_00412206
    MOV EDX,dword ptr [EAX + 0x14]      ; 0041220b | DAT_01ccf3a4
    TEST EDX,EDX                        ; 0041220e
    JNZ 0x00412216                      ; 00412210
        ;   XREF to: 00412216 (CONDITIONAL_JUMP)  ; LAB_00412216
    MOV dword ptr [ESP + 0x8],EDX       ; 00412212
    PUSH dword ptr [ESP + 0x8]          ; 00412216
        ;   Label: LAB_00412216
    CALL FUN_0040cd00                   ; 0041221a
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd00()
    ADD ESP,0x4                         ; 0041221f
    TEST EAX,EAX                        ; 00412222
    JNZ 0x004122ad                      ; 00412224
        ;   XREF to: 004122ad (CONDITIONAL_JUMP)  ; LAB_004122ad
    ADD ESP,0xc                         ; 0041222a
    POP EBP                             ; 0041222d
    POP EDI                             ; 0041222e
    POP ESI                             ; 0041222f
    POP EBX                             ; 00412230
    RET                                 ; 00412231
    MOV EAX,dword ptr [EBX + 0xc290]    ; 00412232
        ;   Label: caseD_1
    JMP 0x004121b3                      ; 00412238
        ;   XREF to: 004121b3 (UNCONDITIONAL_JUMP)  ; LAB_004121b3
    MOV EAX,dword ptr [EBX + 0xc294]    ; 0041223d
        ;   Label: caseD_2
    JMP 0x004121b3                      ; 00412243
        ;   XREF to: 004121b3 (UNCONDITIONAL_JUMP)  ; LAB_004121b3
    MOV EAX,dword ptr [EBX + 0xc298]    ; 00412248
        ;   Label: caseD_3
    JMP 0x004121b3                      ; 0041224e
        ;   XREF to: 004121b3 (UNCONDITIONAL_JUMP)  ; LAB_004121b3
    MOV EAX,dword ptr [EBX + 0xc26c]    ; 00412253
        ;   Label: caseD_4
    JMP 0x004121b3                      ; 00412259
        ;   XREF to: 004121b3 (UNCONDITIONAL_JUMP)  ; LAB_004121b3
    MOV EAX,dword ptr [EBX + 0xc270]    ; 0041225e
        ;   Label: caseD_5
    JMP 0x004121b3                      ; 00412264
        ;   XREF to: 004121b3 (UNCONDITIONAL_JUMP)  ; LAB_004121b3
    CMP EAX,dword ptr [EBX + 0xc290]    ; 00412269
        ;   Label: LAB_00412269
    JZ 0x004121c5                       ; 0041226f
        ;   XREF to: 004121c5 (CONDITIONAL_JUMP)  ; LAB_004121c5
    CMP EAX,dword ptr [EBX + 0xc294]    ; 00412275
    JZ 0x004121c5                       ; 0041227b
        ;   XREF to: 004121c5 (CONDITIONAL_JUMP)  ; LAB_004121c5
    CMP EAX,dword ptr [EBX + 0xc298]    ; 00412281
    JZ 0x004121c5                       ; 00412287
        ;   XREF to: 004121c5 (CONDITIONAL_JUMP)  ; LAB_004121c5
    CMP EAX,dword ptr [EBX + 0xc270]    ; 0041228d
    JZ 0x004121c5                       ; 00412293
        ;   XREF to: 004121c5 (CONDITIONAL_JUMP)  ; LAB_004121c5
    CMP EAX,dword ptr [EBX + 0xc26c]    ; 00412299
    JZ 0x004121c5                       ; 0041229f
        ;   XREF to: 004121c5 (CONDITIONAL_JUMP)  ; LAB_004121c5
    ADD ESP,0xc                         ; 004122a5
    POP EBP                             ; 004122a8
    POP EDI                             ; 004122a9
    POP ESI                             ; 004122aa
    POP EBX                             ; 004122ab
    RET                                 ; 004122ac
    MOV EDI,dword ptr [EBX + 0x27a0]    ; 004122ad
        ;   Label: LAB_004122ad
    PUSH EDI                            ; 004122b3
    PUSH 0x0                            ; 004122b4
    PUSH 0x0                            ; 004122b6
    PUSH EBX                            ; 004122b8
    LEA EAX,[ESI + 0xc]                 ; 004122b9
    PUSH EAX                            ; 004122bc
    LEA EAX,[EBX + 0x30]                ; 004122bd
    PUSH EAX                            ; 004122c0
    LEA EAX,[EBX + 0x20]                ; 004122c1
    PUSH EAX                            ; 004122c4
    CALL FUN_00418940                   ; 004122c5
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; undefined FUN_00418940()
    ADD ESP,0x1c                        ; 004122ca
    MOV EDI,EAX                         ; 004122cd
    PUSH 0x0                            ; 004122cf
    MOV EBP,EAX                         ; 004122d1
    MOV EAX,dword ptr [ESI]             ; 004122d3
    PUSH EAX                            ; 004122d5
    PUSH EDI                            ; 004122d6
    PUSH EBX                            ; 004122d7
    CALL FUN_00431210                   ; 004122d8
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; undefined FUN_00431210()
    MOV EAX,dword ptr [ESI]             ; 004122dd
    MOV EDX,dword ptr [EBX + 0xc28c]    ; 004122df
    ADD ESP,0x10                        ; 004122e5
    CMP EAX,EDX                         ; 004122e8
    JNZ 0x004122ff                      ; 004122ea
        ;   XREF to: 004122ff (CONDITIONAL_JUMP)  ; LAB_004122ff
    PUSH 0x0                            ; 004122ec
    MOV ECX,dword ptr [EBX + 0xc290]    ; 004122ee
    PUSH ECX                            ; 004122f4
    PUSH EDI                            ; 004122f5
    PUSH EBX                            ; 004122f6
    CALL FUN_00431210                   ; 004122f7
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; undefined FUN_00431210()
    ADD ESP,0x10                        ; 004122fc
    MOV EDI,dword ptr [EBX + 0xc294]    ; 004122ff
        ;   Label: LAB_004122ff
    CMP EDI,dword ptr [ESI]             ; 00412305
    JNZ 0x0041231c                      ; 00412307
        ;   XREF to: 0041231c (CONDITIONAL_JUMP)  ; LAB_0041231c
    PUSH 0x0                            ; 00412309
    MOV EAX,dword ptr [EBX + 0xc298]    ; 0041230b
    PUSH EAX                            ; 00412311
    PUSH EBP                            ; 00412312
    PUSH EBX                            ; 00412313
    CALL FUN_00431210                   ; 00412314
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; undefined FUN_00431210()
    ADD ESP,0x10                        ; 00412319
    MOV EDX,dword ptr [EBX + 0xc270]    ; 0041231c
        ;   Label: LAB_0041231c
    CMP EDX,dword ptr [ESI]             ; 00412322
    JNZ 0x00412388                      ; 00412324
        ;   XREF to: 00412388 (CONDITIONAL_JUMP)  ; LAB_00412388
    PUSH 0x0                            ; 00412326
    LEA EDI,[ESI + 0xc]                 ; 00412328
    PUSH EDI                            ; 0041232b
    MOV ECX,dword ptr [EBX + 0xc294]    ; 0041232c
    PUSH ECX                            ; 00412332
    PUSH EBX                            ; 00412333
    CALL FUN_004311a0                   ; 00412334
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004311a0()
    ADD ESP,0x10                        ; 00412339
    PUSH 0x0                            ; 0041233c
    PUSH EDI                            ; 0041233e
    MOV EAX,dword ptr [EBX + 0xc298]    ; 0041233f
    PUSH EAX                            ; 00412345
    PUSH EBX                            ; 00412346
    CALL FUN_004311a0                   ; 00412347
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004311a0()
    ADD ESP,0x10                        ; 0041234c
    PUSH 0x0                            ; 0041234f
    PUSH EDI                            ; 00412351
    MOV EDX,dword ptr [EBX + 0xc28c]    ; 00412352
    PUSH EDX                            ; 00412358
    PUSH EBX                            ; 00412359
    CALL FUN_004311a0                   ; 0041235a
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004311a0()
    ADD ESP,0x10                        ; 0041235f
    PUSH 0x0                            ; 00412362
    PUSH EDI                            ; 00412364
    MOV ECX,dword ptr [EBX + 0xc290]    ; 00412365
    PUSH ECX                            ; 0041236b
    PUSH EBX                            ; 0041236c
    CALL FUN_004311a0                   ; 0041236d
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004311a0()
    ADD ESP,0x10                        ; 00412372
    PUSH 0x0                            ; 00412375
    PUSH EDI                            ; 00412377
    MOV EDI,dword ptr [EBX + 0xc26c]    ; 00412378
    PUSH EDI                            ; 0041237e
    PUSH EBX                            ; 0041237f
    CALL FUN_004311a0                   ; 00412380
        ;   XREF to: 004311a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004311a0()
    ADD ESP,0x10                        ; 00412385
    PUSH 0x5d3896                       ; 00412388 | = "limb?.wav"
        ;   Label: LAB_00412388
    PUSH EBX                            ; 0041238d
    CALL FUN_004352e0                   ; 0041238e
        ;   XREF to: 004352e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004352e0()
    ADD ESP,0x8                         ; 00412393
    PUSH EBP                            ; 00412396
    CALL FUN_00419b90                   ; 00412397
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; undefined FUN_00419b90()
    MOV EAX,dword ptr [EBX + 0xc26c]    ; 0041239c
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004123a2
    ADD ESP,0x4                         ; 004123a9
    TEST EBP,EBP                        ; 004123ac
    JNZ 0x004123b7                      ; 004123ae
        ;   XREF to: 004123b7 (CONDITIONAL_JUMP)  ; LAB_004123b7
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 004123b0
    FLD float ptr [ESI + 0x8]           ; 004123b7
        ;   Label: LAB_004123b7
    FLD ST0                             ; 004123ba
    FMUL double ptr [0x005d38a1]        ; 004123bc | DAT_005d38a1
    FSTP ST1                            ; 004123c2
    FSTP float ptr [ESI + 0x8]          ; 004123c4
    ADD ESP,0xc                         ; 004123c7
    POP EBP                             ; 004123ca
    POP EDI                             ; 004123cb
    POP ESI                             ; 004123cc
    POP EBX                             ; 004123cd
    RET                                 ; 004123ce

