; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_spike_cpp_FUN_00583700(CSpike *this_ptr)
;
; Parameters:
; CSpike *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_spike.cpp_FUN_005831b0 at 005834ce
;
; Referenced Globals:
;   undefined4 DAT_005f62cc
;   undefined4 DAT_005f62d0
;   undefined4 DAT_005f62d4
;   undefined4 DAT_005f62d8
;   CDemonSet* g_CDemonSetPtr = 01e82168
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_FUN_00409170
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420500
;   core_box.cpp_CBoundingBox3D_reset_FUN_00421570
;   core_box.cpp_FUN_00420570
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00583700
        ;   Label: core_spike.cpp_FUN_00583700
    PUSH ESI                            ; 00583701
    PUSH EDI                            ; 00583702
    PUSH EBP                            ; 00583703
    MOV EBP,ESP                         ; 00583704
    SUB ESP,0x238                       ; 00583706
    AND ESP,0xfffffff8                  ; 0058370c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0058370f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00583712
    PUSH EDX                            ; 00583715
    MOV EAX,dword ptr [EAX + 0x154]     ; 00583716
    LEA ESI,[ESP + 0x10c]               ; 0058371c
    LEA EDI,[ESP + 0xf4]                ; 00583723
    CALL dword ptr [EAX + 0x1c]         ; 0058372a
    MOV ECX,0x6                         ; 0058372d
    LEA ESI,[ESP + 0x10c]               ; 00583732
    ADD ESP,0x4                         ; 00583739
    LEA EAX,[ESP + 0x120]               ; 0058373c
    MOVSD.REP ES:EDI,ESI                ; 00583743
    PUSH EAX                            ; 00583745
    FLD float ptr [ESP + 0xf4]          ; 00583746
    FLD float ptr [ESP + 0xf8]          ; 0058374d
    FLD float ptr [ESP + 0x100]         ; 00583754
    FLD float ptr [ESP + 0x104]         ; 0058375b
    FXCH ST3                            ; 00583762
    FLD float ptr [0x005f62cc]          ; 00583764 | DAT_005f62cc
    FXCH                                ; 0058376a
    FADD ST0,ST1                        ; 0058376c
    FXCH ST3                            ; 0058376e
    FADDP                               ; 00583770
    FXCH                                ; 00583772
    FLD float ptr [0x005f62d0]          ; 00583774 | DAT_005f62d0
    FXCH                                ; 0058377a
    FADD ST0,ST1                        ; 0058377c
    FXCH ST4                            ; 0058377e
    FADDP                               ; 00583780
    FXCH ST2                            ; 00583782
    FSTP float ptr [ESP + 0xf4]         ; 00583784
    FSTP float ptr [ESP + 0xf8]         ; 0058378b
    FXCH                                ; 00583792
    FSTP float ptr [ESP + 0x100]        ; 00583794
    FSTP float ptr [ESP + 0x104]        ; 0058379b
    CALL core_box.cpp_CBoundingBox3D_reset_FUN_00421570 ; 005837a2
        ;   XREF to: 00421570 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_reset_FUN_00421570(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 005837a7
    PUSH 0x5fb430                       ; 005837aa
    PUSH 0x8                            ; 005837af
    LEA EAX,[ESP + 0x18]                ; 005837b1
    PUSH EAX                            ; 005837b5
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 005837b6
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 005837bb
    XOR ECX,ECX                         ; 005837be
    LEA EBX,[ESP + 0x10]                ; 005837c0
    MOV dword ptr [ESP + 0x230],ECX     ; 005837c4
    MOV ESI,dword ptr [ESP + 0x230]     ; 005837cb
        ;   Label: LAB_005837cb
    PUSH ESI                            ; 005837d2
    LEA EAX,[ESP + 0xf4]                ; 005837d3
    PUSH EAX                            ; 005837da
    LEA ESI,[ESP + 0x1ac]               ; 005837db
    LEA EDI,[ESP + 0x200]               ; 005837e2
    CALL core_box.cpp_FUN_00420570      ; 005837e9
        ;   XREF to: 00420570 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00420570()
    LEA ESI,[ESP + 0x1ac]               ; 005837ee
    ADD ESP,0x8                         ; 005837f5
    LEA EAX,[ESP + 0x1f8]               ; 005837f8
    MOVSD ES:EDI,ESI                    ; 005837ff
    MOVSD ES:EDI,ESI                    ; 00583800
    MOVSD ES:EDI,ESI                    ; 00583801
    PUSH EAX                            ; 00583802
    MOV EDI,dword ptr [EBP + 0x14]      ; 00583803
    PUSH EDI                            ; 00583806
    LEA ESI,[ESP + 0x1f4]               ; 00583807
    CALL core_actor.cpp_FUN_00408b40    ; 0058380e
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA EDI,[ESP + 0x1dc]               ; 00583813
    LEA ESI,[ESP + 0x1f4]               ; 0058381a
    ADD ESP,0x8                         ; 00583821
    LEA EAX,[ESP + 0x1d4]               ; 00583824
    MOVSD ES:EDI,ESI                    ; 0058382b
    MOVSD ES:EDI,ESI                    ; 0058382c
    MOVSD ES:EDI,ESI                    ; 0058382d
    CMP EBX,EAX                         ; 0058382e
    JZ 0x0058384f                       ; 00583830
        ;   XREF to: 0058384f (CONDITIONAL_JUMP)  ; LAB_0058384f
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 00583832
    MOV dword ptr [EBX],EAX             ; 00583839
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0058383b
    MOV dword ptr [EBX + 0x4],EAX       ; 00583842
    MOV EAX,dword ptr [ESP + 0x1dc]     ; 00583845
    MOV dword ptr [EBX + 0x8],EAX       ; 0058384c
    PUSH EBX                            ; 0058384f
        ;   Label: LAB_0058384f
    LEA EAX,[ESP + 0x124]               ; 00583850
    PUSH EAX                            ; 00583857
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420500 ; 00583858
        ;   XREF to: 00420500 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420500(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0058385d
    MOV EAX,dword ptr [ESP + 0x230]     ; 00583860
    INC EAX                             ; 00583867
    ADD EBX,0xc                         ; 00583868
    MOV dword ptr [ESP + 0x230],EAX     ; 0058386b
    CMP EAX,0x8                         ; 00583872
    JL 0x005837cb                       ; 00583875
        ;   XREF to: 005837cb (CONDITIONAL_JUMP)  ; LAB_005837cb
    FLD float ptr [ESP + 0xf4]          ; 0058387b
    FMUL ST0                            ; 00583882
    FLD float ptr [ESP + 0xf0]          ; 00583884
    FMUL ST0                            ; 0058388b
    FADDP                               ; 0058388d
    FLD float ptr [ESP + 0xf8]          ; 0058388f
    FMUL ST0                            ; 00583896
    FADDP                               ; 00583898
    FSQRT                               ; 0058389a
    FLD float ptr [ESP + 0xfc]          ; 0058389c
    FMUL ST0                            ; 005838a3
    FLD float ptr [ESP + 0x100]         ; 005838a5
    FMUL ST0                            ; 005838ac
    FADDP                               ; 005838ae
    FLD float ptr [ESP + 0x104]         ; 005838b0
    FMUL ST0                            ; 005838b7
    FADDP                               ; 005838b9
    FSTP float ptr [ESP + 0xc]          ; 005838bb
    FSTP float ptr [ESP + 0x210]        ; 005838bf
    MOV EAX,dword ptr [ESP + 0x210]     ; 005838c6
    FLD float ptr [ESP + 0xc]           ; 005838cd
    MOV dword ptr [ESP + 0x218],EAX     ; 005838d1
    FSQRT                               ; 005838d8
    FST float ptr [ESP + 0x214]         ; 005838da
    FCOMP float ptr [ESP + 0x210]       ; 005838e1
    FNSTSW AX                           ; 005838e8
    SAHF                                ; 005838ea
    JA 0x00583a0e                       ; 005838eb
        ;   XREF to: 00583a0e (CONDITIONAL_JUMP)  ; LAB_00583a0e
    FLD float ptr [ESP + 0x218]         ; 005838f1
        ;   Label: LAB_005838f1
    FMUL float ptr [0x005f62d4]         ; 005838f8 | DAT_005f62d4
    FADD float ptr [0x005f62d8]         ; 005838fe | DAT_005f62d8
    FST float ptr [ESP + 0x218]         ; 00583904
    FMUL float ptr [ESP + 0x218]        ; 0058390b
    FLD float ptr [ESP + 0x104]         ; 00583912
    FSUB float ptr [ESP + 0xf8]         ; 00583919
    MOV ESI,dword ptr [EBP + 0x14]      ; 00583920
    FSTP float ptr [ESP + 0x234]        ; 00583923
    MOV EAX,dword ptr [ESP + 0x234]     ; 0058392a
    LEA EDI,[ESP + 0x198]               ; 00583931
    MOV dword ptr [ESP + 0x14c],EAX     ; 00583938
    LEA EAX,[ESP + 0x144]               ; 0058393f
    XOR ECX,ECX                         ; 00583946
    PUSH EAX                            ; 00583948
    MOV dword ptr [ESP + 0x148],ECX     ; 00583949
    MOV dword ptr [ESP + 0x14c],ECX     ; 00583950
    PUSH ESI                            ; 00583957
    LEA ESI,[ESP + 0x158]               ; 00583958
    FSTP float ptr [ESP + 0x224]        ; 0058395f
    CALL core_actor.cpp_FUN_00408ac0    ; 00583966
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x158]               ; 0058396b
    ADD ESP,0x8                         ; 00583972
    MOVSD ES:EDI,ESI                    ; 00583975
    MOVSD ES:EDI,ESI                    ; 00583976
    MOVSD ES:EDI,ESI                    ; 00583977
    MOV EAX,dword ptr [EBP + 0x14]      ; 00583978
    XOR EDI,EDI                         ; 0058397b
    ADD EAX,0x20                        ; 0058397d
    MOV dword ptr [ESP + 0x22c],EDI     ; 00583980
    MOV dword ptr [ESP + 0x224],EAX     ; 00583987
    MOV dword ptr [ESP + 0x228],EDI     ; 0058398e
    MOV EAX,[0x00622c18]                ; 00583995 | g_CDemonSetPtr
        ;   Label: LAB_00583995
    MOV EDX,dword ptr [ESP + 0x22c]     ; 0058399a
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 005839a1
    JGE 0x00583d04                      ; 005839a7
        ;   XREF to: 00583d04 (CONDITIONAL_JUMP)  ; LAB_00583d04
    ADD EAX,dword ptr [ESP + 0x228]     ; 005839ad
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 005839b4
    MOV EAX,dword ptr [ESP + 0x224]     ; 005839ba
    LEA ESI,[EBX + 0x20]                ; 005839c1
    FLD float ptr [EAX]                 ; 005839c4
    FSUB float ptr [ESI]                ; 005839c6
    FMUL ST0                            ; 005839c8
    FLD float ptr [EAX + 0x4]           ; 005839ca
    FSUB float ptr [ESI + 0x4]          ; 005839cd
    FMUL ST0                            ; 005839d0
    FLD float ptr [EAX + 0x8]           ; 005839d2
    FXCH                                ; 005839d5
    FADDP ST2,ST0                       ; 005839d7
    FSUB float ptr [ESI + 0x8]          ; 005839d9
    FMUL ST0                            ; 005839dc
    FADDP                               ; 005839de
    FCOMP float ptr [ESP + 0x21c]       ; 005839e0
    FNSTSW AX                           ; 005839e7
    SAHF                                ; 005839e9
    JBE 0x00583a21                      ; 005839ea
        ;   XREF to: 00583a21 (CONDITIONAL_JUMP)  ; LAB_00583a21
    MOV ECX,dword ptr [ESP + 0x22c]     ; 005839ec
        ;   Label: LAB_005839ec
    MOV EDX,dword ptr [ESP + 0x228]     ; 005839f3
    INC ECX                             ; 005839fa
    ADD EDX,0x4                         ; 005839fb
    MOV dword ptr [ESP + 0x22c],ECX     ; 005839fe
    MOV dword ptr [ESP + 0x228],EDX     ; 00583a05
    JMP 0x00583995                      ; 00583a0c
        ;   XREF to: 00583995 (UNCONDITIONAL_JUMP)  ; LAB_00583995
    MOV EAX,dword ptr [ESP + 0x214]     ; 00583a0e
        ;   Label: LAB_00583a0e
    MOV dword ptr [ESP + 0x218],EAX     ; 00583a15
    JMP 0x005838f1                      ; 00583a1c
        ;   XREF to: 005838f1 (UNCONDITIONAL_JUMP)  ; LAB_005838f1
    LEA EAX,[ESP + 0xac]                ; 00583a21
        ;   Label: LAB_00583a21
    PUSH EAX                            ; 00583a28
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0 ; 00583a29
        ;   XREF to: 005593c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 00583a2e
    LEA EDX,[ESP + 0xac]                ; 00583a31
    XOR EDI,EDI                         ; 00583a38
    PUSH EDX                            ; 00583a3a
    MOV dword ptr [ESP + 0xb0],EDI      ; 00583a3b
    PUSH EBX                            ; 00583a42
    MOV EAX,dword ptr [EBX + 0x154]     ; 00583a43
    CALL dword ptr [EAX + 0x3c]         ; 00583a49
    ADD ESP,0x8                         ; 00583a4c
    MOV dword ptr [ESP + 0x220],EAX     ; 00583a4f
    TEST EAX,EAX                        ; 00583a56
    JZ 0x005839ec                       ; 00583a58
        ;   XREF to: 005839ec (CONDITIONAL_JUMP)  ; LAB_005839ec
    PUSH ESI                            ; 00583a5a
    MOV EDX,dword ptr [EBP + 0x14]      ; 00583a5b
    MOV dword ptr [ESP + 0xc4],EDI      ; 00583a5e
    PUSH EDX                            ; 00583a65
    LEA ESI,[ESP + 0x1e8]               ; 00583a66
    LEA EDI,[ESP + 0x164]               ; 00583a6d
    CALL core_actor.cpp_FUN_00408bb0    ; 00583a74
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x1e8]               ; 00583a79
    ADD ESP,0x8                         ; 00583a80
    MOVSD ES:EDI,ESI                    ; 00583a83
    MOVSD ES:EDI,ESI                    ; 00583a84
    MOVSD ES:EDI,ESI                    ; 00583a85
    FLD float ptr [ESP + 0x15c]         ; 00583a86
    FCOMP float ptr [ESP + 0xf0]        ; 00583a8d
    FNSTSW AX                           ; 00583a94
    SAHF                                ; 00583a96
    JNC 0x00583aa7                      ; 00583a97
        ;   XREF to: 00583aa7 (CONDITIONAL_JUMP)  ; LAB_00583aa7
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00583a99
    MOV dword ptr [ESP + 0x15c],EAX     ; 00583aa0
    FLD float ptr [ESP + 0x15c]         ; 00583aa7
        ;   Label: LAB_00583aa7
    FCOMP float ptr [ESP + 0xfc]        ; 00583aae
    FNSTSW AX                           ; 00583ab5
    SAHF                                ; 00583ab7
    JBE 0x00583ac8                      ; 00583ab8
        ;   XREF to: 00583ac8 (CONDITIONAL_JUMP)  ; LAB_00583ac8
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00583aba
    MOV dword ptr [ESP + 0x15c],EAX     ; 00583ac1
    FLD float ptr [ESP + 0x160]         ; 00583ac8
        ;   Label: LAB_00583ac8
    FCOMP float ptr [ESP + 0xf4]        ; 00583acf
    FNSTSW AX                           ; 00583ad6
    SAHF                                ; 00583ad8
    JNC 0x00583ae9                      ; 00583ad9
        ;   XREF to: 00583ae9 (CONDITIONAL_JUMP)  ; LAB_00583ae9
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00583adb
    MOV dword ptr [ESP + 0x160],EAX     ; 00583ae2
    FLD float ptr [ESP + 0x160]         ; 00583ae9
        ;   Label: LAB_00583ae9
    FCOMP float ptr [ESP + 0x100]       ; 00583af0
    FNSTSW AX                           ; 00583af7
    SAHF                                ; 00583af9
    JBE 0x00583b0a                      ; 00583afa
        ;   XREF to: 00583b0a (CONDITIONAL_JUMP)  ; LAB_00583b0a
    MOV EAX,dword ptr [ESP + 0x100]     ; 00583afc
    MOV dword ptr [ESP + 0x160],EAX     ; 00583b03
    LEA EAX,[ESP + 0x15c]               ; 00583b0a
        ;   Label: LAB_00583b0a
    MOV ESI,dword ptr [EBP + 0x14]      ; 00583b11
    PUSH EAX                            ; 00583b14
    LEA EDI,[ESP + 0x1b4]               ; 00583b15
    XOR ECX,ECX                         ; 00583b1c
    PUSH ESI                            ; 00583b1e
    LEA ESI,[ESP + 0x1d0]               ; 00583b1f
    MOV dword ptr [ESP + 0x16c],ECX     ; 00583b26
    CALL core_actor.cpp_FUN_00408b40    ; 00583b2d
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x1d0]               ; 00583b32
    ADD ESP,0x8                         ; 00583b39
    LEA EAX,[ESP + 0x120]               ; 00583b3c
    MOVSD ES:EDI,ESI                    ; 00583b43
    MOVSD ES:EDI,ESI                    ; 00583b44
    MOVSD ES:EDI,ESI                    ; 00583b45
    PUSH EAX                            ; 00583b46
    MOV EDI,dword ptr [ESP + 0x224]     ; 00583b47
    PUSH EDI                            ; 00583b4e
    LEA EAX,[ESP + 0xb4]                ; 00583b4f
    PUSH EAX                            ; 00583b56
    LEA EAX,[ESP + 0xe0]                ; 00583b57
    PUSH EAX                            ; 00583b5e
    LEA EAX,[ESP + 0x1a8]               ; 00583b5f
    PUSH EAX                            ; 00583b66
    LEA EAX,[ESP + 0x1c4]               ; 00583b67
    PUSH EAX                            ; 00583b6e
    PUSH EBX                            ; 00583b6f
    CALL core_actor.cpp_FUN_00409170    ; 00583b70
        ;   XREF to: 00409170 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00409170()
    MOV dword ptr [ESP + 0x250],EAX     ; 00583b75
    FLD float ptr [ESP + 0x250]         ; 00583b7c
    ADD ESP,0x1c                        ; 00583b83
    FLDZ                                ; 00583b86
    FXCH                                ; 00583b88
    FST float ptr [ESP + 0x8]           ; 00583b8a
    FSTP double ptr [ESP]               ; 00583b8e
    FCOMP double ptr [ESP]              ; 00583b91
    FNSTSW AX                           ; 00583b94
    SAHF                                ; 00583b96
    JA 0x005839ec                       ; 00583b97
        ;   XREF to: 005839ec (CONDITIONAL_JUMP)  ; LAB_005839ec
    FLD1                                ; 00583b9d
    FCOMP double ptr [ESP]              ; 00583b9f
    FNSTSW AX                           ; 00583ba2
    SAHF                                ; 00583ba4
    JC 0x005839ec                       ; 00583ba5
        ;   XREF to: 005839ec (CONDITIONAL_JUMP)  ; LAB_005839ec
    FLD float ptr [ESP + 0x8]           ; 00583bab
    FLD float ptr [ESP + 0x198]         ; 00583baf
    FMUL ST1                            ; 00583bb6
    FLD float ptr [ESP + 0x19c]         ; 00583bb8
    FMUL ST2                            ; 00583bbf
    FLD float ptr [ESP + 0x1a0]         ; 00583bc1
    FMULP ST3                           ; 00583bc8
    FLD float ptr [ESP + 0x1b0]         ; 00583bca
    FLD float ptr [ESP + 0x1b4]         ; 00583bd1
    FLD float ptr [ESP + 0x1b8]         ; 00583bd8
    LEA EDI,[ESP + 0x180]               ; 00583bdf
    LEA ESI,[ESP + 0x168]               ; 00583be6
    LEA EAX,[ESP + 0x174]               ; 00583bed
    FXCH ST4                            ; 00583bf4
    FSTP float ptr [ESP + 0x168]        ; 00583bf6
    FXCH ST2                            ; 00583bfd
    FSTP float ptr [ESP + 0x16c]        ; 00583bff
    FXCH ST3                            ; 00583c06
    FSTP float ptr [ESP + 0x170]        ; 00583c08
    MOVSD ES:EDI,ESI                    ; 00583c0f
    MOVSD ES:EDI,ESI                    ; 00583c10
    MOVSD ES:EDI,ESI                    ; 00583c11
    PUSH EAX                            ; 00583c12
    LEA EDI,[ESP + 0x178]               ; 00583c13
    LEA ESI,[ESP + 0x1c0]               ; 00583c1a
    FXCH ST2                            ; 00583c21
    FADD float ptr [ESP + 0x184]        ; 00583c23
    FXCH ST2                            ; 00583c2a
    FADD float ptr [ESP + 0x188]        ; 00583c2c
    FXCH                                ; 00583c33
    FADD float ptr [ESP + 0x18c]        ; 00583c35
    FXCH ST2                            ; 00583c3c
    FSTP float ptr [ESP + 0x1c0]        ; 00583c3e
    FSTP float ptr [ESP + 0x1c4]        ; 00583c45
    FSTP float ptr [ESP + 0x1c8]        ; 00583c4c
    MOVSD ES:EDI,ESI                    ; 00583c53
    MOVSD ES:EDI,ESI                    ; 00583c54
    MOVSD ES:EDI,ESI                    ; 00583c55
    PUSH EBX                            ; 00583c56
    LEA ESI,[ESP + 0x194]               ; 00583c57
    LEA EDI,[ESP + 0x140]               ; 00583c5e
    CALL core_actor.cpp_FUN_00408bb0    ; 00583c65
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    ADD ESP,0x8                         ; 00583c6a
    LEA EAX,[ESP + 0x70]                ; 00583c6d
    LEA ESI,[ESP + 0x18c]               ; 00583c71
    PUSH EAX                            ; 00583c78
    MOVSD ES:EDI,ESI                    ; 00583c79
    MOVSD ES:EDI,ESI                    ; 00583c7a
    MOVSD ES:EDI,ESI                    ; 00583c7b
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00583c7c
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00583c81
    MOV EAX,dword ptr [EBP + 0x14]      ; 00583c84
    MOV EAX,dword ptr [EAX + 0x558]     ; 00583c87
    MOV dword ptr [ESP + 0x74],EAX      ; 00583c8d
    MOV EAX,0x67                        ; 00583c91
    LEA EDX,[ESP + 0x138]               ; 00583c96
    MOV dword ptr [ESP + 0xa0],EAX      ; 00583c9d
    LEA EAX,[ESP + 0x8c]                ; 00583ca4
    CMP EAX,EDX                         ; 00583cab
    JZ 0x00583cd9                       ; 00583cad
        ;   XREF to: 00583cd9 (CONDITIONAL_JUMP)  ; LAB_00583cd9
    MOV EAX,dword ptr [ESP + 0x138]     ; 00583caf
    MOV dword ptr [ESP + 0x8c],EAX      ; 00583cb6
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00583cbd
    MOV dword ptr [ESP + 0x90],EAX      ; 00583cc4
    MOV EAX,dword ptr [ESP + 0x140]     ; 00583ccb
    MOV dword ptr [ESP + 0x94],EAX      ; 00583cd2
    LEA EDX,[ESP + 0x70]                ; 00583cd9
        ;   Label: LAB_00583cd9
    MOV EAX,dword ptr [EBP + 0x14]      ; 00583cdd
    PUSH EDX                            ; 00583ce0
    MOV dword ptr [ESP + 0xa8],EAX      ; 00583ce1
    MOV dword ptr [ESP + 0xac],EAX      ; 00583ce8
    PUSH EBX                            ; 00583cef
    MOV EAX,dword ptr [EBX + 0x154]     ; 00583cf0
    CALL dword ptr [EAX + 0x108]        ; 00583cf6
    ADD ESP,0x8                         ; 00583cfc
    JMP 0x005839ec                      ; 00583cff
        ;   XREF to: 005839ec (UNCONDITIONAL_JUMP)  ; LAB_005839ec
    MOV ESP,EBP                         ; 00583d04
        ;   Label: LAB_00583d04
    POP EBP                             ; 00583d06
    POP EDI                             ; 00583d07
    POP ESI                             ; 00583d08
    POP EBX                             ; 00583d09
    RET                                 ; 00583d0a

