; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_FUN_00548250(CDeformableModelInstance *this_ptr,CVector3f *point)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   point
; Local Variables:
; undefined8       Stack[-0x108]:8  local_108
; undefined8       Stack[-0x100]:8  local_100
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
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70 at 00426eb8
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548250
        ;   Label: core_skeleton.cpp_FUN_00548250
    PUSH ESI                            ; 00548251
    PUSH EDI                            ; 00548252
    PUSH EBP                            ; 00548253
    MOV EBP,ESP                         ; 00548254
    SUB ESP,0xf8                        ; 00548256
    AND ESP,0xfffffff8                  ; 0054825c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0054825f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00548262
    PUSH EDX                            ; 00548265
    XOR ESI,ESI                         ; 00548266
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00548268
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    MOV ECX,0x7149f2ca                  ; 0054826d
    ADD ESP,0x4                         ; 00548272
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 00548275
    MOV dword ptr [ESP + 0xc4],EAX      ; 0054827b
    MOV dword ptr [ESP + 0xd4],ECX      ; 00548282
    MOV dword ptr [ESP + 0xc8],ESI      ; 00548289
    MOV dword ptr [ESP + 0xd8],ESI      ; 00548290
    TEST EDX,EDX                        ; 00548297
    JLE 0x005484c1                      ; 00548299
        ;   XREF to: 005484c1 (CONDITIONAL_JUMP)  ; LAB_005484c1
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054829f
    ADD EDX,0xe80                       ; 005482a2
    MOV dword ptr [ESP + 0xdc],EAX      ; 005482a8
    MOV dword ptr [ESP + 0xcc],EDX      ; 005482af
    MOV ECX,dword ptr [ESP + 0xdc]      ; 005482b6
        ;   Label: LAB_005482b6
    MOV ECX,dword ptr [ECX + 0x1d21c]   ; 005482bd
    TEST ECX,ECX                        ; 005482c3
    JL 0x00548489                       ; 005482c5
        ;   XREF to: 00548489 (CONDITIONAL_JUMP)  ; LAB_00548489
    MOV EAX,dword ptr [EDX + 0xc]       ; 005482cb
    MOV dword ptr [ESP + 0xa0],EAX      ; 005482ce
    MOV EAX,dword ptr [EDX + 0x1c]      ; 005482d5
    MOV dword ptr [ESP + 0xac],EAX      ; 005482d8
    MOV EAX,dword ptr [EDX + 0x2c]      ; 005482df
    MOV dword ptr [ESP + 0x8c],EAX      ; 005482e2
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005482e9
    MOV dword ptr [ESP + 0x4c],EAX      ; 005482f0
    MOV EAX,dword ptr [ESP + 0xac]      ; 005482f4
    MOV dword ptr [ESP + 0x50],EAX      ; 005482fb
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005482ff
    MOV dword ptr [ESP + 0x54],EAX      ; 00548306
    IMUL EAX,ECX,0x30                   ; 0054830a
    LEA EDI,[ESP + 0x70]                ; 0054830d
    LEA ESI,[ESP + 0x4c]                ; 00548311
    MOVSD ES:EDI,ESI                    ; 00548315
    MOVSD ES:EDI,ESI                    ; 00548316
    MOVSD ES:EDI,ESI                    ; 00548317
    ADD EAX,dword ptr [ESP + 0xcc]      ; 00548318
    MOV ESI,dword ptr [EAX + 0xc]       ; 0054831f
    LEA EDI,[ESP + 0x34]                ; 00548322
    MOV dword ptr [ESP + 0x90],ESI      ; 00548326
    MOV ESI,dword ptr [EAX + 0x1c]      ; 0054832d
    MOV EAX,dword ptr [EAX + 0x2c]      ; 00548330
    MOV dword ptr [ESP + 0xe0],EAX      ; 00548333
    MOV EAX,dword ptr [ESP + 0x90]      ; 0054833a
    MOV dword ptr [ESP + 0x68],ESI      ; 00548341
    MOV dword ptr [ESP + 0x64],EAX      ; 00548345
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00548349
    LEA ESI,[ESP + 0x64]                ; 00548350
    MOV dword ptr [ESP + 0x6c],EAX      ; 00548354
    MOVSD ES:EDI,ESI                    ; 00548358
    MOVSD ES:EDI,ESI                    ; 00548359
    MOVSD ES:EDI,ESI                    ; 0054835a
    FLD float ptr [ESP + 0x34]          ; 0054835b
    FLD float ptr [ESP + 0x38]          ; 0054835f
    FLD float ptr [ESP + 0x3c]          ; 00548363
    LEA EDI,[ESP + 0x1c]                ; 00548367
    LEA ESI,[ESP + 0x10]                ; 0054836b
    FXCH ST2                            ; 0054836f
    FSUB float ptr [ESP + 0x70]         ; 00548371
    FXCH                                ; 00548375
    FSUB float ptr [ESP + 0x74]         ; 00548377
    FXCH ST2                            ; 0054837b
    FSUB float ptr [ESP + 0x78]         ; 0054837d
    FXCH                                ; 00548381
    FSTP float ptr [ESP + 0x10]         ; 00548383
    FXCH                                ; 00548387
    FSTP float ptr [ESP + 0x14]         ; 00548389
    FSTP float ptr [ESP + 0x18]         ; 0054838d
    MOVSD ES:EDI,ESI                    ; 00548391
    MOVSD ES:EDI,ESI                    ; 00548392
    MOVSD ES:EDI,ESI                    ; 00548393
    FLD float ptr [ESP + 0x20]          ; 00548394
    FMUL ST0                            ; 00548398
    FLD float ptr [ESP + 0x1c]          ; 0054839a
    FMUL ST0                            ; 0054839e
    FADDP                               ; 005483a0
    FLD float ptr [ESP + 0x24]          ; 005483a2
    FMUL ST0                            ; 005483a6
    FADDP                               ; 005483a8
    FSQRT                               ; 005483aa
    FLDZ                                ; 005483ac
    FXCH                                ; 005483ae
    FSTP double ptr [ESP]               ; 005483b0
    FCOMP double ptr [ESP]              ; 005483b3
    FNSTSW AX                           ; 005483b6
    SAHF                                ; 005483b8
    JNC 0x00548449                      ; 005483b9
        ;   XREF to: 00548449 (CONDITIONAL_JUMP)  ; LAB_00548449
    FLD double ptr [ESP]                ; 005483bf
    FLD1                                ; 005483c2
    FLD float ptr [ESP + 0x1c]          ; 005483c4
    FXCH ST2                            ; 005483c8
    FSTP float ptr [ESP + 0xd0]         ; 005483ca
    FDIV float ptr [ESP + 0xd0]         ; 005483d1
    FXCH                                ; 005483d8
    FMUL ST1                            ; 005483da
    FLD float ptr [ESP + 0x20]          ; 005483dc
    FMUL ST2                            ; 005483e0
    FLD float ptr [ESP + 0x24]          ; 005483e2
    FMULP ST3                           ; 005483e6
    FLD float ptr [EBX + 0x4]           ; 005483e8
    FXCH                                ; 005483eb
    FSTP float ptr [ESP + 0x20]         ; 005483ed
    FMUL float ptr [ESP + 0x20]         ; 005483f1
    FLD float ptr [ESP + 0x74]          ; 005483f5
    FMUL float ptr [ESP + 0x20]         ; 005483f9
    FXCH ST2                            ; 005483fd
    FSTP float ptr [ESP + 0x1c]         ; 005483ff
    FLD float ptr [EBX]                 ; 00548403
    FMUL float ptr [ESP + 0x1c]         ; 00548405
    FLD float ptr [ESP + 0x70]          ; 00548409
    FMUL float ptr [ESP + 0x1c]         ; 0054840d
    FXCH ST4                            ; 00548411
    FSTP float ptr [ESP + 0x24]         ; 00548413
    FXCH ST3                            ; 00548417
    FADDP ST2,ST0                       ; 00548419
    FADDP ST2,ST0                       ; 0054841b
    FLD float ptr [ESP + 0x78]          ; 0054841d
    FMUL float ptr [ESP + 0x24]         ; 00548421
    FLD float ptr [EBX + 0x8]           ; 00548425
    FMUL float ptr [ESP + 0x24]         ; 00548428
    FXCH                                ; 0054842c
    FADDP ST2,ST0                       ; 0054842e
    FADDP ST2,ST0                       ; 00548430
    FSUBP                               ; 00548432
    FLDZ                                ; 00548434
    FXCH                                ; 00548436
    FSTP double ptr [ESP + 0x8]         ; 00548438
    FCOMP double ptr [ESP + 0x8]        ; 0054843c
    FNSTSW AX                           ; 00548440
    SAHF                                ; 00548442
    JC 0x005484cf                       ; 00548443
        ;   XREF to: 005484cf (CONDITIONAL_JUMP)  ; LAB_005484cf
    FLD float ptr [EBX]                 ; 00548449
        ;   Label: LAB_00548449
    FSUB float ptr [ESP + 0x70]         ; 0054844b
    FMUL ST0                            ; 0054844f
    FLD float ptr [EBX + 0x4]           ; 00548451
    FSUB float ptr [ESP + 0x74]         ; 00548454
    FMUL ST0                            ; 00548458
    FLD float ptr [EBX + 0x8]           ; 0054845a
    FXCH                                ; 0054845d
    FADDP ST2,ST0                       ; 0054845f
    FSUB float ptr [ESP + 0x78]         ; 00548461
    FMUL ST0                            ; 00548465
        ;   Label: LAB_00548465
    FADDP                               ; 00548467
    FSQRT                               ; 00548469
    FSTP float ptr [ESP + 0xec]         ; 0054846b
    FLD float ptr [ESP + 0xec]          ; 00548472
    FCOMP float ptr [ESP + 0xd4]        ; 00548479
    FNSTSW AX                           ; 00548480
    SAHF                                ; 00548482
    JC 0x005485a1                       ; 00548483
        ;   XREF to: 005485a1 (CONDITIONAL_JUMP)  ; LAB_005485a1
    MOV ECX,dword ptr [ESP + 0xdc]      ; 00548489
        ;   Label: LAB_00548489
    ADD ECX,0x24                        ; 00548490
    MOV ESI,dword ptr [ESP + 0xd8]      ; 00548493
    MOV dword ptr [ESP + 0xdc],ECX      ; 0054849a
    MOV ECX,dword ptr [ESP + 0xc4]      ; 005484a1
    ADD EDX,0x30                        ; 005484a8
    INC ESI                             ; 005484ab
    MOV EDI,dword ptr [ECX + 0x1d1f8]   ; 005484ac
    MOV dword ptr [ESP + 0xd8],ESI      ; 005484b2
    CMP ESI,EDI                         ; 005484b9
    JL 0x005482b6                       ; 005484bb
        ;   XREF to: 005482b6 (CONDITIONAL_JUMP)  ; LAB_005482b6
    MOV EAX,dword ptr [ESP + 0xc8]      ; 005484c1
        ;   Label: LAB_005484c1
    MOV ESP,EBP                         ; 005484c8
    POP EBP                             ; 005484ca
    POP EDI                             ; 005484cb
    POP ESI                             ; 005484cc
    POP EBX                             ; 005484cd
    RET                                 ; 005484ce
    FLD double ptr [ESP + 0x8]          ; 005484cf
        ;   Label: LAB_005484cf
    FCOMP double ptr [ESP]              ; 005484d3
    FNSTSW AX                           ; 005484d6
    SAHF                                ; 005484d8
    JC 0x005484fc                       ; 005484d9
        ;   XREF to: 005484fc (CONDITIONAL_JUMP)  ; LAB_005484fc
    FLD float ptr [EBX]                 ; 005484db
    FSUB float ptr [ESP + 0x34]         ; 005484dd
    FMUL ST0                            ; 005484e1
    FLD float ptr [EBX + 0x4]           ; 005484e3
    FSUB float ptr [ESP + 0x38]         ; 005484e6
    FMUL ST0                            ; 005484ea
    FLD float ptr [EBX + 0x8]           ; 005484ec
    FXCH                                ; 005484ef
    FADDP ST2,ST0                       ; 005484f1
    FSUB float ptr [ESP + 0x3c]         ; 005484f3
    JMP 0x00548465                      ; 005484f7
        ;   XREF to: 00548465 (UNCONDITIONAL_JUMP)  ; LAB_00548465
    FLD float ptr [ESP + 0x1c]          ; 005484fc
        ;   Label: LAB_005484fc
    FLD double ptr [ESP + 0x8]          ; 00548500
    FSTP float ptr [ESP + 0xe4]         ; 00548504
    FMUL float ptr [ESP + 0xe4]         ; 0054850b
    FLD float ptr [ESP + 0x20]          ; 00548512
    FMUL float ptr [ESP + 0xe4]         ; 00548516
    FLD float ptr [ESP + 0x24]          ; 0054851d
    FMUL float ptr [ESP + 0xe4]         ; 00548521
    FLD float ptr [ESP + 0x70]          ; 00548528
    FLD float ptr [ESP + 0x74]          ; 0054852c
    LEA EDI,[ESP + 0x28]                ; 00548530
    LEA ESI,[ESP + 0x7c]                ; 00548534
    FXCH ST4                            ; 00548538
    FSTP float ptr [ESP + 0x7c]         ; 0054853a
    FXCH ST2                            ; 0054853e
    FSTP float ptr [ESP + 0x80]         ; 00548540
    FSTP float ptr [ESP + 0x84]         ; 00548547
    MOVSD ES:EDI,ESI                    ; 0054854e
    MOVSD ES:EDI,ESI                    ; 0054854f
    MOVSD ES:EDI,ESI                    ; 00548550
    FLD float ptr [ESP + 0x78]          ; 00548551
    LEA EDI,[ESP + 0x40]                ; 00548555
    LEA ESI,[ESP + 0x58]                ; 00548559
    FXCH                                ; 0054855d
    FADD float ptr [ESP + 0x28]         ; 0054855f
    FXCH ST2                            ; 00548563
    FADD float ptr [ESP + 0x2c]         ; 00548565
    FXCH                                ; 00548569
    FADD float ptr [ESP + 0x30]         ; 0054856b
    FXCH ST2                            ; 0054856f
    FSTP float ptr [ESP + 0x58]         ; 00548571
    FSTP float ptr [ESP + 0x5c]         ; 00548575
    FSTP float ptr [ESP + 0x60]         ; 00548579
    MOVSD ES:EDI,ESI                    ; 0054857d
    MOVSD ES:EDI,ESI                    ; 0054857e
    MOVSD ES:EDI,ESI                    ; 0054857f
    FLD float ptr [EBX]                 ; 00548580
    FSUB float ptr [ESP + 0x40]         ; 00548582
    FMUL ST0                            ; 00548586
    FLD float ptr [EBX + 0x4]           ; 00548588
    FSUB float ptr [ESP + 0x44]         ; 0054858b
    FMUL ST0                            ; 0054858f
    FLD float ptr [EBX + 0x8]           ; 00548591
    FXCH                                ; 00548594
    FADDP ST2,ST0                       ; 00548596
    FSUB float ptr [ESP + 0x48]         ; 00548598
    JMP 0x00548465                      ; 0054859c
        ;   XREF to: 00548465 (UNCONDITIONAL_JUMP)  ; LAB_00548465
    MOV EAX,dword ptr [ESP + 0xec]      ; 005485a1
        ;   Label: LAB_005485a1
    MOV dword ptr [ESP + 0xc8],ECX      ; 005485a8
    MOV dword ptr [ESP + 0xd4],EAX      ; 005485af
    JMP 0x00548489                      ; 005485b6
        ;   XREF to: 00548489 (UNCONDITIONAL_JUMP)  ; LAB_00548489

