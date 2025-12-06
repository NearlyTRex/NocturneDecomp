; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint shape_cramtex.cpp_performGapFillingOptimization_FUN_00447590(void)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   SCramWorkingEntry[1] g_CramSortedTextureEntries
;   undefined4 DAT_0083c20c
;   undefined4 DAT_0083c210
;   undefined4 DAT_0083c214
;   undefined4 DAT_0083c218
;   undefined4 DAT_0083c228
;   undefined4 DAT_0083c260
;   undefined4 DAT_0083c264
;   uint g_CramTextureCount
;   int g_CramCurrentAcceptableSize
;   int g_CramFillGaps
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;   shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0
;   shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10
;   shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930
;   shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0
;
; *****************************************************************************

section .text

    PUSH 0x2c                           ; 00447590
        ;   Label: shape_cramtex.cpp_performGapFillingOptimization_FUN_00447590
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 00447595 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 0044759a
    PUSH ESI                            ; 0044759b
    PUSH EDI                            ; 0044759c
    PUSH EBP                            ; 0044759d
    SUB ESP,0x14                        ; 0044759e
    CMP dword ptr [0x0084a898],0x0      ; 004475a1 | int g_CramFillGaps
    JZ 0x00447850                       ; 004475a8 | LAB_00447850
        ;   XREF to: 00447850 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x0084a854]      ; 004475ae | uint g_CramTextureCount
        ;   Label: LAB_004475ae
    XOR EBP,EBP                         ; 004475b4
    XOR EDI,EDI                         ; 004475b6
    TEST ECX,ECX                        ; 004475b8
    JLE 0x00447635                      ; 004475ba | LAB_00447635
        ;   XREF to: 00447635 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x10],0x83c1dc ; 004475c0 | SCramWorkingEntry[1] g_CramSortedTextureEntries
    MOV EBX,dword ptr [ESP + 0x10]      ; 004475c8 | SCramWorkingEntry[1] g_CramSortedTextureEntries | DAT_0083c228
        ;   Label: LAB_004475c8
    MOV EDX,dword ptr [0x0084a884]      ; 004475cc | int g_CramCurrentAcceptableSize
        ;   Label: LAB_004475cc
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004475d2 | DAT_0083c218 | DAT_0083c264
    XOR ESI,ESI                         ; 004475d5
    CMP EAX,EDX                         ; 004475d7
    JL 0x00447858                       ; 004475d9 | LAB_00447858
        ;   XREF to: 00447858 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [0x0084a884]      ; 004475df | int g_CramCurrentAcceptableSize
        ;   Label: LAB_004475df
    CMP ECX,dword ptr [EBX + 0x38]      ; 004475e5 | DAT_0083c214 | DAT_0083c260
    JLE 0x00447614                      ; 004475e8 | LAB_00447614
        ;   XREF to: 00447614 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004475ea | SCramWorkingEntry[1] g_CramSortedTextureEntries | DAT_0083c228
    CALL shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10 ; 004475eb | int shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10(SCramWorkingEntry * bounds_entry)
        ;   XREF to: 00447a10 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x0084a884]      ; 004475f0 | int g_CramCurrentAcceptableSize
    ADD ESP,0x4                         ; 004475f6
    CMP EAX,EDX                         ; 004475f9
    JL 0x00447614                       ; 004475fb | LAB_00447614
        ;   XREF to: 00447614 (CONDITIONAL_JUMP)
    MOV ESI,EAX                         ; 004475fd
    MOV ECX,dword ptr [EBX + 0x38]      ; 004475ff | DAT_0083c214
    MOV EAX,dword ptr [EBX + 0x30]      ; 00447602 | DAT_0083c20c
    SUB ESI,ECX                         ; 00447605
    MOV EDX,dword ptr [EBX + 0x38]      ; 00447607 | DAT_0083c214
    ADD EAX,ESI                         ; 0044760a
    ADD EDX,ESI                         ; 0044760c
    MOV dword ptr [EBX + 0x30],EAX      ; 0044760e | DAT_0083c20c
    MOV dword ptr [EBX + 0x38],EDX      ; 00447611 | DAT_0083c214
    TEST ESI,ESI                        ; 00447614
        ;   Label: LAB_00447614
    JLE 0x0044761f                      ; 00447616 | LAB_0044761f
        ;   XREF to: 0044761f (CONDITIONAL_JUMP)
    MOV EDI,0x1                         ; 00447618
    JMP 0x004475cc                      ; 0044761d | LAB_004475cc
        ;   XREF to: 004475cc (UNCONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x10]      ; 0044761f
        ;   Label: LAB_0044761f
    MOV ESI,dword ptr [0x0084a854]      ; 00447623 | uint g_CramTextureCount
    ADD EBX,0x4c                        ; 00447629
    INC EBP                             ; 0044762c
    MOV dword ptr [ESP + 0x10],EBX      ; 0044762d | undefined4 DAT_0083c228
    CMP EBP,ESI                         ; 00447631
    JL 0x004475c8                       ; 00447633 | LAB_004475c8
        ;   XREF to: 004475c8 (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 00447635
        ;   Label: LAB_00447635
    JNZ 0x004475ae                      ; 00447637 | LAB_004475ae
        ;   XREF to: 004475ae (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x8],EDI       ; 0044763d
    MOV ECX,dword ptr [0x0084a854]      ; 00447641 | uint g_CramTextureCount
        ;   Label: LAB_00447641
    XOR EDI,EDI                         ; 00447647
    XOR EBP,EBP                         ; 00447649
    TEST ECX,ECX                        ; 0044764b
    JLE 0x004476fb                      ; 0044764d | LAB_004476fb
        ;   XREF to: 004476fb (CONDITIONAL_JUMP)
    MOV EBX,0x83c1dc                    ; 00447653 | SCramWorkingEntry[1] g_CramSortedTextureEntries
    PUSH EBX                            ; 00447658 | SCramWorkingEntry[1] g_CramSortedTextureEntries | DAT_0083c228
        ;   Label: LAB_00447658
    CALL shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0 ; 00447659 | int shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0(SCramWorkingEntry * bounds_entry)
        ;   XREF to: 004479a0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0x30]      ; 0044765e | DAT_0083c20c
    ADD ESP,0x4                         ; 00447661
    SUB EAX,EDX                         ; 00447664
    PUSH EBX                            ; 00447666 | SCramWorkingEntry[1] g_CramSortedTextureEntries
    MOV dword ptr [ESP + 0x4],EAX       ; 00447667
    CALL shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10 ; 0044766b | int shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10(SCramWorkingEntry * bounds_entry)
        ;   XREF to: 00447a10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00447670
    MOV ECX,dword ptr [EBX + 0x38]      ; 00447673 | DAT_0083c214
    MOV EDX,dword ptr [ESP]             ; 00447676
    SUB EAX,ECX                         ; 00447679
    ADD EDX,EAX                         ; 0044767b
    MOV EAX,EDX                         ; 0044767d
    SAR EDX,0x1f                        ; 0044767f
    SUB EAX,EDX                         ; 00447682
    SAR EAX,0x1                         ; 00447684
    MOV ESI,EBX                         ; 00447686
    TEST EAX,EAX                        ; 00447688
    JZ 0x004476a1                       ; 0044768a | LAB_004476a1
        ;   XREF to: 004476a1 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX + 0x30]      ; 0044768c | DAT_0083c20c
    MOV ECX,dword ptr [EBX + 0x38]      ; 0044768f | DAT_0083c214
    ADD EDX,EAX                         ; 00447692
    ADD ECX,EAX                         ; 00447694
    MOV dword ptr [EBX + 0x30],EDX      ; 00447696 | DAT_0083c20c
    MOV EBP,0x1                         ; 00447699
    MOV dword ptr [EBX + 0x38],ECX      ; 0044769e | DAT_0083c214
    PUSH ESI                            ; 004476a1 | SCramWorkingEntry[1] g_CramSortedTextureEntries
        ;   Label: LAB_004476a1
    CALL shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0 ; 004476a2 | int shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0(SCramWorkingEntry * reference_entry)
        ;   XREF to: 004478c0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [ESI + 0x34]      ; 004476a7 | DAT_0083c210
    ADD ESP,0x4                         ; 004476aa
    SUB EAX,EDX                         ; 004476ad
    PUSH ESI                            ; 004476af | SCramWorkingEntry[1] g_CramSortedTextureEntries
    MOV dword ptr [ESP + 0x8],EAX       ; 004476b0
    CALL shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930 ; 004476b4 | int shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930(SCramWorkingEntry * bounds_entry)
        ;   XREF to: 00447930 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004476b9
    MOV ECX,dword ptr [ESI + 0x3c]      ; 004476bc | DAT_0083c218
    MOV EDX,dword ptr [ESP + 0x4]       ; 004476bf
    SUB EAX,ECX                         ; 004476c3
    ADD EDX,EAX                         ; 004476c5
    MOV EAX,EDX                         ; 004476c7
    SAR EDX,0x1f                        ; 004476c9
    SUB EAX,EDX                         ; 004476cc
    SAR EAX,0x1                         ; 004476ce
    TEST EAX,EAX                        ; 004476d0
    JZ 0x004476e9                       ; 004476d2 | LAB_004476e9
        ;   XREF to: 004476e9 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESI + 0x34]      ; 004476d4 | DAT_0083c210
    MOV ECX,dword ptr [ESI + 0x3c]      ; 004476d7 | DAT_0083c218
    ADD EDX,EAX                         ; 004476da
    ADD ECX,EAX                         ; 004476dc
    MOV dword ptr [ESI + 0x34],EDX      ; 004476de | DAT_0083c210
    MOV EBP,0x1                         ; 004476e1
    MOV dword ptr [ESI + 0x3c],ECX      ; 004476e6 | DAT_0083c218
    MOV ESI,dword ptr [0x0084a854]      ; 004476e9 | uint g_CramTextureCount
        ;   Label: LAB_004476e9
    INC EDI                             ; 004476ef
    ADD EBX,0x4c                        ; 004476f0 | undefined4 DAT_0083c228
    CMP EDI,ESI                         ; 004476f3
    JL 0x00447658                       ; 004476f5 | LAB_00447658
        ;   XREF to: 00447658 (CONDITIONAL_JUMP)
    TEST EBP,EBP                        ; 004476fb
        ;   Label: LAB_004476fb
    JNZ 0x00447889                      ; 004476fd | LAB_00447889
        ;   XREF to: 00447889 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00447703
        ;   Label: LAB_00447703
    MOV dword ptr [ESP + 0xc],EAX       ; 00447705
    TEST byte ptr [ESP + 0xc],0x1       ; 00447709
        ;   Label: LAB_00447709
    JZ 0x004478a0                       ; 0044770e | LAB_004478a0
        ;   XREF to: 004478a0 (CONDITIONAL_JUMP)
    MOV EDI,0xffffffff                  ; 00447714
    MOV EAX,[0x0084a854]                ; 00447719 | uint g_CramTextureCount
    MOV EBP,EDI                         ; 0044771e
    DEC EAX                             ; 00447720
    MOV ESI,EAX                         ; 00447721
        ;   Label: LAB_00447721
    CMP EAX,EDI                         ; 00447723
    JZ 0x004477a0                       ; 00447725 | LAB_004477a0
        ;   XREF to: 004477a0 (CONDITIONAL_JUMP)
    IMUL EBX,ESI,0x4c                   ; 00447727
        ;   Label: LAB_00447727
    ADD EBX,0x83c1dc                    ; 0044772a | SCramWorkingEntry[1] g_CramSortedTextureEntries
    PUSH EBX                            ; 00447730 | SCramWorkingEntry[1] g_CramSortedTextureEntries
    CALL shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0 ; 00447731 | int shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0(SCramWorkingEntry * bounds_entry)
        ;   XREF to: 004479a0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0x30]      ; 00447736 | DAT_0083c20c
    ADD EDX,EAX                         ; 00447739
    MOV EAX,EDX                         ; 0044773b
    SAR EDX,0x1f                        ; 0044773d
    SUB EAX,EDX                         ; 00447740
    SAR EAX,0x1                         ; 00447742
    ADD ESP,0x4                         ; 00447744
    PUSH EBX                            ; 00447747
    MOV dword ptr [EBX + 0x30],EAX      ; 00447748 | DAT_0083c20c
    CALL shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0 ; 0044774b | int shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0(SCramWorkingEntry * reference_entry)
        ;   XREF to: 004478c0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0x34]      ; 00447750 | DAT_0083c210
    ADD EDX,EAX                         ; 00447753
    MOV EAX,EDX                         ; 00447755
    SAR EDX,0x1f                        ; 00447757
    SUB EAX,EDX                         ; 0044775a
    SAR EAX,0x1                         ; 0044775c
    ADD ESP,0x4                         ; 0044775e
    PUSH EBX                            ; 00447761
    MOV dword ptr [EBX + 0x34],EAX      ; 00447762 | DAT_0083c210
    CALL shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10 ; 00447765 | int shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10(SCramWorkingEntry * bounds_entry)
        ;   XREF to: 00447a10 (UNCONDITIONAL_CALL)
    ADD EAX,dword ptr [EBX + 0x38]      ; 0044776a | DAT_0083c214
    LEA EDX,[EAX + 0x1]                 ; 0044776d
    MOV EAX,EDX                         ; 00447770
    SAR EDX,0x1f                        ; 00447772
    SUB EAX,EDX                         ; 00447775
    SAR EAX,0x1                         ; 00447777
    ADD ESP,0x4                         ; 00447779
    PUSH EBX                            ; 0044777c
    MOV dword ptr [EBX + 0x38],EAX      ; 0044777d | DAT_0083c214
    CALL shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930 ; 00447780 | int shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930(SCramWorkingEntry * bounds_entry)
        ;   XREF to: 00447930 (UNCONDITIONAL_CALL)
    ADD EAX,dword ptr [EBX + 0x3c]      ; 00447785 | DAT_0083c218
    LEA EDX,[EAX + 0x1]                 ; 00447788
    MOV EAX,EDX                         ; 0044778b
    SAR EDX,0x1f                        ; 0044778d
    SUB EAX,EDX                         ; 00447790
    SAR EAX,0x1                         ; 00447792
    ADD ESI,EBP                         ; 00447794
    ADD ESP,0x4                         ; 00447796
    MOV dword ptr [EBX + 0x3c],EAX      ; 00447799 | DAT_0083c218
    CMP ESI,EDI                         ; 0044779c
    JNZ 0x00447727                      ; 0044779e | LAB_00447727
        ;   XREF to: 00447727 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0xc]       ; 004477a0
        ;   Label: LAB_004477a0
    INC EBX                             ; 004477a4
    MOV dword ptr [ESP + 0xc],EBX       ; 004477a5
    CMP EBX,0xa                         ; 004477a9
    JL 0x00447709                       ; 004477ac | LAB_00447709
        ;   XREF to: 00447709 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x0084a854]      ; 004477b2 | uint g_CramTextureCount
    XOR ESI,ESI                         ; 004477b8
    TEST EDI,EDI                        ; 004477ba
    JLE 0x00447815                      ; 004477bc | LAB_00447815
        ;   XREF to: 00447815 (CONDITIONAL_JUMP)
    MOV EDI,0x83c1dc                    ; 004477be | SCramWorkingEntry[1] g_CramSortedTextureEntries
    MOV EBX,EDI                         ; 004477c3 | SCramWorkingEntry[1] g_CramSortedTextureEntries | DAT_0083c228
        ;   Label: LAB_004477c3
    PUSH EBX                            ; 004477c5 | SCramWorkingEntry[1] g_CramSortedTextureEntries | DAT_0083c228
        ;   Label: LAB_004477c5
    CALL shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0 ; 004477c6 | int shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0(SCramWorkingEntry * reference_entry)
        ;   XREF to: 004478c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004477cb
    MOV EDX,dword ptr [EBX + 0x34]      ; 004477ce | DAT_0083c210
    MOV ECX,dword ptr [EBX + 0x34]      ; 004477d1 | DAT_0083c210
    SUB EDX,EAX                         ; 004477d4
    MOV EBP,dword ptr [EBX + 0x3c]      ; 004477d6 | DAT_0083c218
    SUB ECX,EDX                         ; 004477d9
    SUB EBP,EDX                         ; 004477db
    MOV dword ptr [EBX + 0x34],ECX      ; 004477dd | DAT_0083c210
    PUSH EBX                            ; 004477e0 | SCramWorkingEntry[1] g_CramSortedTextureEntries
    MOV dword ptr [EBX + 0x3c],EBP      ; 004477e1 | DAT_0083c218
    CALL shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0 ; 004477e4 | int shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0(SCramWorkingEntry * bounds_entry)
        ;   XREF to: 004479a0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0x30]      ; 004477e9 | DAT_0083c20c
    SUB EDX,EAX                         ; 004477ec
    MOV ECX,dword ptr [EBX + 0x38]      ; 004477ee | DAT_0083c214
    MOV EAX,EDX                         ; 004477f1
    MOV EDX,dword ptr [EBX + 0x30]      ; 004477f3 | DAT_0083c20c
    SUB ECX,EAX                         ; 004477f6
    SUB EDX,EAX                         ; 004477f8
    MOV dword ptr [EBX + 0x38],ECX      ; 004477fa | DAT_0083c214
    ADD ESP,0x4                         ; 004477fd
    MOV dword ptr [EBX + 0x30],EDX      ; 00447800 | DAT_0083c20c
    TEST EAX,EAX                        ; 00447803
    JG 0x004477c5                       ; 00447805 | LAB_004477c5
        ;   XREF to: 004477c5 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [0x0084a854]      ; 00447807 | uint g_CramTextureCount
    INC ESI                             ; 0044780d
    ADD EDI,0x4c                        ; 0044780e
    CMP ESI,EBP                         ; 00447811
    JL 0x004477c3                       ; 00447813 | LAB_004477c3
        ;   XREF to: 004477c3 (CONDITIONAL_JUMP)
    MOV EAX,[0x0084a854]                ; 00447815 | uint g_CramTextureCount
        ;   Label: LAB_00447815
    XOR ESI,ESI                         ; 0044781a
    TEST EAX,EAX                        ; 0044781c
    JLE 0x00447850                      ; 0044781e | LAB_00447850
        ;   XREF to: 00447850 (CONDITIONAL_JUMP)
    MOV EBX,0x83c1dc                    ; 00447820 | SCramWorkingEntry[1] g_CramSortedTextureEntries
    PUSH EBX                            ; 00447825 | SCramWorkingEntry[1] g_CramSortedTextureEntries | DAT_0083c228
        ;   Label: LAB_00447825
    CALL shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10 ; 00447826 | int shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10(SCramWorkingEntry * bounds_entry)
        ;   XREF to: 00447a10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0044782b
    PUSH EBX                            ; 0044782e | SCramWorkingEntry[1] g_CramSortedTextureEntries
    INC ESI                             ; 0044782f
    MOV dword ptr [EBX + 0x38],EAX      ; 00447830 | DAT_0083c214
    CALL shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930 ; 00447833 | int shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930(SCramWorkingEntry * bounds_entry)
        ;   XREF to: 00447930 (UNCONDITIONAL_CALL)
    ADD EBX,0x4c                        ; 00447838 | undefined4 DAT_0083c228
    MOV EDX,dword ptr [0x0084a854]      ; 0044783b | uint g_CramTextureCount
    ADD ESP,0x4                         ; 00447841
    MOV dword ptr [EBX + -0x10],EAX     ; 00447844 | DAT_0083c218
    CMP ESI,EDX                         ; 00447847
    JL 0x00447825                       ; 00447849 | LAB_00447825
        ;   XREF to: 00447825 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0044784b
    MOV ECX,ECX                         ; 0044784e
    ADD ESP,0x14                        ; 00447850
        ;   Label: LAB_00447850
    POP EBP                             ; 00447853
    POP EDI                             ; 00447854
    POP ESI                             ; 00447855
    POP EBX                             ; 00447856
    RET                                 ; 00447857
    PUSH EBX                            ; 00447858 | SCramWorkingEntry[1] g_CramSortedTextureEntries
        ;   Label: LAB_00447858
    CALL shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930 ; 00447859 | int shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930(SCramWorkingEntry * bounds_entry)
        ;   XREF to: 00447930 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x0084a884]      ; 0044785e | int g_CramCurrentAcceptableSize
    ADD ESP,0x4                         ; 00447864
    CMP EAX,ECX                         ; 00447867
    JL 0x004475df                       ; 00447869 | LAB_004475df
        ;   XREF to: 004475df (CONDITIONAL_JUMP)
    SUB EAX,dword ptr [EBX + 0x3c]      ; 0044786f | DAT_0083c218
    MOV EDX,dword ptr [EBX + 0x3c]      ; 00447872 | DAT_0083c218
    MOV ESI,EAX                         ; 00447875
    MOV EAX,dword ptr [EBX + 0x34]      ; 00447877 | DAT_0083c210
    ADD EDX,ESI                         ; 0044787a
    ADD EAX,ESI                         ; 0044787c
    MOV dword ptr [EBX + 0x3c],EDX      ; 0044787e | DAT_0083c218
    MOV dword ptr [EBX + 0x34],EAX      ; 00447881 | DAT_0083c210
    JMP 0x004475df                      ; 00447884 | LAB_004475df
        ;   XREF to: 004475df (UNCONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x8]       ; 00447889
        ;   Label: LAB_00447889
    INC EDI                             ; 0044788d
    MOV dword ptr [ESP + 0x8],EDI       ; 0044788e
    CMP EDI,0xa                         ; 00447892
    JL 0x00447641                       ; 00447895 | LAB_00447641
        ;   XREF to: 00447641 (CONDITIONAL_JUMP)
    JMP 0x00447703                      ; 0044789b | LAB_00447703
        ;   XREF to: 00447703 (UNCONDITIONAL_JUMP)
    MOV EBP,0x1                         ; 004478a0
        ;   Label: LAB_004478a0
    MOV EDI,dword ptr [0x0084a854]      ; 004478a5 | uint g_CramTextureCount
    XOR EAX,EAX                         ; 004478ab
    JMP 0x00447721                      ; 004478ad | LAB_00447721
        ;   XREF to: 00447721 (UNCONDITIONAL_JUMP)

