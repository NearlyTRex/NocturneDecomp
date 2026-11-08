; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00551170(int param_1)
;
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004ce580 at 004cf101
;
; Referenced Globals:
;   undefined4 DAT_005f0936
;   TerminatedCString s_Bip01_Head_005f093b
;   undefined4 DAT_005f0946
;   undefined4 DAT_00605000
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061c010
;   undefined4 DAT_0061dca4
;   undefined4 DAT_00622ad0
;   undefined4 DAT_00622c28
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01ccc3e8
;   undefined4 DAT_01ccc3ec
;   undefined4 DAT_01ccc3f0
;   ... and 9 more
;
; Called Functions:
;   FUN_00408b40
;   FUN_0040c550
;   FUN_0045f3e0
;   FUN_00462820
;   FUN_00462ad0
;   FUN_00465da0
;   FUN_00466220
;   FUN_00483e20
;   FUN_004b5100
;   FUN_004e5c50
;   FUN_0054e3c0
;   FUN_0054eef0
;   FUN_00551c30
;   FUN_005545a0
;   FUN_005634f0
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551170
        ;   Label: FUN_00551170
    PUSH ESI                            ; 00551171
    PUSH EDI                            ; 00551172
    PUSH EBP                            ; 00551173
    MOV EBP,ESP                         ; 00551174
    SUB ESP,0x78                        ; 00551176
    MOV ECX,0x1ccc3e4                   ; 00551179
    MOV EBX,dword ptr [0x00622ad0]      ; 0055117e | DAT_00622ad0
    XOR EDX,EDX                         ; 00551184
    MOV dword ptr [EBP + -0x4],ECX      ; 00551186
    MOV EBX,dword ptr [EBX + 0x18]      ; 00551189 | DAT_01e81c98
    MOV dword ptr [EBP + -0x8],EDX      ; 0055118c
    TEST EBX,EBX                        ; 0055118f
    JNZ 0x0055119a                      ; 00551191
        ;   XREF to: 0055119a (CONDITIONAL_JUMP)  ; LAB_0055119a
    MOV ESP,EBP                         ; 00551193
    POP EBP                             ; 00551195
    POP EDI                             ; 00551196
    POP ESI                             ; 00551197
    POP EBX                             ; 00551198
    RET                                 ; 00551199
    PUSH 0x5f0936                       ; 0055119a | DAT_005f0936
        ;   Label: LAB_0055119a
    PUSH EBX                            ; 0055119f
    CALL FUN_0040c550                   ; 005511a0
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 005511a5
    TEST EAX,EAX                        ; 005511a8
    JZ 0x005511b3                       ; 005511aa
        ;   XREF to: 005511b3 (CONDITIONAL_JUMP)  ; LAB_005511b3
    MOV dword ptr [EBP + -0x8],0x1      ; 005511ac
    LEA ESI,[EBX + 0x158]               ; 005511b3
        ;   Label: LAB_005511b3
    PUSH ESI                            ; 005511b9
    CALL FUN_00569f30                   ; 005511ba
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 005511bf
    PUSH 0x0                            ; 005511c2
    PUSH 0x5f093b                       ; 005511c4 | = "Bip01 Head"
    PUSH EAX                            ; 005511c9
    LEA EDI,[EBP + -0x6c]               ; 005511ca
    ADD ESI,0xe80                       ; 005511cd
    CALL FUN_005634f0                   ; 005511d3
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    MOV ECX,0x3f400000                  ; 005511d8
    MOV EDX,EAX                         ; 005511dd
    SHL EAX,0x2                         ; 005511df
    ADD ESP,0xc                         ; 005511e2
    SUB EAX,EDX                         ; 005511e5
    MOV dword ptr [EBP + -0x58],ECX     ; 005511e7
    SHL EAX,0x4                         ; 005511ea
    MOV EDX,0x3ead0e56                  ; 005511ed
    ADD ESI,EAX                         ; 005511f2
    XOR EAX,EAX                         ; 005511f4
    PUSH ESI                            ; 005511f6
    MOV dword ptr [EBP + -0x60],EAX     ; 005511f7
    LEA EAX,[EBP + -0x60]               ; 005511fa
    MOV dword ptr [EBP + -0xc],ESI      ; 005511fd
    PUSH EAX                            ; 00551200
    LEA ESI,[EBP + -0x48]               ; 00551201
    MOV dword ptr [EBP + -0x5c],EDX     ; 00551204
    CALL FUN_005b5080                   ; 00551207
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    ADD ESP,0x8                         ; 0055120c
    LEA EAX,[EBP + -0x6c]               ; 0055120f
    LEA ESI,[EBP + -0x48]               ; 00551212
    PUSH EAX                            ; 00551215
    MOVSD ES:EDI,ESI                    ; 00551216
    MOVSD ES:EDI,ESI                    ; 00551217
    MOVSD ES:EDI,ESI                    ; 00551218
    PUSH EBX                            ; 00551219
    LEA ESI,[EBP + -0x78]               ; 0055121a
    LEA EDI,[EBP + -0x3c]               ; 0055121d
    CALL FUN_00408b40                   ; 00551220
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[EBP + -0x78]               ; 00551225
    MOVSD ES:EDI,ESI                    ; 00551228
    MOVSD ES:EDI,ESI                    ; 00551229
    MOVSD ES:EDI,ESI                    ; 0055122a
    ADD ESP,0x8                         ; 0055122b
    MOV ESI,dword ptr [EBP + -0xc]      ; 0055122e
    PUSH ESI                            ; 00551231
    LEA ESI,[EBP + -0x24]               ; 00551232
    LEA EDI,[EBP + -0x54]               ; 00551235
    CALL FUN_005b5930                   ; 00551238
        ;   XREF to: 005b5930 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5930()
    LEA ESI,[EBP + -0x24]               ; 0055123d
    MOVSD ES:EDI,ESI                    ; 00551240
    MOVSD ES:EDI,ESI                    ; 00551241
    MOVSD ES:EDI,ESI                    ; 00551242
    MOV EAX,dword ptr [EBP + -0x4]      ; 00551243
    FLD float ptr [EBP + -0x54]         ; 00551246
    XOR EDI,EDI                         ; 00551249
    FLD float ptr [EBP + -0x50]         ; 0055124b
    MOV dword ptr [EBP + -0x14],EDI     ; 0055124e
    FXCH                                ; 00551251
    FADD double ptr [0x005f0946]        ; 00551253 | DAT_005f0946
    MOV dword ptr [EBP + -0x10],EDI     ; 00551259
    FSTP float ptr [EBP + -0x18]        ; 0055125c
    FADD float ptr [EBX + 0x34]         ; 0055125f
    LEA EDX,[EAX + 0x4]                 ; 00551262
    FSTP float ptr [EBP + -0x14]        ; 00551265
    MOV dword ptr [EAX + 0x1cbc],EDI    ; 00551268 | DAT_01cce0a0
    LEA EAX,[EBP + -0x3c]               ; 0055126e
    ADD ESP,0x4                         ; 00551271
    CMP EDX,EAX                         ; 00551274
    JZ 0x00551289                       ; 00551276
        ;   XREF to: 00551289 (CONDITIONAL_JUMP)  ; LAB_00551289
    MOV EAX,dword ptr [EBP + -0x3c]     ; 00551278
    MOV dword ptr [EDX],EAX             ; 0055127b | DAT_01ccc3e8
    MOV EAX,dword ptr [EBP + -0x38]     ; 0055127d
    MOV dword ptr [EDX + 0x4],EAX       ; 00551280 | DAT_01ccc3ec
    MOV EAX,dword ptr [EBP + -0x34]     ; 00551283
    MOV dword ptr [EDX + 0x8],EAX       ; 00551286 | DAT_01ccc3f0
    LEA EAX,[EBP + -0x18]               ; 00551289
        ;   Label: LAB_00551289
    PUSH EAX                            ; 0055128c
    MOV EAX,dword ptr [EBP + -0x4]      ; 0055128d
    ADD EAX,0x10                        ; 00551290
    PUSH EAX                            ; 00551293
    CALL FUN_0045f3e0                   ; 00551294
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f3e0()
    ADD ESP,0x8                         ; 00551299
    MOV EAX,dword ptr [EBP + -0x4]      ; 0055129c
    PUSH 0x3f800000                     ; 0055129f
    MOV dword ptr [EAX + 0x140],0x42280000 ; 005512a4 | DAT_01ccc524
    PUSH EAX                            ; 005512ae
    MOV dword ptr [EAX + 0x38],0x41d00000 ; 005512af | DAT_01ccc41c
    CALL FUN_00465da0                   ; 005512b6
        ;   XREF to: 00465da0 (UNCONDITIONAL_CALL)  ; undefined FUN_00465da0()
    LEA EAX,[EBP + -0x3c]               ; 005512bb
    ADD ESP,0x8                         ; 005512be
    CMP EAX,0x1fe37f0                   ; 005512c1
    JZ 0x005512e0                       ; 005512c6
        ;   XREF to: 005512e0 (CONDITIONAL_JUMP)  ; LAB_005512e0
    MOV EAX,dword ptr [EBP + -0x3c]     ; 005512c8
    MOV [0x01fe37f0],EAX                ; 005512cb | DAT_01fe37f0
    MOV EAX,dword ptr [EBP + -0x38]     ; 005512d0
    MOV [0x01fe37f4],EAX                ; 005512d3 | DAT_01fe37f4
    MOV EAX,dword ptr [EBP + -0x34]     ; 005512d8
    MOV [0x01fe37f8],EAX                ; 005512db | DAT_01fe37f8
    PUSH 0x0                            ; 005512e0
        ;   Label: LAB_005512e0
    MOV ECX,dword ptr [EBP + -0x4]      ; 005512e2
    PUSH ECX                            ; 005512e5
    CALL FUN_00462820                   ; 005512e6
        ;   XREF to: 00462820 (UNCONDITIONAL_CALL)  ; undefined FUN_00462820()
    ADD ESP,0x8                         ; 005512eb
    XOR EBX,EBX                         ; 005512ee
    MOV EAX,dword ptr [EBP + -0x4]      ; 005512f0
    PUSH EBX                            ; 005512f3
    MOV ESI,dword ptr [EBP + 0x14]      ; 005512f4
    PUSH dword ptr [EAX + 0x140]        ; 005512f7 | DAT_01ccc524
    PUSH ESI                            ; 005512fd
    MOV dword ptr [0x00622c28],EBX      ; 005512fe | DAT_00622c28
    CALL FUN_0054e3c0                   ; 00551304
        ;   XREF to: 0054e3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e3c0()
    ADD ESP,0xc                         ; 00551309
    PUSH -0x1                           ; 0055130c
    MOV EDI,0x1                         ; 0055130e
    PUSH ESI                            ; 00551313
    MOV dword ptr [0x00622c28],EDI      ; 00551314 | DAT_00622c28
    CALL FUN_005545a0                   ; 0055131a
        ;   XREF to: 005545a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005545a0()
    ADD ESP,0x8                         ; 0055131f
    PUSH EDI                            ; 00551322
    PUSH ESI                            ; 00551323
    CALL FUN_0054eef0                   ; 00551324
        ;   XREF to: 0054eef0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eef0()
    ADD ESP,0x8                         ; 00551329
    PUSH EDI                            ; 0055132c
    PUSH ESI                            ; 0055132d
    CALL FUN_005545a0                   ; 0055132e
        ;   XREF to: 005545a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005545a0()
    MOV EAX,dword ptr [EBP + 0x14]      ; 00551333
    ADD ESP,0x8                         ; 00551336
    MOV EBX,dword ptr [EAX + 0x15f6fc]  ; 00551339
    XOR ESI,ESI                         ; 0055133f
    TEST EBX,EBX                        ; 00551341
    JLE 0x00551380                      ; 00551343
        ;   XREF to: 00551380 (CONDITIONAL_JUMP)  ; LAB_00551380
    MOV EBX,EAX                         ; 00551345
    MOV EAX,dword ptr [EBX + 0x15f700]  ; 00551347
        ;   Label: LAB_00551347
    PUSH EAX                            ; 0055134d
    MOV EDX,dword ptr [EAX + 0x154]     ; 0055134e
    CALL dword ptr [EDX + 0x10]         ; 00551354
    ADD ESP,0x4                         ; 00551357
    PUSH 0x1                            ; 0055135a
    MOV EDI,dword ptr [0x00612560]      ; 0055135c | DAT_00612560
    PUSH EDI                            ; 00551362 | DAT_01bc120c
    CALL FUN_00483e20                   ; 00551363
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e20()
    MOV EAX,dword ptr [EBP + 0x14]      ; 00551368
    ADD EBX,0x4                         ; 0055136b
    INC ESI                             ; 0055136e
    MOV EDX,dword ptr [EAX + 0x15f6fc]  ; 0055136f
    ADD ESP,0x8                         ; 00551375
    CMP ESI,EDX                         ; 00551378
    JL 0x00551347                       ; 0055137a
        ;   XREF to: 00551347 (CONDITIONAL_JUMP)  ; LAB_00551347
    LEA EAX,[EAX]                       ; 0055137c
    MOV ECX,dword ptr [0x0061dca4]      ; 00551380 | DAT_0061dca4
        ;   Label: LAB_00551380
    PUSH ECX                            ; 00551386
    CALL FUN_004e5c50                   ; 00551387
        ;   XREF to: 004e5c50 (UNCONDITIONAL_CALL)  ; undefined FUN_004e5c50()
    ADD ESP,0x4                         ; 0055138c
    MOV EBX,dword ptr [0x0061c010]      ; 0055138f | DAT_0061c010
    PUSH EBX                            ; 00551395
    CALL FUN_004b5100                   ; 00551396
        ;   XREF to: 004b5100 (UNCONDITIONAL_CALL)  ; undefined FUN_004b5100()
    ADD ESP,0x4                         ; 0055139b
    PUSH 0x1                            ; 0055139e
    MOV ESI,dword ptr [EBP + -0x4]      ; 005513a0
    PUSH ESI                            ; 005513a3
    CALL FUN_00462ad0                   ; 005513a4
        ;   XREF to: 00462ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00462ad0()
    ADD ESP,0x8                         ; 005513a9
    LEA EBX,[EBP + -0x30]               ; 005513ac
    LEA EAX,[EBP + -0x3c]               ; 005513af
    FLD float ptr [EAX]                 ; 005513b2
    FMUL float ptr [0x00605000]         ; 005513b4 | DAT_00605000
    FISTP dword ptr [EBX]               ; 005513ba
    FLD float ptr [EAX + 0x4]           ; 005513bc
    FMUL float ptr [0x00605000]         ; 005513bf | DAT_00605000
    FISTP dword ptr [EBX + 0x4]         ; 005513c5
    FLD float ptr [EAX + 0x8]           ; 005513c8
    FMUL float ptr [0x00605000]         ; 005513cb | DAT_00605000
    FISTP dword ptr [EBX + 0x8]         ; 005513d1
    PUSH 0x0                            ; 005513d4
    PUSH 0x0                            ; 005513d6
    PUSH 0x0                            ; 005513d8
    PUSH 0x0                            ; 005513da
    PUSH 0x0                            ; 005513dc
    MOV EDI,dword ptr [EBP + 0x14]      ; 005513de
    PUSH EDI                            ; 005513e1
    XOR ESI,ESI                         ; 005513e2
    CALL FUN_00551c30                   ; 005513e4
        ;   XREF to: 00551c30 (UNCONDITIONAL_CALL)  ; undefined FUN_00551c30()
    MOV EAX,[0x0061b49c]                ; 005513e9 | DAT_0061b49c
    ADD ESP,0x18                        ; 005513ee
    CMP EAX,0xf0                        ; 005513f1
    JLE 0x0055144a                      ; 005513f6
        ;   XREF to: 0055144a (CONDITIONAL_JUMP)  ; LAB_0055144a
    MOV EDX,dword ptr [EBP + -0x4]      ; 005513f8
    MOV EDX,dword ptr [EDX + 0x1cc0]    ; 005513fb | DAT_01cce0a4
    MOV EAX,[0x0061b498]                ; 00551401 | DAT_0061b498
    ADD EDX,EDX                         ; 00551406
    SUB EAX,EDX                         ; 00551408
    MOV EDX,EAX                         ; 0055140a
    SAR EDX,0x1f                        ; 0055140c
    SUB EAX,EDX                         ; 0055140f
    SAR EAX,0x1                         ; 00551411
    MOV EDX,dword ptr [EBP + -0x4]      ; 00551413
    MOV EBX,EAX                         ; 00551416
    MOV EDX,dword ptr [EDX + 0x1cc4]    ; 00551418 | DAT_01cce0a8
    MOV EAX,[0x0061b49c]                ; 0055141e | DAT_0061b49c
    ADD EDX,EDX                         ; 00551423
    SUB EAX,EDX                         ; 00551425
    MOV EDX,EAX                         ; 00551427
    SAR EDX,0x1f                        ; 00551429
        ;   Label: LAB_00551429
    SUB EAX,EDX                         ; 0055142c
    SAR EAX,0x1                         ; 0055142e
    MOV EDX,dword ptr [EBP + -0x8]      ; 00551430
    PUSH EDX                            ; 00551433
    PUSH ESI                            ; 00551434
    PUSH EAX                            ; 00551435
    PUSH EBX                            ; 00551436
    MOV ECX,dword ptr [EBP + -0x4]      ; 00551437
    PUSH ECX                            ; 0055143a
    CALL FUN_00466220                   ; 0055143b
        ;   XREF to: 00466220 (UNCONDITIONAL_CALL)  ; undefined FUN_00466220()
    ADD ESP,0x14                        ; 00551440
    MOV ESP,EBP                         ; 00551443
    POP EBP                             ; 00551445
    POP EDI                             ; 00551446
    POP ESI                             ; 00551447
    POP EBX                             ; 00551448
    RET                                 ; 00551449
    MOV EAX,dword ptr [EBP + -0x4]      ; 0055144a
        ;   Label: LAB_0055144a
    MOV EDX,dword ptr [0x0061b498]      ; 0055144d | DAT_0061b498
    MOV ECX,dword ptr [EAX + 0x1cc0]    ; 00551453 | DAT_01cce0a4
    SUB EDX,ECX                         ; 00551459
    MOV EAX,EDX                         ; 0055145b
    SAR EDX,0x1f                        ; 0055145d
    SUB EAX,EDX                         ; 00551460
    SAR EAX,0x1                         ; 00551462
    MOV EBX,EAX                         ; 00551464
    MOV EAX,dword ptr [EBP + -0x4]      ; 00551466
    MOV EDX,dword ptr [0x0061b49c]      ; 00551469 | DAT_0061b49c
    MOV EDI,dword ptr [EAX + 0x1cc4]    ; 0055146f | DAT_01cce0a8
    SUB EDX,EDI                         ; 00551475
    MOV EAX,EDX                         ; 00551477
    JMP 0x00551429                      ; 00551479
        ;   XREF to: 00551429 (UNCONDITIONAL_JUMP)  ; LAB_00551429

