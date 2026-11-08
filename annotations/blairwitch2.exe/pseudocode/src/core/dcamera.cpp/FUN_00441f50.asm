; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00441f50(int param_1)
;
; Local Variables:
; undefined        Stack[-0x20c]:1  local_20c
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0xa8]:1  local_a8
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined        Stack[-0x5c]:1  local_5c
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
;   FUN_0043d870 at 0043dab7
;
; Referenced Globals:
;   TerminatedCString s_s_fog_005ce646
;   undefined4 DAT_005ce64d
;   TerminatedCString s_backdrop_005ce650
;   TerminatedCString s_backdrop_s_005ce659
;   undefined4 DAT_005ce665
;   TerminatedCString s_core_dcamera_cpp_005ce668
;   TerminatedCString s_Can_t_create_s_005ce67c
;   TerminatedCString s_core_dcamera_cpp_005ce68c
;   TerminatedCString s_Error_compressing_s_005ce6a0
;   TerminatedCString s_core_dcamera_cpp_005ce6b5
;   TerminatedCString s_Not_all_bytes_consumed_c_005ce6c9
;   TerminatedCString s_core_dcamera_cpp_005ce6ef
;   TerminatedCString s_Error_writing_compressed_005ce703
;   undefined4 DAT_005ce726
;   undefined4 DAT_0060a00c
;   ... and 20 more
;
; Called Functions:
;   FUN_00433e90
;   FUN_00433ff0
;   FUN_00434270
;   FUN_00434770
;   FUN_004347c0
;   FUN_00434910
;   FUN_0043af40
;   FUN_0043b1a0
;   FUN_0043b380
;   FUN_004425d0
;   FUN_00460c70
;   FUN_004e4500
;   FUN_0057dba0
;   FUN_0057dc10
;   FUN_0057dca0
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441f50
        ;   Label: FUN_00441f50
    PUSH ESI                            ; 00441f51
    PUSH EDI                            ; 00441f52
    PUSH EBP                            ; 00441f53
    SUB ESP,0x1fc                       ; 00441f54
    MOV EDX,0x1                         ; 00441f5a
    PUSH 0x146592c                      ; 00441f5f
    MOV ESI,0x10                        ; 00441f64
    XOR ECX,ECX                         ; 00441f69
    MOV dword ptr [0x013083cc],EDX      ; 00441f6b | DAT_013083cc
    MOV dword ptr [0x01465920],ECX      ; 00441f71 | DAT_01465920
    MOV dword ptr [0x01465924],ECX      ; 00441f77 | DAT_01465924
    CALL FUN_0043af40                   ; 00441f7d
        ;   XREF to: 0043af40 (UNCONDITIONAL_CALL)  ; undefined FUN_0043af40()
    MOV EAX,[0x01466938]                ; 00441f82 | DAT_01466938
    MOV EDI,dword ptr [0x0146693c]      ; 00441f87 | DAT_0146693c
    MOV EBP,dword ptr [0x01466940]      ; 00441f8d | DAT_01466940
    ADD ESP,0x4                         ; 00441f93
    OR EAX,EDI                          ; 00441f96
    MOV dword ptr [0x01465928],ESI      ; 00441f98 | DAT_01465928
    OR EAX,EBP                          ; 00441f9e
    JNZ 0x00441fac                      ; 00441fa0
        ;   XREF to: 00441fac (CONDITIONAL_JUMP)  ; LAB_00441fac
    MOV dword ptr [0x01465928],0x1      ; 00441fa2 | DAT_01465928
    MOV EAX,dword ptr [ESP + 0x210]     ; 00441fac
        ;   Label: LAB_00441fac
    ADD EAX,0x40                        ; 00441fb3
    PUSH EAX                            ; 00441fb6
    PUSH 0x5ce646                       ; 00441fb7 | = "%s.fog"
    LEA EAX,[ESP + 0x8]                 ; 00441fbc
    PUSH EAX                            ; 00441fc0
    CALL FUN_005b7790                   ; 00441fc1
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 00441fc6
    PUSH 0x5ce64d                       ; 00441fc9 | DAT_005ce64d
    LEA EAX,[ESP + 0x4]                 ; 00441fce
    PUSH EAX                            ; 00441fd2
    PUSH 0x5ce650                       ; 00441fd3 | = "backdrop"
    CALL FUN_00460c70                   ; 00441fd8
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00460c70()
    ADD ESP,0xc                         ; 00441fdd
    TEST EAX,EAX                        ; 00441fe0
    JNZ 0x00442539                      ; 00441fe2
        ;   XREF to: 00442539 (CONDITIONAL_JUMP)  ; LAB_00442539
    MOV EAX,ESP                         ; 00441fe8
    PUSH EAX                            ; 00441fea
    PUSH 0x5ce659                       ; 00441feb | = "backdrop\\%s"
    LEA EAX,[ESP + 0x108]               ; 00441ff0
    PUSH EAX                            ; 00441ff7
    CALL FUN_005b7790                   ; 00441ff8
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 00441ffd
    PUSH 0x5ce665                       ; 00442000 | DAT_005ce665
    LEA EAX,[ESP + 0x104]               ; 00442005
    PUSH EAX                            ; 0044200c
    LEA EAX,[ESP + 0x1b8]               ; 0044200d
    PUSH EAX                            ; 00442014
    CALL FUN_0057dba0                   ; 00442015
        ;   XREF to: 0057dba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057dba0()
    ADD ESP,0xc                         ; 0044201a
    LEA EAX,[ESP + 0x1b0]               ; 0044201d
    PUSH EAX                            ; 00442024
    CALL FUN_0057dd40                   ; 00442025
        ;   XREF to: 0057dd40 (UNCONDITIONAL_CALL)  ; undefined FUN_0057dd40()
    ADD ESP,0x4                         ; 0044202a
    TEST EAX,EAX                        ; 0044202d
    JNZ 0x0044205c                      ; 0044202f
        ;   XREF to: 0044205c (CONDITIONAL_JUMP)  ; LAB_0044205c
    LEA EAX,[ESP + 0x100]               ; 00442031
    PUSH EAX                            ; 00442038
    MOV EDX,0x5ce668                    ; 00442039 | = "..\\core\\dcamera.cpp"
    MOV ECX,0x1325                      ; 0044203e
    PUSH 0x5ce67c                       ; 00442043 | = "Can't create %s"
    MOV dword ptr [0x01d046a0],EDX      ; 00442048 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0044204e | DAT_01d046a4
    CALL FUN_004e4500                   ; 00442054
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 00442059
    PUSH 0x1000                         ; 0044205c
        ;   Label: LAB_0044205c
    PUSH 0x146592c                      ; 00442061
    LEA EAX,[ESP + 0x1b8]               ; 00442066
    PUSH EAX                            ; 0044206d
    CALL FUN_0057dca0                   ; 0044206e
        ;   XREF to: 0057dca0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057dca0()
    MOV EBX,dword ptr [0x01466948]      ; 00442073 | DAT_01466948
    ADD ESP,0xc                         ; 00442079
    TEST EBX,EBX                        ; 0044207c
    JZ 0x0044254d                       ; 0044207e
        ;   XREF to: 0044254d (CONDITIONAL_JUMP)  ; LAB_0044254d
    MOV EAX,[0x0060a00c]                ; 00442084 | DAT_0060a00c
    PUSH 0x3                            ; 00442089
    MOV dword ptr [ESP + 0x1bc],EAX     ; 0044208b | LAB_00444645
    LEA EAX,[ESP + 0x1bc]               ; 00442092
    PUSH EAX                            ; 00442099
    LEA EAX,[ESP + 0x1b8]               ; 0044209a
    PUSH EAX                            ; 004420a1
    CALL FUN_0057dca0                   ; 004420a2
        ;   XREF to: 0057dca0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057dca0()
    ADD ESP,0xc                         ; 004420a7
    MOV EAX,dword ptr [ESP + 0x210]     ; 004420aa
    FLD double ptr [0x005ce726]         ; 004420b1 | DAT_005ce726
    FLD float ptr [EAX + 0x4]           ; 004420b7
    FMUL ST1                            ; 004420ba
    CALL FUN_005b7ff0                   ; 004420bc
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x1a4]       ; 004420c1
    FLD float ptr [EAX + 0x8]           ; 004420c8
    FMUL ST1                            ; 004420cb
    PUSH 0x6                            ; 004420cd
    CALL FUN_005b7ff0                   ; 004420cf
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x1ac]       ; 004420d4
    FMUL float ptr [EAX + 0xc]          ; 004420db
    PUSH 0x10000                        ; 004420de
    LEA EAX,[ESP + 0x16c]               ; 004420e3
    CALL FUN_005b7ff0                   ; 004420ea
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    PUSH EAX                            ; 004420ef
    FISTP dword ptr [ESP + 0x1b8]       ; 004420f0
    CALL FUN_00434770                   ; 004420f7
        ;   XREF to: 00434770 (UNCONDITIONAL_CALL)  ; undefined FUN_00434770()
    ADD ESP,0xc                         ; 004420fc
    LEA EAX,[ESP + 0x164]               ; 004420ff
    PUSH EAX                            ; 00442106
    XOR ESI,ESI                         ; 00442107
    CALL FUN_004347c0                   ; 00442109
        ;   XREF to: 004347c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004347c0()
    ADD ESP,0x4                         ; 0044210e
    MOV EDI,dword ptr [0x01465928]      ; 00442111 | DAT_01465928
    MOV dword ptr [ESP + 0x1f4],ESI     ; 00442117
    TEST EDI,EDI                        ; 0044211e
    JLE 0x004424e0                      ; 00442120
        ;   XREF to: 004424e0 (CONDITIONAL_JUMP)  ; LAB_004424e0
    MOV dword ptr [ESP + 0x1c4],ESI     ; 00442126
    MOV dword ptr [ESP + 0x1c0],0xfffed400 ; 0044212d
    PUSH 0x0                            ; 00442138
        ;   Label: LAB_00442138
    MOV EDI,dword ptr [ESP + 0x1f8]     ; 0044213a
    PUSH EDI                            ; 00442141
    PUSH 0x146592c                      ; 00442142
    CALL FUN_0043b380                   ; 00442147
        ;   XREF to: 0043b380 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b380()
    ADD ESP,0xc                         ; 0044214c
    MOV EAX,dword ptr [ESP + 0x210]     ; 0044214f
    MOV EBP,0x1                         ; 00442156
    MOV EDX,dword ptr [EAX + 0x154]     ; 0044215b
    MOV dword ptr [ESP + 0x1dc],EBP     ; 00442161
    CMP EDX,EBP                         ; 00442168
    JLE 0x00442288                      ; 0044216a
        ;   XREF to: 00442288 (CONDITIONAL_JUMP)  ; LAB_00442288
    MOV EDI,0x140                       ; 00442170
    MOV EBP,0xf00                       ; 00442175
    MOV ESI,0x500                       ; 0044217a
    MOV dword ptr [ESP + 0x1cc],EDI     ; 0044217f
    MOV dword ptr [ESP + 0x1d0],EBP     ; 00442186
    MOV dword ptr [ESP + 0x1c8],ESI     ; 0044218d
    MOV EDI,0x83c7d4                    ; 00442194 | DAT_0083c7d4
        ;   Label: LAB_00442194
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 00442199
    MOV EBX,0x1326d20                   ; 004421a0
    MOV EDX,dword ptr [ESP + 0x1cc]     ; 004421a5
    MOV ESI,0xb1ac98                    ; 004421ac
    MOV ECX,dword ptr [ESP + 0x1c8]     ; 004421b1
    ADD EDI,EAX                         ; 004421b8
    MOV EAX,dword ptr [ESP + 0x210]     ; 004421ba
    MOV EBP,0x1                         ; 004421c1
    ADD EBX,EDX                         ; 004421c6
    MOV EDX,dword ptr [EAX + 0x150]     ; 004421c8
    ADD ESI,ECX                         ; 004421ce
    CMP EDX,EBP                         ; 004421d0
    JLE 0x00442228                      ; 004421d2
        ;   XREF to: 00442228 (CONDITIONAL_JUMP)  ; LAB_00442228
    MOV EAX,dword ptr [ESI]             ; 004421d4 | DAT_00b1b198 | DAT_00b1b698 | DAT_00b1b69c
        ;   Label: LAB_004421d4
    CMP EAX,0x7fffffff                  ; 004421d6
    JZ 0x00442550                       ; 004421db
        ;   XREF to: 00442550 (CONDITIONAL_JUMP)  ; LAB_00442550
    PUSH EAX                            ; 004421e1
    PUSH EDI                            ; 004421e2 | DAT_0083d6d4 | DAT_0083e5e0
    LEA EAX,[ESP + 0x1ac]               ; 004421e3
    PUSH EAX                            ; 004421ea
    PUSH 0x146592c                      ; 004421eb
    CALL FUN_0043b1a0                   ; 004421f0
        ;   XREF to: 0043b1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b1a0()
    IMUL EAX,EAX,0xff                   ; 004421f5
    SHR EAX,0xe                         ; 004421fb
    ADD ESP,0x10                        ; 004421fe
    CMP EAX,0xff                        ; 00442201
    JBE 0x0044220d                      ; 00442206
        ;   XREF to: 0044220d (CONDITIONAL_JUMP)  ; LAB_0044220d
    MOV EAX,0xff                        ; 00442208
    MOV byte ptr [EBX],AL               ; 0044220d | DAT_01326e60
        ;   Label: LAB_0044220d
    MOV EAX,dword ptr [ESP + 0x210]     ; 0044220f
        ;   Label: LAB_0044220f
    ADD EDI,0xc                         ; 00442216
    INC EBX                             ; 00442219
    INC EBP                             ; 0044221a
    MOV ECX,dword ptr [EAX + 0x150]     ; 0044221b
    ADD ESI,0x4                         ; 00442221
    CMP EBP,ECX                         ; 00442224
    JL 0x004421d4                       ; 00442226
        ;   XREF to: 004421d4 (CONDITIONAL_JUMP)  ; LAB_004421d4
    MOV ECX,dword ptr [ESP + 0x1c8]     ; 00442228
        ;   Label: LAB_00442228
    MOV EBX,dword ptr [ESP + 0x1cc]     ; 0044222f
    MOV ESI,dword ptr [ESP + 0x1d0]     ; 00442236
    MOV EDI,dword ptr [ESP + 0x1dc]     ; 0044223d
    MOV EDX,dword ptr [ESP + 0x210]     ; 00442244
    ADD ECX,0x500                       ; 0044224b
    ADD EBX,0x140                       ; 00442251
    ADD ESI,0xf00                       ; 00442257
    INC EDI                             ; 0044225d
    MOV EBP,dword ptr [EDX + 0x154]     ; 0044225e
    MOV dword ptr [ESP + 0x1c8],ECX     ; 00442264
    MOV dword ptr [ESP + 0x1cc],EBX     ; 0044226b
    MOV dword ptr [ESP + 0x1d0],ESI     ; 00442272
    MOV dword ptr [ESP + 0x1dc],EDI     ; 00442279
    CMP EDI,EBP                         ; 00442280
    JL 0x00442194                       ; 00442282
        ;   XREF to: 00442194 (CONDITIONAL_JUMP)  ; LAB_00442194
    MOV EAX,dword ptr [ESP + 0x1f4]     ; 00442288
        ;   Label: LAB_00442288
    PUSH EAX                            ; 0044228f
    MOV EDX,dword ptr [ESP + 0x214]     ; 00442290
    PUSH EDX                            ; 00442297
    CALL FUN_004425d0                   ; 00442298
        ;   XREF to: 004425d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004425d0()
    ADD ESP,0x8                         ; 0044229d
    MOV EAX,dword ptr [ESP + 0x210]     ; 004422a0
    XOR ECX,ECX                         ; 004422a7
    MOV EBX,dword ptr [EAX + 0x154]     ; 004422a9
    MOV dword ptr [ESP + 0x1d8],ECX     ; 004422af
    TEST EBX,EBX                        ; 004422b6
    JLE 0x00442416                      ; 004422b8
        ;   XREF to: 00442416 (CONDITIONAL_JUMP)  ; LAB_00442416
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 004422be
    MOV dword ptr [ESP + 0x1e8],EAX     ; 004422c5
    MOV dword ptr [ESP + 0x1ec],EAX     ; 004422cc
    MOV EAX,dword ptr [ESP + 0x1c4]     ; 004422d3
    MOV dword ptr [ESP + 0x1e0],ECX     ; 004422da
    MOV dword ptr [ESP + 0x1e4],EAX     ; 004422e1
    MOV dword ptr [ESP + 0x1d4],EAX     ; 004422e8
    XOR EBP,EBP                         ; 004422ef
    MOV EAX,dword ptr [ESP + 0x210]     ; 004422f1
        ;   Label: LAB_004422f1
    MOV EDX,EBP                         ; 004422f8
    MOV ECX,dword ptr [EAX + 0x150]     ; 004422fa
    MOV EBX,EBP                         ; 00442300
    CMP EBP,ECX                         ; 00442302
    JGE 0x004423ca                      ; 00442304
        ;   XREF to: 004423ca (CONDITIONAL_JUMP)  ; LAB_004423ca
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 0044230a
    MOV ECX,dword ptr [ESP + 0x1d4]     ; 00442311
    MOV dword ptr [ESP + 0x1f8],EAX     ; 00442318
    MOV ESI,EAX                         ; 0044231f
    MOV dword ptr [ESP + 0x1f0],EAX     ; 00442321
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 00442328
        ;   Label: LAB_00442328
    ADD EAX,dword ptr [ESP + 0x1f8]     ; 0044232f
    MOV AL,byte ptr [EDX + EAX*0x1 + 0x1339920] ; 00442336
    MOV EDI,dword ptr [ESP + 0x1f4]     ; 0044233d
    AND EAX,0xff                        ; 00442344
    CMP EBP,EDI                         ; 00442349
    JGE 0x00442365                      ; 0044234b
        ;   XREF to: 00442365 (CONDITIONAL_JUMP)  ; LAB_00442365
    MOV EDI,dword ptr [ESP + 0x1e8]     ; 0044234d
    ADD EDI,dword ptr [ESP + 0x1f8]     ; 00442354
    MOVZX EDI,byte ptr [EDX + EDI*0x1 + 0x1339920] ; 0044235b
    SUB EAX,EDI                         ; 00442363
    SAR EAX,0x2                         ; 00442365
        ;   Label: LAB_00442365
    SUB EAX,EBX                         ; 00442368
    CMP EAX,-0x20                       ; 0044236a
    JGE 0x00442558                      ; 0044236d
        ;   XREF to: 00442558 (CONDITIONAL_JUMP)  ; LAB_00442558
    MOV EAX,0xffffffe0                  ; 00442373
    MOV byte ptr [ESI + 0x1326d20],AL   ; 00442378 | DAT_01326d20 | DAT_01326d21
        ;   Label: LAB_00442378
    ADD EAX,EBX                         ; 0044237e
    MOV EDI,dword ptr [ESP + 0x1f4]     ; 00442380
    LEA EBX,[EAX*0x4 + 0x0]             ; 00442387
    CMP EBP,EDI                         ; 0044238e
    JGE 0x004423aa                      ; 00442390
        ;   XREF to: 004423aa (CONDITIONAL_JUMP)  ; LAB_004423aa
    MOV EDI,dword ptr [ESP + 0x1ec]     ; 00442392
    ADD EDI,dword ptr [ESP + 0x1f0]     ; 00442399
    MOVZX EDI,byte ptr [EDX + EDI*0x1 + 0x1339920] ; 004423a0
    ADD EBX,EDI                         ; 004423a8
    MOV byte ptr [ECX + 0x1339920],BL   ; 004423aa
        ;   Label: LAB_004423aa
    MOV EBX,EAX                         ; 004423b0
    MOV EAX,dword ptr [ESP + 0x210]     ; 004423b2
    INC ESI                             ; 004423b9
    INC EDX                             ; 004423ba
    MOV EDI,dword ptr [EAX + 0x150]     ; 004423bb
    INC ECX                             ; 004423c1
    CMP EDX,EDI                         ; 004423c2
    JL 0x00442328                       ; 004423c4
        ;   XREF to: 00442328 (CONDITIONAL_JUMP)  ; LAB_00442328
    MOV ECX,dword ptr [ESP + 0x1e0]     ; 004423ca
        ;   Label: LAB_004423ca
    MOV EBX,dword ptr [ESP + 0x1d4]     ; 004423d1
    MOV ESI,dword ptr [ESP + 0x1d8]     ; 004423d8
    MOV EDX,dword ptr [ESP + 0x210]     ; 004423df
    ADD ECX,0x140                       ; 004423e6
    ADD EBX,0x140                       ; 004423ec
    INC ESI                             ; 004423f2
    MOV EDI,dword ptr [EDX + 0x154]     ; 004423f3
    MOV dword ptr [ESP + 0x1e0],ECX     ; 004423f9
    MOV dword ptr [ESP + 0x1d4],EBX     ; 00442400
    MOV dword ptr [ESP + 0x1d8],ESI     ; 00442407
    CMP ESI,EDI                         ; 0044240e
    JL 0x004422f1                       ; 00442410
        ;   XREF to: 004422f1 (CONDITIONAL_JUMP)  ; LAB_004422f1
    LEA EAX,[ESP + 0x1b0]               ; 00442416
        ;   Label: LAB_00442416
    PUSH EAX                            ; 0044241d
    LEA EAX,[ESP + 0x1c0]               ; 0044241e
    PUSH EAX                            ; 00442425
    PUSH 0x1326d20                      ; 00442426 | DAT_01326d20
    LEA EAX,[ESP + 0x170]               ; 0044242b
    MOV EBP,0x12c00                     ; 00442432
    PUSH EAX                            ; 00442437
    MOV dword ptr [ESP + 0x1cc],EBP     ; 00442438
    CALL FUN_00433ff0                   ; 0044243f
        ;   XREF to: 00433ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00433ff0()
    ADD ESP,0x10                        ; 00442444
    TEST EAX,EAX                        ; 00442447
    JZ 0x0044256b                       ; 00442449
        ;   XREF to: 0044256b (CONDITIONAL_JUMP)  ; LAB_0044256b
    CMP dword ptr [ESP + 0x1bc],0x0     ; 0044244f
        ;   Label: LAB_0044244f
    JZ 0x00442484                       ; 00442457
        ;   XREF to: 00442484 (CONDITIONAL_JUMP)  ; LAB_00442484
    LEA EAX,[ESP + 0x100]               ; 00442459
    PUSH EAX                            ; 00442460
    MOV EBX,0x5ce6b5                    ; 00442461 | = "..\\core\\dcamera.cpp"
    MOV ESI,0x1394                      ; 00442466
    PUSH 0x5ce6c9                       ; 0044246b | = "Not all bytes consumed compressing %s"
    MOV dword ptr [0x01d046a0],EBX      ; 00442470 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00442476 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0044247c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 00442481
    LEA EAX,[ESP + 0x1b0]               ; 00442484
        ;   Label: LAB_00442484
    PUSH EAX                            ; 0044248b
    CALL FUN_0057dd40                   ; 0044248c
        ;   XREF to: 0057dd40 (UNCONDITIONAL_CALL)  ; undefined FUN_0057dd40()
    ADD ESP,0x4                         ; 00442491
    TEST EAX,EAX                        ; 00442494
    JZ 0x0044259a                       ; 00442496
        ;   XREF to: 0044259a (CONDITIONAL_JUMP)  ; LAB_0044259a
    MOV EBP,dword ptr [ESP + 0x1c4]     ; 0044249c
        ;   Label: LAB_0044249c
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 004424a3
    MOV EDX,dword ptr [ESP + 0x1f4]     ; 004424aa
    MOV ECX,dword ptr [0x01465928]      ; 004424b1 | DAT_01465928
    ADD EBP,0x12c00                     ; 004424b7
    ADD EAX,0x12c00                     ; 004424bd
    INC EDX                             ; 004424c2
    MOV dword ptr [ESP + 0x1c4],EBP     ; 004424c3
    MOV dword ptr [ESP + 0x1c0],EAX     ; 004424ca
    MOV dword ptr [ESP + 0x1f4],EDX     ; 004424d1
    CMP EDX,ECX                         ; 004424d8
    JL 0x00442138                       ; 004424da
        ;   XREF to: 00442138 (CONDITIONAL_JUMP)  ; LAB_00442138
    LEA EAX,[ESP + 0x1b0]               ; 004424e0
        ;   Label: LAB_004424e0
    PUSH EAX                            ; 004424e7
    LEA EAX,[ESP + 0x168]               ; 004424e8
    PUSH EAX                            ; 004424ef
    CALL FUN_00434910                   ; 004424f0
        ;   XREF to: 00434910 (UNCONDITIONAL_CALL)  ; undefined FUN_00434910()
    ADD ESP,0x8                         ; 004424f5
    PUSH 0x0                            ; 004424f8
    LEA EAX,[ESP + 0x16c]               ; 004424fa
    PUSH EAX                            ; 00442501
    CALL FUN_00434270                   ; 00442502
        ;   XREF to: 00434270 (UNCONDITIONAL_CALL)  ; undefined FUN_00434270()
    ADD ESP,0x8                         ; 00442507
    PUSH 0x1                            ; 0044250a
    LEA EAX,[ESP + 0x168]               ; 0044250c
    PUSH EAX                            ; 00442513
    CALL FUN_00433e90                   ; 00442514
        ;   XREF to: 00433e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00433e90()
    ADD ESP,0x8                         ; 00442519
    PUSH 0x0                            ; 0044251c
    LEA EAX,[ESP + 0x1b4]               ; 0044251e
        ;   Label: LAB_0044251e
    PUSH EAX                            ; 00442525
    CALL FUN_0057dc10                   ; 00442526
        ;   XREF to: 0057dc10 (UNCONDITIONAL_CALL)  ; undefined FUN_0057dc10()
    ADD ESP,0x8                         ; 0044252b
    ADD ESP,0x1fc                       ; 0044252e
    POP EBP                             ; 00442534
        ;   Label: LAB_00442534
    POP EDI                             ; 00442535
    POP ESI                             ; 00442536
    POP EBX                             ; 00442537
    RET                                 ; 00442538
    PUSH EAX                            ; 00442539
        ;   Label: LAB_00442539
    CALL FUN_005b89c0                   ; 0044253a
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    ADD ESP,0x4                         ; 0044253f
    ADD ESP,0x1fc                       ; 00442542
    POP EBP                             ; 00442548
    POP EDI                             ; 00442549
    POP ESI                             ; 0044254a
    POP EBX                             ; 0044254b
    RET                                 ; 0044254c
    PUSH EBX                            ; 0044254d
        ;   Label: LAB_0044254d
    JMP 0x0044251e                      ; 0044254e
        ;   XREF to: 0044251e (UNCONDITIONAL_JUMP)  ; LAB_0044251e
    MOV byte ptr [EBX],0xff             ; 00442550 | DAT_01326fa0
        ;   Label: LAB_00442550
    JMP 0x0044220f                      ; 00442553
        ;   XREF to: 0044220f (UNCONDITIONAL_JUMP)  ; LAB_0044220f
    CMP EAX,0x3f                        ; 00442558
        ;   Label: LAB_00442558
    JLE 0x00442378                      ; 0044255b
        ;   XREF to: 00442378 (CONDITIONAL_JUMP)  ; LAB_00442378
    MOV EAX,0x3f                        ; 00442561
    JMP 0x00442378                      ; 00442566
        ;   XREF to: 00442378 (UNCONDITIONAL_JUMP)  ; LAB_00442378
    MOV dword ptr [0x01d046a0],0x5ce68c ; 0044256b | DAT_01d046a0 | = "..\\core\\dcamera.cpp"
        ;   Label: LAB_0044256b
    LEA EAX,[ESP + 0x100]               ; 00442575
    PUSH EAX                            ; 0044257c
    MOV EDX,0x1392                      ; 0044257d
    PUSH 0x5ce6a0                       ; 00442582 | = "Error compressing %s"
    MOV dword ptr [0x01d046a4],EDX      ; 00442587 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0044258d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 00442592
    JMP 0x0044244f                      ; 00442595
        ;   XREF to: 0044244f (UNCONDITIONAL_JUMP)  ; LAB_0044244f
    LEA EAX,[ESP + 0x100]               ; 0044259a
        ;   Label: LAB_0044259a
    PUSH EAX                            ; 004425a1
    MOV EDI,0x5ce6ef                    ; 004425a2 | = "..\\core\\dcamera.cpp"
    MOV EBP,0x1395                      ; 004425a7
    PUSH 0x5ce703                       ; 004425ac | = "Error writing compressed file %s"
    MOV dword ptr [0x01d046a0],EDI      ; 004425b1 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 004425b7 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004425bd
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 004425c2
    JMP 0x0044249c                      ; 004425c5
        ;   XREF to: 0044249c (UNCONDITIONAL_JUMP)  ; LAB_0044249c

