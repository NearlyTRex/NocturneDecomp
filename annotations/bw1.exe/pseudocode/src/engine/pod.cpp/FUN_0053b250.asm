; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0053b250(undefined4 *param_1,undefined4 param_2,char *param_3)
;
; Local Variables:
; undefined        Stack[-0x8cc]:1  local_8cc
; undefined        Stack[-0x7cc]:1  local_7cc
; undefined1       Stack[-0x7cb]:1  local_7cb
; undefined4       Stack[-0x6c8]:4  local_6c8
; undefined4       Stack[-0x6c0]:4  local_6c0
; undefined        Stack[-0x6b8]:1  local_6b8
; undefined1       Stack[-0x6b7]:1  local_6b7
; undefined        Stack[-0x4b8]:1  local_4b8
; undefined        Stack[-0x4b0]:1  local_4b0
; undefined1       Stack[-0x4af]:1  local_4af
; undefined4       Stack[-0x460]:4  local_460
; undefined4       Stack[-0x45c]:4  local_45c
; undefined4       Stack[-0x454]:4  local_454
; undefined        Stack[-0x450]:1  local_450
; undefined1       Stack[-0x44f]:1  local_44f
; undefined        Stack[-0x400]:1  local_400
; undefined1       Stack[-0x3ff]:1  local_3ff
; undefined4       Stack[-0x3b0]:4  local_3b0
; undefined4       Stack[-0x3a8]:4  local_3a8
; undefined4       Stack[-0x3a4]:4  local_3a4
; undefined        Stack[-0x398]:1  local_398
; undefined        Stack[-0x394]:1  local_394
; undefined1       Stack[-0x393]:1  local_393
; undefined4       Stack[-0x294]:4  local_294
; undefined        Stack[-0x288]:1  local_288
; undefined        Stack[-0x188]:1  local_188
; undefined        Stack[-0x180]:1  local_180
; undefined1       Stack[-0x17f]:1  local_17f
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined        Stack[-0x124]:1  local_124
; undefined1       Stack[-0x123]:1  local_123
; undefined        Stack[-0xd4]:1  local_d4
; undefined1       Stack[-0xd3]:1  local_d3
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x58]:1  local_58
; undefined1       Stack[-0x57]:1  local_57
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined1       Stack[-0x2f]:1  local_2f
; undefined1       Stack[-0x2e]:1  local_2e
; undefined1       Stack[-0x2d]:1  local_2d
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0053c650 at 0053c67a
;   FUN_0053c750 at 0053c7a1
;
; Referenced Globals:
;   TerminatedCString s_File_not_found_005ed662
;   TerminatedCString s_Unable_to_open_file_s_005ed671
;   undefined4 DAT_005ed68a
;   undefined4 DAT_005ed68e
;   TerminatedCString s_I_O_Error_accessing_file_005ed693
;   TerminatedCString s_File_is_corrupt_005ed6c0
;   TerminatedCString s_Out_of_memory_005ed6d0
;   TerminatedCString s_engine_pod_cpp_005ed6de
;   TerminatedCString s_realloc_returns_NULL_shr_005ed6f0
;   TerminatedCString s_Unknown_error_00622840
;   undefined4 s_Unknown_error_00622840+4
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_00478e20
;   FUN_00478ef0
;   FUN_00479580
;   FUN_005030e0
;   FUN_00531090
;   FUN_0053be30
;   FUN_005a08d0
;   FUN_005a0a50
;   FUN_005a0c10
;   FUN_005a0d00
;   FUN_005a0d50
;   FUN_005a0d70
;   FUN_005a0dc0
;   FUN_005a0f60
;   FUN_005bfb40
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b250
        ;   Label: FUN_0053b250
    PUSH ESI                            ; 0053b251
    PUSH EDI                            ; 0053b252
    PUSH EBP                            ; 0053b253
    SUB ESP,0x8bc                       ; 0053b254
    MOV EBX,dword ptr [ESP + 0x8d0]     ; 0053b25a
    MOV ECX,0x80                        ; 0053b261
    LEA EDI,[ESP + 0x214]               ; 0053b266
    LEA EAX,[ESP + 0x848]               ; 0053b26d
    XOR EDX,EDX                         ; 0053b274
    MOV ESI,0x622840                    ; 0053b276 | = "(Unknown error)"
    MOV dword ptr [ESP + 0x8b0],EDX     ; 0053b27b
    PUSH EAX                            ; 0053b282
    MOVSD.REP ES:EDI,ESI                ; 0053b283 | = "(Unknown error)" | s_Unknown_error_00622840+4
    CALL FUN_005a08d0                   ; 0053b285
        ;   XREF to: 005a08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a08d0()
    ADD ESP,0x4                         ; 0053b28a
    PUSH EBX                            ; 0053b28d
    CALL FUN_0053be30                   ; 0053b28e
        ;   XREF to: 0053be30 (UNCONDITIONAL_CALL)  ; undefined FUN_0053be30()
    ADD ESP,0x4                         ; 0053b293
    MOV ECX,dword ptr [ESP + 0x8d4]     ; 0053b296
    PUSH ECX                            ; 0053b29d
    PUSH 0x0                            ; 0053b29e
    LEA EAX,[ESP + 0x8]                 ; 0053b2a0
    PUSH EAX                            ; 0053b2a4
    CALL FUN_00478e20                   ; 0053b2a5
        ;   XREF to: 00478e20 (UNCONDITIONAL_CALL)  ; undefined FUN_00478e20()
    ADD ESP,0xc                         ; 0053b2aa
    MOV EAX,ESP                         ; 0053b2ad
    PUSH EAX                            ; 0053b2af
    CALL FUN_00478ef0                   ; 0053b2b0
        ;   XREF to: 00478ef0 (UNCONDITIONAL_CALL)  ; undefined FUN_00478ef0()
    ADD ESP,0x4                         ; 0053b2b5
    TEST EAX,EAX                        ; 0053b2b8
    JNZ 0x0053b345                      ; 0053b2ba
        ;   XREF to: 0053b345 (CONDITIONAL_JUMP)  ; LAB_0053b345
    PUSH 0x5ed662                       ; 0053b2c0 | = "File not found"
    CALL FUN_00531090                   ; 0053b2c5
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0053b2ca
    PUSH EAX                            ; 0053b2cd
    LEA EAX,[ESP + 0x218]               ; 0053b2ce
    PUSH EAX                            ; 0053b2d5
    CALL FUN_005bfb40                   ; 0053b2d6
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x8                         ; 0053b2db
    LEA EAX,[ESP + 0x848]               ; 0053b2de
        ;   Label: LAB_0053b2de
    PUSH EAX                            ; 0053b2e5
    CALL FUN_005a0dc0                   ; 0053b2e6
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0dc0()
    ADD ESP,0x4                         ; 0053b2eb
    PUSH EBX                            ; 0053b2ee
    CALL FUN_0053be30                   ; 0053b2ef
        ;   XREF to: 0053be30 (UNCONDITIONAL_CALL)  ; undefined FUN_0053be30()
    ADD ESP,0x4                         ; 0053b2f4
    MOV EBP,dword ptr [ESP + 0x8d8]     ; 0053b2f7
    TEST EBP,EBP                        ; 0053b2fe
    JZ 0x0053b325                       ; 0053b300
        ;   XREF to: 0053b325 (CONDITIONAL_JUMP)  ; LAB_0053b325
    LEA ESI,[ESP + 0x214]               ; 0053b302
    MOV EDI,EBP                         ; 0053b309
    PUSH EDI                            ; 0053b30b
    MOV AL,byte ptr [ESI]               ; 0053b30c
        ;   Label: LAB_0053b30c
    MOV byte ptr [EDI],AL               ; 0053b30e
    CMP AL,0x0                          ; 0053b310
    JZ 0x0053b324                       ; 0053b312
        ;   XREF to: 0053b324 (CONDITIONAL_JUMP)  ; LAB_0053b324
    MOV AL,byte ptr [ESI + 0x1]         ; 0053b314
    ADD ESI,0x2                         ; 0053b317
    MOV byte ptr [EDI + 0x1],AL         ; 0053b31a
    ADD EDI,0x2                         ; 0053b31d
    CMP AL,0x0                          ; 0053b320
    JNZ 0x0053b30c                      ; 0053b322
        ;   XREF to: 0053b30c (CONDITIONAL_JUMP)  ; LAB_0053b30c
    POP EDI                             ; 0053b324
        ;   Label: LAB_0053b324
    XOR ESI,ESI                         ; 0053b325
        ;   Label: LAB_0053b325
    PUSH ESI                            ; 0053b327
    LEA EAX,[ESP + 0x84c]               ; 0053b328
    PUSH EAX                            ; 0053b32f
    CALL FUN_005a0a50                   ; 0053b330
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0a50()
        ;   Label: LAB_0053b330
    ADD ESP,0x8                         ; 0053b335
    MOV EAX,ESI                         ; 0053b338
    ADD ESP,0x8bc                       ; 0053b33a
    POP EBP                             ; 0053b340
    POP EDI                             ; 0053b341
    POP ESI                             ; 0053b342
    POP EBX                             ; 0053b343
    RET                                 ; 0053b344
    LEA EBP,[EBX + 0x4]                 ; 0053b345
        ;   Label: LAB_0053b345
    LEA ESI,[ESP + 0x100]               ; 0053b348
    MOV EDI,EBP                         ; 0053b34f
    PUSH EDI                            ; 0053b351
    MOV AL,byte ptr [ESI]               ; 0053b352
        ;   Label: LAB_0053b352
    MOV byte ptr [EDI],AL               ; 0053b354
    CMP AL,0x0                          ; 0053b356
    JZ 0x0053b36a                       ; 0053b358
        ;   XREF to: 0053b36a (CONDITIONAL_JUMP)  ; LAB_0053b36a
    MOV AL,byte ptr [ESI + 0x1]         ; 0053b35a
    ADD ESI,0x2                         ; 0053b35d
    MOV byte ptr [EDI + 0x1],AL         ; 0053b360
    ADD EDI,0x2                         ; 0053b363
    CMP AL,0x0                          ; 0053b366
    JNZ 0x0053b352                      ; 0053b368
        ;   XREF to: 0053b352 (CONDITIONAL_JUMP)  ; LAB_0053b352
    POP EDI                             ; 0053b36a
        ;   Label: LAB_0053b36a
    PUSH 0x1                            ; 0053b36b
    MOV EAX,dword ptr [ESP + 0x210]     ; 0053b36d
    PUSH EBP                            ; 0053b374
    MOV dword ptr [EBX + 0x104],EAX     ; 0053b375
    LEA EAX,[ESP + 0x850]               ; 0053b37b
    PUSH EAX                            ; 0053b382
    CALL FUN_005a0f60                   ; 0053b383
        ;   XREF to: 005a0f60 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0f60()
    ADD ESP,0xc                         ; 0053b388
    TEST EAX,EAX                        ; 0053b38b
    JZ 0x0053b440                       ; 0053b38d
        ;   XREF to: 0053b440 (CONDITIONAL_JUMP)  ; LAB_0053b440
    LEA EAX,[ESP + 0x644]               ; 0053b393
    PUSH EAX                            ; 0053b39a
    PUSH 0x0                            ; 0053b39b
    PUSH 0x0                            ; 0053b39d
    PUSH 0x0                            ; 0053b39f
    MOV ESI,dword ptr [ESP + 0x8e4]     ; 0053b3a1
    PUSH ESI                            ; 0053b3a8
    CALL FUN_00479580                   ; 0053b3a9
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; undefined FUN_00479580()
    ADD ESP,0x14                        ; 0053b3ae
    PUSH 0x5ed68a                       ; 0053b3b1 | DAT_005ed68a
    LEA EAX,[ESP + 0x648]               ; 0053b3b6
    PUSH EAX                            ; 0053b3bd
    CALL FUN_005c04e0                   ; 0053b3be
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 0053b3c3
    TEST EAX,EAX                        ; 0053b3c6
    JZ 0x0053b3e7                       ; 0053b3c8
        ;   XREF to: 0053b3e7 (CONDITIONAL_JUMP)  ; LAB_0053b3e7
    PUSH 0x5ed68e                       ; 0053b3ca | DAT_005ed68e
    LEA EAX,[ESP + 0x648]               ; 0053b3cf
    PUSH EAX                            ; 0053b3d6
    CALL FUN_005c04e0                   ; 0053b3d7
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 0053b3dc
    TEST EAX,EAX                        ; 0053b3df
    JNZ 0x0053b768                      ; 0053b3e1
        ;   XREF to: 0053b768 (CONDITIONAL_JUMP)  ; LAB_0053b768
    PUSH 0x110                          ; 0053b3e7
        ;   Label: LAB_0053b3e7
    LEA EAX,[ESP + 0x538]               ; 0053b3ec
    PUSH EAX                            ; 0053b3f3
    LEA EAX,[ESP + 0x850]               ; 0053b3f4
    PUSH EAX                            ; 0053b3fb
    CALL FUN_005a0c10                   ; 0053b3fc
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0c10()
    ADD ESP,0xc                         ; 0053b401
    CMP EAX,0x110                       ; 0053b404
    JZ 0x0053b464                       ; 0053b409
        ;   XREF to: 0053b464 (CONDITIONAL_JUMP)  ; LAB_0053b464
    PUSH 0x5ed693                       ; 0053b40b | = "I/O Error accessing file, or file is ..."
        ;   Label: LAB_0053b40b
    CALL FUN_00531090                   ; 0053b410
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0053b415
    LEA EDI,[ESP + 0x214]               ; 0053b418
    MOV ESI,EAX                         ; 0053b41f
    PUSH EDI                            ; 0053b421
    MOV AL,byte ptr [ESI]               ; 0053b422
        ;   Label: LAB_0053b422
    MOV byte ptr [EDI],AL               ; 0053b424
    CMP AL,0x0                          ; 0053b426
    JZ 0x0053b43a                       ; 0053b428
        ;   XREF to: 0053b43a (CONDITIONAL_JUMP)  ; LAB_0053b43a
    MOV AL,byte ptr [ESI + 0x1]         ; 0053b42a
    ADD ESI,0x2                         ; 0053b42d
    MOV byte ptr [EDI + 0x1],AL         ; 0053b430
    ADD EDI,0x2                         ; 0053b433
    CMP AL,0x0                          ; 0053b436
    JNZ 0x0053b422                      ; 0053b438
        ;   XREF to: 0053b422 (CONDITIONAL_JUMP)  ; LAB_0053b422
    POP EDI                             ; 0053b43a
        ;   Label: LAB_0053b43a
    JMP 0x0053b2de                      ; 0053b43b
        ;   XREF to: 0053b2de (UNCONDITIONAL_JUMP)  ; LAB_0053b2de
    PUSH EBP                            ; 0053b440
        ;   Label: LAB_0053b440
    PUSH 0x5ed671                       ; 0053b441 | = "Unable to open file '%s'"
    CALL FUN_00531090                   ; 0053b446
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0053b44b
    PUSH EAX                            ; 0053b44e
    LEA EAX,[ESP + 0x21c]               ; 0053b44f
    PUSH EAX                            ; 0053b456
    CALL FUN_005bfb40                   ; 0053b457
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 0053b45c
    JMP 0x0053b2de                      ; 0053b45f
        ;   XREF to: 0053b2de (UNCONDITIONAL_JUMP)  ; LAB_0053b2de
    MOV EAX,dword ptr [ESP + 0x638]     ; 0053b464
        ;   Label: LAB_0053b464
    LEA ESI,[ESP + 0x538]               ; 0053b46b
    LEA EDI,[EBX + 0x108]               ; 0053b472
    MOV dword ptr [EBX + 0x410],EAX     ; 0053b478
    PUSH EDI                            ; 0053b47e
    MOV AL,byte ptr [ESI]               ; 0053b47f
        ;   Label: LAB_0053b47f
    MOV byte ptr [EDI],AL               ; 0053b481
    CMP AL,0x0                          ; 0053b483
    JZ 0x0053b497                       ; 0053b485
        ;   XREF to: 0053b497 (CONDITIONAL_JUMP)  ; LAB_0053b497
    MOV AL,byte ptr [ESI + 0x1]         ; 0053b487
    ADD ESI,0x2                         ; 0053b48a
    MOV byte ptr [EDI + 0x1],AL         ; 0053b48d
    ADD EDI,0x2                         ; 0053b490
    CMP AL,0x0                          ; 0053b493
    JNZ 0x0053b47f                      ; 0053b495
        ;   XREF to: 0053b47f (CONDITIONAL_JUMP)  ; LAB_0053b47f
    POP EDI                             ; 0053b497
        ;   Label: LAB_0053b497
    MOV ESI,dword ptr [EBX + 0x410]     ; 0053b498
    TEST ESI,ESI                        ; 0053b49e
    JL 0x0053b6fe                       ; 0053b4a0
        ;   XREF to: 0053b6fe (CONDITIONAL_JUMP)  ; LAB_0053b6fe
    CMP ESI,0x98967f                    ; 0053b4a6
    JG 0x0053b6fe                       ; 0053b4ac
        ;   XREF to: 0053b6fe (CONDITIONAL_JUMP)  ; LAB_0053b6fe
    LEA EAX,[ESI*0x4 + 0x0]             ; 0053b4b2
    ADD EAX,ESI                         ; 0053b4b9
    SHL EAX,0x2                         ; 0053b4bb
    PUSH EAX                            ; 0053b4be
    CALL FUN_005c08d0                   ; 0053b4bf
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c08d0()
    ADD ESP,0x4                         ; 0053b4c4
    MOV dword ptr [EBX + 0x414],EAX     ; 0053b4c7
    TEST EAX,EAX                        ; 0053b4cd
    JZ 0x0053b733                       ; 0053b4cf
        ;   XREF to: 0053b733 (CONDITIONAL_JUMP)  ; LAB_0053b733
    XOR EBP,EBP                         ; 0053b4d5
    MOV ECX,dword ptr [EBX + 0x410]     ; 0053b4d7
    MOV dword ptr [ESP + 0x8a4],EBP     ; 0053b4dd
    MOV dword ptr [ESP + 0x8ac],EBP     ; 0053b4e4
    TEST ECX,ECX                        ; 0053b4eb
    JLE 0x0053b649                      ; 0053b4ed
        ;   XREF to: 0053b649 (CONDITIONAL_JUMP)  ; LAB_0053b649
    MOV dword ptr [ESP + 0x8a0],EBP     ; 0053b4f3
    PUSH 0x50                           ; 0053b4fa
        ;   Label: LAB_0053b4fa
    LEA EAX,[ESP + 0x7fc]               ; 0053b4fc
    PUSH EAX                            ; 0053b503
    LEA EAX,[ESP + 0x850]               ; 0053b504
    PUSH EAX                            ; 0053b50b
    CALL FUN_005a0c10                   ; 0053b50c
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0c10()
    ADD ESP,0xc                         ; 0053b511
    CMP EAX,0x50                        ; 0053b514
    JNZ 0x0053b40b                      ; 0053b517
        ;   XREF to: 0053b40b (CONDITIONAL_JUMP)  ; LAB_0053b40b
    MOV EDX,dword ptr [ESP + 0x8a0]     ; 0053b51d
    MOV EAX,dword ptr [EBX + 0x414]     ; 0053b524
    ADD EAX,EDX                         ; 0053b52a
    LEA EDI,[ESP + 0x7f8]               ; 0053b52c
    MOV dword ptr [EAX],EBP             ; 0053b533
    SUB ECX,ECX                         ; 0053b535
    DEC ECX                             ; 0053b537
    XOR EAX,EAX                         ; 0053b538
    SCASB.REPNE ES:EDI                  ; 0053b53a
    NOT ECX                             ; 0053b53c
    DEC ECX                             ; 0053b53e
    INC ECX                             ; 0053b53f
    ADD EBP,ECX                         ; 0053b540
    CMP EBP,dword ptr [ESP + 0x8a4]     ; 0053b542
    JLE 0x0053b585                      ; 0053b549
        ;   XREF to: 0053b585 (CONDITIONAL_JUMP)  ; LAB_0053b585
    MOV ESI,dword ptr [ESP + 0x8ac]     ; 0053b54b
    MOV EAX,dword ptr [EBX + 0x410]     ; 0053b552
    SUB EAX,ESI                         ; 0053b558
    IMUL EAX,EAX,0x30                   ; 0053b55a
    LEA EDX,[EAX + EBP*0x1]             ; 0053b55d
    PUSH EDX                            ; 0053b560
    MOV EAX,dword ptr [EBX + 0x418]     ; 0053b561
    PUSH EAX                            ; 0053b567
    MOV dword ptr [ESP + 0x8ac],EDX     ; 0053b568
    CALL FUN_005c10d0                   ; 0053b56f
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c10d0()
    ADD ESP,0x8                         ; 0053b574
    TEST EAX,EAX                        ; 0053b577
    JZ 0x0053b733                       ; 0053b579
        ;   XREF to: 0053b733 (CONDITIONAL_JUMP)  ; LAB_0053b733
    MOV dword ptr [EBX + 0x418],EAX     ; 0053b57f
    MOV EDX,dword ptr [ESP + 0x8a0]     ; 0053b585
        ;   Label: LAB_0053b585
    MOV EAX,dword ptr [EBX + 0x414]     ; 0053b58c
    ADD EAX,EDX                         ; 0053b592
    MOV EDI,dword ptr [EBX + 0x418]     ; 0053b594
    MOV ECX,dword ptr [EAX]             ; 0053b59a
    LEA ESI,[ESP + 0x7f8]               ; 0053b59c
    ADD EDI,ECX                         ; 0053b5a3
    PUSH EDI                            ; 0053b5a5
    MOV AL,byte ptr [ESI]               ; 0053b5a6
        ;   Label: LAB_0053b5a6
    MOV byte ptr [EDI],AL               ; 0053b5a8
    CMP AL,0x0                          ; 0053b5aa
    JZ 0x0053b5be                       ; 0053b5ac
        ;   XREF to: 0053b5be (CONDITIONAL_JUMP)  ; LAB_0053b5be
    MOV AL,byte ptr [ESI + 0x1]         ; 0053b5ae
    ADD ESI,0x2                         ; 0053b5b1
    MOV byte ptr [EDI + 0x1],AL         ; 0053b5b4
    ADD EDI,0x2                         ; 0053b5b7
    CMP AL,0x0                          ; 0053b5ba
    JNZ 0x0053b5a6                      ; 0053b5bc
        ;   XREF to: 0053b5a6 (CONDITIONAL_JUMP)  ; LAB_0053b5a6
    POP EDI                             ; 0053b5be
        ;   Label: LAB_0053b5be
    MOV EAX,dword ptr [EBX + 0x414]     ; 0053b5bf
    ADD EDX,EAX                         ; 0053b5c5
    MOV EAX,dword ptr [ESP + 0x838]     ; 0053b5c7
    MOV dword ptr [EDX + 0x4],EAX       ; 0053b5ce
    MOV EDX,dword ptr [ESP + 0x8a0]     ; 0053b5d1
    MOV EAX,dword ptr [EBX + 0x414]     ; 0053b5d8
    ADD EDX,EAX                         ; 0053b5de
    MOV EAX,dword ptr [ESP + 0x83c]     ; 0053b5e0
    MOV dword ptr [EDX + 0x8],EAX       ; 0053b5e7
    MOV EDX,dword ptr [ESP + 0x8a0]     ; 0053b5ea
    MOV EAX,dword ptr [EBX + 0x414]     ; 0053b5f1
    MOV ESI,dword ptr [ESP + 0x8a0]     ; 0053b5f7
    ADD EDX,EAX                         ; 0053b5fe
    MOV EAX,dword ptr [ESP + 0x844]     ; 0053b600
    MOV EDI,dword ptr [ESP + 0x8ac]     ; 0053b607
    MOV dword ptr [EDX + 0x10],EAX      ; 0053b60e
    MOV EDX,dword ptr [ESP + 0x8a0]     ; 0053b611
    MOV EAX,dword ptr [EBX + 0x414]     ; 0053b618
    ADD ESI,0x14                        ; 0053b61e
    ADD EDX,EAX                         ; 0053b621
    MOV EAX,dword ptr [EBX + 0x104]     ; 0053b623
    INC EDI                             ; 0053b629
    MOV dword ptr [EDX + 0xc],EAX       ; 0053b62a
    MOV dword ptr [ESP + 0x8ac],EDI     ; 0053b62d
    MOV EDX,dword ptr [EBX + 0x410]     ; 0053b634
    MOV dword ptr [ESP + 0x8a0],ESI     ; 0053b63a
    CMP EDI,EDX                         ; 0053b641
    JL 0x0053b4fa                       ; 0053b643
        ;   XREF to: 0053b4fa (CONDITIONAL_JUMP)  ; LAB_0053b4fa
    CMP EBP,dword ptr [ESP + 0x8a4]     ; 0053b649
        ;   Label: LAB_0053b649
    JGE 0x0053b65d                      ; 0053b650
        ;   XREF to: 0053b65d (CONDITIONAL_JUMP)  ; LAB_0053b65d
        ;   Label: LAB_0053b650
    MOV dword ptr [ESP + 0x8b0],0x1     ; 0053b652
    LEA EAX,[ESP + 0x848]               ; 0053b65d
        ;   Label: LAB_0053b65d
    PUSH EAX                            ; 0053b664
    CALL FUN_005a0d70                   ; 0053b665
        ;   XREF to: 005a0d70 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0d70()
    ADD ESP,0x4                         ; 0053b66a
    TEST EAX,EAX                        ; 0053b66d
    JZ 0x0053b40b                       ; 0053b66f
        ;   XREF to: 0053b40b (CONDITIONAL_JUMP)  ; LAB_0053b40b
    LEA EAX,[ESP + 0x848]               ; 0053b675
    PUSH EAX                            ; 0053b67c
    CALL FUN_005a0dc0                   ; 0053b67d
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0dc0()
    ADD ESP,0x4                         ; 0053b682
    CMP dword ptr [ESP + 0x8b0],0x0     ; 0053b685
    JNZ 0x0053bde5                      ; 0053b68d
        ;   XREF to: 0053bde5 (CONDITIONAL_JUMP)  ; LAB_0053bde5
    MOV ECX,dword ptr [EBX + 0x410]     ; 0053b693
        ;   Label: LAB_0053b693
    XOR EDX,EDX                         ; 0053b699
    TEST ECX,ECX                        ; 0053b69b
    JLE 0x0053b6cd                      ; 0053b69d
        ;   XREF to: 0053b6cd (CONDITIONAL_JUMP)  ; LAB_0053b6cd
    XOR ECX,ECX                         ; 0053b69f
    MOV EAX,dword ptr [EBX + 0x414]     ; 0053b6a1
        ;   Label: LAB_0053b6a1
    ADD EAX,ECX                         ; 0053b6a7
    MOV ESI,dword ptr [EAX]             ; 0053b6a9
    TEST ESI,ESI                        ; 0053b6ab
    JL 0x0053b6fe                       ; 0053b6ad
        ;   XREF to: 0053b6fe (CONDITIONAL_JUMP)  ; LAB_0053b6fe
    CMP EBP,ESI                         ; 0053b6af
    JLE 0x0053b6fe                      ; 0053b6b1
        ;   XREF to: 0053b6fe (CONDITIONAL_JUMP)  ; LAB_0053b6fe
    MOV ESI,dword ptr [EBX + 0x418]     ; 0053b6b3
    MOV EDI,dword ptr [EAX]             ; 0053b6b9
    ADD ESI,EDI                         ; 0053b6bb
    MOV dword ptr [EAX],ESI             ; 0053b6bd
    INC EDX                             ; 0053b6bf
    MOV EAX,dword ptr [EBX + 0x410]     ; 0053b6c0
    ADD ECX,0x14                        ; 0053b6c6
    CMP EDX,EAX                         ; 0053b6c9
    JL 0x0053b6a1                       ; 0053b6cb
        ;   XREF to: 0053b6a1 (CONDITIONAL_JUMP)  ; LAB_0053b6a1
    PUSH 0x53b230                       ; 0053b6cd | LAB_0053b230
        ;   Label: LAB_0053b6cd
    PUSH 0x14                           ; 0053b6d2
    MOV EDX,dword ptr [EBX + 0x410]     ; 0053b6d4
    PUSH EDX                            ; 0053b6da
    MOV ECX,dword ptr [EBX + 0x414]     ; 0053b6db
    PUSH ECX                            ; 0053b6e1
    CALL FUN_005bfc68                   ; 0053b6e2
        ;   XREF to: 005bfc68 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfc68()
    ADD ESP,0x10                        ; 0053b6e7
    PUSH 0x0                            ; 0053b6ea
    LEA EAX,[ESP + 0x84c]               ; 0053b6ec
    PUSH EAX                            ; 0053b6f3
    MOV ESI,0x1                         ; 0053b6f4
    JMP 0x0053b330                      ; 0053b6f9
        ;   XREF to: 0053b330 (UNCONDITIONAL_JUMP)  ; LAB_0053b330
    PUSH 0x5ed6c0                       ; 0053b6fe | = "File is corrupt"
        ;   Label: LAB_0053b6fe
    CALL FUN_00531090                   ; 0053b703
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0053b708
    LEA EDI,[ESP + 0x214]               ; 0053b70b
    MOV ESI,EAX                         ; 0053b712
    PUSH EDI                            ; 0053b714
    MOV AL,byte ptr [ESI]               ; 0053b715
        ;   Label: LAB_0053b715
    MOV byte ptr [EDI],AL               ; 0053b717
    CMP AL,0x0                          ; 0053b719
    JZ 0x0053b72d                       ; 0053b71b
        ;   XREF to: 0053b72d (CONDITIONAL_JUMP)  ; LAB_0053b72d
    MOV AL,byte ptr [ESI + 0x1]         ; 0053b71d
    ADD ESI,0x2                         ; 0053b720
    MOV byte ptr [EDI + 0x1],AL         ; 0053b723
    ADD EDI,0x2                         ; 0053b726
    CMP AL,0x0                          ; 0053b729
    JNZ 0x0053b715                      ; 0053b72b
        ;   XREF to: 0053b715 (CONDITIONAL_JUMP)  ; LAB_0053b715
    POP EDI                             ; 0053b72d
        ;   Label: LAB_0053b72d
    JMP 0x0053b2de                      ; 0053b72e
        ;   XREF to: 0053b2de (UNCONDITIONAL_JUMP)  ; LAB_0053b2de
    PUSH 0x5ed6d0                       ; 0053b733 | = "Out of memory"
        ;   Label: LAB_0053b733
    CALL FUN_00531090                   ; 0053b738
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0053b73d
    LEA EDI,[ESP + 0x214]               ; 0053b740
    MOV ESI,EAX                         ; 0053b747
    PUSH EDI                            ; 0053b749
    MOV AL,byte ptr [ESI]               ; 0053b74a
        ;   Label: LAB_0053b74a
    MOV byte ptr [EDI],AL               ; 0053b74c
    CMP AL,0x0                          ; 0053b74e
    JZ 0x0053b762                       ; 0053b750
        ;   XREF to: 0053b762 (CONDITIONAL_JUMP)  ; LAB_0053b762
    MOV AL,byte ptr [ESI + 0x1]         ; 0053b752
    ADD ESI,0x2                         ; 0053b755
    MOV byte ptr [EDI + 0x1],AL         ; 0053b758
    ADD EDI,0x2                         ; 0053b75b
    CMP AL,0x0                          ; 0053b75e
    JNZ 0x0053b74a                      ; 0053b760
        ;   XREF to: 0053b74a (CONDITIONAL_JUMP)  ; LAB_0053b74a
    POP EDI                             ; 0053b762
        ;   Label: LAB_0053b762
    JMP 0x0053b2de                      ; 0053b763
        ;   XREF to: 0053b2de (UNCONDITIONAL_JUMP)  ; LAB_0053b2de
    PUSH 0x4                            ; 0053b768
        ;   Label: LAB_0053b768
    LEA EAX,[ESP + 0x8a0]               ; 0053b76a
    PUSH EAX                            ; 0053b771
    LEA EAX,[ESP + 0x850]               ; 0053b772
    PUSH EAX                            ; 0053b779
    CALL FUN_005a0c10                   ; 0053b77a
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0c10()
    ADD ESP,0xc                         ; 0053b77f
    CMP EAX,0x4                         ; 0053b782
    JNZ 0x0053b40b                      ; 0053b785
        ;   XREF to: 0053b40b (CONDITIONAL_JUMP)  ; LAB_0053b40b
    PUSH 0x0                            ; 0053b78b
    PUSH 0x0                            ; 0053b78d
    LEA EAX,[ESP + 0x850]               ; 0053b78f
    PUSH EAX                            ; 0053b796
    CALL FUN_005a0d00                   ; 0053b797
        ;   XREF to: 005a0d00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0d00()
    ADD ESP,0xc                         ; 0053b79c
    CMP byte ptr [ESP + 0x89c],0x50     ; 0053b79f
    JNZ 0x0053b7cb                      ; 0053b7a7
        ;   XREF to: 0053b7cb (CONDITIONAL_JUMP)  ; LAB_0053b7cb
    CMP byte ptr [ESP + 0x89d],0x4f     ; 0053b7a9
    JNZ 0x0053b7cb                      ; 0053b7b1
        ;   XREF to: 0053b7cb (CONDITIONAL_JUMP)  ; LAB_0053b7cb
    CMP byte ptr [ESP + 0x89e],0x44     ; 0053b7b3
    JNZ 0x0053b7cb                      ; 0053b7bb
        ;   XREF to: 0053b7cb (CONDITIONAL_JUMP)  ; LAB_0053b7cb
    CMP byte ptr [ESP + 0x89f],0x33     ; 0053b7bd
    JZ 0x0053b986                       ; 0053b7c5
        ;   XREF to: 0053b986 (CONDITIONAL_JUMP)  ; LAB_0053b986
    CMP byte ptr [ESP + 0x89c],0x50     ; 0053b7cb
        ;   Label: LAB_0053b7cb
    JNZ 0x0053bb8c                      ; 0053b7d3
        ;   XREF to: 0053bb8c (CONDITIONAL_JUMP)  ; LAB_0053bb8c
    CMP byte ptr [ESP + 0x89d],0x4f     ; 0053b7d9
    JNZ 0x0053bb8c                      ; 0053b7e1
        ;   XREF to: 0053bb8c (CONDITIONAL_JUMP)  ; LAB_0053bb8c
    CMP byte ptr [ESP + 0x89e],0x44     ; 0053b7e7
    JNZ 0x0053bb8c                      ; 0053b7ef
        ;   XREF to: 0053bb8c (CONDITIONAL_JUMP)  ; LAB_0053bb8c
    CMP byte ptr [ESP + 0x89f],0x32     ; 0053b7f5
    JNZ 0x0053bb8c                      ; 0053b7fd
        ;   XREF to: 0053bb8c (CONDITIONAL_JUMP)  ; LAB_0053bb8c
    PUSH 0x60                           ; 0053b803
    LEA EAX,[ESP + 0x748]               ; 0053b805
    PUSH EAX                            ; 0053b80c
    LEA EAX,[ESP + 0x850]               ; 0053b80d
    PUSH EAX                            ; 0053b814
    CALL FUN_005a0c10                   ; 0053b815
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0c10()
    ADD ESP,0xc                         ; 0053b81a
    CMP EAX,0x60                        ; 0053b81d
    JNZ 0x0053b40b                      ; 0053b820
        ;   XREF to: 0053b40b (CONDITIONAL_JUMP)  ; LAB_0053b40b
    LEA ESI,[ESP + 0x74c]               ; 0053b826
    LEA EDI,[EBX + 0x108]               ; 0053b82d
    MOV dword ptr [EBX],0xc8            ; 0053b833
    PUSH EDI                            ; 0053b839
    MOV AL,byte ptr [ESI]               ; 0053b83a
        ;   Label: LAB_0053b83a
    MOV byte ptr [EDI],AL               ; 0053b83c
    CMP AL,0x0                          ; 0053b83e
    JZ 0x0053b852                       ; 0053b840
        ;   XREF to: 0053b852 (CONDITIONAL_JUMP)  ; LAB_0053b852
    MOV AL,byte ptr [ESI + 0x1]         ; 0053b842
    ADD ESI,0x2                         ; 0053b845
    MOV byte ptr [EDI + 0x1],AL         ; 0053b848
    ADD EDI,0x2                         ; 0053b84b
    CMP AL,0x0                          ; 0053b84e
    JNZ 0x0053b83a                      ; 0053b850
        ;   XREF to: 0053b83a (CONDITIONAL_JUMP)  ; LAB_0053b83a
    POP EDI                             ; 0053b852
        ;   Label: LAB_0053b852
    MOV EAX,dword ptr [ESP + 0x79c]     ; 0053b853
    MOV dword ptr [EBX + 0x410],EAX     ; 0053b85a
    MOV EAX,dword ptr [ESP + 0x7a0]     ; 0053b860
    MOV EDI,dword ptr [EBX + 0x410]     ; 0053b867
    MOV dword ptr [EBX + 0x41c],EAX     ; 0053b86d
    TEST EDI,EDI                        ; 0053b873
    JL 0x0053b6fe                       ; 0053b875
        ;   XREF to: 0053b6fe (CONDITIONAL_JUMP)  ; LAB_0053b6fe
    CMP EDI,0x98967f                    ; 0053b87b
    JG 0x0053b6fe                       ; 0053b881
        ;   XREF to: 0053b6fe (CONDITIONAL_JUMP)  ; LAB_0053b6fe
    LEA EAX,[EDI*0x4 + 0x0]             ; 0053b887
    ADD EAX,EDI                         ; 0053b88e
    SHL EAX,0x2                         ; 0053b890
    PUSH EAX                            ; 0053b893
    CALL FUN_005c08d0                   ; 0053b894
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c08d0()
    ADD ESP,0x4                         ; 0053b899
    MOV dword ptr [EBX + 0x414],EAX     ; 0053b89c
    TEST EAX,EAX                        ; 0053b8a2
    JZ 0x0053b733                       ; 0053b8a4
        ;   XREF to: 0053b733 (CONDITIONAL_JUMP)  ; LAB_0053b733
    MOV EDX,dword ptr [EBX + 0x410]     ; 0053b8aa
    LEA ESI,[EDX*0x4 + 0x0]             ; 0053b8b0
    ADD ESI,EDX                         ; 0053b8b7
    SHL ESI,0x2                         ; 0053b8b9
    PUSH ESI                            ; 0053b8bc
    PUSH EAX                            ; 0053b8bd
    LEA EAX,[ESP + 0x850]               ; 0053b8be
    PUSH EAX                            ; 0053b8c5
    CALL FUN_005a0c10                   ; 0053b8c6
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0c10()
    ADD ESP,0xc                         ; 0053b8cb
    CMP EAX,ESI                         ; 0053b8ce
    JNZ 0x0053b40b                      ; 0053b8d0
        ;   XREF to: 0053b40b (CONDITIONAL_JUMP)  ; LAB_0053b40b
    MOV ECX,dword ptr [EBX + 0x410]     ; 0053b8d6
    XOR EAX,ESI                         ; 0053b8dc
    TEST ECX,ECX                        ; 0053b8de
    JLE 0x0053b8f0                      ; 0053b8e0
        ;   XREF to: 0053b8f0 (CONDITIONAL_JUMP)  ; LAB_0053b8f0
    INC EAX                             ; 0053b8e2
        ;   Label: LAB_0053b8e2
    CMP EAX,dword ptr [EBX + 0x410]     ; 0053b8e3
    JL 0x0053b8e2                       ; 0053b8e9
        ;   XREF to: 0053b8e2 (CONDITIONAL_JUMP)  ; LAB_0053b8e2
    LEA EAX,[EAX]                       ; 0053b8eb
    MOV ECX,ECX                         ; 0053b8ee
    MOV EDX,dword ptr [EBX + 0x410]     ; 0053b8f0
        ;   Label: LAB_0053b8f0
    MOV EBP,dword ptr [EBX + 0x414]     ; 0053b8f6
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053b8fc
    MOV EBP,dword ptr [EBP + 0x8]       ; 0053b903
    ADD EAX,EDX                         ; 0053b906
    SUB EBP,0x60                        ; 0053b908
    SHL EAX,0x2                         ; 0053b90b
    SUB EBP,EAX                         ; 0053b90e
    CMP EBP,EDX                         ; 0053b910
    JL 0x0053b6fe                       ; 0053b912
        ;   XREF to: 0053b6fe (CONDITIONAL_JUMP)  ; LAB_0053b6fe
    MOV EAX,EDX                         ; 0053b918
    SHL EAX,0x8                         ; 0053b91a
    CMP EBP,EAX                         ; 0053b91d
    JG 0x0053b6fe                       ; 0053b91f
        ;   XREF to: 0053b6fe (CONDITIONAL_JUMP)  ; LAB_0053b6fe
    PUSH EBP                            ; 0053b925
    CALL FUN_005c08d0                   ; 0053b926
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c08d0()
    ADD ESP,0x4                         ; 0053b92b
    MOV dword ptr [EBX + 0x418],EAX     ; 0053b92e
    TEST EAX,EAX                        ; 0053b934
    JZ 0x0053b733                       ; 0053b936
        ;   XREF to: 0053b733 (CONDITIONAL_JUMP)  ; LAB_0053b733
    PUSH EBP                            ; 0053b93c
    PUSH EAX                            ; 0053b93d
    LEA EAX,[ESP + 0x850]               ; 0053b93e
    PUSH EAX                            ; 0053b945
    CALL FUN_005a0c10                   ; 0053b946
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0c10()
    ADD ESP,0xc                         ; 0053b94b
    CMP EAX,EBP                         ; 0053b94e
    JNZ 0x0053b40b                      ; 0053b950
        ;   XREF to: 0053b40b (CONDITIONAL_JUMP)  ; LAB_0053b40b
    MOV EAX,dword ptr [EBX + 0x410]     ; 0053b956
    LEA EDX,[EAX + -0x1]                ; 0053b95c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053b95f
    ADD EAX,EDX                         ; 0053b966
    SHL EAX,0x2                         ; 0053b968
    MOV EDX,dword ptr [EBX + 0x414]     ; 0053b96b
    ADD EDX,EAX                         ; 0053b971
    MOV EAX,dword ptr [EDX + 0x8]       ; 0053b973
    MOV ECX,dword ptr [EDX + 0x4]       ; 0053b976
    ADD EAX,ECX                         ; 0053b979
    MOV dword ptr [EBX + 0x420],EAX     ; 0053b97b
    JMP 0x0053b65d                      ; 0053b981
        ;   XREF to: 0053b65d (UNCONDITIONAL_JUMP)  ; LAB_0053b65d
    PUSH 0x120                          ; 0053b986
        ;   Label: LAB_0053b986
    LEA EAX,[ESP + 0x418]               ; 0053b98b
    PUSH EAX                            ; 0053b992
    LEA EAX,[ESP + 0x850]               ; 0053b993
    PUSH EAX                            ; 0053b99a
    CALL FUN_005a0c10                   ; 0053b99b
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0c10()
    ADD ESP,0xc                         ; 0053b9a0
    CMP EAX,0x120                       ; 0053b9a3
    JNZ 0x0053b40b                      ; 0053b9a8
        ;   XREF to: 0053b40b (CONDITIONAL_JUMP)  ; LAB_0053b40b
    LEA ESI,[ESP + 0x41c]               ; 0053b9ae
    LEA EDI,[EBX + 0x108]               ; 0053b9b5
    MOV dword ptr [EBX],0x12c           ; 0053b9bb
    PUSH EDI                            ; 0053b9c1
    MOV AL,byte ptr [ESI]               ; 0053b9c2
        ;   Label: LAB_0053b9c2
    MOV byte ptr [EDI],AL               ; 0053b9c4
    CMP AL,0x0                          ; 0053b9c6
    JZ 0x0053b9da                       ; 0053b9c8
        ;   XREF to: 0053b9da (CONDITIONAL_JUMP)  ; LAB_0053b9da
    MOV AL,byte ptr [ESI + 0x1]         ; 0053b9ca
    ADD ESI,0x2                         ; 0053b9cd
    MOV byte ptr [EDI + 0x1],AL         ; 0053b9d0
    ADD EDI,0x2                         ; 0053b9d3
    CMP AL,0x0                          ; 0053b9d6
    JNZ 0x0053b9c2                      ; 0053b9d8
        ;   XREF to: 0053b9c2 (CONDITIONAL_JUMP)  ; LAB_0053b9c2
    POP EDI                             ; 0053b9da
        ;   Label: LAB_0053b9da
    LEA ESI,[ESP + 0x47c]               ; 0053b9db
    LEA EDI,[EBX + 0x208]               ; 0053b9e2
    PUSH EDI                            ; 0053b9e8
    MOV AL,byte ptr [ESI]               ; 0053b9e9
        ;   Label: LAB_0053b9e9
    MOV byte ptr [EDI],AL               ; 0053b9eb
    CMP AL,0x0                          ; 0053b9ed
    JZ 0x0053ba01                       ; 0053b9ef
        ;   XREF to: 0053ba01 (CONDITIONAL_JUMP)  ; LAB_0053ba01
    MOV AL,byte ptr [ESI + 0x1]         ; 0053b9f1
    ADD ESI,0x2                         ; 0053b9f4
    MOV byte ptr [EDI + 0x1],AL         ; 0053b9f7
    ADD EDI,0x2                         ; 0053b9fa
    CMP AL,0x0                          ; 0053b9fd
    JNZ 0x0053b9e9                      ; 0053b9ff
        ;   XREF to: 0053b9e9 (CONDITIONAL_JUMP)  ; LAB_0053b9e9
    POP EDI                             ; 0053ba01
        ;   Label: LAB_0053ba01
    LEA ESI,[ESP + 0x4cc]               ; 0053ba02
    LEA EDI,[EBX + 0x308]               ; 0053ba09
    PUSH EDI                            ; 0053ba0f
    MOV AL,byte ptr [ESI]               ; 0053ba10
        ;   Label: LAB_0053ba10
    MOV byte ptr [EDI],AL               ; 0053ba12
    CMP AL,0x0                          ; 0053ba14
    JZ 0x0053ba28                       ; 0053ba16
        ;   XREF to: 0053ba28 (CONDITIONAL_JUMP)  ; LAB_0053ba28
    MOV AL,byte ptr [ESI + 0x1]         ; 0053ba18
    ADD ESI,0x2                         ; 0053ba1b
    MOV byte ptr [EDI + 0x1],AL         ; 0053ba1e
    ADD EDI,0x2                         ; 0053ba21
    CMP AL,0x0                          ; 0053ba24
    JNZ 0x0053ba10                      ; 0053ba26
        ;   XREF to: 0053ba10 (CONDITIONAL_JUMP)  ; LAB_0053ba10
    POP EDI                             ; 0053ba28
        ;   Label: LAB_0053ba28
    MOV EAX,dword ptr [ESP + 0x46c]     ; 0053ba29
    MOV dword ptr [EBX + 0x410],EAX     ; 0053ba30
    MOV EAX,dword ptr [ESP + 0x470]     ; 0053ba36
    MOV dword ptr [EBX + 0x41c],EAX     ; 0053ba3d
    MOV EAX,dword ptr [ESP + 0x528]     ; 0053ba43
    MOV dword ptr [EBX + 0x424],EAX     ; 0053ba4a
    MOV EAX,dword ptr [ESP + 0x478]     ; 0053ba50
    MOV ESI,dword ptr [EBX + 0x410]     ; 0053ba57
    MOV dword ptr [EBX + 0x408],EAX     ; 0053ba5d
    TEST ESI,ESI                        ; 0053ba63
    JL 0x0053b6fe                       ; 0053ba65
        ;   XREF to: 0053b6fe (CONDITIONAL_JUMP)  ; LAB_0053b6fe
    CMP ESI,0x98967f                    ; 0053ba6b
    JG 0x0053b6fe                       ; 0053ba71
        ;   XREF to: 0053b6fe (CONDITIONAL_JUMP)  ; LAB_0053b6fe
    LEA EAX,[ESI*0x4 + 0x0]             ; 0053ba77
    ADD EAX,ESI                         ; 0053ba7e
    SHL EAX,0x2                         ; 0053ba80
    PUSH EAX                            ; 0053ba83
    CALL FUN_005c08d0                   ; 0053ba84
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c08d0()
    ADD ESP,0x4                         ; 0053ba89
    MOV dword ptr [EBX + 0x414],EAX     ; 0053ba8c
    TEST EAX,EAX                        ; 0053ba92
    JZ 0x0053b733                       ; 0053ba94
        ;   XREF to: 0053b733 (CONDITIONAL_JUMP)  ; LAB_0053b733
    PUSH 0x0                            ; 0053ba9a
    MOV EAX,dword ptr [ESP + 0x520]     ; 0053ba9c
    PUSH EAX                            ; 0053baa3
    LEA EAX,[ESP + 0x850]               ; 0053baa4
    PUSH EAX                            ; 0053baab
    CALL FUN_005a0d00                   ; 0053baac
        ;   XREF to: 005a0d00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0d00()
    MOV EDX,dword ptr [EBX + 0x410]     ; 0053bab1
    LEA ESI,[EDX*0x4 + 0x0]             ; 0053bab7
    ADD ESI,EDX                         ; 0053babe
    ADD ESP,0xc                         ; 0053bac0
    SHL ESI,0x2                         ; 0053bac3
    PUSH ESI                            ; 0053bac6
    MOV EDX,dword ptr [EBX + 0x414]     ; 0053bac7
    PUSH EDX                            ; 0053bacd
    LEA EAX,[ESP + 0x850]               ; 0053bace
    PUSH EAX                            ; 0053bad5
    CALL FUN_005a0c10                   ; 0053bad6
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0c10()
    ADD ESP,0xc                         ; 0053badb
    CMP EAX,ESI                         ; 0053bade
    JNZ 0x0053b40b                      ; 0053bae0
        ;   XREF to: 0053b40b (CONDITIONAL_JUMP)  ; LAB_0053b40b
    MOV ECX,dword ptr [EBX + 0x410]     ; 0053bae6
    XOR EAX,ESI                         ; 0053baec
    TEST ECX,ECX                        ; 0053baee
    JLE 0x0053bb00                      ; 0053baf0
        ;   XREF to: 0053bb00 (CONDITIONAL_JUMP)  ; LAB_0053bb00
    INC EAX                             ; 0053baf2
        ;   Label: LAB_0053baf2
    CMP EAX,dword ptr [EBX + 0x410]     ; 0053baf3
    JL 0x0053baf2                       ; 0053baf9
        ;   XREF to: 0053baf2 (CONDITIONAL_JUMP)  ; LAB_0053baf2
    LEA EAX,[EAX]                       ; 0053bafb
    MOV ECX,ECX                         ; 0053bafe
    MOV EBP,dword ptr [ESP + 0x524]     ; 0053bb00
        ;   Label: LAB_0053bb00
    MOV EDI,dword ptr [EBX + 0x410]     ; 0053bb07
    CMP EBP,EDI                         ; 0053bb0d
    JL 0x0053b6fe                       ; 0053bb0f
        ;   XREF to: 0053b6fe (CONDITIONAL_JUMP)  ; LAB_0053b6fe
    MOV EAX,EDI                         ; 0053bb15
    SHL EAX,0x8                         ; 0053bb17
    CMP EAX,EBP                         ; 0053bb1a
    JL 0x0053b6fe                       ; 0053bb1c
        ;   XREF to: 0053b6fe (CONDITIONAL_JUMP)  ; LAB_0053b6fe
    PUSH EBP                            ; 0053bb22
    CALL FUN_005c08d0                   ; 0053bb23
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c08d0()
    ADD ESP,0x4                         ; 0053bb28
    MOV dword ptr [EBX + 0x418],EAX     ; 0053bb2b
    TEST EAX,EAX                        ; 0053bb31
    JZ 0x0053b733                       ; 0053bb33
        ;   XREF to: 0053b733 (CONDITIONAL_JUMP)  ; LAB_0053b733
    PUSH EBP                            ; 0053bb39
    PUSH EAX                            ; 0053bb3a
    LEA EAX,[ESP + 0x850]               ; 0053bb3b
    PUSH EAX                            ; 0053bb42
    CALL FUN_005a0c10                   ; 0053bb43
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0c10()
    ADD ESP,0xc                         ; 0053bb48
    CMP EAX,EBP                         ; 0053bb4b
    JNZ 0x0053b40b                      ; 0053bb4d
        ;   XREF to: 0053b40b (CONDITIONAL_JUMP)  ; LAB_0053b40b
    LEA EAX,[ESP + 0x848]               ; 0053bb53
    PUSH EAX                            ; 0053bb5a
    CALL FUN_005a0d50                   ; 0053bb5b
        ;   XREF to: 005a0d50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0d50()
    MOV EDX,dword ptr [EBX + 0x424]     ; 0053bb60
    MOV dword ptr [EBX + 0x428],EAX     ; 0053bb66
    MOV EAX,EDX                         ; 0053bb6c
    SHL EAX,0x5                         ; 0053bb6e
    ADD EDX,EAX                         ; 0053bb71
    SHL EDX,0x3                         ; 0053bb73
    MOV EAX,dword ptr [EBX + 0x428]     ; 0053bb76
    ADD EAX,EDX                         ; 0053bb7c
    ADD ESP,0x4                         ; 0053bb7e
    MOV dword ptr [EBX + 0x420],EAX     ; 0053bb81
    JMP 0x0053b65d                      ; 0053bb87
        ;   XREF to: 0053b65d (UNCONDITIONAL_JUMP)  ; LAB_0053b65d
    PUSH 0x54                           ; 0053bb8c
        ;   Label: LAB_0053bb8c
    LEA EAX,[ESP + 0x7a8]               ; 0053bb8e
    PUSH EAX                            ; 0053bb95
    LEA EAX,[ESP + 0x850]               ; 0053bb96
    PUSH EAX                            ; 0053bb9d
    MOV dword ptr [EBX],0x1             ; 0053bb9e
    CALL FUN_005a0c10                   ; 0053bba4
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0c10()
    ADD ESP,0xc                         ; 0053bba9
    CMP EAX,0x4                         ; 0053bbac
    JNZ 0x0053b40b                      ; 0053bbaf
        ;   XREF to: 0053b40b (CONDITIONAL_JUMP)  ; LAB_0053b40b
    MOV EAX,dword ptr [ESP + 0x7a4]     ; 0053bbb5
    LEA ESI,[ESP + 0x7a8]               ; 0053bbbc
    LEA EDI,[EBX + 0x108]               ; 0053bbc3
    MOV dword ptr [EBX + 0x410],EAX     ; 0053bbc9
    PUSH EDI                            ; 0053bbcf
    MOV AL,byte ptr [ESI]               ; 0053bbd0
        ;   Label: LAB_0053bbd0
    MOV byte ptr [EDI],AL               ; 0053bbd2
    CMP AL,0x0                          ; 0053bbd4
    JZ 0x0053bbe8                       ; 0053bbd6
        ;   XREF to: 0053bbe8 (CONDITIONAL_JUMP)  ; LAB_0053bbe8
    MOV AL,byte ptr [ESI + 0x1]         ; 0053bbd8
    ADD ESI,0x2                         ; 0053bbdb
    MOV byte ptr [EDI + 0x1],AL         ; 0053bbde
    ADD EDI,0x2                         ; 0053bbe1
    CMP AL,0x0                          ; 0053bbe4
    JNZ 0x0053bbd0                      ; 0053bbe6
        ;   XREF to: 0053bbd0 (CONDITIONAL_JUMP)  ; LAB_0053bbd0
    POP EDI                             ; 0053bbe8
        ;   Label: LAB_0053bbe8
    MOV EDI,dword ptr [EBX + 0x410]     ; 0053bbe9
    TEST EDI,EDI                        ; 0053bbef
    JL 0x0053b6fe                       ; 0053bbf1
        ;   XREF to: 0053b6fe (CONDITIONAL_JUMP)  ; LAB_0053b6fe
    CMP EDI,0x98967f                    ; 0053bbf7
    JG 0x0053b6fe                       ; 0053bbfd
        ;   XREF to: 0053b6fe (CONDITIONAL_JUMP)  ; LAB_0053b6fe
    LEA EAX,[EDI*0x4 + 0x0]             ; 0053bc03
    ADD EAX,EDI                         ; 0053bc0a
    SHL EAX,0x2                         ; 0053bc0c
    PUSH EAX                            ; 0053bc0f
    CALL FUN_005c08d0                   ; 0053bc10
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c08d0()
    ADD ESP,0x4                         ; 0053bc15
    MOV dword ptr [EBX + 0x414],EAX     ; 0053bc18
    TEST EAX,EAX                        ; 0053bc1e
    JZ 0x0053b733                       ; 0053bc20
        ;   XREF to: 0053b733 (CONDITIONAL_JUMP)  ; LAB_0053b733
    XOR EBP,EBP                         ; 0053bc26
    MOV ESI,dword ptr [EBX + 0x410]     ; 0053bc28
    MOV dword ptr [ESP + 0x8a8],EBP     ; 0053bc2e
    MOV dword ptr [ESP + 0x8b4],EBP     ; 0053bc35
    TEST ESI,ESI                        ; 0053bc3c
    JLE 0x0053bd9a                      ; 0053bc3e
        ;   XREF to: 0053bd9a (CONDITIONAL_JUMP)  ; LAB_0053bd9a
    MOV dword ptr [ESP + 0x8b8],EBP     ; 0053bc44
    PUSH 0x28                           ; 0053bc4b
        ;   Label: LAB_0053bc4b
    LEA EAX,[ESP + 0x878]               ; 0053bc4d
    PUSH EAX                            ; 0053bc54
    LEA EAX,[ESP + 0x850]               ; 0053bc55
    PUSH EAX                            ; 0053bc5c
    CALL FUN_005a0c10                   ; 0053bc5d
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0c10()
    ADD ESP,0xc                         ; 0053bc62
    CMP EAX,0x28                        ; 0053bc65
    JNZ 0x0053b40b                      ; 0053bc68
        ;   XREF to: 0053b40b (CONDITIONAL_JUMP)  ; LAB_0053b40b
    MOV EDX,dword ptr [ESP + 0x8b8]     ; 0053bc6e
    MOV EAX,dword ptr [EBX + 0x414]     ; 0053bc75
    ADD EAX,EDX                         ; 0053bc7b
    LEA EDI,[ESP + 0x874]               ; 0053bc7d
    MOV dword ptr [EAX],EBP             ; 0053bc84
    SUB ECX,ECX                         ; 0053bc86
    DEC ECX                             ; 0053bc88
    XOR EAX,EAX                         ; 0053bc89
    SCASB.REPNE ES:EDI                  ; 0053bc8b
    NOT ECX                             ; 0053bc8d
    DEC ECX                             ; 0053bc8f
    INC ECX                             ; 0053bc90
    ADD EBP,ECX                         ; 0053bc91
    CMP EBP,dword ptr [ESP + 0x8a8]     ; 0053bc93
    JG 0x0053bda6                       ; 0053bc9a
        ;   XREF to: 0053bda6 (CONDITIONAL_JUMP)  ; LAB_0053bda6
    MOV EDX,dword ptr [ESP + 0x894]     ; 0053bca0
        ;   Label: LAB_0053bca0
    TEST EDX,EDX                        ; 0053bca7
    JL 0x0053b6fe                       ; 0053bca9
        ;   XREF to: 0053b6fe (CONDITIONAL_JUMP)  ; LAB_0053b6fe
    CMP EDX,0x3b9ac9ff                  ; 0053bcaf
    JG 0x0053b6fe                       ; 0053bcb5
        ;   XREF to: 0053b6fe (CONDITIONAL_JUMP)  ; LAB_0053b6fe
    MOV ESI,dword ptr [ESP + 0x204]     ; 0053bcbb
    CMP EDX,ESI                         ; 0053bcc2
    JG 0x0053b6fe                       ; 0053bcc4
        ;   XREF to: 0053b6fe (CONDITIONAL_JUMP)  ; LAB_0053b6fe
    MOV EDI,dword ptr [ESP + 0x898]     ; 0053bcca
    CMP EDI,0x54                        ; 0053bcd1
    JC 0x0053b6fe                       ; 0053bcd4
        ;   XREF to: 0053b6fe (CONDITIONAL_JUMP)  ; LAB_0053b6fe
    MOV EAX,ESI                         ; 0053bcda
    SUB EAX,EDX                         ; 0053bcdc
    CMP EAX,EDI                         ; 0053bcde
    JL 0x0053b6fe                       ; 0053bce0
        ;   XREF to: 0053b6fe (CONDITIONAL_JUMP)  ; LAB_0053b6fe
    MOV ESI,dword ptr [ESP + 0x8b8]     ; 0053bce6
    MOV EAX,dword ptr [EBX + 0x414]     ; 0053bced
    ADD EAX,ESI                         ; 0053bcf3
    MOV EDI,dword ptr [EBX + 0x418]     ; 0053bcf5
    MOV EDX,dword ptr [EAX]             ; 0053bcfb
    LEA ESI,[ESP + 0x874]               ; 0053bcfd
    ADD EDI,EDX                         ; 0053bd04
    PUSH EDI                            ; 0053bd06
    MOV AL,byte ptr [ESI]               ; 0053bd07
        ;   Label: LAB_0053bd07
    MOV byte ptr [EDI],AL               ; 0053bd09
    CMP AL,0x0                          ; 0053bd0b
    JZ 0x0053bd1f                       ; 0053bd0d
        ;   XREF to: 0053bd1f (CONDITIONAL_JUMP)  ; LAB_0053bd1f
    MOV AL,byte ptr [ESI + 0x1]         ; 0053bd0f
    ADD ESI,0x2                         ; 0053bd12
    MOV byte ptr [EDI + 0x1],AL         ; 0053bd15
    ADD EDI,0x2                         ; 0053bd18
    CMP AL,0x0                          ; 0053bd1b
    JNZ 0x0053bd07                      ; 0053bd1d
        ;   XREF to: 0053bd07 (CONDITIONAL_JUMP)  ; LAB_0053bd07
    POP EDI                             ; 0053bd1f
        ;   Label: LAB_0053bd1f
    MOV EDX,dword ptr [ESP + 0x8b8]     ; 0053bd20
    MOV EAX,dword ptr [EBX + 0x414]     ; 0053bd27
    ADD EDX,EAX                         ; 0053bd2d
    MOV EAX,dword ptr [ESP + 0x894]     ; 0053bd2f
    MOV dword ptr [EDX + 0x4],EAX       ; 0053bd36
    MOV ECX,dword ptr [ESP + 0x8b8]     ; 0053bd39
    MOV EDX,dword ptr [EBX + 0x414]     ; 0053bd40
    ADD EDX,ECX                         ; 0053bd46
    MOV EAX,dword ptr [ESP + 0x898]     ; 0053bd48
    MOV dword ptr [EDX + 0x8],EAX       ; 0053bd4f
    MOV EAX,dword ptr [EBX + 0x414]     ; 0053bd52
    ADD EAX,ECX                         ; 0053bd58
    MOV dword ptr [EAX + 0x10],0x0      ; 0053bd5a
    MOV EAX,dword ptr [EBX + 0x414]     ; 0053bd61
    LEA EDX,[ECX + EAX*0x1]             ; 0053bd67
    MOV EAX,dword ptr [EBX + 0x104]     ; 0053bd6a
    LEA EDI,[ECX + 0x14]                ; 0053bd70
    MOV dword ptr [EDX + 0xc],EAX       ; 0053bd73
    MOV EAX,dword ptr [ESP + 0x8b4]     ; 0053bd76
    MOV dword ptr [ESP + 0x8b8],EDI     ; 0053bd7d
    INC EAX                             ; 0053bd84
    MOV EDX,dword ptr [EBX + 0x410]     ; 0053bd85
    MOV dword ptr [ESP + 0x8b4],EAX     ; 0053bd8b
    CMP EAX,EDX                         ; 0053bd92
    JL 0x0053bc4b                       ; 0053bd94
        ;   XREF to: 0053bc4b (CONDITIONAL_JUMP)  ; LAB_0053bc4b
    CMP EBP,dword ptr [ESP + 0x8a8]     ; 0053bd9a
        ;   Label: LAB_0053bd9a
    JMP 0x0053b650                      ; 0053bda1
        ;   XREF to: 0053b650 (UNCONDITIONAL_JUMP)  ; LAB_0053b650
    MOV ESI,dword ptr [ESP + 0x8b4]     ; 0053bda6
        ;   Label: LAB_0053bda6
    MOV EAX,dword ptr [EBX + 0x410]     ; 0053bdad
    SUB EAX,ESI                         ; 0053bdb3
    IMUL EAX,EAX,0x30                   ; 0053bdb5
    LEA EDX,[EAX + EBP*0x1]             ; 0053bdb8
    PUSH EDX                            ; 0053bdbb
    MOV EAX,dword ptr [EBX + 0x418]     ; 0053bdbc
    PUSH EAX                            ; 0053bdc2
    MOV dword ptr [ESP + 0x8b0],EDX     ; 0053bdc3
    CALL FUN_005c10d0                   ; 0053bdca
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c10d0()
    ADD ESP,0x8                         ; 0053bdcf
    TEST EAX,EAX                        ; 0053bdd2
    JZ 0x0053b733                       ; 0053bdd4
        ;   XREF to: 0053b733 (CONDITIONAL_JUMP)  ; LAB_0053b733
    MOV dword ptr [EBX + 0x418],EAX     ; 0053bdda
    JMP 0x0053bca0                      ; 0053bde0
        ;   XREF to: 0053bca0 (UNCONDITIONAL_JUMP)  ; LAB_0053bca0
    PUSH EBP                            ; 0053bde5
        ;   Label: LAB_0053bde5
    MOV ECX,dword ptr [EBX + 0x418]     ; 0053bde6
    PUSH ECX                            ; 0053bdec
    CALL FUN_005c10d0                   ; 0053bded
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c10d0()
    ADD ESP,0x8                         ; 0053bdf2
    MOV dword ptr [EBX + 0x418],EAX     ; 0053bdf5
    TEST EAX,EAX                        ; 0053bdfb
    JNZ 0x0053b693                      ; 0053bdfd
        ;   XREF to: 0053b693 (CONDITIONAL_JUMP)  ; LAB_0053b693
    MOV EDI,0x5ed6de                    ; 0053be03 | = "..\\engine\\pod.cpp"
    MOV EAX,0x2d5                       ; 0053be08
    PUSH 0x5ed6f0                       ; 0053be0d | = "realloc returns NULL shrinking filena..."
    MOV dword ptr [0x01d1d400],EDI      ; 0053be12 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0053be18 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0053be1d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0053be22
    JMP 0x0053b693                      ; 0053be25
        ;   XREF to: 0053b693 (UNCONDITIONAL_JUMP)  ; LAB_0053b693

