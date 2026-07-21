; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_removeChatOut_FUN_004ec180(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  local_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined1       Stack[-0x148]:1  local_148
; undefined4       Stack[-0x147]:4  local_147
; undefined        Stack[-0x143]:1  local_143
; undefined1       Stack[-0x142]:1  local_142
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_receivePackets_FUN_004ea740 at 004ea7d5
;
; Referenced Globals:
;   undefined4 s_..\\core\\netgame.cpp_0058ba20+2
;   string s_removeChatOut_-_invalid_index_0058ba36
;   undefined4 s__0058c2b6+0x44
;   undefined4 DAT_0058c302
;   undefined4 DAT_0058c30a
;   undefined4 DAT_0058c312
;   undefined4 DAT_0058c31a
;   undefined4 DAT_0058c322
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01cea3f4
;   undefined4 DAT_01cea3f8
;   undefined4 DAT_01d06610
;   undefined4 DAT_01d06614
;   undefined4 DAT_01d06618
;   ... and 7 more
;
; Called Functions:
;   core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0
;   crt_string.c_memmove_FUN_00566170
;   FUN_004c8440
;   wincore_winrun.cpp_getTime_FUN_00558a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ec180
        ;   Label: core_netgame.cpp_CNetGame_removeChatOut_FUN_004ec180
    PUSH ESI                            ; 004ec181
    PUSH EDI                            ; 004ec182
    PUSH EBP                            ; 004ec183
    MOV EBP,ESP                         ; 004ec184
    SUB ESP,0x144                       ; 004ec186
    AND ESP,0xfffffff8                  ; 004ec18c
    CALL wincore_winrun.cpp_getTime_FUN_00558a30 ; 004ec18f
        ;   XREF to: 00558a30 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_getTime_FUN_00558a30()
    MOV EDX,EAX                         ; 004ec194
    MOV EBX,0x12                        ; 004ec196
    SAR EDX,0x1f                        ; 004ec19b
    IDIV EBX                            ; 004ec19e
    MOV ECX,dword ptr [0x01cea3f4]      ; 004ec1a0 | DAT_01cea3f4
    MOV EDX,EAX                         ; 004ec1a6
    SUB EAX,ECX                         ; 004ec1a8
    MOV dword ptr [0x01cea3f4],EDX      ; 004ec1aa | DAT_01cea3f4
    TEST EAX,EAX                        ; 004ec1b0
    JL 0x004ec3c2                       ; 004ec1b2
        ;   XREF to: 004ec3c2 (CONDITIONAL_JUMP)  ; LAB_004ec3c2
    CMP EAX,0x20000                     ; 004ec1b8
    JLE 0x004ec1c4                      ; 004ec1bd
        ;   XREF to: 004ec1c4 (CONDITIONAL_JUMP)  ; LAB_004ec1c4
    MOV EAX,0x20000                     ; 004ec1bf
    MOV EBX,dword ptr [0x01cea3f8]      ; 004ec1c4 | DAT_01cea3f8
        ;   Label: LAB_004ec1c4
    MOV EDI,dword ptr [0x01d06610]      ; 004ec1ca | DAT_01d06610
    XOR ESI,ESI                         ; 004ec1d0
    ADD EBX,EAX                         ; 004ec1d2
    MOV dword ptr [ESP + 0x120],ESI     ; 004ec1d4
    MOV dword ptr [0x01cea3f8],EBX      ; 004ec1db | DAT_01cea3f8
    TEST EDI,EDI                        ; 004ec1e1
    JLE 0x004ec3bb                      ; 004ec1e3
        ;   XREF to: 004ec3bb (CONDITIONAL_JUMP)  ; LAB_004ec3bb
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ec1e9
    MOV ECX,0x1d06614                   ; 004ec1ec
    ADD EAX,0x20                        ; 004ec1f1
    MOV dword ptr [ESP + 0x11c],ECX     ; 004ec1f4 | DAT_01d06614
    MOV dword ptr [ESP + 0x118],EAX     ; 004ec1fb
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004ec202
        ;   Label: LAB_004ec202
    MOV EDX,dword ptr [0x01cea3f8]      ; 004ec209 | DAT_01cea3f8
    MOV dword ptr [ESP + 0x12c],EAX     ; 004ec20f | DAT_01d06614
    MOV EAX,dword ptr [EAX]             ; 004ec216 | DAT_01d06614
    SUB EDX,EAX                         ; 004ec218
    MOV dword ptr [ESP + 0x140],EDX     ; 004ec21a
    MOV EBX,0x1                         ; 004ec221
    FILD dword ptr [ESP + 0x140]        ; 004ec226
    FMUL double ptr [0x0058c2fa]        ; 004ec22d | s__0058c2b6+0x44
    MOV dword ptr [ESP + 0x128],EBX     ; 004ec233
    FST float ptr [ESP + 0x4]           ; 004ec23a
    FLDZ                                ; 004ec23e
    FCOMPP                              ; 004ec240
    FNSTSW AX                           ; 004ec242
    SAHF                                ; 004ec244
    JA 0x004ec3c9                       ; 004ec245
        ;   XREF to: 004ec3c9 (CONDITIONAL_JUMP)  ; LAB_004ec3c9
    FLD float ptr [ESP + 0x4]           ; 004ec24b
        ;   Label: LAB_004ec24b
    FCOMP double ptr [0x0058c30a]       ; 004ec24f | DAT_0058c30a
    FNSTSW AX                           ; 004ec255
    SAHF                                ; 004ec257
    JBE 0x004ec262                      ; 004ec258
        ;   XREF to: 004ec262 (CONDITIONAL_JUMP)  ; LAB_004ec262
    MOV dword ptr [ESP + 0x4],0x41f00000 ; 004ec25a
    FLD float ptr [ESP + 0x4]           ; 004ec262
        ;   Label: LAB_004ec262
    FCOMP double ptr [0x0058c312]       ; 004ec266 | DAT_0058c312
    FNSTSW AX                           ; 004ec26c
    SAHF                                ; 004ec26e
    JNC 0x004ec32a                      ; 004ec26f
        ;   XREF to: 004ec32a (CONDITIONAL_JUMP)  ; LAB_004ec32a
    XOR EAX,EAX                         ; 004ec275
    MOV dword ptr [ESP + 0x130],EAX     ; 004ec277
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ec27e
    CMP dword ptr [EAX + 0x1c],0x0      ; 004ec281
    JLE 0x004ec32a                      ; 004ec285
        ;   XREF to: 004ec32a (CONDITIONAL_JUMP)  ; LAB_004ec32a
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004ec28b
    ADD EAX,0x14                        ; 004ec292
    MOV dword ptr [ESP + 0x124],EAX     ; 004ec295
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004ec29c
    MOV dword ptr [ESP + 0x138],EAX     ; 004ec2a3 | DAT_01d06614
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ec2aa
    MOV dword ptr [ESP + 0x134],EAX     ; 004ec2ad
    MOV EAX,dword ptr [ESP + 0x118]     ; 004ec2b4
    ADD EAX,0x1c                        ; 004ec2bb
    MOV EBX,dword ptr [ESP + 0x12c]     ; 004ec2be
    MOV dword ptr [ESP + 0x13c],EAX     ; 004ec2c5
    MOV EAX,dword ptr [ESP + 0x138]     ; 004ec2cc
        ;   Label: LAB_004ec2cc
    CMP byte ptr [EAX + 0x8],0x0        ; 004ec2d3 | DAT_01d0661c | DAT_01d0661d
    JZ 0x004ec3d4                       ; 004ec2d7
        ;   XREF to: 004ec3d4 (CONDITIONAL_JUMP)  ; LAB_004ec3d4
    MOV ECX,dword ptr [ESP + 0x138]     ; 004ec2dd
        ;   Label: LAB_004ec2dd
    MOV ESI,dword ptr [ESP + 0x134]     ; 004ec2e4
    MOV EDI,dword ptr [ESP + 0x13c]     ; 004ec2eb
    MOV EAX,dword ptr [ESP + 0x130]     ; 004ec2f2
    MOV EDX,dword ptr [EBP + 0x14]      ; 004ec2f9
    ADD EBX,0x4                         ; 004ec2fc
    INC ECX                             ; 004ec2ff
    ADD ESI,0x78                        ; 004ec300
    ADD EDI,0x78                        ; 004ec303
    INC EAX                             ; 004ec306
    MOV dword ptr [ESP + 0x138],ECX     ; 004ec307
    MOV dword ptr [ESP + 0x134],ESI     ; 004ec30e
    MOV dword ptr [ESP + 0x13c],EDI     ; 004ec315
    MOV ECX,dword ptr [EDX + 0x1c]      ; 004ec31c
    MOV dword ptr [ESP + 0x130],EAX     ; 004ec31f
    CMP EAX,ECX                         ; 004ec326
    JL 0x004ec2cc                       ; 004ec328
        ;   XREF to: 004ec2cc (CONDITIONAL_JUMP)  ; LAB_004ec2cc
    CMP dword ptr [ESP + 0x128],0x0     ; 004ec32a
        ;   Label: LAB_004ec32a
    JZ 0x004ec4d8                       ; 004ec332
        ;   XREF to: 004ec4d8 (CONDITIONAL_JUMP)  ; LAB_004ec4d8
    MOV EBX,dword ptr [ESP + 0x120]     ; 004ec338
    TEST EBX,EBX                        ; 004ec33f
    JL 0x004ec34b                       ; 004ec341
        ;   XREF to: 004ec34b (CONDITIONAL_JUMP)  ; LAB_004ec34b
    CMP EBX,dword ptr [0x01d06610]      ; 004ec343 | DAT_01d06610
    JL 0x004ec36d                       ; 004ec349
        ;   XREF to: 004ec36d (CONDITIONAL_JUMP)  ; LAB_004ec36d
    MOV EAX,0x58ba22                    ; 004ec34b | s_..\core\netgame.cpp_0058ba20+2
        ;   Label: LAB_004ec34b
    MOV EDX,0x107                       ; 004ec350
    PUSH 0x58ba36                       ; 004ec355 | = "removeChatOut - invalid index"
    MOV [0x01cc4800],EAX                ; 004ec35a | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004ec35f | DAT_01cc4804
    CALL FUN_004c8440                   ; 004ec365
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004ec36a
    MOV ECX,dword ptr [0x01d06610]      ; 004ec36d | DAT_01d06610
        ;   Label: LAB_004ec36d
    DEC ECX                             ; 004ec373
    MOV EAX,ECX                         ; 004ec374
    SUB EAX,EBX                         ; 004ec376
    IMUL EAX,EAX,0x114                  ; 004ec378
    PUSH EAX                            ; 004ec37e
    LEA EAX,[EBX + 0x1]                 ; 004ec37f
    IMUL EAX,EAX,0x114                  ; 004ec382
    ADD EAX,0x1d06614                   ; 004ec388
    PUSH EAX                            ; 004ec38d
    IMUL EAX,EBX,0x114                  ; 004ec38e
    ADD EAX,0x1d06614                   ; 004ec394
    PUSH EAX                            ; 004ec399
    MOV dword ptr [0x01d06610],ECX      ; 004ec39a | DAT_01d06610
    CALL crt_string.c_memmove_FUN_00566170 ; 004ec3a0
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 004ec3a5
    MOV EAX,dword ptr [ESP + 0x120]     ; 004ec3a8
        ;   Label: LAB_004ec3a8
    CMP EAX,dword ptr [0x01d06610]      ; 004ec3af | DAT_01d06610
    JL 0x004ec202                       ; 004ec3b5
        ;   XREF to: 004ec202 (CONDITIONAL_JUMP)  ; LAB_004ec202
    MOV ESP,EBP                         ; 004ec3bb
        ;   Label: LAB_004ec3bb
    POP EBP                             ; 004ec3bd
    POP EDI                             ; 004ec3be
    POP ESI                             ; 004ec3bf
    POP EBX                             ; 004ec3c0
    RET                                 ; 004ec3c1
    XOR EAX,EAX                         ; 004ec3c2
        ;   Label: LAB_004ec3c2
    JMP 0x004ec1c4                      ; 004ec3c4
        ;   XREF to: 004ec1c4 (UNCONDITIONAL_JUMP)  ; LAB_004ec1c4
    XOR ESI,ESI                         ; 004ec3c9
        ;   Label: LAB_004ec3c9
    MOV dword ptr [ESP + 0x4],ESI       ; 004ec3cb
    JMP 0x004ec24b                      ; 004ec3cf
        ;   XREF to: 004ec24b (UNCONDITIONAL_JUMP)  ; LAB_004ec24b
    MOV EAX,dword ptr [ESP + 0x134]     ; 004ec3d4
        ;   Label: LAB_004ec3d4
    XOR ESI,ESI                         ; 004ec3db
    FLD float ptr [EAX + 0x48]          ; 004ec3dd
    FMUL double ptr [0x0058c302]        ; 004ec3e0 | DAT_0058c302
    MOV dword ptr [ESP + 0x128],ESI     ; 004ec3e6
    FST float ptr [ESP + 0x8]           ; 004ec3ed
    FCOMP double ptr [0x0058c31a]       ; 004ec3f1 | DAT_0058c31a
    FNSTSW AX                           ; 004ec3f7
    SAHF                                ; 004ec3f9
    JNC 0x004ec404                      ; 004ec3fa
        ;   XREF to: 004ec404 (CONDITIONAL_JUMP)  ; LAB_004ec404
    MOV dword ptr [ESP + 0x8],0x40000000 ; 004ec3fc
    FLD float ptr [ESP + 0x8]           ; 004ec404
        ;   Label: LAB_004ec404
    FCOMP double ptr [0x0058c322]       ; 004ec408 | DAT_0058c322
    FNSTSW AX                           ; 004ec40e
    SAHF                                ; 004ec410
    JBE 0x004ec41b                      ; 004ec411
        ;   XREF to: 004ec41b (CONDITIONAL_JUMP)  ; LAB_004ec41b
    MOV dword ptr [ESP + 0x8],0x40a00000 ; 004ec413
    MOV EDX,dword ptr [0x01cea3f8]      ; 004ec41b | DAT_01cea3f8
        ;   Label: LAB_004ec41b
    MOV EAX,dword ptr [EBX + 0xc]       ; 004ec421 | DAT_01d06624
    SUB EDX,EAX                         ; 004ec424
    MOV dword ptr [ESP + 0x140],EDX     ; 004ec426
    FILD dword ptr [ESP + 0x140]        ; 004ec42d
    FMUL double ptr [0x0058c2fa]        ; 004ec434 | s__0058c2b6+0x44
    FST float ptr [ESP]                 ; 004ec43a
    FLDZ                                ; 004ec43d
    FCOMPP                              ; 004ec43f
    FNSTSW AX                           ; 004ec441
    SAHF                                ; 004ec443
    JBE 0x004ec44b                      ; 004ec444
        ;   XREF to: 004ec44b (CONDITIONAL_JUMP)  ; LAB_004ec44b
    XOR EDX,EDX                         ; 004ec446
    MOV dword ptr [ESP],EDX             ; 004ec448
    FLD float ptr [ESP]                 ; 004ec44b
        ;   Label: LAB_004ec44b
    FCOMP double ptr [0x0058c30a]       ; 004ec44e | DAT_0058c30a
    FNSTSW AX                           ; 004ec454
    SAHF                                ; 004ec456
    JBE 0x004ec460                      ; 004ec457
        ;   XREF to: 004ec460 (CONDITIONAL_JUMP)  ; LAB_004ec460
    MOV dword ptr [ESP],0x41f00000      ; 004ec459
    FLD float ptr [ESP]                 ; 004ec460
        ;   Label: LAB_004ec460
    FCOMP float ptr [ESP + 0x8]         ; 004ec463
    FNSTSW AX                           ; 004ec467
    SAHF                                ; 004ec469
    JBE 0x004ec2dd                      ; 004ec46a
        ;   XREF to: 004ec2dd (CONDITIONAL_JUMP)  ; LAB_004ec2dd
    MOV ESI,0x109                       ; 004ec470
    MOV DH,0x6                          ; 004ec475
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004ec477
    MOV dword ptr [ESP + 0xc],ESI       ; 004ec47e
    MOV byte ptr [ESP + 0x10],DH        ; 004ec482
    LEA EDI,[ESP + 0x15]                ; 004ec486
    MOV EAX,dword ptr [EAX + 0x4]       ; 004ec48a | DAT_01d06618
    MOV ESI,dword ptr [ESP + 0x124]     ; 004ec48d
    MOV dword ptr [ESP + 0x11],EAX      ; 004ec494
    PUSH EDI                            ; 004ec498
    MOV AL,byte ptr [ESI]               ; 004ec499 | DAT_01d06628 | DAT_01d0662a
        ;   Label: LAB_004ec499
    MOV byte ptr [EDI],AL               ; 004ec49b
    CMP AL,0x0                          ; 004ec49d
    JZ 0x004ec4b1                       ; 004ec49f
        ;   XREF to: 004ec4b1 (CONDITIONAL_JUMP)  ; LAB_004ec4b1
    MOV AL,byte ptr [ESI + 0x1]         ; 004ec4a1 | DAT_01d06629 | DAT_01d0662b
    ADD ESI,0x2                         ; 004ec4a4
    MOV byte ptr [EDI + 0x1],AL         ; 004ec4a7
    ADD EDI,0x2                         ; 004ec4aa
    CMP AL,0x0                          ; 004ec4ad
    JNZ 0x004ec499                      ; 004ec4af
        ;   XREF to: 004ec499 (CONDITIONAL_JUMP)  ; LAB_004ec499
    POP EDI                             ; 004ec4b1
        ;   Label: LAB_004ec4b1
    LEA EAX,[ESP + 0xc]                 ; 004ec4b2
    PUSH EAX                            ; 004ec4b6
    MOV EDI,dword ptr [ESP + 0x140]     ; 004ec4b7
    PUSH EDI                            ; 004ec4be
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ec4bf
    PUSH EAX                            ; 004ec4c2
    CALL core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0 ; 004ec4c3
        ;   XREF to: 004eb3c0 (UNCONDITIONAL_CALL)  ; undefined core_netgame.cpp_CNetGame_sendPacket_FUN_004eb3c0()
    MOV EAX,[0x01cea3f8]                ; 004ec4c8 | DAT_01cea3f8
    ADD ESP,0xc                         ; 004ec4cd
    MOV dword ptr [EBX + 0xc],EAX       ; 004ec4d0 | DAT_01d06624
    JMP 0x004ec2dd                      ; 004ec4d3
        ;   XREF to: 004ec2dd (UNCONDITIONAL_JUMP)  ; LAB_004ec2dd
    MOV EBX,dword ptr [ESP + 0x120]     ; 004ec4d8
        ;   Label: LAB_004ec4d8
    MOV ECX,dword ptr [ESP + 0x11c]     ; 004ec4df
    INC EBX                             ; 004ec4e6
    ADD ECX,0x114                       ; 004ec4e7
    MOV dword ptr [ESP + 0x120],EBX     ; 004ec4ed
    MOV dword ptr [ESP + 0x11c],ECX     ; 004ec4f4
    JMP 0x004ec3a8                      ; 004ec4fb
        ;   XREF to: 004ec3a8 (UNCONDITIONAL_JUMP)  ; LAB_004ec3a8

