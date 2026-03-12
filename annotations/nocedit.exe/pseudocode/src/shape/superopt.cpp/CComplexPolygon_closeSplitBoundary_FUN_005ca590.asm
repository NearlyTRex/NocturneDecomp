; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590(CComplexPolygon *this_ptr,SExpandedEdge *edges,int *edge_count_ptr,int is_secondary)
;
; Parameters:
; CComplexPolygon * Stack[0x4]:4   this_ptr
; SExpandedEdge *  Stack[0x8]:4   edges
; int *            Stack[0xc]:4   edge_count_ptr
; int              Stack[0x10]:4   is_secondary
; Local Variables:
; undefined8       Stack[-0x330]:8  local_330
; undefined8       Stack[-0x328]:8  local_328
; undefined8       Stack[-0x320]:8  local_320
; undefined4       Stack[-0x318]:4  local_318
; undefined4       Stack[-0x314]:4  uStack_314
; undefined4       Stack[-0x310]:4  local_310
; undefined4       Stack[-0x30c]:4  uStack_30c
; undefined4       Stack[-0x308]:4  local_308
; undefined4       Stack[-0x304]:4  uStack_304
; undefined8       Stack[-0x300]:8  local_300
; undefined8       Stack[-0x2f8]:8  local_2f8
; undefined8       Stack[-0x2f0]:8  local_2f0
; undefined8       Stack[-0x2e8]:8  local_2e8
; undefined8       Stack[-0x2e0]:8  local_2e0
; double           Stack[-0x2d8]:8  local_2d8
; double           Stack[-0x2d0]:8  local_2d0
; double           Stack[-0x2c8]:8  local_2c8
; undefined4       Stack[-0x2c0]:4  local_2c0
; undefined4       Stack[-0x2bc]:4  uStack_2bc
; undefined4       Stack[-0x2b8]:4  local_2b8
; undefined4       Stack[-0x2b4]:4  uStack_2b4
; undefined4       Stack[-0x2b0]:4  local_2b0
; double           Stack[-0x2a8]:8  local_2a8
; double           Stack[-0x2a0]:8  local_2a0
; double           Stack[-0x298]:8  local_298
; double           Stack[-0x290]:8  local_290
; double           Stack[-0x288]:8  local_288
; double           Stack[-0x280]:8  local_280
; double           Stack[-0x278]:8  local_278
; double           Stack[-0x270]:8  local_270
; double           Stack[-0x268]:8  local_268
; undefined4       Stack[-0x260]:4  local_260
; undefined4       Stack[-0x25c]:4  uStack_25c
; undefined4       Stack[-0x258]:4  local_258
; undefined4       Stack[-0x254]:4  uStack_254
; undefined4       Stack[-0x250]:4  local_250
; undefined4       Stack[-0x24c]:4  uStack_24c
; undefined4       Stack[-0x248]:4  local_248
; undefined4       Stack[-0x244]:4  uStack_244
; undefined4       Stack[-0x240]:4  local_240
; undefined4       Stack[-0x23c]:4  uStack_23c
; undefined4       Stack[-0x238]:4  local_238
; undefined4       Stack[-0x234]:4  uStack_234
; double           Stack[-0x230]:8  local_230
; double           Stack[-0x228]:8  local_228
; double           Stack[-0x220]:8  local_220
; double           Stack[-0x218]:8  local_218
; double           Stack[-0x210]:8  local_210
; double           Stack[-0x208]:8  local_208
; double           Stack[-0x200]:8  local_200
; double           Stack[-0x1f8]:8  local_1f8
; double           Stack[-0x1f0]:8  local_1f0
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  uStack_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  uStack_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  uStack_1d4
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined4       Stack[-0x1cc]:4  uStack_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x1c4]:4  uStack_1c4
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined4       Stack[-0x1bc]:4  uStack_1bc
; undefined4       Stack[-0x1b8]:4  local_1b8
; undefined4       Stack[-0x1b4]:4  uStack_1b4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  uStack_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  uStack_1a4
; double           Stack[-0x1a0]:8  local_1a0
; double           Stack[-0x198]:8  local_198
; double           Stack[-0x190]:8  local_190
; double           Stack[-0x188]:8  local_188
; double           Stack[-0x180]:8  local_180
; double           Stack[-0x178]:8  local_178
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  uStack_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  uStack_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  uStack_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined4       Stack[-0x154]:4  uStack_154
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  uStack_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  uStack_144
; double           Stack[-0x140]:8  local_140
; double           Stack[-0x138]:8  local_138
; double           Stack[-0x130]:8  local_130
; double           Stack[-0x128]:8  local_128
; double           Stack[-0x120]:8  local_120
; double           Stack[-0x118]:8  local_118
; double           Stack[-0x110]:8  local_110
; double           Stack[-0x108]:8  local_108
; double           Stack[-0x100]:8  local_100
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  uStack_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  uStack_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  uStack_e4
; int              Stack[-0x28]:4  local_28
; uint *           Stack[-0x24]:4  local_24
; uint             Stack[-0x20]:4  local_20
; uint *           Stack[-0x1c]:4  local_1c
; uint *           Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[4]:
;   shape_superopt.cpp_CComplexPolygon_findBestSplitEdge_FUN_005c8e70 at 005c903c
;   shape_superopt.cpp_CComplexPolygon_findReflexVertex_FUN_005c8b50 at 005c8d1d
;   shape_superopt.cpp_CComplexPolygon_splitByDimensions_FUN_005c9500 at 005c9a18
;   shape_superopt.cpp_CComplexPolygon_splitToConvex_FUN_005c84c0 at 005c8950
;
; Referenced Globals:
;   TerminatedCString s_Uneven_number_of_edges_00654252
;   TerminatedCString s_Uneven_number_of_edges_00654269
;   TerminatedCString s_Complex_split_edge_list__00654280
;   double DOUBLE_006542c2 = 10
;   double DOUBLE_006542ca = 1.00000000000000E-7
;
; Called Functions:
;   crt_string.c_memmove_FUN_005fe5e0
;   shape_memdbg.cpp_free_FUN_005fe659
;   shape_memdbg.cpp_malloc_FUN_006021da
;   shape_superopt.cpp_logToFile_FUN_005c7910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ca590
        ;   Label: shape_superopt.cpp_CComplexPolygon_closeSplitBoundary_FUN_005ca590
    PUSH ESI                            ; 005ca591
    PUSH EDI                            ; 005ca592
    PUSH EBP                            ; 005ca593
    MOV EBP,ESP                         ; 005ca594
    SUB ESP,0x320                       ; 005ca596
    AND ESP,0xfffffff8                  ; 005ca59c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005ca59f
    MOV EAX,dword ptr [EAX]             ; 005ca5a2
    SHL EAX,0x2                         ; 005ca5a4
    XOR EDX,EDX                         ; 005ca5a7
    PUSH EAX                            ; 005ca5a9
    MOV dword ptr [ESP + 0x314],EDX     ; 005ca5aa
    CALL shape_memdbg.cpp_malloc_FUN_006021da ; 005ca5b1
        ;   XREF to: 006021da (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_malloc_FUN_006021da(SIZE_T size)
    ADD ESP,0x4                         ; 005ca5b6
    MOV dword ptr [ESP + 0x314],EAX     ; 005ca5b9
    TEST EAX,EAX                        ; 005ca5c0
    JZ 0x005cb02b                       ; 005ca5c2
        ;   XREF to: 005cb02b (CONDITIONAL_JUMP)  ; LAB_005cb02b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005ca5c8
    MOV EBX,dword ptr [EAX]             ; 005ca5cb
    XOR ECX,ECX                         ; 005ca5cd
    TEST EBX,EBX                        ; 005ca5cf
    JBE 0x005ca6a1                      ; 005ca5d1
        ;   XREF to: 005ca6a1 (CONDITIONAL_JUMP)  ; LAB_005ca6a1
    MOV EDX,dword ptr [EBP + 0x18]      ; 005ca5d7
    XOR EBX,EBX                         ; 005ca5da
    ADD EDX,0x10                        ; 005ca5dc
    IMUL EAX,ECX,0x60                   ; 005ca5df
        ;   Label: LAB_005ca5df
    ADD EAX,dword ptr [EBP + 0x18]      ; 005ca5e2
    CMP dword ptr [EAX + 0x8],0x0       ; 005ca5e5
    JZ 0x005ca5f5                       ; 005ca5e9
        ;   XREF to: 005ca5f5 (CONDITIONAL_JUMP)  ; LAB_005ca5f5
    CMP dword ptr [EAX + 0xc],0x0       ; 005ca5eb
    JNZ 0x005ca690                      ; 005ca5ef
        ;   XREF to: 005ca690 (CONDITIONAL_JUMP)  ; LAB_005ca690
    FLD double ptr [EDX + 0x18]         ; 005ca5f5
        ;   Label: LAB_005ca5f5
    FSUB double ptr [EDX]               ; 005ca5f8
    FMUL ST0                            ; 005ca5fa
    FLD double ptr [EDX + 0x20]         ; 005ca5fc
    FSUB double ptr [EDX + 0x8]         ; 005ca5ff
    FMUL ST0                            ; 005ca602
    FLD double ptr [EDX + 0x28]         ; 005ca604
    FXCH                                ; 005ca607
    FADDP ST2,ST0                       ; 005ca609
    FSUB double ptr [EDX + 0x10]        ; 005ca60b
    FMUL ST0                            ; 005ca60e
    FADDP                               ; 005ca610
    FSQRT                               ; 005ca612
    FSTP double ptr [ESP + 0x28]        ; 005ca614
    MOV EAX,dword ptr [ESP + 0x28]      ; 005ca618
    MOV dword ptr [ESP + 0x8],EAX       ; 005ca61c
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005ca620
    MOV EDI,dword ptr [ESP + 0x310]     ; 005ca624
    MOV dword ptr [ESP + 0xc],EAX       ; 005ca62b
    TEST EDI,EDI                        ; 005ca62f
    JZ 0x005cb036                       ; 005ca631
        ;   XREF to: 005cb036 (CONDITIONAL_JUMP)  ; LAB_005cb036
    FLD double ptr [ESP + 0x28]         ; 005ca637
    FCOMP double ptr [ESP + 0x20]       ; 005ca63b
    FNSTSW AX                           ; 005ca63f
    SAHF                                ; 005ca641
    JNC 0x005ca654                      ; 005ca642
        ;   XREF to: 005ca654 (CONDITIONAL_JUMP)  ; LAB_005ca654
    MOV EAX,dword ptr [ESP + 0x28]      ; 005ca644
    MOV dword ptr [ESP + 0x20],EAX      ; 005ca648
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005ca64c
    MOV dword ptr [ESP + 0x24],EAX      ; 005ca650
    FLD double ptr [ESP + 0x8]          ; 005ca654
        ;   Label: LAB_005ca654
    FCOMP double ptr [ESP + 0x18]       ; 005ca658
    FNSTSW AX                           ; 005ca65c
    SAHF                                ; 005ca65e
    JBE 0x005ca671                      ; 005ca65f
        ;   XREF to: 005ca671 (CONDITIONAL_JUMP)  ; LAB_005ca671
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ca661
    MOV dword ptr [ESP + 0x18],EAX      ; 005ca665
    MOV EAX,dword ptr [ESP + 0xc]       ; 005ca669
    MOV dword ptr [ESP + 0x1c],EAX      ; 005ca66d
        ;   Label: LAB_005ca66d
    MOV ESI,dword ptr [ESP + 0x310]     ; 005ca671
        ;   Label: LAB_005ca671
    MOV EDI,dword ptr [ESP + 0x314]     ; 005ca678
    MOV EAX,EBX                         ; 005ca67f
    INC ESI                             ; 005ca681
    ADD EAX,EDI                         ; 005ca682
    ADD EBX,0x4                         ; 005ca684
    MOV dword ptr [ESP + 0x310],ESI     ; 005ca687
    MOV dword ptr [EAX],ECX             ; 005ca68e
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005ca690
        ;   Label: LAB_005ca690
    INC ECX                             ; 005ca693
    MOV ESI,dword ptr [EAX]             ; 005ca694
    ADD EDX,0x60                        ; 005ca696
    CMP ECX,ESI                         ; 005ca699
    JC 0x005ca5df                       ; 005ca69b
        ;   XREF to: 005ca5df (CONDITIONAL_JUMP)  ; LAB_005ca5df
    CMP dword ptr [ESP + 0x310],0x0     ; 005ca6a1
        ;   Label: LAB_005ca6a1
    JZ 0x005cb057                       ; 005ca6a9
        ;   XREF to: 005cb057 (CONDITIONAL_JUMP)  ; LAB_005cb057
    TEST byte ptr [ESP + 0x310],0x1     ; 005ca6af
    JNZ 0x005cb085                      ; 005ca6b7
        ;   XREF to: 005cb085 (CONDITIONAL_JUMP)  ; LAB_005cb085
    MOV EDX,dword ptr [ESP + 0x314]     ; 005ca6bd
    MOV EDX,dword ptr [EDX]             ; 005ca6c4
    LEA EAX,[EDX*0x4 + 0x0]             ; 005ca6c6
    SUB EAX,EDX                         ; 005ca6cd
    MOV ECX,dword ptr [EBP + 0x18]      ; 005ca6cf
    SHL EAX,0x5                         ; 005ca6d2
    ADD EAX,ECX                         ; 005ca6d5
    CMP dword ptr [EAX + 0x8],0x0       ; 005ca6d7
    JZ 0x005cb0ad                       ; 005ca6db
        ;   XREF to: 005cb0ad (CONDITIONAL_JUMP)  ; LAB_005cb0ad
    MOV EDX,dword ptr [EAX + 0x28]      ; 005ca6e1
    MOV dword ptr [ESP + 0xe8],EDX      ; 005ca6e4
    MOV EDX,dword ptr [EAX + 0x2c]      ; 005ca6eb
    MOV dword ptr [ESP + 0xec],EDX      ; 005ca6ee
    MOV EDX,dword ptr [EAX + 0x30]      ; 005ca6f5
    MOV dword ptr [ESP + 0xf0],EDX      ; 005ca6f8
    MOV EDX,dword ptr [EAX + 0x34]      ; 005ca6ff
    MOV dword ptr [ESP + 0xf4],EDX      ; 005ca702
    MOV EDX,dword ptr [EAX + 0x38]      ; 005ca709
    MOV EAX,dword ptr [EAX + 0x3c]      ; 005ca70c
    MOV dword ptr [ESP + 0xf8],EDX      ; 005ca70f
        ;   Label: LAB_005ca70f
    MOV dword ptr [ESP + 0xfc],EAX      ; 005ca716
    XOR ESI,ESI                         ; 005ca71d
    MOV EAX,dword ptr [ESP + 0x310]     ; 005ca71f
    MOV dword ptr [ESP + 0x30],ESI      ; 005ca726
    MOV dword ptr [ESP + 0x34],ESI      ; 005ca72a
    CMP EAX,0x1                         ; 005ca72e
    JBE 0x005ca853                      ; 005ca731
        ;   XREF to: 005ca853 (CONDITIONAL_JUMP)  ; LAB_005ca853
    MOV EDX,dword ptr [ESP + 0x314]     ; 005ca737
    MOV EBX,dword ptr [ESP + 0x314]     ; 005ca73e
    MOV EDI,dword ptr [EBP + 0x18]      ; 005ca745
    LEA ECX,[EAX*0x4 + 0x0]             ; 005ca748
    ADD EDX,0x4                         ; 005ca74f
    ADD ECX,EBX                         ; 005ca752
    IMUL EAX,dword ptr [EDX],0x60       ; 005ca754
        ;   Label: LAB_005ca754
    ADD EAX,EDI                         ; 005ca757
    CMP dword ptr [EAX + 0x8],0x0       ; 005ca759
    JZ 0x005cb0e0                       ; 005ca75d
        ;   XREF to: 005cb0e0 (CONDITIONAL_JUMP)  ; LAB_005cb0e0
    MOV EBX,dword ptr [EAX + 0x28]      ; 005ca763
    MOV dword ptr [ESP + 0x160],EBX     ; 005ca766
    MOV EBX,dword ptr [EAX + 0x2c]      ; 005ca76d
    MOV dword ptr [ESP + 0x164],EBX     ; 005ca770
    MOV EBX,dword ptr [EAX + 0x30]      ; 005ca777
    MOV dword ptr [ESP + 0x168],EBX     ; 005ca77a
    MOV EBX,dword ptr [EAX + 0x34]      ; 005ca781
    MOV dword ptr [ESP + 0x16c],EBX     ; 005ca784
    MOV EBX,dword ptr [EAX + 0x38]      ; 005ca78b
    MOV EAX,dword ptr [EAX + 0x3c]      ; 005ca78e
    MOV dword ptr [ESP + 0x170],EBX     ; 005ca791
        ;   Label: LAB_005ca791
    MOV dword ptr [ESP + 0x174],EAX     ; 005ca798
    FLD double ptr [ESP + 0xe8]         ; 005ca79f
    FSUB double ptr [ESP + 0x160]       ; 005ca7a6
    FMUL ST0                            ; 005ca7ad
    FLD double ptr [ESP + 0xf0]         ; 005ca7af
    FSUB double ptr [ESP + 0x168]       ; 005ca7b6
    FMUL ST0                            ; 005ca7bd
    FLD double ptr [ESP + 0xf8]         ; 005ca7bf
    FXCH                                ; 005ca7c6
    FADDP ST2,ST0                       ; 005ca7c8
    FSUB double ptr [ESP + 0x170]       ; 005ca7ca
    FMUL ST0                            ; 005ca7d1
    FADDP                               ; 005ca7d3
    FSQRT                               ; 005ca7d5
    FST double ptr [ESP + 0x38]         ; 005ca7d7
    FCOMP double ptr [ESP + 0x30]       ; 005ca7db
    FNSTSW AX                           ; 005ca7df
    SAHF                                ; 005ca7e1
    JBE 0x005ca848                      ; 005ca7e2
        ;   XREF to: 005ca848 (CONDITIONAL_JUMP)  ; LAB_005ca848
    MOV EAX,dword ptr [ESP + 0x38]      ; 005ca7e4
    MOV dword ptr [ESP + 0x30],EAX      ; 005ca7e8
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005ca7ec
    MOV dword ptr [ESP + 0x34],EAX      ; 005ca7f0
    MOV EAX,dword ptr [ESP + 0x160]     ; 005ca7f4
    MOV dword ptr [ESP + 0x1d8],EAX     ; 005ca7fb
    MOV EAX,dword ptr [ESP + 0x164]     ; 005ca802
    MOV dword ptr [ESP + 0x1dc],EAX     ; 005ca809
    MOV EAX,dword ptr [ESP + 0x168]     ; 005ca810
    MOV dword ptr [ESP + 0x1e0],EAX     ; 005ca817
    MOV EAX,dword ptr [ESP + 0x16c]     ; 005ca81e
    MOV dword ptr [ESP + 0x1e4],EAX     ; 005ca825
    MOV EAX,dword ptr [ESP + 0x170]     ; 005ca82c
    MOV dword ptr [ESP + 0x1e8],EAX     ; 005ca833
    MOV EAX,dword ptr [ESP + 0x174]     ; 005ca83a
    MOV dword ptr [ESP + 0x1ec],EAX     ; 005ca841
    ADD EDX,0x4                         ; 005ca848
        ;   Label: LAB_005ca848
    CMP EDX,ECX                         ; 005ca84b
    JC 0x005ca754                       ; 005ca84d
        ;   XREF to: 005ca754 (CONDITIONAL_JUMP)  ; LAB_005ca754
    XOR EAX,EAX                         ; 005ca853
        ;   Label: LAB_005ca853
    MOV ECX,dword ptr [ESP + 0x310]     ; 005ca855
    MOV dword ptr [ESP],EAX             ; 005ca85c
    MOV dword ptr [ESP + 0x4],EAX       ; 005ca85f
    TEST ECX,ECX                        ; 005ca863
    JBE 0x005ca97e                      ; 005ca865
        ;   XREF to: 005ca97e (CONDITIONAL_JUMP)  ; LAB_005ca97e
    MOV ESI,dword ptr [ESP + 0x310]     ; 005ca86b
    MOV ECX,dword ptr [ESP + 0x314]     ; 005ca872
    SHL ESI,0x2                         ; 005ca879
    MOV EBX,dword ptr [EBP + 0x18]      ; 005ca87c
    ADD ESI,ECX                         ; 005ca87f
    IMUL EAX,dword ptr [ECX],0x60       ; 005ca881
        ;   Label: LAB_005ca881
    ADD EAX,EBX                         ; 005ca884
    CMP dword ptr [EAX + 0x8],0x0       ; 005ca886
    JZ 0x005cb113                       ; 005ca88a
        ;   XREF to: 005cb113 (CONDITIONAL_JUMP)  ; LAB_005cb113
    MOV EDX,dword ptr [EAX + 0x28]      ; 005ca890
    MOV dword ptr [ESP + 0x148],EDX     ; 005ca893
    MOV EDX,dword ptr [EAX + 0x2c]      ; 005ca89a
    MOV dword ptr [ESP + 0x14c],EDX     ; 005ca89d
    MOV EDX,dword ptr [EAX + 0x30]      ; 005ca8a4
    MOV dword ptr [ESP + 0x150],EDX     ; 005ca8a7
    MOV EDX,dword ptr [EAX + 0x34]      ; 005ca8ae
    MOV dword ptr [ESP + 0x154],EDX     ; 005ca8b1
    MOV EDX,dword ptr [EAX + 0x38]      ; 005ca8b8
    MOV EAX,dword ptr [EAX + 0x3c]      ; 005ca8bb
    MOV dword ptr [ESP + 0x158],EDX     ; 005ca8be
        ;   Label: LAB_005ca8be
    MOV dword ptr [ESP + 0x15c],EAX     ; 005ca8c5
    FLD double ptr [ESP + 0x1d8]        ; 005ca8cc
    FSUB double ptr [ESP + 0x148]       ; 005ca8d3
    FMUL ST0                            ; 005ca8da
    FLD double ptr [ESP + 0x1e0]        ; 005ca8dc
    FSUB double ptr [ESP + 0x150]       ; 005ca8e3
    FMUL ST0                            ; 005ca8ea
    FLD double ptr [ESP + 0x1e8]        ; 005ca8ec
    FXCH                                ; 005ca8f3
    FADDP ST2,ST0                       ; 005ca8f5
    FSUB double ptr [ESP + 0x158]       ; 005ca8f7
    FMUL ST0                            ; 005ca8fe
    FADDP                               ; 005ca900
    FSQRT                               ; 005ca902
    FST double ptr [ESP + 0x10]         ; 005ca904
    FCOMP double ptr [ESP]              ; 005ca908
    FNSTSW AX                           ; 005ca90b
    SAHF                                ; 005ca90d
    JBE 0x005ca973                      ; 005ca90e
        ;   XREF to: 005ca973 (CONDITIONAL_JUMP)  ; LAB_005ca973
    MOV EAX,dword ptr [ESP + 0x10]      ; 005ca910
    MOV dword ptr [ESP],EAX             ; 005ca914
    MOV EAX,dword ptr [ESP + 0x14]      ; 005ca917
    MOV dword ptr [ESP + 0x4],EAX       ; 005ca91b
    MOV EAX,dword ptr [ESP + 0x148]     ; 005ca91f
    MOV dword ptr [ESP + 0x178],EAX     ; 005ca926
    MOV EAX,dword ptr [ESP + 0x14c]     ; 005ca92d
    MOV dword ptr [ESP + 0x17c],EAX     ; 005ca934
    MOV EAX,dword ptr [ESP + 0x150]     ; 005ca93b
    MOV dword ptr [ESP + 0x180],EAX     ; 005ca942
    MOV EAX,dword ptr [ESP + 0x154]     ; 005ca949
    MOV dword ptr [ESP + 0x184],EAX     ; 005ca950
    MOV EAX,dword ptr [ESP + 0x158]     ; 005ca957
    MOV dword ptr [ESP + 0x188],EAX     ; 005ca95e
    MOV EAX,dword ptr [ESP + 0x15c]     ; 005ca965
    MOV dword ptr [ESP + 0x18c],EAX     ; 005ca96c
    ADD ECX,0x4                         ; 005ca973
        ;   Label: LAB_005ca973
    CMP ECX,ESI                         ; 005ca976
    JC 0x005ca881                       ; 005ca978
        ;   XREF to: 005ca881 (CONDITIONAL_JUMP)  ; LAB_005ca881
    FLD double ptr [ESP + 0x178]        ; 005ca97e
        ;   Label: LAB_005ca97e
    FLD double ptr [ESP + 0x180]        ; 005ca985
    FLD double ptr [ESP + 0x188]        ; 005ca98c
    MOV ECX,0x6                         ; 005ca993
    LEA EDI,[ESP + 0x190]               ; 005ca998
    LEA ESI,[ESP + 0x130]               ; 005ca99f
    FXCH ST2                            ; 005ca9a6
    FSUB double ptr [ESP + 0x1d8]       ; 005ca9a8
    FXCH                                ; 005ca9af
    FSUB double ptr [ESP + 0x1e0]       ; 005ca9b1
    FXCH ST2                            ; 005ca9b8
    FSUB double ptr [ESP + 0x1e8]       ; 005ca9ba
    FXCH                                ; 005ca9c1
    FSTP double ptr [ESP + 0x130]       ; 005ca9c3
    FXCH                                ; 005ca9ca
    FSTP double ptr [ESP + 0x138]       ; 005ca9cc
    FSTP double ptr [ESP + 0x140]       ; 005ca9d3
    MOVSD.REP ES:EDI,ESI                ; 005ca9da
    FLD double ptr [ESP + 0x198]        ; 005ca9dc
    FMUL ST0                            ; 005ca9e3
    FLD double ptr [ESP + 0x190]        ; 005ca9e5
    FMUL ST0                            ; 005ca9ec
    FADDP                               ; 005ca9ee
    FLD double ptr [ESP + 0x1a0]        ; 005ca9f0
    FMUL ST0                            ; 005ca9f7
    FADDP                               ; 005ca9f9
    FSQRT                               ; 005ca9fb
    FLD double ptr [ESP + 0x18]         ; 005ca9fd
    FMUL double ptr [0x006542c2]        ; 005caa01 | DOUBLE_006542c2
    FLD double ptr [ESP + 0x190]        ; 005caa07
    FXCH ST2                            ; 005caa0e
    FDIVP                               ; 005caa10
    FXCH                                ; 005caa12
    FMUL ST1                            ; 005caa14
    FLD double ptr [ESP + 0x198]        ; 005caa16
    FMUL ST2                            ; 005caa1d
    FLD double ptr [ESP + 0x1a0]        ; 005caa1f
    FMULP ST3                           ; 005caa26
    FLD double ptr [ESP + 0x178]        ; 005caa28
    FLD double ptr [ESP + 0x180]        ; 005caa2f
    FLD double ptr [ESP + 0x188]        ; 005caa36
    MOV ECX,0x6                         ; 005caa3d
    MOV EAX,dword ptr [ESP + 0x310]     ; 005caa42
    LEA EDI,[ESP + 0xb8]                ; 005caa49
    DEC EAX                             ; 005caa50
    LEA ESI,[ESP + 0x208]               ; 005caa51
    MOV dword ptr [ESP + 0x308],EAX     ; 005caa58
    FXCH ST4                            ; 005caa5f
    FSTP double ptr [ESP + 0x1f0]       ; 005caa61
    FXCH ST2                            ; 005caa68
    FSTP double ptr [ESP + 0x1f8]       ; 005caa6a
    FXCH ST3                            ; 005caa71
    FSTP double ptr [ESP + 0x200]       ; 005caa73
    FXCH ST2                            ; 005caa7a
    FADD double ptr [ESP + 0x1f0]       ; 005caa7c
    FXCH ST2                            ; 005caa83
    FADD double ptr [ESP + 0x1f8]       ; 005caa85
    FXCH                                ; 005caa8c
    FADD double ptr [ESP + 0x200]       ; 005caa8e
    FXCH ST2                            ; 005caa95
    FSTP double ptr [ESP + 0x208]       ; 005caa97
    FSTP double ptr [ESP + 0x210]       ; 005caa9e
    FSTP double ptr [ESP + 0x218]       ; 005caaa5
    MOVSD.REP ES:EDI,ESI                ; 005caaac
    XOR EAX,EAX                         ; 005caaae
        ;   Label: LAB_005caaae
    MOV dword ptr [ESP + 0x31c],EAX     ; 005caab0
    MOV EAX,dword ptr [ESP + 0x308]     ; 005caab7
    MOV EDX,dword ptr [ESP + 0x314]     ; 005caabe
    SHL EAX,0x2                         ; 005caac5
    LEA ECX,[EDX + EAX*0x1]             ; 005caac8
    MOV dword ptr [ESP + 0x318],ECX     ; 005caacb
    CMP EDX,ECX                         ; 005caad2
    JNC 0x005cae5a                      ; 005caad4
        ;   XREF to: 005cae5a (CONDITIONAL_JUMP)  ; LAB_005cae5a
    IMUL EBX,dword ptr [EDX],0x60       ; 005caada
        ;   Label: LAB_005caada
    MOV ESI,dword ptr [EBP + 0x18]      ; 005caadd
    MOV EDI,dword ptr [EDX + 0x4]       ; 005caae0
    ADD EBX,ESI                         ; 005caae3
    IMUL ESI,EDI,0x60                   ; 005caae5
    MOV EAX,dword ptr [EBP + 0x18]      ; 005caae8
    LEA ECX,[EBX + 0x10]                ; 005caaeb
    MOV EDI,dword ptr [EBX + 0x8]       ; 005caaee
    ADD ESI,EAX                         ; 005caaf1
    LEA EAX,[EBX + 0x28]                ; 005caaf3
    TEST EDI,EDI                        ; 005caaf6
    JZ 0x005cb146                       ; 005caaf8
        ;   XREF to: 005cb146 (CONDITIONAL_JUMP)  ; LAB_005cb146
    MOV EBX,dword ptr [EAX]             ; 005caafe
    MOV dword ptr [ESP + 0x88],EBX      ; 005cab00
    MOV EBX,dword ptr [EAX + 0x4]       ; 005cab07
    MOV dword ptr [ESP + 0x8c],EBX      ; 005cab0a
    MOV EBX,dword ptr [EAX + 0x8]       ; 005cab11
    MOV dword ptr [ESP + 0x90],EBX      ; 005cab14
    MOV EBX,dword ptr [EAX + 0xc]       ; 005cab1b
    MOV dword ptr [ESP + 0x94],EBX      ; 005cab1e
    MOV EBX,dword ptr [EAX + 0x10]      ; 005cab25
    MOV EAX,dword ptr [EAX + 0x14]      ; 005cab28
    MOV dword ptr [ESP + 0x9c],EAX      ; 005cab2b
    MOV EAX,dword ptr [ECX]             ; 005cab32
    MOV dword ptr [ESP + 0x70],EAX      ; 005cab34
    MOV EAX,dword ptr [ECX + 0x4]       ; 005cab38
    MOV dword ptr [ESP + 0x74],EAX      ; 005cab3b
    MOV EAX,dword ptr [ECX + 0x8]       ; 005cab3f
    MOV dword ptr [ESP + 0x78],EAX      ; 005cab42
    MOV EAX,dword ptr [ECX + 0xc]       ; 005cab46
    MOV dword ptr [ESP + 0x7c],EAX      ; 005cab49
    MOV EAX,dword ptr [ECX + 0x10]      ; 005cab4d
    MOV dword ptr [ESP + 0x80],EAX      ; 005cab50
    MOV EAX,dword ptr [ECX + 0x14]      ; 005cab57
    MOV dword ptr [ESP + 0x98],EBX      ; 005cab5a
    MOV dword ptr [ESP + 0x84],EAX      ; 005cab61
        ;   Label: LAB_005cab61
    LEA ECX,[ESI + 0x10]                ; 005cab68
    MOV EBX,dword ptr [ESI + 0x8]       ; 005cab6b
    LEA EAX,[ESI + 0x28]                ; 005cab6e
    TEST EBX,EBX                        ; 005cab71
    JZ 0x005cb1ae                       ; 005cab73
        ;   XREF to: 005cb1ae (CONDITIONAL_JUMP)  ; LAB_005cb1ae
    MOV EBX,dword ptr [EAX]             ; 005cab79
    MOV dword ptr [ESP + 0x58],EBX      ; 005cab7b
    MOV EBX,dword ptr [EAX + 0x4]       ; 005cab7f
    MOV dword ptr [ESP + 0x5c],EBX      ; 005cab82
    MOV EBX,dword ptr [EAX + 0x8]       ; 005cab86
    MOV dword ptr [ESP + 0x60],EBX      ; 005cab89
    MOV EBX,dword ptr [EAX + 0xc]       ; 005cab8d
    MOV dword ptr [ESP + 0x64],EBX      ; 005cab90
    MOV EBX,dword ptr [EAX + 0x10]      ; 005cab94
    MOV EAX,dword ptr [EAX + 0x14]      ; 005cab97
    MOV dword ptr [ESP + 0x6c],EAX      ; 005cab9a
    MOV EAX,dword ptr [ECX]             ; 005cab9e
    MOV dword ptr [ESP + 0x238],EAX     ; 005caba0
    MOV EAX,dword ptr [ECX + 0x4]       ; 005caba7
    MOV dword ptr [ESP + 0x23c],EAX     ; 005cabaa
    MOV EAX,dword ptr [ECX + 0x8]       ; 005cabb1
    MOV dword ptr [ESP + 0x240],EAX     ; 005cabb4
    MOV EAX,dword ptr [ECX + 0xc]       ; 005cabbb
    MOV dword ptr [ESP + 0x244],EAX     ; 005cabbe
    MOV EAX,dword ptr [ECX + 0x10]      ; 005cabc5
    MOV dword ptr [ESP + 0x248],EAX     ; 005cabc8
    MOV EAX,dword ptr [ECX + 0x14]      ; 005cabcf
    MOV dword ptr [ESP + 0x68],EBX      ; 005cabd2
    MOV dword ptr [ESP + 0x24c],EAX     ; 005cabd6
        ;   Label: LAB_005cabd6
    FLD double ptr [ESP + 0x70]         ; 005cabdd
    FLD double ptr [ESP + 0x78]         ; 005cabe1
    FLD double ptr [ESP + 0x80]         ; 005cabe5
    MOV ECX,0x6                         ; 005cabec
    LEA EDI,[ESP + 0x100]               ; 005cabf1
    LEA ESI,[ESP + 0xa0]                ; 005cabf8
    FXCH ST2                            ; 005cabff
    FSUB double ptr [ESP + 0x88]        ; 005cac01
    FXCH                                ; 005cac08
    FSUB double ptr [ESP + 0x90]        ; 005cac0a
    FXCH ST2                            ; 005cac11
    FSUB double ptr [ESP + 0x98]        ; 005cac13
    FXCH                                ; 005cac1a
    FSTP double ptr [ESP + 0xa0]        ; 005cac1c
    FXCH                                ; 005cac23
    FSTP double ptr [ESP + 0xa8]        ; 005cac25
    FSTP double ptr [ESP + 0xb0]        ; 005cac2c
    MOVSD.REP ES:EDI,ESI                ; 005cac33
    FLD double ptr [ESP + 0x108]        ; 005cac35
    FMUL ST0                            ; 005cac3c
    FLD double ptr [ESP + 0x100]        ; 005cac3e
    FMUL ST0                            ; 005cac45
    FADDP                               ; 005cac47
    FLD double ptr [ESP + 0x110]        ; 005cac49
    FMUL ST0                            ; 005cac50
    FADDP                               ; 005cac52
    FSQRT                               ; 005cac54
    FLD double ptr [ESP + 0x238]        ; 005cac56
    FLD double ptr [ESP + 0x240]        ; 005cac5d
    FLD double ptr [ESP + 0x248]        ; 005cac64
    FXCH ST2                            ; 005cac6b
    FSUB double ptr [ESP + 0x58]        ; 005cac6d
    FXCH                                ; 005cac71
    FSUB double ptr [ESP + 0x60]        ; 005cac73
    FXCH ST2                            ; 005cac77
    FSUB double ptr [ESP + 0x68]        ; 005cac79
    FXCH                                ; 005cac7d
    FSTP double ptr [ESP + 0x118]       ; 005cac7f
    FXCH                                ; 005cac86
    FSTP double ptr [ESP + 0x120]       ; 005cac88
    MOV ECX,0x6                         ; 005cac8f
    LEA EDI,[ESP + 0x1a8]               ; 005cac94
    LEA ESI,[ESP + 0x118]               ; 005cac9b
    FSTP double ptr [ESP + 0x128]       ; 005caca2
    MOVSD.REP ES:EDI,ESI                ; 005caca9
    FLD double ptr [ESP + 0x1b0]        ; 005cacab
    FMUL ST0                            ; 005cacb2
    FLD double ptr [ESP + 0x1a8]        ; 005cacb4
    FMUL ST0                            ; 005cacbb
    FADDP                               ; 005cacbd
    FLD double ptr [ESP + 0x1b8]        ; 005cacbf
    FMUL ST0                            ; 005cacc6
    FADDP                               ; 005cacc8
    FSQRT                               ; 005cacca
    FLD double ptr [ESP + 0x100]        ; 005caccc
    FXCH ST2                            ; 005cacd3
    FLD double ptr [ESP + 0x20]         ; 005cacd5
    FXCH                                ; 005cacd9
    FDIVR ST0,ST1                       ; 005cacdb
    FXCH ST3                            ; 005cacdd
    FMUL ST3                            ; 005cacdf
    FLD double ptr [ESP + 0x108]        ; 005cace1
    FMUL ST4                            ; 005cace8
    FLD double ptr [ESP + 0x110]        ; 005cacea
    FMULP ST5                           ; 005cacf1
    FLD double ptr [ESP + 0x88]         ; 005cacf3
    FXCH ST2                            ; 005cacfa
    FSTP double ptr [ESP + 0x40]        ; 005cacfc
    FXCH                                ; 005cad00
    FADD double ptr [ESP + 0x40]        ; 005cad02
    FLD double ptr [ESP + 0xb8]         ; 005cad06
    FXCH                                ; 005cad0d
    FSTP double ptr [ESP + 0x88]        ; 005cad0f
    FSUB double ptr [ESP + 0x88]        ; 005cad16
    FMUL ST0                            ; 005cad1d
    FLD double ptr [ESP + 0x90]         ; 005cad1f
    FXCH ST2                            ; 005cad26
    FSTP double ptr [ESP + 0x48]        ; 005cad28
    FXCH                                ; 005cad2c
    FADD double ptr [ESP + 0x48]        ; 005cad2e
    FLD double ptr [ESP + 0xc0]         ; 005cad32
    FXCH                                ; 005cad39
    FSTP double ptr [ESP + 0x90]        ; 005cad3b
    FSUB double ptr [ESP + 0x90]        ; 005cad42
    FMUL ST0                            ; 005cad49
    FLD double ptr [ESP + 0x98]         ; 005cad4b
    FXCH ST5                            ; 005cad52
    FSTP double ptr [ESP + 0x50]        ; 005cad54
    FXCH ST4                            ; 005cad58
    FADD double ptr [ESP + 0x50]        ; 005cad5a
    FLD double ptr [ESP + 0xc8]         ; 005cad5e
    FXCH                                ; 005cad65
    FSTP double ptr [ESP + 0x98]        ; 005cad67
    FXCH ST4                            ; 005cad6e
    FADDP                               ; 005cad70
    FXCH ST3                            ; 005cad72
    FSUB double ptr [ESP + 0x98]        ; 005cad74
    FMUL ST0                            ; 005cad7b
    FADDP ST3,ST0                       ; 005cad7d
    FXCH ST2                            ; 005cad7f
    FSQRT                               ; 005cad81
    FLD double ptr [ESP + 0x1a8]        ; 005cad83
    FXCH ST2                            ; 005cad8a
    FDIVP ST3,ST0                       ; 005cad8c
    FXCH                                ; 005cad8e
    FMUL ST2                            ; 005cad90
    FLD double ptr [ESP + 0x1b0]        ; 005cad92
    FMUL ST3                            ; 005cad99
    FLD double ptr [ESP + 0x1b8]        ; 005cad9b
    FMULP ST4                           ; 005cada2
    FLD double ptr [ESP + 0x58]         ; 005cada4
    FXCH ST2                            ; 005cada8
    FSTP double ptr [ESP + 0x220]       ; 005cadaa
    FXCH                                ; 005cadb1
    FADD double ptr [ESP + 0x220]       ; 005cadb3
    FLD double ptr [ESP + 0xb8]         ; 005cadba
    FXCH                                ; 005cadc1
    FSTP double ptr [ESP + 0x58]        ; 005cadc3
    FSUB double ptr [ESP + 0x58]        ; 005cadc7
    FMUL ST0                            ; 005cadcb
    FLD double ptr [ESP + 0x60]         ; 005cadcd
    FXCH ST2                            ; 005cadd1
    FSTP double ptr [ESP + 0x228]       ; 005cadd3
    FXCH                                ; 005cadda
    FADD double ptr [ESP + 0x228]       ; 005caddc
    FLD double ptr [ESP + 0xc0]         ; 005cade3
    FXCH                                ; 005cadea
    FSTP double ptr [ESP + 0x60]        ; 005cadec
    FSUB double ptr [ESP + 0x60]        ; 005cadf0
    FMUL ST0                            ; 005cadf4
    FLD double ptr [ESP + 0x68]         ; 005cadf6
    FXCH ST4                            ; 005cadfa
    FSTP double ptr [ESP + 0x230]       ; 005cadfc
    FXCH ST3                            ; 005cae03
    FADD double ptr [ESP + 0x230]       ; 005cae05
    FLD double ptr [ESP + 0xc8]         ; 005cae0c
    FXCH                                ; 005cae13
    FSTP double ptr [ESP + 0x68]        ; 005cae15
    FXCH ST3                            ; 005cae19
    FADDP                               ; 005cae1b
    FXCH ST2                            ; 005cae1d
    FSUB double ptr [ESP + 0x68]        ; 005cae1f
    FMUL ST0                            ; 005cae23
    FADDP ST2,ST0                       ; 005cae25
    FXCH                                ; 005cae27
    FSQRT                               ; 005cae29
    FCOMPP                              ; 005cae2b
    FNSTSW AX                           ; 005cae2d
    SAHF                                ; 005cae2f
    JNC 0x005cae48                      ; 005cae30
        ;   XREF to: 005cae48 (CONDITIONAL_JUMP)  ; LAB_005cae48
    MOV ESI,0x1                         ; 005cae32
    MOV ECX,dword ptr [EDX + 0x4]       ; 005cae37
    MOV EAX,dword ptr [EDX]             ; 005cae3a
    MOV dword ptr [EDX],ECX             ; 005cae3c
    MOV dword ptr [ESP + 0x31c],ESI     ; 005cae3e
    MOV dword ptr [EDX + 0x4],EAX       ; 005cae45
    MOV EBX,dword ptr [ESP + 0x318]     ; 005cae48
        ;   Label: LAB_005cae48
    ADD EDX,0x4                         ; 005cae4f
    CMP EDX,EBX                         ; 005cae52
    JC 0x005caada                       ; 005cae54
        ;   XREF to: 005caada (CONDITIONAL_JUMP)  ; LAB_005caada
    CMP dword ptr [ESP + 0x31c],0x0     ; 005cae5a
        ;   Label: LAB_005cae5a
    JNZ 0x005caaae                      ; 005cae62
        ;   XREF to: 005caaae (CONDITIONAL_JUMP)  ; LAB_005caaae
    MOV EDX,dword ptr [ESP + 0x314]     ; 005cae68
    MOV EDX,dword ptr [EDX]             ; 005cae6f
    LEA EAX,[EDX*0x4 + 0x0]             ; 005cae71
    SUB EAX,EDX                         ; 005cae78
    MOV EDI,dword ptr [EBP + 0x18]      ; 005cae7a
    SHL EAX,0x5                         ; 005cae7d
    ADD EAX,EDI                         ; 005cae80
    CMP dword ptr [EAX + 0xc],0x0       ; 005cae82
    JZ 0x005caed0                       ; 005cae86
        ;   XREF to: 005caed0 (CONDITIONAL_JUMP)  ; LAB_005caed0
    MOV EBX,dword ptr [ESP + 0x310]     ; 005cae88
    MOV EAX,dword ptr [ESP + 0x310]     ; 005cae8f
    MOV ESI,dword ptr [ESP + 0x314]     ; 005cae96
    MOV ECX,dword ptr [ESP + 0x314]     ; 005cae9d
    SHR EBX,0x1                         ; 005caea4
    DEC EAX                             ; 005caea6
    SHL EBX,0x2                         ; 005caea7
    SHL EAX,0x2                         ; 005caeaa
    ADD EBX,ECX                         ; 005caead
    ADD ESI,EAX                         ; 005caeaf
    CMP EBX,ECX                         ; 005caeb1
    JBE 0x005caed0                      ; 005caeb3
        ;   XREF to: 005caed0 (CONDITIONAL_JUMP)  ; LAB_005caed0
    MOV EDX,dword ptr [ESI]             ; 005caeb5
        ;   Label: LAB_005caeb5
    SUB ESI,0x4                         ; 005caeb7
    MOV EAX,dword ptr [ECX]             ; 005caeba
    MOV dword ptr [ECX],EDX             ; 005caebc
    ADD ECX,0x4                         ; 005caebe
    MOV dword ptr [ESI + 0x4],EAX       ; 005caec1
    CMP ECX,EBX                         ; 005caec4
    JC 0x005caeb5                       ; 005caec6
        ;   XREF to: 005caeb5 (CONDITIONAL_JUMP)  ; LAB_005caeb5
    LEA EAX,[EAX]                       ; 005caec8
    MOV EDX,EDX                         ; 005caece
    MOV EDX,dword ptr [ESP + 0x314]     ; 005caed0
        ;   Label: LAB_005caed0
    MOV EDX,dword ptr [EDX]             ; 005caed7
    LEA EAX,[EDX*0x4 + 0x0]             ; 005caed9
    SUB EAX,EDX                         ; 005caee0
    MOV EDI,dword ptr [EBP + 0x18]      ; 005caee2
    SHL EAX,0x5                         ; 005caee5
    ADD EAX,EDI                         ; 005caee8
    CMP dword ptr [EAX + 0xc],0x0       ; 005caeea
    JNZ 0x005cb210                      ; 005caeee
        ;   XREF to: 005cb210 (CONDITIONAL_JUMP)  ; LAB_005cb210
    MOV ECX,dword ptr [ESP + 0x310]     ; 005caef4
    TEST ECX,ECX                        ; 005caefb
    JBE 0x005cb00d                      ; 005caefd
        ;   XREF to: 005cb00d (CONDITIONAL_JUMP)  ; LAB_005cb00d
    MOV ESI,dword ptr [ESP + 0x314]     ; 005caf03
    LEA EAX,[ECX*0x4 + 0x0]             ; 005caf0a
    LEA EDX,[ESI + EAX*0x1]             ; 005caf11
    MOV dword ptr [ESP + 0x30c],EDX     ; 005caf14
    IMUL EAX,dword ptr [ESI],0x60       ; 005caf1b
        ;   Label: LAB_005caf1b
    ADD EAX,dword ptr [EBP + 0x18]      ; 005caf1e
    CMP dword ptr [EAX + 0x8],0x0       ; 005caf21
    JZ 0x005cb238                       ; 005caf25
        ;   XREF to: 005cb238 (CONDITIONAL_JUMP)  ; LAB_005cb238
    MOV EDX,dword ptr [EAX + 0x28]      ; 005caf2b
    MOV dword ptr [ESP + 0xd0],EDX      ; 005caf2e
    MOV EDX,dword ptr [EAX + 0x2c]      ; 005caf35
    MOV dword ptr [ESP + 0xd4],EDX      ; 005caf38
    MOV EDX,dword ptr [EAX + 0x30]      ; 005caf3f
    MOV dword ptr [ESP + 0xd8],EDX      ; 005caf42
    MOV EDX,dword ptr [EAX + 0x34]      ; 005caf49
    MOV dword ptr [ESP + 0xdc],EDX      ; 005caf4c
    MOV EDX,dword ptr [EAX + 0x38]      ; 005caf53
    MOV EAX,dword ptr [EAX + 0x3c]      ; 005caf56
    MOV dword ptr [ESP + 0xe0],EDX      ; 005caf59
        ;   Label: LAB_005caf59
    MOV dword ptr [ESP + 0xe4],EAX      ; 005caf60
    IMUL EAX,dword ptr [ESI + 0x4],0x60 ; 005caf67
    ADD EAX,dword ptr [EBP + 0x18]      ; 005caf6b
    CMP dword ptr [EAX + 0x8],0x0       ; 005caf6e
    JZ 0x005cb26b                       ; 005caf72
        ;   XREF to: 005cb26b (CONDITIONAL_JUMP)  ; LAB_005cb26b
    MOV EDX,dword ptr [EAX + 0x28]      ; 005caf78
    MOV dword ptr [ESP + 0x1c0],EDX     ; 005caf7b
    MOV EDX,dword ptr [EAX + 0x2c]      ; 005caf82
    MOV dword ptr [ESP + 0x1c4],EDX     ; 005caf85
    MOV EDX,dword ptr [EAX + 0x30]      ; 005caf8c
    MOV dword ptr [ESP + 0x1c8],EDX     ; 005caf8f
    MOV EDX,dword ptr [EAX + 0x34]      ; 005caf96
    MOV dword ptr [ESP + 0x1cc],EDX     ; 005caf99
    MOV EDX,dword ptr [EAX + 0x38]      ; 005cafa0
    MOV EAX,dword ptr [EAX + 0x3c]      ; 005cafa3
    MOV dword ptr [ESP + 0x1d0],EDX     ; 005cafa6
        ;   Label: LAB_005cafa6
    MOV dword ptr [ESP + 0x1d4],EAX     ; 005cafad
    FLD double ptr [ESP + 0x1c0]        ; 005cafb4
    FSUB double ptr [ESP + 0xd0]        ; 005cafbb
    FMUL ST0                            ; 005cafc2
    FLD double ptr [ESP + 0x1c8]        ; 005cafc4
    FSUB double ptr [ESP + 0xd8]        ; 005cafcb
    FMUL ST0                            ; 005cafd2
    FLD double ptr [ESP + 0x1d0]        ; 005cafd4
    FXCH                                ; 005cafdb
    FADDP ST2,ST0                       ; 005cafdd
    FSUB double ptr [ESP + 0xe0]        ; 005cafdf
    FMUL ST0                            ; 005cafe6
    FADDP                               ; 005cafe8
    FSQRT                               ; 005cafea
    FCOMP double ptr [0x006542ca]       ; 005cafec | DOUBLE_006542ca
    FNSTSW AX                           ; 005caff2
    SAHF                                ; 005caff4
    JNC 0x005cb29e                      ; 005caff5
        ;   XREF to: 005cb29e (CONDITIONAL_JUMP)  ; LAB_005cb29e
    MOV EDI,dword ptr [ESP + 0x30c]     ; 005caffb
        ;   Label: LAB_005caffb
    ADD ESI,0x8                         ; 005cb002
    CMP ESI,EDI                         ; 005cb005
    JC 0x005caf1b                       ; 005cb007
        ;   XREF to: 005caf1b (CONDITIONAL_JUMP)  ; LAB_005caf1b
    MOV EAX,dword ptr [ESP + 0x314]     ; 005cb00d
        ;   Label: LAB_005cb00d
    PUSH EAX                            ; 005cb014
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005cb015
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    MOV EDX,0x1                         ; 005cb01a
    ADD ESP,0x4                         ; 005cb01f
    MOV EAX,EDX                         ; 005cb022
    MOV ESP,EBP                         ; 005cb024
    POP EBP                             ; 005cb026
    POP EDI                             ; 005cb027
    POP ESI                             ; 005cb028
    POP EBX                             ; 005cb029
    RET                                 ; 005cb02a
    XOR EDX,EDX                         ; 005cb02b
        ;   Label: LAB_005cb02b
    MOV EAX,EDX                         ; 005cb02d
    MOV ESP,EBP                         ; 005cb02f
    POP EBP                             ; 005cb031
    POP EDI                             ; 005cb032
    POP ESI                             ; 005cb033
    POP EBX                             ; 005cb034
    RET                                 ; 005cb035
    MOV EAX,dword ptr [ESP + 0x28]      ; 005cb036
        ;   Label: LAB_005cb036
    MOV dword ptr [ESP + 0x20],EAX      ; 005cb03a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005cb03e
    MOV dword ptr [ESP + 0x24],EAX      ; 005cb042
    MOV EAX,dword ptr [ESP + 0x28]      ; 005cb046
    MOV dword ptr [ESP + 0x18],EAX      ; 005cb04a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005cb04e
    JMP 0x005ca66d                      ; 005cb052
        ;   XREF to: 005ca66d (UNCONDITIONAL_JUMP)  ; LAB_005ca66d
    CMP dword ptr [EBP + 0x20],0x0      ; 005cb057
        ;   Label: LAB_005cb057
    JNZ 0x005cb06a                      ; 005cb05b
        ;   XREF to: 005cb06a (CONDITIONAL_JUMP)  ; LAB_005cb06a
    PUSH 0x654252                       ; 005cb05d | = "Uneven number of edges"
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005cb062
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
    ADD ESP,0x4                         ; 005cb067
    MOV EDX,dword ptr [ESP + 0x314]     ; 005cb06a
        ;   Label: LAB_005cb06a
    PUSH EDX                            ; 005cb071
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005cb072
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005cb077
    XOR EDX,EDX                         ; 005cb07a
    MOV EAX,EDX                         ; 005cb07c
    MOV ESP,EBP                         ; 005cb07e
    POP EBP                             ; 005cb080
    POP EDI                             ; 005cb081
    POP ESI                             ; 005cb082
    POP EBX                             ; 005cb083
    RET                                 ; 005cb084
    PUSH 0x654269                       ; 005cb085 | = "Uneven number of edges"
        ;   Label: LAB_005cb085
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005cb08a
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
    ADD ESP,0x4                         ; 005cb08f
    MOV EDX,dword ptr [ESP + 0x314]     ; 005cb092
    PUSH EDX                            ; 005cb099
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005cb09a
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005cb09f
    XOR EDX,EDX                         ; 005cb0a2
    MOV EAX,EDX                         ; 005cb0a4
    MOV ESP,EBP                         ; 005cb0a6
    POP EBP                             ; 005cb0a8
    POP EDI                             ; 005cb0a9
    POP ESI                             ; 005cb0aa
    POP EBX                             ; 005cb0ab
    RET                                 ; 005cb0ac
    MOV EDX,dword ptr [EAX + 0x10]      ; 005cb0ad
        ;   Label: LAB_005cb0ad
    MOV dword ptr [ESP + 0xe8],EDX      ; 005cb0b0
    MOV EDX,dword ptr [EAX + 0x14]      ; 005cb0b7
    MOV dword ptr [ESP + 0xec],EDX      ; 005cb0ba
    MOV EDX,dword ptr [EAX + 0x18]      ; 005cb0c1
    MOV dword ptr [ESP + 0xf0],EDX      ; 005cb0c4
    MOV EDX,dword ptr [EAX + 0x1c]      ; 005cb0cb
    MOV dword ptr [ESP + 0xf4],EDX      ; 005cb0ce
    MOV EDX,dword ptr [EAX + 0x20]      ; 005cb0d5
    MOV EAX,dword ptr [EAX + 0x24]      ; 005cb0d8
    JMP 0x005ca70f                      ; 005cb0db
        ;   XREF to: 005ca70f (UNCONDITIONAL_JUMP)  ; LAB_005ca70f
    MOV EBX,dword ptr [EAX + 0x10]      ; 005cb0e0
        ;   Label: LAB_005cb0e0
    MOV dword ptr [ESP + 0x160],EBX     ; 005cb0e3
    MOV EBX,dword ptr [EAX + 0x14]      ; 005cb0ea
    MOV dword ptr [ESP + 0x164],EBX     ; 005cb0ed
    MOV EBX,dword ptr [EAX + 0x18]      ; 005cb0f4
    MOV dword ptr [ESP + 0x168],EBX     ; 005cb0f7
    MOV EBX,dword ptr [EAX + 0x1c]      ; 005cb0fe
    MOV dword ptr [ESP + 0x16c],EBX     ; 005cb101
    MOV EBX,dword ptr [EAX + 0x20]      ; 005cb108
    MOV EAX,dword ptr [EAX + 0x24]      ; 005cb10b
    JMP 0x005ca791                      ; 005cb10e
        ;   XREF to: 005ca791 (UNCONDITIONAL_JUMP)  ; LAB_005ca791
    MOV EDX,dword ptr [EAX + 0x10]      ; 005cb113
        ;   Label: LAB_005cb113
    MOV dword ptr [ESP + 0x148],EDX     ; 005cb116
    MOV EDX,dword ptr [EAX + 0x14]      ; 005cb11d
    MOV dword ptr [ESP + 0x14c],EDX     ; 005cb120
    MOV EDX,dword ptr [EAX + 0x18]      ; 005cb127
    MOV dword ptr [ESP + 0x150],EDX     ; 005cb12a
    MOV EDX,dword ptr [EAX + 0x1c]      ; 005cb131
    MOV dword ptr [ESP + 0x154],EDX     ; 005cb134
    MOV EDX,dword ptr [EAX + 0x20]      ; 005cb13b
    MOV EAX,dword ptr [EAX + 0x24]      ; 005cb13e
    JMP 0x005ca8be                      ; 005cb141
        ;   XREF to: 005ca8be (UNCONDITIONAL_JUMP)  ; LAB_005ca8be
    MOV EBX,dword ptr [ECX]             ; 005cb146
        ;   Label: LAB_005cb146
    MOV dword ptr [ESP + 0x88],EBX      ; 005cb148
    MOV EBX,dword ptr [ECX + 0x4]       ; 005cb14f
    MOV dword ptr [ESP + 0x8c],EBX      ; 005cb152
    MOV EBX,dword ptr [ECX + 0x8]       ; 005cb159
    MOV dword ptr [ESP + 0x90],EBX      ; 005cb15c
    MOV EBX,dword ptr [ECX + 0xc]       ; 005cb163
    MOV dword ptr [ESP + 0x94],EBX      ; 005cb166
    MOV EBX,dword ptr [ECX + 0x10]      ; 005cb16d
    MOV ECX,dword ptr [ECX + 0x14]      ; 005cb170
    MOV dword ptr [ESP + 0x9c],ECX      ; 005cb173
    MOV ECX,dword ptr [EAX]             ; 005cb17a
    MOV dword ptr [ESP + 0x70],ECX      ; 005cb17c
    MOV ECX,dword ptr [EAX + 0x4]       ; 005cb180
    MOV dword ptr [ESP + 0x74],ECX      ; 005cb183
    MOV ECX,dword ptr [EAX + 0x8]       ; 005cb187
    MOV dword ptr [ESP + 0x78],ECX      ; 005cb18a
    MOV ECX,dword ptr [EAX + 0xc]       ; 005cb18e
    MOV dword ptr [ESP + 0x98],EBX      ; 005cb191
    MOV dword ptr [ESP + 0x7c],ECX      ; 005cb198
    MOV ECX,dword ptr [EAX + 0x10]      ; 005cb19c
    MOV EAX,dword ptr [EAX + 0x14]      ; 005cb19f
    MOV dword ptr [ESP + 0x80],ECX      ; 005cb1a2
    JMP 0x005cab61                      ; 005cb1a9
        ;   XREF to: 005cab61 (UNCONDITIONAL_JUMP)  ; LAB_005cab61
    MOV EBX,dword ptr [ECX]             ; 005cb1ae
        ;   Label: LAB_005cb1ae
    MOV dword ptr [ESP + 0x58],EBX      ; 005cb1b0
    MOV EBX,dword ptr [ECX + 0x4]       ; 005cb1b4
    MOV dword ptr [ESP + 0x5c],EBX      ; 005cb1b7
    MOV EBX,dword ptr [ECX + 0x8]       ; 005cb1bb
    MOV dword ptr [ESP + 0x60],EBX      ; 005cb1be
    MOV EBX,dword ptr [ECX + 0xc]       ; 005cb1c2
    MOV dword ptr [ESP + 0x64],EBX      ; 005cb1c5
    MOV EBX,dword ptr [ECX + 0x10]      ; 005cb1c9
    MOV ECX,dword ptr [ECX + 0x14]      ; 005cb1cc
    MOV dword ptr [ESP + 0x6c],ECX      ; 005cb1cf
    MOV ECX,dword ptr [EAX]             ; 005cb1d3
    MOV dword ptr [ESP + 0x238],ECX     ; 005cb1d5
    MOV ECX,dword ptr [EAX + 0x4]       ; 005cb1dc
    MOV dword ptr [ESP + 0x23c],ECX     ; 005cb1df
    MOV ECX,dword ptr [EAX + 0x8]       ; 005cb1e6
    MOV dword ptr [ESP + 0x240],ECX     ; 005cb1e9
    MOV ECX,dword ptr [EAX + 0xc]       ; 005cb1f0
    MOV dword ptr [ESP + 0x68],EBX      ; 005cb1f3
    MOV dword ptr [ESP + 0x244],ECX     ; 005cb1f7
    MOV ECX,dword ptr [EAX + 0x10]      ; 005cb1fe
    MOV EAX,dword ptr [EAX + 0x14]      ; 005cb201
    MOV dword ptr [ESP + 0x248],ECX     ; 005cb204
    JMP 0x005cabd6                      ; 005cb20b
        ;   XREF to: 005cabd6 (UNCONDITIONAL_JUMP)  ; LAB_005cabd6
    PUSH 0x654280                       ; 005cb210 | = "Complex (split) edge list does not ha..."
        ;   Label: LAB_005cb210
    CALL shape_superopt.cpp_logToFile_FUN_005c7910 ; 005cb215
        ;   XREF to: 005c7910 (UNCONDITIONAL_CALL)  ; void shape_superopt.cpp_logToFile_FUN_005c7910(char * format)
    ADD ESP,0x4                         ; 005cb21a
    MOV EBX,dword ptr [ESP + 0x314]     ; 005cb21d
    PUSH EBX                            ; 005cb224
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 005cb225
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 005cb22a
    XOR EDX,EDX                         ; 005cb22d
    MOV EAX,EDX                         ; 005cb22f
    MOV ESP,EBP                         ; 005cb231
    POP EBP                             ; 005cb233
    POP EDI                             ; 005cb234
    POP ESI                             ; 005cb235
    POP EBX                             ; 005cb236
    RET                                 ; 005cb237
    MOV EDX,dword ptr [EAX + 0x10]      ; 005cb238
        ;   Label: LAB_005cb238
    MOV dword ptr [ESP + 0xd0],EDX      ; 005cb23b
    MOV EDX,dword ptr [EAX + 0x14]      ; 005cb242
    MOV dword ptr [ESP + 0xd4],EDX      ; 005cb245
    MOV EDX,dword ptr [EAX + 0x18]      ; 005cb24c
    MOV dword ptr [ESP + 0xd8],EDX      ; 005cb24f
    MOV EDX,dword ptr [EAX + 0x1c]      ; 005cb256
    MOV dword ptr [ESP + 0xdc],EDX      ; 005cb259
    MOV EDX,dword ptr [EAX + 0x20]      ; 005cb260
    MOV EAX,dword ptr [EAX + 0x24]      ; 005cb263
    JMP 0x005caf59                      ; 005cb266
        ;   XREF to: 005caf59 (UNCONDITIONAL_JUMP)  ; LAB_005caf59
    MOV EDX,dword ptr [EAX + 0x10]      ; 005cb26b
        ;   Label: LAB_005cb26b
    MOV dword ptr [ESP + 0x1c0],EDX     ; 005cb26e
    MOV EDX,dword ptr [EAX + 0x14]      ; 005cb275
    MOV dword ptr [ESP + 0x1c4],EDX     ; 005cb278
    MOV EDX,dword ptr [EAX + 0x18]      ; 005cb27f
    MOV dword ptr [ESP + 0x1c8],EDX     ; 005cb282
    MOV EDX,dword ptr [EAX + 0x1c]      ; 005cb289
    MOV dword ptr [ESP + 0x1cc],EDX     ; 005cb28c
    MOV EDX,dword ptr [EAX + 0x20]      ; 005cb293
    MOV EAX,dword ptr [EAX + 0x24]      ; 005cb296
    JMP 0x005cafa6                      ; 005cb299
        ;   XREF to: 005cafa6 (UNCONDITIONAL_JUMP)  ; LAB_005cafa6
    MOV EDI,dword ptr [ESI]             ; 005cb29e
        ;   Label: LAB_005cb29e
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005cb2a0
    LEA EBX,[EDI + 0x1]                 ; 005cb2a3
    MOV EAX,dword ptr [EAX]             ; 005cb2a6
    SUB EAX,EBX                         ; 005cb2a8
    IMUL EAX,EAX,0x60                   ; 005cb2aa
    PUSH EAX                            ; 005cb2ad
    IMUL EAX,EBX,0x60                   ; 005cb2ae
    MOV ECX,dword ptr [EBP + 0x18]      ; 005cb2b1
    ADD EAX,ECX                         ; 005cb2b4
    LEA EDX,[EDI + 0x2]                 ; 005cb2b6
    PUSH EAX                            ; 005cb2b9
    IMUL EAX,EDX,0x60                   ; 005cb2ba
    ADD EAX,ECX                         ; 005cb2bd
    PUSH EAX                            ; 005cb2bf
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005cb2c0
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005cb2c5
    MOV ECX,dword ptr [ESP + 0x310]     ; 005cb2c8
    TEST ECX,ECX                        ; 005cb2cf
    JBE 0x005cb2f3                      ; 005cb2d1
        ;   XREF to: 005cb2f3 (CONDITIONAL_JUMP)  ; LAB_005cb2f3
    MOV EAX,dword ptr [ESP + 0x314]     ; 005cb2d3
    LEA EDX,[ECX*0x4 + 0x0]             ; 005cb2da
    ADD EDX,EAX                         ; 005cb2e1
    MOV ECX,dword ptr [EAX]             ; 005cb2e3
        ;   Label: LAB_005cb2e3
    CMP EBX,ECX                         ; 005cb2e5
    JA 0x005cb2ec                       ; 005cb2e7
        ;   XREF to: 005cb2ec (CONDITIONAL_JUMP)  ; LAB_005cb2ec
    INC ECX                             ; 005cb2e9
    MOV dword ptr [EAX],ECX             ; 005cb2ea
    ADD EAX,0x4                         ; 005cb2ec
        ;   Label: LAB_005cb2ec
    CMP EAX,EDX                         ; 005cb2ef
    JC 0x005cb2e3                       ; 005cb2f1
        ;   XREF to: 005cb2e3 (CONDITIONAL_JUMP)  ; LAB_005cb2e3
    IMUL EDI,EDI,0x60                   ; 005cb2f3
        ;   Label: LAB_005cb2f3
    ADD EDI,dword ptr [EBP + 0x18]      ; 005cb2f6
    IMUL EAX,EBX,0x60                   ; 005cb2f9
    ADD EAX,dword ptr [EBP + 0x18]      ; 005cb2fc
    LEA EDX,[EDI + 0x28]                ; 005cb2ff
    LEA ECX,[EAX + 0x10]                ; 005cb302
    MOV EBX,dword ptr [EDX]             ; 005cb305
    MOV dword ptr [ECX],EBX             ; 005cb307
    MOV EBX,dword ptr [EDX + 0x4]       ; 005cb309
    MOV dword ptr [ECX + 0x4],EBX       ; 005cb30c
    MOV EBX,dword ptr [EDX + 0x8]       ; 005cb30f
    MOV dword ptr [ECX + 0x8],EBX       ; 005cb312
    MOV EBX,dword ptr [EDX + 0xc]       ; 005cb315
    MOV dword ptr [ECX + 0xc],EBX       ; 005cb318
    MOV EBX,dword ptr [EDX + 0x10]      ; 005cb31b
    MOV dword ptr [ECX + 0x10],EBX      ; 005cb31e
    MOV EBX,dword ptr [EDX + 0x14]      ; 005cb321
    MOV dword ptr [ECX + 0x14],EBX      ; 005cb324
    LEA EDX,[EAX + 0x40]                ; 005cb327
    MOV ECX,dword ptr [EDI + 0x50]      ; 005cb32a
    MOV dword ptr [EDX],ECX             ; 005cb32d
    MOV ECX,dword ptr [EDI + 0x54]      ; 005cb32f
    MOV dword ptr [EDX + 0x4],ECX       ; 005cb332
    MOV ECX,dword ptr [EDI + 0x58]      ; 005cb335
    MOV dword ptr [EDX + 0x8],ECX       ; 005cb338
    MOV ECX,dword ptr [EDI + 0x5c]      ; 005cb33b
    MOV dword ptr [EDX + 0xc],ECX       ; 005cb33e
    IMUL EDX,dword ptr [ESI + 0x4],0x60 ; 005cb341
    MOV EBX,dword ptr [EBP + 0x18]      ; 005cb345
    ADD EDX,EBX                         ; 005cb348
    LEA ECX,[EAX + 0x28]                ; 005cb34a
    MOV EDI,dword ptr [EDX + 0x10]      ; 005cb34d
    MOV dword ptr [ECX],EDI             ; 005cb350
    MOV EDI,dword ptr [EDX + 0x14]      ; 005cb352
    MOV dword ptr [ECX + 0x4],EDI       ; 005cb355
    MOV EDI,dword ptr [EDX + 0x18]      ; 005cb358
    MOV dword ptr [ECX + 0x8],EDI       ; 005cb35b
    MOV EDI,dword ptr [EDX + 0x1c]      ; 005cb35e
    MOV dword ptr [ECX + 0xc],EDI       ; 005cb361
    MOV EDI,dword ptr [EDX + 0x20]      ; 005cb364
    MOV dword ptr [ECX + 0x10],EDI      ; 005cb367
    MOV EDI,dword ptr [EDX + 0x24]      ; 005cb36a
    MOV dword ptr [ECX + 0x14],EDI      ; 005cb36d
    IMUL ECX,dword ptr [ESI + 0x4],0x60 ; 005cb370
    LEA EDX,[EAX + 0x50]                ; 005cb374
    ADD ECX,EBX                         ; 005cb377
    LEA EAX,[ECX + 0x40]                ; 005cb379
    MOV ECX,dword ptr [EAX]             ; 005cb37c
    MOV dword ptr [EDX],ECX             ; 005cb37e
    MOV ECX,dword ptr [EAX + 0x4]       ; 005cb380
    MOV dword ptr [EDX + 0x4],ECX       ; 005cb383
    FLD double ptr [EAX + 0x8]          ; 005cb386
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005cb389
    FSTP double ptr [EDX + 0x8]         ; 005cb38c
    INC dword ptr [EAX]                 ; 005cb38f
    JMP 0x005caffb                      ; 005cb391
        ;   XREF to: 005caffb (UNCONDITIONAL_JUMP)  ; LAB_005caffb

