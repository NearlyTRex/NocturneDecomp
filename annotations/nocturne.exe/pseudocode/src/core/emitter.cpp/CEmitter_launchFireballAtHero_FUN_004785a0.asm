; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_emitter_cpp_CEmitter_launchFireballAtHero_FUN_004785a0(int param_1)
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
; undefined8       Stack[-0x3c]:8  local_3c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_0054e130 at 0054e183
;
; Referenced Globals:
;   double DOUBLE_0057f1ac = 5.35679601527854E-315
;   double DOUBLE_0057f1b4 = -1.30899693895833
;   double DOUBLE_0057f1bc = 32
;   double DOUBLE_0057f1c4 = 1.30899693895833
;   float FLOAT_0057f1cc = 2
;   undefined4 DAT_005b80f0
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_fire.cpp_CFireEffect_createFireball_FUN_0048b270
;   core_hero.cpp_closestHeroToPoint_FUN_004b4500
;   crt_math.c_atan2_FUN_00566c81
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004785a0
        ;   Label: core_emitter.cpp_CEmitter_launchFireballAtHero_FUN_004785a0
    PUSH EBP                            ; 004785a1
    MOV EBP,ESP                         ; 004785a2
    SUB ESP,0x64                        ; 004785a4
    AND ESP,0xfffffff8                  ; 004785a7
    MOV EBX,dword ptr [EBP + 0xc]       ; 004785aa
    ADD EBX,0x20                        ; 004785ad
    PUSH EBX                            ; 004785b0
    CALL core_hero.cpp_closestHeroToPoint_FUN_004b4500 ; 004785b1
        ;   XREF to: 004b4500 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_closestHeroToPoint_FUN_004b4500()
    FLD float ptr [EAX + 0x20]          ; 004785b6
    FSUB float ptr [EBX]                ; 004785b9
    ADD ESP,0x4                         ; 004785bb
    FSTP float ptr [ESP + 0x10]         ; 004785be
    FLD float ptr [EAX + 0x24]          ; 004785c2
    FSUB float ptr [EBX + 0x4]          ; 004785c5
    FSTP float ptr [ESP + 0x14]         ; 004785c8
    FLD float ptr [EAX + 0x28]          ; 004785cc
    LEA EAX,[ESP + 0x4]                 ; 004785cf
    FSUB float ptr [EBX + 0x8]          ; 004785d3
    LEA EBX,[ESP + 0x10]                ; 004785d6
    FSTP float ptr [ESP + 0x18]         ; 004785da
    CMP EAX,EBX                         ; 004785de
    JZ 0x004785fa                       ; 004785e0
        ;   XREF to: 004785fa (CONDITIONAL_JUMP)  ; LAB_004785fa
    MOV EAX,dword ptr [ESP + 0x10]      ; 004785e2
    MOV dword ptr [ESP + 0x4],EAX       ; 004785e6
    MOV EAX,dword ptr [ESP + 0x14]      ; 004785ea
    MOV dword ptr [ESP + 0x8],EAX       ; 004785ee
    MOV EAX,dword ptr [ESP + 0x18]      ; 004785f2
    MOV dword ptr [ESP + 0xc],EAX       ; 004785f6
    FLD float ptr [ESP + 0x8]           ; 004785fa
        ;   Label: LAB_004785fa
    PUSH 0x41000000                     ; 004785fe
    FADD float ptr [0x0057f1ac]         ; 00478603 | DOUBLE_0057f1ac
    PUSH 0xc1000000                     ; 00478609
    FSTP float ptr [ESP + 0x10]         ; 0047860e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00478612
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x68],EAX      ; 00478617
    FLD float ptr [ESP + 0x68]          ; 0047861b
    ADD ESP,0x8                         ; 0047861f
    PUSH 0x41000000                     ; 00478622
    FADD float ptr [ESP + 0x8]          ; 00478627
    PUSH 0xc1000000                     ; 0047862b
    FSTP float ptr [ESP + 0xc]          ; 00478630
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00478634
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    FLD double ptr [0x0057f1b4]         ; 00478639 | DOUBLE_0057f1b4
    FLD ST0                             ; 0047863f
    MOV dword ptr [ESP + 0x68],EAX      ; 00478641
    FSIN                                ; 00478645
    FLD double ptr [0x0057f1c4]         ; 00478647 | DOUBLE_0057f1c4
    FPTAN                               ; 0047864d
    FSTP ST0                            ; 0047864f
    FLD float ptr [ESP + 0x68]          ; 00478651
    ADD ESP,0x8                         ; 00478655
    FADD float ptr [ESP + 0xc]          ; 00478658
    FST float ptr [ESP + 0xc]           ; 0047865c
    FLD float ptr [ESP + 0x4]           ; 00478660
    CALL crt_math.c_atan2_FUN_00566c81  ; 00478664
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_00566c81()
    FLD float ptr [ESP + 0xc]           ; 00478669
    FMUL ST0                            ; 0047866d
    FLD float ptr [ESP + 0x4]           ; 0047866f
    FMUL ST0                            ; 00478673
    FADDP                               ; 00478675
    FSQRT                               ; 00478677
    FXCH ST4                            ; 00478679
    FCOS                                ; 0047867b
    FLD ST1                             ; 0047867d
    FSIN                                ; 0047867f
    FXCH ST2                            ; 00478681
    FCOS                                ; 00478683
    FXCH ST5                            ; 00478685
    FSTP double ptr [ESP + 0x34]        ; 00478687
    FXCH ST2                            ; 0047868b
    FMUL double ptr [ESP + 0x34]        ; 0047868d
    FSUB float ptr [ESP + 0x8]          ; 00478691
    FLD ST2                             ; 00478695
    FMUL float ptr [0x0057f1cc]         ; 00478697 | FLOAT_0057f1cc
    FLD double ptr [ESP + 0x34]         ; 0047869d
    FMUL double ptr [0x0057f1bc]        ; 004786a1 | DOUBLE_0057f1bc
    FXCH                                ; 004786a7
    FMUL ST4                            ; 004786a9
    FXCH                                ; 004786ab
    FMUL double ptr [ESP + 0x34]        ; 004786ad
    FXCH                                ; 004786b1
    FMULP ST2                           ; 004786b3
    FXCH ST2                            ; 004786b5
    FMUL ST3                            ; 004786b7
    FXCH ST5                            ; 004786b9
    FMULP ST3                           ; 004786bb
    FXCH                                ; 004786bd
    FSTP float ptr [ESP + 0x58]         ; 004786bf
    FXCH ST2                            ; 004786c3
    FCHS                                ; 004786c5
    FSTP float ptr [ESP + 0x2c]         ; 004786c7
    FXCH                                ; 004786cb
    FST float ptr [ESP]                 ; 004786cd
    FLDZ                                ; 004786d0
    FXCH ST3                            ; 004786d2
    FSTP float ptr [ESP + 0x28]         ; 004786d4
    FXCH                                ; 004786d8
    FSTP float ptr [ESP + 0x30]         ; 004786da
    FXCH                                ; 004786de
    FCOMPP                              ; 004786e0
    FNSTSW AX                           ; 004786e2
    SAHF                                ; 004786e4
    JNC 0x0047875f                      ; 004786e5
        ;   XREF to: 0047875f (CONDITIONAL_JUMP)  ; LAB_0047875f
    FLD float ptr [ESP + 0x58]          ; 004786e7
    FDIV float ptr [ESP]                ; 004786eb
    FSQRT                               ; 004786ee
    FLD float ptr [ESP + 0x28]          ; 004786f0
    FXCH                                ; 004786f4
    FSTP float ptr [ESP + 0x5c]         ; 004786f6
    FMUL float ptr [ESP + 0x5c]         ; 004786fa
    FLD float ptr [ESP + 0x2c]          ; 004786fe
    FMUL float ptr [ESP + 0x5c]         ; 00478702
    FLD float ptr [ESP + 0x30]          ; 00478706
    FMUL float ptr [ESP + 0x5c]         ; 0047870a
    LEA EBX,[ESP + 0x28]                ; 0047870e
    LEA EAX,[ESP + 0x1c]                ; 00478712
    FXCH ST2                            ; 00478716
    FSTP float ptr [ESP + 0x1c]         ; 00478718
    FSTP float ptr [ESP + 0x20]         ; 0047871c
    FSTP float ptr [ESP + 0x24]         ; 00478720
    CMP EBX,EAX                         ; 00478724
    JZ 0x00478740                       ; 00478726
        ;   XREF to: 00478740 (CONDITIONAL_JUMP)  ; LAB_00478740
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00478728
    MOV dword ptr [ESP + 0x28],EAX      ; 0047872c
    MOV EAX,dword ptr [ESP + 0x20]      ; 00478730
    MOV dword ptr [ESP + 0x2c],EAX      ; 00478734
    MOV EAX,dword ptr [ESP + 0x24]      ; 00478738
    MOV dword ptr [ESP + 0x30],EAX      ; 0047873c
    PUSH 0x0                            ; 00478740
        ;   Label: LAB_00478740
    PUSH 0x0                            ; 00478742
    LEA EAX,[ESP + 0x30]                ; 00478744
    PUSH EAX                            ; 00478748
    MOV EAX,dword ptr [EBP + 0xc]       ; 00478749
    ADD EAX,0x20                        ; 0047874c
    PUSH EAX                            ; 0047874f
    MOV EDX,dword ptr [0x005b80f0]      ; 00478750 | DAT_005b80f0
    PUSH EDX                            ; 00478756
    CALL core_fire.cpp_CFireEffect_createFireball_FUN_0048b270 ; 00478757
        ;   XREF to: 0048b270 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createFireball_FUN_0048b270()
    ADD ESP,0x14                        ; 0047875c
    MOV ESP,EBP                         ; 0047875f
        ;   Label: LAB_0047875f
    POP EBP                             ; 00478761
    POP EBX                             ; 00478762
    RET                                 ; 00478763

