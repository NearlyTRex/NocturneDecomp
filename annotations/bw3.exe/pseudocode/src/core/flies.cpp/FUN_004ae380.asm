; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_flies_cpp_FUN_004ae380(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined8       Stack[-0xe8]:8  local_e8
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
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_flies.cpp_CFlies_initFly_FUN_004ae280 at 004ae2ba
;   core_flies.cpp_CFlies_process_FUN_004ad950 at 004adcc3
;
; Referenced Globals:
;   undefined4 DAT_005c1c79
;   undefined4 DAT_005c1c81
;   undefined4 DAT_005c1c89
;   undefined4 DAT_005c1c91
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ae380
        ;   Label: core_flies.cpp_FUN_004ae380
    PUSH EDI                            ; 004ae381
    PUSH EBP                            ; 004ae382
    MOV EBP,ESP                         ; 004ae383
    SUB ESP,0xd8                        ; 004ae385
    AND ESP,0xfffffff8                  ; 004ae38b
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ae38e
    MOV dword ptr [ESP + 0xcc],ESI      ; 004ae391
    MOV ESI,dword ptr [EBP + 0x10]      ; 004ae398
    PUSH 0x3f800000                     ; 004ae39b
    PUSH 0x0                            ; 004ae3a0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004ae3a2
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xdc],EAX      ; 004ae3a7
    FLD float ptr [ESP + 0xdc]          ; 004ae3ae
    ADD ESP,0x8                         ; 004ae3b5
    FST float ptr [ESP + 0x28]          ; 004ae3b8
    FMUL float ptr [ESP + 0x28]         ; 004ae3bc
    FMUL float ptr [ESI + 0x15c]        ; 004ae3c0
    FSTP float ptr [ESP + 0x28]         ; 004ae3c6
    FLD float ptr [ESI + 0x158]         ; 004ae3ca
    FLD ST0                             ; 004ae3d0
    FMUL double ptr [0x005c1c79]        ; 004ae3d2 | DAT_005c1c79
    SUB ESP,0x4                         ; 004ae3d8
    FXCH                                ; 004ae3db
    FMUL double ptr [0x005c1c81]        ; 004ae3dd | DAT_005c1c81
    FXCH                                ; 004ae3e3
    FSTP float ptr [ESP]                ; 004ae3e5
    SUB ESP,0x4                         ; 004ae3e8
    FSTP float ptr [ESP]                ; 004ae3eb
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004ae3ee
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xdc],EAX      ; 004ae3f3
    FLD float ptr [ESP + 0xdc]          ; 004ae3fa
    ADD ESP,0x8                         ; 004ae401
    FSTP float ptr [ESP + 0x24]         ; 004ae404
    FLD float ptr [ESI + 0x160]         ; 004ae408
    FLD ST0                             ; 004ae40e
    FMUL double ptr [0x005c1c79]        ; 004ae410 | DAT_005c1c79
    SUB ESP,0x4                         ; 004ae416
    FXCH                                ; 004ae419
    FMUL double ptr [0x005c1c81]        ; 004ae41b | DAT_005c1c81
    FXCH                                ; 004ae421
    FSTP float ptr [ESP]                ; 004ae423
    SUB ESP,0x4                         ; 004ae426
    FSTP float ptr [ESP]                ; 004ae429
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004ae42c
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xdc],EAX      ; 004ae431
    FLD float ptr [ESP + 0xdc]          ; 004ae438
    ADD ESP,0x8                         ; 004ae43f
    FSTP float ptr [ESP + 0x2c]         ; 004ae442
    TEST EBX,EBX                        ; 004ae446
    JZ 0x004ae596                       ; 004ae448
        ;   XREF to: 004ae596 (CONDITIONAL_JUMP)  ; LAB_004ae596
    FLD float ptr [ESP + 0x24]          ; 004ae44e
    FLD float ptr [ESP + 0x28]          ; 004ae452
    FLD float ptr [ESP + 0x2c]          ; 004ae456
    LEA EDI,[ESP + 0xb4]                ; 004ae45a
    LEA ESI,[ESP + 0x84]                ; 004ae461
    FXCH ST2                            ; 004ae468
    FSUB float ptr [EBX]                ; 004ae46a
    FXCH                                ; 004ae46c
    FSUB float ptr [EBX + 0x4]          ; 004ae46e
    FXCH ST2                            ; 004ae471
    FSUB float ptr [EBX + 0x8]          ; 004ae473
    FXCH                                ; 004ae476
    FSTP float ptr [ESP + 0x84]         ; 004ae478
    FXCH                                ; 004ae47f
    FSTP float ptr [ESP + 0x88]         ; 004ae481
    FSTP float ptr [ESP + 0x8c]         ; 004ae488
    MOVSD ES:EDI,ESI                    ; 004ae48f
    MOVSD ES:EDI,ESI                    ; 004ae490
    MOVSD ES:EDI,ESI                    ; 004ae491
    FLD float ptr [ESP + 0xb8]          ; 004ae492
    FMUL ST0                            ; 004ae499
    FLD float ptr [ESP + 0xb4]          ; 004ae49b
    FMUL ST0                            ; 004ae4a2
    FADDP                               ; 004ae4a4
    FLD float ptr [ESP + 0xbc]          ; 004ae4a6
    FMUL ST0                            ; 004ae4ad
    FADDP                               ; 004ae4af
    FSQRT                               ; 004ae4b1
    FST float ptr [ESP + 0x8]           ; 004ae4b3
    FST double ptr [ESP]                ; 004ae4b7
    FCOMP double ptr [0x005c1c89]       ; 004ae4ba | DAT_005c1c89
    FNSTSW AX                           ; 004ae4c0
    SAHF                                ; 004ae4c2
    JA 0x004ae5b1                       ; 004ae4c3
        ;   XREF to: 004ae5b1 (CONDITIONAL_JUMP)  ; LAB_004ae5b1
    FLD1                                ; 004ae4c9
    FCOMP double ptr [ESP]              ; 004ae4cb
    FNSTSW AX                           ; 004ae4ce
    SAHF                                ; 004ae4d0
    JBE 0x004ae596                      ; 004ae4d1
        ;   XREF to: 004ae596 (CONDITIONAL_JUMP)  ; LAB_004ae596
    FLDZ                                ; 004ae4d7
    FCOMP double ptr [ESP]              ; 004ae4d9
    FNSTSW AX                           ; 004ae4dc
    SAHF                                ; 004ae4de
    JNC 0x004ae596                      ; 004ae4df
        ;   XREF to: 004ae596 (CONDITIONAL_JUMP)  ; LAB_004ae596
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004ae4e5
    MOV dword ptr [ESP + 0x54],EAX      ; 004ae4ec
    MOV EAX,dword ptr [ESP + 0xb8]      ; 004ae4f0
    LEA EDI,[ESP + 0x90]                ; 004ae4f7
    MOV dword ptr [ESP + 0x58],EAX      ; 004ae4fe
    MOV EAX,dword ptr [ESP + 0xbc]      ; 004ae502
    LEA ESI,[ESP + 0x54]                ; 004ae509
    MOV dword ptr [ESP + 0x5c],EAX      ; 004ae50d
    MOVSD ES:EDI,ESI                    ; 004ae511
    MOVSD ES:EDI,ESI                    ; 004ae512
    MOVSD ES:EDI,ESI                    ; 004ae513
    FLD1                                ; 004ae514
    FLD float ptr [ESP + 0x90]          ; 004ae516
    FXCH                                ; 004ae51d
    FDIV float ptr [ESP + 0x8]          ; 004ae51f
    FXCH                                ; 004ae523
    FMUL ST1                            ; 004ae525
    FLD float ptr [ESP + 0x94]          ; 004ae527
    FMUL ST2                            ; 004ae52e
    FLD float ptr [ESP + 0x98]          ; 004ae530
    FMULP ST3                           ; 004ae537
    LEA EDI,[ESP + 0x18]                ; 004ae539
    LEA ESI,[ESP + 0x6c]                ; 004ae53d
    FXCH                                ; 004ae541
    FSTP float ptr [ESP + 0x6c]         ; 004ae543
    FSTP float ptr [ESP + 0x70]         ; 004ae547
    FSTP float ptr [ESP + 0x74]         ; 004ae54b
    MOVSD ES:EDI,ESI                    ; 004ae54f
    MOVSD ES:EDI,ESI                    ; 004ae550
    MOVSD ES:EDI,ESI                    ; 004ae551
    LEA EAX,[ESP + 0x24]                ; 004ae552
    FLD float ptr [EBX + 0x4]           ; 004ae556
    FLD float ptr [EBX + 0x8]           ; 004ae559
    FLD float ptr [EBX]                 ; 004ae55c
    LEA EDI,[ESP + 0x3c]                ; 004ae55e
    LEA ESI,[ESP + 0x78]                ; 004ae562
    LEA EBX,[ESP + 0x3c]                ; 004ae566
    FADD float ptr [ESP + 0x18]         ; 004ae56a
    FXCH ST2                            ; 004ae56e
    FADD float ptr [ESP + 0x1c]         ; 004ae570
    FXCH                                ; 004ae574
    FADD float ptr [ESP + 0x20]         ; 004ae576
    FXCH ST2                            ; 004ae57a
    FSTP float ptr [ESP + 0x78]         ; 004ae57c
    FSTP float ptr [ESP + 0x7c]         ; 004ae580
    FSTP float ptr [ESP + 0x80]         ; 004ae584
    MOVSD ES:EDI,ESI                    ; 004ae58b
    MOVSD ES:EDI,ESI                    ; 004ae58c
    MOVSD ES:EDI,ESI                    ; 004ae58d
    CMP EAX,EBX                         ; 004ae58e
    JNZ 0x004ae699                      ; 004ae590
        ;   XREF to: 004ae699 (CONDITIONAL_JUMP)  ; LAB_004ae699
    MOV EDI,dword ptr [ESP + 0xcc]      ; 004ae596
        ;   Label: LAB_004ae596
    LEA ESI,[ESP + 0x24]                ; 004ae59d
    MOVSD ES:EDI,ESI                    ; 004ae5a1
    MOVSD ES:EDI,ESI                    ; 004ae5a2
    MOVSD ES:EDI,ESI                    ; 004ae5a3
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004ae5a4
    MOV ESP,EBP                         ; 004ae5ab
    POP EBP                             ; 004ae5ad
    POP EDI                             ; 004ae5ae
    POP EBX                             ; 004ae5af
    RET                                 ; 004ae5b0
    FLD float ptr [0x005c1c91]          ; 004ae5b1 | DAT_005c1c91
        ;   Label: LAB_004ae5b1
    FLD float ptr [ESP + 0xb4]          ; 004ae5b7
    FMUL ST1                            ; 004ae5be
    FLD float ptr [ESP + 0xb8]          ; 004ae5c0
    FMUL ST2                            ; 004ae5c7
    FLD float ptr [ESP + 0xbc]          ; 004ae5c9
    FMULP ST3                           ; 004ae5d0
    LEA EDI,[ESP + 0xc]                 ; 004ae5d2
    LEA ESI,[ESP + 0x9c]                ; 004ae5d6
    FXCH                                ; 004ae5dd
    FSTP float ptr [ESP + 0x9c]         ; 004ae5df
    FSTP float ptr [ESP + 0xa0]         ; 004ae5e6
    FSTP float ptr [ESP + 0xa4]         ; 004ae5ed
    MOVSD ES:EDI,ESI                    ; 004ae5f4
    MOVSD ES:EDI,ESI                    ; 004ae5f5
    MOVSD ES:EDI,ESI                    ; 004ae5f6
    FLD1                                ; 004ae5f7
    FLD float ptr [ESP + 0xc]           ; 004ae5f9
    FXCH                                ; 004ae5fd
    FDIV float ptr [ESP + 0x8]          ; 004ae5ff
    FXCH                                ; 004ae603
    FMUL ST1                            ; 004ae605
    FLD float ptr [ESP + 0x10]          ; 004ae607
    FMUL ST2                            ; 004ae60b
    FLD float ptr [ESP + 0x14]          ; 004ae60d
    FMULP ST3                           ; 004ae611
    LEA EDI,[ESP + 0x30]                ; 004ae613
    LEA ESI,[ESP + 0x60]                ; 004ae617
    FXCH                                ; 004ae61b
    FSTP float ptr [ESP + 0x60]         ; 004ae61d
    FSTP float ptr [ESP + 0x64]         ; 004ae621
    FSTP float ptr [ESP + 0x68]         ; 004ae625
    MOVSD ES:EDI,ESI                    ; 004ae629
    MOVSD ES:EDI,ESI                    ; 004ae62a
    MOVSD ES:EDI,ESI                    ; 004ae62b
    LEA EAX,[ESP + 0xa8]                ; 004ae62c
    FLD float ptr [EBX + 0x4]           ; 004ae633
    FLD float ptr [EBX + 0x8]           ; 004ae636
    FLD float ptr [EBX]                 ; 004ae639
    LEA EDI,[ESP + 0xa8]                ; 004ae63b
    LEA ESI,[ESP + 0x48]                ; 004ae642
    LEA EBX,[ESP + 0x24]                ; 004ae646
    FADD float ptr [ESP + 0x30]         ; 004ae64a
    FXCH ST2                            ; 004ae64e
    FADD float ptr [ESP + 0x34]         ; 004ae650
    FXCH                                ; 004ae654
    FADD float ptr [ESP + 0x38]         ; 004ae656
    FXCH ST2                            ; 004ae65a
    FSTP float ptr [ESP + 0x48]         ; 004ae65c
    FSTP float ptr [ESP + 0x4c]         ; 004ae660
    FSTP float ptr [ESP + 0x50]         ; 004ae664
    MOVSD ES:EDI,ESI                    ; 004ae668
    MOVSD ES:EDI,ESI                    ; 004ae669
    MOVSD ES:EDI,ESI                    ; 004ae66a
    CMP EBX,EAX                         ; 004ae66b
    JZ 0x004ae596                       ; 004ae66d
        ;   XREF to: 004ae596 (CONDITIONAL_JUMP)  ; LAB_004ae596
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004ae673
    MOV dword ptr [ESP + 0x24],EAX      ; 004ae67a
    MOV EAX,dword ptr [ESP + 0xac]      ; 004ae67e
    MOV dword ptr [ESP + 0x28],EAX      ; 004ae685
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004ae689
    MOV dword ptr [ESP + 0x2c],EAX      ; 004ae690
    JMP 0x004ae596                      ; 004ae694
        ;   XREF to: 004ae596 (UNCONDITIONAL_JUMP)  ; LAB_004ae596
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004ae699
        ;   Label: LAB_004ae699
    MOV dword ptr [ESP + 0x24],EAX      ; 004ae69d
    MOV EAX,dword ptr [ESP + 0x40]      ; 004ae6a1
    MOV dword ptr [ESP + 0x28],EAX      ; 004ae6a5
    MOV EAX,dword ptr [ESP + 0x44]      ; 004ae6a9
    MOV dword ptr [ESP + 0x2c],EAX      ; 004ae6ad
    JMP 0x004ae596                      ; 004ae6b1
        ;   XREF to: 004ae596 (UNCONDITIONAL_JUMP)  ; LAB_004ae596

