; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_quantizePaletteColors_FUN_0046b770(byte *image_data,int pixel_count,int stride,int row_step,char *palette_data,char *bit_mask)
;
; Parameters:
; byte *           Stack[0x4]:4   image_data
; int              Stack[0x8]:4   pixel_count
; int              Stack[0xc]:4   stride
; int              Stack[0x10]:4   row_step
; char *           Stack[0x14]:4   palette_data
; char *           Stack[0x18]:4   bit_mask
; Local Variables:
; float            Stack[-0x34]:4  local_34
; uint             Stack[-0x30]:4  local_30
; uint             Stack[-0x2c]:4  local_2c
; byte             Stack[-0x1c]:1  local_1c
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_embedCopyrightWatermark_FUN_0046b9a0 at 0046ba80
;
; Referenced Globals:
;   double g_ColorMagnitudeWeightOriginal = 0.577350270000000
;   double g_ColorMagnitudeWeightPalette = 0.577350270000000
;   double g_RedChannelWeight = 0.300000000000000
;   double g_GreenChannelWeight = 0.590000000000000
;   double g_BlueChannelWeight = 0.110000000000000
;   double g_MagnitudeDifferenceWeight = 0.700000000000000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b770
        ;   Label: shape_design.c_quantizePaletteColors_FUN_0046b770
    PUSH ESI                            ; 0046b771
    PUSH EDI                            ; 0046b772
    PUSH EBP                            ; 0046b773
    MOV EBP,ESP                         ; 0046b774
    SUB ESP,0x50                        ; 0046b776
    MOV EDI,dword ptr [EBP + 0x28]      ; 0046b77c
    SUB ECX,ECX                         ; 0046b77f
    DEC ECX                             ; 0046b781
    XOR EAX,EAX                         ; 0046b782
    SCASB.REPNE ES:EDI                  ; 0046b784
    NOT ECX                             ; 0046b786
    DEC ECX                             ; 0046b788
    SHL ECX,0x3                         ; 0046b789
    MOV dword ptr [EBP + -0x8],ECX      ; 0046b78c
    MOV dword ptr [EBP + -0x4],0x0      ; 0046b78f
    JMP 0x0046b79b                      ; 0046b796
        ;   XREF to: 0046b79b (UNCONDITIONAL_JUMP)  ; LAB_0046b79b
    INC dword ptr [EBP + -0x4]          ; 0046b798
        ;   Label: LAB_0046b798
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046b79b
        ;   Label: LAB_0046b79b
    CMP EAX,dword ptr [EBP + 0x18]      ; 0046b79e
    JGE 0x0046b98b                      ; 0046b7a1
        ;   XREF to: 0046b98b (CONDITIONAL_JUMP)  ; LAB_0046b98b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046b7a7
    ADD EDX,dword ptr [EBP + 0x20]      ; 0046b7aa
    XOR EAX,EAX                         ; 0046b7ad
    MOV AL,byte ptr [EDX]               ; 0046b7af
    MOV dword ptr [EBP + -0xc],EAX      ; 0046b7b1
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046b7b4
    CMP EAX,dword ptr [EBP + -0x8]      ; 0046b7b7
    JGE 0x0046b978                      ; 0046b7ba
        ;   XREF to: 0046b978 (CONDITIONAL_JUMP)  ; LAB_0046b978
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046b7c0
    MOV EDX,dword ptr [EBP + -0x4]      ; 0046b7c3
    SAR EDX,0x1f                        ; 0046b7c6
    SHL EDX,0x3                         ; 0046b7c9
    SBB EAX,EDX                         ; 0046b7cc
    SAR EAX,0x3                         ; 0046b7ce
    ADD EAX,dword ptr [EBP + 0x28]      ; 0046b7d1
    XOR EDX,EDX                         ; 0046b7d4
    MOV DL,byte ptr [EAX]               ; 0046b7d6
    MOV ECX,dword ptr [EBP + -0x4]      ; 0046b7d8
    AND ECX,0x7                         ; 0046b7db
    MOV EAX,0x1                         ; 0046b7de
    SHL EAX,CL                          ; 0046b7e3
    TEST EDX,EAX                        ; 0046b7e5
    JZ 0x0046b978                       ; 0046b7e7
        ;   XREF to: 0046b978 (CONDITIONAL_JUMP)  ; LAB_0046b978
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046b7ed
    LEA EAX,[EAX + EAX*0x2]             ; 0046b7f0
    MOV EDX,dword ptr [EBP + 0x24]      ; 0046b7f3
    ADD EDX,EAX                         ; 0046b7f6
    XOR EAX,EAX                         ; 0046b7f8
    MOV AL,byte ptr [EDX]               ; 0046b7fa
    MOV dword ptr [EBP + -0x28],EAX     ; 0046b7fc
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046b7ff
    LEA EAX,[EAX + EAX*0x2]             ; 0046b802
    MOV EDX,dword ptr [EBP + 0x24]      ; 0046b805
    ADD EDX,EAX                         ; 0046b808
    XOR EAX,EAX                         ; 0046b80a
    MOV AL,byte ptr [EDX + 0x1]         ; 0046b80c
    MOV dword ptr [EBP + -0x18],EAX     ; 0046b80f
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046b812
    LEA EAX,[EAX + EAX*0x2]             ; 0046b815
    MOV EDX,dword ptr [EBP + 0x24]      ; 0046b818
    ADD EDX,EAX                         ; 0046b81b
    XOR EAX,EAX                         ; 0046b81d
    MOV AL,byte ptr [EDX + 0x2]         ; 0046b81f
    MOV dword ptr [EBP + -0x14],EAX     ; 0046b822
    MOV EDX,dword ptr [EBP + -0x18]     ; 0046b825
    IMUL EDX,dword ptr [EBP + -0x18]    ; 0046b828
    MOV EAX,dword ptr [EBP + -0x28]     ; 0046b82c
    IMUL EAX,dword ptr [EBP + -0x28]    ; 0046b82f
    ADD EDX,EAX                         ; 0046b833
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046b835
    IMUL EAX,dword ptr [EBP + -0x14]    ; 0046b838
    ADD EAX,EDX                         ; 0046b83c
    MOV dword ptr [EBP + -0x2c],EAX     ; 0046b83e
    FILD dword ptr [EBP + -0x2c]        ; 0046b841
    FSQRT                               ; 0046b844
    FMUL double ptr [0x0061d3ae]        ; 0046b846 | g_ColorMagnitudeWeightOriginal
    FSTP float ptr [EBP + -0x10]        ; 0046b84c
    MOV dword ptr [EBP + -0x24],0x7149f2ca ; 0046b84f
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046b856
    MOV dword ptr [EBP + -0x20],EAX     ; 0046b859
    MOV dword ptr [EBP + -0x1c],0x0     ; 0046b85c
    JMP 0x0046b868                      ; 0046b863
        ;   XREF to: 0046b868 (UNCONDITIONAL_JUMP)  ; LAB_0046b868
    INC dword ptr [EBP + -0x1c]         ; 0046b865
        ;   Label: LAB_0046b865
    CMP dword ptr [EBP + -0x1c],0x100   ; 0046b868
        ;   Label: LAB_0046b868
    JGE 0x0046b972                      ; 0046b86f
        ;   XREF to: 0046b972 (CONDITIONAL_JUMP)  ; LAB_0046b972
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046b875
    CMP EAX,dword ptr [EBP + -0xc]      ; 0046b878
    JNZ 0x0046b882                      ; 0046b87b
        ;   XREF to: 0046b882 (CONDITIONAL_JUMP)  ; LAB_0046b882
    JMP 0x0046b96d                      ; 0046b87d
        ;   XREF to: 0046b96d (UNCONDITIONAL_JUMP)  ; LAB_0046b96d
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046b882
        ;   Label: LAB_0046b882
    LEA EAX,[EAX + EAX*0x2]             ; 0046b885
    MOV EDX,dword ptr [EBP + 0x24]      ; 0046b888
    ADD EDX,EAX                         ; 0046b88b
    XOR EAX,EAX                         ; 0046b88d
    MOV AL,byte ptr [EDX]               ; 0046b88f
    MOV dword ptr [EBP + -0x50],EAX     ; 0046b891
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046b894
    LEA EAX,[EAX + EAX*0x2]             ; 0046b897
    MOV EDX,dword ptr [EBP + 0x24]      ; 0046b89a
    ADD EDX,EAX                         ; 0046b89d
    XOR EAX,EAX                         ; 0046b89f
    MOV AL,byte ptr [EDX + 0x1]         ; 0046b8a1
    MOV dword ptr [EBP + -0x4c],EAX     ; 0046b8a4
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046b8a7
    LEA EAX,[EAX + EAX*0x2]             ; 0046b8aa
    MOV EDX,dword ptr [EBP + 0x24]      ; 0046b8ad
    ADD EDX,EAX                         ; 0046b8b0
    XOR EAX,EAX                         ; 0046b8b2
    MOV AL,byte ptr [EDX + 0x2]         ; 0046b8b4
    MOV dword ptr [EBP + -0x48],EAX     ; 0046b8b7
    MOV EDX,dword ptr [EBP + -0x4c]     ; 0046b8ba
    IMUL EDX,dword ptr [EBP + -0x4c]    ; 0046b8bd
    MOV EAX,dword ptr [EBP + -0x50]     ; 0046b8c1
    IMUL EAX,dword ptr [EBP + -0x50]    ; 0046b8c4
    ADD EDX,EAX                         ; 0046b8c8
    MOV EAX,dword ptr [EBP + -0x48]     ; 0046b8ca
    IMUL EAX,dword ptr [EBP + -0x48]    ; 0046b8cd
    ADD EAX,EDX                         ; 0046b8d1
    MOV dword ptr [EBP + -0x2c],EAX     ; 0046b8d3
    FILD dword ptr [EBP + -0x2c]        ; 0046b8d6
    FSQRT                               ; 0046b8d9
    FMUL double ptr [0x0061d3b6]        ; 0046b8db | g_ColorMagnitudeWeightPalette
    FSTP float ptr [EBP + -0x44]        ; 0046b8e1
    MOV EAX,dword ptr [EBP + -0x28]     ; 0046b8e4
    SUB EAX,dword ptr [EBP + -0x50]     ; 0046b8e7
    MOV dword ptr [EBP + -0x40],EAX     ; 0046b8ea
    MOV EAX,dword ptr [EBP + -0x18]     ; 0046b8ed
    SUB EAX,dword ptr [EBP + -0x4c]     ; 0046b8f0
    MOV dword ptr [EBP + -0x3c],EAX     ; 0046b8f3
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046b8f6
    SUB EAX,dword ptr [EBP + -0x48]     ; 0046b8f9
    MOV dword ptr [EBP + -0x38],EAX     ; 0046b8fc
    FLD float ptr [EBP + -0x10]         ; 0046b8ff
    FSUB float ptr [EBP + -0x44]        ; 0046b902
    FSTP float ptr [EBP + -0x34]        ; 0046b905
    MOV EAX,dword ptr [EBP + -0x40]     ; 0046b908
    IMUL EAX,dword ptr [EBP + -0x40]    ; 0046b90b
    MOV dword ptr [EBP + -0x2c],EAX     ; 0046b90f
    FILD dword ptr [EBP + -0x2c]        ; 0046b912
    FMUL double ptr [0x0061d3be]        ; 0046b915 | g_RedChannelWeight
    MOV EAX,dword ptr [EBP + -0x3c]     ; 0046b91b
    IMUL EAX,dword ptr [EBP + -0x3c]    ; 0046b91e
    MOV dword ptr [EBP + -0x2c],EAX     ; 0046b922
    FILD dword ptr [EBP + -0x2c]        ; 0046b925
    FMUL double ptr [0x0061d3c6]        ; 0046b928 | g_GreenChannelWeight
    FADDP                               ; 0046b92e
    MOV EAX,dword ptr [EBP + -0x38]     ; 0046b930
    IMUL EAX,dword ptr [EBP + -0x38]    ; 0046b933
    MOV dword ptr [EBP + -0x2c],EAX     ; 0046b937
    FILD dword ptr [EBP + -0x2c]        ; 0046b93a
    FMUL double ptr [0x0061d3ce]        ; 0046b93d | g_BlueChannelWeight
    FADDP                               ; 0046b943
    FLD float ptr [EBP + -0x34]         ; 0046b945
    FMUL float ptr [EBP + -0x34]        ; 0046b948
    FMUL double ptr [0x0061d3d6]        ; 0046b94b | g_MagnitudeDifferenceWeight
    FADDP                               ; 0046b951
    FSTP float ptr [EBP + -0x30]        ; 0046b953
    FLD float ptr [EBP + -0x30]         ; 0046b956
    FCOMP float ptr [EBP + -0x24]       ; 0046b959
    FNSTSW AX                           ; 0046b95c
    SAHF                                ; 0046b95e
    JNC 0x0046b96d                      ; 0046b95f
        ;   XREF to: 0046b96d (CONDITIONAL_JUMP)  ; LAB_0046b96d
    MOV EAX,dword ptr [EBP + -0x1c]     ; 0046b961
    MOV dword ptr [EBP + -0x20],EAX     ; 0046b964
    MOV EAX,dword ptr [EBP + -0x30]     ; 0046b967
    MOV dword ptr [EBP + -0x24],EAX     ; 0046b96a
    JMP 0x0046b865                      ; 0046b96d
        ;   XREF to: 0046b865 (UNCONDITIONAL_JUMP)  ; LAB_0046b865
        ;   Label: LAB_0046b96d
    MOV EAX,dword ptr [EBP + -0x20]     ; 0046b972
        ;   Label: LAB_0046b972
    MOV dword ptr [EBP + -0xc],EAX      ; 0046b975
    MOV AL,byte ptr [EBP + -0xc]        ; 0046b978
        ;   Label: LAB_0046b978
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046b97b
    MOV byte ptr [EDX],AL               ; 0046b97e
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046b980
    ADD dword ptr [EBP + 0x14],EAX      ; 0046b983
    JMP 0x0046b798                      ; 0046b986
        ;   XREF to: 0046b798 (UNCONDITIONAL_JUMP)  ; LAB_0046b798
    MOV ESP,EBP                         ; 0046b98b
        ;   Label: LAB_0046b98b
    POP EBP                             ; 0046b98d
    POP EDI                             ; 0046b98e
    POP ESI                             ; 0046b98f
    POP EBX                             ; 0046b990
    RET                                 ; 0046b991

