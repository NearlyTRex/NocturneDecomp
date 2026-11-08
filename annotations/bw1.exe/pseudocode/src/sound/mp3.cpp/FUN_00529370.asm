; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00529370(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int *param_5)
;
; Local Variables:
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
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
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
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
;
; XREF[1]:
;   FUN_0052b450 at 0052bcc6
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_005eb486
;   TerminatedCString s_Error_in_streo_processin_005eb497
;   undefined4 DAT_005eb4be
;   undefined4 DAT_005eb4c6
;   undefined4 DAT_00620798
;   undefined4 DAT_0062079c
;   undefined4 DAT_006207a0
;   undefined4 DAT_006207a4
;   undefined4 DAT_006207c8
;   undefined4 DAT_006207cc
;   undefined4 DAT_006207e8
;   undefined4 DAT_006207ec
;   undefined4 DAT_00620820
;   undefined4 DAT_00620824
;   undefined4 DAT_00620828
;   ... and 5 more
;
; Called Functions:
;   FUN_005030e0
;   FUN_005292d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529370
        ;   Label: FUN_00529370
    PUSH ESI                            ; 00529371
    PUSH EDI                            ; 00529372
    PUSH EBP                            ; 00529373
    MOV EBP,ESP                         ; 00529374
    SUB ESP,0xec                        ; 00529376
    AND ESP,0xfffffff8                  ; 0052937c
    MOV ECX,dword ptr [EBP + 0x20]      ; 0052937f
    MOV EAX,dword ptr [EBP + 0x24]      ; 00529382
    MOV EDX,dword ptr [EAX + 0x10]      ; 00529385
    MOV dword ptr [ESP + 0x10],EDX      ; 00529388
    MOV EDX,dword ptr [EAX]             ; 0052938c
    CMP dword ptr [EDX + 0x1c],0x1      ; 0052938e
    JNZ 0x005295dc                      ; 00529392
        ;   XREF to: 005295dc (CONDITIONAL_JUMP)  ; LAB_005295dc
    TEST byte ptr [EDX + 0x20],0x2      ; 00529398
    JZ 0x005295dc                       ; 0052939c
        ;   XREF to: 005295dc (CONDITIONAL_JUMP)  ; LAB_005295dc
    MOV EDX,0x1                         ; 005293a2
    MOV dword ptr [ESP + 0x58],EDX      ; 005293a7
        ;   Label: LAB_005293a7
    MOV EDX,dword ptr [EAX]             ; 005293ab
    MOV ESI,dword ptr [EDX + 0x1c]      ; 005293ad
    CMP ESI,0x1                         ; 005293b0
    JNZ 0x005295e3                      ; 005293b3
        ;   XREF to: 005295e3 (CONDITIONAL_JUMP)  ; LAB_005295e3
    TEST byte ptr [EDX + 0x20],0x1      ; 005293b9
    JZ 0x005295e3                       ; 005293bd
        ;   XREF to: 005295e3 (CONDITIONAL_JUMP)  ; LAB_005295e3
    MOV EDX,ESI                         ; 005293c3
    MOV dword ptr [ESP + 0x14],EDX      ; 005293c5
        ;   Label: LAB_005293c5
    MOV EDX,dword ptr [EAX]             ; 005293c9
    CMP dword ptr [EDX],0x0             ; 005293cb
    SETZ DL                             ; 005293ce
    AND EDX,0xff                        ; 005293d1
    MOV dword ptr [ESP + 0x20],EDX      ; 005293d7
    MOV EDX,dword ptr [ECX + 0xc]       ; 005293db
    AND EDX,0x1                         ; 005293de
    CMP EDX,0x1                         ; 005293e1
    JNZ 0x005295ea                      ; 005293e4
        ;   XREF to: 005295ea (CONDITIONAL_JUMP)  ; LAB_005295ea
    MOV ESI,0x667f6ee7                  ; 005293ea
    MOV EDI,0x3fe6a09e                  ; 005293ef
    MOV dword ptr [ESP],ESI             ; 005293f4
    MOV dword ptr [ESP + 0x4],EDI       ; 005293f7
    MOV EBX,dword ptr [EAX]             ; 005293fb
        ;   Label: LAB_005293fb
    MOV EDX,dword ptr [EBX]             ; 005293fd
    LEA EAX,[EDX*0x4 + 0x0]             ; 005293ff
    SUB EAX,EDX                         ; 00529406
    MOV EDX,dword ptr [EBX + 0x10]      ; 00529408
    ADD EDX,EAX                         ; 0052940b
    MOV dword ptr [ESP + 0x54],EDX      ; 0052940d
    XOR EAX,EAX                         ; 00529411
    MOV EDX,0x7                         ; 00529413
    ADD EAX,0x2                         ; 00529418
        ;   Label: LAB_00529418
    MOV word ptr [EAX + 0x1d3c9c6],DX   ; 0052941b
    CMP EAX,0x480                       ; 00529422
    JNZ 0x00529418                      ; 00529427
        ;   XREF to: 00529418 (CONDITIONAL_JUMP)  ; LAB_00529418
    MOV EAX,dword ptr [ESP + 0x10]      ; 00529429
    CMP EAX,0x2                         ; 0052942d
    JZ 0x00529600                       ; 00529430
        ;   XREF to: 00529600 (CONDITIONAL_JUMP)  ; LAB_00529600
    LEA EAX,[EAX]                       ; 00529436
    LEA EDX,[EDX]                       ; 0052943c
    MOV EAX,dword ptr [EBP + 0x18]      ; 00529440
        ;   Label: LAB_00529440
    MOV dword ptr [ESP + 0xa8],EAX      ; 00529443
    ADD EAX,0x1200                      ; 0052944a
    MOV dword ptr [ESP + 0xac],EAX      ; 0052944f
    MOV ESI,dword ptr [ESP + 0xa8]      ; 00529456
        ;   Label: LAB_00529456
    XOR EDX,EDX                         ; 0052945d
    LEA EBX,[ESI + 0x48]                ; 0052945f
    IMUL EAX,EDX,0x48                   ; 00529462
        ;   Label: LAB_00529462
    LEA ECX,[ESI + EAX*0x1]             ; 00529465
    MOV EAX,EBX                         ; 00529468
    MOV dword ptr [ECX],0x0             ; 0052946a
        ;   Label: LAB_0052946a
    ADD ECX,0x4                         ; 00529470
    CMP ECX,EAX                         ; 00529473
    JNZ 0x0052946a                      ; 00529475
        ;   XREF to: 0052946a (CONDITIONAL_JUMP)  ; LAB_0052946a
    INC EDX                             ; 00529477
    ADD EBX,0x48                        ; 00529478
    CMP EDX,0x20                        ; 0052947b
    JL 0x00529462                       ; 0052947e
        ;   XREF to: 00529462 (CONDITIONAL_JUMP)  ; LAB_00529462
    MOV EDX,dword ptr [ESP + 0xa8]      ; 00529480
    ADD EDX,0x900                       ; 00529487
    MOV ECX,dword ptr [ESP + 0xac]      ; 0052948d
    MOV dword ptr [ESP + 0xa8],EDX      ; 00529494
    CMP EDX,ECX                         ; 0052949b
    JNZ 0x00529456                      ; 0052949d
        ;   XREF to: 00529456 (CONDITIONAL_JUMP)  ; LAB_00529456
    CMP dword ptr [ESP + 0x10],0x2      ; 0052949f
    JNZ 0x0052a080                      ; 005294a4
        ;   XREF to: 0052a080 (CONDITIONAL_JUMP)  ; LAB_0052a080
    XOR ESI,ESI                         ; 005294aa
    MOV EAX,dword ptr [EBP + 0x14]      ; 005294ac
    MOV dword ptr [ESP + 0xe0],ESI      ; 005294af
    MOV dword ptr [ESP + 0xc0],EAX      ; 005294b6
    MOV EAX,dword ptr [EBP + 0x18]      ; 005294bd
    MOV dword ptr [ESP + 0xc8],ESI      ; 005294c0
    MOV dword ptr [ESP + 0xc4],EAX      ; 005294c7
    MOV EDI,0x48                        ; 005294ce
    MOV EBX,dword ptr [ESP + 0xe0]      ; 005294d3
        ;   Label: LAB_005294d3
    IMUL EAX,EBX,0x12                   ; 005294da
    MOV dword ptr [ESP + 0x64],EAX      ; 005294dd
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005294e1
    MOV dword ptr [ESP + 0xb4],EAX      ; 005294e8
    MOV EAX,dword ptr [ESP + 0xc4]      ; 005294ef
    XOR ESI,ESI                         ; 005294f6
    MOV dword ptr [ESP + 0xb8],EAX      ; 005294f8
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005294ff
    XOR EBX,EBX                         ; 00529506
    MOV dword ptr [ESP + 0xbc],EAX      ; 00529508
    MOV EAX,dword ptr [ESP + 0x64]      ; 0052950f
        ;   Label: LAB_0052950f
    MOV EDX,dword ptr [ESP + 0xb8]      ; 00529513
    ADD EAX,ESI                         ; 0052951a
    MOV ECX,dword ptr [ESP + 0xb4]      ; 0052951c
    MOV dword ptr [ESP + 0xd4],EAX      ; 00529523
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0052952a
    ADD EDX,EBX                         ; 00529531
    ADD EAX,EBX                         ; 00529533
    CMP word ptr [ECX + 0x1d3c9c8],0x7  ; 00529535
    JNZ 0x00529ffe                      ; 0052953d
        ;   XREF to: 00529ffe (CONDITIONAL_JUMP)  ; LAB_00529ffe
    CMP dword ptr [ESP + 0x58],0x0      ; 00529543
    JZ 0x00529fe9                       ; 00529548
        ;   XREF to: 00529fe9 (CONDITIONAL_JUMP)  ; LAB_00529fe9
    FLD float ptr [EAX]                 ; 0052954e
    FADD float ptr [EAX + 0x900]        ; 00529550
    FLD double ptr [0x005eb4c6]         ; 00529556 | DAT_005eb4c6
    FXCH                                ; 0052955c
    FMUL ST1                            ; 0052955e
    FSTP float ptr [EDX]                ; 00529560
    FLD float ptr [EAX]                 ; 00529562
    FSUB float ptr [EAX + 0x900]        ; 00529564
    FMULP                               ; 0052956a
    FSTP float ptr [EDX + 0x900]        ; 0052956c
        ;   Label: LAB_0052956c
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00529572
        ;   Label: LAB_00529572
    INC ESI                             ; 00529579
    ADD EAX,0x2                         ; 0052957a
    ADD EBX,0x4                         ; 0052957d
    MOV dword ptr [ESP + 0xb4],EAX      ; 00529580
    CMP ESI,0x12                        ; 00529587
    JL 0x0052950f                       ; 0052958a
        ;   XREF to: 0052950f (CONDITIONAL_JUMP)  ; LAB_0052950f
    MOV ECX,dword ptr [ESP + 0xc4]      ; 0052958c
    MOV EBX,dword ptr [ESP + 0xc8]      ; 00529593
    MOV ESI,dword ptr [ESP + 0xe0]      ; 0052959a
    MOV EDX,dword ptr [ESP + 0xc0]      ; 005295a1
    ADD EBX,0x24                        ; 005295a8
    INC ESI                             ; 005295ab
    ADD ECX,EDI                         ; 005295ac
    ADD EDX,EDI                         ; 005295ae
    MOV dword ptr [ESP + 0xc4],ECX      ; 005295b0
    MOV dword ptr [ESP + 0xc8],EBX      ; 005295b7
    MOV dword ptr [ESP + 0xe0],ESI      ; 005295be
    MOV dword ptr [ESP + 0xc0],EDX      ; 005295c5
    CMP ESI,0x20                        ; 005295cc
    JL 0x005294d3                       ; 005295cf
        ;   XREF to: 005294d3 (CONDITIONAL_JUMP)  ; LAB_005294d3
    MOV ESP,EBP                         ; 005295d5
        ;   Label: LAB_005295d5
    POP EBP                             ; 005295d7
    POP EDI                             ; 005295d8
    POP ESI                             ; 005295d9
    POP EBX                             ; 005295da
    RET                                 ; 005295db
    XOR EDX,EDX                         ; 005295dc
        ;   Label: LAB_005295dc
    JMP 0x005293a7                      ; 005295de
        ;   XREF to: 005293a7 (UNCONDITIONAL_JUMP)  ; LAB_005293a7
    XOR EDX,EDX                         ; 005295e3
        ;   Label: LAB_005295e3
    JMP 0x005293c5                      ; 005295e5
        ;   XREF to: 005293c5 (UNCONDITIONAL_JUMP)  ; LAB_005293c5
    MOV EDX,0x995b2417                  ; 005295ea
        ;   Label: LAB_005295ea
    MOV EBX,0x3feae89f                  ; 005295ef
    MOV dword ptr [ESP],EDX             ; 005295f4
    MOV dword ptr [ESP + 0x4],EBX       ; 005295f7
    JMP 0x005293fb                      ; 005295fb
        ;   XREF to: 005293fb (UNCONDITIONAL_JUMP)  ; LAB_005293fb
    CMP dword ptr [ESP + 0x14],0x0      ; 00529600
        ;   Label: LAB_00529600
    JZ 0x00529440                       ; 00529605
        ;   XREF to: 00529440 (CONDITIONAL_JUMP)  ; LAB_00529440
    CMP dword ptr [ECX + 0x10],0x0      ; 0052960b
    JNZ 0x00529806                      ; 0052960f
        ;   XREF to: 00529806 (CONDITIONAL_JUMP)  ; LAB_00529806
    MOV ECX,0x1f                        ; 00529615
        ;   Label: LAB_00529615
    MOV EDX,0x11                        ; 0052961a
    MOV EBX,dword ptr [EBP + 0x14]      ; 0052961f
    XOR EDI,EDI                         ; 00529622
    ADD EBX,0x8b8                       ; 00529624
    MOV ESI,EDX                         ; 0052962a
    TEST dword ptr [EBX + EDX*0x4 + 0x900],0x7fffffff ; 0052962c
        ;   Label: LAB_0052962c
    JZ 0x00529fb2                       ; 00529637
        ;   XREF to: 00529fb2 (CONDITIONAL_JUMP)  ; LAB_00529fb2
    LEA EAX,[ECX*0x8 + 0x0]             ; 0052963d
    ADD EAX,ECX                         ; 00529644
    ADD EAX,EAX                         ; 00529646
    LEA EDI,[EAX + EDX*0x1]             ; 00529648
    MOV EDX,dword ptr [ESP + 0x54]      ; 0052964b
        ;   Label: LAB_0052964b
    LEA EAX,[EDX*0x8 + 0x0]             ; 0052964f
    ADD EAX,EDX                         ; 00529656
    SHL EAX,0x2                         ; 00529658
    ADD EDX,EAX                         ; 0052965b
    SHL EDX,0x2                         ; 0052965d
    XOR ESI,ESI                         ; 00529660
    MOV ECX,dword ptr [EDX + 0x620798]  ; 00529662 | DAT_00620798
    MOV EAX,EDX                         ; 00529668
    CMP EDI,ECX                         ; 0052966a
    JL 0x00529680                       ; 0052966c
        ;   XREF to: 00529680 (CONDITIONAL_JUMP)  ; LAB_00529680
    INC ESI                             ; 0052966e
        ;   Label: LAB_0052966e
    MOV EBX,dword ptr [EAX + 0x62079c]  ; 0052966f | DAT_0062079c | DAT_006207a0
    ADD EAX,0x4                         ; 00529675
    CMP EDI,EBX                         ; 00529678
    JGE 0x0052966e                      ; 0052967a
        ;   XREF to: 0052966e (CONDITIONAL_JUMP)  ; LAB_0052966e
    LEA EAX,[EAX]                       ; 0052967c
    MOV EDX,dword ptr [ESP + 0x54]      ; 00529680
        ;   Label: LAB_00529680
    MOV dword ptr [ESP + 0x18],ESI      ; 00529684
    MOV ESI,dword ptr [EAX + 0x620798]  ; 00529688 | DAT_0062079c | DAT_006207a0 | DAT_00620798
    LEA EAX,[EDX*0x8 + 0x0]             ; 0052968e
    ADD EAX,EDX                         ; 00529695
    SHL EAX,0x2                         ; 00529697
    ADD EAX,EDX                         ; 0052969a
    MOV EDI,dword ptr [ESP + 0x18]      ; 0052969c
    SHL EAX,0x2                         ; 005296a0
    SHL EDI,0x2                         ; 005296a3
    MOV dword ptr [ESP + 0x70],EAX      ; 005296a6
    ADD EAX,EDI                         ; 005296aa
    MOV dword ptr [ESP + 0x78],EAX      ; 005296ac
    CMP dword ptr [ESP + 0x18],0x15     ; 005296b0
    JGE 0x00529773                      ; 005296b5
        ;   XREF to: 00529773 (CONDITIONAL_JUMP)  ; LAB_00529773
    MOV dword ptr [ESP + 0x7c],EDI      ; 005296bb
    MOV EAX,dword ptr [ESP + 0x78]      ; 005296bf
        ;   Label: LAB_005296bf
    MOV EDI,dword ptr [ESP + 0x78]      ; 005296c3
    MOV EBX,dword ptr [EAX + 0x620798]  ; 005296c7 | DAT_0062079c | DAT_006207a0
    MOV EDI,dword ptr [EDI + 0x62079c]  ; 005296cd | DAT_006207a0 | DAT_006207a4
    SUB EDI,EBX                         ; 005296d3
    TEST EDI,EDI                        ; 005296d5
    JLE 0x0052974b                      ; 005296d7
        ;   XREF to: 0052974b (CONDITIONAL_JUMP)  ; LAB_0052974b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005296d9
    ADD EAX,dword ptr [ESP + 0x7c]      ; 005296dc
    LEA EBX,[ESI + ESI*0x1]             ; 005296e0
    MOV dword ptr [ESP + 0x5c],EAX      ; 005296e3
    LEA EAX,[ESI*0x4 + 0x0]             ; 005296e7
    MOV dword ptr [ESP + 0x74],EAX      ; 005296ee
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005296f2
        ;   Label: LAB_005296f2
    MOV AX,word ptr [EAX + 0xf8]        ; 005296f6
    MOV word ptr [EBX + 0x1d3c9c8],AX   ; 005296fd
    CMP AX,0x7                          ; 00529704
    JZ 0x00529737                       ; 00529708
        ;   XREF to: 00529737 (CONDITIONAL_JUMP)  ; LAB_00529737
    CMP dword ptr [ESP + 0x20],0x0      ; 0052970a
    JZ 0x00529fca                       ; 0052970f
        ;   XREF to: 00529fca (CONDITIONAL_JUMP)  ; LAB_00529fca
    PUSH 0x1d3d748                      ; 00529715
    PUSH ESI                            ; 0052971a
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052971b
    PUSH EAX                            ; 0052971f
    MOV EDX,dword ptr [ESP + 0xc]       ; 00529720
    MOV EAX,dword ptr [EBX + 0x1d3c9c6] ; 00529724
    PUSH EDX                            ; 0052972a
    SAR EAX,0x10                        ; 0052972b
    PUSH EAX                            ; 0052972e
    CALL FUN_005292d0                   ; 0052972f
        ;   XREF to: 005292d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005292d0()
    ADD ESP,0x14                        ; 00529734
    MOV EAX,dword ptr [ESP + 0x74]      ; 00529737
        ;   Label: LAB_00529737
    ADD EBX,0x2                         ; 0052973b
    INC ESI                             ; 0052973e
    ADD EAX,0x4                         ; 0052973f
    DEC EDI                             ; 00529742
    MOV dword ptr [ESP + 0x74],EAX      ; 00529743
    TEST EDI,EDI                        ; 00529747
    JG 0x005296f2                       ; 00529749
        ;   XREF to: 005296f2 (CONDITIONAL_JUMP)  ; LAB_005296f2
    MOV EDX,dword ptr [ESP + 0x78]      ; 0052974b
        ;   Label: LAB_0052974b
    MOV ECX,dword ptr [ESP + 0x7c]      ; 0052974f
    MOV EBX,dword ptr [ESP + 0x18]      ; 00529753
    ADD EDX,0x4                         ; 00529757
    ADD ECX,0x4                         ; 0052975a
    INC EBX                             ; 0052975d
    MOV dword ptr [ESP + 0x78],EDX      ; 0052975e
    MOV dword ptr [ESP + 0x7c],ECX      ; 00529762
    MOV dword ptr [ESP + 0x18],EBX      ; 00529766
    CMP ECX,0x54                        ; 0052976a
    JL 0x005296bf                       ; 0052976d
        ;   XREF to: 005296bf (CONDITIONAL_JUMP)  ; LAB_005296bf
    MOV EAX,dword ptr [ESP + 0x70]      ; 00529773
        ;   Label: LAB_00529773
    MOV EDI,0x240                       ; 00529777
    MOV ECX,dword ptr [EAX + 0x6207ec]  ; 0052977c | DAT_006207ec
    MOV EDX,dword ptr [ESP + 0x70]      ; 00529782
    SUB EDI,ECX                         ; 00529786
    MOV EDX,dword ptr [EDX + 0x6207e8]  ; 00529788 | DAT_006207e8
    TEST EDI,EDI                        ; 0052978e
    JLE 0x00529440                      ; 00529790
        ;   XREF to: 00529440 (CONDITIONAL_JUMP)  ; LAB_00529440
    LEA EAX,[EDX + EDX*0x1]             ; 00529796
    MOV dword ptr [ESP + 0x60],EAX      ; 00529799
    LEA EAX,[ESI*0x4 + 0x0]             ; 0052979d
    LEA ECX,[ESI + ESI*0x1]             ; 005297a4
    SHL EDX,0x2                         ; 005297a7
    MOV dword ptr [ESP + 0x80],ECX      ; 005297aa
    FLD float ptr [EDX + 0x1d3ce48]     ; 005297b1
        ;   Label: LAB_005297b1
    FLD float ptr [EDX + 0x1d3d748]     ; 005297b7
    MOV EBX,dword ptr [ESP + 0x60]      ; 005297bd
    MOV ECX,dword ptr [ESP + 0x80]      ; 005297c1
    ADD EAX,0x4                         ; 005297c8
    INC ESI                             ; 005297cb
    DEC EDI                             ; 005297cc
    FSTP float ptr [EAX + 0x1d3d744]    ; 005297cd
    FSTP float ptr [EAX + 0x1d3ce44]    ; 005297d3
    FLD float ptr [EDX + 0x1d3e048]     ; 005297d9
    ADD ECX,0x2                         ; 005297df
    MOV BX,word ptr [EBX + 0x1d3c9c8]   ; 005297e2
    FSTP float ptr [EAX + 0x1d3e044]    ; 005297e9
    MOV dword ptr [ESP + 0x80],ECX      ; 005297ef
    MOV word ptr [ECX + 0x1d3c9c6],BX   ; 005297f6
    TEST EDI,EDI                        ; 005297fd
    JG 0x005297b1                       ; 005297ff
        ;   XREF to: 005297b1 (CONDITIONAL_JUMP)  ; LAB_005297b1
    JMP 0x00529440                      ; 00529801
        ;   XREF to: 00529440 (UNCONDITIONAL_JUMP)  ; LAB_00529440
    CMP EAX,dword ptr [ECX + 0x14]      ; 00529806
        ;   Label: LAB_00529806
    JNZ 0x00529615                      ; 00529809
        ;   XREF to: 00529615 (CONDITIONAL_JUMP)  ; LAB_00529615
    MOV EDX,dword ptr [ESP + 0x54]      ; 0052980f
    LEA EAX,[EDX*0x8 + 0x0]             ; 00529813
    ADD EAX,EDX                         ; 0052981a
    SHL EAX,0x2                         ; 0052981c
    ADD EAX,EDX                         ; 0052981f
    MOV EDI,dword ptr [ECX + 0x18]      ; 00529821
    SHL EAX,0x2                         ; 00529824
    TEST EDI,EDI                        ; 00529827
    JZ 0x00529ce5                       ; 00529829
        ;   XREF to: 00529ce5 (CONDITIONAL_JUMP)  ; LAB_00529ce5
    MOV dword ptr [ESP + 0x6c],EAX      ; 0052982f
    MOV dword ptr [ESP + 0x2c],EAX      ; 00529833
    XOR ECX,ECX                         ; 00529837
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00529839
    MOV dword ptr [ESP + 0x24],ECX      ; 0052983c
    MOV dword ptr [ESP + 0xc],ECX       ; 00529840
    MOV dword ptr [ESP + 0x9c],EAX      ; 00529844
    MOV EBX,0x2                         ; 0052984b
        ;   Label: LAB_0052984b
    MOV EAX,dword ptr [ESP + 0xc]       ; 00529850
    MOV ESI,0xc                         ; 00529854
    INC EAX                             ; 00529859
    MOV dword ptr [ESP + 0x28],EBX      ; 0052985a
    MOV dword ptr [ESP + 0x30],EAX      ; 0052985e
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00529862
        ;   Label: LAB_00529862
    LEA EAX,[ESI*0x4 + 0x0]             ; 00529866
    ADD EAX,EDI                         ; 0052986d
    MOV EBX,dword ptr [EAX + 0x6207f8]  ; 0052986f | DAT_00620828 | DAT_006207cc
    MOV EDX,dword ptr [EAX + 0x6207f4]  ; 00529875 | DAT_00620824 | DAT_006207c8
    MOV EAX,dword ptr [ESP + 0x30]      ; 0052987b
    SUB EBX,EDX                         ; 0052987f
    IMUL EAX,EBX                        ; 00529881
    LEA EDX,[EDX + EDX*0x2]             ; 00529884
    ADD EAX,EDX                         ; 00529887
    LEA ECX,[EAX + -0x1]                ; 00529889
    TEST EBX,EBX                        ; 0052988c
    JLE 0x005298dd                      ; 0052988e
        ;   XREF to: 005298dd (CONDITIONAL_JUMP)  ; LAB_005298dd
    MOV EDI,0x12                        ; 00529890
        ;   Label: LAB_00529890
    MOV EDX,ECX                         ; 00529895
    MOV EAX,ECX                         ; 00529897
    SAR EDX,0x1f                        ; 00529899
    IDIV EDI                            ; 0052989c
    IMUL EAX,EAX,0x48                   ; 0052989e
    MOV dword ptr [ESP + 0xe8],0x12     ; 005298a1
    MOV EDX,ECX                         ; 005298ac
    MOV EDI,dword ptr [EBP + 0x14]      ; 005298ae
    SAR EDX,0x1f                        ; 005298b1
    ADD EDI,EAX                         ; 005298b4
    MOV EAX,ECX                         ; 005298b6
    IDIV dword ptr [ESP + 0xe8]         ; 005298b8
    TEST dword ptr [EDI + EDX*0x4 + 0x900],0x7fffffff ; 005298bf
    JZ 0x005298d7                       ; 005298ca
        ;   XREF to: 005298d7 (CONDITIONAL_JUMP)  ; LAB_005298d7
    MOV dword ptr [ESP + 0x28],ESI      ; 005298cc
    MOV ESI,0xfffffff6                  ; 005298d0
    MOV EBX,ESI                         ; 005298d5
    DEC EBX                             ; 005298d7
        ;   Label: LAB_005298d7
    DEC ECX                             ; 005298d8
    TEST EBX,EBX                        ; 005298d9
    JG 0x00529890                       ; 005298db
        ;   XREF to: 00529890 (CONDITIONAL_JUMP)  ; LAB_00529890
    DEC ESI                             ; 005298dd
        ;   Label: LAB_005298dd
    CMP ESI,0x3                         ; 005298de
    JGE 0x00529862                      ; 005298e1
        ;   XREF to: 00529862 (CONDITIONAL_JUMP)  ; LAB_00529862
    MOV EAX,dword ptr [ESP + 0x28]      ; 005298e7
    INC EAX                             ; 005298eb
    MOV ECX,dword ptr [ESP + 0x24]      ; 005298ec
    MOV dword ptr [ESP + 0xcc],EAX      ; 005298f0
    CMP EAX,ECX                         ; 005298f7
    JG 0x00529bc8                       ; 005298f9
        ;   XREF to: 00529bc8 (CONDITIONAL_JUMP)  ; LAB_00529bc8
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005298ff
        ;   Label: LAB_005298ff
    MOV dword ptr [ESP + 0x34],EAX      ; 00529906
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0052990a
    MOV EBX,dword ptr [ESP + 0x6c]      ; 00529911
    SHL EAX,0x2                         ; 00529915
    ADD EAX,EBX                         ; 00529918
    MOV dword ptr [ESP + 0x98],EAX      ; 0052991a
    MOV ESI,dword ptr [ESP + 0xcc]      ; 00529921
        ;   Label: LAB_00529921
    CMP ESI,0xc                         ; 00529928
    JGE 0x00529bf3                      ; 0052992b
        ;   XREF to: 00529bf3 (CONDITIONAL_JUMP)  ; LAB_00529bf3
    LEA EDX,[ESI*0x4 + 0x0]             ; 00529931
    MOV EAX,dword ptr [ESP + 0x98]      ; 00529938
    MOV ESI,dword ptr [ESP + 0x98]      ; 0052993f
    MOV EDI,dword ptr [EAX + 0x6207f4]  ; 00529946 | DAT_00620828
    MOV ESI,dword ptr [ESI + 0x6207f8]  ; 0052994c | DAT_0062082c
    MOV EAX,dword ptr [ESP + 0xc]       ; 00529952
    SUB ESI,EDI                         ; 00529956
    IMUL EAX,ESI                        ; 00529958
    LEA EDI,[EDI + EDI*0x2]             ; 0052995b
    ADD EDI,EAX                         ; 0052995e
    TEST ESI,ESI                        ; 00529960
    JLE 0x005299e2                      ; 00529962
        ;   XREF to: 005299e2 (CONDITIONAL_JUMP)  ; LAB_005299e2
    MOV EAX,dword ptr [ESP + 0x34]      ; 00529968
    ADD EAX,EDX                         ; 0052996c
    LEA EBX,[EDI + EDI*0x1]             ; 0052996e
    MOV dword ptr [ESP + 0x38],EAX      ; 00529971
    LEA EAX,[EDI*0x4 + 0x0]             ; 00529975
    MOV dword ptr [ESP + 0x94],EAX      ; 0052997c
    MOV EAX,dword ptr [ESP + 0x38]      ; 00529983
        ;   Label: LAB_00529983
    MOV AX,word ptr [EAX + 0x154]       ; 00529987
    MOV word ptr [EBX + 0x1d3c9c8],AX   ; 0052998e
    CMP AX,0x7                          ; 00529995
    JZ 0x005299c8                       ; 00529999
        ;   XREF to: 005299c8 (CONDITIONAL_JUMP)  ; LAB_005299c8
    CMP dword ptr [ESP + 0x20],0x0      ; 0052999b
    JZ 0x00529bd1                       ; 005299a0
        ;   XREF to: 00529bd1 (CONDITIONAL_JUMP)  ; LAB_00529bd1
    PUSH 0x1d3d748                      ; 005299a6
    PUSH EDI                            ; 005299ab
    MOV EDX,dword ptr [ESP + 0xc]       ; 005299ac
    PUSH EDX                            ; 005299b0
    MOV ECX,dword ptr [ESP + 0xc]       ; 005299b1
    MOV EAX,dword ptr [EBX + 0x1d3c9c6] ; 005299b5
    PUSH ECX                            ; 005299bb
    SAR EAX,0x10                        ; 005299bc
    PUSH EAX                            ; 005299bf
    CALL FUN_005292d0                   ; 005299c0
        ;   XREF to: 005292d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005292d0()
    ADD ESP,0x14                        ; 005299c5
    MOV EAX,dword ptr [ESP + 0x94]      ; 005299c8
        ;   Label: LAB_005299c8
    ADD EBX,0x2                         ; 005299cf
    INC EDI                             ; 005299d2
    ADD EAX,0x4                         ; 005299d3
    DEC ESI                             ; 005299d6
    MOV dword ptr [ESP + 0x94],EAX      ; 005299d7
    TEST ESI,ESI                        ; 005299de
    JG 0x00529983                       ; 005299e0
        ;   XREF to: 00529983 (CONDITIONAL_JUMP)  ; LAB_00529983
    MOV ECX,dword ptr [ESP + 0xcc]      ; 005299e2
        ;   Label: LAB_005299e2
    MOV EDX,dword ptr [ESP + 0x98]      ; 005299e9
    INC ECX                             ; 005299f0
    ADD EDX,0x4                         ; 005299f1
    MOV dword ptr [ESP + 0xcc],ECX      ; 005299f4
    MOV dword ptr [ESP + 0x98],EDX      ; 005299fb
    JMP 0x00529921                      ; 00529a02
        ;   XREF to: 00529921 (UNCONDITIONAL_JUMP)  ; LAB_00529921
    MOV EDI,dword ptr [ESP + 0xc]       ; 00529a07
        ;   Label: LAB_00529a07
    MOV ESI,dword ptr [ESP + 0x9c]      ; 00529a0b
    INC EDI                             ; 00529a12
    ADD ESI,0x34                        ; 00529a13
    MOV dword ptr [ESP + 0xc],EDI       ; 00529a16
    MOV dword ptr [ESP + 0x9c],ESI      ; 00529a1a
    CMP EDI,0x3                         ; 00529a21
    JL 0x0052984b                       ; 00529a24
        ;   XREF to: 0052984b (CONDITIONAL_JUMP)  ; LAB_0052984b
    CMP dword ptr [ESP + 0x24],0x3      ; 00529a2a
    JG 0x00529440                       ; 00529a2f
        ;   XREF to: 00529440 (CONDITIONAL_JUMP)  ; LAB_00529440
    MOV ECX,0x2                         ; 00529a35
    MOV EDX,0x11                        ; 00529a3a
    MOV EBX,0xffffffff                  ; 00529a3f
    MOV EDI,dword ptr [EBP + 0x14]      ; 00529a44
    MOV dword ptr [ESP + 0xe4],EBX      ; 00529a47
    ADD EDI,0x90                        ; 00529a4e
    MOV EBX,EDX                         ; 00529a54
    TEST dword ptr [EDI + EDX*0x4 + 0x900],0x7fffffff ; 00529a56
        ;   Label: LAB_00529a56
    JZ 0x00529cab                       ; 00529a61
        ;   XREF to: 00529cab (CONDITIONAL_JUMP)  ; LAB_00529cab
    LEA EAX,[ECX*0x8 + 0x0]             ; 00529a67
    ADD EAX,ECX                         ; 00529a6e
    ADD EAX,EAX                         ; 00529a70
    ADD EAX,EDX                         ; 00529a72
    MOV dword ptr [ESP + 0xe4],EAX      ; 00529a74
    MOV EDX,dword ptr [ESP + 0x54]      ; 00529a7b
        ;   Label: LAB_00529a7b
    LEA EAX,[EDX*0x8 + 0x0]             ; 00529a7f
    ADD EAX,EDX                         ; 00529a86
    SHL EAX,0x2                         ; 00529a88
    ADD EDX,EAX                         ; 00529a8b
    SHL EDX,0x2                         ; 00529a8d
    MOV EDI,dword ptr [ESP + 0xe4]      ; 00529a90
    MOV EAX,EDX                         ; 00529a97
    MOV EDX,dword ptr [EDX + 0x620798]  ; 00529a99 | DAT_00620798
    XOR ESI,ESI                         ; 00529a9f
    CMP EDX,EDI                         ; 00529aa1
    JG 0x00529ac0                       ; 00529aa3
        ;   XREF to: 00529ac0 (CONDITIONAL_JUMP)  ; LAB_00529ac0
    MOV ECX,dword ptr [ESP + 0xe4]      ; 00529aa5
    INC ESI                             ; 00529aac
        ;   Label: LAB_00529aac
    MOV EDX,dword ptr [EAX + 0x62079c]  ; 00529aad | DAT_0062079c | DAT_006207a0
    ADD EAX,0x4                         ; 00529ab3
    CMP EDX,ECX                         ; 00529ab6
    JLE 0x00529aac                      ; 00529ab8
        ;   XREF to: 00529aac (CONDITIONAL_JUMP)  ; LAB_00529aac
    LEA EAX,[EAX]                       ; 00529aba
    MOV dword ptr [ESP + 0x8],ESI       ; 00529ac0
        ;   Label: LAB_00529ac0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00529ac4
    MOV ESI,dword ptr [EAX + 0x620798]  ; 00529ac8 | DAT_0062079c | DAT_006207a0 | DAT_00620798
    CMP EBX,0x8                         ; 00529ace
    JGE 0x00529440                      ; 00529ad1
        ;   XREF to: 00529440 (CONDITIONAL_JUMP)  ; LAB_00529440
    MOV EDX,dword ptr [ESP + 0x54]      ; 00529ad7
    LEA EAX,[EDX*0x8 + 0x0]             ; 00529adb
    ADD EAX,EDX                         ; 00529ae2
    SHL EAX,0x2                         ; 00529ae4
    ADD EDX,EAX                         ; 00529ae7
    SHL EDX,0x2                         ; 00529ae9
    LEA EAX,[EBX*0x4 + 0x0]             ; 00529aec
    ADD EAX,EDX                         ; 00529af3
    MOV dword ptr [ESP + 0xa4],EAX      ; 00529af5
    MOV EDI,dword ptr [ESP + 0xa4]      ; 00529afc
        ;   Label: LAB_00529afc
    MOV EDX,dword ptr [ESP + 0xa4]      ; 00529b03
    MOV EDI,dword ptr [EDI + 0x62079c]  ; 00529b0a | DAT_006207a0 | DAT_006207a4 | DAT_0062079c
    MOV ECX,dword ptr [EDX + 0x620798]  ; 00529b10 | DAT_0062079c | DAT_006207a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00529b16
    SUB EDI,ECX                         ; 00529b1a
    SHL EAX,0x2                         ; 00529b1c
    TEST EDI,EDI                        ; 00529b1f
    JLE 0x00529ba0                      ; 00529b21
        ;   XREF to: 00529ba0 (CONDITIONAL_JUMP)  ; LAB_00529ba0
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00529b27
    LEA EBX,[ESI + ESI*0x1]             ; 00529b2a
    ADD EDX,EAX                         ; 00529b2d
    LEA EAX,[ESI*0x4 + 0x0]             ; 00529b2f
    MOV dword ptr [ESP + 0x3c],EDX      ; 00529b36
    MOV dword ptr [ESP + 0xa0],EAX      ; 00529b3a
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00529b41
        ;   Label: LAB_00529b41
    MOV AX,word ptr [EAX + 0xf8]        ; 00529b45
    MOV word ptr [EBX + 0x1d3c9c8],AX   ; 00529b4c
    CMP AX,0x7                          ; 00529b53
    JZ 0x00529b86                       ; 00529b57
        ;   XREF to: 00529b86 (CONDITIONAL_JUMP)  ; LAB_00529b86
    CMP dword ptr [ESP + 0x20],0x0      ; 00529b59
    JZ 0x00529cc3                       ; 00529b5e
        ;   XREF to: 00529cc3 (CONDITIONAL_JUMP)  ; LAB_00529cc3
    PUSH 0x1d3d748                      ; 00529b64
    PUSH ESI                            ; 00529b69
    MOV ECX,dword ptr [ESP + 0xc]       ; 00529b6a
    PUSH ECX                            ; 00529b6e
    MOV EAX,dword ptr [ESP + 0xc]       ; 00529b6f
    PUSH EAX                            ; 00529b73
    MOV EAX,dword ptr [EBX + 0x1d3c9c6] ; 00529b74
    SAR EAX,0x10                        ; 00529b7a
    PUSH EAX                            ; 00529b7d
    CALL FUN_005292d0                   ; 00529b7e
        ;   XREF to: 005292d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005292d0()
    ADD ESP,0x14                        ; 00529b83
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00529b86
        ;   Label: LAB_00529b86
    ADD EBX,0x2                         ; 00529b8d
    INC ESI                             ; 00529b90
    ADD EAX,0x4                         ; 00529b91
    DEC EDI                             ; 00529b94
    MOV dword ptr [ESP + 0xa0],EAX      ; 00529b95
    TEST EDI,EDI                        ; 00529b9c
    JG 0x00529b41                       ; 00529b9e
        ;   XREF to: 00529b41 (CONDITIONAL_JUMP)  ; LAB_00529b41
    MOV EBX,dword ptr [ESP + 0xa4]      ; 00529ba0
        ;   Label: LAB_00529ba0
    MOV EDI,dword ptr [ESP + 0x8]       ; 00529ba7
    ADD EBX,0x4                         ; 00529bab
    INC EDI                             ; 00529bae
    MOV dword ptr [ESP + 0xa4],EBX      ; 00529baf
    MOV dword ptr [ESP + 0x8],EDI       ; 00529bb6
    CMP EDI,0x8                         ; 00529bba
    JGE 0x00529440                      ; 00529bbd
        ;   XREF to: 00529440 (CONDITIONAL_JUMP)  ; LAB_00529440
    JMP 0x00529afc                      ; 00529bc3
        ;   XREF to: 00529afc (UNCONDITIONAL_JUMP)  ; LAB_00529afc
    MOV dword ptr [ESP + 0x24],EAX      ; 00529bc8
        ;   Label: LAB_00529bc8
    JMP 0x005298ff                      ; 00529bcc
        ;   XREF to: 005298ff (UNCONDITIONAL_JUMP)  ; LAB_005298ff
    FILD word ptr [EBX + 0x1d3c9c8]     ; 00529bd1
        ;   Label: LAB_00529bd1
    FMUL double ptr [0x005eb4be]        ; 00529bd7 | DAT_005eb4be
    FPTAN                               ; 00529bdd
    FSTP ST0                            ; 00529bdf
    MOV EAX,dword ptr [ESP + 0x94]      ; 00529be1
    FSTP float ptr [EAX + 0x1d3ce48]    ; 00529be8
    JMP 0x005299c8                      ; 00529bee
        ;   XREF to: 005299c8 (UNCONDITIONAL_JUMP)  ; LAB_005299c8
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00529bf3
        ;   Label: LAB_00529bf3
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00529bf7
    MOV EDI,dword ptr [EAX + 0x620820]  ; 00529bfb | DAT_00620820
    MOV ESI,dword ptr [ESI + 0x620824]  ; 00529c01 | DAT_00620824
    MOV EDX,dword ptr [ESP + 0xc]       ; 00529c07
    SUB ESI,EDI                         ; 00529c0b
    IMUL EDX,ESI                        ; 00529c0d
    MOV ECX,dword ptr [ESP + 0x6c]      ; 00529c10
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00529c14
    MOV EBX,dword ptr [ECX + 0x620824]  ; 00529c18 | DAT_00620824
    MOV ESI,dword ptr [ESI + 0x620828]  ; 00529c1e | DAT_00620828
    MOV ECX,dword ptr [ESP + 0xc]       ; 00529c24
    SUB ESI,EBX                         ; 00529c28
    IMUL ECX,ESI                        ; 00529c2a
    LEA EAX,[EDI + EDI*0x2]             ; 00529c2d
    ADD EDX,EAX                         ; 00529c30
    ADD EAX,ECX                         ; 00529c32
    MOV dword ptr [ESP + 0xd8],EAX      ; 00529c34
    TEST ESI,ESI                        ; 00529c3b
    JLE 0x00529a07                      ; 00529c3d
        ;   XREF to: 00529a07 (CONDITIONAL_JUMP)  ; LAB_00529a07
    LEA EDI,[EDX + EDX*0x1]             ; 00529c43
    LEA ECX,[EDX*0x4 + 0x0]             ; 00529c46
    MOV EDX,dword ptr [ESP + 0xd8]      ; 00529c4d
    SHL EAX,0x2                         ; 00529c54
    ADD EDX,EDX                         ; 00529c57
    FLD float ptr [ECX + 0x1d3ce48]     ; 00529c59
        ;   Label: LAB_00529c59
    FLD float ptr [ECX + 0x1d3d748]     ; 00529c5f
    ADD EAX,0x4                         ; 00529c65
    ADD EDX,0x2                         ; 00529c68
    DEC ESI                             ; 00529c6b
    MOV BX,word ptr [EDI + 0x1d3c9c8]   ; 00529c6c
    FSTP float ptr [EAX + 0x1d3d744]    ; 00529c73
    FSTP float ptr [EAX + 0x1d3ce44]    ; 00529c79
    MOV word ptr [EDX + 0x1d3c9c6],BX   ; 00529c7f
    MOV EBX,dword ptr [ESP + 0xd8]      ; 00529c86
    FLD float ptr [ECX + 0x1d3e048]     ; 00529c8d
    INC EBX                             ; 00529c93
    FSTP float ptr [EAX + 0x1d3e044]    ; 00529c94
    MOV dword ptr [ESP + 0xd8],EBX      ; 00529c9a
    TEST ESI,ESI                        ; 00529ca1
    JLE 0x00529a07                      ; 00529ca3
        ;   XREF to: 00529a07 (CONDITIONAL_JUMP)  ; LAB_00529a07
    JMP 0x00529c59                      ; 00529ca9
        ;   XREF to: 00529c59 (UNCONDITIONAL_JUMP)  ; LAB_00529c59
    DEC EDX                             ; 00529cab
        ;   Label: LAB_00529cab
    TEST EDX,EDX                        ; 00529cac
    JGE 0x00529cb6                      ; 00529cae
        ;   XREF to: 00529cb6 (CONDITIONAL_JUMP)  ; LAB_00529cb6
    SUB EDI,0x48                        ; 00529cb0
    DEC ECX                             ; 00529cb3
    MOV EDX,EBX                         ; 00529cb4
    TEST ECX,ECX                        ; 00529cb6
        ;   Label: LAB_00529cb6
    JGE 0x00529a56                      ; 00529cb8
        ;   XREF to: 00529a56 (CONDITIONAL_JUMP)  ; LAB_00529a56
    JMP 0x00529a7b                      ; 00529cbe
        ;   XREF to: 00529a7b (UNCONDITIONAL_JUMP)  ; LAB_00529a7b
    FILD word ptr [EBX + 0x1d3c9c8]     ; 00529cc3
        ;   Label: LAB_00529cc3
    FMUL double ptr [0x005eb4be]        ; 00529cc9 | DAT_005eb4be
    FPTAN                               ; 00529ccf
    FSTP ST0                            ; 00529cd1
    MOV EAX,dword ptr [ESP + 0xa0]      ; 00529cd3
    FSTP float ptr [EAX + 0x1d3ce48]    ; 00529cda
    JMP 0x00529b86                      ; 00529ce0
        ;   XREF to: 00529b86 (UNCONDITIONAL_JUMP)  ; LAB_00529b86
    MOV dword ptr [ESP + 0x68],EAX      ; 00529ce5
        ;   Label: LAB_00529ce5
    MOV dword ptr [ESP + 0x44],EAX      ; 00529ce9
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00529ced
    MOV dword ptr [ESP + 0x1c],EDI      ; 00529cf0
    MOV dword ptr [ESP + 0x90],EAX      ; 00529cf4
    MOV ECX,0xffffffff                  ; 00529cfb
        ;   Label: LAB_00529cfb
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00529d00
    MOV ESI,0xc                         ; 00529d04
    INC EAX                             ; 00529d09
    MOV dword ptr [ESP + 0x40],ECX      ; 00529d0a
    MOV dword ptr [ESP + 0x48],EAX      ; 00529d0e
    MOV EBX,dword ptr [ESP + 0x44]      ; 00529d12
        ;   Label: LAB_00529d12
    LEA EAX,[ESI*0x4 + 0x0]             ; 00529d16
    ADD EAX,EBX                         ; 00529d1d
    MOV EBX,dword ptr [EAX + 0x6207f8]  ; 00529d1f | DAT_00620828 | DAT_006207cc
    MOV EDI,dword ptr [EAX + 0x6207f4]  ; 00529d25 | DAT_00620824 | DAT_006207c8
    MOV EDX,dword ptr [ESP + 0x48]      ; 00529d2b
    SUB EBX,EDI                         ; 00529d2f
    IMUL EDX,EBX                        ; 00529d31
    LEA EAX,[EDI + EDI*0x2]             ; 00529d34
    ADD EAX,EDX                         ; 00529d37
    LEA ECX,[EAX + -0x1]                ; 00529d39
    TEST EBX,EBX                        ; 00529d3c
    JLE 0x00529d8d                      ; 00529d3e
        ;   XREF to: 00529d8d (CONDITIONAL_JUMP)  ; LAB_00529d8d
    MOV EDI,0x12                        ; 00529d40
        ;   Label: LAB_00529d40
    MOV EDX,ECX                         ; 00529d45
    MOV EAX,ECX                         ; 00529d47
    SAR EDX,0x1f                        ; 00529d49
    IDIV EDI                            ; 00529d4c
    IMUL EAX,EAX,0x48                   ; 00529d4e
    MOV dword ptr [ESP + 0xe8],0x12     ; 00529d51
    MOV EDX,ECX                         ; 00529d5c
    MOV EDI,dword ptr [EBP + 0x14]      ; 00529d5e
    SAR EDX,0x1f                        ; 00529d61
    ADD EDI,EAX                         ; 00529d64
    MOV EAX,ECX                         ; 00529d66
    IDIV dword ptr [ESP + 0xe8]         ; 00529d68
    TEST dword ptr [EDI + EDX*0x4 + 0x900],0x7fffffff ; 00529d6f
    JZ 0x00529d87                       ; 00529d7a
        ;   XREF to: 00529d87 (CONDITIONAL_JUMP)  ; LAB_00529d87
    MOV dword ptr [ESP + 0x40],ESI      ; 00529d7c
    MOV ESI,0xfffffff6                  ; 00529d80
    MOV EBX,ESI                         ; 00529d85
    DEC EBX                             ; 00529d87
        ;   Label: LAB_00529d87
    DEC ECX                             ; 00529d88
    TEST EBX,EBX                        ; 00529d89
    JG 0x00529d40                       ; 00529d8b
        ;   XREF to: 00529d40 (CONDITIONAL_JUMP)  ; LAB_00529d40
    DEC ESI                             ; 00529d8d
        ;   Label: LAB_00529d8d
    TEST ESI,ESI                        ; 00529d8e
    JGE 0x00529d12                      ; 00529d90
        ;   XREF to: 00529d12 (CONDITIONAL_JUMP)  ; LAB_00529d12
    MOV EAX,dword ptr [ESP + 0x40]      ; 00529d92
    INC EAX                             ; 00529d96
    MOV dword ptr [ESP + 0xd0],EAX      ; 00529d97
    MOV EAX,dword ptr [ESP + 0x90]      ; 00529d9e
    MOV ESI,dword ptr [ESP + 0xd0]      ; 00529da5
    MOV dword ptr [ESP + 0x4c],EAX      ; 00529dac
    SHL ESI,0x2                         ; 00529db0
    MOV EAX,dword ptr [ESP + 0x68]      ; 00529db3
    ADD EAX,ESI                         ; 00529db7
    MOV dword ptr [ESP + 0x88],EAX      ; 00529db9
    CMP dword ptr [ESP + 0xd0],0xc      ; 00529dc0
    JGE 0x00529ebe                      ; 00529dc8
        ;   XREF to: 00529ebe (CONDITIONAL_JUMP)  ; LAB_00529ebe
    MOV dword ptr [ESP + 0x8c],ESI      ; 00529dce
    MOV EAX,dword ptr [ESP + 0x88]      ; 00529dd5
        ;   Label: LAB_00529dd5
    MOV ESI,dword ptr [ESP + 0x88]      ; 00529ddc
    MOV EDI,dword ptr [EAX + 0x6207f4]  ; 00529de3 | DAT_00620828 | DAT_0062082c
    MOV ESI,dword ptr [ESI + 0x6207f8]  ; 00529de9 | DAT_0062082c | DAT_00620830
    SUB ESI,EDI                         ; 00529def
    LEA EAX,[EDI + EDI*0x2]             ; 00529df1
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00529df4
    IMUL EDI,ESI                        ; 00529df8
    ADD EDI,EAX                         ; 00529dfb
    TEST ESI,ESI                        ; 00529dfd
    JLE 0x00529e84                      ; 00529dff
        ;   XREF to: 00529e84 (CONDITIONAL_JUMP)  ; LAB_00529e84
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00529e05
    ADD EAX,dword ptr [ESP + 0x8c]      ; 00529e09
    LEA EBX,[EDI + EDI*0x1]             ; 00529e10
    MOV dword ptr [ESP + 0x50],EAX      ; 00529e13
    LEA EAX,[EDI*0x4 + 0x0]             ; 00529e17
    MOV dword ptr [ESP + 0x84],EAX      ; 00529e1e
    MOV EAX,dword ptr [ESP + 0x50]      ; 00529e25
        ;   Label: LAB_00529e25
    MOV AX,word ptr [EAX + 0x154]       ; 00529e29
    MOV word ptr [EBX + 0x1d3c9c8],AX   ; 00529e30
    CMP AX,0x7                          ; 00529e37
    JZ 0x00529e6a                       ; 00529e3b
        ;   XREF to: 00529e6a (CONDITIONAL_JUMP)  ; LAB_00529e6a
    CMP dword ptr [ESP + 0x20],0x0      ; 00529e3d
    JZ 0x00529f90                       ; 00529e42
        ;   XREF to: 00529f90 (CONDITIONAL_JUMP)  ; LAB_00529f90
    PUSH 0x1d3d748                      ; 00529e48
    PUSH EDI                            ; 00529e4d
    MOV EDX,dword ptr [ESP + 0xc]       ; 00529e4e
    PUSH EDX                            ; 00529e52
    MOV ECX,dword ptr [ESP + 0xc]       ; 00529e53
    MOV EAX,dword ptr [EBX + 0x1d3c9c6] ; 00529e57
    PUSH ECX                            ; 00529e5d
    SAR EAX,0x10                        ; 00529e5e
    PUSH EAX                            ; 00529e61
    CALL FUN_005292d0                   ; 00529e62
        ;   XREF to: 005292d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005292d0()
    ADD ESP,0x14                        ; 00529e67
    MOV EDX,dword ptr [ESP + 0x84]      ; 00529e6a
        ;   Label: LAB_00529e6a
    ADD EBX,0x2                         ; 00529e71
    INC EDI                             ; 00529e74
    ADD EDX,0x4                         ; 00529e75
    DEC ESI                             ; 00529e78
    MOV dword ptr [ESP + 0x84],EDX      ; 00529e79
    TEST ESI,ESI                        ; 00529e80
    JG 0x00529e25                       ; 00529e82
        ;   XREF to: 00529e25 (CONDITIONAL_JUMP)  ; LAB_00529e25
    MOV EDX,dword ptr [ESP + 0x88]      ; 00529e84
        ;   Label: LAB_00529e84
    MOV ECX,dword ptr [ESP + 0x8c]      ; 00529e8b
    MOV EBX,dword ptr [ESP + 0xd0]      ; 00529e92
    ADD EDX,0x4                         ; 00529e99
    ADD ECX,0x4                         ; 00529e9c
    INC EBX                             ; 00529e9f
    MOV dword ptr [ESP + 0x88],EDX      ; 00529ea0
    MOV dword ptr [ESP + 0x8c],ECX      ; 00529ea7
    MOV dword ptr [ESP + 0xd0],EBX      ; 00529eae
    CMP ECX,0x30                        ; 00529eb5
    JL 0x00529dd5                       ; 00529eb8
        ;   XREF to: 00529dd5 (CONDITIONAL_JUMP)  ; LAB_00529dd5
    MOV EAX,dword ptr [ESP + 0x68]      ; 00529ebe
        ;   Label: LAB_00529ebe
    MOV ESI,dword ptr [ESP + 0x68]      ; 00529ec2
    MOV EDI,dword ptr [EAX + 0x620820]  ; 00529ec6 | DAT_00620820
    MOV ESI,dword ptr [ESI + 0x620824]  ; 00529ecc | DAT_00620824
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00529ed2
    SUB ESI,EDI                         ; 00529ed6
    IMUL EDX,ESI                        ; 00529ed8
    MOV ECX,dword ptr [ESP + 0x68]      ; 00529edb
    MOV ESI,dword ptr [ESP + 0x68]      ; 00529edf
    MOV EBX,dword ptr [ECX + 0x620824]  ; 00529ee3 | DAT_00620824
    MOV ESI,dword ptr [ESI + 0x620828]  ; 00529ee9 | DAT_00620828
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00529eef
    SUB ESI,EBX                         ; 00529ef3
    IMUL ECX,ESI                        ; 00529ef5
    LEA EAX,[EDI + EDI*0x2]             ; 00529ef8
    ADD EDX,EAX                         ; 00529efb
    ADD EAX,ECX                         ; 00529efd
    MOV dword ptr [ESP + 0xdc],EAX      ; 00529eff
    TEST ESI,ESI                        ; 00529f06
    JLE 0x00529f68                      ; 00529f08
        ;   XREF to: 00529f68 (CONDITIONAL_JUMP)  ; LAB_00529f68
    MOV ECX,dword ptr [ESP + 0xdc]      ; 00529f0a
    LEA EDI,[EDX + EDX*0x1]             ; 00529f11
    SHL EAX,0x2                         ; 00529f14
    SHL EDX,0x2                         ; 00529f17
    ADD ECX,ECX                         ; 00529f1a
    FLD float ptr [EDX + 0x1d3ce48]     ; 00529f1c
        ;   Label: LAB_00529f1c
    FLD float ptr [EDX + 0x1d3d748]     ; 00529f22
    ADD EAX,0x4                         ; 00529f28
    ADD ECX,0x2                         ; 00529f2b
    DEC ESI                             ; 00529f2e
    MOV BX,word ptr [EDI + 0x1d3c9c8]   ; 00529f2f
    FSTP float ptr [EAX + 0x1d3d744]    ; 00529f36
    FSTP float ptr [EAX + 0x1d3ce44]    ; 00529f3c
    MOV word ptr [ECX + 0x1d3c9c6],BX   ; 00529f42
    MOV EBX,dword ptr [ESP + 0xdc]      ; 00529f49
    FLD float ptr [EDX + 0x1d3e048]     ; 00529f50
    INC EBX                             ; 00529f56
    FSTP float ptr [EAX + 0x1d3e044]    ; 00529f57
    MOV dword ptr [ESP + 0xdc],EBX      ; 00529f5d
    TEST ESI,ESI                        ; 00529f64
    JG 0x00529f1c                       ; 00529f66
        ;   XREF to: 00529f1c (CONDITIONAL_JUMP)  ; LAB_00529f1c
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00529f68
        ;   Label: LAB_00529f68
    MOV ESI,dword ptr [ESP + 0x90]      ; 00529f6c
    INC EDI                             ; 00529f73
    ADD ESI,0x34                        ; 00529f74
    MOV dword ptr [ESP + 0x1c],EDI      ; 00529f77
    MOV dword ptr [ESP + 0x90],ESI      ; 00529f7b
    CMP EDI,0x3                         ; 00529f82
    JGE 0x00529440                      ; 00529f85
        ;   XREF to: 00529440 (CONDITIONAL_JUMP)  ; LAB_00529440
    JMP 0x00529cfb                      ; 00529f8b
        ;   XREF to: 00529cfb (UNCONDITIONAL_JUMP)  ; LAB_00529cfb
    FILD word ptr [EBX + 0x1d3c9c8]     ; 00529f90
        ;   Label: LAB_00529f90
    FMUL double ptr [0x005eb4be]        ; 00529f96 | DAT_005eb4be
    FPTAN                               ; 00529f9c
    FSTP ST0                            ; 00529f9e
    MOV EAX,dword ptr [ESP + 0x84]      ; 00529fa0
    FSTP float ptr [EAX + 0x1d3ce48]    ; 00529fa7
    JMP 0x00529e6a                      ; 00529fad
        ;   XREF to: 00529e6a (UNCONDITIONAL_JUMP)  ; LAB_00529e6a
    DEC EDX                             ; 00529fb2
        ;   Label: LAB_00529fb2
    TEST EDX,EDX                        ; 00529fb3
    JGE 0x00529fbd                      ; 00529fb5
        ;   XREF to: 00529fbd (CONDITIONAL_JUMP)  ; LAB_00529fbd
    SUB EBX,0x48                        ; 00529fb7
    DEC ECX                             ; 00529fba
    MOV EDX,ESI                         ; 00529fbb
    TEST ECX,ECX                        ; 00529fbd
        ;   Label: LAB_00529fbd
    JGE 0x0052962c                      ; 00529fbf
        ;   XREF to: 0052962c (CONDITIONAL_JUMP)  ; LAB_0052962c
    JMP 0x0052964b                      ; 00529fc5
        ;   XREF to: 0052964b (UNCONDITIONAL_JUMP)  ; LAB_0052964b
    FILD word ptr [EBX + 0x1d3c9c8]     ; 00529fca
        ;   Label: LAB_00529fca
    FMUL double ptr [0x005eb4be]        ; 00529fd0 | DAT_005eb4be
    FPTAN                               ; 00529fd6
    FSTP ST0                            ; 00529fd8
    MOV EAX,dword ptr [ESP + 0x74]      ; 00529fda
    FSTP float ptr [EAX + 0x1d3ce48]    ; 00529fde
    JMP 0x00529737                      ; 00529fe4
        ;   XREF to: 00529737 (UNCONDITIONAL_JUMP)  ; LAB_00529737
    MOV ECX,dword ptr [EAX]             ; 00529fe9
        ;   Label: LAB_00529fe9
    MOV dword ptr [EDX],ECX             ; 00529feb
    MOV ECX,dword ptr [EAX + 0x900]     ; 00529fed
    MOV dword ptr [EDX + 0x900],ECX     ; 00529ff3
    JMP 0x00529572                      ; 00529ff9
        ;   XREF to: 00529572 (UNCONDITIONAL_JUMP)  ; LAB_00529572
    CMP dword ptr [ESP + 0x14],0x0      ; 00529ffe
        ;   Label: LAB_00529ffe
    JZ 0x0052a054                       ; 0052a003
        ;   XREF to: 0052a054 (CONDITIONAL_JUMP)  ; LAB_0052a054
    MOV ECX,dword ptr [ESP + 0xd4]      ; 0052a005
    SHL ECX,0x2                         ; 0052a00c
    CMP dword ptr [ESP + 0x20],0x0      ; 0052a00f
    JZ 0x0052a02d                       ; 0052a014
        ;   XREF to: 0052a02d (CONDITIONAL_JUMP)  ; LAB_0052a02d
    FLD float ptr [EAX]                 ; 0052a016
    FMUL float ptr [ECX + 0x1d3d748]    ; 0052a018
    FSTP float ptr [EDX]                ; 0052a01e
    FLD float ptr [EAX]                 ; 0052a020
    FMUL float ptr [ECX + 0x1d3e048]    ; 0052a022
    JMP 0x0052956c                      ; 0052a028
        ;   XREF to: 0052956c (UNCONDITIONAL_JUMP)  ; LAB_0052956c
    FLD1                                ; 0052a02d
        ;   Label: LAB_0052a02d
    FADD float ptr [ECX + 0x1d3ce48]    ; 0052a02f
    FDIVR float ptr [ECX + 0x1d3ce48]   ; 0052a035
    FMUL float ptr [EAX]                ; 0052a03b
    FLD1                                ; 0052a03d
    FXCH                                ; 0052a03f
    FSTP float ptr [EDX]                ; 0052a041
    FADD float ptr [ECX + 0x1d3ce48]    ; 0052a043
    FLD1                                ; 0052a049
    FDIVRP                              ; 0052a04b
    FMUL float ptr [EAX]                ; 0052a04d
    JMP 0x0052956c                      ; 0052a04f
        ;   XREF to: 0052956c (UNCONDITIONAL_JUMP)  ; LAB_0052956c
    PUSH 0x1d404c8                      ; 0052a054 | DAT_01d404c8
        ;   Label: LAB_0052a054
    MOV EAX,0x5eb486                    ; 0052a059 | = "..\\sound\\mp3.cpp"
    MOV EDX,0xa3a                       ; 0052a05e
    PUSH 0x5eb497                       ; 0052a063 | = "Error in streo processing.  File: %s"
    MOV [0x01d1d400],EAX                ; 0052a068 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0052a06d | DAT_01d1d404
    CALL FUN_005030e0                   ; 0052a073
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 0052a078
    JMP 0x00529572                      ; 0052a07b
        ;   XREF to: 00529572 (UNCONDITIONAL_JUMP)  ; LAB_00529572
    MOV ESI,dword ptr [EBP + 0x14]      ; 0052a080
        ;   Label: LAB_0052a080
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052a083
    XOR EBX,EBX                         ; 0052a086
    ADD ESI,0x48                        ; 0052a088
    MOV dword ptr [ESP + 0xb0],EAX      ; 0052a08b
    IMUL EAX,EBX,0x48                   ; 0052a092
        ;   Label: LAB_0052a092
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052a095
    MOV ECX,ESI                         ; 0052a098
    ADD EAX,EDX                         ; 0052a09a
    MOV EDX,dword ptr [ESP + 0xb0]      ; 0052a09c
    ADD EDX,0x4                         ; 0052a0a3
        ;   Label: LAB_0052a0a3
    FLD float ptr [EAX]                 ; 0052a0a6
    ADD EAX,0x4                         ; 0052a0a8
    FSTP float ptr [EDX + -0x4]         ; 0052a0ab
    CMP EAX,ECX                         ; 0052a0ae
    JNZ 0x0052a0a3                      ; 0052a0b0
        ;   XREF to: 0052a0a3 (CONDITIONAL_JUMP)  ; LAB_0052a0a3
    MOV ECX,dword ptr [ESP + 0xb0]      ; 0052a0b2
    INC EBX                             ; 0052a0b9
    ADD ECX,0x48                        ; 0052a0ba
    ADD ESI,0x48                        ; 0052a0bd
    MOV dword ptr [ESP + 0xb0],ECX      ; 0052a0c0
    CMP EBX,0x20                        ; 0052a0c7
    JGE 0x005295d5                      ; 0052a0ca
        ;   XREF to: 005295d5 (CONDITIONAL_JUMP)  ; LAB_005295d5
    JMP 0x0052a092                      ; 0052a0d0
        ;   XREF to: 0052a092 (UNCONDITIONAL_JUMP)  ; LAB_0052a092

