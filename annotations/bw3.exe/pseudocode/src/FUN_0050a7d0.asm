; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050a7d0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e2fd8
;   undefined4 DAT_005fba60
;   undefined4 DAT_00600530
;   undefined4 DAT_01d81080
;
; Called Functions:
;   FUN_00408b00
;   FUN_00433350
;   FUN_00433fb0
;   FUN_00491aa0
;   FUN_004f6930
;   FUN_004f6f10
;   FUN_004fbb70
;   FUN_004fc070
;   FUN_004fc0d0
;   FUN_0054c130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050a7d0
        ;   Label: FUN_0050a7d0
    PUSH ESI                            ; 0050a7d1
    PUSH EDI                            ; 0050a7d2
    PUSH EBP                            ; 0050a7d3
    MOV EBP,ESP                         ; 0050a7d4
    SUB ESP,0x1c                        ; 0050a7d6
    AND ESP,0xfffffff8                  ; 0050a7d9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0050a7dc
    FLD float ptr [EBX + 0x21400]       ; 0050a7df
    FLD1                                ; 0050a7e5
    FCOMPP                              ; 0050a7e7
    FNSTSW AX                           ; 0050a7e9
    SAHF                                ; 0050a7eb
    JA 0x0050a7f5                       ; 0050a7ec
        ;   XREF to: 0050a7f5 (CONDITIONAL_JUMP)  ; LAB_0050a7f5
    MOV ESP,EBP                         ; 0050a7ee
    POP EBP                             ; 0050a7f0
    POP EDI                             ; 0050a7f1
    POP ESI                             ; 0050a7f2
    POP EBX                             ; 0050a7f3
    RET                                 ; 0050a7f4
    LEA ESI,[EBX + 0x158]               ; 0050a7f5
        ;   Label: LAB_0050a7f5
    PUSH ESI                            ; 0050a7fb
    CALL FUN_004fc070                   ; 0050a7fc
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0050a801
    ADD ESP,0x4                         ; 0050a804
    MOV EDI,EAX                         ; 0050a807
    CMP EAX,0x1                         ; 0050a809
    JZ 0x0050a8b5                       ; 0050a80c
        ;   XREF to: 0050a8b5 (CONDITIONAL_JUMP)  ; LAB_0050a8b5
    CMP EAX,0x2                         ; 0050a812
    JZ 0x0050a8b5                       ; 0050a815
        ;   XREF to: 0050a8b5 (CONDITIONAL_JUMP)  ; LAB_0050a8b5
    LEA EAX,[EBX + 0x206c8]             ; 0050a81b
    PUSH EAX                            ; 0050a821
    MOV EDX,dword ptr [0x005fba60]      ; 0050a822 | DAT_005fba60
    PUSH EDX                            ; 0050a828
    CALL FUN_00491aa0                   ; 0050a829
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00491aa0()
    ADD ESP,0x8                         ; 0050a82e
    TEST EAX,EAX                        ; 0050a831
    JNZ 0x0050a881                      ; 0050a833
        ;   XREF to: 0050a881 (CONDITIONAL_JUMP)  ; LAB_0050a881
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050a835
        ;   Label: LAB_0050a835
    MOV dword ptr [ESP],EAX             ; 0050a838
    LEA EAX,[EBX + 0x249c]              ; 0050a83b
    MOV dword ptr [EAX + 0x8],0x0       ; 0050a841
    LEA ESI,[EBX + 0x158]               ; 0050a848
    MOV EDX,dword ptr [EAX + 0x8]       ; 0050a84e
    MOV dword ptr [EAX + 0x4],EDX       ; 0050a851
    MOV EDX,dword ptr [EAX + 0x4]       ; 0050a854
    MOV dword ptr [EAX],EDX             ; 0050a857
    FLD float ptr [ESP]                 ; 0050a859
        ;   Label: LAB_0050a859
    FLDZ                                ; 0050a85c
    FCOMPP                              ; 0050a85e
    FNSTSW AX                           ; 0050a860
    SAHF                                ; 0050a862
    JNC 0x0050a91e                      ; 0050a863
        ;   XREF to: 0050a91e (CONDITIONAL_JUMP)  ; LAB_0050a91e
    MOV EAX,ESP                         ; 0050a869
    PUSH EAX                            ; 0050a86b
    PUSH ESI                            ; 0050a86c
    CALL FUN_004fbb70                   ; 0050a86d
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; undefined FUN_004fbb70()
    ADD ESP,0x8                         ; 0050a872
    PUSH EAX                            ; 0050a875
    PUSH EBX                            ; 0050a876
    CALL FUN_00433fb0                   ; 0050a877
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00433fb0()
    ADD ESP,0x8                         ; 0050a87c
    JMP 0x0050a859                      ; 0050a87f
        ;   XREF to: 0050a859 (UNCONDITIONAL_JUMP)  ; LAB_0050a859
    PUSH 0x1                            ; 0050a881
        ;   Label: LAB_0050a881
    PUSH 0x1                            ; 0050a883
    PUSH ESI                            ; 0050a885
    CALL FUN_004fc0d0                   ; 0050a886
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    MOV AH,byte ptr [EBX + 0x2076c]     ; 0050a88b
    ADD ESP,0xc                         ; 0050a891
    TEST AH,AH                          ; 0050a894
    JZ 0x0050a835                       ; 0050a896
        ;   XREF to: 0050a835 (CONDITIONAL_JUMP)  ; LAB_0050a835
    LEA ESI,[EBX + 0x2076c]             ; 0050a898
    PUSH ESI                            ; 0050a89e
    MOV EAX,dword ptr [EBX + 0x154]     ; 0050a89f
    PUSH EBX                            ; 0050a8a5
    CALL dword ptr [EAX + 0x2c]         ; 0050a8a6
    ADD ESP,0x8                         ; 0050a8a9
    MOV byte ptr [EBX + 0x2076c],0x0    ; 0050a8ac
    JMP 0x0050a835                      ; 0050a8b3
        ;   XREF to: 0050a835 (UNCONDITIONAL_JUMP)  ; LAB_0050a835
    CMP EDI,0x2                         ; 0050a8b5
        ;   Label: LAB_0050a8b5
    JNZ 0x0050a835                      ; 0050a8b8
        ;   XREF to: 0050a835 (CONDITIONAL_JUMP)  ; LAB_0050a835
    FLD float ptr [EBP + 0x18]          ; 0050a8be
    FDIV float ptr [0x005e2fd8]         ; 0050a8c1 | DAT_005e2fd8
    FADD float ptr [EBX + 0x21400]      ; 0050a8c7
    FST float ptr [EBX + 0x21400]       ; 0050a8cd
    FLD1                                ; 0050a8d3
    FCOMPP                              ; 0050a8d5
    FNSTSW AX                           ; 0050a8d7
    SAHF                                ; 0050a8d9
    JA 0x0050a835                       ; 0050a8da
        ;   XREF to: 0050a835 (CONDITIONAL_JUMP)  ; LAB_0050a835
    MOV EDX,dword ptr [EBX + 0x207d0]   ; 0050a8e0
    TEST EDX,EDX                        ; 0050a8e6
    JZ 0x0050a835                       ; 0050a8e8
        ;   XREF to: 0050a835 (CONDITIONAL_JUMP)  ; LAB_0050a835
    PUSH EDX                            ; 0050a8ee
    MOV ESI,dword ptr [0x00600530]      ; 0050a8ef | DAT_00600530
    PUSH ESI                            ; 0050a8f5 | DAT_01d81080
    CALL FUN_004f6930                   ; 0050a8f6
        ;   XREF to: 004f6930 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6930()
    ADD ESP,0x8                         ; 0050a8fb
    PUSH 0x1                            ; 0050a8fe
    PUSH EBX                            ; 0050a900
    MOV EAX,[0x00600530]                ; 0050a901 | DAT_00600530
    PUSH EAX                            ; 0050a906 | DAT_01d81080
    MOV dword ptr [EBX + 0x207d0],0x0   ; 0050a907
    CALL FUN_004f6f10                   ; 0050a911
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6f10()
    ADD ESP,0xc                         ; 0050a916
    JMP 0x0050a835                      ; 0050a919
        ;   XREF to: 0050a835 (UNCONDITIONAL_JUMP)  ; LAB_0050a835
    TEST EDI,EDI                        ; 0050a91e
        ;   Label: LAB_0050a91e
    JZ 0x0050a98b                       ; 0050a920
        ;   XREF to: 0050a98b (CONDITIONAL_JUMP)  ; LAB_0050a98b
    LEA EAX,[EBX + 0x249c]              ; 0050a922
    PUSH EAX                            ; 0050a928
    PUSH EBX                            ; 0050a929
    LEA ESI,[ESP + 0x18]                ; 0050a92a
    LEA EDI,[ESP + 0xc]                 ; 0050a92e
    CALL FUN_00408b00                   ; 0050a932
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b00()
    LEA ESI,[ESP + 0x18]                ; 0050a937
    ADD ESP,0x8                         ; 0050a93b
    LEA EAX,[EBX + 0x20]                ; 0050a93e
    MOVSD ES:EDI,ESI                    ; 0050a941
    MOVSD ES:EDI,ESI                    ; 0050a942
    MOVSD ES:EDI,ESI                    ; 0050a943
    FLD float ptr [EAX]                 ; 0050a944
    FLD float ptr [EAX + 0x4]           ; 0050a946
    FLD float ptr [EAX + 0x8]           ; 0050a949
    FXCH ST2                            ; 0050a94c
    FADD float ptr [ESP + 0x4]          ; 0050a94e
    FXCH                                ; 0050a952
    FADD float ptr [ESP + 0x8]          ; 0050a954
    FXCH ST2                            ; 0050a958
    FADD float ptr [ESP + 0xc]          ; 0050a95a
    FXCH                                ; 0050a95e
    FSTP float ptr [EAX]                ; 0050a960
    FXCH                                ; 0050a962
    FSTP float ptr [EAX + 0x4]          ; 0050a964
    FSTP float ptr [EAX + 0x8]          ; 0050a967
    MOV ECX,dword ptr [EBX + 0x207d0]   ; 0050a96a
    TEST ECX,ECX                        ; 0050a970
    JZ 0x0050a98b                       ; 0050a972
        ;   XREF to: 0050a98b (CONDITIONAL_JUMP)  ; LAB_0050a98b
    MOV EDX,dword ptr [EAX]             ; 0050a974
    MOV dword ptr [ECX + 0x20],EDX      ; 0050a976
    MOV EDX,dword ptr [EAX + 0x4]       ; 0050a979
    MOV dword ptr [ECX + 0x24],EDX      ; 0050a97c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0050a97f
    MOV dword ptr [ECX + 0x28],EDX      ; 0050a982
    MOV EAX,dword ptr [EAX + 0xc]       ; 0050a985
    MOV dword ptr [ECX + 0x2c],EAX      ; 0050a988
    LEA EAX,[EBX + 0x158]               ; 0050a98b
        ;   Label: LAB_0050a98b
    PUSH EAX                            ; 0050a991
    CALL FUN_0054c130                   ; 0050a992
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; undefined FUN_0054c130()
    ADD ESP,0x4                         ; 0050a997
    PUSH dword ptr [EBP + 0x18]         ; 0050a99a
    PUSH EBX                            ; 0050a99d
    CALL FUN_00433350                   ; 0050a99e
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; undefined FUN_00433350()
    ADD ESP,0x8                         ; 0050a9a3
    MOV ESP,EBP                         ; 0050a9a6
    POP EBP                             ; 0050a9a8
    POP EDI                             ; 0050a9a9
    POP ESI                             ; 0050a9aa
    POP EBX                             ; 0050a9ab
    RET                                 ; 0050a9ac

