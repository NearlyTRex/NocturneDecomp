; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_applyPolyphaseWindow_FUN_005090f0(float *input_samples,float *output_samples,int mpeg_block_type)
;
; Parameters:
; float *          Stack[0x4]:4   input_samples
; float *          Stack[0x8]:4   output_samples
; int              Stack[0xc]:4   mpeg_block_type
; Local Variables:
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
;   sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_00509600 at 0050963f
;
; Referenced Globals:
;   undefined4 DAT_005e0273
;   undefined4 DAT_005e027b
;   undefined4 DAT_005e0283
;   undefined4 DAT_005e028b
;   undefined4 DAT_005e0293
;   undefined4 DAT_005e029b
;   undefined4 DAT_005e02a3
;   undefined4 DAT_005e02ab
;   undefined4 DAT_00618e80
;   undefined4 DAT_01d21c08
;   undefined4 DAT_01d21c0c
;   undefined4 DAT_01d21c10
;   undefined4 DAT_01d21c14
;   undefined4 DAT_01d21c18
;   undefined4 DAT_01d21c20
;   ... and 14 more
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005090f0
        ;   Label: sound_mp3.cpp_applyPolyphaseWindow_FUN_005090f0
    PUSH ESI                            ; 005090f1
    PUSH EDI                            ; 005090f2
    PUSH EBP                            ; 005090f3
    MOV EBP,ESP                         ; 005090f4
    SUB ESP,0x8c                        ; 005090f6
    CMP dword ptr [0x00618e80],0x1      ; 005090fc | DAT_00618e80
    JNZ 0x005093bf                      ; 00509103
        ;   XREF to: 005093bf (CONDITIONAL_JUMP)  ; LAB_005093bf
    XOR EDX,EDX                         ; 00509109
    XOR ECX,ECX                         ; 0050910b
    FLD double ptr [0x005e0273]         ; 0050910d | DAT_005e0273
    FLD double ptr [0x005e0293]         ; 00509113 | DAT_005e0293
    MOV dword ptr [EBP + -0x4],EDX      ; 00509119
        ;   Label: LAB_00509119
    FILD dword ptr [EBP + -0x4]         ; 0050911c
    FADD ST0,ST1                        ; 0050911f
    FMUL ST2                            ; 00509121
    FSIN                                ; 00509123
    ADD ECX,0x8                         ; 00509125
    INC EDX                             ; 00509128
    FSTP double ptr [ECX + 0x1d21a50]   ; 00509129
    CMP EDX,0x24                        ; 0050912f
    JL 0x00509119                       ; 00509132
        ;   XREF to: 00509119 (CONDITIONAL_JUMP)  ; LAB_00509119
    FSTP ST0                            ; 00509134
    FSTP ST0                            ; 00509136
    XOR EDX,EDX                         ; 00509138
    XOR ECX,ECX                         ; 0050913a
    FLD double ptr [0x005e0273]         ; 0050913c | DAT_005e0273
    FLD double ptr [0x005e0293]         ; 00509142 | DAT_005e0293
    MOV dword ptr [EBP + -0x4],EDX      ; 00509148
        ;   Label: LAB_00509148
    FILD dword ptr [EBP + -0x4]         ; 0050914b
    FADD ST0,ST1                        ; 0050914e
    FMUL ST2                            ; 00509150
    FSIN                                ; 00509152
    ADD ECX,0x8                         ; 00509154
    INC EDX                             ; 00509157
    FSTP double ptr [ECX + 0x1d21b70]   ; 00509158
    CMP EDX,0x12                        ; 0050915e
    JL 0x00509148                       ; 00509161
        ;   XREF to: 00509148 (CONDITIONAL_JUMP)  ; LAB_00509148
    FSTP ST0                            ; 00509163
    MOV EAX,0x90                        ; 00509165
    MOV EBX,0x3ff00000                  ; 0050916a
    FSTP ST0                            ; 0050916f
    ADD EAX,0x8                         ; 00509171
        ;   Label: LAB_00509171
    XOR ECX,ECX                         ; 00509174
    MOV dword ptr [EAX + 0x1d21b74],EBX ; 00509176 | DAT_01d21c0c | DAT_01d21c14
    MOV dword ptr [EAX + 0x1d21b70],ECX ; 0050917c | DAT_01d21c08 | DAT_01d21c10
    CMP EAX,0xc0                        ; 00509182
    JNZ 0x00509171                      ; 00509187
        ;   XREF to: 00509171 (CONDITIONAL_JUMP)  ; LAB_00509171
    MOV EDX,0x18                        ; 00509189
    MOV ECX,EAX                         ; 0050918e
    FLD double ptr [0x005e027b]         ; 00509190 | DAT_005e027b
    FLD double ptr [0x005e029b]         ; 00509196 | DAT_005e029b
    FLD double ptr [0x005e0293]         ; 0050919c | DAT_005e0293
    MOV dword ptr [EBP + -0x4],EDX      ; 005091a2
        ;   Label: LAB_005091a2
    FILD dword ptr [EBP + -0x4]         ; 005091a5
    FADD ST0,ST1                        ; 005091a8
    FADD ST0,ST2                        ; 005091aa
    FMUL ST3                            ; 005091ac
    FSIN                                ; 005091ae
    ADD ECX,0x8                         ; 005091b0
    INC EDX                             ; 005091b3
    FSTP double ptr [ECX + 0x1d21b70]   ; 005091b4 | DAT_01d21c18 | DAT_01d21c20
    CMP EDX,0x1e                        ; 005091ba
    JL 0x005091a2                       ; 005091bd
        ;   XREF to: 005091a2 (CONDITIONAL_JUMP)  ; LAB_005091a2
    FSTP ST0                            ; 005091bf
    MOV EAX,0xf0                        ; 005091c1
    FSTP ST0                            ; 005091c6
    FSTP ST0                            ; 005091c8
    ADD EAX,0x8                         ; 005091ca
        ;   Label: LAB_005091ca
    XOR ESI,ESI                         ; 005091cd
    MOV dword ptr [EAX + 0x1d21b70],ESI ; 005091cf | DAT_01d21c68 | DAT_01d21c70
    MOV dword ptr [EAX + 0x1d21b74],ESI ; 005091d5 | DAT_01d21c6c | DAT_01d21c74
    CMP EAX,0x120                       ; 005091db
    JNZ 0x005091ca                      ; 005091e0
        ;   XREF to: 005091ca (CONDITIONAL_JUMP)  ; LAB_005091ca
    XOR EAX,EAX                         ; 005091e2
    ADD EAX,0x8                         ; 005091e4
        ;   Label: LAB_005091e4
    XOR EDX,EDX                         ; 005091e7
    MOV dword ptr [EAX + 0x1d21db0],EDX ; 005091e9
    MOV dword ptr [EAX + 0x1d21db4],EDX ; 005091ef
    CMP EAX,0x30                        ; 005091f5
    JNZ 0x005091e4                      ; 005091f8
        ;   XREF to: 005091e4 (CONDITIONAL_JUMP)  ; LAB_005091e4
    MOV EDX,0x6                         ; 005091fa
    MOV ECX,EAX                         ; 005091ff
    FLD double ptr [0x005e027b]         ; 00509201 | DAT_005e027b
    FLD double ptr [0x005e02a3]         ; 00509207 | DAT_005e02a3
    FLD double ptr [0x005e0293]         ; 0050920d | DAT_005e0293
    MOV dword ptr [EBP + -0x4],EDX      ; 00509213
        ;   Label: LAB_00509213
    FILD dword ptr [EBP + -0x4]         ; 00509216
    FADD ST0,ST1                        ; 00509219
    FADD ST0,ST2                        ; 0050921b
    FMUL ST3                            ; 0050921d
    FSIN                                ; 0050921f
    ADD ECX,0x8                         ; 00509221
    INC EDX                             ; 00509224
    FSTP double ptr [ECX + 0x1d21db0]   ; 00509225
    CMP EDX,0xc                         ; 0050922b
    JL 0x00509213                       ; 0050922e
        ;   XREF to: 00509213 (CONDITIONAL_JUMP)  ; LAB_00509213
    FSTP ST0                            ; 00509230
    MOV EAX,0x60                        ; 00509232
    MOV ESI,0x3ff00000                  ; 00509237
    FSTP ST0                            ; 0050923c
    FSTP ST0                            ; 0050923e
    ADD EAX,0x8                         ; 00509240
        ;   Label: LAB_00509240
    XOR EBX,EBX                         ; 00509243
    MOV dword ptr [EAX + 0x1d21db4],ESI ; 00509245 | DAT_01d21e1c | DAT_01d21e24
    MOV dword ptr [EAX + 0x1d21db0],EBX ; 0050924b | DAT_01d21e18 | DAT_01d21e20
    CMP EAX,0x90                        ; 00509251
    JNZ 0x00509240                      ; 00509256
        ;   XREF to: 00509240 (CONDITIONAL_JUMP)  ; LAB_00509240
    MOV EDX,0x12                        ; 00509258
    MOV ECX,EAX                         ; 0050925d
    FLD double ptr [0x005e0273]         ; 0050925f | DAT_005e0273
    FLD double ptr [0x005e0293]         ; 00509265 | DAT_005e0293
    MOV dword ptr [EBP + -0x4],EDX      ; 0050926b
        ;   Label: LAB_0050926b
    FILD dword ptr [EBP + -0x4]         ; 0050926e
    FADD ST0,ST1                        ; 00509271
    FMUL ST2                            ; 00509273
    FSIN                                ; 00509275
    ADD ECX,0x8                         ; 00509277
    INC EDX                             ; 0050927a
    FSTP double ptr [ECX + 0x1d21db0]   ; 0050927b | DAT_01d21e28 | DAT_01d21e30
    CMP EDX,0x24                        ; 00509281
    JL 0x0050926b                       ; 00509284
        ;   XREF to: 0050926b (CONDITIONAL_JUMP)  ; LAB_0050926b
    FSTP ST0                            ; 00509286
    FSTP ST0                            ; 00509288
    XOR EDX,EDX                         ; 0050928a
    XOR ECX,ECX                         ; 0050928c
    FLD double ptr [0x005e027b]         ; 0050928e | DAT_005e027b
    FLD double ptr [0x005e0293]         ; 00509294 | DAT_005e0293
    MOV dword ptr [EBP + -0x4],EDX      ; 0050929a
        ;   Label: LAB_0050929a
    FILD dword ptr [EBP + -0x4]         ; 0050929d
    FADD ST0,ST1                        ; 005092a0
    FMUL ST2                            ; 005092a2
    FSIN                                ; 005092a4
    ADD ECX,0x8                         ; 005092a6
    INC EDX                             ; 005092a9
    FSTP double ptr [ECX + 0x1d21c90]   ; 005092aa
    CMP EDX,0xc                         ; 005092b0
    JL 0x0050929a                       ; 005092b3
        ;   XREF to: 0050929a (CONDITIONAL_JUMP)  ; LAB_0050929a
    FSTP ST0                            ; 005092b5
    MOV EAX,0x60                        ; 005092b7
    FSTP ST0                            ; 005092bc
    ADD EAX,0x8                         ; 005092be
        ;   Label: LAB_005092be
    XOR EDI,EDI                         ; 005092c1
    MOV dword ptr [EAX + 0x1d21c90],EDI ; 005092c3 | DAT_01d21cf8 | DAT_01d21d00
    MOV dword ptr [EAX + 0x1d21c94],EDI ; 005092c9 | DAT_01d21cfc | DAT_01d21d04
    CMP EAX,0x120                       ; 005092cf
    JNZ 0x005092be                      ; 005092d4
        ;   XREF to: 005092be (CONDITIONAL_JUMP)  ; LAB_005092be
    MOV EBX,0xc                         ; 005092d6
    MOV dword ptr [EBP + -0x14],EDI     ; 005092db
    MOV EDI,0x1                         ; 005092de
    MOV dword ptr [EBP + -0x20],EBX     ; 005092e3
    MOV ECX,0x1                         ; 005092e6
        ;   Label: LAB_005092e6
    MOV EDX,dword ptr [EBP + -0x20]     ; 005092eb
    ADD EDX,ECX                         ; 005092ee
    MOV EBX,dword ptr [EBP + -0x14]     ; 005092f0
    CMP EDX,ECX                         ; 005092f3
    JLE 0x00509324                      ; 005092f5
        ;   XREF to: 00509324 (CONDITIONAL_JUMP)  ; LAB_00509324
    FLD double ptr [0x005e0283]         ; 005092f7 | DAT_005e0283
    LEA ESI,[EDI + 0x6]                 ; 005092fd
    MOV dword ptr [EBP + -0x4],ESI      ; 00509300
        ;   Label: LAB_00509300
    FILD dword ptr [EBP + -0x4]         ; 00509303
    FMUL ST1                            ; 00509306
    MOV dword ptr [EBP + -0x4],ECX      ; 00509308
    FILD dword ptr [EBP + -0x4]         ; 0050930b
    FMULP                               ; 0050930e
    FCOS                                ; 00509310
    ADD EBX,0x8                         ; 00509312
    ADD ECX,0x2                         ; 00509315
    FSTP double ptr [EBX + 0x1d21ed0]   ; 00509318
    CMP ECX,EDX                         ; 0050931e
    JL 0x00509300                       ; 00509320
        ;   XREF to: 00509300 (CONDITIONAL_JUMP)  ; LAB_00509300
    FSTP ST0                            ; 00509322
    MOV ESI,dword ptr [EBP + -0x14]     ; 00509324
        ;   Label: LAB_00509324
    ADD ESI,0x30                        ; 00509327
    ADD EDI,0x2                         ; 0050932a
    MOV dword ptr [EBP + -0x14],ESI     ; 0050932d
    CMP EDI,0x19                        ; 00509330
    JNZ 0x005092e6                      ; 00509333
        ;   XREF to: 005092e6 (CONDITIONAL_JUMP)  ; LAB_005092e6
    MOV EAX,0x90                        ; 00509335
    MOV EDX,0x26                        ; 0050933a
    XOR EDI,EDI                         ; 0050933f
    MOV dword ptr [EBP + -0x1c],EAX     ; 00509341
    MOV dword ptr [EBP + -0x18],EDX     ; 00509344
    MOV dword ptr [EBP + -0x10],EDI     ; 00509347
    IMUL EBX,dword ptr [EBP + -0x10],0x90 ; 0050934a
        ;   Label: LAB_0050934a
    MOV EAX,dword ptr [EBP + -0x10]     ; 00509351
    ADD EAX,EAX                         ; 00509354
    ADD EAX,0x13                        ; 00509356
    IMUL ECX,EAX,0x0                    ; 00509359
    MOV ESI,dword ptr [EBP + -0x18]     ; 0050935c
    MOV EDI,dword ptr [EBP + -0x1c]     ; 0050935f
    ADD ECX,EAX                         ; 00509362
    FLD double ptr [0x005e028b]         ; 00509364 | DAT_005e028b
    MOV dword ptr [EBP + -0x4],0x90     ; 0050936a
        ;   Label: LAB_0050936a
    MOV EDX,ECX                         ; 00509371
    MOV EAX,ECX                         ; 00509373
    SAR EDX,0x1f                        ; 00509375
    IDIV dword ptr [EBP + -0x4]         ; 00509378
    MOV dword ptr [EBP + -0x4],EDX      ; 0050937b
    FILD dword ptr [EBP + -0x4]         ; 0050937e
    FMUL ST1                            ; 00509381
    FCOS                                ; 00509383
    ADD EBX,0x8                         ; 00509385
    ADD ECX,ESI                         ; 00509388
    FSTP double ptr [EBX + 0x1d22110]   ; 0050938a
    CMP EBX,EDI                         ; 00509390
    JNZ 0x0050936a                      ; 00509392
        ;   XREF to: 0050936a (CONDITIONAL_JUMP)  ; LAB_0050936a
    FSTP ST0                            ; 00509394
    MOV ESI,dword ptr [EBP + -0x18]     ; 00509396
    MOV EDI,dword ptr [EBP + -0x10]     ; 00509399
    MOV EBX,dword ptr [EBP + -0x1c]     ; 0050939c
    ADD ESI,0x4                         ; 0050939f
    INC EDI                             ; 005093a2
    ADD EBX,0x90                        ; 005093a3
    MOV dword ptr [EBP + -0x18],ESI     ; 005093a9
    MOV dword ptr [EBP + -0x10],EDI     ; 005093ac
    MOV dword ptr [EBP + -0x1c],EBX     ; 005093af
    CMP EDI,0x24                        ; 005093b2
    JL 0x0050934a                       ; 005093b5
        ;   XREF to: 0050934a (CONDITIONAL_JUMP)  ; LAB_0050934a
    XOR EDX,EDX                         ; 005093b7
    MOV dword ptr [0x00618e80],EDX      ; 005093b9 | DAT_00618e80
    CMP dword ptr [EBP + 0x1c],0x2      ; 005093bf
        ;   Label: LAB_005093bf
    JZ 0x005094a0                       ; 005093c3
        ;   XREF to: 005094a0 (CONDITIONAL_JUMP)  ; LAB_005094a0
    XOR EDX,EDX                         ; 005093c9
    MOV dword ptr [EBP + -0x34],EDX     ; 005093cb
    MOV EDI,dword ptr [EBP + 0x14]      ; 005093ce
    LEA EAX,[EDX*0x4 + 0x0]             ; 005093d1
        ;   Label: LAB_005093d1
    ADD EAX,EDI                         ; 005093d8
    FLD float ptr [EAX]                 ; 005093da
    FABS                                ; 005093dc
    FCOMP double ptr [0x005e02ab]       ; 005093de | DAT_005e02ab
    FNSTSW AX                           ; 005093e4
    SAHF                                ; 005093e6
    JBE 0x005093f6                      ; 005093e7
        ;   XREF to: 005093f6 (CONDITIONAL_JUMP)  ; LAB_005093f6
    MOV EAX,dword ptr [EBP + -0x34]     ; 005093e9
    INC dword ptr [EBP + -0x34]         ; 005093ec
    MOV dword ptr [EBP + EAX*0x4 + 0xffffff74],EDX ; 005093ef
    INC EDX                             ; 005093f6
        ;   Label: LAB_005093f6
    CMP EDX,0x12                        ; 005093f7
    JL 0x005093d1                       ; 005093fa
        ;   XREF to: 005093d1 (CONDITIONAL_JUMP)  ; LAB_005093d1
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005093fc
    LEA EAX,[EDX*0x8 + 0x0]             ; 005093ff
    ADD EAX,EDX                         ; 00509406
    MOV EDX,0x1d21a58                   ; 00509408
    SHL EAX,0x5                         ; 0050940d
    XOR EBX,EBX                         ; 00509410
    ADD EDX,EAX                         ; 00509412
    MOV dword ptr [EBP + -0xc],EBX      ; 00509414
    MOV dword ptr [EBP + -0x24],EDX     ; 00509417
    MOV EAX,dword ptr [EBP + -0xc]      ; 0050941a
        ;   Label: LAB_0050941a
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050941d
    SHL EAX,0x2                         ; 00509420
    ADD EDX,EAX                         ; 00509423
    MOV dword ptr [EBP + -0x30],EDX     ; 00509425
    MOV ESI,dword ptr [EBP + -0xc]      ; 00509428
    IMUL EAX,ESI,0x90                   ; 0050942b
    MOV EDX,0x1d22118                   ; 00509431
    ADD EDX,EAX                         ; 00509436
    MOV dword ptr [EBP + -0x2c],EDX     ; 00509438
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050943b
    MOV dword ptr [EBP + -0x8],EAX      ; 0050943e
    MOV EDX,dword ptr [EBP + -0x24]     ; 00509441
    LEA EAX,[ESI*0x8 + 0x0]             ; 00509444
    ADD EDX,EAX                         ; 0050944b
    MOV dword ptr [EBP + -0x28],EDX     ; 0050944d
    FLDZ                                ; 00509450
    MOV ECX,dword ptr [EBP + 0xffffffcc] ; 00509452
    SUB ECX,0x1                         ; 00509458
    JL 0x00509485                       ; 0050945b
        ;   XREF to: 00509485 (CONDITIONAL_JUMP)  ; LAB_00509485
    MOV EBX,dword ptr [EBP + 0xffffffd4] ; 0050945d
    MOV ESI,dword ptr [EBP + 0xfffffff8] ; 00509463
    MOV EAX,dword ptr [EBP + ECX*0x4 + 0xffffff74] ; 00509469
        ;   Label: LAB_00509469
    FLD float ptr [ESI + EAX*0x4]       ; 00509470
    FMUL double ptr [EBX + EAX*0x8]     ; 00509473
    FADDP                               ; 00509476
    SUB ECX,0x1                         ; 00509478
    JGE 0x00509469                      ; 0050947b
        ;   XREF to: 00509469 (CONDITIONAL_JUMP)  ; LAB_00509469
    MOV EBX,dword ptr [EBP + 0xffffffd8] ; 0050947d
    FMUL double ptr [EBX]               ; 00509483
    MOV EBX,dword ptr [EBP + 0xffffffd0] ; 00509485
        ;   Label: LAB_00509485
    FSTP float ptr [EBX]                ; 0050948b
    MOV EDI,dword ptr [EBP + -0xc]      ; 0050948d
    INC EDI                             ; 00509490
    MOV dword ptr [EBP + -0xc],EDI      ; 00509491
    CMP EDI,0x24                        ; 00509494
    JL 0x0050941a                       ; 00509497
        ;   XREF to: 0050941a (CONDITIONAL_JUMP)  ; LAB_0050941a
    MOV ESP,EBP                         ; 00509499
    POP EBP                             ; 0050949b
    POP EDI                             ; 0050949c
    POP ESI                             ; 0050949d
    POP EBX                             ; 0050949e
    RET                                 ; 0050949f
    PUSH 0x90                           ; 005094a0
        ;   Label: LAB_005094a0
    PUSH 0x0                            ; 005094a5
    MOV ESI,dword ptr [EBP + 0x18]      ; 005094a7
    PUSH ESI                            ; 005094aa
    MOV EBX,dword ptr [EBP + 0x14]      ; 005094ab
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005094ae
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005094b3
    MOV EDX,ESI                         ; 005094b6
    XOR ECX,ECX                         ; 005094b8
    XOR EAX,EAX                         ; 005094ba
    FLD float ptr [EBX + 0xc]           ; 005094bc
        ;   Label: LAB_005094bc
    FMUL double ptr [EAX + 0x1d21ee0]   ; 005094bf
    FLD float ptr [EBX]                 ; 005094c5
    FMUL double ptr [EAX + 0x1d21ed8]   ; 005094c7
    FADDP                               ; 005094cd
    FLD float ptr [EBX + 0x18]          ; 005094cf
    FMUL double ptr [EAX + 0x1d21ee8]   ; 005094d2
    FADDP                               ; 005094d8
    FLD float ptr [EBX + 0x24]          ; 005094da
    FMUL double ptr [EAX + 0x1d21ef0]   ; 005094dd
    FADDP                               ; 005094e3
    FLD float ptr [EBX + 0x30]          ; 005094e5
    FMUL double ptr [EAX + 0x1d21ef8]   ; 005094e8
    FADDP                               ; 005094ee
    FLD float ptr [EBX + 0x3c]          ; 005094f0
    FMUL double ptr [EAX + 0x1d21f00]   ; 005094f3
    FADDP                               ; 005094f9
    FMUL double ptr [ECX + 0x1d21c98]   ; 005094fb
    ADD EDX,0x4                         ; 00509501
    ADD ECX,0x8                         ; 00509504
    FLD float ptr [EDX + 0x14]          ; 00509507
    FXCH                                ; 0050950a
    FADD ST0,ST1                        ; 0050950c
    ADD EAX,0x30                        ; 0050950e
    FSTP ST1                            ; 00509511
    FSTP float ptr [EDX + 0x14]         ; 00509513
    CMP ECX,0x60                        ; 00509516
    JNZ 0x005094bc                      ; 00509519
        ;   XREF to: 005094bc (CONDITIONAL_JUMP)  ; LAB_005094bc
    MOV ECX,dword ptr [EBP + 0x18]      ; 0050951b
    MOV EBX,dword ptr [EBP + 0x14]      ; 0050951e
    XOR EAX,EAX                         ; 00509521
    XOR EDX,EDX                         ; 00509523
    FLD float ptr [EBX + 0x10]          ; 00509525
        ;   Label: LAB_00509525
    FMUL double ptr [EAX + 0x1d21ee0]   ; 00509528
    FLD float ptr [EBX + 0x4]           ; 0050952e
    FMUL double ptr [EAX + 0x1d21ed8]   ; 00509531
    FADDP                               ; 00509537
    FLD float ptr [EBX + 0x1c]          ; 00509539
    FMUL double ptr [EAX + 0x1d21ee8]   ; 0050953c
    FADDP                               ; 00509542
    FLD float ptr [EBX + 0x28]          ; 00509544
    FMUL double ptr [EAX + 0x1d21ef0]   ; 00509547
    FADDP                               ; 0050954d
    FLD float ptr [EBX + 0x34]          ; 0050954f
    FMUL double ptr [EAX + 0x1d21ef8]   ; 00509552
    FADDP                               ; 00509558
    FLD float ptr [EBX + 0x40]          ; 0050955a
    FMUL double ptr [EAX + 0x1d21f00]   ; 0050955d
    FADDP                               ; 00509563
    FMUL double ptr [EDX + 0x1d21c98]   ; 00509565
    ADD ECX,0x4                         ; 0050956b
    ADD EDX,0x8                         ; 0050956e
    FLD float ptr [ECX + 0x2c]          ; 00509571
    FXCH                                ; 00509574
    FADD ST0,ST1                        ; 00509576
    ADD EAX,0x30                        ; 00509578
    FSTP ST1                            ; 0050957b
    FSTP float ptr [ECX + 0x2c]         ; 0050957d
    CMP EDX,0x60                        ; 00509580
    JNZ 0x00509525                      ; 00509583
        ;   XREF to: 00509525 (CONDITIONAL_JUMP)  ; LAB_00509525
    MOV ECX,dword ptr [EBP + 0x18]      ; 00509585
    MOV EBX,dword ptr [EBP + 0x14]      ; 00509588
    XOR EAX,EAX                         ; 0050958b
    XOR EDX,EDX                         ; 0050958d
    FLD float ptr [EBX + 0x14]          ; 0050958f
        ;   Label: LAB_0050958f
    FMUL double ptr [EAX + 0x1d21ee0]   ; 00509592
    FLD float ptr [EBX + 0x8]           ; 00509598
    FMUL double ptr [EAX + 0x1d21ed8]   ; 0050959b
    FADDP                               ; 005095a1
    FLD float ptr [EBX + 0x20]          ; 005095a3
    FMUL double ptr [EAX + 0x1d21ee8]   ; 005095a6
    FADDP                               ; 005095ac
    FLD float ptr [EBX + 0x2c]          ; 005095ae
    FMUL double ptr [EAX + 0x1d21ef0]   ; 005095b1
    FADDP                               ; 005095b7
    FLD float ptr [EBX + 0x38]          ; 005095b9
    FMUL double ptr [EAX + 0x1d21ef8]   ; 005095bc
    FADDP                               ; 005095c2
    FLD float ptr [EBX + 0x44]          ; 005095c4
    FMUL double ptr [EAX + 0x1d21f00]   ; 005095c7
    FADDP                               ; 005095cd
    FMUL double ptr [EDX + 0x1d21c98]   ; 005095cf
    ADD ECX,0x4                         ; 005095d5
    ADD EDX,0x8                         ; 005095d8
    FLD float ptr [ECX + 0x44]          ; 005095db
    FXCH                                ; 005095de
    FADD ST0,ST1                        ; 005095e0
    ADD EAX,0x30                        ; 005095e2
    FSTP ST1                            ; 005095e5
    FSTP float ptr [ECX + 0x44]         ; 005095e7
    CMP EDX,0x60                        ; 005095ea
    JNZ 0x0050958f                      ; 005095ed
        ;   XREF to: 0050958f (CONDITIONAL_JUMP)  ; LAB_0050958f
    MOV ESP,EBP                         ; 005095ef
    POP EBP                             ; 005095f1
    POP EDI                             ; 005095f2
    POP ESI                             ; 005095f3
    POP EBX                             ; 005095f4
    RET                                 ; 005095f5

