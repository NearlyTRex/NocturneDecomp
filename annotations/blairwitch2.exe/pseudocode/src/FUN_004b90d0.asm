; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b90d0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x368]:1  local_368
; undefined8       Stack[-0x1b0]:8  local_1b0
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_004bd570 at 004bd971
;
; Referenced Globals:
;   undefined4 s_Enter_Movie_FPS_005d7216+1
;   TerminatedCString s_Enter_number_of_frames_t_005d7227
;   TerminatedCString s_Enter_image_width_005d7271
;   TerminatedCString s_Enter_image_height_005d7283
;   TerminatedCString s_Press_CTRL_V_to_begin_re_005d7296
;   TerminatedCString s_headOfHorror_005d7a56
;   TerminatedCString s_The_horror_has_been_unle_005d7a63
;   TerminatedCString s_Enter_cheat_code_005d7a82
;   undefined4 DAT_005d7a93
;   undefined4 DAT_005d7ac7
;   undefined4 DAT_005d7b01
;   undefined4 DAT_005d7b05
;   TerminatedCString s_FPS_3_2lf_005d7b39
;   undefined4 DAT_005d7b45
;   undefined4 DAT_005d7b7a
;   ... and 102 more
;
; Called Functions:
;   FUN_0040c5a0
;   FUN_0040c840
;   FUN_0040ddb0
;   FUN_0040e240
;   FUN_004222d0
;   FUN_00441e80
;   FUN_00443240
;   FUN_0047bda0
;   FUN_0047be40
;   FUN_0047d730
;   FUN_0047d800
;   FUN_0047dae0
;   FUN_0047db10
;   FUN_004894f0
;   FUN_0048e340
;   ... and 21 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b90d0
        ;   Label: FUN_004b90d0
    PUSH ESI                            ; 004b90d1
    PUSH EDI                            ; 004b90d2
    PUSH EBP                            ; 004b90d3
    MOV EBP,ESP                         ; 004b90d4
    SUB ESP,0x354                       ; 004b90d6
    AND ESP,0xfffffff8                  ; 004b90dc
    CMP dword ptr [0x01cb7788],0x0      ; 004b90df | DAT_01cb7788
    JZ 0x004b90ef                       ; 004b90e6
        ;   XREF to: 004b90ef (CONDITIONAL_JUMP)  ; LAB_004b90ef
    MOV ESP,EBP                         ; 004b90e8
        ;   Label: LAB_004b90e8
    POP EBP                             ; 004b90ea
    POP EDI                             ; 004b90eb
    POP ESI                             ; 004b90ec
    POP EBX                             ; 004b90ed
    RET                                 ; 004b90ee
    PUSH 0x5d7a56                       ; 004b90ef | = "headOfHorror"
        ;   Label: LAB_004b90ef
    MOV ECX,dword ptr [0x006141f0]      ; 004b90f4 | DAT_006141f0
    PUSH ECX                            ; 004b90fa
    CALL FUN_0048e340                   ; 004b90fb
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 004b9100
    TEST EAX,EAX                        ; 004b9103
    JZ 0x004b9141                       ; 004b9105
        ;   XREF to: 004b9141 (CONDITIONAL_JUMP)  ; LAB_004b9141
    MOV EAX,[0x00616494]                ; 004b9107 | DAT_00616494
    CMP dword ptr [EAX + 0x230],0x29a   ; 004b910c | DAT_01cb6b30
    JZ 0x004b9141                       ; 004b9116
        ;   XREF to: 004b9141 (CONDITIONAL_JUMP)  ; LAB_004b9141
    PUSH 0x40a00000                     ; 004b9118
    PUSH 0x5d7a63                       ; 004b911d | = "The horror has been unleashed."
    MOV dword ptr [EAX + 0x230],0x29a   ; 004b9122 | DAT_01cb6b30
    CALL FUN_0050fe80                   ; 004b912c
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b9131
    PUSH EAX                            ; 004b9134
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b9135
    PUSH ESI                            ; 004b9138
    CALL FUN_004b31a0                   ; 004b9139
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b31a0()
    ADD ESP,0xc                         ; 004b913e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b9141
        ;   Label: LAB_004b9141
    MOV EDI,dword ptr [EAX + 0x1f8]     ; 004b9144
    TEST EDI,EDI                        ; 004b914a
    JZ 0x004b9e98                       ; 004b914c
        ;   XREF to: 004b9e98 (CONDITIONAL_JUMP)  ; LAB_004b9e98
    LEA EAX,[EAX]                       ; 004b9152
    LEA EDX,[EDX]                       ; 004b9158
    MOV EAX,EAX                         ; 004b915e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b9160
        ;   Label: LAB_004b9160
    ADD EAX,0x208                       ; 004b9163
    MOV dword ptr [ESP + 0x23c],EAX     ; 004b9168
    CALL FUN_0058eb40                   ; 004b916f
        ;   XREF to: 0058eb40 (UNCONDITIONAL_CALL)  ; undefined FUN_0058eb40()
        ;   Label: LAB_004b916f
    TEST EAX,EAX                        ; 004b9174
    JZ 0x004b90e8                       ; 004b9176
        ;   XREF to: 004b90e8 (CONDITIONAL_JUMP)  ; LAB_004b90e8
    MOV EDX,dword ptr [0x00617dd4]      ; 004b917c | DAT_00617dd4
    PUSH EDX                            ; 004b9182 | DAT_01d02f84
    MOV EBX,0x13                        ; 004b9183
    CALL FUN_004dfea0                   ; 004b9188
        ;   XREF to: 004dfea0 (UNCONDITIONAL_CALL)  ; undefined FUN_004dfea0()
    ADD ESP,0x4                         ; 004b918d
    MOV AH,AL                           ; 004b9190
    DEC EBX                             ; 004b9192
        ;   Label: LAB_004b9192
    MOV AL,byte ptr [EBX + 0x1cb80f8]   ; 004b9193 | DAT_01cb810a | DAT_01cb8109
    MOV byte ptr [EBX + 0x1cb80f9],AL   ; 004b9199 | DAT_01cb810b | DAT_01cb810a
    TEST EBX,EBX                        ; 004b919f
    JG 0x004b9192                       ; 004b91a1
        ;   XREF to: 004b9192 (CONDITIONAL_JUMP)  ; LAB_004b9192
    PUSH 0x5d7a93                       ; 004b91a3 | DAT_005d7a93
    MOV byte ptr [0x01cb80f8],AH        ; 004b91a8 | DAT_01cb80f8
    CALL FUN_0050ff00                   ; 004b91ae
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR ESI,ESI                         ; 004b91b3
    ADD ESP,0x4                         ; 004b91b5
    MOV EDI,EAX                         ; 004b91b8
    MOV EBX,EAX                         ; 004b91ba
    SUB ECX,ECX                         ; 004b91bc
    DEC ECX                             ; 004b91be
    XOR EAX,EAX                         ; 004b91bf
    SCASB.REPNE ES:EDI                  ; 004b91c1
    NOT ECX                             ; 004b91c3
    DEC ECX                             ; 004b91c5
    MOV dword ptr [ESP + 0x1c0],ECX     ; 004b91c6
    TEST ECX,ECX                        ; 004b91cd
    JLE 0x004b9213                      ; 004b91cf
        ;   XREF to: 004b9213 (CONDITIONAL_JUMP)  ; LAB_004b9213
    MOV EAX,ECX                         ; 004b91d1
    NEG EAX                             ; 004b91d3
    MOV EDI,ECX                         ; 004b91d5
    ADD ECX,EAX                         ; 004b91d7
    MOV dword ptr [ESP + 0x2c0],ECX     ; 004b91d9
    XOR EAX,EAX                         ; 004b91e0
        ;   Label: LAB_004b91e0
    MOV AL,byte ptr [EDI + 0x1cb80f7]   ; 004b91e2 | DAT_01cb80f8
    MOV dword ptr [ESP + 0x350],EAX     ; 004b91e8
    XOR EAX,EAX                         ; 004b91ef
    MOV AL,byte ptr [EBX]               ; 004b91f1
    PUSH EAX                            ; 004b91f3
    CALL FUN_005b8e40                   ; 004b91f4
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004b91f9
    CMP EAX,dword ptr [ESP + 0x350]     ; 004b91fc
    JNZ 0x004b9206                      ; 004b9203
        ;   XREF to: 004b9206 (CONDITIONAL_JUMP)  ; LAB_004b9206
    INC ESI                             ; 004b9205
    MOV ECX,dword ptr [ESP + 0x2c0]     ; 004b9206
        ;   Label: LAB_004b9206
    DEC EDI                             ; 004b920d
    INC EBX                             ; 004b920e
    CMP EDI,ECX                         ; 004b920f
    JG 0x004b91e0                       ; 004b9211
        ;   XREF to: 004b91e0 (CONDITIONAL_JUMP)  ; LAB_004b91e0
    CMP ESI,dword ptr [ESP + 0x1c0]     ; 004b9213
        ;   Label: LAB_004b9213
    JNZ 0x004b9f13                      ; 004b921a
        ;   XREF to: 004b9f13 (CONDITIONAL_JUMP)  ; LAB_004b9f13
    XOR DH,DH                           ; 004b9220
    MOV byte ptr [0x01cb80f8],DH        ; 004b9222 | DAT_01cb80f8
    PUSH 0x40a00000                     ; 004b9228
        ;   Label: LAB_004b9228
    PUSH 0x5d7b01                       ; 004b922d | DAT_005d7b01
    CALL FUN_0050fe80                   ; 004b9232
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b9237
    PUSH EAX                            ; 004b923a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b923b
    PUSH EAX                            ; 004b923e
    CALL FUN_004b31a0                   ; 004b923f
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b31a0()
    ADD ESP,0xc                         ; 004b9244
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b9247
    CMP dword ptr [EAX + 0x22c],0x0     ; 004b924a
    SETZ AL                             ; 004b9251
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b9254
    AND EAX,0xff                        ; 004b9257
    MOV dword ptr [EBX + 0x22c],EAX     ; 004b925c
    PUSH 0x5d7b05                       ; 004b9262 | DAT_005d7b05
        ;   Label: LAB_004b9262
    CALL FUN_0050ff00                   ; 004b9267
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR ESI,ESI                         ; 004b926c
    ADD ESP,0x4                         ; 004b926e
    MOV EDI,EAX                         ; 004b9271
    MOV EBX,EAX                         ; 004b9273
    SUB ECX,ECX                         ; 004b9275
    DEC ECX                             ; 004b9277
    XOR EAX,EAX                         ; 004b9278
    SCASB.REPNE ES:EDI                  ; 004b927a
    NOT ECX                             ; 004b927c
    DEC ECX                             ; 004b927e
    MOV dword ptr [ESP + 0x1cc],ECX     ; 004b927f
    TEST ECX,ECX                        ; 004b9286
    JLE 0x004b92cc                      ; 004b9288
        ;   XREF to: 004b92cc (CONDITIONAL_JUMP)  ; LAB_004b92cc
    MOV EAX,ECX                         ; 004b928a
    NEG EAX                             ; 004b928c
    MOV EDI,ECX                         ; 004b928e
    ADD ECX,EAX                         ; 004b9290
    MOV dword ptr [ESP + 0x2c8],ECX     ; 004b9292
    XOR EAX,EAX                         ; 004b9299
        ;   Label: LAB_004b9299
    MOV AL,byte ptr [EDI + 0x1cb80f7]   ; 004b929b | DAT_01cb80f8
    MOV dword ptr [ESP + 0x350],EAX     ; 004b92a1
    XOR EAX,EAX                         ; 004b92a8
    MOV AL,byte ptr [EBX]               ; 004b92aa
    PUSH EAX                            ; 004b92ac
    CALL FUN_005b8e40                   ; 004b92ad
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004b92b2
    CMP EAX,dword ptr [ESP + 0x350]     ; 004b92b5
    JNZ 0x004b92bf                      ; 004b92bc
        ;   XREF to: 004b92bf (CONDITIONAL_JUMP)  ; LAB_004b92bf
    INC ESI                             ; 004b92be
    MOV ECX,dword ptr [ESP + 0x2c8]     ; 004b92bf
        ;   Label: LAB_004b92bf
    DEC EDI                             ; 004b92c6
    INC EBX                             ; 004b92c7
    CMP EDI,ECX                         ; 004b92c8
    JG 0x004b9299                       ; 004b92ca
        ;   XREF to: 004b9299 (CONDITIONAL_JUMP)  ; LAB_004b9299
    CMP ESI,dword ptr [ESP + 0x1cc]     ; 004b92cc
        ;   Label: LAB_004b92cc
    JNZ 0x004b930c                      ; 004b92d3
        ;   XREF to: 004b930c (CONDITIONAL_JUMP)  ; LAB_004b930c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b92d5
    XOR BH,BH                           ; 004b92d8
    MOV ESI,dword ptr [EAX + 0x224]     ; 004b92da
    MOV byte ptr [0x01cb80f8],BH        ; 004b92e0 | DAT_01cb80f8
    TEST ESI,ESI                        ; 004b92e6
    JNZ 0x004b9fa0                      ; 004b92e8
        ;   XREF to: 004b9fa0 (CONDITIONAL_JUMP)  ; LAB_004b9fa0
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b92ee
    CALL FUN_0058e9e0                   ; 004b92f1
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058e9e0()
    MOV dword ptr [EBX + 0x224],0x1     ; 004b92f6
    MOV dword ptr [EBX + 0x288],EAX     ; 004b9300
    MOV dword ptr [EBX + 0x28c],ESI     ; 004b9306
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b930c
        ;   Label: LAB_004b930c
    CMP dword ptr [EAX + 0x22c],0x0     ; 004b930f
    JZ 0x004b93bf                       ; 004b9316
        ;   XREF to: 004b93bf (CONDITIONAL_JUMP)  ; LAB_004b93bf
    PUSH 0x5d7b45                       ; 004b931c | DAT_005d7b45
    CALL FUN_0050ff00                   ; 004b9321
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR ESI,ESI                         ; 004b9326
    ADD ESP,0x4                         ; 004b9328
    MOV EDI,EAX                         ; 004b932b
    MOV EBX,EAX                         ; 004b932d
    SUB ECX,ECX                         ; 004b932f
    DEC ECX                             ; 004b9331
    XOR EAX,EAX                         ; 004b9332
    SCASB.REPNE ES:EDI                  ; 004b9334
    NOT ECX                             ; 004b9336
    DEC ECX                             ; 004b9338
    MOV dword ptr [ESP + 0x1d4],ESI     ; 004b9339
    MOV dword ptr [ESP + 0x1d0],ECX     ; 004b9340
    TEST ECX,ECX                        ; 004b9347
    JLE 0x004b9388                      ; 004b9349
        ;   XREF to: 004b9388 (CONDITIONAL_JUMP)  ; LAB_004b9388
    MOV EAX,ECX                         ; 004b934b
    MOV ESI,EBX                         ; 004b934d
    NEG EAX                             ; 004b934f
    MOV EBX,ECX                         ; 004b9351
    ADD ECX,EAX                         ; 004b9353
    MOV dword ptr [ESP + 0x2cc],ECX     ; 004b9355
    XOR EAX,EAX                         ; 004b935c
        ;   Label: LAB_004b935c
    MOV AL,byte ptr [ESI]               ; 004b935e
    PUSH EAX                            ; 004b9360
    MOVZX EDI,byte ptr [EBX + 0x1cb80f7] ; 004b9361 | DAT_01cb80f8
    CALL FUN_005b8e40                   ; 004b9368
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004b936d
    CMP EDI,EAX                         ; 004b9370
    JNZ 0x004b937b                      ; 004b9372
        ;   XREF to: 004b937b (CONDITIONAL_JUMP)  ; LAB_004b937b
    INC dword ptr [ESP + 0x1d4]         ; 004b9374
    MOV ECX,dword ptr [ESP + 0x2cc]     ; 004b937b
        ;   Label: LAB_004b937b
    DEC EBX                             ; 004b9382
    INC ESI                             ; 004b9383
    CMP EBX,ECX                         ; 004b9384
    JG 0x004b935c                       ; 004b9386
        ;   XREF to: 004b935c (CONDITIONAL_JUMP)  ; LAB_004b935c
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 004b9388
        ;   Label: LAB_004b9388
    CMP EAX,dword ptr [ESP + 0x1d0]     ; 004b938f
    JNZ 0x004b93bf                      ; 004b9396
        ;   XREF to: 004b93bf (CONDITIONAL_JUMP)  ; LAB_004b93bf
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b9398
    MOV ESI,dword ptr [EAX + 0x228]     ; 004b939b
    XOR CL,CL                           ; 004b93a1
    INC ESI                             ; 004b93a3
    MOV byte ptr [0x01cb80f8],CL        ; 004b93a4 | DAT_01cb80f8
    MOV dword ptr [EAX + 0x228],ESI     ; 004b93aa
    CMP ESI,0x2                         ; 004b93b0
    JLE 0x004b93bf                      ; 004b93b3
        ;   XREF to: 004b93bf (CONDITIONAL_JUMP)  ; LAB_004b93bf
    MOV dword ptr [EAX + 0x228],0x0     ; 004b93b5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b93bf
        ;   Label: LAB_004b93bf
    CMP dword ptr [EAX + 0x22c],0x0     ; 004b93c2
    JZ 0x004b9490                       ; 004b93c9
        ;   XREF to: 004b9490 (CONDITIONAL_JUMP)  ; LAB_004b9490
    PUSH 0x5d7b7a                       ; 004b93cf | DAT_005d7b7a
    CALL FUN_0050ff00                   ; 004b93d4
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    MOV EBX,EAX                         ; 004b93d9
    ADD ESP,0x4                         ; 004b93db
    XOR ECX,ECX                         ; 004b93de
    MOV EDI,EAX                         ; 004b93e0
    MOV dword ptr [ESP + 0x1dc],ECX     ; 004b93e2
    SUB ECX,ECX                         ; 004b93e9
    DEC ECX                             ; 004b93eb
    XOR EAX,EAX                         ; 004b93ec
    SCASB.REPNE ES:EDI                  ; 004b93ee
    NOT ECX                             ; 004b93f0
    DEC ECX                             ; 004b93f2
    MOV dword ptr [ESP + 0x1d8],ECX     ; 004b93f3
    TEST ECX,ECX                        ; 004b93fa
    JLE 0x004b943b                      ; 004b93fc
        ;   XREF to: 004b943b (CONDITIONAL_JUMP)  ; LAB_004b943b
    MOV EAX,ECX                         ; 004b93fe
    MOV ESI,EBX                         ; 004b9400
    NEG EAX                             ; 004b9402
    MOV EBX,ECX                         ; 004b9404
    ADD ECX,EAX                         ; 004b9406
    MOV dword ptr [ESP + 0x2d0],ECX     ; 004b9408
    XOR EAX,EAX                         ; 004b940f
        ;   Label: LAB_004b940f
    MOV AL,byte ptr [ESI]               ; 004b9411
    PUSH EAX                            ; 004b9413
    MOVZX EDI,byte ptr [EBX + 0x1cb80f7] ; 004b9414 | DAT_01cb80f8
    CALL FUN_005b8e40                   ; 004b941b
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004b9420
    CMP EDI,EAX                         ; 004b9423
    JNZ 0x004b942e                      ; 004b9425
        ;   XREF to: 004b942e (CONDITIONAL_JUMP)  ; LAB_004b942e
    INC dword ptr [ESP + 0x1dc]         ; 004b9427
    MOV EDI,dword ptr [ESP + 0x2d0]     ; 004b942e
        ;   Label: LAB_004b942e
    DEC EBX                             ; 004b9435
    INC ESI                             ; 004b9436
    CMP EBX,EDI                         ; 004b9437
    JG 0x004b940f                       ; 004b9439
        ;   XREF to: 004b940f (CONDITIONAL_JUMP)  ; LAB_004b940f
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 004b943b
        ;   Label: LAB_004b943b
    CMP EAX,dword ptr [ESP + 0x1d8]     ; 004b9442
    JNZ 0x004b9490                      ; 004b9449
        ;   XREF to: 004b9490 (CONDITIONAL_JUMP)  ; LAB_004b9490
    XOR CH,CH                           ; 004b944b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b944d
    MOV byte ptr [0x01cb80f8],CH        ; 004b9450 | DAT_01cb80f8
    CMP dword ptr [EAX + 0x1f4],0x0     ; 004b9456
    SETZ AL                             ; 004b945d
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b9460
    AND EAX,0xff                        ; 004b9463
    MOV dword ptr [EBX + 0x1f4],EAX     ; 004b9468
    JZ 0x004ba02b                       ; 004b946e
        ;   XREF to: 004ba02b (CONDITIONAL_JUMP)  ; LAB_004ba02b
    PUSH 0x40a00000                     ; 004b9474
    PUSH 0x5d7bad                       ; 004b9479 | = "Event debug on"
    CALL FUN_0050fe80                   ; 004b947e
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
        ;   Label: LAB_004b947e
    ADD ESP,0x4                         ; 004b9483
    PUSH EAX                            ; 004b9486
    PUSH EBX                            ; 004b9487
    CALL FUN_004b31a0                   ; 004b9488
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b31a0()
    ADD ESP,0xc                         ; 004b948d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b9490
        ;   Label: LAB_004b9490
    CMP dword ptr [EAX + 0x22c],0x0     ; 004b9493
    JZ 0x004b9584                       ; 004b949a
        ;   XREF to: 004b9584 (CONDITIONAL_JUMP)  ; LAB_004b9584
    PUSH 0x5d7bcc                       ; 004b94a0 | DAT_005d7bcc
    CALL FUN_0050ff00                   ; 004b94a5
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    MOV EBX,EAX                         ; 004b94aa
    ADD ESP,0x4                         ; 004b94ac
    XOR ECX,ECX                         ; 004b94af
    MOV EDI,EAX                         ; 004b94b1
    MOV dword ptr [ESP + 0x1e4],ECX     ; 004b94b3
    SUB ECX,ECX                         ; 004b94ba
    DEC ECX                             ; 004b94bc
    XOR EAX,EAX                         ; 004b94bd
    SCASB.REPNE ES:EDI                  ; 004b94bf
    NOT ECX                             ; 004b94c1
    DEC ECX                             ; 004b94c3
    MOV dword ptr [ESP + 0x1e0],ECX     ; 004b94c4
    TEST ECX,ECX                        ; 004b94cb
    JLE 0x004b950c                      ; 004b94cd
        ;   XREF to: 004b950c (CONDITIONAL_JUMP)  ; LAB_004b950c
    MOV EAX,ECX                         ; 004b94cf
    MOV ESI,EBX                         ; 004b94d1
    NEG EAX                             ; 004b94d3
    MOV EBX,ECX                         ; 004b94d5
    ADD ECX,EAX                         ; 004b94d7
    MOV dword ptr [ESP + 0x2d4],ECX     ; 004b94d9
    XOR EAX,EAX                         ; 004b94e0
        ;   Label: LAB_004b94e0
    MOV AL,byte ptr [ESI]               ; 004b94e2
    PUSH EAX                            ; 004b94e4
    MOVZX EDI,byte ptr [EBX + 0x1cb80f7] ; 004b94e5 | DAT_01cb80f8
    CALL FUN_005b8e40                   ; 004b94ec
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004b94f1
    CMP EDI,EAX                         ; 004b94f4
    JNZ 0x004b94ff                      ; 004b94f6
        ;   XREF to: 004b94ff (CONDITIONAL_JUMP)  ; LAB_004b94ff
    INC dword ptr [ESP + 0x1e4]         ; 004b94f8
    MOV EDI,dword ptr [ESP + 0x2d4]     ; 004b94ff
        ;   Label: LAB_004b94ff
    DEC EBX                             ; 004b9506
    INC ESI                             ; 004b9507
    CMP EBX,EDI                         ; 004b9508
    JG 0x004b94e0                       ; 004b950a
        ;   XREF to: 004b94e0 (CONDITIONAL_JUMP)  ; LAB_004b94e0
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 004b950c
        ;   Label: LAB_004b950c
    MOV EDX,dword ptr [ESP + 0x1e0]     ; 004b9513
    CMP EAX,EDX                         ; 004b951a
    JNZ 0x004b9584                      ; 004b951c
        ;   XREF to: 004b9584 (CONDITIONAL_JUMP)  ; LAB_004b9584
    XOR AL,DL                           ; 004b951e
    MOV [0x01cb80f8],AL                 ; 004b9520 | DAT_01cb80f8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b9525
    CMP dword ptr [EAX + 0x1f8],0x0     ; 004b9528
    SETZ AL                             ; 004b952f
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b9532
    AND EAX,0xff                        ; 004b9535
    MOV dword ptr [EBX + 0x1f8],EAX     ; 004b953a
    JZ 0x004ba03a                       ; 004b9540
        ;   XREF to: 004ba03a (CONDITIONAL_JUMP)  ; LAB_004ba03a
    PUSH 0x40a00000                     ; 004b9546
    PUSH 0x5d7c00                       ; 004b954b | = "Script debug on"
    CALL FUN_0050fe80                   ; 004b9550
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b9555
    PUSH EAX                            ; 004b9558
    PUSH EBX                            ; 004b9559
    CALL FUN_004b31a0                   ; 004b955a
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b31a0()
    ADD ESP,0xc                         ; 004b955f
    PUSH 0xf0                           ; 004b9562
    PUSH 0x0                            ; 004b9567
    PUSH 0x0                            ; 004b9569
    MOV ECX,dword ptr [0x0061b5a8]      ; 004b956b | DAT_0061b5a8
    PUSH ECX                            ; 004b9571
    MOV dword ptr [EBX + 0x298],0x1     ; 004b9572
    CALL FUN_0052e910                   ; 004b957c
        ;   XREF to: 0052e910 (UNCONDITIONAL_CALL)  ; undefined FUN_0052e910()
        ;   Label: LAB_004b957c
    ADD ESP,0x10                        ; 004b9581
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b9584
        ;   Label: LAB_004b9584
    CMP dword ptr [EAX + 0x22c],0x0     ; 004b9587
    JZ 0x004b9657                       ; 004b958e
        ;   XREF to: 004b9657 (CONDITIONAL_JUMP)  ; LAB_004b9657
    PUSH 0x5d7c21                       ; 004b9594 | DAT_005d7c21
    CALL FUN_0050ff00                   ; 004b9599
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    MOV EBX,EAX                         ; 004b959e
    ADD ESP,0x4                         ; 004b95a0
    XOR ECX,ECX                         ; 004b95a3
    MOV EDI,EAX                         ; 004b95a5
    MOV dword ptr [ESP + 0x1ec],ECX     ; 004b95a7
    SUB ECX,ECX                         ; 004b95ae
    DEC ECX                             ; 004b95b0
    XOR EAX,EAX                         ; 004b95b1
    SCASB.REPNE ES:EDI                  ; 004b95b3
    NOT ECX                             ; 004b95b5
    DEC ECX                             ; 004b95b7
    MOV dword ptr [ESP + 0x1e8],ECX     ; 004b95b8
    TEST ECX,ECX                        ; 004b95bf
    JLE 0x004b9600                      ; 004b95c1
        ;   XREF to: 004b9600 (CONDITIONAL_JUMP)  ; LAB_004b9600
    MOV EAX,ECX                         ; 004b95c3
    MOV ESI,EBX                         ; 004b95c5
    NEG EAX                             ; 004b95c7
    MOV EBX,ECX                         ; 004b95c9
    ADD ECX,EAX                         ; 004b95cb
    MOV dword ptr [ESP + 0x2d8],ECX     ; 004b95cd
    XOR EAX,EAX                         ; 004b95d4
        ;   Label: LAB_004b95d4
    MOV AL,byte ptr [ESI]               ; 004b95d6
    PUSH EAX                            ; 004b95d8
    MOVZX EDI,byte ptr [EBX + 0x1cb80f7] ; 004b95d9 | DAT_01cb80f8
    CALL FUN_005b8e40                   ; 004b95e0
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004b95e5
    CMP EDI,EAX                         ; 004b95e8
    JNZ 0x004b95f3                      ; 004b95ea
        ;   XREF to: 004b95f3 (CONDITIONAL_JUMP)  ; LAB_004b95f3
    INC dword ptr [ESP + 0x1ec]         ; 004b95ec
    MOV EDI,dword ptr [ESP + 0x2d8]     ; 004b95f3
        ;   Label: LAB_004b95f3
    DEC EBX                             ; 004b95fa
    INC ESI                             ; 004b95fb
    CMP EBX,EDI                         ; 004b95fc
    JG 0x004b95d4                       ; 004b95fe
        ;   XREF to: 004b95d4 (CONDITIONAL_JUMP)  ; LAB_004b95d4
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 004b9600
        ;   Label: LAB_004b9600
    MOV EDX,dword ptr [ESP + 0x1e8]     ; 004b9607
    CMP EAX,EDX                         ; 004b960e
    JNZ 0x004b9657                      ; 004b9610
        ;   XREF to: 004b9657 (CONDITIONAL_JUMP)  ; LAB_004b9657
    XOR AH,DH                           ; 004b9612
    MOV byte ptr [0x01cb80f8],AH        ; 004b9614 | DAT_01cb80f8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b961a
    CMP dword ptr [EAX + 0x214],0x0     ; 004b961d
    SETZ AL                             ; 004b9624
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b9627
    AND EAX,0xff                        ; 004b962a
    MOV dword ptr [EBX + 0x214],EAX     ; 004b962f
    JZ 0x004ba076                       ; 004b9635
        ;   XREF to: 004ba076 (CONDITIONAL_JUMP)  ; LAB_004ba076
    PUSH 0x40a00000                     ; 004b963b
    PUSH 0x5d7c55                       ; 004b9640 | = "Memory debugging on"
    CALL FUN_0050fe80                   ; 004b9645
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
        ;   Label: LAB_004b9645
    ADD ESP,0x4                         ; 004b964a
    PUSH EAX                            ; 004b964d
    PUSH EBX                            ; 004b964e
    CALL FUN_004b31a0                   ; 004b964f
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b31a0()
    ADD ESP,0xc                         ; 004b9654
    PUSH 0x5d7c7e                       ; 004b9657 | DAT_005d7c7e
        ;   Label: LAB_004b9657
    CALL FUN_0050ff00                   ; 004b965c
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR ESI,ESI                         ; 004b9661
    ADD ESP,0x4                         ; 004b9663
    MOV EDI,EAX                         ; 004b9666
    MOV EBX,EAX                         ; 004b9668
    SUB ECX,ECX                         ; 004b966a
    DEC ECX                             ; 004b966c
    XOR EAX,EAX                         ; 004b966d
    SCASB.REPNE ES:EDI                  ; 004b966f
    NOT ECX                             ; 004b9671
    DEC ECX                             ; 004b9673
    MOV dword ptr [ESP + 0x1f0],ECX     ; 004b9674
    TEST ECX,ECX                        ; 004b967b
    JLE 0x004b96c1                      ; 004b967d
        ;   XREF to: 004b96c1 (CONDITIONAL_JUMP)  ; LAB_004b96c1
    MOV EAX,ECX                         ; 004b967f
    NEG EAX                             ; 004b9681
    MOV EDI,ECX                         ; 004b9683
    ADD ECX,EAX                         ; 004b9685
    MOV dword ptr [ESP + 0x2dc],ECX     ; 004b9687
    XOR EAX,EAX                         ; 004b968e
        ;   Label: LAB_004b968e
    MOV AL,byte ptr [EDI + 0x1cb80f7]   ; 004b9690 | DAT_01cb80f8
    MOV dword ptr [ESP + 0x350],EAX     ; 004b9696
    XOR EAX,EAX                         ; 004b969d
    MOV AL,byte ptr [EBX]               ; 004b969f
    PUSH EAX                            ; 004b96a1
    CALL FUN_005b8e40                   ; 004b96a2
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004b96a7
    CMP EAX,dword ptr [ESP + 0x350]     ; 004b96aa
    JNZ 0x004b96b4                      ; 004b96b1
        ;   XREF to: 004b96b4 (CONDITIONAL_JUMP)  ; LAB_004b96b4
    INC ESI                             ; 004b96b3
    MOV EDX,dword ptr [ESP + 0x2dc]     ; 004b96b4
        ;   Label: LAB_004b96b4
    DEC EDI                             ; 004b96bb
    INC EBX                             ; 004b96bc
    CMP EDI,EDX                         ; 004b96bd
    JG 0x004b968e                       ; 004b96bf
        ;   XREF to: 004b968e (CONDITIONAL_JUMP)  ; LAB_004b968e
    CMP ESI,dword ptr [ESP + 0x1f0]     ; 004b96c1
        ;   Label: LAB_004b96c1
    JNZ 0x004b9719                      ; 004b96c8
        ;   XREF to: 004b9719 (CONDITIONAL_JUMP)  ; LAB_004b9719
    PUSH 0x40a00000                     ; 004b96ca
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b96cf
    XOR DL,DL                           ; 004b96d2
    PUSH 0x5d7cb2                       ; 004b96d4 | = "Manual aim enabled"
    MOV byte ptr [0x01cb80f8],DL        ; 004b96d9 | DAT_01cb80f8
    MOV dword ptr [EAX + 0xd8],0x2      ; 004b96df
    CALL FUN_0050fe80                   ; 004b96e9
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b96ee
    PUSH EAX                            ; 004b96f1
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b96f2
    PUSH EBX                            ; 004b96f5
    CALL FUN_004b31a0                   ; 004b96f6
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b31a0()
    MOV EAX,[0x01cedef4]                ; 004b96fb | DAT_01cedef4
    ADD ESP,0xc                         ; 004b9700
    MOV EBX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b9703
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b970a
    MOV EAX,dword ptr [EAX + 0xd8]      ; 004b970d
    MOV dword ptr [EBX + 0x24378],EAX   ; 004b9713
    PUSH 0x5d7cc5                       ; 004b9719 | DAT_005d7cc5
        ;   Label: LAB_004b9719
    CALL FUN_0050ff00                   ; 004b971e
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR ESI,ESI                         ; 004b9723
    ADD ESP,0x4                         ; 004b9725
    MOV EDI,EAX                         ; 004b9728
    MOV EBX,EAX                         ; 004b972a
    SUB ECX,ECX                         ; 004b972c
    DEC ECX                             ; 004b972e
    XOR EAX,EAX                         ; 004b972f
    SCASB.REPNE ES:EDI                  ; 004b9731
    NOT ECX                             ; 004b9733
    DEC ECX                             ; 004b9735
    MOV dword ptr [ESP + 0x1f4],ECX     ; 004b9736
    TEST ECX,ECX                        ; 004b973d
    JLE 0x004b9783                      ; 004b973f
        ;   XREF to: 004b9783 (CONDITIONAL_JUMP)  ; LAB_004b9783
    MOV EAX,ECX                         ; 004b9741
    NEG EAX                             ; 004b9743
    MOV EDI,ECX                         ; 004b9745
    ADD ECX,EAX                         ; 004b9747
    MOV dword ptr [ESP + 0x2e0],ECX     ; 004b9749
    XOR EAX,EAX                         ; 004b9750
        ;   Label: LAB_004b9750
    MOV AL,byte ptr [EDI + 0x1cb80f7]   ; 004b9752 | DAT_01cb80f8
    MOV dword ptr [ESP + 0x350],EAX     ; 004b9758
    XOR EAX,EAX                         ; 004b975f
    MOV AL,byte ptr [EBX]               ; 004b9761
    PUSH EAX                            ; 004b9763
    CALL FUN_005b8e40                   ; 004b9764
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004b9769
    CMP EAX,dword ptr [ESP + 0x350]     ; 004b976c
    JNZ 0x004b9776                      ; 004b9773
        ;   XREF to: 004b9776 (CONDITIONAL_JUMP)  ; LAB_004b9776
    INC ESI                             ; 004b9775
    MOV ECX,dword ptr [ESP + 0x2e0]     ; 004b9776
        ;   Label: LAB_004b9776
    DEC EDI                             ; 004b977d
    INC EBX                             ; 004b977e
    CMP EDI,ECX                         ; 004b977f
    JG 0x004b9750                       ; 004b9781
        ;   XREF to: 004b9750 (CONDITIONAL_JUMP)  ; LAB_004b9750
    CMP ESI,dword ptr [ESP + 0x1f4]     ; 004b9783
        ;   Label: LAB_004b9783
    JNZ 0x004b97d8                      ; 004b978a
        ;   XREF to: 004b97d8 (CONDITIONAL_JUMP)  ; LAB_004b97d8
    PUSH 0x40a00000                     ; 004b978c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b9791
    XOR DH,DH                           ; 004b9794
    PUSH 0x5d7cf7                       ; 004b9796 | = "Auto aim enabled"
    MOV byte ptr [0x01cb80f8],DH        ; 004b979b | DAT_01cb80f8
    MOV dword ptr [EAX + 0xd8],0x0      ; 004b97a1
    CALL FUN_0050fe80                   ; 004b97ab
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b97b0
    PUSH EAX                            ; 004b97b3
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b97b4
    PUSH ESI                            ; 004b97b7
    CALL FUN_004b31a0                   ; 004b97b8
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b31a0()
    MOV EAX,[0x01cedef4]                ; 004b97bd | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b97c2
    MOV EBX,dword ptr [ESI + 0xd8]      ; 004b97c9
    ADD ESP,0xc                         ; 004b97cf
    MOV dword ptr [EAX + 0x24378],EBX   ; 004b97d2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b97d8
        ;   Label: LAB_004b97d8
    CMP dword ptr [EAX + 0x22c],0x0     ; 004b97db
    JZ 0x004b9942                       ; 004b97e2
        ;   XREF to: 004b9942 (CONDITIONAL_JUMP)  ; LAB_004b9942
    PUSH 0x5d7d08                       ; 004b97e8 | DAT_005d7d08
    CALL FUN_0050ff00                   ; 004b97ed
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    MOV EBX,EAX                         ; 004b97f2
    ADD ESP,0x4                         ; 004b97f4
    XOR EAX,EAX                         ; 004b97f7
    MOV EDI,EBX                         ; 004b97f9
    MOV dword ptr [ESP + 0x1fc],EAX     ; 004b97fb
    SUB ECX,ECX                         ; 004b9802
    DEC ECX                             ; 004b9804
    XOR EAX,EAX                         ; 004b9805
    SCASB.REPNE ES:EDI                  ; 004b9807
    NOT ECX                             ; 004b9809
    DEC ECX                             ; 004b980b
    MOV dword ptr [ESP + 0x1f8],ECX     ; 004b980c
    TEST ECX,ECX                        ; 004b9813
    JLE 0x004b9854                      ; 004b9815
        ;   XREF to: 004b9854 (CONDITIONAL_JUMP)  ; LAB_004b9854
    MOV EAX,ECX                         ; 004b9817
    MOV ESI,EBX                         ; 004b9819
    NEG EAX                             ; 004b981b
    MOV EBX,ECX                         ; 004b981d
    ADD ECX,EAX                         ; 004b981f
    MOV dword ptr [ESP + 0x2e4],ECX     ; 004b9821
    XOR EAX,EAX                         ; 004b9828
        ;   Label: LAB_004b9828
    MOV AL,byte ptr [ESI]               ; 004b982a
    PUSH EAX                            ; 004b982c
    MOVZX EDI,byte ptr [EBX + 0x1cb80f7] ; 004b982d | DAT_01cb80f8
    CALL FUN_005b8e40                   ; 004b9834
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004b9839
    CMP EDI,EAX                         ; 004b983c
    JNZ 0x004b9847                      ; 004b983e
        ;   XREF to: 004b9847 (CONDITIONAL_JUMP)  ; LAB_004b9847
    INC dword ptr [ESP + 0x1fc]         ; 004b9840
    MOV ECX,dword ptr [ESP + 0x2e4]     ; 004b9847
        ;   Label: LAB_004b9847
    DEC EBX                             ; 004b984e
    INC ESI                             ; 004b984f
    CMP EBX,ECX                         ; 004b9850
    JG 0x004b9828                       ; 004b9852
        ;   XREF to: 004b9828 (CONDITIONAL_JUMP)  ; LAB_004b9828
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 004b9854
        ;   Label: LAB_004b9854
    CMP EAX,dword ptr [ESP + 0x1f8]     ; 004b985b
    JNZ 0x004b9942                      ; 004b9862
        ;   XREF to: 004b9942 (CONDITIONAL_JUMP)  ; LAB_004b9942
    PUSH 0x1                            ; 004b9868
    PUSH 0x43700000                     ; 004b986a
    PUSH 0x3e800000                     ; 004b986f
    PUSH 0x1                            ; 004b9874
    PUSH 0x6164a0                       ; 004b9876 | DAT_006164a0
    MOV EAX,[0x006138e0]                ; 004b987b | DAT_006138e0
    XOR BL,BL                           ; 004b9880
    PUSH 0x5d7217                       ; 004b9882 | s_Enter_Movie_FPS_005d7216+1
    XOR ESI,ESI                         ; 004b9887
    MOV byte ptr [0x01cb80f8],BL        ; 004b9889 | DAT_01cb80f8
    PUSH EAX                            ; 004b988f
    MOV dword ptr [0x01cb80d4],ESI      ; 004b9890 | DAT_01cb80d4
    MOV dword ptr [0x01cb80dc],ESI      ; 004b9896 | DAT_01cb80dc
    CALL FUN_0047d800                   ; 004b989c
        ;   XREF to: 0047d800 (UNCONDITIONAL_CALL)  ; undefined FUN_0047d800()
    ADD ESP,0x1c                        ; 004b98a1
    TEST EAX,EAX                        ; 004b98a4
    JZ 0x004b9942                       ; 004b98a6
        ;   XREF to: 004b9942 (CONDITIONAL_JUMP)  ; LAB_004b9942
    PUSH 0x1                            ; 004b98ac
    PUSH 0x1869f                        ; 004b98ae
    PUSH ESI                            ; 004b98b3
    PUSH 0x1                            ; 004b98b4
    PUSH 0x1cb80d8                      ; 004b98b6 | DAT_01cb80d8
    PUSH 0x5d7227                       ; 004b98bb | = "Enter number of frames to record (or ..."
    MOV EDX,dword ptr [0x006138e0]      ; 004b98c0 | DAT_006138e0
    PUSH EDX                            ; 004b98c6
    CALL FUN_0047d730                   ; 004b98c7
        ;   XREF to: 0047d730 (UNCONDITIONAL_CALL)  ; undefined FUN_0047d730()
    ADD ESP,0x1c                        ; 004b98cc
    TEST EAX,EAX                        ; 004b98cf
    JZ 0x004b9942                       ; 004b98d1
        ;   XREF to: 004b9942 (CONDITIONAL_JUMP)  ; LAB_004b9942
    PUSH 0x1                            ; 004b98d3
    PUSH 0x270f                         ; 004b98d5
    PUSH 0x1                            ; 004b98da
    PUSH 0x1                            ; 004b98dc
    PUSH 0x6164a4                       ; 004b98de | DAT_006164a4
    PUSH 0x5d7271                       ; 004b98e3 | = "Enter image width"
    MOV ECX,dword ptr [0x006138e0]      ; 004b98e8 | DAT_006138e0
    PUSH ECX                            ; 004b98ee
    CALL FUN_0047d730                   ; 004b98ef
        ;   XREF to: 0047d730 (UNCONDITIONAL_CALL)  ; undefined FUN_0047d730()
    ADD ESP,0x1c                        ; 004b98f4
    TEST EAX,EAX                        ; 004b98f7
    JZ 0x004b9942                       ; 004b98f9
        ;   XREF to: 004b9942 (CONDITIONAL_JUMP)  ; LAB_004b9942
    PUSH 0x1                            ; 004b98fb
    PUSH 0x270f                         ; 004b98fd
    PUSH 0x1                            ; 004b9902
    PUSH 0x1                            ; 004b9904
    PUSH 0x6164a8                       ; 004b9906 | DAT_006164a8
    PUSH 0x5d7283                       ; 004b990b | = "Enter image height"
    MOV EBX,dword ptr [0x006138e0]      ; 004b9910 | DAT_006138e0
    PUSH EBX                            ; 004b9916
    CALL FUN_0047d730                   ; 004b9917
        ;   XREF to: 0047d730 (UNCONDITIONAL_CALL)  ; undefined FUN_0047d730()
    ADD ESP,0x1c                        ; 004b991c
    TEST EAX,EAX                        ; 004b991f
    JZ 0x004b9942                       ; 004b9921
        ;   XREF to: 004b9942 (CONDITIONAL_JUMP)  ; LAB_004b9942
    PUSH 0x5d7296                       ; 004b9923 | = "Press CTRL+V to begin recording."
    MOV ESI,dword ptr [0x006138e0]      ; 004b9928 | DAT_006138e0
    PUSH ESI                            ; 004b992e
    MOV EDI,0x1                         ; 004b992f
    CALL FUN_0047bda0                   ; 004b9934
        ;   XREF to: 0047bda0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047bda0()
    ADD ESP,0x8                         ; 004b9939
    MOV dword ptr [0x01cb80d0],EDI      ; 004b993c | DAT_01cb80d0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b9942
        ;   Label: LAB_004b9942
    CMP dword ptr [EAX + 0x22c],0x0     ; 004b9945
    JZ 0x004b99f2                       ; 004b994c
        ;   XREF to: 004b99f2 (CONDITIONAL_JUMP)  ; LAB_004b99f2
    PUSH 0x5d7d3b                       ; 004b9952 | DAT_005d7d3b
    CALL FUN_0050ff00                   ; 004b9957
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    MOV EBX,EAX                         ; 004b995c
    ADD ESP,0x4                         ; 004b995e
    XOR ECX,ECX                         ; 004b9961
    MOV EDI,EAX                         ; 004b9963
    MOV dword ptr [ESP + 0x204],ECX     ; 004b9965
    SUB ECX,ECX                         ; 004b996c
    DEC ECX                             ; 004b996e
    XOR EAX,EAX                         ; 004b996f
    SCASB.REPNE ES:EDI                  ; 004b9971
    NOT ECX                             ; 004b9973
    DEC ECX                             ; 004b9975
    MOV dword ptr [ESP + 0x200],ECX     ; 004b9976
    TEST ECX,ECX                        ; 004b997d
    JLE 0x004b99be                      ; 004b997f
        ;   XREF to: 004b99be (CONDITIONAL_JUMP)  ; LAB_004b99be
    MOV EAX,ECX                         ; 004b9981
    MOV ESI,EBX                         ; 004b9983
    NEG EAX                             ; 004b9985
    MOV EBX,ECX                         ; 004b9987
    ADD ECX,EAX                         ; 004b9989
    MOV dword ptr [ESP + 0x2e8],ECX     ; 004b998b
    XOR EAX,EAX                         ; 004b9992
        ;   Label: LAB_004b9992
    MOV AL,byte ptr [ESI]               ; 004b9994
    PUSH EAX                            ; 004b9996
    MOVZX EDI,byte ptr [EBX + 0x1cb80f7] ; 004b9997 | DAT_01cb80f8
    CALL FUN_005b8e40                   ; 004b999e
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004b99a3
    CMP EDI,EAX                         ; 004b99a6
    JNZ 0x004b99b1                      ; 004b99a8
        ;   XREF to: 004b99b1 (CONDITIONAL_JUMP)  ; LAB_004b99b1
    INC dword ptr [ESP + 0x204]         ; 004b99aa
    MOV EDI,dword ptr [ESP + 0x2e8]     ; 004b99b1
        ;   Label: LAB_004b99b1
    DEC EBX                             ; 004b99b8
    INC ESI                             ; 004b99b9
    CMP EBX,EDI                         ; 004b99ba
    JG 0x004b9992                       ; 004b99bc
        ;   XREF to: 004b9992 (CONDITIONAL_JUMP)  ; LAB_004b9992
    MOV EAX,dword ptr [ESP + 0x204]     ; 004b99be
        ;   Label: LAB_004b99be
    CMP EAX,dword ptr [ESP + 0x200]     ; 004b99c5
    JNZ 0x004b99f2                      ; 004b99cc
        ;   XREF to: 004b99f2 (CONDITIONAL_JUMP)  ; LAB_004b99f2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b99ce
    XOR BH,BH                           ; 004b99d1
    MOV ECX,dword ptr [EAX + 0x238]     ; 004b99d3
    MOV byte ptr [0x01cb80f8],BH        ; 004b99d9 | DAT_01cb80f8
    TEST ECX,ECX                        ; 004b99df
    SETZ AL                             ; 004b99e1
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b99e4
    AND EAX,0xff                        ; 004b99e7
    MOV dword ptr [EBX + 0x238],EAX     ; 004b99ec
    PUSH 0x5d7d72                       ; 004b99f2 | DAT_005d7d72
        ;   Label: LAB_004b99f2
    CALL FUN_0050ff00                   ; 004b99f7
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR EBX,EBX                         ; 004b99fc
    ADD ESP,0x4                         ; 004b99fe
    MOV EDI,EAX                         ; 004b9a01
    MOV ESI,EAX                         ; 004b9a03
    SUB ECX,ECX                         ; 004b9a05
    DEC ECX                             ; 004b9a07
    XOR EAX,EAX                         ; 004b9a08
    SCASB.REPNE ES:EDI                  ; 004b9a0a
    NOT ECX                             ; 004b9a0c
    DEC ECX                             ; 004b9a0e
    MOV dword ptr [ESP + 0x208],ECX     ; 004b9a0f
    TEST ECX,ECX                        ; 004b9a16
    JLE 0x004b9a5c                      ; 004b9a18
        ;   XREF to: 004b9a5c (CONDITIONAL_JUMP)  ; LAB_004b9a5c
    MOV EAX,ECX                         ; 004b9a1a
    NEG EAX                             ; 004b9a1c
    MOV EDI,ECX                         ; 004b9a1e
    ADD ECX,EAX                         ; 004b9a20
    MOV dword ptr [ESP + 0x2ec],ECX     ; 004b9a22
    XOR EAX,EAX                         ; 004b9a29
        ;   Label: LAB_004b9a29
    MOV AL,byte ptr [EDI + 0x1cb80f7]   ; 004b9a2b | DAT_01cb80f8
    MOV dword ptr [ESP + 0x350],EAX     ; 004b9a31
    XOR EAX,EAX                         ; 004b9a38
    MOV AL,byte ptr [ESI]               ; 004b9a3a
    PUSH EAX                            ; 004b9a3c
    CALL FUN_005b8e40                   ; 004b9a3d
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004b9a42
    CMP EAX,dword ptr [ESP + 0x350]     ; 004b9a45
    JNZ 0x004b9a4f                      ; 004b9a4c
        ;   XREF to: 004b9a4f (CONDITIONAL_JUMP)  ; LAB_004b9a4f
    INC EBX                             ; 004b9a4e
    MOV EAX,dword ptr [ESP + 0x2ec]     ; 004b9a4f
        ;   Label: LAB_004b9a4f
    DEC EDI                             ; 004b9a56
    INC ESI                             ; 004b9a57
    CMP EDI,EAX                         ; 004b9a58
    JG 0x004b9a29                       ; 004b9a5a
        ;   XREF to: 004b9a29 (CONDITIONAL_JUMP)  ; LAB_004b9a29
    CMP EBX,dword ptr [ESP + 0x208]     ; 004b9a5c
        ;   Label: LAB_004b9a5c
    JNZ 0x004b9b1d                      ; 004b9a63
        ;   XREF to: 004b9b1d (CONDITIONAL_JUMP)  ; LAB_004b9b1d
    MOV EAX,[0x01cedef4]                ; 004b9a69 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b9a6e
    PUSH 0x5d7dab                       ; 004b9a75 | = "Skeleton_key"
    ADD EAX,0x2437c                     ; 004b9a7a
    XOR CL,CL                           ; 004b9a7f
    PUSH EAX                            ; 004b9a81
    MOV byte ptr [0x01cb80f8],CL        ; 004b9a82 | DAT_01cb80f8
    CALL FUN_004db830                   ; 004b9a88
        ;   XREF to: 004db830 (UNCONDITIONAL_CALL)  ; undefined FUN_004db830()
    ADD ESP,0x8                         ; 004b9a8d
    TEST EAX,EAX                        ; 004b9a90
    JNZ 0x004b9b1d                      ; 004b9a92
        ;   XREF to: 004b9b1d (CONDITIONAL_JUMP)  ; LAB_004b9b1d
    PUSH 0x5d7db8                       ; 004b9a98 | = "CKeyActor"
    CALL FUN_0040c5a0                   ; 004b9a9d
        ;   XREF to: 0040c5a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c5a0()
    ADD ESP,0x4                         ; 004b9aa2
    MOV EBX,EAX                         ; 004b9aa5
    PUSH EBX                            ; 004b9aa7
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 004b9aa8
    MOV ESI,0x5d7dc2                    ; 004b9aae | = "Skeleton_key"
    CALL dword ptr [EAX + 0x8]          ; 004b9ab3
    ADD ESP,0x4                         ; 004b9ab6
    MOV EDI,EBX                         ; 004b9ab9
    MOV dword ptr [EBX + 0x430],0xffffffff ; 004b9abb
    PUSH EDI                            ; 004b9ac5
    MOV AL,byte ptr [ESI]               ; 004b9ac6 | = "Skeleton_key" | s_eleton_key_005d7dc2+2
        ;   Label: LAB_004b9ac6
    MOV byte ptr [EDI],AL               ; 004b9ac8
    CMP AL,0x0                          ; 004b9aca
    JZ 0x004b9ade                       ; 004b9acc
        ;   XREF to: 004b9ade (CONDITIONAL_JUMP)  ; LAB_004b9ade
    MOV AL,byte ptr [ESI + 0x1]         ; 004b9ace | s_keleton_key_005d7dc2+1 | s_leton_key_005d7dc2+3
    ADD ESI,0x2                         ; 004b9ad1
    MOV byte ptr [EDI + 0x1],AL         ; 004b9ad4
    ADD EDI,0x2                         ; 004b9ad7
    CMP AL,0x0                          ; 004b9ada
    JNZ 0x004b9ac6                      ; 004b9adc
        ;   XREF to: 004b9ac6 (CONDITIONAL_JUMP)  ; LAB_004b9ac6
    POP EDI                             ; 004b9ade
        ;   Label: LAB_004b9ade
    PUSH 0x0                            ; 004b9adf
    MOV EAX,[0x01cedef4]                ; 004b9ae1 | DAT_01cedef4
    PUSH 0x1                            ; 004b9ae6
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b9ae8
    PUSH EBX                            ; 004b9aef
    ADD EAX,0x2437c                     ; 004b9af0
    PUSH EAX                            ; 004b9af5
    CALL FUN_004dadb0                   ; 004b9af6
        ;   XREF to: 004dadb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004dadb0()
    ADD ESP,0x10                        ; 004b9afb
    PUSH 0x40a00000                     ; 004b9afe
    PUSH 0x5d7dcf                       ; 004b9b03 | = "You have the skeleton key"
    CALL FUN_0050fe80                   ; 004b9b08
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b9b0d
    PUSH EAX                            ; 004b9b10
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b9b11
    PUSH ECX                            ; 004b9b14
    CALL FUN_004b31a0                   ; 004b9b15
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b31a0()
    ADD ESP,0xc                         ; 004b9b1a
    PUSH 0x5d7de9                       ; 004b9b1d | DAT_005d7de9
        ;   Label: LAB_004b9b1d
    CALL FUN_0050ff00                   ; 004b9b22
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR ESI,ESI                         ; 004b9b27
    ADD ESP,0x4                         ; 004b9b29
    MOV EDI,EAX                         ; 004b9b2c
    MOV EBX,EAX                         ; 004b9b2e
    SUB ECX,ECX                         ; 004b9b30
    DEC ECX                             ; 004b9b32
    XOR EAX,EAX                         ; 004b9b33
    SCASB.REPNE ES:EDI                  ; 004b9b35
    NOT ECX                             ; 004b9b37
    DEC ECX                             ; 004b9b39
    MOV dword ptr [ESP + 0x20c],ECX     ; 004b9b3a
    TEST ECX,ECX                        ; 004b9b41
    JLE 0x004b9b87                      ; 004b9b43
        ;   XREF to: 004b9b87 (CONDITIONAL_JUMP)  ; LAB_004b9b87
    MOV EAX,ECX                         ; 004b9b45
    NEG EAX                             ; 004b9b47
    MOV EDI,ECX                         ; 004b9b49
    ADD ECX,EAX                         ; 004b9b4b
    MOV dword ptr [ESP + 0x2f0],ECX     ; 004b9b4d
    XOR EAX,EAX                         ; 004b9b54
        ;   Label: LAB_004b9b54
    MOV AL,byte ptr [EDI + 0x1cb80f7]   ; 004b9b56 | DAT_01cb80f8
    MOV dword ptr [ESP + 0x350],EAX     ; 004b9b5c
    XOR EAX,EAX                         ; 004b9b63
    MOV AL,byte ptr [EBX]               ; 004b9b65
    PUSH EAX                            ; 004b9b67
    CALL FUN_005b8e40                   ; 004b9b68
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004b9b6d
    CMP EAX,dword ptr [ESP + 0x350]     ; 004b9b70
    JNZ 0x004b9b7a                      ; 004b9b77
        ;   XREF to: 004b9b7a (CONDITIONAL_JUMP)  ; LAB_004b9b7a
    INC ESI                             ; 004b9b79
    MOV ECX,dword ptr [ESP + 0x2f0]     ; 004b9b7a
        ;   Label: LAB_004b9b7a
    DEC EDI                             ; 004b9b81
    INC EBX                             ; 004b9b82
    CMP EDI,ECX                         ; 004b9b83
    JG 0x004b9b54                       ; 004b9b85
        ;   XREF to: 004b9b54 (CONDITIONAL_JUMP)  ; LAB_004b9b54
    CMP ESI,dword ptr [ESP + 0x20c]     ; 004b9b87
        ;   Label: LAB_004b9b87
    JNZ 0x004b9bec                      ; 004b9b8e
        ;   XREF to: 004b9bec (CONDITIONAL_JUMP)  ; LAB_004b9bec
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b9b90
    XOR CH,CH                           ; 004b9b93
    MOV ESI,dword ptr [EAX + 0x1ec]     ; 004b9b95
    MOV byte ptr [0x01cb80f8],CH        ; 004b9b9b | DAT_01cb80f8
    TEST ESI,ESI                        ; 004b9ba1
    SETZ AL                             ; 004b9ba3
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b9ba6
    AND EAX,0xff                        ; 004b9ba9
    MOV dword ptr [EBX + 0x1ec],EAX     ; 004b9bae
    JZ 0x004ba085                       ; 004b9bb4
        ;   XREF to: 004ba085 (CONDITIONAL_JUMP)  ; LAB_004ba085
    PUSH 0x40a00000                     ; 004b9bba
    PUSH 0x5d7e1f                       ; 004b9bbf | = "God mode enabled"
    CALL FUN_0050fe80                   ; 004b9bc4
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b9bc9
    PUSH EAX                            ; 004b9bcc
    PUSH EBX                            ; 004b9bcd
    CALL FUN_004b31a0                   ; 004b9bce
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b31a0()
    MOV EAX,[0x01cedef4]                ; 004b9bd3 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b9bd8
    ADD ESP,0xc                         ; 004b9bdf
    MOV dword ptr [EAX + 0x25a8],0x42c80000 ; 004b9be2
    PUSH 0x5d7e42                       ; 004b9bec | DAT_005d7e42
        ;   Label: LAB_004b9bec
    CALL FUN_0050ff00                   ; 004b9bf1
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    MOV EBX,EAX                         ; 004b9bf6
    ADD ESP,0x4                         ; 004b9bf8
    XOR ECX,ECX                         ; 004b9bfb
    MOV EDI,EAX                         ; 004b9bfd
    MOV dword ptr [ESP + 0x214],ECX     ; 004b9bff
    SUB ECX,ECX                         ; 004b9c06
    DEC ECX                             ; 004b9c08
    XOR EAX,EAX                         ; 004b9c09
    SCASB.REPNE ES:EDI                  ; 004b9c0b
    NOT ECX                             ; 004b9c0d
    DEC ECX                             ; 004b9c0f
    MOV dword ptr [ESP + 0x210],ECX     ; 004b9c10
    TEST ECX,ECX                        ; 004b9c17
    JLE 0x004b9c56                      ; 004b9c19
        ;   XREF to: 004b9c56 (CONDITIONAL_JUMP)  ; LAB_004b9c56
    MOV EAX,ECX                         ; 004b9c1b
    NEG EAX                             ; 004b9c1d
    MOV EDI,ECX                         ; 004b9c1f
    ADD ECX,EAX                         ; 004b9c21
    MOV dword ptr [ESP + 0x2f4],ECX     ; 004b9c23
    XOR EAX,EAX                         ; 004b9c2a
        ;   Label: LAB_004b9c2a
    MOV AL,byte ptr [EBX]               ; 004b9c2c
    PUSH EAX                            ; 004b9c2e
    MOVZX ESI,byte ptr [EDI + 0x1cb80f7] ; 004b9c2f | DAT_01cb80f8
    CALL FUN_005b8e40                   ; 004b9c36
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004b9c3b
    CMP ESI,EAX                         ; 004b9c3e
    JNZ 0x004b9c49                      ; 004b9c40
        ;   XREF to: 004b9c49 (CONDITIONAL_JUMP)  ; LAB_004b9c49
    INC dword ptr [ESP + 0x214]         ; 004b9c42
    MOV ECX,dword ptr [ESP + 0x2f4]     ; 004b9c49
        ;   Label: LAB_004b9c49
    DEC EDI                             ; 004b9c50
    INC EBX                             ; 004b9c51
    CMP EDI,ECX                         ; 004b9c52
    JG 0x004b9c2a                       ; 004b9c54
        ;   XREF to: 004b9c2a (CONDITIONAL_JUMP)  ; LAB_004b9c2a
    MOV EAX,dword ptr [ESP + 0x214]     ; 004b9c56
        ;   Label: LAB_004b9c56
    MOV EBX,dword ptr [ESP + 0x210]     ; 004b9c5d
    CMP EAX,EBX                         ; 004b9c64
    JNZ 0x004b9cac                      ; 004b9c66
        ;   XREF to: 004b9cac (CONDITIONAL_JUMP)  ; LAB_004b9cac
    XOR AL,BL                           ; 004b9c68
    MOV [0x01cb80f8],AL                 ; 004b9c6a | DAT_01cb80f8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b9c6f
    CMP dword ptr [EAX + 0x1f0],0x0     ; 004b9c72
    SETZ AL                             ; 004b9c79
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b9c7c
    AND EAX,0xff                        ; 004b9c7f
    MOV dword ptr [EBX + 0x1f0],EAX     ; 004b9c84
    JZ 0x004ba0a6                       ; 004b9c8a
        ;   XREF to: 004ba0a6 (CONDITIONAL_JUMP)  ; LAB_004ba0a6
    PUSH 0x40a00000                     ; 004b9c90
    PUSH 0x5d7e77                       ; 004b9c95 | = "Enemies frozen"
    CALL FUN_0050fe80                   ; 004b9c9a
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
        ;   Label: LAB_004b9c9a
    ADD ESP,0x4                         ; 004b9c9f
    PUSH EAX                            ; 004b9ca2
    PUSH EBX                            ; 004b9ca3
    CALL FUN_004b31a0                   ; 004b9ca4
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b31a0()
    ADD ESP,0xc                         ; 004b9ca9
    PUSH 0x5d7e95                       ; 004b9cac | DAT_005d7e95
        ;   Label: LAB_004b9cac
    CALL FUN_0050ff00                   ; 004b9cb1
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    MOV EBX,EAX                         ; 004b9cb6
    ADD ESP,0x4                         ; 004b9cb8
    XOR ECX,ECX                         ; 004b9cbb
    MOV EDI,EAX                         ; 004b9cbd
    MOV dword ptr [ESP + 0x21c],ECX     ; 004b9cbf
    SUB ECX,ECX                         ; 004b9cc6
    DEC ECX                             ; 004b9cc8
    XOR EAX,EAX                         ; 004b9cc9
    SCASB.REPNE ES:EDI                  ; 004b9ccb
    NOT ECX                             ; 004b9ccd
    DEC ECX                             ; 004b9ccf
    MOV dword ptr [ESP + 0x218],ECX     ; 004b9cd0
    TEST ECX,ECX                        ; 004b9cd7
    JLE 0x004b9d16                      ; 004b9cd9
        ;   XREF to: 004b9d16 (CONDITIONAL_JUMP)  ; LAB_004b9d16
    MOV EAX,ECX                         ; 004b9cdb
    NEG EAX                             ; 004b9cdd
    MOV EDI,ECX                         ; 004b9cdf
    ADD ECX,EAX                         ; 004b9ce1
    MOV dword ptr [ESP + 0x2f8],ECX     ; 004b9ce3
    XOR EAX,EAX                         ; 004b9cea
        ;   Label: LAB_004b9cea
    MOV AL,byte ptr [EBX]               ; 004b9cec
    PUSH EAX                            ; 004b9cee
    MOVZX ESI,byte ptr [EDI + 0x1cb80f7] ; 004b9cef | DAT_01cb80f8
    CALL FUN_005b8e40                   ; 004b9cf6
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004b9cfb
    CMP ESI,EAX                         ; 004b9cfe
    JNZ 0x004b9d09                      ; 004b9d00
        ;   XREF to: 004b9d09 (CONDITIONAL_JUMP)  ; LAB_004b9d09
    INC dword ptr [ESP + 0x21c]         ; 004b9d02
    MOV EAX,dword ptr [ESP + 0x2f8]     ; 004b9d09
        ;   Label: LAB_004b9d09
    DEC EDI                             ; 004b9d10
    INC EBX                             ; 004b9d11
    CMP EDI,EAX                         ; 004b9d12
    JG 0x004b9cea                       ; 004b9d14
        ;   XREF to: 004b9cea (CONDITIONAL_JUMP)  ; LAB_004b9cea
    MOV EAX,dword ptr [ESP + 0x21c]     ; 004b9d16
        ;   Label: LAB_004b9d16
    MOV EDX,dword ptr [ESP + 0x218]     ; 004b9d1d
    CMP EAX,EDX                         ; 004b9d24
    JNZ 0x004b9db1                      ; 004b9d26
        ;   XREF to: 004b9db1 (CONDITIONAL_JUMP)  ; LAB_004b9db1
    PUSH 0x0                            ; 004b9d2c
    XOR AH,DH                           ; 004b9d2e
    PUSH 0x5d7ecb                       ; 004b9d30 | DAT_005d7ecb
    MOV byte ptr [0x01cb80f8],AH        ; 004b9d35 | DAT_01cb80f8
    CALL FUN_004b8e10                   ; 004b9d3b
        ;   XREF to: 004b8e10 (UNCONDITIONAL_CALL)  ; undefined FUN_004b8e10()
    ADD ESP,0x8                         ; 004b9d40
    PUSH 0x0                            ; 004b9d43
    PUSH 0x5d7ed0                       ; 004b9d45 | = "CMelee"
    CALL FUN_004b8e10                   ; 004b9d4a
        ;   XREF to: 004b8e10 (UNCONDITIONAL_CALL)  ; undefined FUN_004b8e10()
    ADD ESP,0x8                         ; 004b9d4f
    PUSH 0x0                            ; 004b9d52
    PUSH 0x5d7ed7                       ; 004b9d54 | = "CMeleeAxe"
    CALL FUN_004b8e10                   ; 004b9d59
        ;   XREF to: 004b8e10 (UNCONDITIONAL_CALL)  ; undefined FUN_004b8e10()
    ADD ESP,0x8                         ; 004b9d5e
    PUSH 0x0                            ; 004b9d61
    PUSH 0x5d7ee1                       ; 004b9d63 | = "CCross"
    CALL FUN_004b8e10                   ; 004b9d68
        ;   XREF to: 004b8e10 (UNCONDITIONAL_CALL)  ; undefined FUN_004b8e10()
    ADD ESP,0x8                         ; 004b9d6d
    PUSH 0x5d7ee8                       ; 004b9d70 | = "Lantern"
    PUSH 0x5d7ef0                       ; 004b9d75 | = "CBoxActor"
    CALL FUN_004b8e10                   ; 004b9d7a
        ;   XREF to: 004b8e10 (UNCONDITIONAL_CALL)  ; undefined FUN_004b8e10()
    ADD ESP,0x8                         ; 004b9d7f
    PUSH 0x47c                          ; 004b9d82
    MOV EDI,0x5d7efa                    ; 004b9d87 | DAT_005d7efa
    XOR ESI,ESI                         ; 004b9d8c
    CALL FUN_005b8be2                   ; 004b9d8e
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8be2()
    ADD ESP,0x4                         ; 004b9d93
    TEST EAX,EAX                        ; 004b9d96
    JZ 0x004ba0b5                       ; 004b9d98
        ;   XREF to: 004ba0b5 (CONDITIONAL_JUMP)  ; LAB_004ba0b5
    PUSH EAX                            ; 004b9d9e
    CALL FUN_0040ddb0                   ; 004b9d9f
        ;   XREF to: 0040ddb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ddb0()
    ADD ESP,0x4                         ; 004b9da4
    MOV EBX,EAX                         ; 004b9da7
    TEST EBX,EBX                        ; 004b9da9
        ;   Label: LAB_004b9da9
    JNZ 0x004ba0bc                      ; 004b9dab
        ;   XREF to: 004ba0bc (CONDITIONAL_JUMP)  ; LAB_004ba0bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b9db1
        ;   Label: LAB_004b9db1
    CMP dword ptr [EAX + 0x22c],0x0     ; 004b9db4
    JZ 0x004ba142                       ; 004b9dbb
        ;   XREF to: 004ba142 (CONDITIONAL_JUMP)  ; LAB_004ba142
    PUSH 0x5d7eff                       ; 004b9dc1 | DAT_005d7eff
    CALL FUN_0050ff00                   ; 004b9dc6
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR ESI,ESI                         ; 004b9dcb
    ADD ESP,0x4                         ; 004b9dcd
    MOV EDI,EAX                         ; 004b9dd0
    MOV EBX,EAX                         ; 004b9dd2
    SUB ECX,ECX                         ; 004b9dd4
    DEC ECX                             ; 004b9dd6
    XOR EAX,EAX                         ; 004b9dd7
    SCASB.REPNE ES:EDI                  ; 004b9dd9
    NOT ECX                             ; 004b9ddb
    DEC ECX                             ; 004b9ddd
    MOV dword ptr [ESP + 0x224],ESI     ; 004b9dde
    MOV dword ptr [ESP + 0x220],ECX     ; 004b9de5
    TEST ECX,ECX                        ; 004b9dec
    JLE 0x004b9e2d                      ; 004b9dee
        ;   XREF to: 004b9e2d (CONDITIONAL_JUMP)  ; LAB_004b9e2d
    MOV EAX,ECX                         ; 004b9df0
    MOV ESI,EBX                         ; 004b9df2
    NEG EAX                             ; 004b9df4
    MOV EBX,ECX                         ; 004b9df6
    ADD ECX,EAX                         ; 004b9df8
    MOV dword ptr [ESP + 0x2fc],ECX     ; 004b9dfa
    XOR EAX,EAX                         ; 004b9e01
        ;   Label: LAB_004b9e01
    MOV AL,byte ptr [ESI]               ; 004b9e03
    PUSH EAX                            ; 004b9e05
    MOVZX EDI,byte ptr [EBX + 0x1cb80f7] ; 004b9e06 | DAT_01cb80f8
    CALL FUN_005b8e40                   ; 004b9e0d
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004b9e12
    CMP EDI,EAX                         ; 004b9e15
    JNZ 0x004b9e20                      ; 004b9e17
        ;   XREF to: 004b9e20 (CONDITIONAL_JUMP)  ; LAB_004b9e20
    INC dword ptr [ESP + 0x224]         ; 004b9e19
    MOV EDX,dword ptr [ESP + 0x2fc]     ; 004b9e20
        ;   Label: LAB_004b9e20
    DEC EBX                             ; 004b9e27
    INC ESI                             ; 004b9e28
    CMP EBX,EDX                         ; 004b9e29
    JG 0x004b9e01                       ; 004b9e2b
        ;   XREF to: 004b9e01 (CONDITIONAL_JUMP)  ; LAB_004b9e01
    MOV EAX,dword ptr [ESP + 0x224]     ; 004b9e2d
        ;   Label: LAB_004b9e2d
    CMP EAX,dword ptr [ESP + 0x220]     ; 004b9e34
    JNZ 0x004ba117                      ; 004b9e3b
        ;   XREF to: 004ba117 (CONDITIONAL_JUMP)  ; LAB_004ba117
    XOR DL,DL                           ; 004b9e41
    MOV byte ptr [0x01cb80f8],DL        ; 004b9e43 | DAT_01cb80f8
    MOV EBX,0x616430                    ; 004b9e49 | DAT_00616430
        ;   Label: LAB_004b9e49
    PUSH 0x1                            ; 004b9e4e
        ;   Label: LAB_004b9e4e
    PUSH 0x64                           ; 004b9e50
    PUSH EBX                            ; 004b9e52 | DAT_00616430
    PUSH 0x5d7f32                       ; 004b9e53 | = "Raise an event"
    MOV EAX,[0x006138e0]                ; 004b9e58 | DAT_006138e0
    PUSH EAX                            ; 004b9e5d
    CALL FUN_0047dae0                   ; 004b9e5e
        ;   XREF to: 0047dae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047dae0()
    ADD ESP,0x14                        ; 004b9e63
    TEST EAX,EAX                        ; 004b9e66
    JZ 0x004ba142                       ; 004b9e68
        ;   XREF to: 004ba142 (CONDITIONAL_JUMP)  ; LAB_004ba142
    PUSH EBX                            ; 004b9e6e | DAT_00616430
    MOV EDX,dword ptr [0x006141f0]      ; 004b9e6f | DAT_006141f0
    PUSH EDX                            ; 004b9e75
    CALL FUN_0048e3e0                   ; 004b9e76
        ;   XREF to: 0048e3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e3e0()
    ADD ESP,0x8                         ; 004b9e7b
    TEST EAX,EAX                        ; 004b9e7e
    JZ 0x004ba296                       ; 004b9e80
        ;   XREF to: 004ba296 (CONDITIONAL_JUMP)  ; LAB_004ba296
    PUSH EAX                            ; 004b9e86
    MOV ECX,dword ptr [0x006138e0]      ; 004b9e87 | DAT_006138e0
    PUSH ECX                            ; 004b9e8d
    CALL FUN_0047be40                   ; 004b9e8e
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047be40()
    ADD ESP,0x8                         ; 004b9e93
    JMP 0x004b9e4e                      ; 004b9e96
        ;   XREF to: 004b9e4e (UNCONDITIONAL_JUMP)  ; LAB_004b9e4e
    PUSH 0x44                           ; 004b9e98
        ;   Label: LAB_004b9e98
    MOV EAX,[0x00617dd4]                ; 004b9e9a | DAT_00617dd4
    PUSH EAX                            ; 004b9e9f | DAT_01d02f84
    MOV EBX,dword ptr [EAX]             ; 004b9ea0 | DAT_01d02f84
    CALL dword ptr [EBX + 0x4]          ; 004b9ea2
    ADD ESP,0x8                         ; 004b9ea5
    TEST EAX,EAX                        ; 004b9ea8
    JZ 0x004b9160                       ; 004b9eaa
        ;   XREF to: 004b9160 (CONDITIONAL_JUMP)  ; LAB_004b9160
    PUSH EDI                            ; 004b9eb0
    PUSH 0x64                           ; 004b9eb1
    LEA EAX,[ESP + 0x108]               ; 004b9eb3
    PUSH EAX                            ; 004b9eba
    PUSH 0x5d7a82                       ; 004b9ebb | = "Enter cheat code"
    CALL FUN_0050fe80                   ; 004b9ec0
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b9ec5
    PUSH EAX                            ; 004b9ec8
    MOV EAX,[0x006138e0]                ; 004b9ec9 | DAT_006138e0
    PUSH EAX                            ; 004b9ece
    CALL FUN_0047db10                   ; 004b9ecf
        ;   XREF to: 0047db10 (UNCONDITIONAL_CALL)  ; undefined FUN_0047db10()
    ADD ESP,0x14                        ; 004b9ed4
    TEST EAX,EAX                        ; 004b9ed7
    JZ 0x004b9160                       ; 004b9ed9
        ;   XREF to: 004b9160 (CONDITIONAL_JUMP)  ; LAB_004b9160
    MOV AH,byte ptr [ESP + 0x100]       ; 004b9edf
    XOR EBX,EBX                         ; 004b9ee6
    TEST AH,AH                          ; 004b9ee8
    JZ 0x004b9160                       ; 004b9eea
        ;   XREF to: 004b9160 (CONDITIONAL_JUMP)  ; LAB_004b9160
    XOR EAX,EAX                         ; 004b9ef0
        ;   Label: LAB_004b9ef0
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x100] ; 004b9ef2
    PUSH EAX                            ; 004b9ef9
    CALL FUN_0058eb70                   ; 004b9efa
        ;   XREF to: 0058eb70 (UNCONDITIONAL_CALL)  ; undefined FUN_0058eb70()
    ADD ESP,0x4                         ; 004b9eff
    MOV DL,byte ptr [ESP + EBX*0x1 + 0x101] ; 004b9f02
    INC EBX                             ; 004b9f09
    TEST DL,DL                          ; 004b9f0a
    JNZ 0x004b9ef0                      ; 004b9f0c
        ;   XREF to: 004b9ef0 (CONDITIONAL_JUMP)  ; LAB_004b9ef0
    JMP 0x004b9160                      ; 004b9f0e
        ;   XREF to: 004b9160 (UNCONDITIONAL_JUMP)  ; LAB_004b9160
    PUSH 0x5d7ac7                       ; 004b9f13 | DAT_005d7ac7
        ;   Label: LAB_004b9f13
    CALL FUN_0050ff00                   ; 004b9f18
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR ESI,ESI                         ; 004b9f1d
    ADD ESP,0x4                         ; 004b9f1f
    MOV EDI,EAX                         ; 004b9f22
    MOV EBX,EAX                         ; 004b9f24
    SUB ECX,ECX                         ; 004b9f26
    DEC ECX                             ; 004b9f28
    XOR EAX,EAX                         ; 004b9f29
    SCASB.REPNE ES:EDI                  ; 004b9f2b
    NOT ECX                             ; 004b9f2d
    DEC ECX                             ; 004b9f2f
    MOV dword ptr [ESP + 0x1c8],ESI     ; 004b9f30
    MOV dword ptr [ESP + 0x1c4],ECX     ; 004b9f37
    TEST ECX,ECX                        ; 004b9f3e
    JLE 0x004b9f7f                      ; 004b9f40
        ;   XREF to: 004b9f7f (CONDITIONAL_JUMP)  ; LAB_004b9f7f
    MOV EAX,ECX                         ; 004b9f42
    MOV ESI,EBX                         ; 004b9f44
    NEG EAX                             ; 004b9f46
    MOV EBX,ECX                         ; 004b9f48
    ADD ECX,EAX                         ; 004b9f4a
    MOV dword ptr [ESP + 0x2c4],ECX     ; 004b9f4c
    XOR EAX,EAX                         ; 004b9f53
        ;   Label: LAB_004b9f53
    MOV AL,byte ptr [ESI]               ; 004b9f55
    PUSH EAX                            ; 004b9f57
    MOVZX EDI,byte ptr [EBX + 0x1cb80f7] ; 004b9f58 | DAT_01cb80f8
    CALL FUN_005b8e40                   ; 004b9f5f
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004b9f64
    CMP EDI,EAX                         ; 004b9f67
    JNZ 0x004b9f72                      ; 004b9f69
        ;   XREF to: 004b9f72 (CONDITIONAL_JUMP)  ; LAB_004b9f72
    INC dword ptr [ESP + 0x1c8]         ; 004b9f6b
    MOV ECX,dword ptr [ESP + 0x2c4]     ; 004b9f72
        ;   Label: LAB_004b9f72
    DEC EBX                             ; 004b9f79
    INC ESI                             ; 004b9f7a
    CMP EBX,ECX                         ; 004b9f7b
    JG 0x004b9f53                       ; 004b9f7d
        ;   XREF to: 004b9f53 (CONDITIONAL_JUMP)  ; LAB_004b9f53
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 004b9f7f
        ;   Label: LAB_004b9f7f
    CMP EAX,dword ptr [ESP + 0x1c4]     ; 004b9f86
    JNZ 0x004b9262                      ; 004b9f8d
        ;   XREF to: 004b9262 (CONDITIONAL_JUMP)  ; LAB_004b9262
    XOR BL,BL                           ; 004b9f93
    MOV byte ptr [0x01cb80f8],BL        ; 004b9f95 | DAT_01cb80f8
    JMP 0x004b9228                      ; 004b9f9b
        ;   XREF to: 004b9228 (UNCONDITIONAL_JUMP)  ; LAB_004b9228
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b9fa0
        ;   Label: LAB_004b9fa0
    CALL FUN_0058e9e0                   ; 004b9fa3
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058e9e0()
    MOV EDI,dword ptr [EBX + 0x288]     ; 004b9fa8
    SUB EAX,EDI                         ; 004b9fae
    MOV dword ptr [ESP + 0x350],EAX     ; 004b9fb0
    FILD dword ptr [ESP + 0x350]        ; 004b9fb7
    FMUL double ptr [0x005d83d3]        ; 004b9fbe | DAT_005d83d3
    MOV dword ptr [EBX + 0x224],0x0     ; 004b9fc4
    MOV EAX,EBX                         ; 004b9fce
    FMUL double ptr [0x005d83db]        ; 004b9fd0 | DAT_005d83db
    FILD dword ptr [EAX + 0x28c]        ; 004b9fd6
    FXCH                                ; 004b9fdc
    FSTP double ptr [ESP + 0x1b8]       ; 004b9fde
    FDIV double ptr [ESP + 0x1b8]       ; 004b9fe5
    FSTP double ptr [ESP + 0x1b8]       ; 004b9fec
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 004b9ff3
    PUSH EAX                            ; 004b9ffa
    MOV EDX,dword ptr [ESP + 0x1bc]     ; 004b9ffb
    PUSH EDX                            ; 004ba002
    PUSH 0x5d7b39                       ; 004ba003 | = "FPS: %3.2lf"
    LEA EAX,[ESP + 0xc]                 ; 004ba008
    PUSH EAX                            ; 004ba00c
    CALL FUN_005b7790                   ; 004ba00d
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x10                        ; 004ba012
    MOV EAX,ESP                         ; 004ba015
    PUSH 0x40a00000                     ; 004ba017
    PUSH EAX                            ; 004ba01c
    PUSH EBX                            ; 004ba01d
    CALL FUN_004b31a0                   ; 004ba01e
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b31a0()
    ADD ESP,0xc                         ; 004ba023
    JMP 0x004b930c                      ; 004ba026
        ;   XREF to: 004b930c (UNCONDITIONAL_JUMP)  ; LAB_004b930c
    PUSH 0x40a00000                     ; 004ba02b
        ;   Label: LAB_004ba02b
    PUSH 0x5d7bbc                       ; 004ba030 | = "Event debug off"
    JMP 0x004b947e                      ; 004ba035
        ;   XREF to: 004b947e (UNCONDITIONAL_JUMP)  ; LAB_004b947e
    PUSH 0x40a00000                     ; 004ba03a
        ;   Label: LAB_004ba03a
    PUSH 0x5d7c10                       ; 004ba03f | = "Script debug off"
    CALL FUN_0050fe80                   ; 004ba044
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004ba049
    PUSH EAX                            ; 004ba04c
    PUSH EBX                            ; 004ba04d
    CALL FUN_004b31a0                   ; 004ba04e
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b31a0()
    ADD ESP,0xc                         ; 004ba053
    MOV EDI,dword ptr [0x006141bc]      ; 004ba056 | DAT_006141bc
    PUSH EDI                            ; 004ba05c
    PUSH 0x0                            ; 004ba05d
    PUSH 0x0                            ; 004ba05f
    MOV EAX,[0x0061b5a8]                ; 004ba061 | DAT_0061b5a8
    PUSH EAX                            ; 004ba066
    MOV dword ptr [EBX + 0x298],0x0     ; 004ba067
    JMP 0x004b957c                      ; 004ba071
        ;   XREF to: 004b957c (UNCONDITIONAL_JUMP)  ; LAB_004b957c
    PUSH 0x40a00000                     ; 004ba076
        ;   Label: LAB_004ba076
    PUSH 0x5d7c69                       ; 004ba07b | = "Memory debugging off"
    JMP 0x004b9645                      ; 004ba080
        ;   XREF to: 004b9645 (UNCONDITIONAL_JUMP)  ; LAB_004b9645
    PUSH 0x40a00000                     ; 004ba085
        ;   Label: LAB_004ba085
    PUSH 0x5d7e30                       ; 004ba08a | = "God mode disabled"
    CALL FUN_0050fe80                   ; 004ba08f
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004ba094
    PUSH EAX                            ; 004ba097
    PUSH EBX                            ; 004ba098
    CALL FUN_004b31a0                   ; 004ba099
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b31a0()
    ADD ESP,0xc                         ; 004ba09e
    JMP 0x004b9bec                      ; 004ba0a1
        ;   XREF to: 004b9bec (UNCONDITIONAL_JUMP)  ; LAB_004b9bec
    PUSH 0x40a00000                     ; 004ba0a6
        ;   Label: LAB_004ba0a6
    PUSH 0x5d7e86                       ; 004ba0ab | = "Enemies thawed"
    JMP 0x004b9c9a                      ; 004ba0b0
        ;   XREF to: 004b9c9a (UNCONDITIONAL_JUMP)  ; LAB_004b9c9a
    MOV EBX,ESI                         ; 004ba0b5
        ;   Label: LAB_004ba0b5
    JMP 0x004b9da9                      ; 004ba0b7
        ;   XREF to: 004b9da9 (UNCONDITIONAL_JUMP)  ; LAB_004b9da9
    PUSH EBX                            ; 004ba0bc
        ;   Label: LAB_004ba0bc
    MOV ECX,dword ptr [0x00618170]      ; 004ba0bd | DAT_00618170
    PUSH ECX                            ; 004ba0c3
    CALL FUN_004fcda0                   ; 004ba0c4
        ;   XREF to: 004fcda0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fcda0()
    ADD ESP,0x8                         ; 004ba0c9
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004ba0cc
    PUSH EBX                            ; 004ba0d2
    CALL dword ptr [EAX + 0x8]          ; 004ba0d3
    ADD ESP,0x4                         ; 004ba0d6
    PUSH EDI                            ; 004ba0d9 | DAT_005d7efa
    PUSH EBX                            ; 004ba0da
    MOV dword ptr [EBX + 0x474],ESI     ; 004ba0db
    CALL FUN_0040e240                   ; 004ba0e1
        ;   XREF to: 0040e240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e240()
    ADD ESP,0x8                         ; 004ba0e6
    PUSH 0x0                            ; 004ba0e9
    MOV EAX,[0x01cedef4]                ; 004ba0eb | DAT_01cedef4
    MOV dword ptr [EBX + 0x470],0x1f4   ; 004ba0f0
    PUSH 0x1                            ; 004ba0fa
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004ba0fc
    PUSH EBX                            ; 004ba103
    ADD EAX,0x2437c                     ; 004ba104
    PUSH EAX                            ; 004ba109
    CALL FUN_004dadb0                   ; 004ba10a
        ;   XREF to: 004dadb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004dadb0()
    ADD ESP,0x10                        ; 004ba10f
    JMP 0x004b9db1                      ; 004ba112
        ;   XREF to: 004b9db1 (UNCONDITIONAL_JUMP)  ; LAB_004b9db1
    PUSH 0x1d                           ; 004ba117
        ;   Label: LAB_004ba117
    MOV EAX,[0x00617dd4]                ; 004ba119 | DAT_00617dd4
    PUSH EAX                            ; 004ba11e | DAT_01d02f84
    MOV EBX,dword ptr [EAX]             ; 004ba11f | DAT_01d02f84
    CALL dword ptr [EBX]                ; 004ba121
    ADD ESP,0x8                         ; 004ba123
    TEST EAX,EAX                        ; 004ba126
    JZ 0x004ba142                       ; 004ba128
        ;   XREF to: 004ba142 (CONDITIONAL_JUMP)  ; LAB_004ba142
    PUSH 0x13                           ; 004ba12a
    MOV EAX,[0x00617dd4]                ; 004ba12c | DAT_00617dd4
    PUSH EAX                            ; 004ba131 | DAT_01d02f84
    MOV EBX,dword ptr [EAX]             ; 004ba132 | DAT_01d02f84
    CALL dword ptr [EBX + 0x4]          ; 004ba134
    ADD ESP,0x8                         ; 004ba137
    TEST EAX,EAX                        ; 004ba13a
    JNZ 0x004b9e49                      ; 004ba13c
        ;   XREF to: 004b9e49 (CONDITIONAL_JUMP)  ; LAB_004b9e49
    PUSH 0x5d7f41                       ; 004ba142 | DAT_005d7f41
        ;   Label: LAB_004ba142
    CALL FUN_0050ff00                   ; 004ba147
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR ESI,ESI                         ; 004ba14c
    ADD ESP,0x4                         ; 004ba14e
    MOV EDI,EAX                         ; 004ba151
    MOV EBX,EAX                         ; 004ba153
    SUB ECX,ECX                         ; 004ba155
    DEC ECX                             ; 004ba157
    XOR EAX,EAX                         ; 004ba158
    SCASB.REPNE ES:EDI                  ; 004ba15a
    NOT ECX                             ; 004ba15c
    DEC ECX                             ; 004ba15e
    MOV dword ptr [ESP + 0x22c],ESI     ; 004ba15f
    MOV dword ptr [ESP + 0x228],ECX     ; 004ba166
    TEST ECX,ECX                        ; 004ba16d
    JLE 0x004ba1ae                      ; 004ba16f
        ;   XREF to: 004ba1ae (CONDITIONAL_JUMP)  ; LAB_004ba1ae
    MOV EAX,ECX                         ; 004ba171
    MOV ESI,EBX                         ; 004ba173
    NEG EAX                             ; 004ba175
    MOV EBX,ECX                         ; 004ba177
    ADD ECX,EAX                         ; 004ba179
    MOV dword ptr [ESP + 0x300],ECX     ; 004ba17b
    XOR EAX,EAX                         ; 004ba182
        ;   Label: LAB_004ba182
    MOV AL,byte ptr [ESI]               ; 004ba184
    PUSH EAX                            ; 004ba186
    MOVZX EDI,byte ptr [EBX + 0x1cb80f7] ; 004ba187 | DAT_01cb80f8
    CALL FUN_005b8e40                   ; 004ba18e
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004ba193
    CMP EDI,EAX                         ; 004ba196
    JNZ 0x004ba1a1                      ; 004ba198
        ;   XREF to: 004ba1a1 (CONDITIONAL_JUMP)  ; LAB_004ba1a1
    INC dword ptr [ESP + 0x22c]         ; 004ba19a
    MOV EDI,dword ptr [ESP + 0x300]     ; 004ba1a1
        ;   Label: LAB_004ba1a1
    DEC EBX                             ; 004ba1a8
    INC ESI                             ; 004ba1a9
    CMP EBX,EDI                         ; 004ba1aa
    JG 0x004ba182                       ; 004ba1ac
        ;   XREF to: 004ba182 (CONDITIONAL_JUMP)  ; LAB_004ba182
    MOV EAX,dword ptr [ESP + 0x22c]     ; 004ba1ae
        ;   Label: LAB_004ba1ae
    CMP EAX,dword ptr [ESP + 0x228]     ; 004ba1b5
    JNZ 0x004ba2e5                      ; 004ba1bc
        ;   XREF to: 004ba2e5 (CONDITIONAL_JUMP)  ; LAB_004ba2e5
    XOR DH,DH                           ; 004ba1c2
    XOR ECX,ECX                         ; 004ba1c4
    MOV byte ptr [0x01cb80f8],DH        ; 004ba1c6 | DAT_01cb80f8
    MOV dword ptr [ESP + 0x34c],ECX     ; 004ba1cc
    MOV dword ptr [ESP + 0x304],ECX     ; 004ba1d3
    MOV EAX,[0x0061b5a8]                ; 004ba1da | DAT_0061b5a8
        ;   Label: LAB_004ba1da
    MOV EBX,dword ptr [ESP + 0x34c]     ; 004ba1df
    CMP EBX,dword ptr [EAX + 0x150fec]  ; 004ba1e6 | DAT_01fb71a4
    JGE 0x004ba2e5                      ; 004ba1ec
        ;   XREF to: 004ba2e5 (CONDITIONAL_JUMP)  ; LAB_004ba2e5
    ADD EAX,dword ptr [ESP + 0x304]     ; 004ba1f2
    MOV EBX,dword ptr [EAX + 0x150ff0]  ; 004ba1f9
    MOV EAX,[0x01cedef4]                ; 004ba1ff | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004ba204
    LEA ESI,[EBX + 0x20]                ; 004ba20b
    FLD float ptr [EAX + 0x20]          ; 004ba20e
    FSUB float ptr [ESI]                ; 004ba211
    FSTP float ptr [ESP + 0x1a0]        ; 004ba213
    FLD float ptr [EAX + 0x24]          ; 004ba21a
    FSUB float ptr [ESI + 0x4]          ; 004ba21d
    LEA EDI,[ESP + 0x1ac]               ; 004ba220
    FSTP float ptr [ESP + 0x1a4]        ; 004ba227
    FLD float ptr [EAX + 0x28]          ; 004ba22e
    FSUB float ptr [ESI + 0x8]          ; 004ba231
    LEA ESI,[ESP + 0x1a0]               ; 004ba234
    FSTP float ptr [ESP + 0x1a8]        ; 004ba23b
    MOVSD ES:EDI,ESI                    ; 004ba242
    MOVSD ES:EDI,ESI                    ; 004ba243
    MOVSD ES:EDI,ESI                    ; 004ba244
    FLD float ptr [ESP + 0x1b0]         ; 004ba245
    FMUL ST0                            ; 004ba24c
    FLD float ptr [ESP + 0x1ac]         ; 004ba24e
    FMUL ST0                            ; 004ba255
    FADDP                               ; 004ba257
    FLD float ptr [ESP + 0x1b4]         ; 004ba259
    FMUL ST0                            ; 004ba260
    FADDP                               ; 004ba262
    FSQRT                               ; 004ba264
    FCOMP double ptr [0x005d83e3]       ; 004ba266 | DAT_005d83e3
    FNSTSW AX                           ; 004ba26c
    SAHF                                ; 004ba26e
    JBE 0x004ba2af                      ; 004ba26f
        ;   XREF to: 004ba2af (CONDITIONAL_JUMP)  ; LAB_004ba2af
    MOV EAX,dword ptr [ESP + 0x34c]     ; 004ba271
        ;   Label: LAB_004ba271
    MOV EDI,dword ptr [ESP + 0x304]     ; 004ba278
    INC EAX                             ; 004ba27f
    ADD EDI,0x4                         ; 004ba280
    MOV dword ptr [ESP + 0x34c],EAX     ; 004ba283
    MOV dword ptr [ESP + 0x304],EDI     ; 004ba28a
    JMP 0x004ba1da                      ; 004ba291
        ;   XREF to: 004ba1da (UNCONDITIONAL_JUMP)  ; LAB_004ba1da
    PUSH 0x616430                       ; 004ba296 | DAT_00616430
        ;   Label: LAB_004ba296
    MOV EBX,dword ptr [0x006141f0]      ; 004ba29b | DAT_006141f0
    PUSH EBX                            ; 004ba2a1
    CALL FUN_004894f0                   ; 004ba2a2
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004894f0()
    ADD ESP,0x8                         ; 004ba2a7
    JMP 0x004ba142                      ; 004ba2aa
        ;   XREF to: 004ba142 (UNCONDITIONAL_JUMP)  ; LAB_004ba142
    LEA EAX,[ESP + 0x164]               ; 004ba2af
        ;   Label: LAB_004ba2af
    PUSH EAX                            ; 004ba2b6
    MOV ESI,0x42c80000                  ; 004ba2b7
    CALL FUN_004222d0                   ; 004ba2bc
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    ADD ESP,0x4                         ; 004ba2c1
    MOV dword ptr [ESP + 0x168],ESI     ; 004ba2c4
    LEA ESI,[ESP + 0x164]               ; 004ba2cb
    PUSH ESI                            ; 004ba2d2
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004ba2d3
    PUSH EBX                            ; 004ba2d9
    CALL dword ptr [EAX + 0x110]        ; 004ba2da
    ADD ESP,0x8                         ; 004ba2e0
    JMP 0x004ba271                      ; 004ba2e3
        ;   XREF to: 004ba271 (UNCONDITIONAL_JUMP)  ; LAB_004ba271
    PUSH 0x5d7f76                       ; 004ba2e5 | DAT_005d7f76
        ;   Label: LAB_004ba2e5
    CALL FUN_0050ff00                   ; 004ba2ea
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR ESI,ESI                         ; 004ba2ef
    ADD ESP,0x4                         ; 004ba2f1
    MOV EDI,EAX                         ; 004ba2f4
    MOV EBX,EAX                         ; 004ba2f6
    SUB ECX,ECX                         ; 004ba2f8
    DEC ECX                             ; 004ba2fa
    XOR EAX,EAX                         ; 004ba2fb
    SCASB.REPNE ES:EDI                  ; 004ba2fd
    NOT ECX                             ; 004ba2ff
    DEC ECX                             ; 004ba301
    MOV dword ptr [ESP + 0x230],ECX     ; 004ba302
    TEST ECX,ECX                        ; 004ba309
    JLE 0x004ba34f                      ; 004ba30b
        ;   XREF to: 004ba34f (CONDITIONAL_JUMP)  ; LAB_004ba34f
    MOV EAX,ECX                         ; 004ba30d
    NEG EAX                             ; 004ba30f
    MOV EDI,ECX                         ; 004ba311
    ADD ECX,EAX                         ; 004ba313
    MOV dword ptr [ESP + 0x308],ECX     ; 004ba315
    XOR EAX,EAX                         ; 004ba31c
        ;   Label: LAB_004ba31c
    MOV AL,byte ptr [EDI + 0x1cb80f7]   ; 004ba31e | DAT_01cb80f8
    MOV dword ptr [ESP + 0x350],EAX     ; 004ba324
    XOR EAX,EAX                         ; 004ba32b
    MOV AL,byte ptr [EBX]               ; 004ba32d
    PUSH EAX                            ; 004ba32f
    CALL FUN_005b8e40                   ; 004ba330
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004ba335
    CMP EAX,dword ptr [ESP + 0x350]     ; 004ba338
    JNZ 0x004ba342                      ; 004ba33f
        ;   XREF to: 004ba342 (CONDITIONAL_JUMP)  ; LAB_004ba342
    INC ESI                             ; 004ba341
    MOV EDX,dword ptr [ESP + 0x308]     ; 004ba342
        ;   Label: LAB_004ba342
    DEC EDI                             ; 004ba349
    INC EBX                             ; 004ba34a
    CMP EDI,EDX                         ; 004ba34b
    JG 0x004ba31c                       ; 004ba34d
        ;   XREF to: 004ba31c (CONDITIONAL_JUMP)  ; LAB_004ba31c
    CMP ESI,dword ptr [ESP + 0x230]     ; 004ba34f
        ;   Label: LAB_004ba34f
    JNZ 0x004ba39d                      ; 004ba356
        ;   XREF to: 004ba39d (CONDITIONAL_JUMP)  ; LAB_004ba39d
    XOR BL,BL                           ; 004ba358
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ba35a
    MOV byte ptr [0x01cb80f8],BL        ; 004ba35d | DAT_01cb80f8
    CMP dword ptr [EAX + 0x1fc],0x0     ; 004ba363
    SETZ AL                             ; 004ba36a
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ba36d
    AND EAX,0xff                        ; 004ba370
    MOV dword ptr [EBX + 0x1fc],EAX     ; 004ba375
    JZ 0x004bab9b                       ; 004ba37b
        ;   XREF to: 004bab9b (CONDITIONAL_JUMP)  ; LAB_004bab9b
    PUSH 0x40a00000                     ; 004ba381
    PUSH 0x5d7fac                       ; 004ba386 | = "Gratuitous dismemberment enabled"
    CALL FUN_0050fe80                   ; 004ba38b
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
        ;   Label: LAB_004ba38b
    ADD ESP,0x4                         ; 004ba390
    PUSH EAX                            ; 004ba393
    PUSH EBX                            ; 004ba394
    CALL FUN_004b31a0                   ; 004ba395
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b31a0()
    ADD ESP,0xc                         ; 004ba39a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ba39d
        ;   Label: LAB_004ba39d
    CMP dword ptr [EAX + 0x22c],0x0     ; 004ba3a0
    JZ 0x004ba45b                       ; 004ba3a7
        ;   XREF to: 004ba45b (CONDITIONAL_JUMP)  ; LAB_004ba45b
    PUSH 0x5d7fef                       ; 004ba3ad | DAT_005d7fef
    CALL FUN_0050ff00                   ; 004ba3b2
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    MOV EBX,EAX                         ; 004ba3b7
    ADD ESP,0x4                         ; 004ba3b9
    XOR ECX,ECX                         ; 004ba3bc
    MOV EDI,EAX                         ; 004ba3be
    MOV dword ptr [ESP + 0x238],ECX     ; 004ba3c0
    SUB ECX,ECX                         ; 004ba3c7
    DEC ECX                             ; 004ba3c9
    XOR EAX,EAX                         ; 004ba3ca
    SCASB.REPNE ES:EDI                  ; 004ba3cc
    NOT ECX                             ; 004ba3ce
    DEC ECX                             ; 004ba3d0
    MOV dword ptr [ESP + 0x234],ECX     ; 004ba3d1
    TEST ECX,ECX                        ; 004ba3d8
    JLE 0x004ba419                      ; 004ba3da
        ;   XREF to: 004ba419 (CONDITIONAL_JUMP)  ; LAB_004ba419
    MOV EAX,ECX                         ; 004ba3dc
    MOV ESI,EBX                         ; 004ba3de
    NEG EAX                             ; 004ba3e0
    MOV EBX,ECX                         ; 004ba3e2
    ADD ECX,EAX                         ; 004ba3e4
    MOV dword ptr [ESP + 0x30c],ECX     ; 004ba3e6
    XOR EAX,EAX                         ; 004ba3ed
        ;   Label: LAB_004ba3ed
    MOV AL,byte ptr [ESI]               ; 004ba3ef
    PUSH EAX                            ; 004ba3f1
    MOVZX EDI,byte ptr [EBX + 0x1cb80f7] ; 004ba3f2 | DAT_01cb80f8
    CALL FUN_005b8e40                   ; 004ba3f9
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004ba3fe
    CMP EDI,EAX                         ; 004ba401
    JNZ 0x004ba40c                      ; 004ba403
        ;   XREF to: 004ba40c (CONDITIONAL_JUMP)  ; LAB_004ba40c
    INC dword ptr [ESP + 0x238]         ; 004ba405
    MOV ECX,dword ptr [ESP + 0x30c]     ; 004ba40c
        ;   Label: LAB_004ba40c
    DEC EBX                             ; 004ba413
    INC ESI                             ; 004ba414
    CMP EBX,ECX                         ; 004ba415
    JG 0x004ba3ed                       ; 004ba417
        ;   XREF to: 004ba3ed (CONDITIONAL_JUMP)  ; LAB_004ba3ed
    MOV EAX,dword ptr [ESP + 0x238]     ; 004ba419
        ;   Label: LAB_004ba419
    CMP EAX,dword ptr [ESP + 0x234]     ; 004ba420
    JNZ 0x004ba45b                      ; 004ba427
        ;   XREF to: 004ba45b (CONDITIONAL_JUMP)  ; LAB_004ba45b
    PUSH 0x1                            ; 004ba429
    PUSH 0x40800000                     ; 004ba42b
    PUSH 0x3c23d70a                     ; 004ba430
    PUSH 0x1                            ; 004ba435
    MOV ESI,dword ptr [ESP + 0x24c]     ; 004ba437
    PUSH ESI                            ; 004ba43e
    PUSH 0x5d8021                       ; 004ba43f | = "Enter time factor"
    MOV EDI,dword ptr [0x006138e0]      ; 004ba444 | DAT_006138e0
    XOR BH,BH                           ; 004ba44a
    PUSH EDI                            ; 004ba44c
    MOV byte ptr [0x01cb80f8],BH        ; 004ba44d | DAT_01cb80f8
    CALL FUN_0047d800                   ; 004ba453
        ;   XREF to: 0047d800 (UNCONDITIONAL_CALL)  ; undefined FUN_0047d800()
    ADD ESP,0x1c                        ; 004ba458
    PUSH 0x5d8033                       ; 004ba45b | DAT_005d8033
        ;   Label: LAB_004ba45b
    CALL FUN_0050ff00                   ; 004ba460
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR ESI,ESI                         ; 004ba465
    ADD ESP,0x4                         ; 004ba467
    MOV EDI,EAX                         ; 004ba46a
    MOV EBX,EAX                         ; 004ba46c
    SUB ECX,ECX                         ; 004ba46e
    DEC ECX                             ; 004ba470
    XOR EAX,EAX                         ; 004ba471
    SCASB.REPNE ES:EDI                  ; 004ba473
    NOT ECX                             ; 004ba475
    DEC ECX                             ; 004ba477
    MOV dword ptr [ESP + 0x240],ECX     ; 004ba478
    TEST ECX,ECX                        ; 004ba47f
    JLE 0x004ba4c5                      ; 004ba481
        ;   XREF to: 004ba4c5 (CONDITIONAL_JUMP)  ; LAB_004ba4c5
    MOV EAX,ECX                         ; 004ba483
    NEG EAX                             ; 004ba485
    MOV EDI,ECX                         ; 004ba487
    ADD ECX,EAX                         ; 004ba489
    MOV dword ptr [ESP + 0x310],ECX     ; 004ba48b
    XOR EAX,EAX                         ; 004ba492
        ;   Label: LAB_004ba492
    MOV AL,byte ptr [EDI + 0x1cb80f7]   ; 004ba494 | DAT_01cb80f8
    MOV dword ptr [ESP + 0x350],EAX     ; 004ba49a
    XOR EAX,EAX                         ; 004ba4a1
    MOV AL,byte ptr [EBX]               ; 004ba4a3
    PUSH EAX                            ; 004ba4a5
    CALL FUN_005b8e40                   ; 004ba4a6
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004ba4ab
    CMP EAX,dword ptr [ESP + 0x350]     ; 004ba4ae
    JNZ 0x004ba4b8                      ; 004ba4b5
        ;   XREF to: 004ba4b8 (CONDITIONAL_JUMP)  ; LAB_004ba4b8
    INC ESI                             ; 004ba4b7
    MOV EDX,dword ptr [ESP + 0x310]     ; 004ba4b8
        ;   Label: LAB_004ba4b8
    DEC EDI                             ; 004ba4bf
    INC EBX                             ; 004ba4c0
    CMP EDI,EDX                         ; 004ba4c1
    JG 0x004ba492                       ; 004ba4c3
        ;   XREF to: 004ba492 (CONDITIONAL_JUMP)  ; LAB_004ba492
    CMP ESI,dword ptr [ESP + 0x240]     ; 004ba4c5
        ;   Label: LAB_004ba4c5
    JNZ 0x004ba4f2                      ; 004ba4cc
        ;   XREF to: 004ba4f2 (CONDITIONAL_JUMP)  ; LAB_004ba4f2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ba4ce
    XOR CL,CL                           ; 004ba4d1
    MOV EBX,dword ptr [EAX + 0x20c]     ; 004ba4d3
    MOV byte ptr [0x01cb80f8],CL        ; 004ba4d9 | DAT_01cb80f8
    TEST EBX,EBX                        ; 004ba4df
    SETZ AL                             ; 004ba4e1
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ba4e4
    AND EAX,0xff                        ; 004ba4e7
    MOV dword ptr [EBX + 0x20c],EAX     ; 004ba4ec
    PUSH 0x5d8066                       ; 004ba4f2 | DAT_005d8066
        ;   Label: LAB_004ba4f2
    CALL FUN_0050ff00                   ; 004ba4f7
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR ESI,ESI                         ; 004ba4fc
    ADD ESP,0x4                         ; 004ba4fe
    MOV EDI,EAX                         ; 004ba501
    MOV EBX,EAX                         ; 004ba503
    SUB ECX,ECX                         ; 004ba505
    DEC ECX                             ; 004ba507
    XOR EAX,EAX                         ; 004ba508
    SCASB.REPNE ES:EDI                  ; 004ba50a
    NOT ECX                             ; 004ba50c
    DEC ECX                             ; 004ba50e
    MOV dword ptr [ESP + 0x244],ECX     ; 004ba50f
    TEST ECX,ECX                        ; 004ba516
    JLE 0x004ba55c                      ; 004ba518
        ;   XREF to: 004ba55c (CONDITIONAL_JUMP)  ; LAB_004ba55c
    MOV EAX,ECX                         ; 004ba51a
    NEG EAX                             ; 004ba51c
    MOV EDI,ECX                         ; 004ba51e
    ADD ECX,EAX                         ; 004ba520
    MOV dword ptr [ESP + 0x314],ECX     ; 004ba522
    XOR EAX,EAX                         ; 004ba529
        ;   Label: LAB_004ba529
    MOV AL,byte ptr [EDI + 0x1cb80f7]   ; 004ba52b | DAT_01cb80f8
    MOV dword ptr [ESP + 0x350],EAX     ; 004ba531
    XOR EAX,EAX                         ; 004ba538
    MOV AL,byte ptr [EBX]               ; 004ba53a
    PUSH EAX                            ; 004ba53c
    CALL FUN_005b8e40                   ; 004ba53d
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004ba542
    CMP EAX,dword ptr [ESP + 0x350]     ; 004ba545
    JNZ 0x004ba54f                      ; 004ba54c
        ;   XREF to: 004ba54f (CONDITIONAL_JUMP)  ; LAB_004ba54f
    INC ESI                             ; 004ba54e
    MOV ECX,dword ptr [ESP + 0x314]     ; 004ba54f
        ;   Label: LAB_004ba54f
    DEC EDI                             ; 004ba556
    INC EBX                             ; 004ba557
    CMP EDI,ECX                         ; 004ba558
    JG 0x004ba529                       ; 004ba55a
        ;   XREF to: 004ba529 (CONDITIONAL_JUMP)  ; LAB_004ba529
    CMP ESI,dword ptr [ESP + 0x244]     ; 004ba55c
        ;   Label: LAB_004ba55c
    JNZ 0x004ba589                      ; 004ba563
        ;   XREF to: 004ba589 (CONDITIONAL_JUMP)  ; LAB_004ba589
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ba565
    XOR CH,CH                           ; 004ba568
    MOV ESI,dword ptr [EAX + 0x210]     ; 004ba56a
    MOV byte ptr [0x01cb80f8],CH        ; 004ba570 | DAT_01cb80f8
    TEST ESI,ESI                        ; 004ba576
    SETZ AL                             ; 004ba578
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ba57b
    AND EAX,0xff                        ; 004ba57e
    MOV dword ptr [EBX + 0x210],EAX     ; 004ba583
    PUSH 0x5d8099                       ; 004ba589 | DAT_005d8099
        ;   Label: LAB_004ba589
    CALL FUN_0050ff00                   ; 004ba58e
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR EDI,EDI                         ; 004ba593
    ADD ESP,0x4                         ; 004ba595
    MOV dword ptr [ESP + 0x24c],EDI     ; 004ba598
    MOV EDI,EAX                         ; 004ba59f
    MOV EBX,EAX                         ; 004ba5a1
    SUB ECX,ECX                         ; 004ba5a3
    DEC ECX                             ; 004ba5a5
    XOR EAX,EAX                         ; 004ba5a6
    SCASB.REPNE ES:EDI                  ; 004ba5a8
    NOT ECX                             ; 004ba5aa
    DEC ECX                             ; 004ba5ac
    MOV dword ptr [ESP + 0x248],ECX     ; 004ba5ad
    TEST ECX,ECX                        ; 004ba5b4
    JLE 0x004ba5f3                      ; 004ba5b6
        ;   XREF to: 004ba5f3 (CONDITIONAL_JUMP)  ; LAB_004ba5f3
    MOV EAX,ECX                         ; 004ba5b8
    NEG EAX                             ; 004ba5ba
    MOV EDI,ECX                         ; 004ba5bc
    ADD ECX,EAX                         ; 004ba5be
    MOV dword ptr [ESP + 0x318],ECX     ; 004ba5c0
    XOR EAX,EAX                         ; 004ba5c7
        ;   Label: LAB_004ba5c7
    MOV AL,byte ptr [EBX]               ; 004ba5c9
    PUSH EAX                            ; 004ba5cb
    MOVZX ESI,byte ptr [EDI + 0x1cb80f7] ; 004ba5cc | DAT_01cb80f8
    CALL FUN_005b8e40                   ; 004ba5d3
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004ba5d8
    CMP ESI,EAX                         ; 004ba5db
    JNZ 0x004ba5e6                      ; 004ba5dd
        ;   XREF to: 004ba5e6 (CONDITIONAL_JUMP)  ; LAB_004ba5e6
    INC dword ptr [ESP + 0x24c]         ; 004ba5df
    MOV ECX,dword ptr [ESP + 0x318]     ; 004ba5e6
        ;   Label: LAB_004ba5e6
    DEC EDI                             ; 004ba5ed
    INC EBX                             ; 004ba5ee
    CMP EDI,ECX                         ; 004ba5ef
    JG 0x004ba5c7                       ; 004ba5f1
        ;   XREF to: 004ba5c7 (CONDITIONAL_JUMP)  ; LAB_004ba5c7
    MOV EAX,dword ptr [ESP + 0x24c]     ; 004ba5f3
        ;   Label: LAB_004ba5f3
    MOV EBX,dword ptr [ESP + 0x248]     ; 004ba5fa
    CMP EAX,EBX                         ; 004ba601
    JNZ 0x004ba65f                      ; 004ba603
        ;   XREF to: 004ba65f (CONDITIONAL_JUMP)  ; LAB_004ba65f
    XOR AL,BL                           ; 004ba605
    MOV [0x01cb80f8],AL                 ; 004ba607 | DAT_01cb80f8
    MOV EAX,[0x01cedef4]                ; 004ba60c | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004ba611
    MOV EBX,dword ptr [EAX + 0x247e4]   ; 004ba618
    MOV EBX,dword ptr [EAX + EBX*0x4 + 0x2498c] ; 004ba61e
    TEST EBX,EBX                        ; 004ba625
    JZ 0x004ba65f                       ; 004ba627
        ;   XREF to: 004ba65f (CONDITIONAL_JUMP)  ; LAB_004ba65f
    CMP dword ptr [EBX + 0x6c8],0x5     ; 004ba629
    JNZ 0x004babaa                      ; 004ba630
        ;   XREF to: 004babaa (CONDITIONAL_JUMP)  ; LAB_004babaa
    PUSH 0x40a00000                     ; 004ba636
    PUSH 0x5d80d3                       ; 004ba63b | = "Flaming ammo disabled"
    MOV dword ptr [EBX + 0x6c8],0x0     ; 004ba640
    CALL FUN_0050fe80                   ; 004ba64a
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004ba64f
    PUSH EAX                            ; 004ba652
    MOV EDX,dword ptr [EBP + 0x14]      ; 004ba653
    PUSH EDX                            ; 004ba656
    CALL FUN_004b31a0                   ; 004ba657
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b31a0()
        ;   Label: LAB_004ba657
    ADD ESP,0xc                         ; 004ba65c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ba65f
        ;   Label: LAB_004ba65f
    CMP dword ptr [EAX + 0x22c],0x0     ; 004ba662
    JZ 0x004ba705                       ; 004ba669
        ;   XREF to: 004ba705 (CONDITIONAL_JUMP)  ; LAB_004ba705
    PUSH 0x5d8138                       ; 004ba66f | DAT_005d8138
    CALL FUN_0050ff00                   ; 004ba674
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR EBX,EBX                         ; 004ba679
    ADD ESP,0x4                         ; 004ba67b
    MOV EDI,EAX                         ; 004ba67e
    MOV ESI,EAX                         ; 004ba680
    SUB ECX,ECX                         ; 004ba682
    DEC ECX                             ; 004ba684
    XOR EAX,EAX                         ; 004ba685
    SCASB.REPNE ES:EDI                  ; 004ba687
    NOT ECX                             ; 004ba689
    DEC ECX                             ; 004ba68b
    MOV dword ptr [ESP + 0x254],EBX     ; 004ba68c
    MOV dword ptr [ESP + 0x250],ECX     ; 004ba693
    TEST ECX,ECX                        ; 004ba69a
    JLE 0x004ba6d9                      ; 004ba69c
        ;   XREF to: 004ba6d9 (CONDITIONAL_JUMP)  ; LAB_004ba6d9
    MOV EAX,ECX                         ; 004ba69e
    NEG EAX                             ; 004ba6a0
    MOV EBX,ECX                         ; 004ba6a2
    ADD ECX,EAX                         ; 004ba6a4
    MOV dword ptr [ESP + 0x31c],ECX     ; 004ba6a6
    XOR EAX,EAX                         ; 004ba6ad
        ;   Label: LAB_004ba6ad
    MOV AL,byte ptr [ESI]               ; 004ba6af
    PUSH EAX                            ; 004ba6b1
    MOVZX EDI,byte ptr [EBX + 0x1cb80f7] ; 004ba6b2 | DAT_01cb80f8
    CALL FUN_005b8e40                   ; 004ba6b9
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004ba6be
    CMP EDI,EAX                         ; 004ba6c1
    JNZ 0x004ba6cc                      ; 004ba6c3
        ;   XREF to: 004ba6cc (CONDITIONAL_JUMP)  ; LAB_004ba6cc
    INC dword ptr [ESP + 0x254]         ; 004ba6c5
    MOV EDI,dword ptr [ESP + 0x31c]     ; 004ba6cc
        ;   Label: LAB_004ba6cc
    DEC EBX                             ; 004ba6d3
    INC ESI                             ; 004ba6d4
    CMP EBX,EDI                         ; 004ba6d5
    JG 0x004ba6ad                       ; 004ba6d7
        ;   XREF to: 004ba6ad (CONDITIONAL_JUMP)  ; LAB_004ba6ad
    MOV EAX,dword ptr [ESP + 0x254]     ; 004ba6d9
        ;   Label: LAB_004ba6d9
    MOV EDX,dword ptr [ESP + 0x250]     ; 004ba6e0
    CMP EAX,EDX                         ; 004ba6e7
    JNZ 0x004ba705                      ; 004ba6e9
        ;   XREF to: 004ba705 (CONDITIONAL_JUMP)  ; LAB_004ba705
    PUSH 0xff00ff                       ; 004ba6eb
    XOR AH,DH                           ; 004ba6f0
    PUSH 0x1fc7838                      ; 004ba6f2
    MOV byte ptr [0x01cb80f8],AH        ; 004ba6f7 | DAT_01cb80f8
    CALL FUN_00443240                   ; 004ba6fd
        ;   XREF to: 00443240 (UNCONDITIONAL_CALL)  ; undefined FUN_00443240()
    ADD ESP,0x8                         ; 004ba702
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ba705
        ;   Label: LAB_004ba705
    CMP dword ptr [EAX + 0x22c],0x0     ; 004ba708
    JZ 0x004ba7b7                       ; 004ba70f
        ;   XREF to: 004ba7b7 (CONDITIONAL_JUMP)  ; LAB_004ba7b7
    PUSH 0x5d816b                       ; 004ba715 | DAT_005d816b
    CALL FUN_0050ff00                   ; 004ba71a
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR ESI,ESI                         ; 004ba71f
    ADD ESP,0x4                         ; 004ba721
    MOV EDI,EAX                         ; 004ba724
    MOV EBX,EAX                         ; 004ba726
    SUB ECX,ECX                         ; 004ba728
    DEC ECX                             ; 004ba72a
    XOR EAX,EAX                         ; 004ba72b
    SCASB.REPNE ES:EDI                  ; 004ba72d
    NOT ECX                             ; 004ba72f
    DEC ECX                             ; 004ba731
    MOV dword ptr [ESP + 0x25c],ESI     ; 004ba732
    MOV dword ptr [ESP + 0x258],ECX     ; 004ba739
    TEST ECX,ECX                        ; 004ba740
    JLE 0x004ba781                      ; 004ba742
        ;   XREF to: 004ba781 (CONDITIONAL_JUMP)  ; LAB_004ba781
    MOV EAX,ECX                         ; 004ba744
    MOV ESI,EBX                         ; 004ba746
    NEG EAX                             ; 004ba748
    MOV EBX,ECX                         ; 004ba74a
    ADD ECX,EAX                         ; 004ba74c
    MOV dword ptr [ESP + 0x320],ECX     ; 004ba74e
    XOR EAX,EAX                         ; 004ba755
        ;   Label: LAB_004ba755
    MOV AL,byte ptr [ESI]               ; 004ba757
    PUSH EAX                            ; 004ba759
    MOVZX EDI,byte ptr [EBX + 0x1cb80f7] ; 004ba75a | DAT_01cb80f8
    CALL FUN_005b8e40                   ; 004ba761
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004ba766
    CMP EDI,EAX                         ; 004ba769
    JNZ 0x004ba774                      ; 004ba76b
        ;   XREF to: 004ba774 (CONDITIONAL_JUMP)  ; LAB_004ba774
    INC dword ptr [ESP + 0x25c]         ; 004ba76d
    MOV EDI,dword ptr [ESP + 0x320]     ; 004ba774
        ;   Label: LAB_004ba774
    DEC EBX                             ; 004ba77b
    INC ESI                             ; 004ba77c
    CMP EBX,EDI                         ; 004ba77d
    JG 0x004ba755                       ; 004ba77f
        ;   XREF to: 004ba755 (CONDITIONAL_JUMP)  ; LAB_004ba755
    MOV EAX,dword ptr [ESP + 0x25c]     ; 004ba781
        ;   Label: LAB_004ba781
    CMP EAX,dword ptr [ESP + 0x258]     ; 004ba788
    JNZ 0x004ba7b7                      ; 004ba78f
        ;   XREF to: 004ba7b7 (CONDITIONAL_JUMP)  ; LAB_004ba7b7
    PUSH 0x0                            ; 004ba791
    MOV EAX,[0x0061b5a8]                ; 004ba793 | DAT_0061b5a8
    XOR DL,DL                           ; 004ba798
    PUSH 0x1fc7838                      ; 004ba79a
    MOV byte ptr [0x01cb80f8],DL        ; 004ba79f | DAT_01cb80f8
    MOV dword ptr [EAX + 0x14d150],0x0  ; 004ba7a5 | DAT_01fb3308
    CALL FUN_00441e80                   ; 004ba7af
        ;   XREF to: 00441e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00441e80()
    ADD ESP,0x8                         ; 004ba7b4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ba7b7
        ;   Label: LAB_004ba7b7
    CMP dword ptr [EAX + 0x22c],0x0     ; 004ba7ba
    JZ 0x004ba889                       ; 004ba7c1
        ;   XREF to: 004ba889 (CONDITIONAL_JUMP)  ; LAB_004ba889
    PUSH 0x5d819d                       ; 004ba7c7 | DAT_005d819d
    CALL FUN_0050ff00                   ; 004ba7cc
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR ESI,ESI                         ; 004ba7d1
    ADD ESP,0x4                         ; 004ba7d3
    MOV EDI,EAX                         ; 004ba7d6
    MOV EBX,EAX                         ; 004ba7d8
    SUB ECX,ECX                         ; 004ba7da
    DEC ECX                             ; 004ba7dc
    XOR EAX,EAX                         ; 004ba7dd
    SCASB.REPNE ES:EDI                  ; 004ba7df
    NOT ECX                             ; 004ba7e1
    DEC ECX                             ; 004ba7e3
    MOV dword ptr [ESP + 0x264],ESI     ; 004ba7e4
    MOV dword ptr [ESP + 0x260],ECX     ; 004ba7eb
    TEST ECX,ECX                        ; 004ba7f2
    JLE 0x004ba833                      ; 004ba7f4
        ;   XREF to: 004ba833 (CONDITIONAL_JUMP)  ; LAB_004ba833
    MOV EAX,ECX                         ; 004ba7f6
    MOV ESI,EBX                         ; 004ba7f8
    NEG EAX                             ; 004ba7fa
    MOV EBX,ECX                         ; 004ba7fc
    ADD ECX,EAX                         ; 004ba7fe
    MOV dword ptr [ESP + 0x324],ECX     ; 004ba800
    XOR EAX,EAX                         ; 004ba807
        ;   Label: LAB_004ba807
    MOV AL,byte ptr [ESI]               ; 004ba809
    PUSH EAX                            ; 004ba80b
    MOVZX EDI,byte ptr [EBX + 0x1cb80f7] ; 004ba80c | DAT_01cb80f8
    CALL FUN_005b8e40                   ; 004ba813
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004ba818
    CMP EDI,EAX                         ; 004ba81b
    JNZ 0x004ba826                      ; 004ba81d
        ;   XREF to: 004ba826 (CONDITIONAL_JUMP)  ; LAB_004ba826
    INC dword ptr [ESP + 0x264]         ; 004ba81f
    MOV EDI,dword ptr [ESP + 0x324]     ; 004ba826
        ;   Label: LAB_004ba826
    DEC EBX                             ; 004ba82d
    INC ESI                             ; 004ba82e
    CMP EBX,EDI                         ; 004ba82f
    JG 0x004ba807                       ; 004ba831
        ;   XREF to: 004ba807 (CONDITIONAL_JUMP)  ; LAB_004ba807
    MOV EAX,dword ptr [ESP + 0x264]     ; 004ba833
        ;   Label: LAB_004ba833
    CMP EAX,dword ptr [ESP + 0x260]     ; 004ba83a
    JNZ 0x004ba889                      ; 004ba841
        ;   XREF to: 004ba889 (CONDITIONAL_JUMP)  ; LAB_004ba889
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ba843
    XOR DH,DH                           ; 004ba846
    MOV ECX,dword ptr [EAX + 0x21c]     ; 004ba848
    MOV byte ptr [0x01cb80f8],DH        ; 004ba84e | DAT_01cb80f8
    TEST ECX,ECX                        ; 004ba854
    SETZ AL                             ; 004ba856
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ba859
    AND EAX,0xff                        ; 004ba85c
    MOV dword ptr [EBX + 0x21c],EAX     ; 004ba861
    JZ 0x004babfe                       ; 004ba867
        ;   XREF to: 004babfe (CONDITIONAL_JUMP)  ; LAB_004babfe
    PUSH 0x40a00000                     ; 004ba86d
    PUSH 0x5d81cf                       ; 004ba872 | = "Single step enabled"
    CALL FUN_0050fe80                   ; 004ba877
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
        ;   Label: LAB_004ba877
    ADD ESP,0x4                         ; 004ba87c
    PUSH EAX                            ; 004ba87f
    PUSH EBX                            ; 004ba880
    CALL FUN_004b31a0                   ; 004ba881
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b31a0()
    ADD ESP,0xc                         ; 004ba886
    PUSH 0x5d81f8                       ; 004ba889 | DAT_005d81f8
        ;   Label: LAB_004ba889
    CALL FUN_0050ff00                   ; 004ba88e
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR ESI,ESI                         ; 004ba893
    ADD ESP,0x4                         ; 004ba895
    MOV EDI,EAX                         ; 004ba898
    MOV EBX,EAX                         ; 004ba89a
    SUB ECX,ECX                         ; 004ba89c
    DEC ECX                             ; 004ba89e
    XOR EAX,EAX                         ; 004ba89f
    SCASB.REPNE ES:EDI                  ; 004ba8a1
    NOT ECX                             ; 004ba8a3
    DEC ECX                             ; 004ba8a5
    MOV dword ptr [ESP + 0x268],ECX     ; 004ba8a6
    TEST ECX,ECX                        ; 004ba8ad
    JLE 0x004ba8f3                      ; 004ba8af
        ;   XREF to: 004ba8f3 (CONDITIONAL_JUMP)  ; LAB_004ba8f3
    MOV EAX,ECX                         ; 004ba8b1
    NEG EAX                             ; 004ba8b3
    MOV EDI,ECX                         ; 004ba8b5
    ADD ECX,EAX                         ; 004ba8b7
    MOV dword ptr [ESP + 0x328],ECX     ; 004ba8b9
    XOR EAX,EAX                         ; 004ba8c0
        ;   Label: LAB_004ba8c0
    MOV AL,byte ptr [EDI + 0x1cb80f7]   ; 004ba8c2 | DAT_01cb80f8
    MOV dword ptr [ESP + 0x350],EAX     ; 004ba8c8
    XOR EAX,EAX                         ; 004ba8cf
    MOV AL,byte ptr [EBX]               ; 004ba8d1
    PUSH EAX                            ; 004ba8d3
    CALL FUN_005b8e40                   ; 004ba8d4
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004ba8d9
    CMP EAX,dword ptr [ESP + 0x350]     ; 004ba8dc
    JNZ 0x004ba8e6                      ; 004ba8e3
        ;   XREF to: 004ba8e6 (CONDITIONAL_JUMP)  ; LAB_004ba8e6
    INC ESI                             ; 004ba8e5
    MOV EDX,dword ptr [ESP + 0x328]     ; 004ba8e6
        ;   Label: LAB_004ba8e6
    DEC EDI                             ; 004ba8ed
    INC EBX                             ; 004ba8ee
    CMP EDI,EDX                         ; 004ba8ef
    JG 0x004ba8c0                       ; 004ba8f1
        ;   XREF to: 004ba8c0 (CONDITIONAL_JUMP)  ; LAB_004ba8c0
    CMP ESI,dword ptr [ESP + 0x268]     ; 004ba8f3
        ;   Label: LAB_004ba8f3
    JNZ 0x004ba939                      ; 004ba8fa
        ;   XREF to: 004ba939 (CONDITIONAL_JUMP)  ; LAB_004ba939
    MOV EAX,[0x01cedef4]                ; 004ba8fc | DAT_01cedef4
    PUSH 0x40a00000                     ; 004ba901
    XOR BL,BL                           ; 004ba906
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004ba908
    PUSH 0x5d822e                       ; 004ba90f | = "Flashlight battery restored"
    MOV byte ptr [0x01cb80f8],BL        ; 004ba914 | DAT_01cb80f8
    MOV dword ptr [EAX + 0x2437c],0x42c80000 ; 004ba91a
    CALL FUN_0050fe80                   ; 004ba924
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004ba929
    PUSH EAX                            ; 004ba92c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ba92d
    PUSH EBX                            ; 004ba930
    CALL FUN_004b31a0                   ; 004ba931
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b31a0()
    ADD ESP,0xc                         ; 004ba936
    PUSH 0x5d824a                       ; 004ba939 | DAT_005d824a
        ;   Label: LAB_004ba939
    CALL FUN_0050ff00                   ; 004ba93e
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR ESI,ESI                         ; 004ba943
    ADD ESP,0x4                         ; 004ba945
    MOV EDI,EAX                         ; 004ba948
    MOV EBX,EAX                         ; 004ba94a
    SUB ECX,ECX                         ; 004ba94c
    DEC ECX                             ; 004ba94e
    XOR EAX,EAX                         ; 004ba94f
    SCASB.REPNE ES:EDI                  ; 004ba951
    NOT ECX                             ; 004ba953
    DEC ECX                             ; 004ba955
    MOV dword ptr [ESP + 0x26c],ECX     ; 004ba956
    TEST ECX,ECX                        ; 004ba95d
    JLE 0x004ba9a3                      ; 004ba95f
        ;   XREF to: 004ba9a3 (CONDITIONAL_JUMP)  ; LAB_004ba9a3
    MOV EAX,ECX                         ; 004ba961
    NEG EAX                             ; 004ba963
    MOV EDI,ECX                         ; 004ba965
    ADD ECX,EAX                         ; 004ba967
    MOV dword ptr [ESP + 0x32c],ECX     ; 004ba969
    XOR EAX,EAX                         ; 004ba970
        ;   Label: LAB_004ba970
    MOV AL,byte ptr [EDI + 0x1cb80f7]   ; 004ba972 | DAT_01cb80f8
    MOV dword ptr [ESP + 0x350],EAX     ; 004ba978
    XOR EAX,EAX                         ; 004ba97f
    MOV AL,byte ptr [EBX]               ; 004ba981
    PUSH EAX                            ; 004ba983
    CALL FUN_005b8e40                   ; 004ba984
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004ba989
    CMP EAX,dword ptr [ESP + 0x350]     ; 004ba98c
    JNZ 0x004ba996                      ; 004ba993
        ;   XREF to: 004ba996 (CONDITIONAL_JUMP)  ; LAB_004ba996
    INC ESI                             ; 004ba995
    MOV ECX,dword ptr [ESP + 0x32c]     ; 004ba996
        ;   Label: LAB_004ba996
    DEC EDI                             ; 004ba99d
    INC EBX                             ; 004ba99e
    CMP EDI,ECX                         ; 004ba99f
    JG 0x004ba970                       ; 004ba9a1
        ;   XREF to: 004ba970 (CONDITIONAL_JUMP)  ; LAB_004ba970
    CMP ESI,dword ptr [ESP + 0x26c]     ; 004ba9a3
        ;   Label: LAB_004ba9a3
    JNZ 0x004ba9c5                      ; 004ba9aa
        ;   XREF to: 004ba9c5 (CONDITIONAL_JUMP)  ; LAB_004ba9c5
    PUSH 0x1                            ; 004ba9ac
    MOV ESI,dword ptr [0x0061e8f4]      ; 004ba9ae | DAT_0061e8f4
    XOR BH,BH                           ; 004ba9b4
    PUSH ESI                            ; 004ba9b6
    MOV byte ptr [0x01cb80f8],BH        ; 004ba9b7 | DAT_01cb80f8
    CALL FUN_0058b470                   ; 004ba9bd
        ;   XREF to: 0058b470 (UNCONDITIONAL_CALL)  ; undefined FUN_0058b470()
    ADD ESP,0x8                         ; 004ba9c2
    PUSH 0x5d8284                       ; 004ba9c5 | DAT_005d8284
        ;   Label: LAB_004ba9c5
    CALL FUN_0050ff00                   ; 004ba9ca
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR ESI,ESI                         ; 004ba9cf
    ADD ESP,0x4                         ; 004ba9d1
    MOV EDI,EAX                         ; 004ba9d4
    MOV EBX,EAX                         ; 004ba9d6
    SUB ECX,ECX                         ; 004ba9d8
    DEC ECX                             ; 004ba9da
    XOR EAX,EAX                         ; 004ba9db
    SCASB.REPNE ES:EDI                  ; 004ba9dd
    NOT ECX                             ; 004ba9df
    DEC ECX                             ; 004ba9e1
    MOV dword ptr [ESP + 0x270],ECX     ; 004ba9e2
    TEST ECX,ECX                        ; 004ba9e9
    JLE 0x004baa2f                      ; 004ba9eb
        ;   XREF to: 004baa2f (CONDITIONAL_JUMP)  ; LAB_004baa2f
    MOV EAX,ECX                         ; 004ba9ed
    NEG EAX                             ; 004ba9ef
    MOV EDI,ECX                         ; 004ba9f1
    ADD ECX,EAX                         ; 004ba9f3
    MOV dword ptr [ESP + 0x330],ECX     ; 004ba9f5
    XOR EAX,EAX                         ; 004ba9fc
        ;   Label: LAB_004ba9fc
    MOV AL,byte ptr [EDI + 0x1cb80f7]   ; 004ba9fe | DAT_01cb80f8
    MOV dword ptr [ESP + 0x350],EAX     ; 004baa04
    XOR EAX,EAX                         ; 004baa0b
    MOV AL,byte ptr [EBX]               ; 004baa0d
    PUSH EAX                            ; 004baa0f
    CALL FUN_005b8e40                   ; 004baa10
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004baa15
    CMP EAX,dword ptr [ESP + 0x350]     ; 004baa18
    JNZ 0x004baa22                      ; 004baa1f
        ;   XREF to: 004baa22 (CONDITIONAL_JUMP)  ; LAB_004baa22
    INC ESI                             ; 004baa21
    MOV ECX,dword ptr [ESP + 0x330]     ; 004baa22
        ;   Label: LAB_004baa22
    DEC EDI                             ; 004baa29
    INC EBX                             ; 004baa2a
    CMP EDI,ECX                         ; 004baa2b
    JG 0x004ba9fc                       ; 004baa2d
        ;   XREF to: 004ba9fc (CONDITIONAL_JUMP)  ; LAB_004ba9fc
    CMP ESI,dword ptr [ESP + 0x270]     ; 004baa2f
        ;   Label: LAB_004baa2f
    JNZ 0x004baa51                      ; 004baa36
        ;   XREF to: 004baa51 (CONDITIONAL_JUMP)  ; LAB_004baa51
    PUSH 0x2                            ; 004baa38
    MOV ESI,dword ptr [0x0061e8f4]      ; 004baa3a | DAT_0061e8f4
    XOR CL,CL                           ; 004baa40
    PUSH ESI                            ; 004baa42
    MOV byte ptr [0x01cb80f8],CL        ; 004baa43 | DAT_01cb80f8
    CALL FUN_0058b470                   ; 004baa49
        ;   XREF to: 0058b470 (UNCONDITIONAL_CALL)  ; undefined FUN_0058b470()
    ADD ESP,0x8                         ; 004baa4e
    PUSH 0x5d82bb                       ; 004baa51 | DAT_005d82bb
        ;   Label: LAB_004baa51
    CALL FUN_0050ff00                   ; 004baa56
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR EDI,EDI                         ; 004baa5b
    ADD ESP,0x4                         ; 004baa5d
    MOV dword ptr [ESP + 0x278],EDI     ; 004baa60
    MOV EDI,EAX                         ; 004baa67
    MOV EBX,EAX                         ; 004baa69
    SUB ECX,ECX                         ; 004baa6b
    DEC ECX                             ; 004baa6d
    XOR EAX,EAX                         ; 004baa6e
    SCASB.REPNE ES:EDI                  ; 004baa70
    NOT ECX                             ; 004baa72
    DEC ECX                             ; 004baa74
    MOV dword ptr [ESP + 0x274],ECX     ; 004baa75
    TEST ECX,ECX                        ; 004baa7c
    JLE 0x004baabd                      ; 004baa7e
        ;   XREF to: 004baabd (CONDITIONAL_JUMP)  ; LAB_004baabd
    MOV EAX,ECX                         ; 004baa80
    MOV ESI,EBX                         ; 004baa82
    NEG EAX                             ; 004baa84
    MOV EBX,ECX                         ; 004baa86
    ADD ECX,EAX                         ; 004baa88
    MOV dword ptr [ESP + 0x334],ECX     ; 004baa8a
    XOR EAX,EAX                         ; 004baa91
        ;   Label: LAB_004baa91
    MOV AL,byte ptr [ESI]               ; 004baa93
    PUSH EAX                            ; 004baa95
    MOVZX EDI,byte ptr [EBX + 0x1cb80f7] ; 004baa96 | DAT_01cb80f8
    CALL FUN_005b8e40                   ; 004baa9d
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004baaa2
    CMP EDI,EAX                         ; 004baaa5
    JNZ 0x004baab0                      ; 004baaa7
        ;   XREF to: 004baab0 (CONDITIONAL_JUMP)  ; LAB_004baab0
    INC dword ptr [ESP + 0x278]         ; 004baaa9
    MOV ECX,dword ptr [ESP + 0x334]     ; 004baab0
        ;   Label: LAB_004baab0
    DEC EBX                             ; 004baab7
    INC ESI                             ; 004baab8
    CMP EBX,ECX                         ; 004baab9
    JG 0x004baa91                       ; 004baabb
        ;   XREF to: 004baa91 (CONDITIONAL_JUMP)  ; LAB_004baa91
    MOV EAX,dword ptr [ESP + 0x278]     ; 004baabd
        ;   Label: LAB_004baabd
    CMP EAX,dword ptr [ESP + 0x274]     ; 004baac4
    JNZ 0x004bae34                      ; 004baacb
        ;   XREF to: 004bae34 (CONDITIONAL_JUMP)  ; LAB_004bae34
    MOV EAX,dword ptr [EBP + 0x14]      ; 004baad1
    XOR CH,CH                           ; 004baad4
    MOV ESI,dword ptr [EAX + 0x220]     ; 004baad6
    MOV byte ptr [0x01cb80f8],CH        ; 004baadc | DAT_01cb80f8
    TEST ESI,ESI                        ; 004baae2
    SETZ AL                             ; 004baae4
    MOV EDI,0x3e800000                  ; 004baae7
    MOV EBX,dword ptr [EBP + 0x14]      ; 004baaec
    MOV dword ptr [ESP + 0x27c],EDI     ; 004baaef
    AND EAX,0xff                        ; 004baaf6
    MOV dword ptr [EBX + 0x220],EAX     ; 004baafb
    JZ 0x004bac0d                       ; 004bab01
        ;   XREF to: 004bac0d (CONDITIONAL_JUMP)  ; LAB_004bac0d
    PUSH 0x5d82f0                       ; 004bab07 | = "burp2.wav"
    PUSH 0x0                            ; 004bab0c
    MOV ESI,dword ptr [0x0061c068]      ; 004bab0e | DAT_0061c068
    MOV EBX,0x40800000                  ; 004bab14
    PUSH ESI                            ; 004bab19
    MOV dword ptr [ESP + 0x288],EBX     ; 004bab1a
    CALL FUN_0055ae30                   ; 004bab21
        ;   XREF to: 0055ae30 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae30()
        ;   Label: LAB_004bab21
    ADD ESP,0xc                         ; 004bab26
    XOR EDI,EDI                         ; 004bab29
    MOV dword ptr [ESP + 0x338],EDI     ; 004bab2b
    MOV dword ptr [ESP + 0x348],EDI     ; 004bab32
    MOV EAX,[0x0061b5a8]                ; 004bab39 | DAT_0061b5a8
        ;   Label: LAB_004bab39
    MOV EBX,dword ptr [ESP + 0x348]     ; 004bab3e
    CMP EBX,dword ptr [EAX + 0x14f0a8]  ; 004bab45 | DAT_01fb5260
    JGE 0x004bae34                      ; 004bab4b
        ;   XREF to: 004bae34 (CONDITIONAL_JUMP)  ; LAB_004bae34
    ADD EAX,dword ptr [ESP + 0x338]     ; 004bab51
    MOV EAX,dword ptr [EAX + 0x14f0ac]  ; 004bab58
    LEA ECX,[EAX + 0x2b4]               ; 004bab5e
    MOV DL,byte ptr [EAX + 0x2514]      ; 004bab64
    MOV dword ptr [ESP + 0x280],ECX     ; 004bab6a
    TEST DL,DL                          ; 004bab71
    JNZ 0x004bac1f                      ; 004bab73
        ;   XREF to: 004bac1f (CONDITIONAL_JUMP)  ; LAB_004bac1f
    MOV ESI,dword ptr [ESP + 0x348]     ; 004bab79
        ;   Label: LAB_004bab79
    MOV EBX,dword ptr [ESP + 0x338]     ; 004bab80
    INC ESI                             ; 004bab87
    ADD EBX,0x4                         ; 004bab88
    MOV dword ptr [ESP + 0x348],ESI     ; 004bab8b
    MOV dword ptr [ESP + 0x338],EBX     ; 004bab92
    JMP 0x004bab39                      ; 004bab99
        ;   XREF to: 004bab39 (UNCONDITIONAL_JUMP)  ; LAB_004bab39
    PUSH 0x40a00000                     ; 004bab9b
        ;   Label: LAB_004bab9b
    PUSH 0x5d7fcd                       ; 004baba0 | = "Gratuitous dismemberment disabled"
    JMP 0x004ba38b                      ; 004baba5
        ;   XREF to: 004ba38b (UNCONDITIONAL_JUMP)  ; LAB_004ba38b
    PUSH 0x5d80e9                       ; 004babaa | = "CCrossbow"
        ;   Label: LAB_004babaa
    PUSH EBX                            ; 004babaf
    CALL FUN_0040c840                   ; 004babb0
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 004babb5
    TEST EAX,EAX                        ; 004babb8
    JZ 0x004babe2                       ; 004babba
        ;   XREF to: 004babe2 (CONDITIONAL_JUMP)  ; LAB_004babe2
    PUSH 0x40a00000                     ; 004babbc
    PUSH 0x5d8122                       ; 004babc1 | = "Flaming ammo enabled."
    MOV dword ptr [EBX + 0x6c8],0x5     ; 004babc6
    CALL FUN_0050fe80                   ; 004babd0
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004babd5
    PUSH EAX                            ; 004babd8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004babd9
    PUSH EAX                            ; 004babdc
    JMP 0x004ba657                      ; 004babdd
        ;   XREF to: 004ba657 (UNCONDITIONAL_JUMP)  ; LAB_004ba657
    PUSH 0x40a00000                     ; 004babe2
        ;   Label: LAB_004babe2
    PUSH 0x5d80f3                       ; 004babe7 | = "You can only use flaming ammo on the ..."
    CALL FUN_0050fe80                   ; 004babec
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004babf1
    PUSH EAX                            ; 004babf4
    MOV EDI,dword ptr [EBP + 0x14]      ; 004babf5
    PUSH EDI                            ; 004babf8
    JMP 0x004ba657                      ; 004babf9
        ;   XREF to: 004ba657 (UNCONDITIONAL_JUMP)  ; LAB_004ba657
    PUSH 0x40a00000                     ; 004babfe
        ;   Label: LAB_004babfe
    PUSH 0x5d81e3                       ; 004bac03 | = "Single step disabled"
    JMP 0x004ba877                      ; 004bac08
        ;   XREF to: 004ba877 (UNCONDITIONAL_JUMP)  ; LAB_004ba877
    PUSH 0x5d82fa                       ; 004bac0d | = "burp1.wav"
        ;   Label: LAB_004bac0d
    PUSH EAX                            ; 004bac12
    MOV ECX,dword ptr [0x0061c068]      ; 004bac13 | DAT_0061c068
    PUSH ECX                            ; 004bac19
    JMP 0x004bab21                      ; 004bac1a
        ;   XREF to: 004bab21 (UNCONDITIONAL_JUMP)  ; LAB_004bab21
    PUSH ECX                            ; 004bac1f
        ;   Label: LAB_004bac1f
    CALL FUN_00547890                   ; 004bac20
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    ADD ESP,0x4                         ; 004bac25
    PUSH 0x0                            ; 004bac28
    PUSH 0x5d8304                       ; 004bac2a | = "Bip01 head"
    PUSH EAX                            ; 004bac2f
    MOV ESI,EAX                         ; 004bac30
    MOV dword ptr [ESP + 0x290],EAX     ; 004bac32
    CALL FUN_00540e80                   ; 004bac39
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004bac3e
    CMP EAX,-0x1                        ; 004bac41
    JZ 0x004bacd0                       ; 004bac44
        ;   XREF to: 004bacd0 (CONDITIONAL_JUMP)  ; LAB_004bacd0
    MOV EDX,dword ptr [ESP + 0x280]     ; 004bac4a
    MOV dword ptr [ESP + 0x290],EAX     ; 004bac51
    SHL EAX,0x2                         ; 004bac58
    ADD EAX,EDX                         ; 004bac5b
    MOV EBX,dword ptr [ESP + 0x280]     ; 004bac5d
    FLD float ptr [EAX + 0x514]         ; 004bac64
    FMUL float ptr [ESP + 0x27c]        ; 004bac6a
    MOV dword ptr [ESP + 0x288],EBX     ; 004bac71
    MOV EBX,dword ptr [ESP + 0x27c]     ; 004bac78
    MOV EDI,ESI                         ; 004bac7f
    MOV dword ptr [ESP + 0x28c],EBX     ; 004bac81
    FSTP float ptr [EAX + 0x514]        ; 004bac88
    MOV ECX,dword ptr [ESI + 0x1d1f8]   ; 004bac8e
    XOR EBX,EBX                         ; 004bac94
    TEST ECX,ECX                        ; 004bac96
    JLE 0x004bacd0                      ; 004bac98
        ;   XREF to: 004bacd0 (CONDITIONAL_JUMP)  ; LAB_004bacd0
    MOV EDX,dword ptr [ESP + 0x290]     ; 004bac9a
        ;   Label: LAB_004bac9a
    CMP EDX,dword ptr [ESI + 0x1d21c]   ; 004baca1
    JNZ 0x004bacc2                      ; 004baca7
        ;   XREF to: 004bacc2 (CONDITIONAL_JUMP)  ; LAB_004bacc2
    PUSH EBX                            ; 004baca9
    PUSH dword ptr [ESP + 0x290]        ; 004bacaa
    PUSH EDI                            ; 004bacb1
    MOV ECX,dword ptr [ESP + 0x294]     ; 004bacb2
    PUSH ECX                            ; 004bacb9
    CALL FUN_004b9060                   ; 004bacba
        ;   XREF to: 004b9060 (UNCONDITIONAL_CALL)  ; undefined FUN_004b9060()
    ADD ESP,0x10                        ; 004bacbf
    INC EBX                             ; 004bacc2
        ;   Label: LAB_004bacc2
    MOV EAX,dword ptr [EDI + 0x1d1f8]   ; 004bacc3
    ADD ESI,0x24                        ; 004bacc9
    CMP EBX,EAX                         ; 004baccc
    JL 0x004bac9a                       ; 004bacce
        ;   XREF to: 004bac9a (CONDITIONAL_JUMP)  ; LAB_004bac9a
    PUSH 0x0                            ; 004bacd0
        ;   Label: LAB_004bacd0
    PUSH 0x5d830f                       ; 004bacd2 | = "bipltit02"
    MOV EBX,dword ptr [ESP + 0x28c]     ; 004bacd7
    PUSH EBX                            ; 004bacde
    CALL FUN_00540e80                   ; 004bacdf
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004bace4
    CMP EAX,-0x1                        ; 004bace7
    JZ 0x004bad7d                       ; 004bacea
        ;   XREF to: 004bad7d (CONDITIONAL_JUMP)  ; LAB_004bad7d
    MOV ESI,dword ptr [ESP + 0x280]     ; 004bacf0
    MOV dword ptr [ESP + 0x29c],EAX     ; 004bacf7
    SHL EAX,0x2                         ; 004bacfe
    ADD EAX,ESI                         ; 004bad01
    MOV EBX,dword ptr [ESP + 0x280]     ; 004bad03
    FLD float ptr [EAX + 0x514]         ; 004bad0a
    FMUL float ptr [ESP + 0x27c]        ; 004bad10
    MOV dword ptr [ESP + 0x294],EBX     ; 004bad17
    MOV EBX,dword ptr [ESP + 0x27c]     ; 004bad1e
    MOV EDI,dword ptr [ESP + 0x284]     ; 004bad25
    MOV dword ptr [ESP + 0x298],EBX     ; 004bad2c
    FSTP float ptr [EAX + 0x514]        ; 004bad33
    MOV EDX,dword ptr [EDI + 0x1d1f8]   ; 004bad39
    XOR EBX,EBX                         ; 004bad3f
    TEST EDX,EDX                        ; 004bad41
    JLE 0x004bad7d                      ; 004bad43
        ;   XREF to: 004bad7d (CONDITIONAL_JUMP)  ; LAB_004bad7d
    MOV ESI,EDI                         ; 004bad45
    MOV EDX,dword ptr [ESP + 0x29c]     ; 004bad47
        ;   Label: LAB_004bad47
    CMP EDX,dword ptr [ESI + 0x1d21c]   ; 004bad4e
    JNZ 0x004bad6f                      ; 004bad54
        ;   XREF to: 004bad6f (CONDITIONAL_JUMP)  ; LAB_004bad6f
    PUSH EBX                            ; 004bad56
    PUSH dword ptr [ESP + 0x29c]        ; 004bad57
    PUSH EDI                            ; 004bad5e
    MOV ECX,dword ptr [ESP + 0x2a0]     ; 004bad5f
    PUSH ECX                            ; 004bad66
    CALL FUN_004b9060                   ; 004bad67
        ;   XREF to: 004b9060 (UNCONDITIONAL_CALL)  ; undefined FUN_004b9060()
    ADD ESP,0x10                        ; 004bad6c
    INC EBX                             ; 004bad6f
        ;   Label: LAB_004bad6f
    MOV ECX,dword ptr [EDI + 0x1d1f8]   ; 004bad70
    ADD ESI,0x24                        ; 004bad76
    CMP EBX,ECX                         ; 004bad79
    JL 0x004bad47                       ; 004bad7b
        ;   XREF to: 004bad47 (CONDITIONAL_JUMP)  ; LAB_004bad47
    PUSH 0x0                            ; 004bad7d
        ;   Label: LAB_004bad7d
    PUSH 0x5d8319                       ; 004bad7f | = "biprtit02"
    MOV EBX,dword ptr [ESP + 0x28c]     ; 004bad84
    PUSH EBX                            ; 004bad8b
    CALL FUN_00540e80                   ; 004bad8c
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 004bad91
    CMP EAX,-0x1                        ; 004bad94
    JZ 0x004bab79                       ; 004bad97
        ;   XREF to: 004bab79 (CONDITIONAL_JUMP)  ; LAB_004bab79
    MOV ESI,dword ptr [ESP + 0x280]     ; 004bad9d
    MOV dword ptr [ESP + 0x2a8],EAX     ; 004bada4
    SHL EAX,0x2                         ; 004badab
    ADD EAX,ESI                         ; 004badae
    MOV EBX,dword ptr [ESP + 0x280]     ; 004badb0
    FLD float ptr [EAX + 0x514]         ; 004badb7
    FMUL float ptr [ESP + 0x27c]        ; 004badbd
    MOV dword ptr [ESP + 0x2a0],EBX     ; 004badc4
    MOV EBX,dword ptr [ESP + 0x27c]     ; 004badcb
    MOV EDI,dword ptr [ESP + 0x284]     ; 004badd2
    MOV dword ptr [ESP + 0x2a4],EBX     ; 004badd9
    FSTP float ptr [EAX + 0x514]        ; 004bade0
    MOV EDX,dword ptr [EDI + 0x1d1f8]   ; 004bade6
    XOR EBX,EBX                         ; 004badec
    TEST EDX,EDX                        ; 004badee
    JLE 0x004bab79                      ; 004badf0
        ;   XREF to: 004bab79 (CONDITIONAL_JUMP)  ; LAB_004bab79
    MOV ESI,EDI                         ; 004badf6
    MOV EDX,dword ptr [ESP + 0x2a8]     ; 004badf8
        ;   Label: LAB_004badf8
    CMP EDX,dword ptr [ESI + 0x1d21c]   ; 004badff
    JNZ 0x004bae20                      ; 004bae05
        ;   XREF to: 004bae20 (CONDITIONAL_JUMP)  ; LAB_004bae20
    PUSH EBX                            ; 004bae07
    PUSH dword ptr [ESP + 0x2a8]        ; 004bae08
    PUSH EDI                            ; 004bae0f
    MOV ECX,dword ptr [ESP + 0x2ac]     ; 004bae10
    PUSH ECX                            ; 004bae17
    CALL FUN_004b9060                   ; 004bae18
        ;   XREF to: 004b9060 (UNCONDITIONAL_CALL)  ; undefined FUN_004b9060()
    ADD ESP,0x10                        ; 004bae1d
    INC EBX                             ; 004bae20
        ;   Label: LAB_004bae20
    MOV ECX,dword ptr [EDI + 0x1d1f8]   ; 004bae21
    ADD ESI,0x24                        ; 004bae27
    CMP EBX,ECX                         ; 004bae2a
    JGE 0x004bab79                      ; 004bae2c
        ;   XREF to: 004bab79 (CONDITIONAL_JUMP)  ; LAB_004bab79
    JMP 0x004badf8                      ; 004bae32
        ;   XREF to: 004badf8 (UNCONDITIONAL_JUMP)  ; LAB_004badf8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bae34
        ;   Label: LAB_004bae34
    CMP dword ptr [EAX + 0x22c],0x0     ; 004bae37
    JZ 0x004baee4                       ; 004bae3e
        ;   XREF to: 004baee4 (CONDITIONAL_JUMP)  ; LAB_004baee4
    PUSH 0x5d8323                       ; 004bae44 | DAT_005d8323
    CALL FUN_0050ff00                   ; 004bae49
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    MOV EBX,EAX                         ; 004bae4e
    ADD ESP,0x4                         ; 004bae50
    XOR EAX,EAX                         ; 004bae53
    MOV EDI,EBX                         ; 004bae55
    MOV dword ptr [ESP + 0x2b0],EAX     ; 004bae57
    SUB ECX,ECX                         ; 004bae5e
    DEC ECX                             ; 004bae60
    XOR EAX,EAX                         ; 004bae61
    SCASB.REPNE ES:EDI                  ; 004bae63
    NOT ECX                             ; 004bae65
    DEC ECX                             ; 004bae67
    MOV dword ptr [ESP + 0x2ac],ECX     ; 004bae68
    TEST ECX,ECX                        ; 004bae6f
    JLE 0x004baeb0                      ; 004bae71
        ;   XREF to: 004baeb0 (CONDITIONAL_JUMP)  ; LAB_004baeb0
    MOV EAX,ECX                         ; 004bae73
    MOV ESI,EBX                         ; 004bae75
    NEG EAX                             ; 004bae77
    MOV EBX,ECX                         ; 004bae79
    ADD ECX,EAX                         ; 004bae7b
    MOV dword ptr [ESP + 0x33c],ECX     ; 004bae7d
    XOR EAX,EAX                         ; 004bae84
        ;   Label: LAB_004bae84
    MOV AL,byte ptr [ESI]               ; 004bae86
    PUSH EAX                            ; 004bae88
    MOVZX EDI,byte ptr [EBX + 0x1cb80f7] ; 004bae89 | DAT_01cb80f8
    CALL FUN_005b8e40                   ; 004bae90
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004bae95
    CMP EDI,EAX                         ; 004bae98
    JNZ 0x004baea3                      ; 004bae9a
        ;   XREF to: 004baea3 (CONDITIONAL_JUMP)  ; LAB_004baea3
    INC dword ptr [ESP + 0x2b0]         ; 004bae9c
    MOV EDX,dword ptr [ESP + 0x33c]     ; 004baea3
        ;   Label: LAB_004baea3
    DEC EBX                             ; 004baeaa
    INC ESI                             ; 004baeab
    CMP EBX,EDX                         ; 004baeac
    JG 0x004bae84                       ; 004baeae
        ;   XREF to: 004bae84 (CONDITIONAL_JUMP)  ; LAB_004bae84
    MOV EAX,dword ptr [ESP + 0x2b0]     ; 004baeb0
        ;   Label: LAB_004baeb0
    CMP EAX,dword ptr [ESP + 0x2ac]     ; 004baeb7
    JNZ 0x004baee4                      ; 004baebe
        ;   XREF to: 004baee4 (CONDITIONAL_JUMP)  ; LAB_004baee4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004baec0
    XOR DH,DH                           ; 004baec3
    MOV EBX,dword ptr [EAX + 0x234]     ; 004baec5
    MOV byte ptr [0x01cb80f8],DH        ; 004baecb | DAT_01cb80f8
    TEST EBX,EBX                        ; 004baed1
    SETZ AL                             ; 004baed3
    MOV EBX,dword ptr [EBP + 0x14]      ; 004baed6
    AND EAX,0xff                        ; 004baed9
    MOV dword ptr [EBX + 0x234],EAX     ; 004baede
    PUSH 0x5d8357                       ; 004baee4 | DAT_005d8357
        ;   Label: LAB_004baee4
    CALL FUN_0050ff00                   ; 004baee9
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR ESI,ESI                         ; 004baeee
    ADD ESP,0x4                         ; 004baef0
    MOV EDI,EAX                         ; 004baef3
    MOV EBX,EAX                         ; 004baef5
    SUB ECX,ECX                         ; 004baef7
    DEC ECX                             ; 004baef9
    XOR EAX,EAX                         ; 004baefa
    SCASB.REPNE ES:EDI                  ; 004baefc
    NOT ECX                             ; 004baefe
    DEC ECX                             ; 004baf00
    MOV dword ptr [ESP + 0x2b4],ECX     ; 004baf01
    TEST ECX,ECX                        ; 004baf08
    JLE 0x004baf4e                      ; 004baf0a
        ;   XREF to: 004baf4e (CONDITIONAL_JUMP)  ; LAB_004baf4e
    MOV EAX,ECX                         ; 004baf0c
    NEG EAX                             ; 004baf0e
    MOV EDI,ECX                         ; 004baf10
    ADD ECX,EAX                         ; 004baf12
    MOV dword ptr [ESP + 0x340],ECX     ; 004baf14
    XOR EAX,EAX                         ; 004baf1b
        ;   Label: LAB_004baf1b
    MOV AL,byte ptr [EDI + 0x1cb80f7]   ; 004baf1d | DAT_01cb80f8
    MOV dword ptr [ESP + 0x350],EAX     ; 004baf23
    XOR EAX,EAX                         ; 004baf2a
    MOV AL,byte ptr [EBX]               ; 004baf2c
    PUSH EAX                            ; 004baf2e
    CALL FUN_005b8e40                   ; 004baf2f
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004baf34
    CMP EAX,dword ptr [ESP + 0x350]     ; 004baf37
    JNZ 0x004baf41                      ; 004baf3e
        ;   XREF to: 004baf41 (CONDITIONAL_JUMP)  ; LAB_004baf41
    INC ESI                             ; 004baf40
    MOV EAX,dword ptr [ESP + 0x340]     ; 004baf41
        ;   Label: LAB_004baf41
    DEC EDI                             ; 004baf48
    INC EBX                             ; 004baf49
    CMP EDI,EAX                         ; 004baf4a
    JG 0x004baf1b                       ; 004baf4c
        ;   XREF to: 004baf1b (CONDITIONAL_JUMP)  ; LAB_004baf1b
    CMP ESI,dword ptr [ESP + 0x2b4]     ; 004baf4e
        ;   Label: LAB_004baf4e
    JNZ 0x004baf94                      ; 004baf55
        ;   XREF to: 004baf94 (CONDITIONAL_JUMP)  ; LAB_004baf94
    MOV EAX,[0x01cedef4]                ; 004baf57 | DAT_01cedef4
    PUSH 0x40a00000                     ; 004baf5c
    XOR BL,BL                           ; 004baf61
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004baf63
    PUSH 0x5d838b                       ; 004baf6a | = "Health restored."
    MOV byte ptr [0x01cb80f8],BL        ; 004baf6f | DAT_01cb80f8
    MOV dword ptr [EAX + 0x25a8],0x42c80000 ; 004baf75
    CALL FUN_0050fe80                   ; 004baf7f
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004baf84
    PUSH EAX                            ; 004baf87
    MOV ECX,dword ptr [EBP + 0x14]      ; 004baf88
    PUSH ECX                            ; 004baf8b
    CALL FUN_004b31a0                   ; 004baf8c
        ;   XREF to: 004b31a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b31a0()
    ADD ESP,0xc                         ; 004baf91
    MOV EAX,dword ptr [EBP + 0x14]      ; 004baf94
        ;   Label: LAB_004baf94
    CMP dword ptr [EAX + 0x22c],0x0     ; 004baf97
    JZ 0x004b916f                       ; 004baf9e
        ;   XREF to: 004b916f (CONDITIONAL_JUMP)  ; LAB_004b916f
    PUSH 0x5d839c                       ; 004bafa4 | DAT_005d839c
    CALL FUN_0050ff00                   ; 004bafa9
        ;   XREF to: 0050ff00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ff00()
    XOR ESI,ESI                         ; 004bafae
    ADD ESP,0x4                         ; 004bafb0
    MOV EDI,EAX                         ; 004bafb3
    MOV EBX,EAX                         ; 004bafb5
    SUB ECX,ECX                         ; 004bafb7
    DEC ECX                             ; 004bafb9
    XOR EAX,EAX                         ; 004bafba
    SCASB.REPNE ES:EDI                  ; 004bafbc
    NOT ECX                             ; 004bafbe
    DEC ECX                             ; 004bafc0
    MOV dword ptr [ESP + 0x2bc],ESI     ; 004bafc1
    MOV dword ptr [ESP + 0x2b8],ECX     ; 004bafc8
    TEST ECX,ECX                        ; 004bafcf
    JLE 0x004bb009                      ; 004bafd1
        ;   XREF to: 004bb009 (CONDITIONAL_JUMP)  ; LAB_004bb009
    MOV EAX,ECX                         ; 004bafd3
    MOV ESI,EBX                         ; 004bafd5
    NEG EAX                             ; 004bafd7
    MOV EBX,ECX                         ; 004bafd9
    ADD ECX,EAX                         ; 004bafdb
    MOV dword ptr [ESP + 0x344],ECX     ; 004bafdd
    XOR EAX,EAX                         ; 004bafe4
        ;   Label: LAB_004bafe4
    MOV AL,byte ptr [ESI]               ; 004bafe6
    PUSH EAX                            ; 004bafe8
    MOVZX EDI,byte ptr [EBX + 0x1cb80f7] ; 004bafe9 | DAT_01cb80f8
    CALL FUN_005b8e40                   ; 004baff0
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8e40()
    ADD ESP,0x4                         ; 004baff5
    CMP EDI,EAX                         ; 004baff8
    JZ 0x004bb03f                       ; 004baffa
        ;   XREF to: 004bb03f (CONDITIONAL_JUMP)  ; LAB_004bb03f
    MOV ECX,dword ptr [ESP + 0x344]     ; 004baffc
        ;   Label: LAB_004baffc
    DEC EBX                             ; 004bb003
    INC ESI                             ; 004bb004
    CMP EBX,ECX                         ; 004bb005
    JG 0x004bafe4                       ; 004bb007
        ;   XREF to: 004bafe4 (CONDITIONAL_JUMP)  ; LAB_004bafe4
    MOV EAX,dword ptr [ESP + 0x2bc]     ; 004bb009
        ;   Label: LAB_004bb009
    CMP EAX,dword ptr [ESP + 0x2b8]     ; 004bb010
    JNZ 0x004b916f                      ; 004bb017
        ;   XREF to: 004b916f (CONDITIONAL_JUMP)  ; LAB_004b916f
    XOR BH,BH                           ; 004bb01d
    MOV ESI,dword ptr [0x01cb80e4]      ; 004bb01f | DAT_01cb80e4
    MOV byte ptr [0x01cb80f8],BH        ; 004bb025 | DAT_01cb80f8
    TEST ESI,ESI                        ; 004bb02b
    SETZ AL                             ; 004bb02d
    AND EAX,0xff                        ; 004bb030
    MOV [0x01cb80e4],EAX                ; 004bb035 | DAT_01cb80e4
    JMP 0x004b916f                      ; 004bb03a
        ;   XREF to: 004b916f (UNCONDITIONAL_JUMP)  ; LAB_004b916f
    INC dword ptr [ESP + 0x2bc]         ; 004bb03f
        ;   Label: LAB_004bb03f
    JMP 0x004baffc                      ; 004bb046
        ;   XREF to: 004baffc (UNCONDITIONAL_JUMP)  ; LAB_004baffc

