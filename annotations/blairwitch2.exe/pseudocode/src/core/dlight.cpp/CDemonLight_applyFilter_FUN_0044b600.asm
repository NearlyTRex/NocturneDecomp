; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_applyFilter_FUN_0044b600(CDemonLight *this_ptr,CDemonFilter *filter_ptr,int filter_index,int filter_pos_x,int filter_pos_y)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; CDemonFilter *   Stack[0x8]:4   filter_ptr
; int              Stack[0xc]:4   filter_index
; int              Stack[0x10]:4   filter_pos_x
; int              Stack[0x14]:4   filter_pos_y
; Local Variables:
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   core_boxactor.cpp_CLightActor_process_FUN_0041d020 at 0041d0b7
;   core_boxactor.cpp_CLightActor_setupLightModel_FUN_0041d350 at 0041d772
;   core_dlight.cpp_CDemonLight_init_FUN_00449d90 at 00449e2e
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570 at 0044d5b6
;   core_lightgun.cpp_CLightGun_process_FUN_004e38d0 at 004e3a0a
;   core_setutil.cpp_C3DSLight_advanceFilter_FUN_0053ba90 at 0053bae8
;   core_setutil.cpp_C3DSLight_process_FUN_0053b8d0 at 0053b9d1
;   core_setutil.cpp_C3DSLight_setFilterFrame_FUN_0053bb20 at 0053bb5e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044b600
        ;   Label: core_dlight.cpp_CDemonLight_applyFilter_FUN_0044b600
    PUSH ESI                            ; 0044b601
    PUSH EDI                            ; 0044b602
    PUSH EBP                            ; 0044b603
    SUB ESP,0x30                        ; 0044b604
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0044b607
    MOV EDX,dword ptr [ESP + 0x50]      ; 0044b60b
    MOV ECX,dword ptr [ESP + 0x54]      ; 0044b60f
    MOV EAX,dword ptr [ESP + 0x48]      ; 0044b613
    MOV ESI,dword ptr [ESP + 0x44]      ; 0044b617
    MOV EAX,dword ptr [EAX + 0x48]      ; 0044b61b
    MOV dword ptr [ESI + 0x1c54],EAX    ; 0044b61e
    MOV EAX,dword ptr [ESP + 0x48]      ; 0044b624
    MOV EAX,dword ptr [EAX]             ; 0044b628
    MOV dword ptr [ESI + 0x1c58],EAX    ; 0044b62a
    MOV EAX,dword ptr [ESP + 0x48]      ; 0044b630
    MOV EAX,dword ptr [EAX + 0x4]       ; 0044b634
    MOV dword ptr [ESI + 0x1c5c],EAX    ; 0044b637
    MOV EAX,dword ptr [ESI + 0x1c58]    ; 0044b63d
    MOV dword ptr [ESI + 0x1c60],0x0    ; 0044b643
    CMP EAX,0x1                         ; 0044b64d
    JLE 0x0044b670                      ; 0044b650
        ;   XREF to: 0044b670 (CONDITIONAL_JUMP)  ; LAB_0044b670
    MOV ESI,dword ptr [ESP + 0x44]      ; 0044b652
    MOV EDI,dword ptr [ESI + 0x1c60]    ; 0044b656
        ;   Label: LAB_0044b656
    INC EDI                             ; 0044b65c
    SAR EAX,0x1                         ; 0044b65d
    MOV dword ptr [ESI + 0x1c60],EDI    ; 0044b65f
    CMP EAX,0x1                         ; 0044b665
    JG 0x0044b656                       ; 0044b668
        ;   XREF to: 0044b656 (CONDITIONAL_JUMP)  ; LAB_0044b656
    LEA EAX,[EAX]                       ; 0044b66a
    MOV EAX,dword ptr [ESP + 0x44]      ; 0044b670
        ;   Label: LAB_0044b670
    MOV ESI,dword ptr [ESP + 0x44]      ; 0044b674
    MOV EAX,dword ptr [EAX + 0x1c60]    ; 0044b678
    MOV dword ptr [ESI + 0x1cc8],0x8    ; 0044b67e
    MOV dword ptr [ESI + 0x1c64],EAX    ; 0044b688
    MOV EAX,dword ptr [ESI + 0x1cc0]    ; 0044b68e
    MOV dword ptr [ESI + 0x1ccc],0x8    ; 0044b694
    CMP EAX,0x1                         ; 0044b69e
    JLE 0x0044b6d0                      ; 0044b6a1
        ;   XREF to: 0044b6d0 (CONDITIONAL_JUMP)  ; LAB_0044b6d0
    MOV ESI,dword ptr [ESP + 0x44]      ; 0044b6a3
    MOV EBP,dword ptr [ESI + 0x1cc8]    ; 0044b6a7
        ;   Label: LAB_0044b6a7
    MOV EDI,dword ptr [ESI + 0x1ccc]    ; 0044b6ad
    INC EBP                             ; 0044b6b3
    INC EDI                             ; 0044b6b4
    MOV dword ptr [ESI + 0x1cc8],EBP    ; 0044b6b5
    SAR EAX,0x1                         ; 0044b6bb
    MOV dword ptr [ESI + 0x1ccc],EDI    ; 0044b6bd
    CMP EAX,0x1                         ; 0044b6c3
    JG 0x0044b6a7                       ; 0044b6c6
        ;   XREF to: 0044b6a7 (CONDITIONAL_JUMP)  ; LAB_0044b6a7
    LEA EAX,[EAX]                       ; 0044b6c8
    MOV EDX,EDX                         ; 0044b6ce
    MOV EAX,dword ptr [ESP + 0x44]      ; 0044b6d0
        ;   Label: LAB_0044b6d0
    MOV EAX,dword ptr [EAX + 0x1c58]    ; 0044b6d4
    CMP EAX,0x100                       ; 0044b6da
    JGE 0x0044b710                      ; 0044b6df
        ;   XREF to: 0044b710 (CONDITIONAL_JUMP)  ; LAB_0044b710
    MOV ESI,dword ptr [ESP + 0x44]      ; 0044b6e1
    MOV EBP,dword ptr [ESI + 0x1cc8]    ; 0044b6e5
        ;   Label: LAB_0044b6e5
    MOV EDI,dword ptr [ESI + 0x1ccc]    ; 0044b6eb
    INC EBP                             ; 0044b6f1
    INC EDI                             ; 0044b6f2
    MOV dword ptr [ESI + 0x1cc8],EBP    ; 0044b6f3
    ADD EAX,EAX                         ; 0044b6f9
    MOV dword ptr [ESI + 0x1ccc],EDI    ; 0044b6fb
    CMP EAX,0x100                       ; 0044b701
    JL 0x0044b6e5                       ; 0044b706
        ;   XREF to: 0044b6e5 (CONDITIONAL_JUMP)  ; LAB_0044b6e5
    LEA EAX,[EAX]                       ; 0044b708
    MOV EDX,EDX                         ; 0044b70e
    MOV EAX,dword ptr [ESP + 0x44]      ; 0044b710
        ;   Label: LAB_0044b710
    MOV ESI,dword ptr [EAX + 0x1ccc]    ; 0044b714
    MOV EBP,dword ptr [EAX + 0x1cc8]    ; 0044b71a
    SUB ESI,EBX                         ; 0044b720
    SUB EBP,EBX                         ; 0044b722
    MOV dword ptr [EAX + 0x1ccc],ESI    ; 0044b724
    MOV dword ptr [EAX + 0x1cc8],EBP    ; 0044b72a
    MOV EAX,dword ptr [EAX + 0x1c58]    ; 0044b730
    MOV EBX,dword ptr [ESP + 0x44]      ; 0044b736
    DEC EAX                             ; 0044b73a
    MOV EDI,dword ptr [EBX + 0x1c6c]    ; 0044b73b
    MOV dword ptr [EBX + 0x1c68],EAX    ; 0044b741
    TEST EDI,EDI                        ; 0044b747
    JZ 0x0044b8e7                       ; 0044b749
        ;   XREF to: 0044b8e7 (CONDITIONAL_JUMP)  ; LAB_0044b8e7
    MOV EAX,EDX                         ; 0044b74f
    MOV dword ptr [ESP + 0xc],EDI       ; 0044b751
    XOR EBP,EBP                         ; 0044b755
    SAR EAX,0x8                         ; 0044b757
    AND EDX,0xff                        ; 0044b75a
    MOV dword ptr [ESP + 0x10],EBP      ; 0044b760
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044b764
    MOV dword ptr [ESP + 0x24],EDX      ; 0044b768
    MOV EAX,ECX                         ; 0044b76c
    MOV EDX,dword ptr [EBX + 0x1c5c]    ; 0044b76e
    SAR EAX,0x8                         ; 0044b774
    AND ECX,0xff                        ; 0044b777
    MOV dword ptr [ESP + 0x4],EAX       ; 0044b77d
    MOV dword ptr [ESP + 0x18],ECX      ; 0044b781
    TEST EDX,EDX                        ; 0044b785
    JLE 0x0044b8d3                      ; 0044b787
        ;   XREF to: 0044b8d3 (CONDITIONAL_JUMP)  ; LAB_0044b8d3
    MOV EAX,0xff                        ; 0044b78d
    MOV EBP,dword ptr [ESP + 0x24]      ; 0044b792
    SUB EAX,EBP                         ; 0044b796
    MOV dword ptr [ESP + 0x20],EAX      ; 0044b798
    MOV EAX,0xff                        ; 0044b79c
    SUB EAX,ECX                         ; 0044b7a1
    MOV dword ptr [ESP + 0x14],EAX      ; 0044b7a3
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044b7a7
    INC EAX                             ; 0044b7ab
    MOV dword ptr [ESP + 0x8],EAX       ; 0044b7ac
    MOV EAX,dword ptr [ESP + 0x44]      ; 0044b7b0
        ;   Label: LAB_0044b7b0
    MOV ECX,dword ptr [ESP + 0x10]      ; 0044b7b4
    MOV EBX,dword ptr [ESP + 0x4]       ; 0044b7b8
    MOV EDX,dword ptr [ESP + 0x44]      ; 0044b7bc
    MOV EAX,dword ptr [EAX + 0x1c5c]    ; 0044b7c0
    ADD ECX,EBX                         ; 0044b7c6
    DEC EAX                             ; 0044b7c8
    MOV ESI,dword ptr [EDX + 0x1c58]    ; 0044b7c9
    AND ECX,EAX                         ; 0044b7cf
    IMUL ECX,ESI                        ; 0044b7d1
    MOV EDX,dword ptr [EDX + 0x1c54]    ; 0044b7d4
    MOV EDI,dword ptr [ESP + 0x8]       ; 0044b7da
    LEA EBX,[EDX + ECX*0x1]             ; 0044b7de
    MOV ECX,dword ptr [ESP + 0x44]      ; 0044b7e1
    AND EAX,EDI                         ; 0044b7e5
    MOV EBP,dword ptr [ECX + 0x1c58]    ; 0044b7e7
    IMUL EAX,EBP                        ; 0044b7ed
    ADD EDX,EAX                         ; 0044b7f0
    MOV dword ptr [ESP + 0x2c],EBX      ; 0044b7f2
    MOV dword ptr [ESP + 0x28],EDX      ; 0044b7f6
    XOR EAX,EAX                         ; 0044b7fa
    TEST EBP,EBP                        ; 0044b7fc
    JLE 0x0044b89b                      ; 0044b7fe
        ;   XREF to: 0044b89b (CONDITIONAL_JUMP)  ; LAB_0044b89b
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0044b804
    MOV ECX,dword ptr [ESP + 0xc]       ; 0044b808
    INC EBX                             ; 0044b80c
    MOV EDX,dword ptr [ESP + 0x44]      ; 0044b80d
        ;   Label: LAB_0044b80d
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0044b811
    MOV EDX,dword ptr [EDX + 0x1c58]    ; 0044b815
    ADD EDI,EAX                         ; 0044b81b
    DEC EDX                             ; 0044b81d
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0044b81e
    AND EDI,EDX                         ; 0044b822
    MOV EBP,dword ptr [ESP + 0x20]      ; 0044b824
    MOVZX ESI,byte ptr [EDI + ESI*0x1]  ; 0044b828
    IMUL EBP,ESI                        ; 0044b82c
    MOV ESI,EBX                         ; 0044b82f
    AND ESI,EDX                         ; 0044b831
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0044b833
    MOV dword ptr [ESP],EBP             ; 0044b837
    MOV DL,byte ptr [EDX + ESI*0x1]     ; 0044b83a
    MOV EBP,dword ptr [ESP + 0x24]      ; 0044b83d
    AND EDX,0xff                        ; 0044b841
    IMUL EDX,EBP                        ; 0044b847
    ADD EDX,dword ptr [ESP]             ; 0044b84a
    ADD EDI,dword ptr [ESP + 0x28]      ; 0044b84d
    MOV EBP,dword ptr [ESP + 0x20]      ; 0044b851
    MOVZX EDI,byte ptr [EDI]            ; 0044b855
    IMUL EDI,EBP                        ; 0044b858
    ADD ESI,dword ptr [ESP + 0x28]      ; 0044b85b
    MOV EBP,dword ptr [ESP + 0x24]      ; 0044b85f
    MOVZX ESI,byte ptr [ESI]            ; 0044b863
    IMUL ESI,EBP                        ; 0044b866
    ADD ESI,EDI                         ; 0044b869
    MOV EDI,dword ptr [ESP + 0x14]      ; 0044b86b
    IMUL EDI,EDX                        ; 0044b86f
    MOV EDX,dword ptr [ESP + 0x18]      ; 0044b872
    IMUL EDX,ESI                        ; 0044b876
    ADD EDX,EDI                         ; 0044b879
    SHR EDX,0x10                        ; 0044b87b
    MOV dword ptr [ESP],EDX             ; 0044b87e
    MOV DL,byte ptr [ESP]               ; 0044b881
    MOV byte ptr [ECX],DL               ; 0044b884
    MOV EDX,dword ptr [ESP + 0x44]      ; 0044b886
    INC ECX                             ; 0044b88a
    INC EAX                             ; 0044b88b
    MOV ESI,dword ptr [EDX + 0x1c58]    ; 0044b88c
    INC EBX                             ; 0044b892
    CMP EAX,ESI                         ; 0044b893
    JL 0x0044b80d                       ; 0044b895
        ;   XREF to: 0044b80d (CONDITIONAL_JUMP)  ; LAB_0044b80d
    MOV EAX,dword ptr [ESP + 0x44]      ; 0044b89b
        ;   Label: LAB_0044b89b
    MOV ECX,dword ptr [ESP + 0xc]       ; 0044b89f
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044b8a3
    MOV ESI,dword ptr [ESP + 0x10]      ; 0044b8a7
    MOV EDX,dword ptr [ESP + 0x44]      ; 0044b8ab
    INC EBX                             ; 0044b8af
    INC ESI                             ; 0044b8b0
    MOV EAX,dword ptr [EAX + 0x1c58]    ; 0044b8b1
    MOV EDI,dword ptr [EDX + 0x1c5c]    ; 0044b8b7
    MOV dword ptr [ESP + 0x8],EBX       ; 0044b8bd
    ADD ECX,EAX                         ; 0044b8c1
    MOV dword ptr [ESP + 0x10],ESI      ; 0044b8c3
    MOV dword ptr [ESP + 0xc],ECX       ; 0044b8c7
    CMP ESI,EDI                         ; 0044b8cb
    JL 0x0044b7b0                       ; 0044b8cd
        ;   XREF to: 0044b7b0 (CONDITIONAL_JUMP)  ; LAB_0044b7b0
    MOV EAX,dword ptr [ESP + 0x44]      ; 0044b8d3
        ;   Label: LAB_0044b8d3
    MOV EDX,dword ptr [ESP + 0x44]      ; 0044b8d7
    MOV EAX,dword ptr [EAX + 0x1c6c]    ; 0044b8db
    MOV dword ptr [EDX + 0x1c54],EAX    ; 0044b8e1
    MOV ESI,dword ptr [ESP + 0x48]      ; 0044b8e7
        ;   Label: LAB_0044b8e7
    MOV EDI,dword ptr [ESP + 0x44]      ; 0044b8eb
    ADD ESI,0x8                         ; 0044b8ef
    ADD EDI,0x1c74                      ; 0044b8f2
    PUSH EDI                            ; 0044b8f8
    MOV AL,byte ptr [ESI]               ; 0044b8f9
        ;   Label: LAB_0044b8f9
    MOV byte ptr [EDI],AL               ; 0044b8fb
    CMP AL,0x0                          ; 0044b8fd
    JZ 0x0044b911                       ; 0044b8ff
        ;   XREF to: 0044b911 (CONDITIONAL_JUMP)  ; LAB_0044b911
    MOV AL,byte ptr [ESI + 0x1]         ; 0044b901
    ADD ESI,0x2                         ; 0044b904
    MOV byte ptr [EDI + 0x1],AL         ; 0044b907
    ADD EDI,0x2                         ; 0044b90a
    CMP AL,0x0                          ; 0044b90d
    JNZ 0x0044b8f9                      ; 0044b90f
        ;   XREF to: 0044b8f9 (CONDITIONAL_JUMP)  ; LAB_0044b8f9
    POP EDI                             ; 0044b911
        ;   Label: LAB_0044b911
    ADD ESP,0x30                        ; 0044b912
    POP EBP                             ; 0044b915
    POP EDI                             ; 0044b916
    POP ESI                             ; 0044b917
    POP EBX                             ; 0044b918
    RET                                 ; 0044b919

