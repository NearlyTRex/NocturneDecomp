; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMatrix3x4f * __stack2_esi core_zombie_cpp_CZombie_getCarryObjToBodyXForm_FUN_005980a0(CZombie *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
;
; Referenced Globals:
;   undefined4 DAT_005ef1c2
;   undefined4 DAT_005ef1c6
;   undefined4 DAT_005ef1ca
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040d340
;   core_xform.cpp_FUN_00591530
;   core_xform.cpp_FUN_00591c10
;   core_xform.cpp_multiplyMatrix3x4_FUN_005916b0
;   crt_string.c__strnicmp_FUN_005b8da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005980a0
        ;   Label: core_zombie.cpp_CZombie_getCarryObjToBodyXForm_FUN_005980a0
    PUSH EDI                            ; 005980a1
    PUSH EBP                            ; 005980a2
    MOV EBP,ESP                         ; 005980a3
    SUB ESP,0x1fc                       ; 005980a5
    SUB EBP,0x7e                        ; 005980ab
    MOV EBX,ESI                         ; 005980ae
    MOV EAX,dword ptr [EBP + 0x92]      ; 005980b0
    SHL EAX,0x3                         ; 005980b6
    MOV ESI,EAX                         ; 005980b9
    SHL EAX,0x4                         ; 005980bb
    MOV EDX,dword ptr [EBP + 0x8e]      ; 005980be
    SUB EAX,ESI                         ; 005980c4
    ADD EAX,EDX                         ; 005980c6
    MOV ESI,dword ptr [EAX + 0x2620]    ; 005980c8
    MOV EAX,dword ptr [EAX + 0x2618]    ; 005980ce
    MOV dword ptr [EBP + 0x7a],EAX      ; 005980d4
    MOV EAX,dword ptr [EDX + 0x10b0c]   ; 005980d7
    CMP EAX,0x1                         ; 005980dd
    JC 0x005983af                       ; 005980e0
        ;   XREF to: 005983af (CONDITIONAL_JUMP)  ; LAB_005983af
    JA 0x005983a6                       ; 005980e6
        ;   XREF to: 005983a6 (CONDITIONAL_JUMP)  ; LAB_005983a6
    PUSH 0x3                            ; 005980ec
        ;   Label: LAB_005980ec
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005980ee
    PUSH 0x5ef1c2                       ; 005980f4 | DAT_005ef1c2
    ADD EAX,0x2514                      ; 005980f9
    PUSH EAX                            ; 005980fe
    CALL crt_string.c__strnicmp_FUN_005b8da0 ; 005980ff
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005b8da0(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 00598104
    TEST EAX,EAX                        ; 00598107
    JNZ 0x0059838c                      ; 00598109
        ;   XREF to: 0059838c (CONDITIONAL_JUMP)  ; LAB_0059838c
    MOV ECX,0xbf7c6a90                  ; 0059810f
    MOV EDI,0x3f7343c8                  ; 00598114
    MOV EDX,0xbf93b0b4                  ; 00598119
    MOV dword ptr [EBP + -0x1a],ECX     ; 0059811e
    MOV dword ptr [EBP + -0x1e],EDI     ; 00598121
    MOV dword ptr [EBP + -0x22],EDX     ; 00598124
    LEA EAX,[EBP + -0x22]               ; 00598127
        ;   Label: LAB_00598127
    PUSH EAX                            ; 0059812a
    PUSH 0x265370c                      ; 0059812b | DAT_0265370c
    LEA EAX,[EBP + 0xfffffee2]          ; 00598130
    PUSH EAX                            ; 00598136
    CALL core_xform.cpp_FUN_00591c10    ; 00598137
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591c10()
    ADD ESP,0xc                         ; 0059813c
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 0059813f
    PUSH ESI                            ; 00598145
    LEA ESI,[EBP + 0xffffff42]          ; 00598146
    LEA EDI,[EBP + 0xffffff2a]          ; 0059814c
    CALL dword ptr [EAX + 0x24]         ; 00598152
    MOV ECX,0x6                         ; 00598155
    ADD ESP,0x4                         ; 0059815a
    LEA EAX,[EBP + 0x3e]                ; 0059815d
    LEA ESI,[EBP + 0xffffff42]          ; 00598160
    PUSH EAX                            ; 00598166
    MOVSD.REP ES:EDI,ESI                ; 00598167
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d340 ; 00598169
        ;   XREF to: 0040d340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d340(CVector3f * this_ptr)
    FLD float ptr [EBP + 0xffffff2a]    ; 0059816e
    FLD float ptr [EBP + 0xffffff2e]    ; 00598174
    FLD float ptr [EBP + 0xffffff32]    ; 0059817a
    LEA EDI,[EBP + 0xffffff72]          ; 00598180
    LEA ESI,[EBP + 0x3e]                ; 00598186
    LEA EAX,[EBP + -0xa]                ; 00598189
    ADD ESP,0x4                         ; 0059818c
    FXCH ST2                            ; 0059818f
    FADD float ptr [EBP + 0xffffff36]   ; 00598191
    FXCH                                ; 00598197
    FADD float ptr [EBP + 0xffffff3a]   ; 00598199
    FXCH ST2                            ; 0059819f
    FADD float ptr [EBP + 0xffffff3e]   ; 005981a1
    PUSH EAX                            ; 005981a7
    FXCH                                ; 005981a8
    FSTP float ptr [EBP + 0x3e]         ; 005981aa
    FXCH                                ; 005981ad
    FSTP float ptr [EBP + 0x42]         ; 005981af
    FSTP float ptr [EBP + 0x46]         ; 005981b2
    MOVSD ES:EDI,ESI                    ; 005981b5
    MOVSD ES:EDI,ESI                    ; 005981b6
    MOVSD ES:EDI,ESI                    ; 005981b7
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040d340 ; 005981b8
        ;   XREF to: 0040d340 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040d340(CVector3f * this_ptr)
    FLD float ptr [0x005ef1c6]          ; 005981bd | DAT_005ef1c6
    FLD float ptr [EBP + 0xffffff72]    ; 005981c3
    FMUL ST1                            ; 005981c9
    FLD float ptr [EBP + 0xffffff76]    ; 005981cb
    FMUL ST2                            ; 005981d1
    FLD float ptr [EBP + 0xffffff7a]    ; 005981d3
    FMULP ST3                           ; 005981d9
    FLD float ptr [EBP + 0xffffff32]    ; 005981db
    LEA EDI,[EBP + -0x6a]               ; 005981e1
    LEA ESI,[EBP + -0xa]                ; 005981e4
    LEA EDX,[EBP + 0x56]                ; 005981e7
    LEA EAX,[EBP + -0x52]               ; 005981ea
    ADD ESP,0x4                         ; 005981ed
    FXCH ST2                            ; 005981f0
    FSTP float ptr [EBP + -0xa]         ; 005981f2
    FSTP float ptr [EBP + -0x6]         ; 005981f5
    FXCH                                ; 005981f8
    FSTP float ptr [EBP + -0x2]         ; 005981fa
    MOVSD ES:EDI,ESI                    ; 005981fd
    MOVSD ES:EDI,ESI                    ; 005981fe
    MOVSD ES:EDI,ESI                    ; 005981ff
    FADD double ptr [0x005ef1ca]        ; 00598200 | DAT_005ef1ca
    LEA EDI,[EBP + 0x56]                ; 00598206
    LEA ESI,[EBP + -0x6a]               ; 00598209
    FSTP float ptr [EBP + -0x62]        ; 0059820c
    MOVSD ES:EDI,ESI                    ; 0059820f
    MOVSD ES:EDI,ESI                    ; 00598210
    MOVSD ES:EDI,ESI                    ; 00598211
    CMP EAX,EDX                         ; 00598212
    JZ 0x00598228                       ; 00598214
        ;   XREF to: 00598228 (CONDITIONAL_JUMP)  ; LAB_00598228
    MOV EAX,dword ptr [EBP + 0x56]      ; 00598216
    MOV dword ptr [EBP + -0x52],EAX     ; 00598219
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0059821c
    MOV dword ptr [EBP + -0x4e],EAX     ; 0059821f
    MOV EAX,dword ptr [EBP + 0x5e]      ; 00598222
    MOV dword ptr [EBP + -0x4a],EAX     ; 00598225
    MOV ESI,dword ptr [EBP + 0x7a]      ; 00598228
        ;   Label: LAB_00598228
    LEA EAX,[ESI*0x4 + 0x0]             ; 0059822b
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00598232
    SUB EAX,ESI                         ; 00598238
    ADD EDX,0x1134                      ; 0059823a
    SHL EAX,0x4                         ; 00598240
    ADD EAX,EDX                         ; 00598243
    MOV EDX,ESI                         ; 00598245
    MOV ESI,dword ptr [EBP + 0x8e]      ; 00598247
    CMP EDX,dword ptr [ESI + 0x10b8c]   ; 0059824d
    JNZ 0x00598487                      ; 00598253
        ;   XREF to: 00598487 (CONDITIONAL_JUMP)  ; LAB_00598487
    MOV EDX,0xbecccccd                  ; 00598259
    LEA ESI,[EBP + 0x62]                ; 0059825e
    LEA EDI,[EBP + 0x1a]                ; 00598261
    PUSH EAX                            ; 00598264
    XOR ECX,ECX                         ; 00598265
    LEA EAX,[EBP + -0x5e]               ; 00598267
    MOV dword ptr [EBP + -0x5e],EDX     ; 0059826a
    PUSH EAX                            ; 0059826d
    MOV dword ptr [EBP + -0x5a],ECX     ; 0059826e
    MOV dword ptr [EBP + -0x56],ECX     ; 00598271
    CALL core_xform.cpp_FUN_00591530    ; 00598274
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[EBP + 0x62]                ; 00598279
    MOVSD ES:EDI,ESI                    ; 0059827c
    MOVSD ES:EDI,ESI                    ; 0059827d
    MOVSD ES:EDI,ESI                    ; 0059827e
    LEA EAX,[EBP + 0x1a]                ; 0059827f
    LEA ESI,[EBP + 0xffffff7e]          ; 00598282
    ADD ESP,0x8                         ; 00598288
    CMP ESI,EAX                         ; 0059828b
    JZ 0x005982a4                       ; 0059828d
        ;   XREF to: 005982a4 (CONDITIONAL_JUMP)  ; LAB_005982a4
    MOV EAX,dword ptr [EBP + 0x1a]      ; 0059828f
    MOV dword ptr [EBP + 0xffffff7e],EAX ; 00598292
    MOV EAX,dword ptr [EBP + 0x1e]      ; 00598298
    MOV dword ptr [EBP + -0x7e],EAX     ; 0059829b
    MOV EAX,dword ptr [EBP + 0x22]      ; 0059829e
    MOV dword ptr [EBP + -0x7a],EAX     ; 005982a1
        ;   Label: LAB_005982a1
    MOV ESI,dword ptr [EBP + 0x7a]      ; 005982a4
        ;   Label: LAB_005982a4
    LEA EAX,[ESI*0x4 + 0x0]             ; 005982a7
    SUB EAX,ESI                         ; 005982ae
    MOV ESI,EAX                         ; 005982b0
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005982b2
    SHL ESI,0x4                         ; 005982b8
    ADD EAX,0x1134                      ; 005982bb
    ADD EAX,ESI                         ; 005982c0
    PUSH EAX                            ; 005982c2
    LEA EAX,[EBP + 0xfffffee2]          ; 005982c3
    PUSH EAX                            ; 005982c9
    LEA ESI,[EBP + 0xfffffe82]          ; 005982ca
    LEA EDI,[EBP + 0xfffffeb2]          ; 005982d0
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005916b0 ; 005982d6
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005916b0(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    MOV ECX,0xc                         ; 005982db
    ADD ESP,0x8                         ; 005982e0
    LEA EAX,[EBP + 0xfffffeb2]          ; 005982e3
    LEA ESI,[EBP + 0xfffffe82]          ; 005982e9
    PUSH EAX                            ; 005982ef
    LEA EAX,[EBP + -0x52]               ; 005982f0
    MOVSD.REP ES:EDI,ESI                ; 005982f3
    PUSH EAX                            ; 005982f5
    LEA ESI,[EBP + 0x6e]                ; 005982f6
    LEA EDI,[EBP + 0x32]                ; 005982f9
    CALL core_xform.cpp_FUN_00591530    ; 005982fc
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    FLD float ptr [EBP + 0xffffff7e]    ; 00598301
    FLD float ptr [EBP + -0x7e]         ; 00598307
    FLD float ptr [EBP + -0x7a]         ; 0059830a
    FLD float ptr [EBP + 0xfffffebe]    ; 0059830d
    FLD float ptr [EBP + 0xfffffece]    ; 00598313
    LEA ESI,[EBP + 0x6e]                ; 00598319
    FLD float ptr [EBP + 0xfffffede]    ; 0059831c
    MOVSD ES:EDI,ESI                    ; 00598322
    MOVSD ES:EDI,ESI                    ; 00598323
    MOVSD ES:EDI,ESI                    ; 00598324
    MOV ECX,0xc                         ; 00598325
    LEA EDI,[EBP + 0x26]                ; 0059832a
    LEA ESI,[EBP + -0x76]               ; 0059832d
    FXCH ST5                            ; 00598330
    FSUB float ptr [EBP + 0x32]         ; 00598332
    FXCH ST4                            ; 00598335
    FSUB float ptr [EBP + 0x36]         ; 00598337
    FXCH ST3                            ; 0059833a
    FSUB float ptr [EBP + 0x3a]         ; 0059833c
    FXCH ST4                            ; 0059833f
    FSTP float ptr [EBP + -0x76]        ; 00598341
    FXCH ST2                            ; 00598344
    FSTP float ptr [EBP + -0x72]        ; 00598346
    FXCH ST2                            ; 00598349
    FSTP float ptr [EBP + -0x6e]        ; 0059834b
    MOVSD ES:EDI,ESI                    ; 0059834e
    MOVSD ES:EDI,ESI                    ; 0059834f
    MOVSD ES:EDI,ESI                    ; 00598350
    ADD ESP,0x8                         ; 00598351
    LEA ESI,[EBP + 0xfffffeb2]          ; 00598354
    MOV EDI,EBX                         ; 0059835a
    FXCH                                ; 0059835c
    FADD float ptr [EBP + 0x26]         ; 0059835e
    FXCH                                ; 00598361
    FADD float ptr [EBP + 0x2a]         ; 00598363
    FXCH ST2                            ; 00598366
    FADD float ptr [EBP + 0x2e]         ; 00598368
    FXCH                                ; 0059836b
    FSTP float ptr [EBP + 0xfffffebe]   ; 0059836d
    FXCH                                ; 00598373
    FSTP float ptr [EBP + 0xfffffece]   ; 00598375
    FSTP float ptr [EBP + 0xfffffede]   ; 0059837b
    MOVSD.REP ES:EDI,ESI                ; 00598381
    MOV EAX,EBX                         ; 00598383
    LEA ESP,[EBP + 0x7e]                ; 00598385
    POP EBP                             ; 00598388
    POP EDI                             ; 00598389
    POP EBX                             ; 0059838a
    RET                                 ; 0059838b
    MOV EAX,0x3f676c8b                  ; 0059838c
        ;   Label: LAB_0059838c
    XOR EDI,EDI                         ; 00598391
    MOV ECX,0x3e1eb852                  ; 00598393
    MOV dword ptr [EBP + -0x1a],EDI     ; 00598398
    MOV dword ptr [EBP + -0x1e],EAX     ; 0059839b
    MOV dword ptr [EBP + -0x22],ECX     ; 0059839e
    JMP 0x00598127                      ; 005983a1
        ;   XREF to: 00598127 (UNCONDITIONAL_JUMP)  ; LAB_00598127
    CMP EAX,0x3                         ; 005983a6
        ;   Label: LAB_005983a6
    JZ 0x005980ec                       ; 005983a9
        ;   XREF to: 005980ec (CONDITIONAL_JUMP)  ; LAB_005980ec
    PUSH ESI                            ; 005983af
        ;   Label: LAB_005983af
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005983b0
    LEA ESI,[EBP + 0xffffff5a]          ; 005983b6
    LEA EDI,[EBP + 0xffffff12]          ; 005983bc
    CALL dword ptr [EAX + 0x24]         ; 005983c2
    MOV ECX,0x6                         ; 005983c5
    LEA ESI,[EBP + 0xffffff5a]          ; 005983ca
    MOVSD.REP ES:EDI,ESI                ; 005983d0
    LEA EAX,[EBP + 0xffffff12]          ; 005983d2
    FLD float ptr [EBP + 0xffffff12]    ; 005983d8
    FLD float ptr [EBP + 0xffffff16]    ; 005983de
    FLD float ptr [EBP + 0xffffff1a]    ; 005983e4
    LEA EDI,[EBP + 0xe]                 ; 005983ea
    LEA ESI,[EBP + -0x2e]               ; 005983ed
    FXCH ST2                            ; 005983f0
    FADD float ptr [EAX + 0xc]          ; 005983f2
    FXCH                                ; 005983f5
    FADD float ptr [EAX + 0x10]         ; 005983f7
    FXCH ST2                            ; 005983fa
    FADD float ptr [EAX + 0x14]         ; 005983fc
    FXCH                                ; 005983ff
    FSTP float ptr [EBP + -0x2e]        ; 00598401
    FXCH                                ; 00598404
    FSTP float ptr [EBP + -0x2a]        ; 00598406
    FSTP float ptr [EBP + -0x26]        ; 00598409
    MOVSD ES:EDI,ESI                    ; 0059840c
    MOVSD ES:EDI,ESI                    ; 0059840d
    MOVSD ES:EDI,ESI                    ; 0059840e
    FLD float ptr [0x005ef1c6]          ; 0059840f | DAT_005ef1c6
    FLD float ptr [EBP + 0xe]           ; 00598415
    FMUL ST1                            ; 00598418
    FLD float ptr [EBP + 0x12]          ; 0059841a
    FMUL ST2                            ; 0059841d
    FLD float ptr [EBP + 0x16]          ; 0059841f
    FMULP ST3                           ; 00598422
    LEA EDI,[EBP + 0x4a]                ; 00598424
    LEA ESI,[EBP + 0x2]                 ; 00598427
    FXCH                                ; 0059842a
    FSTP float ptr [EBP + 0x2]          ; 0059842c
    FSTP float ptr [EBP + 0x6]          ; 0059842f
    FSTP float ptr [EBP + 0xa]          ; 00598432
    MOVSD ES:EDI,ESI                    ; 00598435
    MOVSD ES:EDI,ESI                    ; 00598436
    MOVSD ES:EDI,ESI                    ; 00598437
    LEA EAX,[EBP + -0x52]               ; 00598438
    LEA ESI,[EBP + 0x4a]                ; 0059843b
    ADD ESP,0x4                         ; 0059843e
    CMP EAX,ESI                         ; 00598441
    JZ 0x00598457                       ; 00598443
        ;   XREF to: 00598457 (CONDITIONAL_JUMP)  ; LAB_00598457
    MOV EAX,dword ptr [EBP + 0x4a]      ; 00598445
    MOV dword ptr [EBP + -0x52],EAX     ; 00598448
    MOV EAX,dword ptr [EBP + 0x4e]      ; 0059844b
    MOV dword ptr [EBP + -0x4e],EAX     ; 0059844e
    MOV EAX,dword ptr [EBP + 0x52]      ; 00598451
    MOV dword ptr [EBP + -0x4a],EAX     ; 00598454
    MOV EAX,dword ptr [EBP + 0x92]      ; 00598457
        ;   Label: LAB_00598457
    SHL EAX,0x3                         ; 0059845d
    MOV ESI,EAX                         ; 00598460
    SHL EAX,0x4                         ; 00598462
    MOV EDX,dword ptr [EBP + 0x8e]      ; 00598465
    SUB EAX,ESI                         ; 0059846b
    ADD EAX,EDX                         ; 0059846d
    MOV ECX,0xc                         ; 0059846f
    LEA EDI,[EBP + 0xfffffee2]          ; 00598474
    LEA ESI,[EAX + 0x2624]              ; 0059847a
    MOVSD.REP ES:EDI,ESI                ; 00598480
    JMP 0x00598228                      ; 00598482
        ;   XREF to: 00598228 (UNCONDITIONAL_JUMP)  ; LAB_00598228
    MOV ESI,0x3ecccccd                  ; 00598487
        ;   Label: LAB_00598487
    PUSH EAX                            ; 0059848c
    XOR EDI,EDI                         ; 0059848d
    LEA EAX,[EBP + -0x3a]               ; 0059848f
    MOV dword ptr [EBP + -0x3a],ESI     ; 00598492
    MOV dword ptr [EBP + -0x36],EDI     ; 00598495
    MOV dword ptr [EBP + -0x32],EDI     ; 00598498
    PUSH EAX                            ; 0059849b
    LEA ESI,[EBP + -0x46]               ; 0059849c
    LEA EDI,[EBP + -0x16]               ; 0059849f
    CALL core_xform.cpp_FUN_00591530    ; 005984a2
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[EBP + -0x46]               ; 005984a7
    MOVSD ES:EDI,ESI                    ; 005984aa
    MOVSD ES:EDI,ESI                    ; 005984ab
    MOVSD ES:EDI,ESI                    ; 005984ac
    LEA EAX,[EBP + -0x16]               ; 005984ad
    LEA ESI,[EBP + 0xffffff7e]          ; 005984b0
    ADD ESP,0x8                         ; 005984b6
    CMP ESI,EAX                         ; 005984b9
    JZ 0x005982a4                       ; 005984bb
        ;   XREF to: 005982a4 (CONDITIONAL_JUMP)  ; LAB_005982a4
    MOV EAX,dword ptr [EBP + -0x16]     ; 005984c1
    MOV dword ptr [EBP + 0xffffff7e],EAX ; 005984c4
    MOV EAX,dword ptr [EBP + -0x12]     ; 005984ca
    MOV dword ptr [EBP + -0x7e],EAX     ; 005984cd
    MOV EAX,dword ptr [EBP + -0xe]      ; 005984d0
    JMP 0x005982a1                      ; 005984d3
        ;   XREF to: 005982a1 (UNCONDITIONAL_JUMP)  ; LAB_005982a1

