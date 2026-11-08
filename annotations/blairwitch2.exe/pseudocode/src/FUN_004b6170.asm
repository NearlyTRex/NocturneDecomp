; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b6170(int param_1)
;
; Local Variables:
; undefined        Stack[-0x89c]:1  local_89c
; undefined        Stack[-0x4dc]:1  local_4dc
; undefined        Stack[-0x11c]:1  local_11c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004fcb00 at 004fcb7b
;
; Referenced Globals:
;   TerminatedCString s_Nocturne_is_alive_and_ki_005d76cb
;   TerminatedCString s_s_23_00_23_005d76ea
;   TerminatedCString s_Oct_16_2000_005d76f3
;   TerminatedCString s_game_cpp_built_on_s_s_005d76ff
;   TerminatedCString s_System_RAM_d_005d7719
;   TerminatedCString s_Swap_file_d_005d7729
;   undefined4 DAT_005d7738
;   undefined4 DAT_005d773a
;   TerminatedCString s_ESP_08X_005d773e
;   TerminatedCString s_VELOCITY_005d7749
;   TerminatedCString s_Flashlight_005d7752
;   undefined4 s_lashlight_005d7752+1
;   undefined4 s_ashlight_005d7752+2
;   undefined4 s_shlight_005d7752+3
;   TerminatedCString s_Leave_network_game_005d775d
;   ... and 59 more
;
; Called Functions:
;   FUN_004032b0
;   FUN_00436710
;   FUN_004368b0
;   FUN_00449d90
;   FUN_0047c760
;   FUN_0047e760
;   FUN_004807e0
;   FUN_00480e70
;   FUN_00481fc0
;   FUN_004820b0
;   FUN_00482250
;   FUN_00482320
;   FUN_00482770
;   FUN_004839d0
;   FUN_00483d10
;   ... and 42 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b6170
        ;   Label: FUN_004b6170
    PUSH ESI                            ; 004b6171
    PUSH EDI                            ; 004b6172
    PUSH EBP                            ; 004b6173
    MOV EBP,ESP                         ; 004b6174
    SUB ESP,0x88c                       ; 004b6176
    MOV ECX,0x1                         ; 004b617c
    MOV EBX,dword ptr [0x00609ed0]      ; 004b6181 | PTR_DAT_00609ed0
    XOR EDX,EDX                         ; 004b6187
    PUSH EBX                            ; 004b6189 | DAT_007c158c
    MOV dword ptr [EBP + -0x8],EDX      ; 004b618a
    MOV dword ptr [EBP + -0x4],ECX      ; 004b618d
    CALL FUN_004368b0                   ; 004b6190
        ;   XREF to: 004368b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004368b0()
    ADD ESP,0x4                         ; 004b6195
    PUSH 0x5d76cb                       ; 004b6198 | = "Nocturne is alive and kicking\n"
    MOV ESI,dword ptr [0x00609ed0]      ; 004b619d | PTR_DAT_00609ed0
    PUSH ESI                            ; 004b61a3 | DAT_007c158c
    CALL FUN_00436710                   ; 004b61a4
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0x8                         ; 004b61a9
    PUSH 0x5d76ea                       ; 004b61ac | = "23:00:23"
    PUSH 0x5d76f3                       ; 004b61b1 | = "Oct 16 2000"
    PUSH 0x5d76ff                       ; 004b61b6 | = "game.cpp built on %s %s\n\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 004b61bb | PTR_DAT_00609ed0
    PUSH EDI                            ; 004b61c1 | DAT_007c158c
    CALL FUN_00436710                   ; 004b61c2
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0x10                        ; 004b61c7
    MOV EAX,[0x02664638]                ; 004b61ca | DAT_02664638
    PUSH EAX                            ; 004b61cf
    PUSH 0x5d7719                       ; 004b61d0 | = "System RAM: %d\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 004b61d5 | PTR_DAT_00609ed0
    PUSH EDX                            ; 004b61db | DAT_007c158c
    CALL FUN_00436710                   ; 004b61dc
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0xc                         ; 004b61e1
    MOV ECX,dword ptr [0x0266463c]      ; 004b61e4 | DAT_0266463c
    PUSH ECX                            ; 004b61ea
    PUSH 0x5d7729                       ; 004b61eb | = "Swap file: %d\n"
    MOV EBX,dword ptr [0x00609ed0]      ; 004b61f0 | PTR_DAT_00609ed0
    PUSH EBX                            ; 004b61f6 | DAT_007c158c
    CALL FUN_00436710                   ; 004b61f7
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0xc                         ; 004b61fc
    PUSH 0x5d7738                       ; 004b61ff | DAT_005d7738
    MOV ESI,dword ptr [0x00609ed0]      ; 004b6204 | PTR_DAT_00609ed0
    PUSH ESI                            ; 004b620a | DAT_007c158c
    CALL FUN_00436710                   ; 004b620b
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0x8                         ; 004b6210
    LEA EAX,[EBP + 0xfffffef4]          ; 004b6213
    PUSH EAX                            ; 004b6219
    MOV EDI,dword ptr [0x006138e0]      ; 004b621a | DAT_006138e0
    PUSH EDI                            ; 004b6220
    CALL FUN_004807e0                   ; 004b6221
        ;   XREF to: 004807e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004807e0()
    ADD ESP,0x8                         ; 004b6226
    LEA EAX,[EBP + 0xfffffef4]          ; 004b6229
    PUSH EAX                            ; 004b622f
    PUSH 0x5d773a                       ; 004b6230 | DAT_005d773a
    MOV EAX,[0x00609ed0]                ; 004b6235 | PTR_DAT_00609ed0
    PUSH EAX                            ; 004b623a | DAT_007c158c
    CALL FUN_00436710                   ; 004b623b
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0xc                         ; 004b6240
    MOV EDX,dword ptr [0x0061ea5c]      ; 004b6243 | DAT_0061ea5c
    PUSH EDX                            ; 004b6249
    CALL FUN_0059c2c0                   ; 004b624a
        ;   XREF to: 0059c2c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059c2c0()
    ADD ESP,0x4                         ; 004b624f
    MOV dword ptr [EBP + 0xfffffff4],ESP ; 004b6252
    MOV EAX,dword ptr [EBP + -0xc]      ; 004b6258
    PUSH EAX                            ; 004b625b
    PUSH 0x5d773e                       ; 004b625c | = "ESP: %08X\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 004b6261 | PTR_DAT_00609ed0
    PUSH ECX                            ; 004b6267 | DAT_007c158c
    CALL FUN_00436710                   ; 004b6268
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b626d
    MOV dword ptr [EAX + 0x290],0x0     ; 004b6270
    MOV dword ptr [EAX + 0x218],0x0     ; 004b627a
    MOV dword ptr [EAX + 0x294],0x1     ; 004b6284
    MOV dword ptr [EAX + 0x200],0x0     ; 004b628e
    MOV dword ptr [EAX + 0x204],0x0     ; 004b6298
    MOV dword ptr [EAX + 0x298],0x0     ; 004b62a2
    MOV dword ptr [EAX + 0x1ec],0x0     ; 004b62ac
    MOV dword ptr [EAX + 0x1fc],0x0     ; 004b62b6
    ADD ESP,0xc                         ; 004b62c0
    MOV dword ptr [EAX + 0x1f0],0x0     ; 004b62c3
    MOV dword ptr [EAX + 0x1f4],0x0     ; 004b62cd
    MOV dword ptr [EAX + 0x1f8],0x0     ; 004b62d7
    MOV dword ptr [EAX + 0x29c],0x0     ; 004b62e1
    MOV dword ptr [EAX + 0x2a0],0x0     ; 004b62eb
    MOV dword ptr [EAX + 0x208],0x3f800000 ; 004b62f5
    MOV dword ptr [EAX + 0x20c],0x0     ; 004b62ff
    MOV dword ptr [EAX + 0x210],0x0     ; 004b6309
    MOV dword ptr [EAX + 0x214],0x0     ; 004b6313
    MOV byte ptr [EAX + 0x8d8],0x0      ; 004b631d
    MOV dword ptr [EAX + 0x9d8],0x0     ; 004b6324
    MOV dword ptr [EAX + 0x9dc],0x0     ; 004b632e
    MOV dword ptr [EAX + 0x258],0x0     ; 004b6338
    MOV dword ptr [EAX + 0xe0],0x0      ; 004b6342
    XOR EBX,EBX                         ; 004b634c
    MOV dword ptr [EAX + 0x224],EBX     ; 004b634e
    MOV dword ptr [EAX + 0x254],EBX     ; 004b6354
    MOV dword ptr [EAX + 0x228],EBX     ; 004b635a
    MOV dword ptr [EAX + 0xaec],EBX     ; 004b6360
    MOV dword ptr [EAX + 0x25c],EBX     ; 004b6366
    MOV dword ptr [EAX + 0x260],EBX     ; 004b636c
    MOV dword ptr [EAX + 0x264],EBX     ; 004b6372
    MOV dword ptr [EAX + 0x23c],EBX     ; 004b6378
    MOV dword ptr [EAX + 0x234],EBX     ; 004b637e
    MOV dword ptr [EAX + 0x238],EBX     ; 004b6384
    MOV EAX,[0x00616044]                ; 004b638a | DAT_00616044
    MOV dword ptr [0x01cb7788],EBX      ; 004b638f | DAT_01cb7788
    MOV dword ptr [EAX + 0x40],EBX      ; 004b6395 | DAT_01caf5ac
    CALL FUN_0059ac10                   ; 004b6398
        ;   XREF to: 0059ac10 (UNCONDITIONAL_CALL)  ; undefined FUN_0059ac10()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b639d
    PUSH EAX                            ; 004b63a0
    MOV dword ptr [EAX + 0x22c],EBX     ; 004b63a1
    CALL FUN_004b5fd0                   ; 004b63a7
        ;   XREF to: 004b5fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b5fd0()
    ADD ESP,0x4                         ; 004b63ac
    PUSH 0x5d7749                       ; 004b63af | = "VELOCITY"
    CALL FUN_005bac90                   ; 004b63b4
        ;   XREF to: 005bac90 (UNCONDITIONAL_CALL)  ; undefined FUN_005bac90()
    ADD ESP,0x4                         ; 004b63b9
    TEST EAX,EAX                        ; 004b63bc
    JZ 0x004b63cd                       ; 004b63be
        ;   XREF to: 004b63cd (CONDITIONAL_JUMP)  ; LAB_004b63cd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b63c0
    MOV dword ptr [EAX + 0x22c],0x1     ; 004b63c3
    PUSH 0x1cb3950                      ; 004b63cd
        ;   Label: LAB_004b63cd
    CALL FUN_00449d90                   ; 004b63d2
        ;   XREF to: 00449d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00449d90()
    ADD ESP,0x4                         ; 004b63d7
    MOV ESI,0x5d7752                    ; 004b63da | = "Flashlight"
    MOV EDI,0x1cb3990                   ; 004b63df
    PUSH EDI                            ; 004b63e4
    MOV AL,byte ptr [ESI]               ; 004b63e5 | = "Flashlight" | s_ashlight_005d7752+2
        ;   Label: LAB_004b63e5
    MOV byte ptr [EDI],AL               ; 004b63e7 | DAT_01cb3990 | DAT_01cb3992
    CMP AL,0x0                          ; 004b63e9
    JZ 0x004b63fd                       ; 004b63eb
        ;   XREF to: 004b63fd (CONDITIONAL_JUMP)  ; LAB_004b63fd
    MOV AL,byte ptr [ESI + 0x1]         ; 004b63ed | s_lashlight_005d7752+1 | s_shlight_005d7752+3
    ADD ESI,0x2                         ; 004b63f0
    MOV byte ptr [EDI + 0x1],AL         ; 004b63f3 | DAT_01cb3991 | DAT_01cb3993
    ADD EDI,0x2                         ; 004b63f6
    CMP AL,0x0                          ; 004b63f9
    JNZ 0x004b63e5                      ; 004b63fb
        ;   XREF to: 004b63e5 (CONDITIONAL_JUMP)  ; LAB_004b63e5
    POP EDI                             ; 004b63fd
        ;   Label: LAB_004b63fd
    MOV EAX,0x42000000                  ; 004b63fe
    MOV EDX,dword ptr [0x0061b5a8]      ; 004b6403 | DAT_0061b5a8
    XOR EDI,EDI                         ; 004b6409
    PUSH EDX                            ; 004b640b
    MOV dword ptr [0x01cb5604],EDI      ; 004b640c | DAT_01cb5604
    MOV [0x01cb3a90],EAX                ; 004b6412 | DAT_01cb3a90
    CALL FUN_0052d980                   ; 004b6417
        ;   XREF to: 0052d980 (UNCONDITIONAL_CALL)  ; undefined FUN_0052d980()
    MOV ECX,dword ptr [0x01cb7c50]      ; 004b641c | DAT_01cb7c50
    ADD ESP,0x4                         ; 004b6422
    TEST ECX,ECX                        ; 004b6425
    JZ 0x004b6835                       ; 004b6427
        ;   XREF to: 004b6835 (CONDITIONAL_JUMP)  ; LAB_004b6835
    PUSH 0x1cb7c54                      ; 004b642d | DAT_01cb7c54
    MOV dword ptr [0x01cb7c50],EDI      ; 004b6432 | DAT_01cb7c50
    MOV EDI,dword ptr [0x0061b5a8]      ; 004b6438 | DAT_0061b5a8
    PUSH EDI                            ; 004b643e
    CALL FUN_00534990                   ; 004b643f
        ;   XREF to: 00534990 (UNCONDITIONAL_CALL)  ; undefined FUN_00534990()
    ADD ESP,0x8                         ; 004b6444
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b6447
        ;   Label: LAB_004b6447
    MOV EDX,dword ptr [EAX + 0x240]     ; 004b644a
    CMP EDX,0x8000                      ; 004b6450
    JGE 0x004b6849                      ; 004b6456
        ;   XREF to: 004b6849 (CONDITIONAL_JUMP)  ; LAB_004b6849
    MOV dword ptr [EAX + 0x240],0x8000  ; 004b645c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b6466
        ;   Label: LAB_004b6466
    MOV EBX,dword ptr [EAX + 0x240]     ; 004b6469
    PUSH EBX                            ; 004b646f
    MOV ESI,dword ptr [0x0061b5a8]      ; 004b6470 | DAT_0061b5a8
    PUSH ESI                            ; 004b6476
    CALL FUN_00534580                   ; 004b6477
        ;   XREF to: 00534580 (UNCONDITIONAL_CALL)  ; undefined FUN_00534580()
    ADD ESP,0x8                         ; 004b647c
    MOV EDI,dword ptr [EBP + 0x14]      ; 004b647f
    PUSH EDI                            ; 004b6482
    CALL FUN_004b3200                   ; 004b6483
        ;   XREF to: 004b3200 (UNCONDITIONAL_CALL)  ; undefined FUN_004b3200()
    ADD ESP,0x4                         ; 004b6488
    PUSH 0x1cb778c                      ; 004b648b | DAT_01cb778c
    CALL FUN_00483d10                   ; 004b6490
        ;   XREF to: 00483d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00483d10()
    MOV EDX,dword ptr [EDI + 0x294]     ; 004b6495
    ADD ESP,0x4                         ; 004b649b
    TEST EDX,EDX                        ; 004b649e
    JZ 0x004b6864                       ; 004b64a0
        ;   XREF to: 004b6864 (CONDITIONAL_JUMP)  ; LAB_004b6864
    MOV EAX,[0x0061b460]                ; 004b64a6 | DAT_0061b460
    PUSH 0x1                            ; 004b64ab
    MOV ESI,dword ptr [EAX + 0xc]       ; 004b64ad | DAT_01e65cdc
    PUSH ESI                            ; 004b64b0
    MOV EDI,dword ptr [0x0061b5a8]      ; 004b64b1 | DAT_0061b5a8
    PUSH EDI                            ; 004b64b7
    CALL FUN_00538d10                   ; 004b64b8
        ;   XREF to: 00538d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00538d10()
    ADD ESP,0xc                         ; 004b64bd
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b64c0
        ;   Label: LAB_004b64c0
    XOR EAX,EAX                         ; 004b64c3
    PUSH EDX                            ; 004b64c5
    MOV [0x01cb80e0],EAX                ; 004b64c6 | DAT_01cb80e0
    CALL FUN_004bb050                   ; 004b64cb
        ;   XREF to: 004bb050 (UNCONDITIONAL_CALL)  ; undefined FUN_004bb050()
    ADD ESP,0x4                         ; 004b64d0
    PUSH 0x3                            ; 004b64d3
    MOV ECX,dword ptr [0x0061b120]      ; 004b64d5 | DAT_0061b120
    PUSH ECX                            ; 004b64db | DAT_01d34cb0
    CALL FUN_0050bdb0                   ; 004b64dc
        ;   XREF to: 0050bdb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050bdb0()
    ADD ESP,0x8                         ; 004b64e1
    TEST EAX,EAX                        ; 004b64e4
    JZ 0x004b66e4                       ; 004b64e6
        ;   XREF to: 004b66e4 (CONDITIONAL_JUMP)  ; LAB_004b66e4
    PUSH 0x4                            ; 004b64ec
    MOV EBX,dword ptr [0x0061b120]      ; 004b64ee | DAT_0061b120
    PUSH EBX                            ; 004b64f4 | DAT_01d34cb0
    CALL FUN_0050bdb0                   ; 004b64f5
        ;   XREF to: 0050bdb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050bdb0()
    ADD ESP,0x8                         ; 004b64fa
    TEST EAX,EAX                        ; 004b64fd
    JZ 0x004b66e4                       ; 004b64ff
        ;   XREF to: 004b66e4 (CONDITIONAL_JUMP)  ; LAB_004b66e4
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b6505
    MOV EAX,[0x0061b120]                ; 004b6508 | DAT_0061b120
    PUSH ESI                            ; 004b650d
    MOV dword ptr [EAX + 0x4],0x3       ; 004b650e | DAT_01d34cb4
    CALL FUN_004b3000                   ; 004b6515
        ;   XREF to: 004b3000 (UNCONDITIONAL_CALL)  ; undefined FUN_004b3000()
    ADD ESP,0x4                         ; 004b651a
    PUSH ESI                            ; 004b651d
    CALL FUN_004b8250                   ; 004b651e
        ;   XREF to: 004b8250 (UNCONDITIONAL_CALL)  ; undefined FUN_004b8250()
    ADD ESP,0x4                         ; 004b6523
    MOV EAX,[0x0061b120]                ; 004b6526 | DAT_0061b120
    PUSH EAX                            ; 004b652b | DAT_01d34cb0
    CALL FUN_0050ecb0                   ; 004b652c
        ;   XREF to: 0050ecb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ecb0()
    ADD ESP,0x4                         ; 004b6531
    MOV EDX,dword ptr [0x00617e10]      ; 004b6534 | DAT_00617e10
    PUSH EDX                            ; 004b653a
    CALL FUN_004e1b80                   ; 004b653b
        ;   XREF to: 004e1b80 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1b80()
    MOV EAX,[0x01cedef4]                ; 004b6540 | DAT_01cedef4
    MOV EDX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b6545
    MOV EAX,dword ptr [ESI + 0xd8]      ; 004b654c
    MOV EDI,ESI                         ; 004b6552
    MOV dword ptr [EDX + 0x24378],EAX   ; 004b6554
    ADD ESP,0x4                         ; 004b655a
    MOV dword ptr [ESI + 0x278],0x0     ; 004b655d
    XOR EDI,ESI                         ; 004b6567
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b6569
        ;   Label: LAB_004b6569
    MOV ECX,dword ptr [EAX + 0x218]     ; 004b656c
    CMP EDI,ECX                         ; 004b6572
    JZ 0x004b687f                       ; 004b6574
        ;   XREF to: 004b687f (CONDITIONAL_JUMP)  ; LAB_004b687f
    MOV EAX,EDI                         ; 004b657a
        ;   Label: LAB_004b657a
    PUSH EAX                            ; 004b657c
        ;   Label: LAB_004b657c
    MOV ESI,dword ptr [0x00617dd4]      ; 004b657d | DAT_00617dd4
    PUSH ESI                            ; 004b6583 | DAT_01d02f84
    CALL FUN_004dfee0                   ; 004b6584
        ;   XREF to: 004dfee0 (UNCONDITIONAL_CALL)  ; undefined FUN_004dfee0()
    ADD ESP,0x8                         ; 004b6589
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b658c
    PUSH EAX                            ; 004b658f
    CALL FUN_004b82e0                   ; 004b6590
        ;   XREF to: 004b82e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b82e0()
    ADD ESP,0x4                         ; 004b6595
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b6598
    PUSH EDX                            ; 004b659b
    CALL FUN_004b3820                   ; 004b659c
        ;   XREF to: 004b3820 (UNCONDITIONAL_CALL)  ; undefined FUN_004b3820()
    ADD ESP,0x4                         ; 004b65a1
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b65a4
    PUSH ECX                            ; 004b65a7
    CALL FUN_004b39d0                   ; 004b65a8
        ;   XREF to: 004b39d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b39d0()
    ADD ESP,0x4                         ; 004b65ad
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b65b0
    PUSH EBX                            ; 004b65b3
    CALL FUN_004b7050                   ; 004b65b4
        ;   XREF to: 004b7050 (UNCONDITIONAL_CALL)  ; undefined FUN_004b7050()
    MOV EAX,[0x01cedef4]                ; 004b65b9 | DAT_01cedef4
    SHL EAX,0x2                         ; 004b65be
    MOV ESI,dword ptr [EAX + 0x1cedee4] ; 004b65c1
    ADD ESP,0x4                         ; 004b65c7
    CMP EDI,ESI                         ; 004b65ca
    JZ 0x004b6603                       ; 004b65cc
        ;   XREF to: 004b6603 (CONDITIONAL_JUMP)  ; LAB_004b6603
    PUSH ESI                            ; 004b65ce
    MOV EDX,dword ptr [ESI + 0x2b0]     ; 004b65cf
    CALL dword ptr [EDX + 0x114]        ; 004b65d5
    ADD ESP,0x4                         ; 004b65db
    TEST EAX,EAX                        ; 004b65de
    JZ 0x004b6603                       ; 004b65e0
        ;   XREF to: 004b6603 (CONDITIONAL_JUMP)  ; LAB_004b6603
    MOV EAX,[0x00616044]                ; 004b65e2 | DAT_00616044
    MOV dword ptr [EBX + 0x25c],EDI     ; 004b65e7
    MOV dword ptr [EAX + 0x40],EDI      ; 004b65ed | DAT_01caf5ac
    MOV EAX,[0x026677e0]                ; 004b65f0 | DAT_026677e0
    CMP EDI,EAX                         ; 004b65f5
    JZ 0x004b6603                       ; 004b65f7
        ;   XREF to: 004b6603 (CONDITIONAL_JUMP)  ; LAB_004b6603
    PUSH EDI                            ; 004b65f9
    PUSH EAX                            ; 004b65fa
    CALL FUN_0059ab70                   ; 004b65fb
        ;   XREF to: 0059ab70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059ab70()
    ADD ESP,0x8                         ; 004b6600
    MOV EAX,[0x0061b5a8]                ; 004b6603 | DAT_0061b5a8
        ;   Label: LAB_004b6603
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004b6608 | DAT_01fc1070
    MOV EDX,EDI                         ; 004b660e
    TEST EAX,EAX                        ; 004b6610
    JL 0x004b6895                       ; 004b6612
        ;   XREF to: 004b6895 (CONDITIONAL_JUMP)  ; LAB_004b6895
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b6618
    CMP EDI,dword ptr [EAX + 0x294]     ; 004b661b
    JZ 0x004b6631                       ; 004b6621
        ;   XREF to: 004b6631 (CONDITIONAL_JUMP)  ; LAB_004b6631
    MOV EBX,dword ptr [EAX + 0xe0]      ; 004b6623
    CMP EDI,EBX                         ; 004b6629
    JZ 0x004b68a6                       ; 004b662b
        ;   XREF to: 004b68a6 (CONDITIONAL_JUMP)  ; LAB_004b68a6
    TEST EDX,EDX                        ; 004b6631
        ;   Label: LAB_004b6631
    JZ 0x004b6668                       ; 004b6633
        ;   XREF to: 004b6668 (CONDITIONAL_JUMP)  ; LAB_004b6668
    MOV EAX,[0x0061b460]                ; 004b6635 | DAT_0061b460
        ;   Label: LAB_004b6635
    MOV EBX,dword ptr [EAX + 0x10]      ; 004b663a | DAT_01e65ce0
    PUSH EBX                            ; 004b663d
    MOV ESI,dword ptr [EAX + 0xc]       ; 004b663e | DAT_01e65cdc
    PUSH ESI                            ; 004b6641
    MOV EAX,[0x0061b5a8]                ; 004b6642 | DAT_0061b5a8
    PUSH EAX                            ; 004b6647
    CALL FUN_00538d10                   ; 004b6648
        ;   XREF to: 00538d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00538d10()
    ADD ESP,0xc                         ; 004b664d
    TEST EAX,EAX                        ; 004b6650
    JZ 0x004b6660                       ; 004b6652
        ;   XREF to: 004b6660 (CONDITIONAL_JUMP)  ; LAB_004b6660
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b6654
    PUSH EDX                            ; 004b6657
    CALL FUN_004b3000                   ; 004b6658
        ;   XREF to: 004b3000 (UNCONDITIONAL_CALL)  ; undefined FUN_004b3000()
    ADD ESP,0x4                         ; 004b665d
    MOV EAX,[0x0061b460]                ; 004b6660 | DAT_0061b460
        ;   Label: LAB_004b6660
    MOV dword ptr [EAX + 0x10],EDI      ; 004b6665 | DAT_01e65ce0
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b6668
        ;   Label: LAB_004b6668
    PUSH ECX                            ; 004b666b
    MOV EBX,EDI                         ; 004b666c
    CALL FUN_004b5190                   ; 004b666e
        ;   XREF to: 004b5190 (UNCONDITIONAL_CALL)  ; undefined FUN_004b5190()
    MOV ESI,dword ptr [0x01cb7788]      ; 004b6673 | DAT_01cb7788
    ADD ESP,0x4                         ; 004b6679
    CMP EDI,ESI                         ; 004b667c
    JZ 0x004b694a                       ; 004b667e
        ;   XREF to: 004b694a (CONDITIONAL_JUMP)  ; LAB_004b694a
    MOV EAX,[0x01cb778c]                ; 004b6684 | DAT_01cb778c
    TEST EAX,EAX                        ; 004b6689
    JLE 0x004b68cd                      ; 004b668b
        ;   XREF to: 004b68cd (CONDITIONAL_JUMP)  ; LAB_004b68cd
    PUSH 0x1cb778c                      ; 004b6691 | DAT_01cb778c
    CALL FUN_00482770                   ; 004b6696
        ;   XREF to: 00482770 (UNCONDITIONAL_CALL)  ; undefined FUN_00482770()
    ADD ESP,0x4                         ; 004b669b
    MOV ESI,EAX                         ; 004b669e
    CMP EAX,-0x2                        ; 004b66a0
    JZ 0x004b66cb                       ; 004b66a3
        ;   XREF to: 004b66cb (CONDITIONAL_JUMP)  ; LAB_004b66cb
    CALL FUN_004032b0                   ; 004b66a5
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    MOV EAX,[0x006138e0]                ; 004b66aa | DAT_006138e0
    PUSH EAX                            ; 004b66af
    CALL FUN_0047e760                   ; 004b66b0
        ;   XREF to: 0047e760 (UNCONDITIONAL_CALL)  ; undefined FUN_0047e760()
    ADD ESP,0x4                         ; 004b66b5
    PUSH 0x1cb778c                      ; 004b66b8 | DAT_01cb778c
    CALL FUN_00483d10                   ; 004b66bd
        ;   XREF to: 00483d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00483d10()
    ADD ESP,0x4                         ; 004b66c2
    MOV dword ptr [0x01cb7788],EDI      ; 004b66c5 | DAT_01cb7788
    TEST ESI,ESI                        ; 004b66cb
        ;   Label: LAB_004b66cb
    JNZ 0x004b68d3                      ; 004b66cd
        ;   XREF to: 004b68d3 (CONDITIONAL_JUMP)  ; LAB_004b68d3
    PUSH 0x1                            ; 004b66d3
    MOV ESI,dword ptr [0x0061b120]      ; 004b66d5 | DAT_0061b120
    PUSH ESI                            ; 004b66db | DAT_01d34cb0
    CALL FUN_0050b8d0                   ; 004b66dc
        ;   XREF to: 0050b8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b8d0()
    ADD ESP,0x8                         ; 004b66e1
        ;   Label: LAB_004b66e1
    MOV EAX,[0x01cedef4]                ; 004b66e4 | DAT_01cedef4
        ;   Label: LAB_004b66e4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b66e9
    PUSH EAX                            ; 004b66f0
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004b66f1
    CALL dword ptr [EDX + 0x114]        ; 004b66f7
    ADD ESP,0x4                         ; 004b66fd
    CMP EAX,0x2                         ; 004b6700
    JNZ 0x004b67a9                      ; 004b6703
        ;   XREF to: 004b67a9 (CONDITIONAL_JUMP)  ; LAB_004b67a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b6709
    CMP dword ptr [EAX + 0x9e8],0x0     ; 004b670c
    JNZ 0x004b67a9                      ; 004b6713
        ;   XREF to: 004b67a9 (CONDITIONAL_JUMP)  ; LAB_004b67a9
    LEA EAX,[EBP + 0xfffffb34]          ; 004b6719
    PUSH EAX                            ; 004b671f
    CALL FUN_00481fc0                   ; 004b6720
        ;   XREF to: 00481fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00481fc0()
    ADD ESP,0x4                         ; 004b6725
    PUSH 0x5d786b                       ; 004b6728 | = "Load game"
    CALL FUN_0050fe80                   ; 004b672d
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b6732
    PUSH EAX                            ; 004b6735
    LEA EAX,[EBP + 0xfffffb34]          ; 004b6736
    PUSH EAX                            ; 004b673c
    CALL FUN_00480e70                   ; 004b673d
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e70()
    ADD ESP,0x8                         ; 004b6742
    PUSH 0x5d7875                       ; 004b6745 | DAT_005d7875
    CALL FUN_0050fe80                   ; 004b674a
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b674f
    PUSH EAX                            ; 004b6752
    LEA EAX,[EBP + 0xfffffb34]          ; 004b6753
    PUSH EAX                            ; 004b6759
    CALL FUN_00480e70                   ; 004b675a
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e70()
    ADD ESP,0x8                         ; 004b675f
    XOR EBX,EBX                         ; 004b6762
    PUSH EBX                            ; 004b6764
        ;   Label: LAB_004b6764
    PUSH -0x1                           ; 004b6765
    PUSH 0x5d787a                       ; 004b6767 | = "Game Over"
    CALL FUN_0050fe80                   ; 004b676c
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b6771
    PUSH EAX                            ; 004b6774
    LEA EAX,[EBP + 0xfffffb34]          ; 004b6775
    PUSH EAX                            ; 004b677b
    CALL FUN_00482250                   ; 004b677c
        ;   XREF to: 00482250 (UNCONDITIONAL_CALL)  ; undefined FUN_00482250()
    ADD ESP,0x10                        ; 004b6781
    TEST EAX,EAX                        ; 004b6784
    JNZ 0x004b6dff                      ; 004b6786
        ;   XREF to: 004b6dff (CONDITIONAL_JUMP)  ; LAB_004b6dff
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b678c
    PUSH EAX                            ; 004b678f
    CALL FUN_004bdb10                   ; 004b6790
        ;   XREF to: 004bdb10 (UNCONDITIONAL_CALL)  ; undefined FUN_004bdb10()
    ADD ESP,0x4                         ; 004b6795
    PUSH 0x0                            ; 004b6798
        ;   Label: LAB_004b6798
    LEA EAX,[EBP + 0xfffffb34]          ; 004b679a
    PUSH EAX                            ; 004b67a0
    CALL FUN_004820b0                   ; 004b67a1
        ;   XREF to: 004820b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004820b0()
    ADD ESP,0x8                         ; 004b67a6
    MOV EDX,dword ptr [0x00618170]      ; 004b67a9 | DAT_00618170
        ;   Label: LAB_004b67a9
    PUSH EDX                            ; 004b67af
    CALL FUN_004fd450                   ; 004b67b0
        ;   XREF to: 004fd450 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd450()
    ADD ESP,0x4                         ; 004b67b5
    PUSH 0x0                            ; 004b67b8
    MOV ECX,dword ptr [0x00617dd4]      ; 004b67ba | DAT_00617dd4
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b67c0
    PUSH ECX                            ; 004b67c3 | DAT_01d02f84
    MOV dword ptr [EDX + 0x26c],EAX     ; 004b67c4
    CALL FUN_004dfee0                   ; 004b67ca
        ;   XREF to: 004dfee0 (UNCONDITIONAL_CALL)  ; undefined FUN_004dfee0()
    ADD ESP,0x8                         ; 004b67cf
    MOV EBX,dword ptr [0x0061c068]      ; 004b67d2 | DAT_0061c068
    PUSH EBX                            ; 004b67d8
    CALL FUN_0055a360                   ; 004b67d9
        ;   XREF to: 0055a360 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a360()
    ADD ESP,0x4                         ; 004b67de
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b67e1
    CALL FUN_0059ac10                   ; 004b67e4
        ;   XREF to: 0059ac10 (UNCONDITIONAL_CALL)  ; undefined FUN_0059ac10()
    PUSH ESI                            ; 004b67e9
    CALL FUN_004b60c0                   ; 004b67ea
        ;   XREF to: 004b60c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b60c0()
    ADD ESP,0x4                         ; 004b67ef
    MOV EAX,[0x00617dd4]                ; 004b67f2 | DAT_00617dd4
    PUSH EAX                            ; 004b67f7 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b67f8 | DAT_01d02f84
    CALL dword ptr [EDX + 0x8]          ; 004b67fa
    ADD ESP,0x4                         ; 004b67fd
    MOV EDI,dword ptr [0x0061b5a8]      ; 004b6800 | DAT_0061b5a8
    PUSH EDI                            ; 004b6806
    CALL FUN_005308e0                   ; 004b6807
        ;   XREF to: 005308e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005308e0()
    ADD ESP,0x4                         ; 004b680c
    PUSH 0x1cb778c                      ; 004b680f | DAT_01cb778c
    MOV dword ptr [ESI + 0x208],0x3f800000 ; 004b6814
    CALL FUN_00483d10                   ; 004b681e
        ;   XREF to: 00483d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00483d10()
    ADD ESP,0x4                         ; 004b6823
    CALL FUN_004dacc0                   ; 004b6826
        ;   XREF to: 004dacc0 (UNCONDITIONAL_CALL)  ; undefined FUN_004dacc0()
    MOV EAX,dword ptr [EBP + -0x8]      ; 004b682b
    MOV ESP,EBP                         ; 004b682e
    POP EBP                             ; 004b6830
    POP EDI                             ; 004b6831
    POP ESI                             ; 004b6832
    POP EBX                             ; 004b6833
    RET                                 ; 004b6834
    MOV EBX,dword ptr [0x00614d30]      ; 004b6835 | DAT_00614d30
        ;   Label: LAB_004b6835
    PUSH EBX                            ; 004b683b
    CALL FUN_0049c190                   ; 004b683c
        ;   XREF to: 0049c190 (UNCONDITIONAL_CALL)  ; undefined FUN_0049c190()
    ADD ESP,0x4                         ; 004b6841
    JMP 0x004b6447                      ; 004b6844
        ;   XREF to: 004b6447 (UNCONDITIONAL_JUMP)  ; LAB_004b6447
    CMP EDX,0x10000                     ; 004b6849
        ;   Label: LAB_004b6849
    JLE 0x004b6466                      ; 004b684f
        ;   XREF to: 004b6466 (CONDITIONAL_JUMP)  ; LAB_004b6466
    MOV dword ptr [EAX + 0x240],0x10000 ; 004b6855
    JMP 0x004b6466                      ; 004b685f
        ;   XREF to: 004b6466 (UNCONDITIONAL_JUMP)  ; LAB_004b6466
    MOV ECX,dword ptr [EDI + 0x290]     ; 004b6864
        ;   Label: LAB_004b6864
    PUSH ECX                            ; 004b686a
    MOV EBX,dword ptr [0x0061b5a8]      ; 004b686b | DAT_0061b5a8
    PUSH EBX                            ; 004b6871
    CALL FUN_0052ddf0                   ; 004b6872
        ;   XREF to: 0052ddf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ddf0()
    ADD ESP,0x8                         ; 004b6877
    JMP 0x004b64c0                      ; 004b687a
        ;   XREF to: 004b64c0 (UNCONDITIONAL_JUMP)  ; LAB_004b64c0
    CMP ECX,dword ptr [0x01cb7788]      ; 004b687f | DAT_01cb7788
        ;   Label: LAB_004b687f
    JNZ 0x004b657a                      ; 004b6885
        ;   XREF to: 004b657a (CONDITIONAL_JUMP)  ; LAB_004b657a
    MOV EAX,0x1                         ; 004b688b
    JMP 0x004b657c                      ; 004b6890
        ;   XREF to: 004b657c (UNCONDITIONAL_JUMP)  ; LAB_004b657c
    MOV EAX,[0x0061b460]                ; 004b6895 | DAT_0061b460
        ;   Label: LAB_004b6895
    MOV dword ptr [EAX + 0x10],0x2      ; 004b689a | DAT_01e65ce0
    JMP 0x004b6635                      ; 004b68a1
        ;   XREF to: 004b6635 (UNCONDITIONAL_JUMP)  ; LAB_004b6635
    MOV EAX,[0x0061b120]                ; 004b68a6 | DAT_0061b120
        ;   Label: LAB_004b68a6
    MOV ESI,dword ptr [EAX + 0x178]     ; 004b68ab | DAT_01d34e28
    CMP EBX,ESI                         ; 004b68b1
    JNZ 0x004b6631                      ; 004b68b3
        ;   XREF to: 004b6631 (CONDITIONAL_JUMP)  ; LAB_004b6631
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b68b9
    CMP ESI,dword ptr [EAX + 0x25c]     ; 004b68bc
    JNZ 0x004b6631                      ; 004b68c2
        ;   XREF to: 004b6631 (CONDITIONAL_JUMP)  ; LAB_004b6631
    JMP 0x004b6635                      ; 004b68c8
        ;   XREF to: 004b6635 (UNCONDITIONAL_JUMP)  ; LAB_004b6635
    MOV dword ptr [0x01cb7788],EDI      ; 004b68cd | DAT_01cb7788
        ;   Label: LAB_004b68cd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b68d3
        ;   Label: LAB_004b68d3
    MOV EDX,dword ptr [EAX + 0xe0]      ; 004b68d6
    CMP EDI,EDX                         ; 004b68dc
    JZ 0x004b6d3a                       ; 004b68de
        ;   XREF to: 004b6d3a (CONDITIONAL_JUMP)  ; LAB_004b6d3a
    CALL FUN_0058f270                   ; 004b68e4
        ;   XREF to: 0058f270 (UNCONDITIONAL_CALL)  ; undefined FUN_0058f270()
        ;   Label: LAB_004b68e4
    CMP EDI,dword ptr [0x02664634]      ; 004b68e9 | DAT_02664634
        ;   Label: LAB_004b68e9
    JZ 0x004b690c                       ; 004b68ef
        ;   XREF to: 004b690c (CONDITIONAL_JUMP)  ; LAB_004b690c
    MOV EAX,[0x0061b5a8]                ; 004b68f1 | DAT_0061b5a8
    MOV EBX,dword ptr [EAX + 0x15aeb8]  ; 004b68f6 | DAT_01fc1070
    PUSH EBX                            ; 004b68fc
    PUSH EAX                            ; 004b68fd
    MOV dword ptr [0x02664634],EDI      ; 004b68fe | DAT_02664634
    CALL FUN_0052ddf0                   ; 004b6904
        ;   XREF to: 0052ddf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ddf0()
    ADD ESP,0x8                         ; 004b6909
    MOV EAX,[0x01cedef4]                ; 004b690c | DAT_01cedef4
        ;   Label: LAB_004b690c
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b6911
    PUSH EAX                            ; 004b6918
    MOV EBX,dword ptr [EAX + 0x2b0]     ; 004b6919
    CALL dword ptr [EBX + 0x114]        ; 004b691f
    ADD ESP,0x4                         ; 004b6925
    CMP EAX,0x2                         ; 004b6928
    JZ 0x004b6d8d                       ; 004b692b
        ;   XREF to: 004b6d8d (CONDITIONAL_JUMP)  ; LAB_004b6d8d
    MOV EAX,[0x0061b460]                ; 004b6931 | DAT_0061b460
        ;   Label: LAB_004b6931
    CMP EDI,dword ptr [EAX]             ; 004b6936 | DAT_01e65cd0
    JZ 0x004b6daa                       ; 004b6938
        ;   XREF to: 004b6daa (CONDITIONAL_JUMP)  ; LAB_004b6daa
    MOV dword ptr [EBP + -0x8],0x1      ; 004b693e
    JMP 0x004b66e4                      ; 004b6945
        ;   XREF to: 004b66e4 (UNCONDITIONAL_JUMP)  ; LAB_004b66e4
    PUSH 0x1                            ; 004b694a
        ;   Label: LAB_004b694a
    MOV EAX,[0x00617dd4]                ; 004b694c | DAT_00617dd4
    PUSH EAX                            ; 004b6951 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b6952 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b6954
    ADD ESP,0x8                         ; 004b6957
    TEST EAX,EAX                        ; 004b695a
    JZ 0x004b68d3                       ; 004b695c
        ;   XREF to: 004b68d3 (CONDITIONAL_JUMP)  ; LAB_004b68d3
    PUSH 0x1cb778c                      ; 004b6962 | DAT_01cb778c
    CALL FUN_00483d10                   ; 004b6967
        ;   XREF to: 00483d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00483d10()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b696c
    MOV dword ptr [EAX + 0x21c],ESI     ; 004b696f
    MOV EAX,[0x00616044]                ; 004b6975 | DAT_00616044
    MOV EDX,dword ptr [EAX + 0x40]      ; 004b697a | DAT_01caf5ac
    ADD ESP,0x4                         ; 004b697d
    CMP ESI,EDX                         ; 004b6980
    JZ 0x004b698c                       ; 004b6982
        ;   XREF to: 004b698c (CONDITIONAL_JUMP)  ; LAB_004b698c
    MOV dword ptr [EAX + 0x40],ESI      ; 004b6984 | DAT_01caf5ac
    JMP 0x004b68d3                      ; 004b6987
        ;   XREF to: 004b68d3 (UNCONDITIONAL_JUMP)  ; LAB_004b68d3
    MOV ECX,dword ptr [0x026677e0]      ; 004b698c | DAT_026677e0
        ;   Label: LAB_004b698c
    CMP EDX,ECX                         ; 004b6992
    JZ 0x004b69a5                       ; 004b6994
        ;   XREF to: 004b69a5 (CONDITIONAL_JUMP)  ; LAB_004b69a5
    PUSH EDX                            ; 004b6996
    PUSH ECX                            ; 004b6997
    CALL FUN_0059ab70                   ; 004b6998
        ;   XREF to: 0059ab70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059ab70()
    ADD ESP,0x8                         ; 004b699d
    JMP 0x004b68d3                      ; 004b69a0
        ;   XREF to: 004b68d3 (UNCONDITIONAL_JUMP)  ; LAB_004b68d3
    MOV EAX,[0x01cedef4]                ; 004b69a5 | DAT_01cedef4
        ;   Label: LAB_004b69a5
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b69aa
    PUSH EAX                            ; 004b69b1
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004b69b2
    CALL dword ptr [EDX + 0x114]        ; 004b69b8
    ADD ESP,0x4                         ; 004b69be
    CMP EAX,0x1                         ; 004b69c1
    JG 0x004b66e4                       ; 004b69c4
        ;   XREF to: 004b66e4 (CONDITIONAL_JUMP)  ; LAB_004b66e4
    MOV EAX,[0x0061b120]                ; 004b69ca | DAT_0061b120
    MOV ESI,dword ptr [EAX]             ; 004b69cf | DAT_01d34cb0
    CMP ESI,0x2                         ; 004b69d1
    JZ 0x004b6c5b                       ; 004b69d4
        ;   XREF to: 004b6c5b (CONDITIONAL_JUMP)  ; LAB_004b6c5b
    CMP ESI,0x1                         ; 004b69da
    JZ 0x004b6cbf                       ; 004b69dd
        ;   XREF to: 004b6cbf (CONDITIONAL_JUMP)  ; LAB_004b6cbf
    MOV ECX,dword ptr [0x0061c068]      ; 004b69e3 | DAT_0061c068
    PUSH ECX                            ; 004b69e9
    CALL FUN_0055a360                   ; 004b69ea
        ;   XREF to: 0055a360 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a360()
    ADD ESP,0x4                         ; 004b69ef
    LEA EAX,[EBP + 0xfffff774]          ; 004b69f2
    PUSH EAX                            ; 004b69f8
    CALL FUN_00481fc0                   ; 004b69f9
        ;   XREF to: 00481fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00481fc0()
    ADD ESP,0x4                         ; 004b69fe
    PUSH 0x5d7822                       ; 004b6a01 | = "Return"
    CALL FUN_0050fe80                   ; 004b6a06
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b6a0b
    PUSH EAX                            ; 004b6a0e
    LEA EAX,[EBP + 0xfffff774]          ; 004b6a0f
    PUSH EAX                            ; 004b6a15
    CALL FUN_00480e70                   ; 004b6a16
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e70()
    ADD ESP,0x8                         ; 004b6a1b
    PUSH 0x5d7829                       ; 004b6a1e | = "Options"
    CALL FUN_0050fe80                   ; 004b6a23
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b6a28
    PUSH EAX                            ; 004b6a2b
    LEA EAX,[EBP + 0xfffff774]          ; 004b6a2c
    PUSH EAX                            ; 004b6a32
    CALL FUN_00480e70                   ; 004b6a33
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e70()
    ADD ESP,0x8                         ; 004b6a38
    PUSH 0x5d7831                       ; 004b6a3b | = "Load game"
    CALL FUN_0050fe80                   ; 004b6a40
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b6a45
    PUSH EAX                            ; 004b6a48
    LEA EAX,[EBP + 0xfffff774]          ; 004b6a49
    PUSH EAX                            ; 004b6a4f
    CALL FUN_00480e70                   ; 004b6a50
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e70()
    ADD ESP,0x8                         ; 004b6a55
    PUSH 0x5d783b                       ; 004b6a58 | = "Save game"
    CALL FUN_0050fe80                   ; 004b6a5d
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b6a62
    PUSH EAX                            ; 004b6a65
    LEA EAX,[EBP + 0xfffff774]          ; 004b6a66
    PUSH EAX                            ; 004b6a6c
    CALL FUN_00480e70                   ; 004b6a6d
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e70()
    ADD ESP,0x8                         ; 004b6a72
    PUSH 0x5d7845                       ; 004b6a75 | DAT_005d7845
    CALL FUN_0050fe80                   ; 004b6a7a
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b6a7f
    PUSH EAX                            ; 004b6a82
    LEA EAX,[EBP + 0xfffff774]          ; 004b6a83
    PUSH EAX                            ; 004b6a89
    CALL FUN_00480e70                   ; 004b6a8a
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e70()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b6a8f
    MOV EBX,dword ptr [EAX + 0x244]     ; 004b6a92
    ADD ESP,0x8                         ; 004b6a98
    CMP EBX,0x1                         ; 004b6a9b
    JNZ 0x004b6abd                      ; 004b6a9e
        ;   XREF to: 004b6abd (CONDITIONAL_JUMP)  ; LAB_004b6abd
    PUSH 0x5d784a                       ; 004b6aa0 | = "Skip cinematic."
    CALL FUN_0050fe80                   ; 004b6aa5
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b6aaa
    PUSH EAX                            ; 004b6aad
    LEA EAX,[EBP + 0xfffff774]          ; 004b6aae
    PUSH EAX                            ; 004b6ab4
    CALL FUN_00480e70                   ; 004b6ab5
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e70()
    ADD ESP,0x8                         ; 004b6aba
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b6abd
        ;   Label: LAB_004b6abd
    CMP EDI,dword ptr [EAX + 0x244]     ; 004b6ac0
    JZ 0x004b6ada                       ; 004b6ac6
        ;   XREF to: 004b6ada (CONDITIONAL_JUMP)  ; LAB_004b6ada
    PUSH EDI                            ; 004b6ac8
    PUSH 0x3                            ; 004b6ac9
    LEA EAX,[EBP + 0xfffff774]          ; 004b6acb
    PUSH EAX                            ; 004b6ad1
    CALL FUN_004839d0                   ; 004b6ad2
        ;   XREF to: 004839d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004839d0()
    ADD ESP,0xc                         ; 004b6ad7
    PUSH EDI                            ; 004b6ada
        ;   Label: LAB_004b6ada
    PUSH -0x1                           ; 004b6adb
    PUSH 0x5d785a                       ; 004b6add | = "Game paused"
    CALL FUN_0050fe80                   ; 004b6ae2
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b6ae7
    PUSH EAX                            ; 004b6aea
    LEA EAX,[EBP + 0xfffff774]          ; 004b6aeb
    PUSH EAX                            ; 004b6af1
    CALL FUN_00482250                   ; 004b6af2
        ;   XREF to: 00482250 (UNCONDITIONAL_CALL)  ; undefined FUN_00482250()
    ADD ESP,0x10                        ; 004b6af7
    MOV EBX,EAX                         ; 004b6afa
    CMP EAX,0x1                         ; 004b6afc
    JNZ 0x004b6b88                      ; 004b6aff
        ;   XREF to: 004b6b88 (CONDITIONAL_JUMP)  ; LAB_004b6b88
    PUSH EDI                            ; 004b6b05
    MOV EAX,[0x00617dd4]                ; 004b6b06 | DAT_00617dd4
    PUSH EAX                            ; 004b6b0b | DAT_01d02f84
    CALL FUN_004dfee0                   ; 004b6b0c
        ;   XREF to: 004dfee0 (UNCONDITIONAL_CALL)  ; undefined FUN_004dfee0()
    ADD ESP,0x8                         ; 004b6b11
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b6b14
    PUSH EDX                            ; 004b6b17
    CALL FUN_004b60c0                   ; 004b6b18
        ;   XREF to: 004b60c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b60c0()
    ADD ESP,0x4                         ; 004b6b1d
    PUSH EBX                            ; 004b6b20
    CALL FUN_004ee1a0                   ; 004b6b21
        ;   XREF to: 004ee1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ee1a0()
    ADD ESP,0x4                         ; 004b6b26
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b6b29
    PUSH ECX                            ; 004b6b2c
    CALL FUN_004b5fd0                   ; 004b6b2d
        ;   XREF to: 004b5fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b5fd0()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b6b32
    MOV ESI,dword ptr [EAX + 0x218]     ; 004b6b35
    ADD ESP,0x4                         ; 004b6b3b
    CMP EDI,ESI                         ; 004b6b3e
    SETZ AL                             ; 004b6b40
    AND EAX,0xff                        ; 004b6b43
    PUSH EAX                            ; 004b6b48
    MOV EAX,[0x00617dd4]                ; 004b6b49 | DAT_00617dd4
    PUSH EAX                            ; 004b6b4e | DAT_01d02f84
    CALL FUN_004dfee0                   ; 004b6b4f
        ;   XREF to: 004dfee0 (UNCONDITIONAL_CALL)  ; undefined FUN_004dfee0()
    MOV EAX,[0x0061b5a8]                ; 004b6b54 | DAT_0061b5a8
    ADD ESP,0x8                         ; 004b6b59
    MOV EDX,dword ptr [EAX + 0x15aeb8]  ; 004b6b5c | DAT_01fc1070
    PUSH EDX                            ; 004b6b62
    PUSH EAX                            ; 004b6b63
    CALL FUN_0052ddf0                   ; 004b6b64
        ;   XREF to: 0052ddf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ddf0()
    MOV EDX,dword ptr [0x006141bc]      ; 004b6b69 | DAT_006141bc
    ADD ESP,0x8                         ; 004b6b6f
    CMP EDX,0xf0                        ; 004b6b72
    JLE 0x004b6d1d                      ; 004b6b78
        ;   XREF to: 004b6d1d (CONDITIONAL_JUMP)  ; LAB_004b6d1d
    MOV EAX,[0x01511cc0]                ; 004b6b7e | DAT_01511cc0
    MOV [0x01c25590],EAX                ; 004b6b83 | DAT_01c25590
        ;   Label: LAB_004b6b83
    CMP EBX,0x2                         ; 004b6b88
        ;   Label: LAB_004b6b88
    JNZ 0x004b6b99                      ; 004b6b8b
        ;   XREF to: 004b6b99 (CONDITIONAL_JUMP)  ; LAB_004b6b99
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b6b8d
    PUSH ECX                            ; 004b6b90
    CALL FUN_004bdb10                   ; 004b6b91
        ;   XREF to: 004bdb10 (UNCONDITIONAL_CALL)  ; undefined FUN_004bdb10()
    ADD ESP,0x4                         ; 004b6b96
    CMP EBX,0x3                         ; 004b6b99
        ;   Label: LAB_004b6b99
    JNZ 0x004b6bab                      ; 004b6b9c
        ;   XREF to: 004b6bab (CONDITIONAL_JUMP)  ; LAB_004b6bab
    PUSH EDI                            ; 004b6b9e
    MOV ESI,dword ptr [EBP + 0x14]      ; 004b6b9f
    PUSH ESI                            ; 004b6ba2
    CALL FUN_004bb9b0                   ; 004b6ba3
        ;   XREF to: 004bb9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bb9b0()
    ADD ESP,0x8                         ; 004b6ba8
    CMP EBX,0x4                         ; 004b6bab
        ;   Label: LAB_004b6bab
    JNZ 0x004b6bd4                      ; 004b6bae
        ;   XREF to: 004b6bd4 (CONDITIONAL_JUMP)  ; LAB_004b6bd4
    PUSH 0x5d7866                       ; 004b6bb0 | DAT_005d7866
    CALL FUN_0050fe80                   ; 004b6bb5
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b6bba
    PUSH EAX                            ; 004b6bbd
    MOV EAX,[0x006138e0]                ; 004b6bbe | DAT_006138e0
    PUSH EAX                            ; 004b6bc3
    CALL FUN_0047c760                   ; 004b6bc4
        ;   XREF to: 0047c760 (UNCONDITIONAL_CALL)  ; undefined FUN_0047c760()
    ADD ESP,0x8                         ; 004b6bc9
    TEST EAX,EAX                        ; 004b6bcc
    JNZ 0x004b6d27                      ; 004b6bce
        ;   XREF to: 004b6d27 (CONDITIONAL_JUMP)  ; LAB_004b6d27
    CMP EBX,0x5                         ; 004b6bd4
        ;   Label: LAB_004b6bd4
    JNZ 0x004b6c07                      ; 004b6bd7
        ;   XREF to: 004b6c07 (CONDITIONAL_JUMP)  ; LAB_004b6c07
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b6bd9
    PUSH EDX                            ; 004b6bdc
    CALL FUN_004bb090                   ; 004b6bdd
        ;   XREF to: 004bb090 (UNCONDITIONAL_CALL)  ; undefined FUN_004bb090()
    ADD ESP,0x4                         ; 004b6be2
    MOV ECX,dword ptr [0x0061b460]      ; 004b6be5 | DAT_0061b460
    PUSH ECX                            ; 004b6beb | DAT_01e65cd0
    CALL FUN_00529b30                   ; 004b6bec
        ;   XREF to: 00529b30 (UNCONDITIONAL_CALL)  ; undefined FUN_00529b30()
    ADD ESP,0x4                         ; 004b6bf1
    TEST EAX,EAX                        ; 004b6bf4
    SETZ AL                             ; 004b6bf6
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b6bf9
    AND EAX,0xff                        ; 004b6bfc
    MOV dword ptr [EDX + 0xe0],EAX      ; 004b6c01
    CALL FUN_004032b0                   ; 004b6c07
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
        ;   Label: LAB_004b6c07
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b6c0c
    CMP EDI,dword ptr [EAX + 0xe0]      ; 004b6c0f
    JNZ 0x004b6c26                      ; 004b6c15
        ;   XREF to: 004b6c26 (CONDITIONAL_JUMP)  ; LAB_004b6c26
    MOV ESI,dword ptr [0x0061c068]      ; 004b6c17 | DAT_0061c068
    PUSH ESI                            ; 004b6c1d
    CALL FUN_0055a1d0                   ; 004b6c1e
        ;   XREF to: 0055a1d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a1d0()
    ADD ESP,0x4                         ; 004b6c23
    MOV EAX,[0x01cedef4]                ; 004b6c26 | DAT_01cedef4
        ;   Label: LAB_004b6c26
    MOV EDX,dword ptr [EBP + 0x14]      ; 004b6c2b
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b6c2e
    MOV EDX,dword ptr [EDX + 0xd8]      ; 004b6c35
    PUSH EDI                            ; 004b6c3b
    MOV dword ptr [EAX + 0x24378],EDX   ; 004b6c3c
    LEA EAX,[EBP + 0xfffff774]          ; 004b6c42
    PUSH EAX                            ; 004b6c48
    MOV EBX,0x1                         ; 004b6c49
    CALL FUN_004820b0                   ; 004b6c4e
        ;   XREF to: 004820b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004820b0()
    ADD ESP,0x8                         ; 004b6c53
    JMP 0x004b68d3                      ; 004b6c56
        ;   XREF to: 004b68d3 (UNCONDITIONAL_JUMP)  ; LAB_004b68d3
    PUSH 0x5d775d                       ; 004b6c5b | = "Leave network game"
        ;   Label: LAB_004b6c5b
    CALL FUN_0050fe80                   ; 004b6c60
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b6c65
    PUSH EAX                            ; 004b6c68
    PUSH 0x1cb778c                      ; 004b6c69 | DAT_01cb778c
    CALL FUN_00480e70                   ; 004b6c6e
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e70()
    ADD ESP,0x8                         ; 004b6c73
    PUSH 0x5d7770                       ; 004b6c76 | = "Return to game"
    CALL FUN_0050fe80                   ; 004b6c7b
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b6c80
    PUSH EAX                            ; 004b6c83
    PUSH 0x1cb778c                      ; 004b6c84 | DAT_01cb778c
    CALL FUN_00480e70                   ; 004b6c89
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e70()
    ADD ESP,0x8                         ; 004b6c8e
    PUSH 0x1                            ; 004b6c91
    PUSH EDI                            ; 004b6c93
    PUSH 0x5d777f                       ; 004b6c94 | = "You are connect to a network game.\nD..."
    CALL FUN_0050fe80                   ; 004b6c99
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b6c9e
    PUSH EAX                            ; 004b6ca1
    PUSH 0x1cb778c                      ; 004b6ca2 | DAT_01cb778c
    CALL FUN_00482320                   ; 004b6ca7
        ;   XREF to: 00482320 (UNCONDITIONAL_CALL)  ; undefined FUN_00482320()
    MOV EDX,0x1                         ; 004b6cac
    ADD ESP,0x10                        ; 004b6cb1
    MOV dword ptr [0x01cb7788],EDX      ; 004b6cb4 | DAT_01cb7788
    JMP 0x004b68d3                      ; 004b6cba
        ;   XREF to: 004b68d3 (UNCONDITIONAL_JUMP)  ; LAB_004b68d3
    PUSH 0x5d77c1                       ; 004b6cbf | = "Abort network game"
        ;   Label: LAB_004b6cbf
    CALL FUN_0050fe80                   ; 004b6cc4
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b6cc9
    PUSH EAX                            ; 004b6ccc
    PUSH 0x1cb778c                      ; 004b6ccd | DAT_01cb778c
    CALL FUN_00480e70                   ; 004b6cd2
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e70()
    ADD ESP,0x8                         ; 004b6cd7
    PUSH 0x5d77d4                       ; 004b6cda | = "Return to game"
    CALL FUN_0050fe80                   ; 004b6cdf
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b6ce4
    PUSH EAX                            ; 004b6ce7
    PUSH 0x1cb778c                      ; 004b6ce8 | DAT_01cb778c
    CALL FUN_00480e70                   ; 004b6ced
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e70()
    ADD ESP,0x8                         ; 004b6cf2
    PUSH ESI                            ; 004b6cf5
    PUSH EDI                            ; 004b6cf6
    PUSH 0x5d77e3                       ; 004b6cf7 | = "You are hosting a network game.\nDo y..."
    CALL FUN_0050fe80                   ; 004b6cfc
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004b6d01
    PUSH EAX                            ; 004b6d04
    PUSH 0x1cb778c                      ; 004b6d05 | DAT_01cb778c
    CALL FUN_00482320                   ; 004b6d0a
        ;   XREF to: 00482320 (UNCONDITIONAL_CALL)  ; undefined FUN_00482320()
    ADD ESP,0x10                        ; 004b6d0f
    MOV dword ptr [0x01cb7788],ESI      ; 004b6d12 | DAT_01cb7788
    JMP 0x004b68d3                      ; 004b6d18
        ;   XREF to: 004b68d3 (UNCONDITIONAL_JUMP)  ; LAB_004b68d3
    MOV EAX,[0x01511cc4]                ; 004b6d1d | DAT_01511cc4
        ;   Label: LAB_004b6d1d
    JMP 0x004b6b83                      ; 004b6d22
        ;   XREF to: 004b6b83 (UNCONDITIONAL_JUMP)  ; LAB_004b6b83
    PUSH 0x0                            ; 004b6d27
        ;   Label: LAB_004b6d27
    LEA EAX,[EBP + 0xfffff774]          ; 004b6d29
    PUSH EAX                            ; 004b6d2f
    CALL FUN_004820b0                   ; 004b6d30
        ;   XREF to: 004820b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004820b0()
    JMP 0x004b66e1                      ; 004b6d35
        ;   XREF to: 004b66e1 (UNCONDITIONAL_JUMP)  ; LAB_004b66e1
    MOV EAX,[0x0061b120]                ; 004b6d3a | DAT_0061b120
        ;   Label: LAB_004b6d3a
    MOV ECX,dword ptr [EAX + 0x178]     ; 004b6d3f | DAT_01d34e28
    CMP EDX,ECX                         ; 004b6d45
    JNZ 0x004b68e4                      ; 004b6d47
        ;   XREF to: 004b68e4 (CONDITIONAL_JUMP)  ; LAB_004b68e4
    TEST EBX,EBX                        ; 004b6d4d
    JNZ 0x004b68e4                      ; 004b6d4f
        ;   XREF to: 004b68e4 (CONDITIONAL_JUMP)  ; LAB_004b68e4
    CMP ECX,dword ptr [0x01c37788]      ; 004b6d55 | DAT_01c37788
    JZ 0x004b6d7a                       ; 004b6d5b
        ;   XREF to: 004b6d7a (CONDITIONAL_JUMP)  ; LAB_004b6d7a
    PUSH 0x1                            ; 004b6d5d
    CALL FUN_0055ff40                   ; 004b6d5f
        ;   XREF to: 0055ff40 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ff40()
    ADD ESP,0x4                         ; 004b6d64
    CALL FUN_0058f270                   ; 004b6d67
        ;   XREF to: 0058f270 (UNCONDITIONAL_CALL)  ; undefined FUN_0058f270()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b6d6c
    INC dword ptr [EAX + 0x28c]         ; 004b6d6f
    JMP 0x004b68e9                      ; 004b6d75
        ;   XREF to: 004b68e9 (UNCONDITIONAL_JUMP)  ; LAB_004b68e9
    CALL FUN_00589560                   ; 004b6d7a
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; undefined FUN_00589560()
        ;   Label: LAB_004b6d7a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b6d7f
    INC dword ptr [EAX + 0x28c]         ; 004b6d82
    JMP 0x004b68e9                      ; 004b6d88
        ;   XREF to: 004b68e9 (UNCONDITIONAL_JUMP)  ; LAB_004b68e9
    PUSH 0x1c                           ; 004b6d8d
        ;   Label: LAB_004b6d8d
    MOV EAX,[0x00617dd4]                ; 004b6d8f | DAT_00617dd4
    PUSH EAX                            ; 004b6d94 | DAT_01d02f84
    MOV EBX,dword ptr [EAX]             ; 004b6d95 | DAT_01d02f84
    CALL dword ptr [EBX + 0x4]          ; 004b6d97
    ADD ESP,0x8                         ; 004b6d9a
    TEST EAX,EAX                        ; 004b6d9d
    JNZ 0x004b66e4                      ; 004b6d9f
        ;   XREF to: 004b66e4 (CONDITIONAL_JUMP)  ; LAB_004b66e4
    JMP 0x004b6931                      ; 004b6da5
        ;   XREF to: 004b6931 (UNCONDITIONAL_JUMP)  ; LAB_004b6931
    MOV ECX,dword ptr [EBP + 0x14]      ; 004b6daa
        ;   Label: LAB_004b6daa
    PUSH ECX                            ; 004b6dad
    CALL FUN_004bcbf0                   ; 004b6dae
        ;   XREF to: 004bcbf0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bcbf0()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b6db3
    MOV EBX,dword ptr [EAX + 0x21c]     ; 004b6db6
    ADD ESP,0x4                         ; 004b6dbc
    CMP EDI,EBX                         ; 004b6dbf
    JZ 0x004b6dc8                       ; 004b6dc1
        ;   XREF to: 004b6dc8 (CONDITIONAL_JUMP)  ; LAB_004b6dc8
    CALL FUN_0058ead0                   ; 004b6dc3
        ;   XREF to: 0058ead0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058ead0()
    MOV EAX,dword ptr [EBP + 0x14]      ; 004b6dc8
        ;   Label: LAB_004b6dc8
    MOV ESI,dword ptr [EAX + 0x9e8]     ; 004b6dcb
    CMP EDI,ESI                         ; 004b6dd1
    JZ 0x004b6ddf                       ; 004b6dd3
        ;   XREF to: 004b6ddf (CONDITIONAL_JUMP)  ; LAB_004b6ddf
    XOR ECX,ECX                         ; 004b6dd5
    MOV dword ptr [EBP + -0x8],ECX      ; 004b6dd7
    JMP 0x004b66e4                      ; 004b6dda
        ;   XREF to: 004b66e4 (UNCONDITIONAL_JUMP)  ; LAB_004b66e4
    CMP ESI,dword ptr [EBP + -0x4]      ; 004b6ddf
        ;   Label: LAB_004b6ddf
    JZ 0x004b6569                       ; 004b6de2
        ;   XREF to: 004b6569 (CONDITIONAL_JUMP)  ; LAB_004b6569
    MOV EDX,dword ptr [0x0061c068]      ; 004b6de8 | DAT_0061c068
    PUSH EDX                            ; 004b6dee
    MOV dword ptr [EBP + -0x4],ESI      ; 004b6def
    CALL FUN_0055a1d0                   ; 004b6df2
        ;   XREF to: 0055a1d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055a1d0()
    ADD ESP,0x4                         ; 004b6df7
    JMP 0x004b6569                      ; 004b6dfa
        ;   XREF to: 004b6569 (UNCONDITIONAL_JUMP)  ; LAB_004b6569
    CMP EAX,0x1                         ; 004b6dff
        ;   Label: LAB_004b6dff
    JZ 0x004b6798                       ; 004b6e02
        ;   XREF to: 004b6798 (CONDITIONAL_JUMP)  ; LAB_004b6798
    JMP 0x004b6764                      ; 004b6e08
        ;   XREF to: 004b6764 (UNCONDITIONAL_JUMP)  ; LAB_004b6764

