; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_xform_cpp_matrixToEulerAnglesZYX_FUN_00592280(float *param_1)
;
; Local Variables:
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_00416d70 at 00417011
;
; Referenced Globals:
;   undefined4 DAT_005eed22
;   undefined4 DAT_005eed26
;   undefined4 DAT_005eed2a
;   undefined4 DAT_005eed2e
;   undefined4 DAT_005eed32
;   undefined4 DAT_005eed36
;   undefined4 DAT_005eed3a
;   undefined4 DAT_005eed3e
;   undefined4 DAT_005eed42
;   undefined4 DAT_005eed46
;
; Called Functions:
;   crt_math.c_acos_FUN_005b9924
;   crt_math.c_asin_FUN_005b98f6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00592280
        ;   Label: core_xform.cpp_matrixToEulerAnglesZYX_FUN_00592280
    PUSH EDI                            ; 00592281
    PUSH EBP                            ; 00592282
    MOV EBP,ESP                         ; 00592283
    SUB ESP,0x60                        ; 00592285
    AND ESP,0xfffffff8                  ; 00592288
    MOV EDX,dword ptr [EBP + 0x10]      ; 0059228b
    MOV ECX,ESI                         ; 0059228e
    FLD float ptr [EDX + 0x4]           ; 00592290
    FMUL ST0                            ; 00592293
    FLD float ptr [EDX]                 ; 00592295
    FMUL ST0                            ; 00592297
    FADDP                               ; 00592299
    FLD float ptr [EDX + 0x8]           ; 0059229b
    FMUL ST0                            ; 0059229e
    FADDP                               ; 005922a0
    FSQRT                               ; 005922a2
    FLDZ                                ; 005922a4
    FXCH                                ; 005922a6
    FSTP float ptr [ESP + 0x50]         ; 005922a8
    FCOMP float ptr [ESP + 0x50]        ; 005922ac
    FNSTSW AX                           ; 005922b0
    SAHF                                ; 005922b2
    JC 0x0059240d                       ; 005922b3
        ;   XREF to: 0059240d (CONDITIONAL_JUMP)  ; LAB_0059240d
    FLD float ptr [EDX + 0x10]          ; 005922b9
        ;   Label: LAB_005922b9
    FMUL ST0                            ; 005922bc
    FLD float ptr [EDX + 0x14]          ; 005922be
    FMUL ST0                            ; 005922c1
    FADDP                               ; 005922c3
    FLD float ptr [EDX + 0x18]          ; 005922c5
    FMUL ST0                            ; 005922c8
    FADDP                               ; 005922ca
    FSQRT                               ; 005922cc
    FLDZ                                ; 005922ce
    FXCH                                ; 005922d0
    FSTP float ptr [ESP + 0x48]         ; 005922d2
    FCOMP float ptr [ESP + 0x48]        ; 005922d6
    FNSTSW AX                           ; 005922da
    SAHF                                ; 005922dc
    JNC 0x005922e9                      ; 005922dd
        ;   XREF to: 005922e9 (CONDITIONAL_JUMP)  ; LAB_005922e9
    FLD1                                ; 005922df
    FDIV float ptr [ESP + 0x48]         ; 005922e1
    FSTP float ptr [ESP + 0x48]         ; 005922e5
    FLD float ptr [EDX + 0x20]          ; 005922e9
        ;   Label: LAB_005922e9
    FMUL ST0                            ; 005922ec
    FLD float ptr [EDX + 0x24]          ; 005922ee
    FMUL ST0                            ; 005922f1
    FADDP                               ; 005922f3
    FLD float ptr [EDX + 0x28]          ; 005922f5
    FMUL ST0                            ; 005922f8
    FADDP                               ; 005922fa
    FSQRT                               ; 005922fc
    FLDZ                                ; 005922fe
    FXCH                                ; 00592300
    FSTP float ptr [ESP + 0x4c]         ; 00592302
    FCOMP float ptr [ESP + 0x4c]        ; 00592306
    FNSTSW AX                           ; 0059230a
    SAHF                                ; 0059230c
    JNC 0x00592319                      ; 0059230d
        ;   XREF to: 00592319 (CONDITIONAL_JUMP)  ; LAB_00592319
    FLD1                                ; 0059230f
    FDIV float ptr [ESP + 0x4c]         ; 00592311
    FSTP float ptr [ESP + 0x4c]         ; 00592315
    FLD float ptr [EDX + 0x24]          ; 00592319
        ;   Label: LAB_00592319
    FCHS                                ; 0059231c
    FMUL float ptr [ESP + 0x4c]         ; 0059231e
    FST float ptr [ESP + 0x10]          ; 00592322
    FCOMP float ptr [0x005eed22]        ; 00592326 | DAT_005eed22
    FNSTSW AX                           ; 0059232c
    SAHF                                ; 0059232e
    JNC 0x0059241c                      ; 0059232f
        ;   XREF to: 0059241c (CONDITIONAL_JUMP)  ; LAB_0059241c
    MOV dword ptr [ESP + 0x1c],0xbfc90fdb ; 00592335
    FLD float ptr [ESP + 0x50]          ; 0059233d
        ;   Label: LAB_0059233d
    FLD float ptr [EDX]                 ; 00592341
    FMUL ST1                            ; 00592343
    FLD float ptr [EDX + 0x8]           ; 00592345
    FCHS                                ; 00592348
    XOR EBX,EBX                         ; 0059234a
    FMULP ST2                           ; 0059234c
    MOV dword ptr [ESP + 0x24],EBX      ; 0059234e
    FXCH                                ; 00592352
    FSTP float ptr [ESP + 0x14]         ; 00592354
    MOV EAX,dword ptr [ESP + 0x14]      ; 00592358
    FSTP float ptr [ESP + 0x3c]         ; 0059235c
    MOV dword ptr [ESP + 0x2c],EAX      ; 00592360
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00592364
    FLD float ptr [ESP + 0x14]          ; 00592368
    MOV dword ptr [ESP + 0x18],EAX      ; 0059236c
    FCOMP float ptr [0x005eed36]        ; 00592370 | DAT_005eed36
    FNSTSW AX                           ; 00592376
    SAHF                                ; 00592378
    JNC 0x00592625                      ; 00592379
        ;   XREF to: 00592625 (CONDITIONAL_JUMP)  ; LAB_00592625
    FLD float ptr [ESP + 0x14]          ; 0059237f
    FCOMP float ptr [0x005eed3a]        ; 00592383 | DAT_005eed3a
    FNSTSW AX                           ; 00592389
    SAHF                                ; 0059238b
    JBE 0x00592625                      ; 0059238c
        ;   XREF to: 00592625 (CONDITIONAL_JUMP)  ; LAB_00592625
    FLD float ptr [ESP + 0x14]          ; 00592392
    CALL crt_math.c_asin_FUN_005b98f6   ; 00592396
        ;   XREF to: 005b98f6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005b98f6()
    FLDZ                                ; 0059239b
    FXCH                                ; 0059239d
    FSTP float ptr [ESP + 0x58]         ; 0059239f
    FCOMP float ptr [ESP + 0x3c]        ; 005923a3
    FNSTSW AX                           ; 005923a7
    SAHF                                ; 005923a9
    JBE 0x005923ba                      ; 005923aa
        ;   XREF to: 005923ba (CONDITIONAL_JUMP)  ; LAB_005923ba
    FLD float ptr [0x005eed42]          ; 005923ac | DAT_005eed42
    FSUB float ptr [ESP + 0x58]         ; 005923b2
    FSTP float ptr [ESP + 0x58]         ; 005923b6
    FLD float ptr [ESP + 0x58]          ; 005923ba
        ;   Label: LAB_005923ba
    FCOMP float ptr [0x005eed2a]        ; 005923be | DAT_005eed2a
    FNSTSW AX                           ; 005923c4
    SAHF                                ; 005923c6
    JNC 0x005923d7                      ; 005923c7
        ;   XREF to: 005923d7 (CONDITIONAL_JUMP)  ; LAB_005923d7
    FLD float ptr [ESP + 0x58]          ; 005923c9
    FADD float ptr [0x005eed2e]         ; 005923cd | DAT_005eed2e
    FSTP float ptr [ESP + 0x58]         ; 005923d3
    FLD float ptr [ESP + 0x58]          ; 005923d7
        ;   Label: LAB_005923d7
    FCOMP float ptr [0x005eed42]        ; 005923db | DAT_005eed42
    FNSTSW AX                           ; 005923e1
    SAHF                                ; 005923e3
    JBE 0x005923f4                      ; 005923e4
        ;   XREF to: 005923f4 (CONDITIONAL_JUMP)  ; LAB_005923f4
    FLD float ptr [ESP + 0x58]          ; 005923e6
    FADD float ptr [0x005eed46]         ; 005923ea | DAT_005eed46
    FSTP float ptr [ESP + 0x58]         ; 005923f0
    MOV EAX,dword ptr [ESP + 0x58]      ; 005923f4
        ;   Label: LAB_005923f4
    MOV dword ptr [ESP + 0x20],EAX      ; 005923f8
    LEA ESI,[ESP + 0x1c]                ; 005923fc
    MOV EDI,ECX                         ; 00592400
    MOVSD ES:EDI,ESI                    ; 00592402
    MOVSD ES:EDI,ESI                    ; 00592403
    MOVSD ES:EDI,ESI                    ; 00592404
    MOV EAX,ECX                         ; 00592405
    MOV ESP,EBP                         ; 00592407
    POP EBP                             ; 00592409
    POP EDI                             ; 0059240a
    POP EBX                             ; 0059240b
    RET                                 ; 0059240c
    FLD1                                ; 0059240d
        ;   Label: LAB_0059240d
    FDIV float ptr [ESP + 0x50]         ; 0059240f
    FSTP float ptr [ESP + 0x50]         ; 00592413
    JMP 0x005922b9                      ; 00592417
        ;   XREF to: 005922b9 (UNCONDITIONAL_JUMP)  ; LAB_005922b9
    FLD float ptr [ESP + 0x10]          ; 0059241c
        ;   Label: LAB_0059241c
    FCOMP float ptr [0x005eed26]        ; 00592420 | DAT_005eed26
    FNSTSW AX                           ; 00592426
    SAHF                                ; 00592428
    JBE 0x00592438                      ; 00592429
        ;   XREF to: 00592438 (CONDITIONAL_JUMP)  ; LAB_00592438
    MOV dword ptr [ESP + 0x1c],0x3fc90fdb ; 0059242b
    JMP 0x0059233d                      ; 00592433
        ;   XREF to: 0059233d (UNCONDITIONAL_JUMP)  ; LAB_0059233d
    FLD float ptr [ESP + 0x10]          ; 00592438
        ;   Label: LAB_00592438
    FLD ST0                             ; 0059243c
    CALL crt_math.c_asin_FUN_005b98f6   ; 0059243e
        ;   XREF to: 005b98f6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005b98f6()
    FLD ST1                             ; 00592443
    FMULP ST2                           ; 00592445
    FLD1                                ; 00592447
    FSUBRP ST2,ST0                      ; 00592449
    FXCH                                ; 0059244b
    FSQRT                               ; 0059244d
    FXCH                                ; 0059244f
    FST float ptr [ESP + 0x1c]          ; 00592451
    FXCH                                ; 00592455
    FSTP float ptr [ESP + 0x40]         ; 00592457
    FCOMP float ptr [0x005eed2a]        ; 0059245b | DAT_005eed2a
    FNSTSW AX                           ; 00592461
    SAHF                                ; 00592463
    JNC 0x00592474                      ; 00592464
        ;   XREF to: 00592474 (CONDITIONAL_JUMP)  ; LAB_00592474
    FLD float ptr [ESP + 0x1c]          ; 00592466
    FADD float ptr [0x005eed2e]         ; 0059246a | DAT_005eed2e
    FSTP float ptr [ESP + 0x1c]         ; 00592470
    FLD float ptr [ESP + 0x40]          ; 00592474
        ;   Label: LAB_00592474
    FCOMP float ptr [0x005eed32]        ; 00592478 | DAT_005eed32
    FNSTSW AX                           ; 0059247e
    SAHF                                ; 00592480
    JC 0x0059233d                       ; 00592481
        ;   XREF to: 0059233d (CONDITIONAL_JUMP)  ; LAB_0059233d
    FLD1                                ; 00592487
    FDIV float ptr [ESP + 0x40]         ; 00592489
    FLD float ptr [ESP + 0x4c]          ; 0059248d
    FLD float ptr [EDX + 0x28]          ; 00592491
    FMUL ST1                            ; 00592494
    FLD float ptr [EDX + 0x20]          ; 00592496
    FMULP ST2                           ; 00592499
    FXCH ST2                            ; 0059249b
    FSTP float ptr [ESP + 0x44]         ; 0059249d
    FMUL float ptr [ESP + 0x44]         ; 005924a1
    FXCH                                ; 005924a5
    FMUL float ptr [ESP + 0x44]         ; 005924a7
    FXCH                                ; 005924ab
    FSTP float ptr [ESP]                ; 005924ad
    MOV EAX,dword ptr [ESP]             ; 005924b0
    FSTP float ptr [ESP + 0x34]         ; 005924b3
    MOV dword ptr [ESP + 0x28],EAX      ; 005924b7
    MOV EAX,dword ptr [ESP + 0x34]      ; 005924bb
    FLD float ptr [ESP]                 ; 005924bf
    MOV dword ptr [ESP + 0x8],EAX       ; 005924c2
    FCOMP float ptr [0x005eed36]        ; 005924c6 | DAT_005eed36
    FNSTSW AX                           ; 005924cc
    SAHF                                ; 005924ce
    JNC 0x00592676                      ; 005924cf
        ;   XREF to: 00592676 (CONDITIONAL_JUMP)  ; LAB_00592676
    FLD float ptr [ESP]                 ; 005924d5
    FCOMP float ptr [0x005eed3a]        ; 005924d8 | DAT_005eed3a
    FNSTSW AX                           ; 005924de
    SAHF                                ; 005924e0
    JBE 0x00592676                      ; 005924e1
        ;   XREF to: 00592676 (CONDITIONAL_JUMP)  ; LAB_00592676
    FLD float ptr [ESP]                 ; 005924e7
    CALL crt_math.c_asin_FUN_005b98f6   ; 005924ea
        ;   XREF to: 005b98f6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005b98f6()
    FLDZ                                ; 005924ef
    FXCH                                ; 005924f1
    FSTP float ptr [ESP + 0x5c]         ; 005924f3
    FCOMP float ptr [ESP + 0x34]        ; 005924f7
    FNSTSW AX                           ; 005924fb
    SAHF                                ; 005924fd
    JBE 0x0059250e                      ; 005924fe
        ;   XREF to: 0059250e (CONDITIONAL_JUMP)  ; LAB_0059250e
    FLD float ptr [0x005eed42]          ; 00592500 | DAT_005eed42
    FSUB float ptr [ESP + 0x5c]         ; 00592506
    FSTP float ptr [ESP + 0x5c]         ; 0059250a
    FLD float ptr [ESP + 0x5c]          ; 0059250e
        ;   Label: LAB_0059250e
    FCOMP float ptr [0x005eed2a]        ; 00592512 | DAT_005eed2a
    FNSTSW AX                           ; 00592518
    SAHF                                ; 0059251a
    JNC 0x0059252b                      ; 0059251b
        ;   XREF to: 0059252b (CONDITIONAL_JUMP)  ; LAB_0059252b
    FLD float ptr [ESP + 0x5c]          ; 0059251d
    FADD float ptr [0x005eed2e]         ; 00592521 | DAT_005eed2e
    FSTP float ptr [ESP + 0x5c]         ; 00592527
    FLD float ptr [ESP + 0x5c]          ; 0059252b
        ;   Label: LAB_0059252b
    FCOMP float ptr [0x005eed42]        ; 0059252f | DAT_005eed42
    FNSTSW AX                           ; 00592535
    SAHF                                ; 00592537
    JBE 0x00592548                      ; 00592538
        ;   XREF to: 00592548 (CONDITIONAL_JUMP)  ; LAB_00592548
    FLD float ptr [ESP + 0x5c]          ; 0059253a
    FADD float ptr [0x005eed46]         ; 0059253e | DAT_005eed46
    FSTP float ptr [ESP + 0x5c]         ; 00592544
    FLD float ptr [EDX + 0x14]          ; 00592548
        ;   Label: LAB_00592548
    FMUL float ptr [ESP + 0x48]         ; 0059254b
    FLD float ptr [EDX + 0x4]           ; 0059254f
    FMUL float ptr [ESP + 0x50]         ; 00592552
    FXCH                                ; 00592556
    FLD float ptr [ESP + 0x44]          ; 00592558
    FXCH                                ; 0059255c
    FMUL ST1                            ; 0059255e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00592560
    FXCH ST2                            ; 00592564
    FMULP                               ; 00592566
    MOV dword ptr [ESP + 0x20],EAX      ; 00592568
    FSTP float ptr [ESP + 0xc]          ; 0059256c
    MOV EAX,dword ptr [ESP + 0xc]       ; 00592570
    FSTP float ptr [ESP + 0x38]         ; 00592574
    MOV dword ptr [ESP + 0x30],EAX      ; 00592578
    MOV EAX,dword ptr [ESP + 0x38]      ; 0059257c
    FLD float ptr [ESP + 0xc]           ; 00592580
    MOV dword ptr [ESP + 0x4],EAX       ; 00592584
    FCOMP float ptr [0x005eed36]        ; 00592588 | DAT_005eed36
    FNSTSW AX                           ; 0059258e
    SAHF                                ; 00592590
    JNC 0x005926c7                      ; 00592591
        ;   XREF to: 005926c7 (CONDITIONAL_JUMP)  ; LAB_005926c7
    FLD float ptr [ESP + 0xc]           ; 00592597
    FCOMP float ptr [0x005eed3a]        ; 0059259b | DAT_005eed3a
    FNSTSW AX                           ; 005925a1
    SAHF                                ; 005925a3
    JBE 0x005926c7                      ; 005925a4
        ;   XREF to: 005926c7 (CONDITIONAL_JUMP)  ; LAB_005926c7
    FLD float ptr [ESP + 0xc]           ; 005925aa
    CALL crt_math.c_asin_FUN_005b98f6   ; 005925ae
        ;   XREF to: 005b98f6 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005b98f6()
    FLDZ                                ; 005925b3
    FXCH                                ; 005925b5
    FSTP float ptr [ESP + 0x54]         ; 005925b7
    FCOMP float ptr [ESP + 0x38]        ; 005925bb
    FNSTSW AX                           ; 005925bf
    SAHF                                ; 005925c1
    JBE 0x005925d2                      ; 005925c2
        ;   XREF to: 005925d2 (CONDITIONAL_JUMP)  ; LAB_005925d2
    FLD float ptr [0x005eed42]          ; 005925c4 | DAT_005eed42
    FSUB float ptr [ESP + 0x54]         ; 005925ca
    FSTP float ptr [ESP + 0x54]         ; 005925ce
    FLD float ptr [ESP + 0x54]          ; 005925d2
        ;   Label: LAB_005925d2
    FCOMP float ptr [0x005eed2a]        ; 005925d6 | DAT_005eed2a
    FNSTSW AX                           ; 005925dc
    SAHF                                ; 005925de
    JNC 0x005925ef                      ; 005925df
        ;   XREF to: 005925ef (CONDITIONAL_JUMP)  ; LAB_005925ef
    FLD float ptr [ESP + 0x54]          ; 005925e1
    FADD float ptr [0x005eed2e]         ; 005925e5 | DAT_005eed2e
    FSTP float ptr [ESP + 0x54]         ; 005925eb
    FLD float ptr [ESP + 0x54]          ; 005925ef
        ;   Label: LAB_005925ef
    FCOMP float ptr [0x005eed42]        ; 005925f3 | DAT_005eed42
    FNSTSW AX                           ; 005925f9
    SAHF                                ; 005925fb
    JBE 0x0059260c                      ; 005925fc
        ;   XREF to: 0059260c (CONDITIONAL_JUMP)  ; LAB_0059260c
    FLD float ptr [ESP + 0x54]          ; 005925fe
    FADD float ptr [0x005eed46]         ; 00592602 | DAT_005eed46
    FSTP float ptr [ESP + 0x54]         ; 00592608
    MOV EAX,dword ptr [ESP + 0x54]      ; 0059260c
        ;   Label: LAB_0059260c
    MOV dword ptr [ESP + 0x24],EAX      ; 00592610
    LEA ESI,[ESP + 0x1c]                ; 00592614
    MOV EDI,ECX                         ; 00592618
    MOVSD ES:EDI,ESI                    ; 0059261a
    MOVSD ES:EDI,ESI                    ; 0059261b
    MOVSD ES:EDI,ESI                    ; 0059261c
    MOV EAX,ECX                         ; 0059261d
    MOV ESP,EBP                         ; 0059261f
    POP EBP                             ; 00592621
    POP EDI                             ; 00592622
    POP EBX                             ; 00592623
    RET                                 ; 00592624
    FLD float ptr [ESP + 0x18]          ; 00592625
        ;   Label: LAB_00592625
    FCOMP float ptr [0x005eed3e]        ; 00592629 | DAT_005eed3e
    FNSTSW AX                           ; 0059262f
    SAHF                                ; 00592631
    JA 0x00592655                       ; 00592632
        ;   XREF to: 00592655 (CONDITIONAL_JUMP)  ; LAB_00592655
    MOV dword ptr [ESP + 0x58],0x40490fdb ; 00592634
    FLDZ                                ; 0059263c
        ;   Label: LAB_0059263c
    FCOMP float ptr [ESP + 0x2c]        ; 0059263e
    FNSTSW AX                           ; 00592642
    SAHF                                ; 00592644
    JBE 0x005923ba                      ; 00592645
        ;   XREF to: 005923ba (CONDITIONAL_JUMP)  ; LAB_005923ba
    XOR byte ptr [ESP + 0x5b],0x80      ; 0059264b
    JMP 0x005923ba                      ; 00592650
        ;   XREF to: 005923ba (UNCONDITIONAL_JUMP)  ; LAB_005923ba
    CMP dword ptr [ESP + 0x18],0x3f800000 ; 00592655
        ;   Label: LAB_00592655
    JL 0x00592667                       ; 0059265d
        ;   XREF to: 00592667 (CONDITIONAL_JUMP)  ; LAB_00592667
    XOR EDI,EDI                         ; 0059265f
    MOV dword ptr [ESP + 0x58],EDI      ; 00592661
    JMP 0x0059263c                      ; 00592665
        ;   XREF to: 0059263c (UNCONDITIONAL_JUMP)  ; LAB_0059263c
    FLD float ptr [ESP + 0x18]          ; 00592667
        ;   Label: LAB_00592667
    CALL crt_math.c_acos_FUN_005b9924   ; 0059266b
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005b9924()
    FSTP float ptr [ESP + 0x58]         ; 00592670
    JMP 0x0059263c                      ; 00592674
        ;   XREF to: 0059263c (UNCONDITIONAL_JUMP)  ; LAB_0059263c
    FLD float ptr [ESP + 0x8]           ; 00592676
        ;   Label: LAB_00592676
    FCOMP float ptr [0x005eed3e]        ; 0059267a | DAT_005eed3e
    FNSTSW AX                           ; 00592680
    SAHF                                ; 00592682
    JA 0x005926a6                       ; 00592683
        ;   XREF to: 005926a6 (CONDITIONAL_JUMP)  ; LAB_005926a6
    MOV dword ptr [ESP + 0x5c],0x40490fdb ; 00592685
    FLDZ                                ; 0059268d
        ;   Label: LAB_0059268d
    FCOMP float ptr [ESP + 0x28]        ; 0059268f
    FNSTSW AX                           ; 00592693
    SAHF                                ; 00592695
    JBE 0x0059250e                      ; 00592696
        ;   XREF to: 0059250e (CONDITIONAL_JUMP)  ; LAB_0059250e
    XOR byte ptr [ESP + 0x5f],0x80      ; 0059269c
    JMP 0x0059250e                      ; 005926a1
        ;   XREF to: 0059250e (UNCONDITIONAL_JUMP)  ; LAB_0059250e
    CMP dword ptr [ESP + 0x8],0x3f800000 ; 005926a6
        ;   Label: LAB_005926a6
    JL 0x005926b8                       ; 005926ae
        ;   XREF to: 005926b8 (CONDITIONAL_JUMP)  ; LAB_005926b8
    XOR ESI,ESI                         ; 005926b0
    MOV dword ptr [ESP + 0x5c],ESI      ; 005926b2
    JMP 0x0059268d                      ; 005926b6
        ;   XREF to: 0059268d (UNCONDITIONAL_JUMP)  ; LAB_0059268d
    FLD float ptr [ESP + 0x8]           ; 005926b8
        ;   Label: LAB_005926b8
    CALL crt_math.c_acos_FUN_005b9924   ; 005926bc
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005b9924()
    FSTP float ptr [ESP + 0x5c]         ; 005926c1
    JMP 0x0059268d                      ; 005926c5
        ;   XREF to: 0059268d (UNCONDITIONAL_JUMP)  ; LAB_0059268d
    FLD float ptr [ESP + 0x4]           ; 005926c7
        ;   Label: LAB_005926c7
    FCOMP float ptr [0x005eed3e]        ; 005926cb | DAT_005eed3e
    FNSTSW AX                           ; 005926d1
    SAHF                                ; 005926d3
    JA 0x005926f7                       ; 005926d4
        ;   XREF to: 005926f7 (CONDITIONAL_JUMP)  ; LAB_005926f7
    MOV dword ptr [ESP + 0x54],0x40490fdb ; 005926d6
    FLDZ                                ; 005926de
        ;   Label: LAB_005926de
    FCOMP float ptr [ESP + 0x30]        ; 005926e0
    FNSTSW AX                           ; 005926e4
    SAHF                                ; 005926e6
    JBE 0x005925d2                      ; 005926e7
        ;   XREF to: 005925d2 (CONDITIONAL_JUMP)  ; LAB_005925d2
    XOR byte ptr [ESP + 0x57],0x80      ; 005926ed
    JMP 0x005925d2                      ; 005926f2
        ;   XREF to: 005925d2 (UNCONDITIONAL_JUMP)  ; LAB_005925d2
    CMP dword ptr [ESP + 0x4],0x3f800000 ; 005926f7
        ;   Label: LAB_005926f7
    JL 0x00592709                       ; 005926ff
        ;   XREF to: 00592709 (CONDITIONAL_JUMP)  ; LAB_00592709
    XOR EBX,EBX                         ; 00592701
    MOV dword ptr [ESP + 0x54],EBX      ; 00592703
    JMP 0x005926de                      ; 00592707
        ;   XREF to: 005926de (UNCONDITIONAL_JUMP)  ; LAB_005926de
    FLD float ptr [ESP + 0x4]           ; 00592709
        ;   Label: LAB_00592709
    CALL crt_math.c_acos_FUN_005b9924   ; 0059270d
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005b9924()
    FSTP float ptr [ESP + 0x54]         ; 00592712
    JMP 0x005926de                      ; 00592716
        ;   XREF to: 005926de (UNCONDITIONAL_JUMP)  ; LAB_005926de

