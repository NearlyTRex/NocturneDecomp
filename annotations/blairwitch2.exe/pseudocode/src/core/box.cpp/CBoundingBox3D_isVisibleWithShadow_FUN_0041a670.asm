; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041a670(CBoundingBox3D *this_ptr)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_box.cpp_FUN_0041a840 at 0041aa01
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01511ce4
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c35e38
;   undefined4 DAT_01c35e3c
;   undefined4 DAT_01c35e40
;   undefined4 DAT_01c35e44
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_0044cf90
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0041a670
        ;   Label: core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041a670
    SUB ESP,0x1c                        ; 0041a671
    CMP dword ptr [0x01511ce4],0x0      ; 0041a674 | DAT_01511ce4
    JZ 0x0041a7fd                       ; 0041a67b
        ;   XREF to: 0041a7fd (CONDITIONAL_JUMP)  ; LAB_0041a7fd
    PUSH EDI                            ; 0041a681
    PUSH ESI                            ; 0041a682
    PUSH EBX                            ; 0041a683
    MOV EDX,dword ptr [0x0060b280]      ; 0041a684 | DAT_0060b280
    MOV EAX,[0x01c35e40]                ; 0041a68a | DAT_01c35e40
    MOV ECX,dword ptr [0x01c35e38]      ; 0041a68f | DAT_01c35e38
    MOV EDI,dword ptr [0x01c35e40]      ; 0041a695 | DAT_01c35e40
    MOV ESI,dword ptr [0x01c35e3c]      ; 0041a69b | DAT_01c35e3c
    MOV EBP,dword ptr [0x01c35e44]      ; 0041a6a1 | DAT_01c35e44
    MOV EDX,dword ptr [EDX]             ; 0041a6a7 | DAT_01ba5c50
    ADD EAX,ECX                         ; 0041a6a9
    SUB EDI,ECX                         ; 0041a6ab
    MOV dword ptr [ESP + 0x20],EAX      ; 0041a6ad
    MOV EAX,[0x01c35e44]                ; 0041a6b1 | DAT_01c35e44
    ADD EBP,ESI                         ; 0041a6b6
    SUB EAX,ESI                         ; 0041a6b8
    MOV ESI,EDX                         ; 0041a6ba
    ADD EDX,0x180                       ; 0041a6bc
    MOV dword ptr [ESP + 0x24],EAX      ; 0041a6c2
    MOV dword ptr [ESP + 0x1c],EDX      ; 0041a6c6
    MOV AH,byte ptr [ESI + 0x13]        ; 0041a6ca
        ;   Label: LAB_0041a6ca
    MOV ECX,ESI                         ; 0041a6cd
    TEST AH,0x80                        ; 0041a6cf
    JZ 0x0041a807                       ; 0041a6d2
        ;   XREF to: 0041a807 (CONDITIONAL_JUMP)  ; LAB_0041a807
    MOV EAX,dword ptr [ESI + 0x8]       ; 0041a6d8
    MOV EDX,dword ptr [ESI]             ; 0041a6db
    NEG EAX                             ; 0041a6dd
    CMP EAX,EDX                         ; 0041a6df
    JGE 0x0041a70c                      ; 0041a6e1
        ;   XREF to: 0041a70c (CONDITIONAL_JUMP)  ; LAB_0041a70c
    MOV EBX,dword ptr [ESI + 0x8]       ; 0041a6e3
    CMP EDX,EBX                         ; 0041a6e6
    JGE 0x0041a70c                      ; 0041a6e8
        ;   XREF to: 0041a70c (CONDITIONAL_JUMP)  ; LAB_0041a70c
    MOV EDX,dword ptr [0x01c35e38]      ; 0041a6ea | DAT_01c35e38
    MOV EAX,dword ptr [ESI]             ; 0041a6f0
    IMUL EDX                            ; 0041a6f2
    IDIV EBX                            ; 0041a6f4
    ADD EAX,dword ptr [0x01c35e40]      ; 0041a6f6 | DAT_01c35e40
    CMP EAX,EDI                         ; 0041a6fc
    JLE 0x0041a702                      ; 0041a6fe
        ;   XREF to: 0041a702 (CONDITIONAL_JUMP)  ; LAB_0041a702
    MOV EDI,EAX                         ; 0041a700
    CMP EAX,dword ptr [ESP + 0x20]      ; 0041a702
        ;   Label: LAB_0041a702
    JGE 0x0041a70c                      ; 0041a706
        ;   XREF to: 0041a70c (CONDITIONAL_JUMP)  ; LAB_0041a70c
    MOV dword ptr [ESP + 0x20],EAX      ; 0041a708
    MOV EAX,dword ptr [ECX + 0x8]       ; 0041a70c
        ;   Label: LAB_0041a70c
    MOV EDX,dword ptr [ECX + 0x4]       ; 0041a70f
    NEG EAX                             ; 0041a712
    CMP EAX,EDX                         ; 0041a714
    JGE 0x0041a742                      ; 0041a716
        ;   XREF to: 0041a742 (CONDITIONAL_JUMP)  ; LAB_0041a742
    MOV EBX,dword ptr [ECX + 0x8]       ; 0041a718
    CMP EDX,EBX                         ; 0041a71b
    JGE 0x0041a742                      ; 0041a71d
        ;   XREF to: 0041a742 (CONDITIONAL_JUMP)  ; LAB_0041a742
    MOV EDX,dword ptr [0x01c35e3c]      ; 0041a71f | DAT_01c35e3c
    MOV EAX,dword ptr [ECX + 0x4]       ; 0041a725
    IMUL EDX                            ; 0041a728
    IDIV EBX                            ; 0041a72a
    ADD EAX,dword ptr [0x01c35e44]      ; 0041a72c | DAT_01c35e44
    CMP EAX,EBP                         ; 0041a732
    JLE 0x0041a738                      ; 0041a734
        ;   XREF to: 0041a738 (CONDITIONAL_JUMP)  ; LAB_0041a738
    MOV EBP,EAX                         ; 0041a736
    CMP EAX,dword ptr [ESP + 0x24]      ; 0041a738
        ;   Label: LAB_0041a738
    JGE 0x0041a742                      ; 0041a73c
        ;   XREF to: 0041a742 (CONDITIONAL_JUMP)  ; LAB_0041a742
    MOV dword ptr [ESP + 0x24],EAX      ; 0041a73e
    MOV EDX,dword ptr [ECX + 0x8]       ; 0041a742
        ;   Label: LAB_0041a742
    CMP EDX,dword ptr [ECX]             ; 0041a745
    JG 0x0041a757                       ; 0041a747
        ;   XREF to: 0041a757 (CONDITIONAL_JUMP)  ; LAB_0041a757
    MOV EBX,dword ptr [0x01c35e40]      ; 0041a749 | DAT_01c35e40
    MOV EDI,dword ptr [0x01c35e38]      ; 0041a74f | DAT_01c35e38
    ADD EDI,EBX                         ; 0041a755
    MOV EAX,dword ptr [ECX + 0x8]       ; 0041a757
        ;   Label: LAB_0041a757
    MOV EDX,dword ptr [ECX]             ; 0041a75a
    NEG EAX                             ; 0041a75c
    CMP EAX,EDX                         ; 0041a75e
    JL 0x0041a773                       ; 0041a760
        ;   XREF to: 0041a773 (CONDITIONAL_JUMP)  ; LAB_0041a773
    MOV EBX,dword ptr [0x01c35e38]      ; 0041a762 | DAT_01c35e38
    MOV EAX,[0x01c35e40]                ; 0041a768 | DAT_01c35e40
    SUB EAX,EBX                         ; 0041a76d
    MOV dword ptr [ESP + 0x20],EAX      ; 0041a76f
    MOV EDX,dword ptr [ECX + 0x8]       ; 0041a773
        ;   Label: LAB_0041a773
    CMP EDX,dword ptr [ECX + 0x4]       ; 0041a776
    JG 0x0041a78c                       ; 0041a779
        ;   XREF to: 0041a78c (CONDITIONAL_JUMP)  ; LAB_0041a78c
    MOV EBX,dword ptr [0x01c35e44]      ; 0041a77b | DAT_01c35e44
    MOV EAX,[0x01c35e3c]                ; 0041a781 | DAT_01c35e3c
    ADD EAX,EBX                         ; 0041a786
    MOV dword ptr [ESP + 0x24],EAX      ; 0041a788
    MOV EAX,dword ptr [ECX + 0x8]       ; 0041a78c
        ;   Label: LAB_0041a78c
    MOV EDX,dword ptr [ECX + 0x4]       ; 0041a78f
    NEG EAX                             ; 0041a792
    CMP EAX,EDX                         ; 0041a794
    JL 0x0041a7a6                       ; 0041a796
        ;   XREF to: 0041a7a6 (CONDITIONAL_JUMP)  ; LAB_0041a7a6
    MOV ECX,dword ptr [0x01c35e3c]      ; 0041a798 | DAT_01c35e3c
    MOV EBP,dword ptr [0x01c35e44]      ; 0041a79e | DAT_01c35e44
    SUB EBP,ECX                         ; 0041a7a4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0041a7a6
        ;   Label: LAB_0041a7a6
    ADD ESI,0x30                        ; 0041a7aa
    CMP ESI,EBX                         ; 0041a7ad
    JNZ 0x0041a6ca                      ; 0041a7af
        ;   XREF to: 0041a6ca (CONDITIONAL_JUMP)  ; LAB_0041a6ca
    MOV ESI,dword ptr [ESP + 0x20]      ; 0041a7b5
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041a7b9
    MOV EDX,dword ptr [0x01511ce4]      ; 0041a7bd | DAT_01511ce4
    SAR EDI,0x10                        ; 0041a7c3
    SAR EAX,0x10                        ; 0041a7c6
    SAR EBP,0x10                        ; 0041a7c9
    MOV dword ptr [ESP + 0x24],EAX      ; 0041a7cc
    MOV dword ptr [ESP + 0x14],EAX      ; 0041a7d0
    LEA EAX,[ESP + 0xc]                 ; 0041a7d4
    SAR ESI,0x10                        ; 0041a7d8
    PUSH EAX                            ; 0041a7db
    MOV dword ptr [ESP + 0x14],EDI      ; 0041a7dc
    MOV dword ptr [ESP + 0x1c],EBP      ; 0041a7e0
    PUSH EDX                            ; 0041a7e4
    MOV dword ptr [ESP + 0x28],ESI      ; 0041a7e5
    MOV dword ptr [ESP + 0x14],ESI      ; 0041a7e9
    CALL core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_0044cf90 ; 0041a7ed
        ;   XREF to: 0044cf90 (UNCONDITIONAL_CALL)  ; int core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_0044cf90(CDemonLight * this_ptr, CRect * rect)
    ADD ESP,0x8                         ; 0041a7f2
    POP EBX                             ; 0041a7f5
    POP ESI                             ; 0041a7f6
    POP EDI                             ; 0041a7f7
    ADD ESP,0x1c                        ; 0041a7f8
    POP EBP                             ; 0041a7fb
    RET                                 ; 0041a7fc
    MOV EAX,0x1                         ; 0041a7fd
        ;   Label: LAB_0041a7fd
    ADD ESP,0x1c                        ; 0041a802
    POP EBP                             ; 0041a805
    RET                                 ; 0041a806
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041a807
        ;   Label: LAB_0041a807
    MOV EDX,dword ptr [ESI + 0x10]      ; 0041a80b
    CMP EAX,EDX                         ; 0041a80e
    JLE 0x0041a816                      ; 0041a810
        ;   XREF to: 0041a816 (CONDITIONAL_JUMP)  ; LAB_0041a816
    MOV dword ptr [ESP + 0x20],EDX      ; 0041a812
    MOV EBX,dword ptr [ECX + 0x10]      ; 0041a816
        ;   Label: LAB_0041a816
    CMP EDI,EBX                         ; 0041a819
    JGE 0x0041a81f                      ; 0041a81b
        ;   XREF to: 0041a81f (CONDITIONAL_JUMP)  ; LAB_0041a81f
    MOV EDI,EBX                         ; 0041a81d
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041a81f
        ;   Label: LAB_0041a81f
    MOV EDX,dword ptr [ECX + 0x14]      ; 0041a823
    CMP EAX,EDX                         ; 0041a826
    JLE 0x0041a82e                      ; 0041a828
        ;   XREF to: 0041a82e (CONDITIONAL_JUMP)  ; LAB_0041a82e
    MOV dword ptr [ESP + 0x24],EDX      ; 0041a82a
    MOV EBX,dword ptr [ECX + 0x14]      ; 0041a82e
        ;   Label: LAB_0041a82e
    CMP EBP,EBX                         ; 0041a831
    JGE 0x0041a7a6                      ; 0041a833
        ;   XREF to: 0041a7a6 (CONDITIONAL_JUMP)  ; LAB_0041a7a6
    MOV EBP,EBX                         ; 0041a839
    JMP 0x0041a7a6                      ; 0041a83b
        ;   XREF to: 0041a7a6 (UNCONDITIONAL_JUMP)  ; LAB_0041a7a6

