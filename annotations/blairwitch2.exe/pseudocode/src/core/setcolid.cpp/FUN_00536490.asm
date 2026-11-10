; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_setcolid_cpp_FUN_00536490(CDemonSet *param_1,float param_2,CBoundingBox3D *param_3,float *param_4,float param_5)
;
; Local Variables:
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[4]:
;   core_setcolid.cpp_CDemonSet_rayVoxelHeightQuery_FUN_00535cf0 at 00535dbe
;   core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00535e10 at 00535e57
;   core_setcolid.cpp_FUN_00535ee0 at 00535f93
;   core_setcolid.cpp_FUN_005360a0 at 00536108
;
; Called Functions:
;   core_actor.cpp_FUN_004093a0
;   core_box.cpp_CBoundingBox3D_expand_FUN_0041a590
;   core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00536990
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00536490
        ;   Label: core_setcolid.cpp_FUN_00536490
    PUSH ESI                            ; 00536491
    PUSH EDI                            ; 00536492
    PUSH EBP                            ; 00536493
    MOV EBP,ESP                         ; 00536494
    SUB ESP,0x108                       ; 00536496
    AND ESP,0xfffffff8                  ; 0053649c
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0053649f
    MOV EAX,dword ptr [EBP + 0x14]      ; 005364a2
    MOV dword ptr [EAX + 0x14d148],0xffffffff ; 005364a5
    MOV dword ptr [EAX + 0x14d14c],0xffffffff ; 005364af
    MOV EDX,dword ptr [EAX + 0x15f6a8]  ; 005364b9
    MOV dword ptr [EAX + 0x14d144],0x0  ; 005364bf
    TEST EDX,EDX                        ; 005364c9
    JL 0x00536712                       ; 005364cb
        ;   XREF to: 00536712 (CONDITIONAL_JUMP)  ; LAB_00536712
    FLD float ptr [EBP + 0x24]          ; 005364d1
    FLDZ                                ; 005364d4
    FCOMPP                              ; 005364d6
    FNSTSW AX                           ; 005364d8
    SAHF                                ; 005364da
    JNC 0x0053672a                      ; 005364db
        ;   XREF to: 0053672a (CONDITIONAL_JUMP)  ; LAB_0053672a
    FLD float ptr [EBP + 0x18]          ; 005364e1
    FLDZ                                ; 005364e4
    FCOMPP                              ; 005364e6
    FNSTSW AX                           ; 005364e8
    SAHF                                ; 005364ea
    JA 0x00536741                       ; 005364eb
        ;   XREF to: 00536741 (CONDITIONAL_JUMP)  ; LAB_00536741
    FLD float ptr [EBP + 0x24]          ; 005364f1
        ;   Label: LAB_005364f1
    MOV EAX,dword ptr [EBP + 0x24]      ; 005364f4
    FLD1                                ; 005364f7
    MOV dword ptr [ESP + 0xf4],EAX      ; 005364f9
    FCOMPP                              ; 00536500
    FNSTSW AX                           ; 00536502
    SAHF                                ; 00536504
    JNC 0x00536512                      ; 00536505
        ;   XREF to: 00536512 (CONDITIONAL_JUMP)  ; LAB_00536512
    MOV dword ptr [ESP + 0xf4],0x3f800000 ; 00536507
    MOV EAX,dword ptr [EBP + 0x20]      ; 00536512
        ;   Label: LAB_00536512
    LEA EDI,[ESP + 0x78]                ; 00536515
    LEA ESI,[ESP + 0x6c]                ; 00536519
    FLD float ptr [EAX]                 ; 0053651d
    FLD float ptr [EAX + 0x4]           ; 0053651f
    FLD float ptr [EAX + 0x8]           ; 00536522
    FXCH ST2                            ; 00536525
    FSUB float ptr [EBX]                ; 00536527
    FXCH                                ; 00536529
    FSUB float ptr [EBX + 0x4]          ; 0053652b
    FXCH ST2                            ; 0053652e
    FSUB float ptr [EBX + 0x8]          ; 00536530
    FXCH                                ; 00536533
    FSTP float ptr [ESP + 0x6c]         ; 00536535
    FXCH                                ; 00536539
    FSTP float ptr [ESP + 0x70]         ; 0053653b
    FSTP float ptr [ESP + 0x74]         ; 0053653f
    MOVSD ES:EDI,ESI                    ; 00536543
    MOVSD ES:EDI,ESI                    ; 00536544
    MOVSD ES:EDI,ESI                    ; 00536545
    FLD float ptr [ESP + 0xf4]          ; 00536546
    FLD float ptr [ESP + 0x78]          ; 0053654d
    FMUL ST1                            ; 00536551
    FLD float ptr [ESP + 0x7c]          ; 00536553
    FMUL ST2                            ; 00536557
    FLD float ptr [ESP + 0x80]          ; 00536559
    FMULP ST3                           ; 00536560
    MOV EDX,EBX                         ; 00536562
    LEA EAX,[ESP + 0x48]                ; 00536564
    LEA EDI,[ESP + 0xa8]                ; 00536568
    LEA ESI,[ESP + 0x84]                ; 0053656f
    FXCH                                ; 00536576
    FSTP float ptr [ESP + 0x84]         ; 00536578
    FSTP float ptr [ESP + 0x88]         ; 0053657f
    FSTP float ptr [ESP + 0x8c]         ; 00536586
    MOVSD ES:EDI,ESI                    ; 0053658d
    MOVSD ES:EDI,ESI                    ; 0053658e
    MOVSD ES:EDI,ESI                    ; 0053658f
    CMP EAX,EBX                         ; 00536590
    JZ 0x005365a8                       ; 00536592
        ;   XREF to: 005365a8 (CONDITIONAL_JUMP)  ; LAB_005365a8
    MOV EAX,dword ptr [EBX]             ; 00536594
    MOV dword ptr [ESP + 0x48],EAX      ; 00536596
    MOV EAX,dword ptr [EBX + 0x4]       ; 0053659a
    MOV dword ptr [ESP + 0x4c],EAX      ; 0053659d
    MOV EAX,dword ptr [EBX + 0x8]       ; 005365a1
    MOV dword ptr [ESP + 0x50],EAX      ; 005365a4
    LEA EAX,[ESP + 0x54]                ; 005365a8
        ;   Label: LAB_005365a8
    CMP EAX,EDX                         ; 005365ac
    JZ 0x005365c4                       ; 005365ae
        ;   XREF to: 005365c4 (CONDITIONAL_JUMP)  ; LAB_005365c4
    MOV EAX,dword ptr [EDX]             ; 005365b0
    MOV dword ptr [ESP + 0x54],EAX      ; 005365b2
    MOV EAX,dword ptr [EDX + 0x4]       ; 005365b6
    MOV dword ptr [ESP + 0x58],EAX      ; 005365b9
    MOV EAX,dword ptr [EDX + 0x8]       ; 005365bd
    MOV dword ptr [ESP + 0x5c],EAX      ; 005365c0
    FLD float ptr [EBX]                 ; 005365c4
        ;   Label: LAB_005365c4
    FLD float ptr [EBX + 0x4]           ; 005365c6
    FLD float ptr [EBX + 0x8]           ; 005365c9
    LEA EDI,[ESP + 0xb4]                ; 005365cc
    LEA ESI,[ESP + 0x9c]                ; 005365d3
    LEA EAX,[ESP + 0xb4]                ; 005365da
    FXCH ST2                            ; 005365e1
    FADD float ptr [ESP + 0xa8]         ; 005365e3
    FXCH                                ; 005365ea
    FADD float ptr [ESP + 0xac]         ; 005365ec
    FXCH ST2                            ; 005365f3
    FADD float ptr [ESP + 0xb0]         ; 005365f5
    PUSH EAX                            ; 005365fc
    FXCH                                ; 005365fd
    FSTP float ptr [ESP + 0xa0]         ; 005365ff
    FXCH                                ; 00536606
    FSTP float ptr [ESP + 0xa4]         ; 00536608
    LEA EAX,[ESP + 0x4c]                ; 0053660f
    FSTP float ptr [ESP + 0xa8]         ; 00536613
    PUSH EAX                            ; 0053661a
    MOVSD ES:EDI,ESI                    ; 0053661b
    MOVSD ES:EDI,ESI                    ; 0053661c
    MOVSD ES:EDI,ESI                    ; 0053661d
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041a590 ; 0053661e
        ;   XREF to: 0041a590 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041a590(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 00536623
    LEA EAX,[ESP + 0x4]                 ; 00536626
    PUSH EAX                            ; 0053662a
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0 ; 0053662b
        ;   XREF to: 00537fa0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 00536630
    MOV EAX,dword ptr [EBP + 0x14]      ; 00536633
    MOV EAX,dword ptr [EAX + 0x15f694]  ; 00536636
    MOV dword ptr [ESP + 0x4],EAX       ; 0053663c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00536640
    MOV EAX,dword ptr [EAX + 0x15f698]  ; 00536643
    MOV dword ptr [ESP + 0x8],EAX       ; 00536649
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053664d
    MOV EAX,dword ptr [EAX + 0x15f69c]  ; 00536650
    MOV dword ptr [ESP + 0xc],EAX       ; 00536656
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053665a
    MOV EAX,dword ptr [EAX + 0x15f6a0]  ; 0053665d
    MOV dword ptr [ESP + 0x10],EAX      ; 00536663
    MOV EAX,dword ptr [EBP + 0x14]      ; 00536667
    MOV EAX,dword ptr [EAX + 0x15f6a4]  ; 0053666a
    MOV dword ptr [ESP + 0x14],EAX      ; 00536670
    MOV EAX,dword ptr [EBP + 0x14]      ; 00536674
    XOR EDI,EDI                         ; 00536677
    MOV EDX,dword ptr [EAX + 0x156db8]  ; 00536679
    MOV dword ptr [ESP + 0xf8],EDI      ; 0053667f
    TEST EDX,EDX                        ; 00536686
    JLE 0x005366ef                      ; 00536688
        ;   XREF to: 005366ef (CONDITIONAL_JUMP)  ; LAB_005366ef
    ADD EAX,0x14d128                    ; 0053668a
    MOV dword ptr [ESP + 0x100],EAX     ; 0053668f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00536696
    MOV dword ptr [ESP + 0xfc],EAX      ; 00536699
    MOV ESI,dword ptr [ESP + 0xfc]      ; 005366a0
        ;   Label: LAB_005366a0
    MOV ESI,dword ptr [ESI + 0x156dbc]  ; 005366a7
    PUSH ESI                            ; 005366ad
    MOV EDI,dword ptr [EBP + 0x14]      ; 005366ae
    PUSH EDI                            ; 005366b1
    CALL core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00536990 ; 005366b2
        ;   XREF to: 00536990 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00536990(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005366b7
    TEST EAX,EAX                        ; 005366ba
    JZ 0x0053674b                       ; 005366bc
        ;   XREF to: 0053674b (CONDITIONAL_JUMP)  ; LAB_0053674b
    MOV ESI,dword ptr [ESP + 0xfc]      ; 005366c2
        ;   Label: LAB_005366c2
    MOV EDI,dword ptr [ESP + 0xf8]      ; 005366c9
    MOV EDX,dword ptr [EBP + 0x14]      ; 005366d0
    ADD ESI,0x4                         ; 005366d3
    INC EDI                             ; 005366d6
    MOV ECX,dword ptr [EDX + 0x156db8]  ; 005366d7
    MOV dword ptr [ESP + 0xfc],ESI      ; 005366dd
    MOV dword ptr [ESP + 0xf8],EDI      ; 005366e4
    CMP EDI,ECX                         ; 005366eb
    JL 0x005366a0                       ; 005366ed
        ;   XREF to: 005366a0 (CONDITIONAL_JUMP)  ; LAB_005366a0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005366ef
        ;   Label: LAB_005366ef
    MOV EBX,dword ptr [EAX + 0x14d144]  ; 005366f2
    TEST EBX,EBX                        ; 005366f8
    JZ 0x00536712                       ; 005366fa
        ;   XREF to: 00536712 (CONDITIONAL_JUMP)  ; LAB_00536712
    PUSH EBX                            ; 005366fc
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 005366fd
    CALL dword ptr [EDX + 0x4c]         ; 00536703
    ADD ESP,0x4                         ; 00536706
    MOV EDX,dword ptr [EBP + 0x14]      ; 00536709
    MOV dword ptr [EDX + 0x14d134],EAX  ; 0053670c
    MOV EAX,dword ptr [EBP + 0x24]      ; 00536712
        ;   Label: LAB_00536712
    MOV dword ptr [ESP + 0xf0],EAX      ; 00536715
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0053671c
    MOV ESP,EBP                         ; 00536723
    POP EBP                             ; 00536725
    POP EDI                             ; 00536726
    POP ESI                             ; 00536727
    POP EBX                             ; 00536728
    RET                                 ; 00536729
    XOR ECX,ECX                         ; 0053672a
        ;   Label: LAB_0053672a
    MOV dword ptr [ESP + 0xf0],ECX      ; 0053672c
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00536733
    MOV ESP,EBP                         ; 0053673a
    POP EBP                             ; 0053673c
    POP EDI                             ; 0053673d
    POP ESI                             ; 0053673e
    POP EBX                             ; 0053673f
    RET                                 ; 00536740
    XOR ECX,ECX                         ; 00536741
        ;   Label: LAB_00536741
    MOV dword ptr [EBP + 0x18],ECX      ; 00536743
    JMP 0x005364f1                      ; 00536746
        ;   XREF to: 005364f1 (UNCONDITIONAL_JUMP)  ; LAB_005364f1
    MOV dword ptr [ESP + 0x24],EAX      ; 0053674b
        ;   Label: LAB_0053674b
    MOV dword ptr [ESP + 0x28],EAX      ; 0053674f
    LEA EAX,[ESP + 0x4]                 ; 00536753
    PUSH EAX                            ; 00536757
    MOV EDX,dword ptr [ESI + 0x2b0]     ; 00536758
    PUSH ESI                            ; 0053675e
    CALL dword ptr [EDX + 0x44]         ; 0053675f
    ADD ESP,0x8                         ; 00536762
    TEST EAX,EAX                        ; 00536765
    JZ 0x005366c2                       ; 00536767
        ;   XREF to: 005366c2 (CONDITIONAL_JUMP)  ; LAB_005366c2
    LEA EDX,[ESP + 0x48]                ; 0053676d
    PUSH EDX                            ; 00536771
    PUSH EAX                            ; 00536772
    LEA EAX,[ESP + 0xc]                 ; 00536773
    PUSH EAX                            ; 00536777
    LEA EAX,[ESP + 0x38]                ; 00536778
    PUSH EAX                            ; 0053677c
    LEA EAX,[ESP + 0xb8]                ; 0053677d
    PUSH EAX                            ; 00536784
    PUSH EBX                            ; 00536785
    PUSH ESI                            ; 00536786
    CALL core_actor.cpp_FUN_004093a0    ; 00536787
        ;   XREF to: 004093a0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_004093a0()
    MOV dword ptr [ESP + 0x120],EAX     ; 0053678c
    FLD float ptr [ESP + 0x120]         ; 00536793
    ADD ESP,0x1c                        ; 0053679a
    FST float ptr [ESP]                 ; 0053679d
    FLD1                                ; 005367a0
    FCOMPP                              ; 005367a2
    FNSTSW AX                           ; 005367a4
    SAHF                                ; 005367a6
    JC 0x005366c2                       ; 005367a7
        ;   XREF to: 005366c2 (CONDITIONAL_JUMP)  ; LAB_005366c2
    FLD float ptr [ESP]                 ; 005367ad
    FMUL float ptr [ESP + 0xf4]         ; 005367b0
    FST float ptr [ESP]                 ; 005367b7
    FCOMP float ptr [EBP + 0x24]        ; 005367ba
    FNSTSW AX                           ; 005367bd
    SAHF                                ; 005367bf
    JNC 0x005366c2                      ; 005367c0
        ;   XREF to: 005366c2 (CONDITIONAL_JUMP)  ; LAB_005366c2
    FLD float ptr [ESP]                 ; 005367c6
    FCOMP float ptr [EBP + 0x18]        ; 005367c9
    FNSTSW AX                           ; 005367cc
    SAHF                                ; 005367ce
    JBE 0x005366c2                      ; 005367cf
        ;   XREF to: 005366c2 (CONDITIONAL_JUMP)  ; LAB_005366c2
    MOV EAX,dword ptr [ESP]             ; 005367d5
    MOV ECX,dword ptr [ESP + 0x100]     ; 005367d8
    MOV dword ptr [EBP + 0x24],EAX      ; 005367df
    LEA EAX,[ESP + 0x2c]                ; 005367e2
    CMP EAX,ECX                         ; 005367e6
    JZ 0x005367fe                       ; 005367e8
        ;   XREF to: 005367fe (CONDITIONAL_JUMP)  ; LAB_005367fe
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005367ea
    MOV dword ptr [ECX],EAX             ; 005367ee
    MOV EAX,dword ptr [ESP + 0x30]      ; 005367f0
    MOV dword ptr [ECX + 0x4],EAX       ; 005367f4
    MOV EAX,dword ptr [ESP + 0x34]      ; 005367f7
    MOV dword ptr [ECX + 0x8],EAX       ; 005367fb
    MOV EAX,dword ptr [EBP + 0x14]      ; 005367fe
        ;   Label: LAB_005367fe
    MOV dword ptr [EAX + 0x14d144],ESI  ; 00536801
    MOV EDX,dword ptr [EBP + 0x14]      ; 00536807
    MOV EAX,dword ptr [ESP + 0x38]      ; 0053680a
    MOV dword ptr [EDX + 0x14d148],EAX  ; 0053680e
    MOV EAX,dword ptr [ESP + 0x44]      ; 00536814
    MOV dword ptr [EDX + 0x14d14c],EAX  ; 00536818
    MOV EAX,dword ptr [EBP + 0x24]      ; 0053681e
    MOV dword ptr [ESP + 0xf4],EAX      ; 00536821
    MOV EAX,dword ptr [EBP + 0x20]      ; 00536828
    LEA EDI,[ESP + 0xe4]                ; 0053682b
    LEA ESI,[ESP + 0xcc]                ; 00536832
    FLD float ptr [EAX]                 ; 00536839
    FLD float ptr [EAX + 0x4]           ; 0053683b
    FLD float ptr [EAX + 0x8]           ; 0053683e
    FXCH ST2                            ; 00536841
    FSUB float ptr [EBX]                ; 00536843
    FXCH                                ; 00536845
    FSUB float ptr [EBX + 0x4]          ; 00536847
    FXCH ST2                            ; 0053684a
    FSUB float ptr [EBX + 0x8]          ; 0053684c
    FXCH                                ; 0053684f
    FSTP float ptr [ESP + 0xcc]         ; 00536851
    FXCH                                ; 00536858
    FSTP float ptr [ESP + 0xd0]         ; 0053685a
    FSTP float ptr [ESP + 0xd4]         ; 00536861
    MOVSD ES:EDI,ESI                    ; 00536868
    MOVSD ES:EDI,ESI                    ; 00536869
    MOVSD ES:EDI,ESI                    ; 0053686a
    FLD float ptr [ESP + 0xe4]          ; 0053686b
    FMUL float ptr [EBP + 0x24]         ; 00536872
    FLD float ptr [ESP + 0xe8]          ; 00536875
    FMUL float ptr [EBP + 0x24]         ; 0053687c
    FLD float ptr [ESP + 0xec]          ; 0053687f
    FMUL float ptr [EBP + 0x24]         ; 00536886
    LEA EDI,[ESP + 0xd8]                ; 00536889
    LEA ESI,[ESP + 0x60]                ; 00536890
    FXCH ST2                            ; 00536894
    FSTP float ptr [ESP + 0x60]         ; 00536896
    FSTP float ptr [ESP + 0x64]         ; 0053689a
    FSTP float ptr [ESP + 0x68]         ; 0053689e
    MOVSD ES:EDI,ESI                    ; 005368a2
    MOVSD ES:EDI,ESI                    ; 005368a3
    MOVSD ES:EDI,ESI                    ; 005368a4
    LEA EAX,[ESP + 0xd8]                ; 005368a5
    LEA ESI,[ESP + 0xa8]                ; 005368ac
    CMP ESI,EAX                         ; 005368b3
    JZ 0x005368e1                       ; 005368b5
        ;   XREF to: 005368e1 (CONDITIONAL_JUMP)  ; LAB_005368e1
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005368b7
    MOV dword ptr [ESP + 0xa8],EAX      ; 005368be
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005368c5
    MOV dword ptr [ESP + 0xac],EAX      ; 005368cc
    MOV EAX,dword ptr [ESP + 0xe0]      ; 005368d3
    MOV dword ptr [ESP + 0xb0],EAX      ; 005368da
    LEA EAX,[ESP + 0x48]                ; 005368e1
        ;   Label: LAB_005368e1
    MOV ESI,EBX                         ; 005368e5
    CMP EAX,EBX                         ; 005368e7
    JZ 0x005368ff                       ; 005368e9
        ;   XREF to: 005368ff (CONDITIONAL_JUMP)  ; LAB_005368ff
    MOV EAX,dword ptr [EBX]             ; 005368eb
    MOV dword ptr [ESP + 0x48],EAX      ; 005368ed
    MOV EAX,dword ptr [EBX + 0x4]       ; 005368f1
    MOV dword ptr [ESP + 0x4c],EAX      ; 005368f4
    MOV EAX,dword ptr [EBX + 0x8]       ; 005368f8
    MOV dword ptr [ESP + 0x50],EAX      ; 005368fb
    LEA EAX,[ESP + 0x54]                ; 005368ff
        ;   Label: LAB_005368ff
    CMP EAX,ESI                         ; 00536903
    JZ 0x0053691b                       ; 00536905
        ;   XREF to: 0053691b (CONDITIONAL_JUMP)  ; LAB_0053691b
    MOV EAX,dword ptr [ESI]             ; 00536907
    MOV dword ptr [ESP + 0x54],EAX      ; 00536909
    MOV EAX,dword ptr [ESI + 0x4]       ; 0053690d
    MOV dword ptr [ESP + 0x58],EAX      ; 00536910
    MOV EAX,dword ptr [ESI + 0x8]       ; 00536914
    MOV dword ptr [ESP + 0x5c],EAX      ; 00536917
    FLD float ptr [EBX]                 ; 0053691b
        ;   Label: LAB_0053691b
    FLD float ptr [EBX + 0x4]           ; 0053691d
    FLD float ptr [EBX + 0x8]           ; 00536920
    LEA EDI,[ESP + 0x90]                ; 00536923
    LEA ESI,[ESP + 0xc0]                ; 0053692a
    LEA EAX,[ESP + 0x90]                ; 00536931
    FXCH ST2                            ; 00536938
    FADD float ptr [ESP + 0xa8]         ; 0053693a
    FXCH                                ; 00536941
    FADD float ptr [ESP + 0xac]         ; 00536943
    FXCH ST2                            ; 0053694a
    FADD float ptr [ESP + 0xb0]         ; 0053694c
    PUSH EAX                            ; 00536953
    FXCH                                ; 00536954
    FSTP float ptr [ESP + 0xc4]         ; 00536956
    FXCH                                ; 0053695d
    FSTP float ptr [ESP + 0xc8]         ; 0053695f
    LEA EAX,[ESP + 0x4c]                ; 00536966
    FSTP float ptr [ESP + 0xcc]         ; 0053696a
    PUSH EAX                            ; 00536971
    MOVSD ES:EDI,ESI                    ; 00536972
    MOVSD ES:EDI,ESI                    ; 00536973
    MOVSD ES:EDI,ESI                    ; 00536974
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_0041a590 ; 00536975
        ;   XREF to: 0041a590 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_0041a590(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 0053697a
    JMP 0x005366c2                      ; 0053697d
        ;   XREF to: 005366c2 (UNCONDITIONAL_JUMP)  ; LAB_005366c2

