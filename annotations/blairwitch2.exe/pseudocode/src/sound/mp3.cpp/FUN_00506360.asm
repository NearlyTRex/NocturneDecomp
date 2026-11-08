; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00506360(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)
;
; Local Variables:
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0050a280 at 0050a830
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005e0063
;   TerminatedCString s_Side_info_bad_block_type_005e0074
;   TerminatedCString s_sound_mp3_cpp_005e00ad
;   TerminatedCString s_Side_info_bad_block_type_005e00be
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d23558
;
; Called Functions:
;   FUN_004e4500
;   FUN_00504a10
;   FUN_00504b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506360
        ;   Label: FUN_00506360
    PUSH ESI                            ; 00506361
    PUSH EDI                            ; 00506362
    PUSH EBP                            ; 00506363
    SUB ESP,0x4c                        ; 00506364
    MOV EBX,dword ptr [ESP + 0x64]      ; 00506367
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0050636b
    MOV EDX,dword ptr [EAX + 0x10]      ; 0050636f
    MOV EAX,dword ptr [EAX]             ; 00506372
    MOV dword ptr [ESP + 0x10],EDX      ; 00506374
    CMP dword ptr [EAX],0x0             ; 00506378
    JZ 0x00506673                       ; 0050637b
        ;   XREF to: 00506673 (CONDITIONAL_JUMP)  ; LAB_00506673
    PUSH 0x9                            ; 00506381
    PUSH EBX                            ; 00506383
    CALL FUN_00504b00                   ; 00506384
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 00506389
    MOV EDX,dword ptr [ESP + 0x68]      ; 0050638c
    MOV ESI,dword ptr [ESP + 0x10]      ; 00506390
    MOV dword ptr [EDX],EAX             ; 00506394
    CMP ESI,0x1                         ; 00506396
    JNZ 0x005065fc                      ; 00506399
        ;   XREF to: 005065fc (CONDITIONAL_JUMP)  ; LAB_005065fc
    PUSH 0x5                            ; 0050639f
    PUSH EBX                            ; 005063a1
        ;   Label: LAB_005063a1
    CALL FUN_00504b00                   ; 005063a2
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 005063a7
    MOV EDX,dword ptr [ESP + 0x68]      ; 005063aa
    MOV dword ptr [EDX + 0x4],EAX       ; 005063ae
    MOV EDI,dword ptr [ESP + 0x10]      ; 005063b1
    XOR EBP,EBP                         ; 005063b5
    TEST EDI,EDI                        ; 005063b7
    JLE 0x005063fb                      ; 005063b9
        ;   XREF to: 005063fb (CONDITIONAL_JUMP)  ; LAB_005063fb
    MOV EAX,dword ptr [ESP + 0x68]      ; 005063bb
    ADD EAX,0x10                        ; 005063bf
    MOV dword ptr [ESP],EAX             ; 005063c2
    IMUL EAX,EBP,0xa0                   ; 005063c5
        ;   Label: LAB_005063c5
    MOV ESI,dword ptr [ESP + 0x68]      ; 005063cb
    MOV EDI,dword ptr [ESP]             ; 005063cf
    ADD ESI,EAX                         ; 005063d2
    PUSH EBX                            ; 005063d4
        ;   Label: LAB_005063d4
    ADD ESI,0x4                         ; 005063d5
    CALL FUN_00504a10                   ; 005063d8
        ;   XREF to: 00504a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00504a10()
    ADD ESP,0x4                         ; 005063dd
    MOV dword ptr [ESI + 0x4],EAX       ; 005063e0
    CMP ESI,EDI                         ; 005063e3
    JNZ 0x005063d4                      ; 005063e5
        ;   XREF to: 005063d4 (CONDITIONAL_JUMP)  ; LAB_005063d4
    MOV EAX,dword ptr [ESP]             ; 005063e7
    MOV EDX,dword ptr [ESP + 0x10]      ; 005063ea
    ADD EAX,0xa0                        ; 005063ee
    INC EBP                             ; 005063f3
    MOV dword ptr [ESP],EAX             ; 005063f4
    CMP EBP,EDX                         ; 005063f7
    JL 0x005063c5                       ; 005063f9
        ;   XREF to: 005063c5 (CONDITIONAL_JUMP)  ; LAB_005063c5
    XOR ECX,ECX                         ; 005063fb
        ;   Label: LAB_005063fb
    MOV dword ptr [ESP + 0x4],ECX       ; 005063fd
    XOR ESI,ESI                         ; 00506401
        ;   Label: LAB_00506401
    MOV EDI,dword ptr [ESP + 0x10]      ; 00506403
    MOV dword ptr [ESP + 0x28],ESI      ; 00506407
    TEST EDI,EDI                        ; 0050640b
    JLE 0x005065dd                      ; 0050640d
        ;   XREF to: 005065dd (CONDITIONAL_JUMP)  ; LAB_005065dd
    MOV EAX,dword ptr [ESP + 0x4]       ; 00506413
    MOV EDX,dword ptr [ESP + 0x68]      ; 00506417
    MOV dword ptr [ESP + 0xc],EAX       ; 0050641b
    MOV dword ptr [ESP + 0x40],EAX      ; 0050641f
    MOV dword ptr [ESP + 0x44],EAX      ; 00506423
    ADD EAX,EDX                         ; 00506427
    MOV dword ptr [ESP + 0x38],EAX      ; 00506429
    MOV dword ptr [ESP + 0x18],EAX      ; 0050642d
    MOV dword ptr [ESP + 0x1c],EAX      ; 00506431
    MOV dword ptr [ESP + 0x30],EAX      ; 00506435
    PUSH 0xc                            ; 00506439
        ;   Label: LAB_00506439
    PUSH EBX                            ; 0050643b
    CALL FUN_00504b00                   ; 0050643c
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 00506441
    IMUL EBP,dword ptr [ESP + 0x28],0xa0 ; 00506444
    PUSH 0x9                            ; 0050644c
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0050644e
    PUSH EBX                            ; 00506452
    MOV ESI,dword ptr [ESP + 0x70]      ; 00506453
    MOV dword ptr [EDX + 0x18],EAX      ; 00506457
    CALL FUN_00504b00                   ; 0050645a
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 0050645f
    PUSH 0x8                            ; 00506462
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00506464
    PUSH EBX                            ; 00506468
    MOV dword ptr [EDX + 0x1c],EAX      ; 00506469
    CALL FUN_00504b00                   ; 0050646c
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 00506471
    PUSH 0x4                            ; 00506474
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00506476
    PUSH EBX                            ; 0050647a
    MOV dword ptr [EDX + 0x20],EAX      ; 0050647b
    CALL FUN_00504b00                   ; 0050647e
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 00506483
    MOV EDX,dword ptr [ESP + 0x38]      ; 00506486
    PUSH EBX                            ; 0050648a
    MOV dword ptr [EDX + 0x24],EAX      ; 0050648b
    CALL FUN_00504a10                   ; 0050648e
        ;   XREF to: 00504a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00504a10()
    ADD ESP,0x4                         ; 00506493
    MOV EDX,dword ptr [ESP + 0x38]      ; 00506496
    ADD EBP,ESI                         ; 0050649a
    MOV dword ptr [EDX + 0x28],EAX      ; 0050649c
    TEST EAX,EAX                        ; 0050649f
    JZ 0x0050662a                       ; 005064a1
        ;   XREF to: 0050662a (CONDITIONAL_JUMP)  ; LAB_0050662a
    PUSH 0x2                            ; 005064a7
    PUSH EBX                            ; 005064a9
    CALL FUN_00504b00                   ; 005064aa
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 005064af
    MOV EDX,dword ptr [ESP + 0x38]      ; 005064b2
    PUSH EBX                            ; 005064b6
    MOV dword ptr [EDX + 0x2c],EAX      ; 005064b7
    CALL FUN_00504a10                   ; 005064ba
        ;   XREF to: 00504a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00504a10()
    ADD ESP,0x4                         ; 005064bf
    MOV EDI,dword ptr [ESP + 0xc]       ; 005064c2
    MOV EDX,dword ptr [ESP + 0x38]      ; 005064c6
    ADD EDI,EBP                         ; 005064ca
    MOV dword ptr [EDX + 0x30],EAX      ; 005064cc
    MOV ESI,EDI                         ; 005064cf
    ADD EDI,0x8                         ; 005064d1
    PUSH 0x5                            ; 005064d4
        ;   Label: LAB_005064d4
    PUSH EBX                            ; 005064d6
    ADD ESI,0x4                         ; 005064d7
    CALL FUN_00504b00                   ; 005064da
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 005064df
    MOV dword ptr [ESI + 0x30],EAX      ; 005064e2
    CMP ESI,EDI                         ; 005064e5
    JNZ 0x005064d4                      ; 005064e7
        ;   XREF to: 005064d4 (CONDITIONAL_JUMP)  ; LAB_005064d4
    IMUL EBP,dword ptr [ESP + 0x28],0xa0 ; 005064e9
    MOV EDX,dword ptr [ESP + 0x68]      ; 005064f1
    XOR ESI,EDI                         ; 005064f5
    ADD EBP,EDX                         ; 005064f7
    PUSH 0x3                            ; 005064f9
        ;   Label: LAB_005064f9
    PUSH EBX                            ; 005064fb
    CALL FUN_00504b00                   ; 005064fc
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 00506501
    MOV EDX,dword ptr [ESP + 0x44]      ; 00506504
    ADD EDX,EBP                         ; 00506508
    LEA EDI,[EDX + ESI*0x1]             ; 0050650a
    ADD ESI,0x4                         ; 0050650d
    MOV dword ptr [EDI + 0x40],EAX      ; 00506510
    CMP ESI,0xc                         ; 00506513
    JNZ 0x005064f9                      ; 00506516
        ;   XREF to: 005064f9 (CONDITIONAL_JUMP)  ; LAB_005064f9
    MOV ECX,dword ptr [EDX + 0x2c]      ; 00506518
    TEST ECX,ECX                        ; 0050651b
    JNZ 0x00506603                      ; 0050651d
        ;   XREF to: 00506603 (CONDITIONAL_JUMP)  ; LAB_00506603
    PUSH 0x1d23558                      ; 00506523 | DAT_01d23558
    MOV EBP,0x5e0063                    ; 00506528 | = "..\\sound\\mp3.cpp"
    MOV EAX,0x6d5                       ; 0050652d
    PUSH 0x5e0074                       ; 00506532 | = "Side info bad: block_type == 0 in spl..."
    MOV dword ptr [0x01d046a0],EBP      ; 00506537 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0050653d | DAT_01d046a4
    CALL FUN_004e4500                   ; 00506542
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 00506547
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050654a
        ;   Label: LAB_0050654a
    MOV EDX,0x14                        ; 0050654e
    MOV ECX,dword ptr [EAX + 0x4c]      ; 00506553
    MOV EAX,EDX                         ; 00506556
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00506558
    SUB EAX,ECX                         ; 0050655c
    MOV dword ptr [EDX + 0x50],EAX      ; 0050655e
    PUSH EBX                            ; 00506561
        ;   Label: LAB_00506561
    CALL FUN_00504a10                   ; 00506562
        ;   XREF to: 00504a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00504a10()
    ADD ESP,0x4                         ; 00506567
    MOV EDX,dword ptr [ESP + 0x30]      ; 0050656a
    PUSH EBX                            ; 0050656e
    MOV dword ptr [EDX + 0x54],EAX      ; 0050656f
    CALL FUN_00504a10                   ; 00506572
        ;   XREF to: 00504a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00504a10()
    ADD ESP,0x4                         ; 00506577
    MOV EDX,dword ptr [ESP + 0x30]      ; 0050657a
    PUSH EBX                            ; 0050657e
    MOV dword ptr [EDX + 0x58],EAX      ; 0050657f
    CALL FUN_00504a10                   ; 00506582
        ;   XREF to: 00504a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00504a10()
    ADD ESP,0x4                         ; 00506587
    MOV EDX,dword ptr [ESP + 0x30]      ; 0050658a
    MOV EBP,dword ptr [ESP + 0x38]      ; 0050658e
    MOV ECX,dword ptr [ESP + 0x30]      ; 00506592
    MOV ESI,dword ptr [ESP + 0x28]      ; 00506596
    MOV EDI,dword ptr [ESP + 0x10]      ; 0050659a
    ADD EBP,0xa0                        ; 0050659e
    ADD ECX,0xa0                        ; 005065a4
    INC ESI                             ; 005065aa
    MOV dword ptr [EDX + 0x5c],EAX      ; 005065ab
    MOV EAX,dword ptr [ESP + 0x18]      ; 005065ae
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005065b2
    MOV dword ptr [ESP + 0x38],EBP      ; 005065b6
    MOV dword ptr [ESP + 0x30],ECX      ; 005065ba
    MOV dword ptr [ESP + 0x28],ESI      ; 005065be
    ADD EAX,0xa0                        ; 005065c2
    ADD EDX,0xa0                        ; 005065c7
    MOV dword ptr [ESP + 0x18],EAX      ; 005065cd
    MOV dword ptr [ESP + 0x1c],EDX      ; 005065d1
    CMP ESI,EDI                         ; 005065d5
    JL 0x00506439                       ; 005065d7
        ;   XREF to: 00506439 (CONDITIONAL_JUMP)  ; LAB_00506439
    MOV EBP,dword ptr [ESP + 0x4]       ; 005065dd
        ;   Label: LAB_005065dd
    ADD EBP,0x48                        ; 005065e1
    MOV dword ptr [ESP + 0x4],EBP       ; 005065e4
    CMP EBP,0x90                        ; 005065e8
    JNZ 0x00506401                      ; 005065ee
        ;   XREF to: 00506401 (CONDITIONAL_JUMP)  ; LAB_00506401
    ADD ESP,0x4c                        ; 005065f4
        ;   Label: LAB_005065f4
    POP EBP                             ; 005065f7
    POP EDI                             ; 005065f8
    POP ESI                             ; 005065f9
    POP EBX                             ; 005065fa
    RET                                 ; 005065fb
    PUSH 0x3                            ; 005065fc
        ;   Label: LAB_005065fc
    JMP 0x005063a1                      ; 005065fe
        ;   XREF to: 005063a1 (UNCONDITIONAL_JUMP)  ; LAB_005063a1
    CMP ECX,0x2                         ; 00506603
        ;   Label: LAB_00506603
    JNZ 0x0050661a                      ; 00506606
        ;   XREF to: 0050661a (CONDITIONAL_JUMP)  ; LAB_0050661a
    CMP dword ptr [EDX + 0x30],0x0      ; 00506608
    JNZ 0x0050661a                      ; 0050660c
        ;   XREF to: 0050661a (CONDITIONAL_JUMP)  ; LAB_0050661a
    MOV dword ptr [EDX + 0x4c],0x8      ; 0050660e
    JMP 0x0050654a                      ; 00506615
        ;   XREF to: 0050654a (UNCONDITIONAL_JUMP)  ; LAB_0050654a
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050661a
        ;   Label: LAB_0050661a
    MOV dword ptr [EAX + 0x4c],0x7      ; 0050661e
    JMP 0x0050654a                      ; 00506625
        ;   XREF to: 0050654a (UNCONDITIONAL_JUMP)  ; LAB_0050654a
    XOR ESI,ESI                         ; 0050662a
        ;   Label: LAB_0050662a
    PUSH 0x5                            ; 0050662c
        ;   Label: LAB_0050662c
    PUSH EBX                            ; 0050662e
    CALL FUN_00504b00                   ; 0050662f
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 00506634
    MOV EDI,dword ptr [ESP + 0x40]      ; 00506637
    ADD EDI,EBP                         ; 0050663b
    LEA EDX,[EDI + ESI*0x1]             ; 0050663d
    ADD ESI,0x4                         ; 00506640
    MOV dword ptr [EDX + 0x34],EAX      ; 00506643
    CMP ESI,0xc                         ; 00506646
    JNZ 0x0050662c                      ; 00506649
        ;   XREF to: 0050662c (CONDITIONAL_JUMP)  ; LAB_0050662c
    PUSH 0x4                            ; 0050664b
    PUSH EBX                            ; 0050664d
    CALL FUN_00504b00                   ; 0050664e
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 00506653
    PUSH 0x3                            ; 00506656
    PUSH EBX                            ; 00506658
    MOV dword ptr [EDI + 0x4c],EAX      ; 00506659
    CALL FUN_00504b00                   ; 0050665c
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    MOV dword ptr [EDI + 0x2c],0x0      ; 00506661
    ADD ESP,0x8                         ; 00506668
    MOV dword ptr [EDI + 0x50],EAX      ; 0050666b
    JMP 0x00506561                      ; 0050666e
        ;   XREF to: 00506561 (UNCONDITIONAL_JUMP)  ; LAB_00506561
    PUSH 0x8                            ; 00506673
        ;   Label: LAB_00506673
    PUSH EBX                            ; 00506675
    CALL FUN_00504b00                   ; 00506676
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 0050667b
    MOV EDX,dword ptr [ESP + 0x68]      ; 0050667e
    MOV ECX,dword ptr [ESP + 0x10]      ; 00506682
    MOV dword ptr [EDX],EAX             ; 00506686
    CMP ECX,0x1                         ; 00506688
    JNZ 0x005067f7                      ; 0050668b
        ;   XREF to: 005067f7 (CONDITIONAL_JUMP)  ; LAB_005067f7
    PUSH ECX                            ; 00506691
    PUSH EBX                            ; 00506692
        ;   Label: LAB_00506692
    CALL FUN_00504b00                   ; 00506693
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 00506698
    MOV EDX,dword ptr [ESP + 0x68]      ; 0050669b
    MOV dword ptr [EDX + 0x4],EAX       ; 0050669f
    XOR ESI,ESI                         ; 005066a2
    MOV EDI,dword ptr [ESP + 0x10]      ; 005066a4
    MOV dword ptr [ESP + 0x2c],ESI      ; 005066a8
    TEST EDI,EDI                        ; 005066ac
    JLE 0x005065f4                      ; 005066ae
        ;   XREF to: 005065f4 (CONDITIONAL_JUMP)  ; LAB_005065f4
    MOV EAX,dword ptr [ESP + 0x68]      ; 005066b4
    MOV dword ptr [ESP + 0x8],ESI       ; 005066b8
    MOV dword ptr [ESP + 0x48],ESI      ; 005066bc
    MOV dword ptr [ESP + 0x3c],ESI      ; 005066c0
    MOV dword ptr [ESP + 0x34],EAX      ; 005066c4
    MOV dword ptr [ESP + 0x14],EAX      ; 005066c8
    MOV dword ptr [ESP + 0x20],EAX      ; 005066cc
    MOV dword ptr [ESP + 0x24],EAX      ; 005066d0
    PUSH 0xc                            ; 005066d4
        ;   Label: LAB_005066d4
    PUSH EBX                            ; 005066d6
    CALL FUN_00504b00                   ; 005066d7
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 005066dc
    IMUL EBP,dword ptr [ESP + 0x2c],0xa0 ; 005066df
    PUSH 0x9                            ; 005066e7
    MOV EDX,dword ptr [ESP + 0x38]      ; 005066e9
    PUSH EBX                            ; 005066ed
    MOV ESI,dword ptr [ESP + 0x70]      ; 005066ee
    MOV dword ptr [EDX + 0x18],EAX      ; 005066f2
    CALL FUN_00504b00                   ; 005066f5
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 005066fa
    PUSH 0x8                            ; 005066fd
    MOV EDX,dword ptr [ESP + 0x38]      ; 005066ff
    PUSH EBX                            ; 00506703
    MOV dword ptr [EDX + 0x1c],EAX      ; 00506704
    CALL FUN_00504b00                   ; 00506707
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 0050670c
    PUSH 0x9                            ; 0050670f
    MOV EDX,dword ptr [ESP + 0x38]      ; 00506711
    PUSH EBX                            ; 00506715
    MOV dword ptr [EDX + 0x20],EAX      ; 00506716
    CALL FUN_00504b00                   ; 00506719
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 0050671e
    MOV EDX,dword ptr [ESP + 0x34]      ; 00506721
    PUSH EBX                            ; 00506725
    MOV dword ptr [EDX + 0x24],EAX      ; 00506726
    CALL FUN_00504a10                   ; 00506729
        ;   XREF to: 00504a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00504a10()
    ADD ESP,0x4                         ; 0050672e
    MOV EDX,dword ptr [ESP + 0x34]      ; 00506731
    ADD EBP,ESI                         ; 00506735
    MOV dword ptr [EDX + 0x28],EAX      ; 00506737
    TEST EAX,EAX                        ; 0050673a
    JNZ 0x005067fe                      ; 0050673c
        ;   XREF to: 005067fe (CONDITIONAL_JUMP)  ; LAB_005067fe
    XOR ESI,ESI                         ; 00506742
    PUSH 0x5                            ; 00506744
        ;   Label: LAB_00506744
    PUSH EBX                            ; 00506746
    CALL FUN_00504b00                   ; 00506747
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 0050674c
    MOV EDI,dword ptr [ESP + 0x48]      ; 0050674f
    ADD EDI,EBP                         ; 00506753
    LEA EDX,[EDI + ESI*0x1]             ; 00506755
    ADD ESI,0x4                         ; 00506758
    MOV dword ptr [EDX + 0x34],EAX      ; 0050675b
    CMP ESI,0xc                         ; 0050675e
    JNZ 0x00506744                      ; 00506761
        ;   XREF to: 00506744 (CONDITIONAL_JUMP)  ; LAB_00506744
    PUSH 0x4                            ; 00506763
    PUSH EBX                            ; 00506765
    CALL FUN_00504b00                   ; 00506766
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 0050676b
    PUSH 0x3                            ; 0050676e
    PUSH EBX                            ; 00506770
    MOV dword ptr [EDI + 0x4c],EAX      ; 00506771
    CALL FUN_00504b00                   ; 00506774
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    MOV dword ptr [EDI + 0x2c],0x0      ; 00506779
    ADD ESP,0x8                         ; 00506780
    MOV dword ptr [EDI + 0x50],EAX      ; 00506783
    PUSH EBX                            ; 00506786
        ;   Label: LAB_00506786
    CALL FUN_00504a10                   ; 00506787
        ;   XREF to: 00504a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00504a10()
    ADD ESP,0x4                         ; 0050678c
    MOV EDX,dword ptr [ESP + 0x24]      ; 0050678f
    PUSH EBX                            ; 00506793
    MOV dword ptr [EDX + 0x58],EAX      ; 00506794
    CALL FUN_00504a10                   ; 00506797
        ;   XREF to: 00504a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00504a10()
    ADD ESP,0x4                         ; 0050679c
    MOV EDX,dword ptr [ESP + 0x24]      ; 0050679f
    MOV EBP,dword ptr [ESP + 0x34]      ; 005067a3
    MOV ECX,dword ptr [ESP + 0x24]      ; 005067a7
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005067ab
    MOV EDI,dword ptr [ESP + 0x10]      ; 005067af
    ADD EBP,0xa0                        ; 005067b3
    ADD ECX,0xa0                        ; 005067b9
    INC ESI                             ; 005067bf
    MOV dword ptr [EDX + 0x5c],EAX      ; 005067c0
    MOV EAX,dword ptr [ESP + 0x14]      ; 005067c3
    MOV EDX,dword ptr [ESP + 0x20]      ; 005067c7
    MOV dword ptr [ESP + 0x34],EBP      ; 005067cb
    MOV dword ptr [ESP + 0x24],ECX      ; 005067cf
    MOV dword ptr [ESP + 0x2c],ESI      ; 005067d3
    ADD EAX,0xa0                        ; 005067d7
    ADD EDX,0xa0                        ; 005067dc
    MOV dword ptr [ESP + 0x14],EAX      ; 005067e2
    MOV dword ptr [ESP + 0x20],EDX      ; 005067e6
    CMP ESI,EDI                         ; 005067ea
    JGE 0x005065f4                      ; 005067ec
        ;   XREF to: 005065f4 (CONDITIONAL_JUMP)  ; LAB_005065f4
    JMP 0x005066d4                      ; 005067f2
        ;   XREF to: 005066d4 (UNCONDITIONAL_JUMP)  ; LAB_005066d4
    PUSH 0x2                            ; 005067f7
        ;   Label: LAB_005067f7
    JMP 0x00506692                      ; 005067f9
        ;   XREF to: 00506692 (UNCONDITIONAL_JUMP)  ; LAB_00506692
    PUSH 0x2                            ; 005067fe
        ;   Label: LAB_005067fe
    PUSH EBX                            ; 00506800
    CALL FUN_00504b00                   ; 00506801
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 00506806
    MOV EDX,dword ptr [ESP + 0x34]      ; 00506809
    PUSH EBX                            ; 0050680d
    MOV dword ptr [EDX + 0x2c],EAX      ; 0050680e
    CALL FUN_00504a10                   ; 00506811
        ;   XREF to: 00504a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00504a10()
    ADD ESP,0x4                         ; 00506816
    MOV EDI,dword ptr [ESP + 0x8]       ; 00506819
    MOV EDX,dword ptr [ESP + 0x34]      ; 0050681d
    ADD EDI,EBP                         ; 00506821
    MOV dword ptr [EDX + 0x30],EAX      ; 00506823
    MOV ESI,EDI                         ; 00506826
    ADD EDI,0x8                         ; 00506828
    PUSH 0x5                            ; 0050682b
        ;   Label: LAB_0050682b
    PUSH EBX                            ; 0050682d
    ADD ESI,0x4                         ; 0050682e
    CALL FUN_00504b00                   ; 00506831
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 00506836
    MOV dword ptr [ESI + 0x30],EAX      ; 00506839
    CMP ESI,EDI                         ; 0050683c
    JNZ 0x0050682b                      ; 0050683e
        ;   XREF to: 0050682b (CONDITIONAL_JUMP)  ; LAB_0050682b
    IMUL EBP,dword ptr [ESP + 0x2c],0xa0 ; 00506840
    MOV EDX,dword ptr [ESP + 0x68]      ; 00506848
    XOR ESI,EDI                         ; 0050684c
    ADD EBP,EDX                         ; 0050684e
    PUSH 0x3                            ; 00506850
        ;   Label: LAB_00506850
    PUSH EBX                            ; 00506852
    CALL FUN_00504b00                   ; 00506853
        ;   XREF to: 00504b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00504b00()
    ADD ESP,0x8                         ; 00506858
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0050685b
    ADD EDX,EBP                         ; 0050685f
    LEA EDI,[EDX + ESI*0x1]             ; 00506861
    ADD ESI,0x4                         ; 00506864
    MOV dword ptr [EDI + 0x40],EAX      ; 00506867
    CMP ESI,0xc                         ; 0050686a
    JNZ 0x00506850                      ; 0050686d
        ;   XREF to: 00506850 (CONDITIONAL_JUMP)  ; LAB_00506850
    MOV ECX,dword ptr [EDX + 0x2c]      ; 0050686f
    TEST ECX,ECX                        ; 00506872
    JNZ 0x005068b9                      ; 00506874
        ;   XREF to: 005068b9 (CONDITIONAL_JUMP)  ; LAB_005068b9
    PUSH 0x1d23558                      ; 00506876 | DAT_01d23558
    MOV EBP,0x5e00ad                    ; 0050687b | = "..\\sound\\mp3.cpp"
    MOV EAX,0x704                       ; 00506880
    PUSH 0x5e00be                       ; 00506885 | = "Side info bad: block_type == 0 in spl..."
    MOV dword ptr [0x01d046a0],EBP      ; 0050688a | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00506890 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00506895
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 0050689a
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050689d
        ;   Label: LAB_0050689d
    MOV EDX,0x14                        ; 005068a1
    MOV ECX,dword ptr [EAX + 0x4c]      ; 005068a6
    MOV EAX,EDX                         ; 005068a9
    MOV EDX,dword ptr [ESP + 0x20]      ; 005068ab
    SUB EAX,ECX                         ; 005068af
    MOV dword ptr [EDX + 0x50],EAX      ; 005068b1
    JMP 0x00506786                      ; 005068b4
        ;   XREF to: 00506786 (UNCONDITIONAL_JUMP)  ; LAB_00506786
    CMP ECX,0x2                         ; 005068b9
        ;   Label: LAB_005068b9
    JNZ 0x005068cd                      ; 005068bc
        ;   XREF to: 005068cd (CONDITIONAL_JUMP)  ; LAB_005068cd
    CMP dword ptr [EDX + 0x30],0x0      ; 005068be
    JNZ 0x005068cd                      ; 005068c2
        ;   XREF to: 005068cd (CONDITIONAL_JUMP)  ; LAB_005068cd
    MOV dword ptr [EDX + 0x4c],0x8      ; 005068c4
    JMP 0x0050689d                      ; 005068cb
        ;   XREF to: 0050689d (UNCONDITIONAL_JUMP)  ; LAB_0050689d
    MOV EAX,dword ptr [ESP + 0x14]      ; 005068cd
        ;   Label: LAB_005068cd
    MOV dword ptr [EAX + 0x4c],0x7      ; 005068d1
    JMP 0x0050689d                      ; 005068d8
        ;   XREF to: 0050689d (UNCONDITIONAL_JUMP)  ; LAB_0050689d

