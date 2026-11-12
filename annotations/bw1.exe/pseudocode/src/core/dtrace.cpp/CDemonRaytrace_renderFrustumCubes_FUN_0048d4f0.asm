; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_0048d4f0(CDemonRaytrace *this_ptr,float fov_or_radius,int render_mode)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   fov_or_radius
; int              Stack[0xc]:4   render_mode
; Local Variables:
; undefined8       Stack[-0x1b0]:8  local_1b0
; undefined8       Stack[-0x1a8]:8  local_1a8
; undefined8       Stack[-0x1a0]:8  local_1a0
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined        Stack[-0x15c]:1  local_15c
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
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
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0 at 0054e435
;
; Referenced Globals:
;   undefined4 DAT_005db9bc
;   undefined4 DAT_005db9c4
;   undefined4 DAT_005db9cc
;   undefined4 DAT_0061255c
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01bef208
;   undefined4 DAT_01bef20c
;   undefined4 DAT_01bef210
;   undefined4 DAT_01bef214
;   undefined4 DAT_01bef218
;   undefined4 DAT_01bef21c
;   undefined4 DAT_01d1dd18
;   undefined4 DAT_01d1dd1c
;   undefined4 DAT_01d1dd20
;   undefined4 DAT_01d1dd24
;   ... and 6 more
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0
;   core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_0048e770
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_00483780
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0
;   engine_drender.cpp_FUN_00483ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048d4f0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_0048d4f0
    PUSH ESI                            ; 0048d4f1
    PUSH EDI                            ; 0048d4f2
    PUSH EBP                            ; 0048d4f3
    MOV EBP,ESP                         ; 0048d4f4
    SUB ESP,0x19c                       ; 0048d4f6
    AND ESP,0xfffffff8                  ; 0048d4fc
    MOV EBX,dword ptr [EBP + 0x14]      ; 0048d4ff
    CMP dword ptr [0x01bef21c],0x0      ; 0048d502 | DAT_01bef21c
    JZ 0x0048d515                       ; 0048d509
        ;   XREF to: 0048d515 (CONDITIONAL_JUMP)  ; LAB_0048d515
    CMP dword ptr [EBP + 0x1c],0x0      ; 0048d50b
    JNZ 0x0048de21                      ; 0048d50f
        ;   XREF to: 0048de21 (CONDITIONAL_JUMP)  ; LAB_0048de21
    XOR ESI,ESI                         ; 0048d515
        ;   Label: LAB_0048d515
    MOV dword ptr [0x01bef208],ESI      ; 0048d517 | DAT_01bef208
    MOV dword ptr [0x01bef20c],ESI      ; 0048d51d | DAT_01bef20c
    MOV dword ptr [0x01bef210],ESI      ; 0048d523 | DAT_01bef210
    MOV dword ptr [0x01bef214],ESI      ; 0048d529 | DAT_01bef214
    MOV dword ptr [0x01bef218],ESI      ; 0048d52f | DAT_01bef218
    MOV ESI,dword ptr [0x0061255c]      ; 0048d535 | DAT_0061255c
    PUSH ESI                            ; 0048d53b | DAT_01bc120c
    LEA ESI,[ESP + 0x58]                ; 0048d53c
    LEA EDI,[ESP + 0x7c]                ; 0048d540
    CALL engine_drender.cpp_FUN_00483ac0 ; 0048d544
        ;   XREF to: 00483ac0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_00483ac0()
    LEA ESI,[ESP + 0x58]                ; 0048d549
    ADD ESP,0x4                         ; 0048d54d
    MOVSD ES:EDI,ESI                    ; 0048d550
    MOVSD ES:EDI,ESI                    ; 0048d551
    MOVSD ES:EDI,ESI                    ; 0048d552
    MOV EAX,dword ptr [ESP + 0x78]      ; 0048d553
    MOV dword ptr [ESP + 0x190],EAX     ; 0048d557
    FLD double ptr [0x005db9bc]         ; 0048d55e | DAT_005db9bc
    FILD dword ptr [ESP + 0x190]        ; 0048d564
    FMUL ST1                            ; 0048d56b
    FST float ptr [ESP + 0x60]          ; 0048d56d
    FSUB float ptr [EBX + 0x10]         ; 0048d571
    FDIV float ptr [EBX + 0x28]         ; 0048d574
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0048d577
    MOV dword ptr [ESP + 0x190],EAX     ; 0048d57b
    FILD dword ptr [ESP + 0x190]        ; 0048d582
    FMUL ST2                            ; 0048d589
    FST float ptr [ESP + 0x64]          ; 0048d58b
    FXCH                                ; 0048d58f
    CALL crt_math.c_round_FUN_005c03a0  ; 0048d591
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x78]        ; 0048d596
    FSUB float ptr [EBX + 0x14]         ; 0048d59a
    FDIV float ptr [EBX + 0x2c]         ; 0048d59d
    MOV EAX,dword ptr [ESP + 0x80]      ; 0048d5a0
    MOV dword ptr [ESP + 0x190],EAX     ; 0048d5a7
    FILD dword ptr [ESP + 0x190]        ; 0048d5ae
    FMULP ST2                           ; 0048d5b5
    FXCH                                ; 0048d5b7
    FST float ptr [ESP + 0x68]          ; 0048d5b9
    FXCH                                ; 0048d5bd
    CALL crt_math.c_round_FUN_005c03a0  ; 0048d5bf
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x7c]        ; 0048d5c4
    FSUB float ptr [EBX + 0x18]         ; 0048d5c8
    FDIV float ptr [EBX + 0x30]         ; 0048d5cb
    FLD float ptr [EBP + 0x18]          ; 0048d5ce
    FMUL float ptr [0x005db9c4]         ; 0048d5d1 | DAT_005db9c4
    CALL crt_math.c_round_FUN_005c03a0  ; 0048d5d7
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x6c]        ; 0048d5dc
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0048d5e0
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0048d5e4
    MOV dword ptr [ESP + 0x70],EAX      ; 0048d5e8
    MOV dword ptr [ESP + 0x74],EAX      ; 0048d5ec
    MOV EAX,[0x01d1dd18]                ; 0048d5f0 | DAT_01d1dd18
    CALL crt_math.c_round_FUN_005c03a0  ; 0048d5f5
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x80]        ; 0048d5fa
    IMUL EDX                            ; 0048d601
    SHRD EAX,EDX,0x10                   ; 0048d603
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0048d607
    MOV ECX,EAX                         ; 0048d60b
    MOV EAX,[0x01d1dd24]                ; 0048d60d | DAT_01d1dd24
    IMUL EDX                            ; 0048d612
    SHRD EAX,EDX,0x10                   ; 0048d614
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0048d618
    ADD ECX,EAX                         ; 0048d61c
    MOV EAX,[0x01d1dd30]                ; 0048d61e | DAT_01d1dd30
    IMUL EDX                            ; 0048d623
    SHRD EAX,EDX,0x10                   ; 0048d625
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0048d629
    ADD ECX,EAX                         ; 0048d62d
    MOV EAX,[0x01d1dd1c]                ; 0048d62f | DAT_01d1dd1c
    MOV dword ptr [ESP + 0x18],ECX      ; 0048d634
    IMUL EDX                            ; 0048d638
    SHRD EAX,EDX,0x10                   ; 0048d63a
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0048d63e
    MOV ECX,EAX                         ; 0048d642
    MOV EAX,[0x01d1dd28]                ; 0048d644 | DAT_01d1dd28
    IMUL EDX                            ; 0048d649
    SHRD EAX,EDX,0x10                   ; 0048d64b
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0048d64f
    ADD ECX,EAX                         ; 0048d653
    MOV EAX,[0x01d1dd34]                ; 0048d655 | DAT_01d1dd34
    IMUL EDX                            ; 0048d65a
    SHRD EAX,EDX,0x10                   ; 0048d65c
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0048d660
    ADD ECX,EAX                         ; 0048d664
    MOV EAX,[0x01d1dd20]                ; 0048d666 | DAT_01d1dd20
    MOV dword ptr [ESP + 0x1c],ECX      ; 0048d66b
    IMUL EDX                            ; 0048d66f
    SHRD EAX,EDX,0x10                   ; 0048d671
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0048d675
    MOV ECX,EAX                         ; 0048d679
    MOV EAX,[0x01d1dd2c]                ; 0048d67b | DAT_01d1dd2c
    IMUL EDX                            ; 0048d680
    SHRD EAX,EDX,0x10                   ; 0048d682
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0048d686
    ADD ECX,EAX                         ; 0048d68a
    MOV EAX,[0x01d1dd38]                ; 0048d68c | DAT_01d1dd38
    IMUL EDX                            ; 0048d691
    SHRD EAX,EDX,0x10                   ; 0048d693
    ADD ECX,EAX                         ; 0048d697
    MOV dword ptr [ESP + 0x20],ECX      ; 0048d699
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0048d69d
    NEG EDI                             ; 0048d6a1
    MOV EAX,[0x01d1dd18]                ; 0048d6a3 | DAT_01d1dd18
    MOV EDX,EDI                         ; 0048d6a8
    IMUL EDX                            ; 0048d6aa
    SHRD EAX,EDX,0x10                   ; 0048d6ac
    MOV EDX,dword ptr [ESP + 0x70]      ; 0048d6b0
    MOV ECX,EAX                         ; 0048d6b4
    MOV EAX,[0x01d1dd24]                ; 0048d6b6 | DAT_01d1dd24
    IMUL EDX                            ; 0048d6bb
    SHRD EAX,EDX,0x10                   ; 0048d6bd
    MOV EDX,dword ptr [ESP + 0x74]      ; 0048d6c1
    ADD ECX,EAX                         ; 0048d6c5
    MOV EAX,[0x01d1dd30]                ; 0048d6c7 | DAT_01d1dd30
    IMUL EDX                            ; 0048d6cc
    SHRD EAX,EDX,0x10                   ; 0048d6ce
    MOV EDX,EDI                         ; 0048d6d2
    ADD ECX,EAX                         ; 0048d6d4
    MOV EAX,[0x01d1dd1c]                ; 0048d6d6 | DAT_01d1dd1c
    MOV dword ptr [ESP + 0x24],ECX      ; 0048d6db
    IMUL EDX                            ; 0048d6df
    SHRD EAX,EDX,0x10                   ; 0048d6e1
    MOV EDX,dword ptr [ESP + 0x70]      ; 0048d6e5
    MOV ECX,EAX                         ; 0048d6e9
    MOV EAX,[0x01d1dd28]                ; 0048d6eb | DAT_01d1dd28
    IMUL EDX                            ; 0048d6f0
    SHRD EAX,EDX,0x10                   ; 0048d6f2
    MOV EDX,dword ptr [ESP + 0x74]      ; 0048d6f6
    ADD ECX,EAX                         ; 0048d6fa
    MOV EAX,[0x01d1dd34]                ; 0048d6fc | DAT_01d1dd34
    IMUL EDX                            ; 0048d701
    SHRD EAX,EDX,0x10                   ; 0048d703
    MOV EDX,EDI                         ; 0048d707
    ADD ECX,EAX                         ; 0048d709
    MOV EAX,[0x01d1dd20]                ; 0048d70b | DAT_01d1dd20
    MOV dword ptr [ESP + 0x28],ECX      ; 0048d710
    IMUL EDX                            ; 0048d714
    SHRD EAX,EDX,0x10                   ; 0048d716
    MOV EDX,dword ptr [ESP + 0x70]      ; 0048d71a
    MOV ECX,EAX                         ; 0048d71e
    MOV EAX,[0x01d1dd2c]                ; 0048d720 | DAT_01d1dd2c
    IMUL EDX                            ; 0048d725
    SHRD EAX,EDX,0x10                   ; 0048d727
    MOV EDX,dword ptr [ESP + 0x74]      ; 0048d72b
    ADD ECX,EAX                         ; 0048d72f
    MOV EAX,[0x01d1dd38]                ; 0048d731 | DAT_01d1dd38
    IMUL EDX                            ; 0048d736
    SHRD EAX,EDX,0x10                   ; 0048d738
    ADD ECX,EAX                         ; 0048d73c
    MOV EAX,dword ptr [ESP + 0x70]      ; 0048d73e
    NEG EAX                             ; 0048d742
    MOV EDX,EDI                         ; 0048d744
    MOV dword ptr [ESP + 0x70],EAX      ; 0048d746
    MOV EAX,[0x01d1dd18]                ; 0048d74a | DAT_01d1dd18
    MOV dword ptr [ESP + 0x2c],ECX      ; 0048d74f
    IMUL EDX                            ; 0048d753
    SHRD EAX,EDX,0x10                   ; 0048d755
    MOV EDX,dword ptr [ESP + 0x70]      ; 0048d759
    MOV ECX,EAX                         ; 0048d75d
    MOV EAX,[0x01d1dd24]                ; 0048d75f | DAT_01d1dd24
    IMUL EDX                            ; 0048d764
    SHRD EAX,EDX,0x10                   ; 0048d766
    MOV EDX,dword ptr [ESP + 0x74]      ; 0048d76a
    ADD ECX,EAX                         ; 0048d76e
    MOV EAX,[0x01d1dd30]                ; 0048d770 | DAT_01d1dd30
    IMUL EDX                            ; 0048d775
    SHRD EAX,EDX,0x10                   ; 0048d777
    ADD ECX,EAX                         ; 0048d77b
    MOV dword ptr [ESP + 0x6c],EDI      ; 0048d77d
    MOV dword ptr [ESP + 0x30],ECX      ; 0048d781
    MOV EAX,[0x01d1dd1c]                ; 0048d785 | DAT_01d1dd1c
    MOV EDX,EDI                         ; 0048d78a
    IMUL EDX                            ; 0048d78c
    SHRD EAX,EDX,0x10                   ; 0048d78e
    MOV EDX,dword ptr [ESP + 0x70]      ; 0048d792
    MOV ECX,EAX                         ; 0048d796
    MOV EAX,[0x01d1dd28]                ; 0048d798 | DAT_01d1dd28
    IMUL EDX                            ; 0048d79d
    SHRD EAX,EDX,0x10                   ; 0048d79f
    MOV EDX,dword ptr [ESP + 0x74]      ; 0048d7a3
    ADD ECX,EAX                         ; 0048d7a7
    MOV EAX,[0x01d1dd34]                ; 0048d7a9 | DAT_01d1dd34
    IMUL EDX                            ; 0048d7ae
    SHRD EAX,EDX,0x10                   ; 0048d7b0
    MOV EDX,EDI                         ; 0048d7b4
    ADD ECX,EAX                         ; 0048d7b6
    MOV EAX,[0x01d1dd20]                ; 0048d7b8 | DAT_01d1dd20
    MOV dword ptr [ESP + 0x34],ECX      ; 0048d7bd
    IMUL EDX                            ; 0048d7c1
    SHRD EAX,EDX,0x10                   ; 0048d7c3
    MOV EDX,dword ptr [ESP + 0x70]      ; 0048d7c7
    MOV ECX,EAX                         ; 0048d7cb
    MOV EAX,[0x01d1dd2c]                ; 0048d7cd | DAT_01d1dd2c
    IMUL EDX                            ; 0048d7d2
    SHRD EAX,EDX,0x10                   ; 0048d7d4
    MOV EDX,dword ptr [ESP + 0x74]      ; 0048d7d8
    ADD ECX,EAX                         ; 0048d7dc
    MOV EAX,[0x01d1dd38]                ; 0048d7de | DAT_01d1dd38
    IMUL EDX                            ; 0048d7e3
    SHRD EAX,EDX,0x10                   ; 0048d7e5
    MOV EDX,EDI                         ; 0048d7e9
    ADD ECX,EAX                         ; 0048d7eb
    MOV EAX,[0x01d1dd18]                ; 0048d7ed | DAT_01d1dd18
    NEG EDX                             ; 0048d7f2
    MOV dword ptr [ESP + 0x38],ECX      ; 0048d7f4
    MOV dword ptr [ESP + 0x6c],EDX      ; 0048d7f8
    IMUL EDX                            ; 0048d7fc
    SHRD EAX,EDX,0x10                   ; 0048d7fe
    MOV EDX,dword ptr [ESP + 0x70]      ; 0048d802
    MOV ECX,EAX                         ; 0048d806
    MOV EAX,[0x01d1dd24]                ; 0048d808 | DAT_01d1dd24
    IMUL EDX                            ; 0048d80d
    SHRD EAX,EDX,0x10                   ; 0048d80f
    MOV EDX,dword ptr [ESP + 0x74]      ; 0048d813
    ADD ECX,EAX                         ; 0048d817
    MOV EAX,[0x01d1dd30]                ; 0048d819 | DAT_01d1dd30
    IMUL EDX                            ; 0048d81e
    SHRD EAX,EDX,0x10                   ; 0048d820
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0048d824
    ADD ECX,EAX                         ; 0048d828
    MOV EAX,[0x01d1dd1c]                ; 0048d82a | DAT_01d1dd1c
    MOV dword ptr [ESP + 0x3c],ECX      ; 0048d82f
    IMUL EDX                            ; 0048d833
    SHRD EAX,EDX,0x10                   ; 0048d835
    MOV EDX,dword ptr [ESP + 0x70]      ; 0048d839
    MOV ECX,EAX                         ; 0048d83d
    MOV EAX,[0x01d1dd28]                ; 0048d83f | DAT_01d1dd28
    IMUL EDX                            ; 0048d844
    SHRD EAX,EDX,0x10                   ; 0048d846
    MOV EDX,dword ptr [ESP + 0x74]      ; 0048d84a
    ADD ECX,EAX                         ; 0048d84e
    MOV EAX,[0x01d1dd34]                ; 0048d850 | DAT_01d1dd34
    IMUL EDX                            ; 0048d855
    SHRD EAX,EDX,0x10                   ; 0048d857
    ADD ECX,EAX                         ; 0048d85b
    MOV dword ptr [ESP + 0x40],ECX      ; 0048d85d
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0048d861
    MOV EAX,[0x01d1dd20]                ; 0048d865 | DAT_01d1dd20
    IMUL EDX                            ; 0048d86a
    SHRD EAX,EDX,0x10                   ; 0048d86c
    MOV EDX,dword ptr [ESP + 0x70]      ; 0048d870
    MOV ECX,EAX                         ; 0048d874
    MOV EAX,[0x01d1dd2c]                ; 0048d876 | DAT_01d1dd2c
    IMUL EDX                            ; 0048d87b
    SHRD EAX,EDX,0x10                   ; 0048d87d
    MOV EDX,dword ptr [ESP + 0x74]      ; 0048d881
    ADD ECX,EAX                         ; 0048d885
    MOV EAX,[0x01d1dd38]                ; 0048d887 | DAT_01d1dd38
    IMUL EDX                            ; 0048d88c
    SHRD EAX,EDX,0x10                   ; 0048d88e
    ADD ECX,EAX                         ; 0048d892
    MOV dword ptr [ESP + 0x44],ECX      ; 0048d894
    XOR ECX,ECX                         ; 0048d898
    MOV dword ptr [ESP + 0x48],ECX      ; 0048d89a
    MOV dword ptr [ESP + 0x4c],ECX      ; 0048d89e
    MOV dword ptr [ESP + 0x50],ECX      ; 0048d8a2
    FLD double ptr [0x005db9cc]         ; 0048d8a6 | DAT_005db9cc
    FLD float ptr [EBX + 0x28]          ; 0048d8ac
    FMUL ST1                            ; 0048d8af
    FLD float ptr [EBX + 0x2c]          ; 0048d8b1
    FMUL ST2                            ; 0048d8b4
    FLD float ptr [EBX + 0x30]          ; 0048d8b6
    FMULP ST3                           ; 0048d8b9
    MOV EDX,0xfffffc19                  ; 0048d8bb
    MOV EAX,0x3e7                       ; 0048d8c0
    MOV EDI,EDX                         ; 0048d8c5
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048d8c7
    MOV dword ptr [ESP + 0xac],EAX      ; 0048d8ce
    MOV ESI,EAX                         ; 0048d8d5
    MOV dword ptr [ESP + 0xb0],EAX      ; 0048d8d7
    XOR ESI,EAX                         ; 0048d8de
    MOV ECX,EDX                         ; 0048d8e0
    FXCH                                ; 0048d8e2
    FSTP double ptr [ESP + 0x10]        ; 0048d8e4
    FSTP double ptr [ESP + 0x8]         ; 0048d8e8
    FSTP double ptr [ESP]               ; 0048d8ec
    FILD dword ptr [ESP + ESI*0x1 + 0x18] ; 0048d8ef
        ;   Label: LAB_0048d8ef
    FDIV double ptr [ESP + 0x10]        ; 0048d8f3
    FILD dword ptr [ESP + ESI*0x1 + 0x1c] ; 0048d8f7
    FDIV double ptr [ESP + 0x8]         ; 0048d8fb
    FILD dword ptr [ESP + ESI*0x1 + 0x20] ; 0048d8ff
    FDIV double ptr [ESP]               ; 0048d903
    MOV EAX,dword ptr [ESP + 0x78]      ; 0048d906
    MOV dword ptr [ESP + 0x190],EAX     ; 0048d90a
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0048d911
    MOV dword ptr [ESP + 0x194],EAX     ; 0048d915
    MOV EAX,dword ptr [ESP + 0x80]      ; 0048d91c
    MOV dword ptr [ESP + 0x198],EAX     ; 0048d923
    FILD dword ptr [ESP + 0x190]        ; 0048d92a
    FILD dword ptr [ESP + 0x194]        ; 0048d931
    FILD dword ptr [ESP + 0x198]        ; 0048d938
    FXCH ST2                            ; 0048d93f
    FADDP ST5,ST0                       ; 0048d941
    FADDP ST3,ST0                       ; 0048d943
    FADDP                               ; 0048d945
    FXCH ST2                            ; 0048d947
    CALL crt_math.c_round_FUN_005c03a0  ; 0048d949
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 0048d94e
    CALL crt_math.c_round_FUN_005c03a0  ; 0048d950
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH ST2                            ; 0048d955
    CALL crt_math.c_round_FUN_005c03a0  ; 0048d957
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 0048d95c
    FISTP dword ptr [ESP + 0x9c]        ; 0048d95e
    FXCH                                ; 0048d965
    FISTP dword ptr [ESP + 0xa0]        ; 0048d967
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0048d96e
    FISTP dword ptr [ESP + 0xa4]        ; 0048d975
    CMP EAX,dword ptr [ESP + 0xa8]      ; 0048d97c
    JGE 0x0048d98c                      ; 0048d983
        ;   XREF to: 0048d98c (CONDITIONAL_JUMP)  ; LAB_0048d98c
    MOV dword ptr [ESP + 0xa8],EAX      ; 0048d985
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0048d98c
        ;   Label: LAB_0048d98c
    CMP EAX,dword ptr [ESP + 0xac]      ; 0048d993
    JGE 0x0048d9a3                      ; 0048d99a
        ;   XREF to: 0048d9a3 (CONDITIONAL_JUMP)  ; LAB_0048d9a3
    MOV dword ptr [ESP + 0xac],EAX      ; 0048d99c
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0048d9a3
        ;   Label: LAB_0048d9a3
    CMP EAX,dword ptr [ESP + 0xb0]      ; 0048d9aa
    JGE 0x0048d9ba                      ; 0048d9b1
        ;   XREF to: 0048d9ba (CONDITIONAL_JUMP)  ; LAB_0048d9ba
    MOV dword ptr [ESP + 0xb0],EAX      ; 0048d9b3
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0048d9ba
        ;   Label: LAB_0048d9ba
    CMP EDX,EAX                         ; 0048d9c1
    JGE 0x0048d9c7                      ; 0048d9c3
        ;   XREF to: 0048d9c7 (CONDITIONAL_JUMP)  ; LAB_0048d9c7
    MOV EDX,EAX                         ; 0048d9c5
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0048d9c7
        ;   Label: LAB_0048d9c7
    CMP ECX,EAX                         ; 0048d9ce
    JGE 0x0048d9d4                      ; 0048d9d0
        ;   XREF to: 0048d9d4 (CONDITIONAL_JUMP)  ; LAB_0048d9d4
    MOV ECX,EAX                         ; 0048d9d2
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0048d9d4
        ;   Label: LAB_0048d9d4
    CMP EDI,EAX                         ; 0048d9db
    JGE 0x0048d9e1                      ; 0048d9dd
        ;   XREF to: 0048d9e1 (CONDITIONAL_JUMP)  ; LAB_0048d9e1
    MOV EDI,EAX                         ; 0048d9df
    ADD ESI,0xc                         ; 0048d9e1
        ;   Label: LAB_0048d9e1
    CMP ESI,0x3c                        ; 0048d9e4
    JNZ 0x0048d8ef                      ; 0048d9e7
        ;   XREF to: 0048d8ef (CONDITIONAL_JUMP)  ; LAB_0048d8ef
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0048d9ed
    INC EDX                             ; 0048d9f4
    MOV dword ptr [EBX + 0x54],EAX      ; 0048d9f5
    INC ECX                             ; 0048d9f8
    MOV dword ptr [EBX + 0x60],EDX      ; 0048d9f9
    INC EDI                             ; 0048d9fc
    MOV dword ptr [EBX + 0x64],ECX      ; 0048d9fd
    MOV dword ptr [EBX + 0x68],EDI      ; 0048da00
    MOV EAX,dword ptr [ESP + 0xac]      ; 0048da03
    MOV dword ptr [EBX + 0x58],EAX      ; 0048da0a
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0048da0d
    MOV EDX,dword ptr [EBX + 0x54]      ; 0048da14
    MOV dword ptr [EBX + 0x5c],EAX      ; 0048da17
    TEST EDX,EDX                        ; 0048da1a
    JL 0x0048de31                       ; 0048da1c
        ;   XREF to: 0048de31 (CONDITIONAL_JUMP)  ; LAB_0048de31
    CMP dword ptr [EBX + 0x58],0x0      ; 0048da22
        ;   Label: LAB_0048da22
    JL 0x0048de3d                       ; 0048da26
        ;   XREF to: 0048de3d (CONDITIONAL_JUMP)  ; LAB_0048de3d
    CMP dword ptr [EBX + 0x5c],0x0      ; 0048da2c
        ;   Label: LAB_0048da2c
    JL 0x0048de49                       ; 0048da30
        ;   XREF to: 0048de49 (CONDITIONAL_JUMP)  ; LAB_0048de49
    MOV EDI,dword ptr [EBX + 0x40]      ; 0048da36
        ;   Label: LAB_0048da36
    CMP EDI,dword ptr [EBX + 0x60]      ; 0048da39
    JG 0x0048da44                       ; 0048da3c
        ;   XREF to: 0048da44 (CONDITIONAL_JUMP)  ; LAB_0048da44
    LEA EAX,[EDI + -0x1]                ; 0048da3e
    MOV dword ptr [EBX + 0x60],EAX      ; 0048da41
    MOV EDX,dword ptr [EBX + 0x44]      ; 0048da44
        ;   Label: LAB_0048da44
    CMP EDX,dword ptr [EBX + 0x64]      ; 0048da47
    JG 0x0048da52                       ; 0048da4a
        ;   XREF to: 0048da52 (CONDITIONAL_JUMP)  ; LAB_0048da52
    LEA EAX,[EDX + -0x1]                ; 0048da4c
    MOV dword ptr [EBX + 0x64],EAX      ; 0048da4f
    MOV ECX,dword ptr [EBX + 0x48]      ; 0048da52
        ;   Label: LAB_0048da52
    CMP ECX,dword ptr [EBX + 0x68]      ; 0048da55
    JG 0x0048da60                       ; 0048da58
        ;   XREF to: 0048da60 (CONDITIONAL_JUMP)  ; LAB_0048da60
    LEA EAX,[ECX + -0x1]                ; 0048da5a
    MOV dword ptr [EBX + 0x68],EAX      ; 0048da5d
    PUSH 0x1c3d424                      ; 0048da60
        ;   Label: LAB_0048da60
    MOV EDI,dword ptr [0x0061255c]      ; 0048da65 | DAT_0061255c
    XOR ESI,ESI                         ; 0048da6b
    PUSH EDI                            ; 0048da6d | DAT_01bc120c
    MOV dword ptr [0x01e7dac8],ESI      ; 0048da6e | DAT_01e7dac8
    CALL engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_00483780 ; 0048da74
        ;   XREF to: 00483780 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_00483780(CDemonRenderer * this_ptr, CVector3i * input_point)
    ADD ESP,0x8                         ; 0048da79
    PUSH 0xff                           ; 0048da7c
    PUSH 0xff                           ; 0048da81
    PUSH 0xff                           ; 0048da86
    MOV EAX,[0x0061255c]                ; 0048da8b | DAT_0061255c
    PUSH EAX                            ; 0048da90 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0 ; 0048da91
        ;   XREF to: 00483cf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_00483cf0(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    MOV EDX,dword ptr [EBX]             ; 0048da96
    ADD ESP,0x10                        ; 0048da98
    CMP EDX,0x4                         ; 0048da9b
    JLE 0x0048de55                      ; 0048da9e
        ;   XREF to: 0048de55 (CONDITIONAL_JUMP)  ; LAB_0048de55
    MOV dword ptr [EBX],0x1             ; 0048daa4
        ;   Label: LAB_0048daa4
    MOV EAX,[0x01d1dd30]                ; 0048daaa | DAT_01d1dd30
        ;   Label: LAB_0048daaa
    CDQ                                 ; 0048daaf
    XOR EAX,EDX                         ; 0048dab0
    SUB EAX,EDX                         ; 0048dab2
    MOV ECX,EAX                         ; 0048dab4
    MOV dword ptr [ESP + 0xb4],EAX      ; 0048dab6
    MOV EAX,[0x01d1dd34]                ; 0048dabd | DAT_01d1dd34
    CDQ                                 ; 0048dac2
    XOR EAX,EDX                         ; 0048dac3
    SUB EAX,EDX                         ; 0048dac5
    MOV ESI,EAX                         ; 0048dac7
    MOV EDI,EAX                         ; 0048dac9
    MOV EAX,[0x01d1dd38]                ; 0048dacb | DAT_01d1dd38
    CDQ                                 ; 0048dad0
    XOR EAX,EDX                         ; 0048dad1
    SUB EAX,EDX                         ; 0048dad3
    MOV EDX,EAX                         ; 0048dad5
    CMP ECX,ESI                         ; 0048dad7
    JL 0x0048de62                       ; 0048dad9
        ;   XREF to: 0048de62 (CONDITIONAL_JUMP)  ; LAB_0048de62
    CMP ECX,EAX                         ; 0048dadf
    JL 0x0048de62                       ; 0048dae1
        ;   XREF to: 0048de62 (CONDITIONAL_JUMP)  ; LAB_0048de62
    MOV EDI,dword ptr [ESP + 0x78]      ; 0048dae7
    CMP EDI,dword ptr [EBX + 0x60]      ; 0048daeb
    JG 0x0048dc78                       ; 0048daee
        ;   XREF to: 0048dc78 (CONDITIONAL_JUMP)  ; LAB_0048dc78
    MOV EAX,dword ptr [ESP + 0x80]      ; 0048daf4
    DEC EAX                             ; 0048dafb
    MOV dword ptr [ESP + 0x138],EAX     ; 0048dafc
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0048db03
    DEC EAX                             ; 0048db07
    MOV dword ptr [ESP + 0x13c],EAX     ; 0048db08
    MOV EAX,EDI                         ; 0048db0f
    NEG EAX                             ; 0048db11
    ADD EAX,EDI                         ; 0048db13
    MOV dword ptr [ESP + 0x158],EAX     ; 0048db15
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0048db1c
        ;   Label: LAB_0048db1c
    MOV ECX,dword ptr [EBX + 0x64]      ; 0048db20
    MOV dword ptr [ESP + 0x18c],EAX     ; 0048db23
    CMP EAX,ECX                         ; 0048db2a
    JG 0x0048dbbb                       ; 0048db2c
        ;   XREF to: 0048dbbb (CONDITIONAL_JUMP)  ; LAB_0048dbbb
    MOV EAX,dword ptr [ESP + 0x158]     ; 0048db32
    MOV dword ptr [ESP + 0xb8],EAX      ; 0048db39
    MOV dword ptr [ESP + 0xbc],EAX      ; 0048db40
    MOV ESI,dword ptr [ESP + 0x80]      ; 0048db47
        ;   Label: LAB_0048db47
    CMP ESI,dword ptr [EBX + 0x68]      ; 0048db4e
    JG 0x0048db76                       ; 0048db51
        ;   XREF to: 0048db76 (CONDITIONAL_JUMP)  ; LAB_0048db76
    MOV ECX,dword ptr [ESP + 0xb8]      ; 0048db53
        ;   Label: LAB_0048db53
    PUSH ECX                            ; 0048db5a
    PUSH ESI                            ; 0048db5b
    MOV EAX,dword ptr [ESP + 0x194]     ; 0048db5c
    PUSH EAX                            ; 0048db63
    PUSH EDI                            ; 0048db64
    PUSH EBX                            ; 0048db65
    INC ESI                             ; 0048db66
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048db67
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x68]      ; 0048db6c
    ADD ESP,0x14                        ; 0048db6f
    CMP ESI,EDX                         ; 0048db72
    JLE 0x0048db53                      ; 0048db74
        ;   XREF to: 0048db53 (CONDITIONAL_JUMP)  ; LAB_0048db53
    MOV ESI,dword ptr [ESP + 0x138]     ; 0048db76
        ;   Label: LAB_0048db76
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0048db7d
    JL 0x0048dba5                       ; 0048db80
        ;   XREF to: 0048dba5 (CONDITIONAL_JUMP)  ; LAB_0048dba5
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0048db82
        ;   Label: LAB_0048db82
    PUSH EAX                            ; 0048db89
    PUSH ESI                            ; 0048db8a
    MOV EDX,dword ptr [ESP + 0x194]     ; 0048db8b
    PUSH EDX                            ; 0048db92
    PUSH EDI                            ; 0048db93
    PUSH EBX                            ; 0048db94
    DEC ESI                             ; 0048db95
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048db96
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 0048db9b
    ADD ESP,0x14                        ; 0048db9e
    CMP ESI,ECX                         ; 0048dba1
    JGE 0x0048db82                      ; 0048dba3
        ;   XREF to: 0048db82 (CONDITIONAL_JUMP)  ; LAB_0048db82
    MOV ESI,dword ptr [ESP + 0x18c]     ; 0048dba5
        ;   Label: LAB_0048dba5
    INC ESI                             ; 0048dbac
    MOV EDX,dword ptr [EBX + 0x64]      ; 0048dbad
    MOV dword ptr [ESP + 0x18c],ESI     ; 0048dbb0
    CMP ESI,EDX                         ; 0048dbb7
    JLE 0x0048db47                      ; 0048dbb9
        ;   XREF to: 0048db47 (CONDITIONAL_JUMP)  ; LAB_0048db47
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0048dbbb
        ;   Label: LAB_0048dbbb
    MOV ECX,dword ptr [EBX + 0x58]      ; 0048dbc2
    MOV dword ptr [ESP + 0x188],EAX     ; 0048dbc5
    CMP EAX,ECX                         ; 0048dbcc
    JL 0x0048dc5d                       ; 0048dbce
        ;   XREF to: 0048dc5d (CONDITIONAL_JUMP)  ; LAB_0048dc5d
    MOV EAX,dword ptr [ESP + 0x158]     ; 0048dbd4
    MOV dword ptr [ESP + 0xc0],EAX      ; 0048dbdb
    MOV dword ptr [ESP + 0xc4],EAX      ; 0048dbe2
    MOV ESI,dword ptr [ESP + 0x80]      ; 0048dbe9
        ;   Label: LAB_0048dbe9
    CMP ESI,dword ptr [EBX + 0x68]      ; 0048dbf0
    JG 0x0048dc18                       ; 0048dbf3
        ;   XREF to: 0048dc18 (CONDITIONAL_JUMP)  ; LAB_0048dc18
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0048dbf5
        ;   Label: LAB_0048dbf5
    PUSH EAX                            ; 0048dbfc
    PUSH ESI                            ; 0048dbfd
    MOV EDX,dword ptr [ESP + 0x190]     ; 0048dbfe
    PUSH EDX                            ; 0048dc05
    PUSH EDI                            ; 0048dc06
    PUSH EBX                            ; 0048dc07
    INC ESI                             ; 0048dc08
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048dc09
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x68]      ; 0048dc0e
    ADD ESP,0x14                        ; 0048dc11
    CMP ESI,ECX                         ; 0048dc14
    JLE 0x0048dbf5                      ; 0048dc16
        ;   XREF to: 0048dbf5 (CONDITIONAL_JUMP)  ; LAB_0048dbf5
    MOV ESI,dword ptr [ESP + 0x138]     ; 0048dc18
        ;   Label: LAB_0048dc18
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0048dc1f
    JL 0x0048dc47                       ; 0048dc22
        ;   XREF to: 0048dc47 (CONDITIONAL_JUMP)  ; LAB_0048dc47
    MOV ECX,dword ptr [ESP + 0xc4]      ; 0048dc24
        ;   Label: LAB_0048dc24
    PUSH ECX                            ; 0048dc2b
    PUSH ESI                            ; 0048dc2c
    MOV EAX,dword ptr [ESP + 0x190]     ; 0048dc2d
    PUSH EAX                            ; 0048dc34
    PUSH EDI                            ; 0048dc35
    PUSH EBX                            ; 0048dc36
    DEC ESI                             ; 0048dc37
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048dc38
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x5c]      ; 0048dc3d
    ADD ESP,0x14                        ; 0048dc40
    CMP ESI,EDX                         ; 0048dc43
    JGE 0x0048dc24                      ; 0048dc45
        ;   XREF to: 0048dc24 (CONDITIONAL_JUMP)  ; LAB_0048dc24
    MOV ESI,dword ptr [ESP + 0x188]     ; 0048dc47
        ;   Label: LAB_0048dc47
    DEC ESI                             ; 0048dc4e
    MOV EDX,dword ptr [EBX + 0x58]      ; 0048dc4f
    MOV dword ptr [ESP + 0x188],ESI     ; 0048dc52
    CMP ESI,EDX                         ; 0048dc59
    JGE 0x0048dbe9                      ; 0048dc5b
        ;   XREF to: 0048dbe9 (CONDITIONAL_JUMP)  ; LAB_0048dbe9
    MOV ECX,dword ptr [ESP + 0x158]     ; 0048dc5d
        ;   Label: LAB_0048dc5d
    INC EDI                             ; 0048dc64
    INC ECX                             ; 0048dc65
    MOV ESI,dword ptr [EBX + 0x60]      ; 0048dc66
    MOV dword ptr [ESP + 0x158],ECX     ; 0048dc69
    CMP EDI,ESI                         ; 0048dc70
    JLE 0x0048db1c                      ; 0048dc72
        ;   XREF to: 0048db1c (CONDITIONAL_JUMP)  ; LAB_0048db1c
    MOV EDI,dword ptr [ESP + 0x78]      ; 0048dc78
        ;   Label: LAB_0048dc78
    MOV EAX,dword ptr [EBX + 0x54]      ; 0048dc7c
    DEC EDI                             ; 0048dc7f
    CMP EDI,EAX                         ; 0048dc80
    JL 0x0048de10                       ; 0048dc82
        ;   XREF to: 0048de10 (CONDITIONAL_JUMP)  ; LAB_0048de10
    MOV EAX,dword ptr [ESP + 0x80]      ; 0048dc88
    DEC EAX                             ; 0048dc8f
    MOV dword ptr [ESP + 0x140],EAX     ; 0048dc90
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0048dc97
    DEC EAX                             ; 0048dc9b
    MOV dword ptr [ESP + 0x144],EAX     ; 0048dc9c
    MOV EAX,EDI                         ; 0048dca3
    MOV EDX,dword ptr [ESP + 0x78]      ; 0048dca5
    NEG EAX                             ; 0048dca9
    ADD EAX,EDX                         ; 0048dcab
    MOV dword ptr [ESP + 0x15c],EAX     ; 0048dcad
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0048dcb4
        ;   Label: LAB_0048dcb4
    MOV ECX,dword ptr [EBX + 0x64]      ; 0048dcb8
    MOV dword ptr [ESP + 0x184],EAX     ; 0048dcbb
    CMP EAX,ECX                         ; 0048dcc2
    JG 0x0048dd53                       ; 0048dcc4
        ;   XREF to: 0048dd53 (CONDITIONAL_JUMP)  ; LAB_0048dd53
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0048dcca
    MOV dword ptr [ESP + 0xc8],EAX      ; 0048dcd1
    MOV dword ptr [ESP + 0xcc],EAX      ; 0048dcd8
    MOV ESI,dword ptr [ESP + 0x80]      ; 0048dcdf
        ;   Label: LAB_0048dcdf
    CMP ESI,dword ptr [EBX + 0x68]      ; 0048dce6
    JG 0x0048dd0e                       ; 0048dce9
        ;   XREF to: 0048dd0e (CONDITIONAL_JUMP)  ; LAB_0048dd0e
    MOV ECX,dword ptr [ESP + 0xc8]      ; 0048dceb
        ;   Label: LAB_0048dceb
    PUSH ECX                            ; 0048dcf2
    PUSH ESI                            ; 0048dcf3
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0048dcf4
    PUSH EAX                            ; 0048dcfb
    PUSH EDI                            ; 0048dcfc
    PUSH EBX                            ; 0048dcfd
    INC ESI                             ; 0048dcfe
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048dcff
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x68]      ; 0048dd04
    ADD ESP,0x14                        ; 0048dd07
    CMP ESI,EDX                         ; 0048dd0a
    JLE 0x0048dceb                      ; 0048dd0c
        ;   XREF to: 0048dceb (CONDITIONAL_JUMP)  ; LAB_0048dceb
    MOV ESI,dword ptr [ESP + 0x140]     ; 0048dd0e
        ;   Label: LAB_0048dd0e
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0048dd15
    JL 0x0048dd3d                       ; 0048dd18
        ;   XREF to: 0048dd3d (CONDITIONAL_JUMP)  ; LAB_0048dd3d
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0048dd1a
        ;   Label: LAB_0048dd1a
    PUSH EAX                            ; 0048dd21
    PUSH ESI                            ; 0048dd22
    MOV EDX,dword ptr [ESP + 0x18c]     ; 0048dd23
    PUSH EDX                            ; 0048dd2a
    PUSH EDI                            ; 0048dd2b
    PUSH EBX                            ; 0048dd2c
    DEC ESI                             ; 0048dd2d
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048dd2e
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 0048dd33
    ADD ESP,0x14                        ; 0048dd36
    CMP ESI,ECX                         ; 0048dd39
    JGE 0x0048dd1a                      ; 0048dd3b
        ;   XREF to: 0048dd1a (CONDITIONAL_JUMP)  ; LAB_0048dd1a
    MOV ESI,dword ptr [ESP + 0x184]     ; 0048dd3d
        ;   Label: LAB_0048dd3d
    INC ESI                             ; 0048dd44
    MOV EDX,dword ptr [EBX + 0x64]      ; 0048dd45
    MOV dword ptr [ESP + 0x184],ESI     ; 0048dd48
    CMP ESI,EDX                         ; 0048dd4f
    JLE 0x0048dcdf                      ; 0048dd51
        ;   XREF to: 0048dcdf (CONDITIONAL_JUMP)  ; LAB_0048dcdf
    MOV EAX,dword ptr [ESP + 0x144]     ; 0048dd53
        ;   Label: LAB_0048dd53
    MOV ECX,dword ptr [EBX + 0x58]      ; 0048dd5a
    MOV dword ptr [ESP + 0x180],EAX     ; 0048dd5d
    CMP EAX,ECX                         ; 0048dd64
    JL 0x0048ddf5                       ; 0048dd66
        ;   XREF to: 0048ddf5 (CONDITIONAL_JUMP)  ; LAB_0048ddf5
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0048dd6c
    MOV dword ptr [ESP + 0xd0],EAX      ; 0048dd73
    MOV dword ptr [ESP + 0xd4],EAX      ; 0048dd7a
    MOV ESI,dword ptr [ESP + 0x80]      ; 0048dd81
        ;   Label: LAB_0048dd81
    CMP ESI,dword ptr [EBX + 0x68]      ; 0048dd88
    JG 0x0048ddb0                       ; 0048dd8b
        ;   XREF to: 0048ddb0 (CONDITIONAL_JUMP)  ; LAB_0048ddb0
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0048dd8d
        ;   Label: LAB_0048dd8d
    PUSH EAX                            ; 0048dd94
    PUSH ESI                            ; 0048dd95
    MOV EDX,dword ptr [ESP + 0x188]     ; 0048dd96
    PUSH EDX                            ; 0048dd9d
    PUSH EDI                            ; 0048dd9e
    PUSH EBX                            ; 0048dd9f
    INC ESI                             ; 0048dda0
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048dda1
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x68]      ; 0048dda6
    ADD ESP,0x14                        ; 0048dda9
    CMP ESI,ECX                         ; 0048ddac
    JLE 0x0048dd8d                      ; 0048ddae
        ;   XREF to: 0048dd8d (CONDITIONAL_JUMP)  ; LAB_0048dd8d
    MOV ESI,dword ptr [ESP + 0x140]     ; 0048ddb0
        ;   Label: LAB_0048ddb0
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0048ddb7
    JL 0x0048dddf                       ; 0048ddba
        ;   XREF to: 0048dddf (CONDITIONAL_JUMP)  ; LAB_0048dddf
    MOV ECX,dword ptr [ESP + 0xd4]      ; 0048ddbc
        ;   Label: LAB_0048ddbc
    PUSH ECX                            ; 0048ddc3
    PUSH ESI                            ; 0048ddc4
    MOV EAX,dword ptr [ESP + 0x188]     ; 0048ddc5
    PUSH EAX                            ; 0048ddcc
    PUSH EDI                            ; 0048ddcd
    PUSH EBX                            ; 0048ddce
    DEC ESI                             ; 0048ddcf
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048ddd0
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x5c]      ; 0048ddd5
    ADD ESP,0x14                        ; 0048ddd8
    CMP ESI,EDX                         ; 0048dddb
    JGE 0x0048ddbc                      ; 0048dddd
        ;   XREF to: 0048ddbc (CONDITIONAL_JUMP)  ; LAB_0048ddbc
    MOV ESI,dword ptr [ESP + 0x180]     ; 0048dddf
        ;   Label: LAB_0048dddf
    DEC ESI                             ; 0048dde6
    MOV EDX,dword ptr [EBX + 0x58]      ; 0048dde7
    MOV dword ptr [ESP + 0x180],ESI     ; 0048ddea
    CMP ESI,EDX                         ; 0048ddf1
    JGE 0x0048dd81                      ; 0048ddf3
        ;   XREF to: 0048dd81 (CONDITIONAL_JUMP)  ; LAB_0048dd81
    MOV ECX,dword ptr [ESP + 0x15c]     ; 0048ddf5
        ;   Label: LAB_0048ddf5
    DEC EDI                             ; 0048ddfc
    INC ECX                             ; 0048ddfd
    MOV ESI,dword ptr [EBX + 0x54]      ; 0048ddfe
    MOV dword ptr [ESP + 0x15c],ECX     ; 0048de01
    CMP EDI,ESI                         ; 0048de08
    JGE 0x0048dcb4                      ; 0048de0a
        ;   XREF to: 0048dcb4 (CONDITIONAL_JUMP)  ; LAB_0048dcb4
    MOV dword ptr [0x01bef21c],0x1      ; 0048de10 | DAT_01bef21c
        ;   Label: LAB_0048de10
    MOV ESP,EBP                         ; 0048de1a
    POP EBP                             ; 0048de1c
    POP EDI                             ; 0048de1d
    POP ESI                             ; 0048de1e
    POP EBX                             ; 0048de1f
    RET                                 ; 0048de20
    PUSH EBX                            ; 0048de21
        ;   Label: LAB_0048de21
    CALL core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_0048e770 ; 0048de22
        ;   XREF to: 0048e770 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_0048e770(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 0048de27
    MOV ESP,EBP                         ; 0048de2a
    POP EBP                             ; 0048de2c
    POP EDI                             ; 0048de2d
    POP ESI                             ; 0048de2e
    POP EBX                             ; 0048de2f
    RET                                 ; 0048de30
    MOV dword ptr [EBX + 0x54],0x0      ; 0048de31
        ;   Label: LAB_0048de31
    JMP 0x0048da22                      ; 0048de38
        ;   XREF to: 0048da22 (UNCONDITIONAL_JUMP)  ; LAB_0048da22
    MOV dword ptr [EBX + 0x58],0x0      ; 0048de3d
        ;   Label: LAB_0048de3d
    JMP 0x0048da2c                      ; 0048de44
        ;   XREF to: 0048da2c (UNCONDITIONAL_JUMP)  ; LAB_0048da2c
    MOV dword ptr [EBX + 0x5c],0x0      ; 0048de49
        ;   Label: LAB_0048de49
    JMP 0x0048da36                      ; 0048de50
        ;   XREF to: 0048da36 (UNCONDITIONAL_JUMP)  ; LAB_0048da36
    TEST EDX,EDX                        ; 0048de55
        ;   Label: LAB_0048de55
    JGE 0x0048daaa                      ; 0048de57
        ;   XREF to: 0048daaa (CONDITIONAL_JUMP)  ; LAB_0048daaa
    JMP 0x0048daa4                      ; 0048de5d
        ;   XREF to: 0048daa4 (UNCONDITIONAL_JUMP)  ; LAB_0048daa4
    CMP EDI,dword ptr [ESP + 0xb4]      ; 0048de62
        ;   Label: LAB_0048de62
    JL 0x0048e1ab                       ; 0048de69
        ;   XREF to: 0048e1ab (CONDITIONAL_JUMP)  ; LAB_0048e1ab
    CMP EDI,EDX                         ; 0048de6f
    JL 0x0048e1ab                       ; 0048de71
        ;   XREF to: 0048e1ab (CONDITIONAL_JUMP)  ; LAB_0048e1ab
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0048de77
    CMP EDI,dword ptr [EBX + 0x64]      ; 0048de7b
    JG 0x0048e008                       ; 0048de7e
        ;   XREF to: 0048e008 (CONDITIONAL_JUMP)  ; LAB_0048e008
    MOV EAX,dword ptr [ESP + 0x80]      ; 0048de84
    DEC EAX                             ; 0048de8b
    MOV dword ptr [ESP + 0x128],EAX     ; 0048de8c
    MOV EAX,dword ptr [ESP + 0x78]      ; 0048de93
    DEC EAX                             ; 0048de97
    MOV dword ptr [ESP + 0x12c],EAX     ; 0048de98
    MOV EAX,EDI                         ; 0048de9f
    NEG EAX                             ; 0048dea1
    ADD EAX,EDI                         ; 0048dea3
    MOV dword ptr [ESP + 0x150],EAX     ; 0048dea5
    MOV EAX,dword ptr [ESP + 0x78]      ; 0048deac
        ;   Label: LAB_0048deac
    MOV ECX,dword ptr [EBX + 0x60]      ; 0048deb0
    MOV dword ptr [ESP + 0x16c],EAX     ; 0048deb3
    CMP EAX,ECX                         ; 0048deba
    JG 0x0048df4b                       ; 0048debc
        ;   XREF to: 0048df4b (CONDITIONAL_JUMP)  ; LAB_0048df4b
    MOV EAX,dword ptr [ESP + 0x150]     ; 0048dec2
    MOV dword ptr [ESP + 0xd8],EAX      ; 0048dec9
    MOV dword ptr [ESP + 0xdc],EAX      ; 0048ded0
    MOV ESI,dword ptr [ESP + 0x80]      ; 0048ded7
        ;   Label: LAB_0048ded7
    CMP ESI,dword ptr [EBX + 0x68]      ; 0048dede
    JG 0x0048df06                       ; 0048dee1
        ;   XREF to: 0048df06 (CONDITIONAL_JUMP)  ; LAB_0048df06
    MOV ECX,dword ptr [ESP + 0xd8]      ; 0048dee3
        ;   Label: LAB_0048dee3
    PUSH ECX                            ; 0048deea
    PUSH ESI                            ; 0048deeb
    PUSH EDI                            ; 0048deec
    MOV EAX,dword ptr [ESP + 0x178]     ; 0048deed
    PUSH EAX                            ; 0048def4
    PUSH EBX                            ; 0048def5
    INC ESI                             ; 0048def6
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048def7
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x68]      ; 0048defc
    ADD ESP,0x14                        ; 0048deff
    CMP ESI,EDX                         ; 0048df02
    JLE 0x0048dee3                      ; 0048df04
        ;   XREF to: 0048dee3 (CONDITIONAL_JUMP)  ; LAB_0048dee3
    MOV ESI,dword ptr [ESP + 0x128]     ; 0048df06
        ;   Label: LAB_0048df06
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0048df0d
    JL 0x0048df35                       ; 0048df10
        ;   XREF to: 0048df35 (CONDITIONAL_JUMP)  ; LAB_0048df35
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0048df12
        ;   Label: LAB_0048df12
    PUSH EAX                            ; 0048df19
    PUSH ESI                            ; 0048df1a
    PUSH EDI                            ; 0048df1b
    MOV EDX,dword ptr [ESP + 0x178]     ; 0048df1c
    PUSH EDX                            ; 0048df23
    PUSH EBX                            ; 0048df24
    DEC ESI                             ; 0048df25
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048df26
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 0048df2b
    ADD ESP,0x14                        ; 0048df2e
    CMP ESI,ECX                         ; 0048df31
    JGE 0x0048df12                      ; 0048df33
        ;   XREF to: 0048df12 (CONDITIONAL_JUMP)  ; LAB_0048df12
    MOV ESI,dword ptr [ESP + 0x16c]     ; 0048df35
        ;   Label: LAB_0048df35
    INC ESI                             ; 0048df3c
    MOV EDX,dword ptr [EBX + 0x60]      ; 0048df3d
    MOV dword ptr [ESP + 0x16c],ESI     ; 0048df40
    CMP ESI,EDX                         ; 0048df47
    JLE 0x0048ded7                      ; 0048df49
        ;   XREF to: 0048ded7 (CONDITIONAL_JUMP)  ; LAB_0048ded7
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0048df4b
        ;   Label: LAB_0048df4b
    MOV ECX,dword ptr [EBX + 0x54]      ; 0048df52
    MOV dword ptr [ESP + 0x168],EAX     ; 0048df55
    CMP EAX,ECX                         ; 0048df5c
    JL 0x0048dfed                       ; 0048df5e
        ;   XREF to: 0048dfed (CONDITIONAL_JUMP)  ; LAB_0048dfed
    MOV EAX,dword ptr [ESP + 0x150]     ; 0048df64
    MOV dword ptr [ESP + 0xe0],EAX      ; 0048df6b
    MOV dword ptr [ESP + 0xe4],EAX      ; 0048df72
    MOV ESI,dword ptr [ESP + 0x80]      ; 0048df79
        ;   Label: LAB_0048df79
    CMP ESI,dword ptr [EBX + 0x68]      ; 0048df80
    JG 0x0048dfa8                       ; 0048df83
        ;   XREF to: 0048dfa8 (CONDITIONAL_JUMP)  ; LAB_0048dfa8
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0048df85
        ;   Label: LAB_0048df85
    PUSH EAX                            ; 0048df8c
    PUSH ESI                            ; 0048df8d
    PUSH EDI                            ; 0048df8e
    MOV EDX,dword ptr [ESP + 0x174]     ; 0048df8f
    PUSH EDX                            ; 0048df96
    PUSH EBX                            ; 0048df97
    INC ESI                             ; 0048df98
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048df99
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x68]      ; 0048df9e
    ADD ESP,0x14                        ; 0048dfa1
    CMP ESI,ECX                         ; 0048dfa4
    JLE 0x0048df85                      ; 0048dfa6
        ;   XREF to: 0048df85 (CONDITIONAL_JUMP)  ; LAB_0048df85
    MOV ESI,dword ptr [ESP + 0x128]     ; 0048dfa8
        ;   Label: LAB_0048dfa8
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0048dfaf
    JL 0x0048dfd7                       ; 0048dfb2
        ;   XREF to: 0048dfd7 (CONDITIONAL_JUMP)  ; LAB_0048dfd7
    MOV ECX,dword ptr [ESP + 0xe4]      ; 0048dfb4
        ;   Label: LAB_0048dfb4
    PUSH ECX                            ; 0048dfbb
    PUSH ESI                            ; 0048dfbc
    PUSH EDI                            ; 0048dfbd
    MOV EAX,dword ptr [ESP + 0x174]     ; 0048dfbe
    PUSH EAX                            ; 0048dfc5
    PUSH EBX                            ; 0048dfc6
    DEC ESI                             ; 0048dfc7
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048dfc8
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x5c]      ; 0048dfcd
    ADD ESP,0x14                        ; 0048dfd0
    CMP ESI,EDX                         ; 0048dfd3
    JGE 0x0048dfb4                      ; 0048dfd5
        ;   XREF to: 0048dfb4 (CONDITIONAL_JUMP)  ; LAB_0048dfb4
    MOV ESI,dword ptr [ESP + 0x168]     ; 0048dfd7
        ;   Label: LAB_0048dfd7
    DEC ESI                             ; 0048dfde
    MOV EDX,dword ptr [EBX + 0x54]      ; 0048dfdf
    MOV dword ptr [ESP + 0x168],ESI     ; 0048dfe2
    CMP ESI,EDX                         ; 0048dfe9
    JGE 0x0048df79                      ; 0048dfeb
        ;   XREF to: 0048df79 (CONDITIONAL_JUMP)  ; LAB_0048df79
    MOV ECX,dword ptr [ESP + 0x150]     ; 0048dfed
        ;   Label: LAB_0048dfed
    INC EDI                             ; 0048dff4
    INC ECX                             ; 0048dff5
    MOV ESI,dword ptr [EBX + 0x64]      ; 0048dff6
    MOV dword ptr [ESP + 0x150],ECX     ; 0048dff9
    CMP EDI,ESI                         ; 0048e000
    JLE 0x0048deac                      ; 0048e002
        ;   XREF to: 0048deac (CONDITIONAL_JUMP)  ; LAB_0048deac
    MOV EDI,dword ptr [ESP + 0x7c]      ; 0048e008
        ;   Label: LAB_0048e008
    MOV EAX,dword ptr [EBX + 0x58]      ; 0048e00c
    DEC EDI                             ; 0048e00f
    CMP EDI,EAX                         ; 0048e010
    JL 0x0048de10                       ; 0048e012
        ;   XREF to: 0048de10 (CONDITIONAL_JUMP)  ; LAB_0048de10
    MOV EAX,dword ptr [ESP + 0x80]      ; 0048e018
    DEC EAX                             ; 0048e01f
    MOV dword ptr [ESP + 0x130],EAX     ; 0048e020
    MOV EAX,dword ptr [ESP + 0x78]      ; 0048e027
    DEC EAX                             ; 0048e02b
    MOV dword ptr [ESP + 0x134],EAX     ; 0048e02c
    MOV EAX,EDI                         ; 0048e033
    MOV EDX,dword ptr [ESP + 0x7c]      ; 0048e035
    NEG EAX                             ; 0048e039
    ADD EAX,EDX                         ; 0048e03b
    MOV dword ptr [ESP + 0x154],EAX     ; 0048e03d
    MOV EAX,dword ptr [ESP + 0x78]      ; 0048e044
        ;   Label: LAB_0048e044
    MOV ECX,dword ptr [EBX + 0x60]      ; 0048e048
    MOV dword ptr [ESP + 0x164],EAX     ; 0048e04b
    CMP EAX,ECX                         ; 0048e052
    JLE 0x0048e194                      ; 0048e054
        ;   XREF to: 0048e194 (CONDITIONAL_JUMP)  ; LAB_0048e194
    MOV EAX,dword ptr [ESP + 0x134]     ; 0048e05a
        ;   Label: LAB_0048e05a
    MOV ECX,dword ptr [EBX + 0x54]      ; 0048e061
    MOV dword ptr [ESP + 0x160],EAX     ; 0048e064
    CMP EAX,ECX                         ; 0048e06b
    JL 0x0048e0fc                       ; 0048e06d
        ;   XREF to: 0048e0fc (CONDITIONAL_JUMP)  ; LAB_0048e0fc
    MOV EAX,dword ptr [ESP + 0x154]     ; 0048e073
    MOV dword ptr [ESP + 0xf0],EAX      ; 0048e07a
    MOV dword ptr [ESP + 0xf4],EAX      ; 0048e081
    MOV ESI,dword ptr [ESP + 0x80]      ; 0048e088
        ;   Label: LAB_0048e088
    CMP ESI,dword ptr [EBX + 0x68]      ; 0048e08f
    JG 0x0048e0b7                       ; 0048e092
        ;   XREF to: 0048e0b7 (CONDITIONAL_JUMP)  ; LAB_0048e0b7
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0048e094
        ;   Label: LAB_0048e094
    PUSH EAX                            ; 0048e09b
    PUSH ESI                            ; 0048e09c
    PUSH EDI                            ; 0048e09d
    MOV EDX,dword ptr [ESP + 0x16c]     ; 0048e09e
    PUSH EDX                            ; 0048e0a5
    PUSH EBX                            ; 0048e0a6
    INC ESI                             ; 0048e0a7
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048e0a8
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x68]      ; 0048e0ad
    ADD ESP,0x14                        ; 0048e0b0
    CMP ESI,ECX                         ; 0048e0b3
    JLE 0x0048e094                      ; 0048e0b5
        ;   XREF to: 0048e094 (CONDITIONAL_JUMP)  ; LAB_0048e094
    MOV ESI,dword ptr [ESP + 0x130]     ; 0048e0b7
        ;   Label: LAB_0048e0b7
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0048e0be
    JL 0x0048e0e6                       ; 0048e0c1
        ;   XREF to: 0048e0e6 (CONDITIONAL_JUMP)  ; LAB_0048e0e6
    MOV ECX,dword ptr [ESP + 0xf4]      ; 0048e0c3
        ;   Label: LAB_0048e0c3
    PUSH ECX                            ; 0048e0ca
    PUSH ESI                            ; 0048e0cb
    PUSH EDI                            ; 0048e0cc
    MOV EAX,dword ptr [ESP + 0x16c]     ; 0048e0cd
    PUSH EAX                            ; 0048e0d4
    PUSH EBX                            ; 0048e0d5
    DEC ESI                             ; 0048e0d6
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048e0d7
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x5c]      ; 0048e0dc
    ADD ESP,0x14                        ; 0048e0df
    CMP ESI,EDX                         ; 0048e0e2
    JGE 0x0048e0c3                      ; 0048e0e4
        ;   XREF to: 0048e0c3 (CONDITIONAL_JUMP)  ; LAB_0048e0c3
    MOV ESI,dword ptr [ESP + 0x160]     ; 0048e0e6
        ;   Label: LAB_0048e0e6
    DEC ESI                             ; 0048e0ed
    MOV EDX,dword ptr [EBX + 0x54]      ; 0048e0ee
    MOV dword ptr [ESP + 0x160],ESI     ; 0048e0f1
    CMP ESI,EDX                         ; 0048e0f8
    JGE 0x0048e088                      ; 0048e0fa
        ;   XREF to: 0048e088 (CONDITIONAL_JUMP)  ; LAB_0048e088
    MOV ECX,dword ptr [ESP + 0x154]     ; 0048e0fc
        ;   Label: LAB_0048e0fc
    DEC EDI                             ; 0048e103
    INC ECX                             ; 0048e104
    MOV ESI,dword ptr [EBX + 0x58]      ; 0048e105
    MOV dword ptr [ESP + 0x154],ECX     ; 0048e108
    CMP EDI,ESI                         ; 0048e10f
    JL 0x0048de10                       ; 0048e111
        ;   XREF to: 0048de10 (CONDITIONAL_JUMP)  ; LAB_0048de10
    JMP 0x0048e044                      ; 0048e117
        ;   XREF to: 0048e044 (UNCONDITIONAL_JUMP)  ; LAB_0048e044
    MOV ESI,dword ptr [ESP + 0x164]     ; 0048e11c
        ;   Label: LAB_0048e11c
    INC ESI                             ; 0048e123
    MOV EDX,dword ptr [EBX + 0x60]      ; 0048e124
    MOV dword ptr [ESP + 0x164],ESI     ; 0048e127
    CMP ESI,EDX                         ; 0048e12e
    JG 0x0048e05a                       ; 0048e130
        ;   XREF to: 0048e05a (CONDITIONAL_JUMP)  ; LAB_0048e05a
    MOV ESI,dword ptr [ESP + 0x80]      ; 0048e136
        ;   Label: LAB_0048e136
    CMP ESI,dword ptr [EBX + 0x68]      ; 0048e13d
    JG 0x0048e165                       ; 0048e140
        ;   XREF to: 0048e165 (CONDITIONAL_JUMP)  ; LAB_0048e165
    MOV ECX,dword ptr [ESP + 0xe8]      ; 0048e142
        ;   Label: LAB_0048e142
    PUSH ECX                            ; 0048e149
    PUSH ESI                            ; 0048e14a
    PUSH EDI                            ; 0048e14b
    MOV EAX,dword ptr [ESP + 0x170]     ; 0048e14c
    PUSH EAX                            ; 0048e153
    PUSH EBX                            ; 0048e154
    INC ESI                             ; 0048e155
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048e156
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x68]      ; 0048e15b
    ADD ESP,0x14                        ; 0048e15e
    CMP ESI,EDX                         ; 0048e161
    JLE 0x0048e142                      ; 0048e163
        ;   XREF to: 0048e142 (CONDITIONAL_JUMP)  ; LAB_0048e142
    MOV ESI,dword ptr [ESP + 0x130]     ; 0048e165
        ;   Label: LAB_0048e165
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0048e16c
    JL 0x0048e11c                       ; 0048e16f
        ;   XREF to: 0048e11c (CONDITIONAL_JUMP)  ; LAB_0048e11c
        ;   Label: LAB_0048e16f
    MOV EAX,dword ptr [ESP + 0xec]      ; 0048e171
    PUSH EAX                            ; 0048e178
    PUSH ESI                            ; 0048e179
    PUSH EDI                            ; 0048e17a
    MOV EDX,dword ptr [ESP + 0x170]     ; 0048e17b
    PUSH EDX                            ; 0048e182
    PUSH EBX                            ; 0048e183
    DEC ESI                             ; 0048e184
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048e185
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 0048e18a
    ADD ESP,0x14                        ; 0048e18d
    CMP ESI,ECX                         ; 0048e190
    JMP 0x0048e16f                      ; 0048e192
        ;   XREF to: 0048e16f (UNCONDITIONAL_JUMP)  ; LAB_0048e16f
    MOV EAX,dword ptr [ESP + 0x154]     ; 0048e194
        ;   Label: LAB_0048e194
    MOV dword ptr [ESP + 0xe8],EAX      ; 0048e19b
    MOV dword ptr [ESP + 0xec],EAX      ; 0048e1a2
    JMP 0x0048e136                      ; 0048e1a9
        ;   XREF to: 0048e136 (UNCONDITIONAL_JUMP)  ; LAB_0048e136
    MOV EDI,dword ptr [ESP + 0x80]      ; 0048e1ab
        ;   Label: LAB_0048e1ab
    CMP EDI,dword ptr [EBX + 0x68]      ; 0048e1b2
    JG 0x0048e336                       ; 0048e1b5
        ;   XREF to: 0048e336 (CONDITIONAL_JUMP)  ; LAB_0048e336
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0048e1bb
    DEC EAX                             ; 0048e1bf
    MOV dword ptr [ESP + 0x118],EAX     ; 0048e1c0
    MOV EAX,dword ptr [ESP + 0x78]      ; 0048e1c7
    DEC EAX                             ; 0048e1cb
    MOV dword ptr [ESP + 0x11c],EAX     ; 0048e1cc
    MOV EAX,EDI                         ; 0048e1d3
    NEG EAX                             ; 0048e1d5
    ADD EAX,EDI                         ; 0048e1d7
    MOV dword ptr [ESP + 0x148],EAX     ; 0048e1d9
    MOV EAX,dword ptr [ESP + 0x78]      ; 0048e1e0
        ;   Label: LAB_0048e1e0
    MOV EDX,dword ptr [EBX + 0x60]      ; 0048e1e4
    MOV dword ptr [ESP + 0x17c],EAX     ; 0048e1e7
    CMP EAX,EDX                         ; 0048e1ee
    JG 0x0048e27c                       ; 0048e1f0
        ;   XREF to: 0048e27c (CONDITIONAL_JUMP)  ; LAB_0048e27c
    MOV EAX,dword ptr [ESP + 0x148]     ; 0048e1f6
    MOV dword ptr [ESP + 0xf8],EAX      ; 0048e1fd
    MOV dword ptr [ESP + 0xfc],EAX      ; 0048e204
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0048e20b
        ;   Label: LAB_0048e20b
    CMP ESI,dword ptr [EBX + 0x64]      ; 0048e20f
    JG 0x0048e237                       ; 0048e212
        ;   XREF to: 0048e237 (CONDITIONAL_JUMP)  ; LAB_0048e237
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0048e214
        ;   Label: LAB_0048e214
    PUSH EAX                            ; 0048e21b
    PUSH EDI                            ; 0048e21c
    PUSH ESI                            ; 0048e21d
    MOV EDX,dword ptr [ESP + 0x188]     ; 0048e21e
    PUSH EDX                            ; 0048e225
    PUSH EBX                            ; 0048e226
    INC ESI                             ; 0048e227
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048e228
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x64]      ; 0048e22d
    ADD ESP,0x14                        ; 0048e230
    CMP ESI,ECX                         ; 0048e233
    JLE 0x0048e214                      ; 0048e235
        ;   XREF to: 0048e214 (CONDITIONAL_JUMP)  ; LAB_0048e214
    MOV ESI,dword ptr [ESP + 0x118]     ; 0048e237
        ;   Label: LAB_0048e237
    CMP ESI,dword ptr [EBX + 0x58]      ; 0048e23e
    JL 0x0048e266                       ; 0048e241
        ;   XREF to: 0048e266 (CONDITIONAL_JUMP)  ; LAB_0048e266
    MOV ECX,dword ptr [ESP + 0xfc]      ; 0048e243
        ;   Label: LAB_0048e243
    PUSH ECX                            ; 0048e24a
    PUSH EDI                            ; 0048e24b
    PUSH ESI                            ; 0048e24c
    MOV EAX,dword ptr [ESP + 0x188]     ; 0048e24d
    PUSH EAX                            ; 0048e254
    PUSH EBX                            ; 0048e255
    DEC ESI                             ; 0048e256
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048e257
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x58]      ; 0048e25c
    ADD ESP,0x14                        ; 0048e25f
    CMP ESI,EDX                         ; 0048e262
    JGE 0x0048e243                      ; 0048e264
        ;   XREF to: 0048e243 (CONDITIONAL_JUMP)  ; LAB_0048e243
    MOV ECX,dword ptr [ESP + 0x17c]     ; 0048e266
        ;   Label: LAB_0048e266
    INC ECX                             ; 0048e26d
    MOV ESI,dword ptr [EBX + 0x60]      ; 0048e26e
    MOV dword ptr [ESP + 0x17c],ECX     ; 0048e271
    CMP ECX,ESI                         ; 0048e278
    JLE 0x0048e20b                      ; 0048e27a
        ;   XREF to: 0048e20b (CONDITIONAL_JUMP)  ; LAB_0048e20b
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0048e27c
        ;   Label: LAB_0048e27c
    MOV EDX,dword ptr [EBX + 0x54]      ; 0048e283
    MOV dword ptr [ESP + 0x178],EAX     ; 0048e286
    CMP EAX,EDX                         ; 0048e28d
    JL 0x0048e31b                       ; 0048e28f
        ;   XREF to: 0048e31b (CONDITIONAL_JUMP)  ; LAB_0048e31b
    MOV EAX,dword ptr [ESP + 0x148]     ; 0048e295
    MOV dword ptr [ESP + 0x100],EAX     ; 0048e29c
    MOV dword ptr [ESP + 0x104],EAX     ; 0048e2a3
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0048e2aa
        ;   Label: LAB_0048e2aa
    CMP ESI,dword ptr [EBX + 0x64]      ; 0048e2ae
    JG 0x0048e2d6                       ; 0048e2b1
        ;   XREF to: 0048e2d6 (CONDITIONAL_JUMP)  ; LAB_0048e2d6
    MOV ECX,dword ptr [ESP + 0x100]     ; 0048e2b3
        ;   Label: LAB_0048e2b3
    PUSH ECX                            ; 0048e2ba
    PUSH EDI                            ; 0048e2bb
    PUSH ESI                            ; 0048e2bc
    MOV EAX,dword ptr [ESP + 0x184]     ; 0048e2bd
    PUSH EAX                            ; 0048e2c4
    PUSH EBX                            ; 0048e2c5
    INC ESI                             ; 0048e2c6
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048e2c7
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x64]      ; 0048e2cc
    ADD ESP,0x14                        ; 0048e2cf
    CMP ESI,EDX                         ; 0048e2d2
    JLE 0x0048e2b3                      ; 0048e2d4
        ;   XREF to: 0048e2b3 (CONDITIONAL_JUMP)  ; LAB_0048e2b3
    MOV ESI,dword ptr [ESP + 0x118]     ; 0048e2d6
        ;   Label: LAB_0048e2d6
    CMP ESI,dword ptr [EBX + 0x58]      ; 0048e2dd
    JL 0x0048e305                       ; 0048e2e0
        ;   XREF to: 0048e305 (CONDITIONAL_JUMP)  ; LAB_0048e305
    MOV EAX,dword ptr [ESP + 0x104]     ; 0048e2e2
        ;   Label: LAB_0048e2e2
    PUSH EAX                            ; 0048e2e9
    PUSH EDI                            ; 0048e2ea
    PUSH ESI                            ; 0048e2eb
    MOV EDX,dword ptr [ESP + 0x184]     ; 0048e2ec
    PUSH EDX                            ; 0048e2f3
    PUSH EBX                            ; 0048e2f4
    DEC ESI                             ; 0048e2f5
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048e2f6
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x58]      ; 0048e2fb
    ADD ESP,0x14                        ; 0048e2fe
    CMP ESI,ECX                         ; 0048e301
    JGE 0x0048e2e2                      ; 0048e303
        ;   XREF to: 0048e2e2 (CONDITIONAL_JUMP)  ; LAB_0048e2e2
    MOV ECX,dword ptr [ESP + 0x178]     ; 0048e305
        ;   Label: LAB_0048e305
    DEC ECX                             ; 0048e30c
    MOV ESI,dword ptr [EBX + 0x54]      ; 0048e30d
    MOV dword ptr [ESP + 0x178],ECX     ; 0048e310
    CMP ECX,ESI                         ; 0048e317
    JGE 0x0048e2aa                      ; 0048e319
        ;   XREF to: 0048e2aa (CONDITIONAL_JUMP)  ; LAB_0048e2aa
    MOV EAX,dword ptr [ESP + 0x148]     ; 0048e31b
        ;   Label: LAB_0048e31b
    INC EDI                             ; 0048e322
    INC EAX                             ; 0048e323
    MOV EDX,dword ptr [EBX + 0x68]      ; 0048e324
    MOV dword ptr [ESP + 0x148],EAX     ; 0048e327
    CMP EDI,EDX                         ; 0048e32e
    JLE 0x0048e1e0                      ; 0048e330
        ;   XREF to: 0048e1e0 (CONDITIONAL_JUMP)  ; LAB_0048e1e0
    MOV EDI,dword ptr [ESP + 0x80]      ; 0048e336
        ;   Label: LAB_0048e336
    MOV ECX,dword ptr [EBX + 0x5c]      ; 0048e33d
    DEC EDI                             ; 0048e340
    CMP EDI,ECX                         ; 0048e341
    JL 0x0048de10                       ; 0048e343
        ;   XREF to: 0048de10 (CONDITIONAL_JUMP)  ; LAB_0048de10
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0048e349
    DEC EAX                             ; 0048e34d
    MOV dword ptr [ESP + 0x120],EAX     ; 0048e34e
    MOV EAX,dword ptr [ESP + 0x78]      ; 0048e355
    DEC EAX                             ; 0048e359
    MOV dword ptr [ESP + 0x124],EAX     ; 0048e35a
    MOV EAX,EDI                         ; 0048e361
    MOV EDX,dword ptr [ESP + 0x80]      ; 0048e363
    NEG EAX                             ; 0048e36a
    ADD EAX,EDX                         ; 0048e36c
    MOV dword ptr [ESP + 0x14c],EAX     ; 0048e36e
    MOV EAX,dword ptr [ESP + 0x78]      ; 0048e375
        ;   Label: LAB_0048e375
    MOV ECX,dword ptr [EBX + 0x60]      ; 0048e379
    MOV dword ptr [ESP + 0x174],EAX     ; 0048e37c
    CMP EAX,ECX                         ; 0048e383
    JLE 0x0048e4bf                      ; 0048e385
        ;   XREF to: 0048e4bf (CONDITIONAL_JUMP)  ; LAB_0048e4bf
    MOV EAX,dword ptr [ESP + 0x124]     ; 0048e38b
        ;   Label: LAB_0048e38b
    MOV ECX,dword ptr [EBX + 0x54]      ; 0048e392
    MOV dword ptr [ESP + 0x170],EAX     ; 0048e395
    CMP EAX,ECX                         ; 0048e39c
    JL 0x0048e42a                       ; 0048e39e
        ;   XREF to: 0048e42a (CONDITIONAL_JUMP)  ; LAB_0048e42a
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0048e3a4
    MOV dword ptr [ESP + 0x110],EAX     ; 0048e3ab
    MOV dword ptr [ESP + 0x114],EAX     ; 0048e3b2
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0048e3b9
        ;   Label: LAB_0048e3b9
    CMP ESI,dword ptr [EBX + 0x64]      ; 0048e3bd
    JG 0x0048e3e5                       ; 0048e3c0
        ;   XREF to: 0048e3e5 (CONDITIONAL_JUMP)  ; LAB_0048e3e5
    MOV EAX,dword ptr [ESP + 0x110]     ; 0048e3c2
        ;   Label: LAB_0048e3c2
    PUSH EAX                            ; 0048e3c9
    PUSH EDI                            ; 0048e3ca
    PUSH ESI                            ; 0048e3cb
    MOV EDX,dword ptr [ESP + 0x17c]     ; 0048e3cc
    PUSH EDX                            ; 0048e3d3
    PUSH EBX                            ; 0048e3d4
    INC ESI                             ; 0048e3d5
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048e3d6
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x64]      ; 0048e3db
    ADD ESP,0x14                        ; 0048e3de
    CMP ESI,ECX                         ; 0048e3e1
    JLE 0x0048e3c2                      ; 0048e3e3
        ;   XREF to: 0048e3c2 (CONDITIONAL_JUMP)  ; LAB_0048e3c2
    MOV ESI,dword ptr [ESP + 0x120]     ; 0048e3e5
        ;   Label: LAB_0048e3e5
    CMP ESI,dword ptr [EBX + 0x58]      ; 0048e3ec
    JL 0x0048e414                       ; 0048e3ef
        ;   XREF to: 0048e414 (CONDITIONAL_JUMP)  ; LAB_0048e414
    MOV ECX,dword ptr [ESP + 0x114]     ; 0048e3f1
        ;   Label: LAB_0048e3f1
    PUSH ECX                            ; 0048e3f8
    PUSH EDI                            ; 0048e3f9
    PUSH ESI                            ; 0048e3fa
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0048e3fb
    PUSH EAX                            ; 0048e402
    PUSH EBX                            ; 0048e403
    DEC ESI                             ; 0048e404
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048e405
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x58]      ; 0048e40a
    ADD ESP,0x14                        ; 0048e40d
    CMP ESI,EDX                         ; 0048e410
    JGE 0x0048e3f1                      ; 0048e412
        ;   XREF to: 0048e3f1 (CONDITIONAL_JUMP)  ; LAB_0048e3f1
    MOV ESI,dword ptr [ESP + 0x170]     ; 0048e414
        ;   Label: LAB_0048e414
    DEC ESI                             ; 0048e41b
    MOV EDX,dword ptr [EBX + 0x54]      ; 0048e41c
    MOV dword ptr [ESP + 0x170],ESI     ; 0048e41f
    CMP ESI,EDX                         ; 0048e426
    JGE 0x0048e3b9                      ; 0048e428
        ;   XREF to: 0048e3b9 (CONDITIONAL_JUMP)  ; LAB_0048e3b9
    MOV ESI,dword ptr [ESP + 0x14c]     ; 0048e42a
        ;   Label: LAB_0048e42a
    DEC EDI                             ; 0048e431
    INC ESI                             ; 0048e432
    MOV EAX,dword ptr [EBX + 0x5c]      ; 0048e433
    MOV dword ptr [ESP + 0x14c],ESI     ; 0048e436
    CMP EDI,EAX                         ; 0048e43d
    JL 0x0048de10                       ; 0048e43f
        ;   XREF to: 0048de10 (CONDITIONAL_JUMP)  ; LAB_0048de10
    JMP 0x0048e375                      ; 0048e445
        ;   XREF to: 0048e375 (UNCONDITIONAL_JUMP)  ; LAB_0048e375
    MOV ESI,dword ptr [ESP + 0x174]     ; 0048e44a
        ;   Label: LAB_0048e44a
    INC ESI                             ; 0048e451
    MOV EDX,dword ptr [EBX + 0x60]      ; 0048e452
    MOV dword ptr [ESP + 0x174],ESI     ; 0048e455
    CMP ESI,EDX                         ; 0048e45c
    JG 0x0048e38b                       ; 0048e45e
        ;   XREF to: 0048e38b (CONDITIONAL_JUMP)  ; LAB_0048e38b
    MOV ESI,dword ptr [ESP + 0x7c]      ; 0048e464
        ;   Label: LAB_0048e464
    CMP ESI,dword ptr [EBX + 0x64]      ; 0048e468
    JG 0x0048e490                       ; 0048e46b
        ;   XREF to: 0048e490 (CONDITIONAL_JUMP)  ; LAB_0048e490
    MOV ECX,dword ptr [ESP + 0x108]     ; 0048e46d
        ;   Label: LAB_0048e46d
    PUSH ECX                            ; 0048e474
    PUSH EDI                            ; 0048e475
    PUSH ESI                            ; 0048e476
    MOV EAX,dword ptr [ESP + 0x180]     ; 0048e477
    PUSH EAX                            ; 0048e47e
    PUSH EBX                            ; 0048e47f
    INC ESI                             ; 0048e480
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048e481
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x64]      ; 0048e486
    ADD ESP,0x14                        ; 0048e489
    CMP ESI,EDX                         ; 0048e48c
    JLE 0x0048e46d                      ; 0048e48e
        ;   XREF to: 0048e46d (CONDITIONAL_JUMP)  ; LAB_0048e46d
    MOV ESI,dword ptr [ESP + 0x120]     ; 0048e490
        ;   Label: LAB_0048e490
    CMP ESI,dword ptr [EBX + 0x58]      ; 0048e497
    JL 0x0048e44a                       ; 0048e49a
        ;   XREF to: 0048e44a (CONDITIONAL_JUMP)  ; LAB_0048e44a
        ;   Label: LAB_0048e49a
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0048e49c
    PUSH EAX                            ; 0048e4a3
    PUSH EDI                            ; 0048e4a4
    PUSH ESI                            ; 0048e4a5
    MOV EDX,dword ptr [ESP + 0x180]     ; 0048e4a6
    PUSH EDX                            ; 0048e4ad
    PUSH EBX                            ; 0048e4ae
    DEC ESI                             ; 0048e4af
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 ; 0048e4b0
        ;   XREF to: 0048cba0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x58]      ; 0048e4b5
    ADD ESP,0x14                        ; 0048e4b8
    CMP ESI,ECX                         ; 0048e4bb
    JMP 0x0048e49a                      ; 0048e4bd
        ;   XREF to: 0048e49a (UNCONDITIONAL_JUMP)  ; LAB_0048e49a
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0048e4bf
        ;   Label: LAB_0048e4bf
    MOV dword ptr [ESP + 0x108],EAX     ; 0048e4c6
    MOV dword ptr [ESP + 0x10c],EAX     ; 0048e4cd
    JMP 0x0048e464                      ; 0048e4d4
        ;   XREF to: 0048e464 (UNCONDITIONAL_JUMP)  ; LAB_0048e464

