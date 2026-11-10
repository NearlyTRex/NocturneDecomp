; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_restoreDirtyRegions_FUN_0044a520(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
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
; XREF[2]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052de56
;   core_set.cpp_FUN_0052f2a0 at 0052f58a
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_005cf3f7
;   TerminatedCString s_CDemonLight_blitZBuffer_005cf40a
;   undefined4 DAT_01b13078
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_blitZBuffer_FUN_0044a210
;   core_dstrendr.cpp_memcpyMMX_FUN_00470201
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044a520
        ;   Label: core_dlight.cpp_CDemonLight_restoreDirtyRegions_FUN_0044a520
    PUSH ESI                            ; 0044a521
    PUSH EDI                            ; 0044a522
    PUSH EBP                            ; 0044a523
    SUB ESP,0x24                        ; 0044a524
    MOV EBP,dword ptr [ESP + 0x38]      ; 0044a527
    CMP dword ptr [EBP + 0x168],0x0     ; 0044a52b
    JZ 0x0044a722                       ; 0044a532
        ;   XREF to: 0044a722 (CONDITIONAL_JUMP)  ; LAB_0044a722
    CMP dword ptr [EBP + 0x1d0],0x100   ; 0044a538
    JG 0x0044a734                       ; 0044a542
        ;   XREF to: 0044a734 (CONDITIONAL_JUMP)  ; LAB_0044a734
    CMP dword ptr [EBP + 0x2f9c],0x0    ; 0044a548
    JZ 0x0044a771                       ; 0044a54f
        ;   XREF to: 0044a771 (CONDITIONAL_JUMP)  ; LAB_0044a771
    MOV EAX,dword ptr [EBP + 0x1d0]     ; 0044a555
        ;   Label: LAB_0044a555
    XOR ECX,ECX                         ; 0044a55b
    TEST EAX,EAX                        ; 0044a55d
    JLE 0x0044a5ad                      ; 0044a55f
        ;   XREF to: 0044a5ad (CONDITIONAL_JUMP)  ; LAB_0044a5ad
    LEA EDX,[EBP + 0x1d4]               ; 0044a561
    MOV EBX,dword ptr [EDX]             ; 0044a567
        ;   Label: LAB_0044a567
    MOV EAX,EDX                         ; 0044a569
    TEST EBX,EBX                        ; 0044a56b
    JL 0x0044a799                       ; 0044a56d
        ;   XREF to: 0044a799 (CONDITIONAL_JUMP)  ; LAB_0044a799
    MOV EBX,dword ptr [EBP + 0x1cc0]    ; 0044a573
        ;   Label: LAB_0044a573
    MOV ESI,dword ptr [EAX + 0x4]       ; 0044a579
    DEC EBX                             ; 0044a57c
    CMP EBX,ESI                         ; 0044a57d
    JGE 0x0044a584                      ; 0044a57f
        ;   XREF to: 0044a584 (CONDITIONAL_JUMP)  ; LAB_0044a584
    MOV dword ptr [EAX + 0x4],EBX       ; 0044a581
    CMP dword ptr [EAX + 0x8],0x0       ; 0044a584
        ;   Label: LAB_0044a584
    JL 0x0044a7a4                       ; 0044a588
        ;   XREF to: 0044a7a4 (CONDITIONAL_JUMP)  ; LAB_0044a7a4
    MOV EBX,dword ptr [EBP + 0x1cc4]    ; 0044a58e
        ;   Label: LAB_0044a58e
    MOV ESI,dword ptr [EAX + 0xc]       ; 0044a594
    DEC EBX                             ; 0044a597
    CMP EBX,ESI                         ; 0044a598
    JGE 0x0044a59f                      ; 0044a59a
        ;   XREF to: 0044a59f (CONDITIONAL_JUMP)  ; LAB_0044a59f
    MOV dword ptr [EAX + 0xc],EBX       ; 0044a59c
    INC ECX                             ; 0044a59f
        ;   Label: LAB_0044a59f
    MOV EBX,dword ptr [EBP + 0x1d0]     ; 0044a5a0
    ADD EDX,0x10                        ; 0044a5a6
    CMP ECX,EBX                         ; 0044a5a9
    JL 0x0044a567                       ; 0044a5ab
        ;   XREF to: 0044a567 (CONDITIONAL_JUMP)  ; LAB_0044a567
    MOV EDI,dword ptr [EBP + 0x1d0]     ; 0044a5ad
        ;   Label: LAB_0044a5ad
    MOV EBX,dword ptr [EBP + 0x1cc4]    ; 0044a5b3
    XOR ESI,ESI                         ; 0044a5b9
    XOR EDX,EDX                         ; 0044a5bb
    MOV dword ptr [ESP + 0x14],ESI      ; 0044a5bd
    TEST EDI,EDI                        ; 0044a5c1
    JLE 0x0044a5f3                      ; 0044a5c3
        ;   XREF to: 0044a5f3 (CONDITIONAL_JUMP)  ; LAB_0044a5f3
    LEA EAX,[EBP + 0x1d4]               ; 0044a5c5
    MOV ESI,dword ptr [EAX + 0x8]       ; 0044a5cb
        ;   Label: LAB_0044a5cb
    MOV ECX,EAX                         ; 0044a5ce
    CMP EBX,ESI                         ; 0044a5d0
    JLE 0x0044a5d6                      ; 0044a5d2
        ;   XREF to: 0044a5d6 (CONDITIONAL_JUMP)  ; LAB_0044a5d6
    MOV EBX,ESI                         ; 0044a5d4
    MOV EDI,dword ptr [ESP + 0x14]      ; 0044a5d6
        ;   Label: LAB_0044a5d6
    MOV ESI,dword ptr [ECX + 0xc]       ; 0044a5da
    CMP ESI,EDI                         ; 0044a5dd
    JLE 0x0044a5e5                      ; 0044a5df
        ;   XREF to: 0044a5e5 (CONDITIONAL_JUMP)  ; LAB_0044a5e5
    MOV dword ptr [ESP + 0x14],ESI      ; 0044a5e1
    INC EDX                             ; 0044a5e5
        ;   Label: LAB_0044a5e5
    MOV EDI,dword ptr [EBP + 0x1d0]     ; 0044a5e6
    ADD EAX,0x10                        ; 0044a5ec
    CMP EDX,EDI                         ; 0044a5ef
    JL 0x0044a5cb                       ; 0044a5f1
        ;   XREF to: 0044a5cb (CONDITIONAL_JUMP)  ; LAB_0044a5cb
    MOV EAX,dword ptr [ESP + 0x14]      ; 0044a5f3
        ;   Label: LAB_0044a5f3
    MOV dword ptr [ESP + 0x1c],EBX      ; 0044a5f7
    CMP EBX,EAX                         ; 0044a5fb
    JG 0x0044a722                       ; 0044a5fd
        ;   XREF to: 0044a722 (CONDITIONAL_JUMP)  ; LAB_0044a722
    LEA EAX,[EBP + 0x1d4]               ; 0044a603
    MOV dword ptr [ESP + 0x10],EAX      ; 0044a609
    XOR ECX,ECX                         ; 0044a60d
        ;   Label: LAB_0044a60d
    MOV ESI,dword ptr [EBP + 0x1d0]     ; 0044a60f
    MOV dword ptr [ESP + 0x18],ECX      ; 0044a615
    MOV dword ptr [0x01b13078],ECX      ; 0044a619 | DAT_01b13078
    TEST ESI,ESI                        ; 0044a61f
    JLE 0x0044a6af                      ; 0044a621
        ;   XREF to: 0044a6af (CONDITIONAL_JUMP)  ; LAB_0044a6af
    MOV EDI,dword ptr [ESP + 0x10]      ; 0044a627
    MOV dword ptr [ESP + 0x20],ECX      ; 0044a62b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044a62f
        ;   Label: LAB_0044a62f
    MOV ESI,dword ptr [EDI + 0x8]       ; 0044a633
    MOV EDX,EDI                         ; 0044a636
    CMP EAX,ESI                         ; 0044a638
    JL 0x0044a699                       ; 0044a63a
        ;   XREF to: 0044a699 (CONDITIONAL_JUMP)  ; LAB_0044a699
    CMP EAX,dword ptr [EDI + 0xc]       ; 0044a63c
    JG 0x0044a699                       ; 0044a63f
        ;   XREF to: 0044a699 (CONDITIONAL_JUMP)  ; LAB_0044a699
    MOV EBX,dword ptr [0x01b13078]      ; 0044a641 | DAT_01b13078
    XOR ECX,ECX                         ; 0044a647
    TEST EBX,EBX                        ; 0044a649
    JLE 0x0044a66c                      ; 0044a64b
        ;   XREF to: 0044a66c (CONDITIONAL_JUMP)  ; LAB_0044a66c
    LEA ESI,[EBX*0x4 + 0x0]             ; 0044a64d
    XOR EAX,EAX                         ; 0044a654
    MOV EBX,dword ptr [EDX + 0x4]       ; 0044a656
        ;   Label: LAB_0044a656
    CMP EBX,dword ptr [EAX + 0x1b1307c] ; 0044a659
    JGE 0x0044a7b0                      ; 0044a65f
        ;   XREF to: 0044a7b0 (CONDITIONAL_JUMP)  ; LAB_0044a7b0
    ADD EAX,0x4                         ; 0044a665
        ;   Label: LAB_0044a665
    CMP EAX,ESI                         ; 0044a668
    JL 0x0044a656                       ; 0044a66a
        ;   XREF to: 0044a656 (CONDITIONAL_JUMP)  ; LAB_0044a656
    TEST ECX,ECX                        ; 0044a66c
        ;   Label: LAB_0044a66c
    JNZ 0x0044a699                      ; 0044a66e
        ;   XREF to: 0044a699 (CONDITIONAL_JUMP)  ; LAB_0044a699
    MOV ECX,dword ptr [ESP + 0x20]      ; 0044a670
    MOV EAX,dword ptr [EDX]             ; 0044a674
    MOV dword ptr [ECX + 0x1b1307c],EAX ; 0044a676
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044a67c
    LEA EDX,[ECX + 0x4]                 ; 0044a67f
    MOV dword ptr [ECX + 0x1b1347c],EAX ; 0044a682
    MOV ECX,dword ptr [0x01b13078]      ; 0044a688 | DAT_01b13078
    INC ECX                             ; 0044a68e
    MOV dword ptr [ESP + 0x20],EDX      ; 0044a68f
    MOV dword ptr [0x01b13078],ECX      ; 0044a693 | DAT_01b13078
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044a699
        ;   Label: LAB_0044a699
    ADD EDI,0x10                        ; 0044a69d
    INC EAX                             ; 0044a6a0
    MOV EDX,dword ptr [EBP + 0x1d0]     ; 0044a6a1
    MOV dword ptr [ESP + 0x18],EAX      ; 0044a6a7
    CMP EAX,EDX                         ; 0044a6ab
    JL 0x0044a62f                       ; 0044a6ad
        ;   XREF to: 0044a62f (CONDITIONAL_JUMP)  ; LAB_0044a62f
    MOV ECX,dword ptr [0x01b13078]      ; 0044a6af | DAT_01b13078
        ;   Label: LAB_0044a6af
    XOR EDI,EDI                         ; 0044a6b5
    TEST ECX,ECX                        ; 0044a6b7
    JLE 0x0044a70d                      ; 0044a6b9
        ;   XREF to: 0044a70d (CONDITIONAL_JUMP)  ; LAB_0044a70d
    XOR ESI,ESI                         ; 0044a6bb
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044a6bd
        ;   Label: LAB_0044a6bd
    IMUL EAX,dword ptr [EBP + 0x1cc0]   ; 0044a6c1
    MOV ECX,dword ptr [ESI + 0x1b1307c] ; 0044a6c8
    MOV EBX,dword ptr [ESI + 0x1b1307c] ; 0044a6ce
    ADD EAX,ECX                         ; 0044a6d4
    MOV EDX,dword ptr [EBP + 0x2f94]    ; 0044a6d6
    ADD EAX,EAX                         ; 0044a6dc
    MOV ECX,dword ptr [EBP + 0x2f9c]    ; 0044a6de
    ADD EDX,EAX                         ; 0044a6e4
    ADD ECX,EAX                         ; 0044a6e6
    MOV EAX,dword ptr [ESI + 0x1b1347c] ; 0044a6e8
    SUB EAX,EBX                         ; 0044a6ee
    ADD EAX,EAX                         ; 0044a6f0
    ADD EAX,0x2                         ; 0044a6f2
    PUSH EAX                            ; 0044a6f5
    PUSH ECX                            ; 0044a6f6
    PUSH EDX                            ; 0044a6f7
    ADD ESI,0x4                         ; 0044a6f8
    INC EDI                             ; 0044a6fb
    CALL core_dstrendr.cpp_memcpyMMX_FUN_00470201 ; 0044a6fc
        ;   XREF to: 00470201 (UNCONDITIONAL_CALL)  ; void core_dstrendr.cpp_memcpyMMX_FUN_00470201(void * dest, void * src, int byte_count)
    MOV EAX,[0x01b13078]                ; 0044a701 | DAT_01b13078
    ADD ESP,0xc                         ; 0044a706
    CMP EDI,EAX                         ; 0044a709
    JL 0x0044a6bd                       ; 0044a70b
        ;   XREF to: 0044a6bd (CONDITIONAL_JUMP)  ; LAB_0044a6bd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044a70d
        ;   Label: LAB_0044a70d
    INC EAX                             ; 0044a711
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044a712
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044a716
    CMP EAX,EDX                         ; 0044a71a
    JLE 0x0044a60d                      ; 0044a71c
        ;   XREF to: 0044a60d (CONDITIONAL_JUMP)  ; LAB_0044a60d
    MOV dword ptr [EBP + 0x1d0],0x0     ; 0044a722
        ;   Label: LAB_0044a722
    ADD ESP,0x24                        ; 0044a72c
    POP EBP                             ; 0044a72f
    POP EDI                             ; 0044a730
    POP ESI                             ; 0044a731
    POP EBX                             ; 0044a732
    RET                                 ; 0044a733
    XOR EDX,EDX                         ; 0044a734
        ;   Label: LAB_0044a734
    MOV dword ptr [ESP],EDX             ; 0044a736
    MOV dword ptr [ESP + 0x8],EDX       ; 0044a739
    MOV EAX,dword ptr [EBP + 0x1cc0]    ; 0044a73d
    DEC EAX                             ; 0044a743
    MOV dword ptr [ESP + 0x4],EAX       ; 0044a744
    MOV EAX,dword ptr [EBP + 0x1cc4]    ; 0044a748
    DEC EAX                             ; 0044a74e
    MOV dword ptr [ESP + 0xc],EAX       ; 0044a74f
    MOV EAX,ESP                         ; 0044a753
    PUSH EAX                            ; 0044a755
    PUSH EBP                            ; 0044a756
    CALL core_dlight.cpp_CDemonLight_blitZBuffer_FUN_0044a210 ; 0044a757
        ;   XREF to: 0044a210 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_blitZBuffer_FUN_0044a210(CDemonLight * this_ptr, CRect * source_rect)
    ADD ESP,0x8                         ; 0044a75c
    MOV dword ptr [EBP + 0x1d0],0x0     ; 0044a75f
    ADD ESP,0x24                        ; 0044a769
    POP EBP                             ; 0044a76c
    POP EDI                             ; 0044a76d
    POP ESI                             ; 0044a76e
    POP EBX                             ; 0044a76f
    RET                                 ; 0044a770
    MOV ESI,0x5cf3f7                    ; 0044a771 | = "..\\core\\dlight.cpp"
        ;   Label: LAB_0044a771
    MOV EDI,0x203                       ; 0044a776
    PUSH 0x5cf40a                       ; 0044a77b | = "CDemonLight::blitZBuffer - No master ..."
    MOV dword ptr [0x01d046a0],ESI      ; 0044a780 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0044a786 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0044a78c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0044a791
    JMP 0x0044a555                      ; 0044a794
        ;   XREF to: 0044a555 (UNCONDITIONAL_JUMP)  ; LAB_0044a555
    MOV dword ptr [EDX],0x0             ; 0044a799
        ;   Label: LAB_0044a799
    JMP 0x0044a573                      ; 0044a79f
        ;   XREF to: 0044a573 (UNCONDITIONAL_JUMP)  ; LAB_0044a573
    MOV dword ptr [EAX + 0x8],0x0       ; 0044a7a4
        ;   Label: LAB_0044a7a4
    JMP 0x0044a58e                      ; 0044a7ab
        ;   XREF to: 0044a58e (UNCONDITIONAL_JUMP)  ; LAB_0044a58e
    MOV EBX,dword ptr [EDX]             ; 0044a7b0
        ;   Label: LAB_0044a7b0
    CMP EBX,dword ptr [EAX + 0x1b1347c] ; 0044a7b2
    JG 0x0044a665                       ; 0044a7b8
        ;   XREF to: 0044a665 (CONDITIONAL_JUMP)  ; LAB_0044a665
    CMP EBX,dword ptr [EAX + 0x1b1307c] ; 0044a7be
    JL 0x0044a7d5                       ; 0044a7c4
        ;   XREF to: 0044a7d5 (CONDITIONAL_JUMP)  ; LAB_0044a7d5
    MOV EBX,dword ptr [EDX + 0x4]       ; 0044a7c6
    CMP EBX,dword ptr [EAX + 0x1b1347c] ; 0044a7c9
    JLE 0x0044a699                      ; 0044a7cf
        ;   XREF to: 0044a699 (CONDITIONAL_JUMP)  ; LAB_0044a699
    MOV EBX,dword ptr [EDX]             ; 0044a7d5
        ;   Label: LAB_0044a7d5
    CMP EBX,dword ptr [EAX + 0x1b1307c] ; 0044a7d7
    JGE 0x0044a7ea                      ; 0044a7dd
        ;   XREF to: 0044a7ea (CONDITIONAL_JUMP)  ; LAB_0044a7ea
    MOV ECX,0x1                         ; 0044a7df
    MOV dword ptr [EAX + 0x1b1307c],EBX ; 0044a7e4
    MOV EBX,dword ptr [EDX + 0x4]       ; 0044a7ea
        ;   Label: LAB_0044a7ea
    CMP EBX,dword ptr [EAX + 0x1b1347c] ; 0044a7ed
    JLE 0x0044a800                      ; 0044a7f3
        ;   XREF to: 0044a800 (CONDITIONAL_JUMP)  ; LAB_0044a800
    MOV dword ptr [EAX + 0x1b1347c],EBX ; 0044a7f5
    JMP 0x0044a699                      ; 0044a7fb
        ;   XREF to: 0044a699 (UNCONDITIONAL_JUMP)  ; LAB_0044a699
    TEST ECX,ECX                        ; 0044a800
        ;   Label: LAB_0044a800
    JNZ 0x0044a66c                      ; 0044a802
        ;   XREF to: 0044a66c (CONDITIONAL_JUMP)  ; LAB_0044a66c
    JMP 0x0044a665                      ; 0044a808
        ;   XREF to: 0044a665 (UNCONDITIONAL_JUMP)  ; LAB_0044a665

