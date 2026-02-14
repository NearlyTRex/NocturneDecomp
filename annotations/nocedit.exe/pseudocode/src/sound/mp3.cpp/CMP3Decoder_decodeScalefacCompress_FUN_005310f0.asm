; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_mp3_cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0(CMP3Decoder *this_ptr,int *scalefactor_dest,SMpegLayer3Granule *granule_info,int channel,int granule,SMpegFrame *frame)
;
; Parameters:
; CMP3Decoder *    Stack[0x4]:4   this_ptr
; int *            Stack[0x8]:4   scalefactor_dest
; SMpegLayer3Granule * Stack[0xc]:4   granule_info
; int              Stack[0x10]:4   channel
; int              Stack[0x14]:4   granule
; SMpegFrame *     Stack[0x18]:4   frame
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1e]:4  local_1e
; undefined4       Stack[-0x1a]:4  local_1a
; undefined4       Stack[-0x16]:4  local_16
;
; XREF[1]:
;   sound_mp3.cpp_CMP3Decoder_readLayer3ScalefactorsLSF_FUN_00531480 at 005314ce
;
; Referenced Globals:
;   int[6][3][4] g_Layer3ScalefactorBandCounts
;
; Called Functions:
;   sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005310f0
        ;   Label: sound_mp3.cpp_CMP3Decoder_decodeScalefacCompress_FUN_005310f0
    PUSH ESI                            ; 005310f1
    PUSH EDI                            ; 005310f2
    PUSH EBP                            ; 005310f3
    SUB ESP,0x24                        ; 005310f4
    MOV EDI,dword ptr [ESP + 0x38]      ; 005310f7
    MOV EDX,dword ptr [ESP + 0x48]      ; 005310fb
    LEA EAX,[EDX*0x4 + 0x0]             ; 005310ff
    ADD EAX,EDX                         ; 00531106
    MOV EDX,dword ptr [ESP + 0x40]      ; 00531108
    SHL EAX,0x5                         ; 0053110c
    ADD EDX,0x8                         ; 0053110f
    LEA ECX,[EDX + EAX*0x1]             ; 00531112
    MOV EDX,dword ptr [ESP + 0x44]      ; 00531115
    LEA EAX,[EDX*0x8 + 0x0]             ; 00531119
    ADD EDX,EAX                         ; 00531120
    SHL EDX,0x3                         ; 00531122
    LEA EAX,[ECX + 0x10]                ; 00531125
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00531128
    ADD EAX,EDX                         ; 0053112c
    XOR EDX,EDX                         ; 0053112e
    MOV ESI,dword ptr [ESI]             ; 00531130
    MOV word ptr [ESP + 0x18],DX        ; 00531132
    MOV EDX,dword ptr [EAX + 0x14]      ; 00531137
    MOV ECX,dword ptr [EAX + 0xc]       ; 0053113a
    CMP EDX,0x2                         ; 0053113d
    JNZ 0x0053114f                      ; 00531140
        ;   XREF to: 0053114f (CONDITIONAL_JUMP)  ; LAB_0053114f
    CMP dword ptr [EAX + 0x18],0x0      ; 00531142
    JNZ 0x0053114f                      ; 00531146
        ;   XREF to: 0053114f (CONDITIONAL_JUMP)  ; LAB_0053114f
    MOV word ptr [ESP + 0x18],0x1       ; 00531148
    CMP dword ptr [EAX + 0x14],0x2      ; 0053114f
        ;   Label: LAB_0053114f
    JNZ 0x00531162                      ; 00531153
        ;   XREF to: 00531162 (CONDITIONAL_JUMP)  ; LAB_00531162
    CMP dword ptr [EAX + 0x18],0x1      ; 00531155
    JNZ 0x00531162                      ; 00531159
        ;   XREF to: 00531162 (CONDITIONAL_JUMP)  ; LAB_00531162
    MOV word ptr [ESP + 0x18],0x2       ; 0053115b
    MOV EBX,dword ptr [ESI + 0x20]      ; 00531162
        ;   Label: LAB_00531162
    CMP EBX,0x1                         ; 00531165
    JNZ 0x005311a4                      ; 00531168
        ;   XREF to: 005311a4 (CONDITIONAL_JUMP)  ; LAB_005311a4
    CMP dword ptr [ESP + 0x48],0x1      ; 0053116a
        ;   Label: LAB_0053116a
    JNZ 0x005311a9                      ; 0053116f
        ;   XREF to: 005311a9 (CONDITIONAL_JUMP)  ; LAB_005311a9
    MOV EBP,dword ptr [ESI + 0x20]      ; 00531171
        ;   Label: LAB_00531171
    CMP EBP,0x1                         ; 00531174
    JNZ 0x005312f1                      ; 00531177
        ;   XREF to: 005312f1 (CONDITIONAL_JUMP)  ; LAB_005312f1
    CMP dword ptr [ESP + 0x48],0x1      ; 0053117d
        ;   Label: LAB_0053117d
    JZ 0x005312ff                       ; 00531182
        ;   XREF to: 005312ff (CONDITIONAL_JUMP)  ; LAB_005312ff
    XOR EBX,EBX                         ; 00531188
        ;   Label: LAB_00531188
    MOVSX EAX,BX                        ; 0053118a
        ;   Label: LAB_0053118a
    CMP EAX,0x2d                        ; 0053118d
    JGE 0x005313fc                      ; 00531190
        ;   XREF to: 005313fc (CONDITIONAL_JUMP)  ; LAB_005313fc
    INC EBX                             ; 00531196
    MOV dword ptr [EDI + EAX*0x4 + 0x7358],0x0 ; 00531197
    JMP 0x0053118a                      ; 005311a2
        ;   XREF to: 0053118a (UNCONDITIONAL_JUMP)  ; LAB_0053118a
    CMP EBX,0x3                         ; 005311a4
        ;   Label: LAB_005311a4
    JZ 0x0053116a                       ; 005311a7
        ;   XREF to: 0053116a (CONDITIONAL_JUMP)  ; LAB_0053116a
    MOV EDX,dword ptr [ESP + 0x44]      ; 005311a9
        ;   Label: LAB_005311a9
    LEA EBX,[EDX*0x8 + 0x0]             ; 005311ad
    ADD EBX,EDX                         ; 005311b4
    MOV EDX,dword ptr [ESP + 0x48]      ; 005311b6
    LEA EAX,[EDX*0x4 + 0x0]             ; 005311ba
    ADD EAX,EDX                         ; 005311c1
    MOV EBP,dword ptr [ESP + 0x40]      ; 005311c3
    SHL EAX,0x5                         ; 005311c7
    SHL EBX,0x3                         ; 005311ca
    ADD EBP,EAX                         ; 005311cd
    ADD EBP,EBX                         ; 005311cf
    CMP ECX,0x190                       ; 005311d1
    JNC 0x0053122f                      ; 005311d7
        ;   XREF to: 0053122f (CONDITIONAL_JUMP)  ; LAB_0053122f
    MOV EBX,ECX                         ; 005311d9
    MOV EDX,0x5                         ; 005311db
    SHR EBX,0x4                         ; 005311e0
    MOV dword ptr [ESP + 0x14],EDX      ; 005311e3
    MOV EAX,EBX                         ; 005311e7
    XOR EDX,EDX                         ; 005311e9
    DIV dword ptr [ESP + 0x14]          ; 005311eb
    MOV dword ptr [ESP],EAX             ; 005311ef
    MOV EAX,0x5                         ; 005311f2
    XOR EDX,EDX                         ; 005311f7
    MOV dword ptr [ESP + 0x14],EAX      ; 005311f9
    MOV EAX,EBX                         ; 005311fd
    DIV dword ptr [ESP + 0x14]          ; 005311ff
    MOV EAX,ECX                         ; 00531203
    AND EAX,0xf                         ; 00531205
    SHR EAX,0x2                         ; 00531208
    MOV dword ptr [ESP + 0x8],EAX       ; 0053120b
    MOV EAX,ECX                         ; 0053120f
    AND EAX,0x3                         ; 00531211
    MOV dword ptr [ESP + 0x4],EDX       ; 00531214
    MOV dword ptr [ESP + 0xc],EAX       ; 00531218
    XOR EAX,EAX                         ; 0053121c
    MOV dword ptr [EBP + 0x54],0x0      ; 0053121e
    MOV word ptr [ESP + 0x1c],AX        ; 00531225
    JMP 0x00531171                      ; 0053122a
        ;   XREF to: 00531171 (UNCONDITIONAL_JUMP)  ; LAB_00531171
    CMP ECX,0x1f4                       ; 0053122f
        ;   Label: LAB_0053122f
    JNC 0x00531294                      ; 00531235
        ;   XREF to: 00531294 (CONDITIONAL_JUMP)  ; LAB_00531294
    LEA EAX,[ECX + 0xfffffe70]          ; 00531237
    XOR EDX,EDX                         ; 0053123d
    MOV EBX,EAX                         ; 0053123f
    MOV dword ptr [ESP + 0x10],EAX      ; 00531241
    MOV EAX,0x5                         ; 00531245
    SHR EBX,0x2                         ; 0053124a
    MOV dword ptr [ESP + 0x14],EAX      ; 0053124d
    MOV EAX,EBX                         ; 00531251
    DIV dword ptr [ESP + 0x14]          ; 00531253
    MOV EDX,0x5                         ; 00531257
    MOV dword ptr [ESP],EAX             ; 0053125c
    MOV dword ptr [ESP + 0x14],EDX      ; 0053125f
    MOV EAX,EBX                         ; 00531263
    MOV EBX,dword ptr [ESP + 0x14]      ; 00531265
    XOR EDX,EDX                         ; 00531269
    DIV EBX                             ; 0053126b
    MOV EAX,dword ptr [ESP + 0x10]      ; 0053126d
    AND EAX,0x3                         ; 00531271
    MOV EBX,0x1                         ; 00531274
    MOV dword ptr [ESP + 0x8],EAX       ; 00531279
    XOR EAX,EAX                         ; 0053127d
    MOV dword ptr [ESP + 0x4],EDX       ; 0053127f
    MOV dword ptr [ESP + 0xc],EAX       ; 00531283
    MOV word ptr [ESP + 0x1c],BX        ; 00531287
    MOV dword ptr [EBP + 0x54],EAX      ; 0053128c
    JMP 0x00531171                      ; 0053128f
        ;   XREF to: 00531171 (UNCONDITIONAL_JUMP)  ; LAB_00531171
    CMP ECX,0x200                       ; 00531294
        ;   Label: LAB_00531294
    JNC 0x00531171                      ; 0053129a
        ;   XREF to: 00531171 (CONDITIONAL_JUMP)  ; LAB_00531171
    MOV EDX,0x3                         ; 005312a0
    LEA EBX,[ECX + 0xfffffe0c]          ; 005312a5
    MOV dword ptr [ESP + 0x14],EDX      ; 005312ab
    MOV EAX,EBX                         ; 005312af
    XOR EDX,EDX                         ; 005312b1
    DIV dword ptr [ESP + 0x14]          ; 005312b3
    MOV dword ptr [ESP],EAX             ; 005312b7
    MOV EAX,0x3                         ; 005312ba
    XOR EDX,EDX                         ; 005312bf
    MOV dword ptr [ESP + 0x14],EAX      ; 005312c1
    MOV EAX,EBX                         ; 005312c5
    MOV EBX,dword ptr [ESP + 0x14]      ; 005312c7
    DIV EBX                             ; 005312cb
    MOV dword ptr [ESP + 0x4],EDX       ; 005312cd
    XOR EAX,EAX                         ; 005312d1
    MOV EDX,0x2                         ; 005312d3
    MOV dword ptr [ESP + 0x8],EAX       ; 005312d8
    MOV dword ptr [ESP + 0xc],EAX       ; 005312dc
    MOV word ptr [ESP + 0x1c],DX        ; 005312e0
    MOV dword ptr [EBP + 0x54],0x1      ; 005312e5
    JMP 0x00531171                      ; 005312ec
        ;   XREF to: 00531171 (UNCONDITIONAL_JUMP)  ; LAB_00531171
    CMP EBP,0x3                         ; 005312f1
        ;   Label: LAB_005312f1
    JZ 0x0053117d                       ; 005312f4
        ;   XREF to: 0053117d (CONDITIONAL_JUMP)  ; LAB_0053117d
    JMP 0x00531188                      ; 005312fa
        ;   XREF to: 00531188 (UNCONDITIONAL_JUMP)  ; LAB_00531188
    MOV EDX,dword ptr [ESP + 0x44]      ; 005312ff
        ;   Label: LAB_005312ff
    LEA EBX,[EDX*0x8 + 0x0]             ; 00531303
    ADD EBX,EDX                         ; 0053130a
    MOV EDX,dword ptr [ESP + 0x48]      ; 0053130c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00531310
    ADD EAX,EDX                         ; 00531317
    MOV ESI,dword ptr [ESP + 0x40]      ; 00531319
    SHL EAX,0x5                         ; 0053131d
    SHL EBX,0x3                         ; 00531320
    ADD EAX,ESI                         ; 00531323
    SHR ECX,0x1                         ; 00531325
    ADD EBX,EAX                         ; 00531327
    CMP ECX,0xb4                        ; 00531329
    JNC 0x00531375                      ; 0053132f
        ;   XREF to: 00531375 (CONDITIONAL_JUMP)  ; LAB_00531375
    MOV ESI,0x24                        ; 00531331
    MOV EAX,ECX                         ; 00531336
    XOR EDX,EDX                         ; 00531338
    DIV ESI                             ; 0053133a
    MOV dword ptr [ESP],EAX             ; 0053133c
    XOR EDX,EDX                         ; 0053133f
    MOV EAX,ECX                         ; 00531341
    DIV ESI                             ; 00531343
    MOV ECX,EDX                         ; 00531345
    MOV ESI,0x6                         ; 00531347
    MOV EAX,ECX                         ; 0053134c
    XOR EDX,EDX                         ; 0053134e
    DIV ESI                             ; 00531350
    MOV dword ptr [ESP + 0x4],EAX       ; 00531352
    XOR EDX,EDX                         ; 00531356
    MOV EAX,ECX                         ; 00531358
    DIV ESI                             ; 0053135a
    XOR ECX,ECX                         ; 0053135c
    MOV dword ptr [ESP + 0xc],ECX       ; 0053135e
    MOV dword ptr [ESP + 0x8],EDX       ; 00531362
    MOV dword ptr [EBX + 0x54],ECX      ; 00531366
    MOV word ptr [ESP + 0x1c],0x3       ; 00531369
    JMP 0x00531188                      ; 00531370
        ;   XREF to: 00531188 (UNCONDITIONAL_JUMP)  ; LAB_00531188
    CMP ECX,0xf4                        ; 00531375
        ;   Label: LAB_00531375
    JNC 0x005313b6                      ; 0053137b
        ;   XREF to: 005313b6 (CONDITIONAL_JUMP)  ; LAB_005313b6
    SUB ECX,0xb4                        ; 0053137d
    MOV EAX,ECX                         ; 00531383
    AND EAX,0x3f                        ; 00531385
    SHR EAX,0x4                         ; 00531388
    XOR EDX,EDX                         ; 0053138b
    MOV dword ptr [ESP],EAX             ; 0053138d
    MOV EAX,ECX                         ; 00531390
    MOV dword ptr [ESP + 0xc],EDX       ; 00531392
    AND EAX,0xf                         ; 00531396
    AND ECX,0x3                         ; 00531399
    SHR EAX,0x2                         ; 0053139c
    MOV dword ptr [ESP + 0x8],ECX       ; 0053139f
    MOV dword ptr [ESP + 0x4],EAX       ; 005313a3
    MOV dword ptr [EBX + 0x54],EDX      ; 005313a7
    MOV word ptr [ESP + 0x1c],0x4       ; 005313aa
    JMP 0x00531188                      ; 005313b1
        ;   XREF to: 00531188 (UNCONDITIONAL_JUMP)  ; LAB_00531188
    CMP ECX,0xff                        ; 005313b6
        ;   Label: LAB_005313b6
    JNC 0x00531188                      ; 005313bc
        ;   XREF to: 00531188 (CONDITIONAL_JUMP)  ; LAB_00531188
    MOV ESI,0x3                         ; 005313c2
    SUB ECX,0xf4                        ; 005313c7
    XOR EDX,EDX                         ; 005313cd
    MOV EAX,ECX                         ; 005313cf
    DIV ESI                             ; 005313d1
    MOV dword ptr [ESP],EAX             ; 005313d3
    XOR EDX,EDX                         ; 005313d6
    MOV EAX,ECX                         ; 005313d8
    DIV ESI                             ; 005313da
    XOR EBP,EBP                         ; 005313dc
    MOV dword ptr [ESP + 0x8],EBP       ; 005313de
    MOV dword ptr [ESP + 0xc],EBP       ; 005313e2
    MOV dword ptr [ESP + 0x4],EDX       ; 005313e6
    MOV EDX,0x5                         ; 005313ea
    MOV dword ptr [EBX + 0x54],EBP      ; 005313ef
    MOV word ptr [ESP + 0x1c],DX        ; 005313f2
    JMP 0x00531188                      ; 005313f7
        ;   XREF to: 00531188 (UNCONDITIONAL_JUMP)  ; LAB_00531188
    XOR EBX,EBX                         ; 005313fc
        ;   Label: LAB_005313fc
    MOV word ptr [ESP + 0x20],BX        ; 005313fe
    MOV EAX,dword ptr [ESP + 0x1e]      ; 00531403
        ;   Label: LAB_00531403
    SAR EAX,0x10                        ; 00531407
    CMP EAX,0x4                         ; 0053140a
    JGE 0x0052fa9c                      ; 0053140d
        ;   XREF to: 0052fa9c (CONDITIONAL_JUMP)  ; LAB_0052fa9c
    XOR EBP,EBP                         ; 00531413
    XOR ESI,ESI                         ; 00531415
    MOV EAX,dword ptr [ESP + 0x1a]      ; 00531417
        ;   Label: LAB_00531417
    SAR EAX,0x10                        ; 0053141b
    IMUL EAX,EAX,0x30                   ; 0053141e
    MOV EDX,dword ptr [ESP + 0x16]      ; 00531421
    SAR EDX,0x10                        ; 00531425
    SHL EDX,0x4                         ; 00531428
    ADD EDX,EAX                         ; 0053142b
    MOV EAX,dword ptr [ESP + 0x1e]      ; 0053142d
    SAR EAX,0x10                        ; 00531431
    SHL EAX,0x2                         ; 00531434
    MOVSX ECX,SI                        ; 00531437
    CMP ECX,dword ptr [EDX + EAX*0x1 + 0x67ea40] ; 0053143a | g_Layer3ScalefactorBandCounts
    JC 0x0053144a                       ; 00531441
        ;   XREF to: 0053144a (CONDITIONAL_JUMP)  ; LAB_0053144a
    INC word ptr [ESP + 0x20]           ; 00531443
    JMP 0x00531403                      ; 00531448
        ;   XREF to: 00531403 (UNCONDITIONAL_JUMP)  ; LAB_00531403
    MOV EDX,dword ptr [ESP + EAX*0x1]   ; 0053144a
        ;   Label: LAB_0053144a
    CMP EBP,EDX                         ; 0053144d
    JNZ 0x0053145d                      ; 0053144f
        ;   XREF to: 0053145d (CONDITIONAL_JUMP)  ; LAB_0053145d
    MOVSX EAX,BX                        ; 00531451
    MOV dword ptr [EDI + EAX*0x4 + 0x7358],EDX ; 00531454
    JMP 0x00531471                      ; 0053145b
        ;   XREF to: 00531471 (UNCONDITIONAL_JUMP)  ; LAB_00531471
    PUSH EDX                            ; 0053145d
        ;   Label: LAB_0053145d
    PUSH EDI                            ; 0053145e
    CALL sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170 ; 0053145f
        ;   XREF to: 0052f170 (UNCONDITIONAL_CALL)  ; uint sound_mp3.cpp_CMP3Decoder_readBits_FUN_0052f170(CMP3Decoder * this_ptr, uint num_bits)
    MOVSX EDX,BX                        ; 00531464
    ADD ESP,0x8                         ; 00531467
    MOV dword ptr [EDI + EDX*0x4 + 0x7358],EAX ; 0053146a
    INC ESI                             ; 00531471
        ;   Label: LAB_00531471
    INC EBX                             ; 00531472
    JMP 0x00531417                      ; 00531473
        ;   XREF to: 00531417 (UNCONDITIONAL_JUMP)  ; LAB_00531417

