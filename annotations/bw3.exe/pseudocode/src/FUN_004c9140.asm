; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c9140(int param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004c9400 at 004c943e
;
; Referenced Globals:
;   undefined1* switchdataD_004c911c = 004c917d
;   TerminatedCString s_limb_wav_005c43a1
;   undefined4 DAT_005c43ad
;   undefined4 DAT_005c43b5
;   undefined4 DAT_005c43bd
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01d21320
;   undefined4 DAT_01d21510
;
; Called Functions:
;   FUN_0040cf40
;   FUN_00414550
;   FUN_004157c0
;   FUN_00430520
;   FUN_00430590
;   FUN_00434810
;   FUN_005a35cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9140
        ;   Label: FUN_004c9140
    PUSH ESI                            ; 004c9141
    PUSH EDI                            ; 004c9142
    PUSH EBP                            ; 004c9143
    SUB ESP,0xc                         ; 004c9144
    MOV EBX,dword ptr [ESP + 0x20]      ; 004c9147
    MOV ESI,dword ptr [ESP + 0x24]      ; 004c914b
    FLD float ptr [ESI + 0x2c]          ; 004c914f
    FLDZ                                ; 004c9152
    FCOMPP                              ; 004c9154
    FNSTSW AX                           ; 004c9156
    SAHF                                ; 004c9158
    JNC 0x004c9185                      ; 004c9159
        ;   XREF to: 004c9185 (CONDITIONAL_JUMP)  ; default
    CMP dword ptr [ESI],-0x1            ; 004c915b
    JNZ 0x004c9185                      ; 004c915e
        ;   XREF to: 004c9185 (CONDITIONAL_JUMP)  ; default
    CALL FUN_005a35cc                   ; 004c9160
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; undefined FUN_005a35cc()
    MOV EDX,EAX                         ; 004c9165
    MOV EDI,0x6                         ; 004c9167
    SAR EDX,0x1f                        ; 004c916c
    IDIV EDI                            ; 004c916f
    CMP EDX,0x5                         ; 004c9171
    JA 0x004c9185                       ; 004c9174
        ;   XREF to: 004c9185 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4c911c]  ; 004c9176 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBX + 0xd078]    ; 004c917d
        ;   Label: caseD_0
    MOV dword ptr [ESI],EAX             ; 004c9183
        ;   Label: LAB_004c9183
    MOV ECX,dword ptr [EBX + 0xd078]    ; 004c9185
        ;   Label: default
    MOV EAX,dword ptr [ESI]             ; 004c918b
    CMP EAX,ECX                         ; 004c918d
    JNZ 0x004c9375                      ; 004c918f
        ;   XREF to: 004c9375 (CONDITIONAL_JUMP)  ; LAB_004c9375
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004c9195
        ;   Label: LAB_004c9195
    MOV EBP,dword ptr [EBX + 0xd0a0]    ; 004c9198
    MOV dword ptr [ESP + 0x8],EAX       ; 004c919e
    CMP EBP,dword ptr [ESI]             ; 004c91a2
    JNZ 0x004c91ae                      ; 004c91a4
        ;   XREF to: 004c91ae (CONDITIONAL_JUMP)  ; LAB_004c91ae
    MOV dword ptr [ESP + 0x8],0x3d4ccccd ; 004c91a6
    MOV EDX,dword ptr [EBX + 0xd09c]    ; 004c91ae
        ;   Label: LAB_004c91ae
    CMP EDX,dword ptr [ESI]             ; 004c91b4
    JNZ 0x004c91c0                      ; 004c91b6
        ;   XREF to: 004c91c0 (CONDITIONAL_JUMP)  ; LAB_004c91c0
    MOV dword ptr [ESP + 0x8],0x3ca3d70a ; 004c91b8
    MOV EAX,[0x005fe9dc]                ; 004c91c0 | DAT_005fe9dc
        ;   Label: LAB_004c91c0
    CMP dword ptr [EAX + 0x204],0x0     ; 004c91c5 | DAT_01d21510
    JZ 0x004c91d6                       ; 004c91cc
        ;   XREF to: 004c91d6 (CONDITIONAL_JUMP)  ; LAB_004c91d6
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 004c91ce
    MOV EAX,[0x005fe9dc]                ; 004c91d6 | DAT_005fe9dc
        ;   Label: LAB_004c91d6
    MOV EDX,dword ptr [EAX + 0x14]      ; 004c91db | DAT_01d21320
    TEST EDX,EDX                        ; 004c91de
    JNZ 0x004c91e6                      ; 004c91e0
        ;   XREF to: 004c91e6 (CONDITIONAL_JUMP)  ; LAB_004c91e6
    MOV dword ptr [ESP + 0x8],EDX       ; 004c91e2
    PUSH dword ptr [ESP + 0x8]          ; 004c91e6
        ;   Label: LAB_004c91e6
    CALL FUN_0040cf40                   ; 004c91ea
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf40()
    ADD ESP,0x4                         ; 004c91ef
    TEST EAX,EAX                        ; 004c91f2
    JZ 0x004c930c                       ; 004c91f4
        ;   XREF to: 004c930c (CONDITIONAL_JUMP)  ; LAB_004c930c
    PUSH 0x0                            ; 004c91fa
    PUSH 0x0                            ; 004c91fc
    PUSH 0x0                            ; 004c91fe
    PUSH EBX                            ; 004c9200
    LEA EAX,[ESI + 0xc]                 ; 004c9201
    PUSH EAX                            ; 004c9204
    LEA EAX,[EBX + 0x30]                ; 004c9205
    PUSH EAX                            ; 004c9208
    LEA EAX,[EBX + 0x20]                ; 004c9209
    PUSH EAX                            ; 004c920c
    CALL FUN_00414550                   ; 004c920d
        ;   XREF to: 00414550 (UNCONDITIONAL_CALL)  ; undefined FUN_00414550()
    ADD ESP,0x1c                        ; 004c9212
    MOV EDI,EAX                         ; 004c9215
    PUSH 0x1                            ; 004c9217
    MOV EBP,EAX                         ; 004c9219
    MOV EAX,dword ptr [ESI]             ; 004c921b
    PUSH EAX                            ; 004c921d
    PUSH EDI                            ; 004c921e
    PUSH EBX                            ; 004c921f
    CALL FUN_00430590                   ; 004c9220
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; undefined FUN_00430590()
    MOV EAX,dword ptr [ESI]             ; 004c9225
    MOV EDX,dword ptr [EBX + 0xd078]    ; 004c9227
    ADD ESP,0x10                        ; 004c922d
    CMP EAX,EDX                         ; 004c9230
    JNZ 0x004c9247                      ; 004c9232
        ;   XREF to: 004c9247 (CONDITIONAL_JUMP)  ; LAB_004c9247
    PUSH 0x1                            ; 004c9234
    MOV ECX,dword ptr [EBX + 0xd07c]    ; 004c9236
    PUSH ECX                            ; 004c923c
    PUSH EDI                            ; 004c923d
    PUSH EBX                            ; 004c923e
    CALL FUN_00430590                   ; 004c923f
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; undefined FUN_00430590()
    ADD ESP,0x10                        ; 004c9244
    MOV EDI,dword ptr [EBX + 0xd080]    ; 004c9247
        ;   Label: LAB_004c9247
    CMP EDI,dword ptr [ESI]             ; 004c924d
    JNZ 0x004c9264                      ; 004c924f
        ;   XREF to: 004c9264 (CONDITIONAL_JUMP)  ; LAB_004c9264
    PUSH 0x1                            ; 004c9251
    MOV EAX,dword ptr [EBX + 0xd084]    ; 004c9253
    PUSH EAX                            ; 004c9259
    PUSH EBP                            ; 004c925a
    PUSH EBX                            ; 004c925b
    CALL FUN_00430590                   ; 004c925c
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; undefined FUN_00430590()
    ADD ESP,0x10                        ; 004c9261
    MOV EDX,dword ptr [EBX + 0xd09c]    ; 004c9264
        ;   Label: LAB_004c9264
    CMP EDX,dword ptr [ESI]             ; 004c926a
    JNZ 0x004c92d0                      ; 004c926c
        ;   XREF to: 004c92d0 (CONDITIONAL_JUMP)  ; LAB_004c92d0
    PUSH 0x1                            ; 004c926e
    LEA EDI,[ESI + 0xc]                 ; 004c9270
    PUSH EDI                            ; 004c9273
    MOV ECX,dword ptr [EBX + 0xd080]    ; 004c9274
    PUSH ECX                            ; 004c927a
    PUSH EBX                            ; 004c927b
    CALL FUN_00430520                   ; 004c927c
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 004c9281
    PUSH 0x1                            ; 004c9284
    PUSH EDI                            ; 004c9286
    MOV EAX,dword ptr [EBX + 0xd084]    ; 004c9287
    PUSH EAX                            ; 004c928d
    PUSH EBX                            ; 004c928e
    CALL FUN_00430520                   ; 004c928f
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 004c9294
    PUSH 0x1                            ; 004c9297
    PUSH EDI                            ; 004c9299
    MOV EDX,dword ptr [EBX + 0xd078]    ; 004c929a
    PUSH EDX                            ; 004c92a0
    PUSH EBX                            ; 004c92a1
    CALL FUN_00430520                   ; 004c92a2
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 004c92a7
    PUSH 0x1                            ; 004c92aa
    PUSH EDI                            ; 004c92ac
    MOV ECX,dword ptr [EBX + 0xd07c]    ; 004c92ad
    PUSH ECX                            ; 004c92b3
    PUSH EBX                            ; 004c92b4
    CALL FUN_00430520                   ; 004c92b5
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 004c92ba
    PUSH 0x1                            ; 004c92bd
    PUSH EDI                            ; 004c92bf
    MOV EDI,dword ptr [EBX + 0xd0a0]    ; 004c92c0
    PUSH EDI                            ; 004c92c6
    PUSH EBX                            ; 004c92c7
    CALL FUN_00430520                   ; 004c92c8
        ;   XREF to: 00430520 (UNCONDITIONAL_CALL)  ; undefined FUN_00430520()
    ADD ESP,0x10                        ; 004c92cd
    PUSH 0x5c43a1                       ; 004c92d0 | = "limb?.wav"
        ;   Label: LAB_004c92d0
    PUSH EBX                            ; 004c92d5
    CALL FUN_00434810                   ; 004c92d6
        ;   XREF to: 00434810 (UNCONDITIONAL_CALL)  ; undefined FUN_00434810()
    ADD ESP,0x8                         ; 004c92db
    PUSH EBP                            ; 004c92de
    CALL FUN_004157c0                   ; 004c92df
        ;   XREF to: 004157c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004157c0()
    MOV EAX,dword ptr [EBX + 0xd0a0]    ; 004c92e4
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x2298] ; 004c92ea
    ADD ESP,0x4                         ; 004c92f1
    TEST EBP,EBP                        ; 004c92f4
    JZ 0x004c93b6                       ; 004c92f6
        ;   XREF to: 004c93b6 (CONDITIONAL_JUMP)  ; LAB_004c93b6
    FLD float ptr [ESI + 0x8]           ; 004c92fc
        ;   Label: LAB_004c92fc
    FLD ST0                             ; 004c92ff
    FMUL double ptr [0x005c43ad]        ; 004c9301 | DAT_005c43ad
    FSTP ST1                            ; 004c9307
    FSTP float ptr [ESI + 0x8]          ; 004c9309
    MOV EDX,dword ptr [EBX + 0xd0a0]    ; 004c930c
        ;   Label: LAB_004c930c
    MOV EAX,dword ptr [ESI]             ; 004c9312
    CMP EAX,EDX                         ; 004c9314
    JZ 0x004c93c2                       ; 004c9316
        ;   XREF to: 004c93c2 (CONDITIONAL_JUMP)  ; LAB_004c93c2
    CMP EAX,dword ptr [EBX + 0xd098]    ; 004c931c
    JZ 0x004c9330                       ; 004c9322
        ;   XREF to: 004c9330 (CONDITIONAL_JUMP)  ; LAB_004c9330
    CMP EAX,dword ptr [EBX + 0xd09c]    ; 004c9324
    JNZ 0x004c93da                      ; 004c932a
        ;   XREF to: 004c93da (CONDITIONAL_JUMP)  ; LAB_004c93da
    MOV EAX,dword ptr [ESI + 0x4]       ; 004c9330
        ;   Label: LAB_004c9330
    MOV dword ptr [ESI + 0x4],EAX       ; 004c9333
    ADD ESP,0xc                         ; 004c9336
    POP EBP                             ; 004c9339
    POP EDI                             ; 004c933a
    POP ESI                             ; 004c933b
    POP EBX                             ; 004c933c
    RET                                 ; 004c933d
    MOV EAX,dword ptr [EBX + 0xd07c]    ; 004c933e
        ;   Label: caseD_1
    JMP 0x004c9183                      ; 004c9344
        ;   XREF to: 004c9183 (UNCONDITIONAL_JUMP)  ; LAB_004c9183
    MOV EAX,dword ptr [EBX + 0xd080]    ; 004c9349
        ;   Label: caseD_2
    JMP 0x004c9183                      ; 004c934f
        ;   XREF to: 004c9183 (UNCONDITIONAL_JUMP)  ; LAB_004c9183
    MOV EAX,dword ptr [EBX + 0xd084]    ; 004c9354
        ;   Label: caseD_3
    JMP 0x004c9183                      ; 004c935a
        ;   XREF to: 004c9183 (UNCONDITIONAL_JUMP)  ; LAB_004c9183
    MOV EAX,dword ptr [EBX + 0xd0a0]    ; 004c935f
        ;   Label: caseD_4
    JMP 0x004c9183                      ; 004c9365
        ;   XREF to: 004c9183 (UNCONDITIONAL_JUMP)  ; LAB_004c9183
    MOV EAX,dword ptr [EBX + 0xd09c]    ; 004c936a
        ;   Label: caseD_5
    JMP 0x004c9183                      ; 004c9370
        ;   XREF to: 004c9183 (UNCONDITIONAL_JUMP)  ; LAB_004c9183
    CMP EAX,dword ptr [EBX + 0xd07c]    ; 004c9375
        ;   Label: LAB_004c9375
    JZ 0x004c9195                       ; 004c937b
        ;   XREF to: 004c9195 (CONDITIONAL_JUMP)  ; LAB_004c9195
    CMP EAX,dword ptr [EBX + 0xd080]    ; 004c9381
    JZ 0x004c9195                       ; 004c9387
        ;   XREF to: 004c9195 (CONDITIONAL_JUMP)  ; LAB_004c9195
    CMP EAX,dword ptr [EBX + 0xd084]    ; 004c938d
    JZ 0x004c9195                       ; 004c9393
        ;   XREF to: 004c9195 (CONDITIONAL_JUMP)  ; LAB_004c9195
    CMP EAX,dword ptr [EBX + 0xd09c]    ; 004c9399
    JZ 0x004c9195                       ; 004c939f
        ;   XREF to: 004c9195 (CONDITIONAL_JUMP)  ; LAB_004c9195
    CMP EAX,dword ptr [EBX + 0xd0a0]    ; 004c93a5
    JZ 0x004c9195                       ; 004c93ab
        ;   XREF to: 004c9195 (CONDITIONAL_JUMP)  ; LAB_004c9195
    JMP 0x004c930c                      ; 004c93b1
        ;   XREF to: 004c930c (UNCONDITIONAL_JUMP)  ; LAB_004c930c
    MOV dword ptr [ESI + 0x4],0x461c3c00 ; 004c93b6
        ;   Label: LAB_004c93b6
    JMP 0x004c92fc                      ; 004c93bd
        ;   XREF to: 004c92fc (UNCONDITIONAL_JUMP)  ; LAB_004c92fc
    FLD float ptr [ESI + 0x4]           ; 004c93c2
        ;   Label: LAB_004c93c2
    FLD ST0                             ; 004c93c5
    FMUL double ptr [0x005c43bd]        ; 004c93c7 | DAT_005c43bd
    FSTP ST1                            ; 004c93cd
    FSTP float ptr [ESI + 0x4]          ; 004c93cf
    ADD ESP,0xc                         ; 004c93d2
    POP EBP                             ; 004c93d5
    POP EDI                             ; 004c93d6
    POP ESI                             ; 004c93d7
    POP EBX                             ; 004c93d8
    RET                                 ; 004c93d9
    FLD float ptr [ESI + 0x4]           ; 004c93da
        ;   Label: LAB_004c93da
    FLD ST0                             ; 004c93dd
    FMUL double ptr [0x005c43b5]        ; 004c93df | DAT_005c43b5
    FSTP ST1                            ; 004c93e5
    FSTP float ptr [ESI + 0x4]          ; 004c93e7
    ADD ESP,0xc                         ; 004c93ea
    POP EBP                             ; 004c93ed
    POP EDI                             ; 004c93ee
    POP ESI                             ; 004c93ef
    POP EBX                             ; 004c93f0
    RET                                 ; 004c93f1

