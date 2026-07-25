; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660(int *param_1,int param_2,int *param_3,int param_4,int param_5)
;
;
; XREF[5]:
;   FUN_004df740 at 004df75d
;   core_morph.cpp_CMorphModel_addPartFromPolygon_FUN_004df2f0 at 004df3f5
;   core_morph.cpp_CMorphModel_addPartFromVertexBuffer_FUN_004df460 at 004df53b
;   core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_004df770 at 004df7b1
;   core_morph.cpp_CMorphModel_animateFromKeyframedModel_FUN_004df7c0 at 004df7e8
;
; Referenced Globals:
;   TerminatedCString s_core_morph_cpp_0058ab5a
;   TerminatedCString s_CMorphModel_animate_inva_0058ab6c
;   TerminatedCString s_core_morph_cpp_0058ab96
;   TerminatedCString s_CMorphModel_animate_inva_0058aba8
;   undefined4 DAT_005a0cc8
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df660
        ;   Label: core_morph.cpp_CMorphModel_animateFromVertexBuffer_FUN_004df660
    PUSH ESI                            ; 004df661
    PUSH EDI                            ; 004df662
    PUSH EBP                            ; 004df663
    MOV EBX,dword ptr [ESP + 0x18]      ; 004df664
    MOV EDI,dword ptr [ESP + 0x20]      ; 004df668
    MOV EBP,dword ptr [ESP + 0x24]      ; 004df66c
    TEST EBX,EBX                        ; 004df670
    JL 0x004df67c                       ; 004df672
        ;   XREF to: 004df67c (CONDITIONAL_JUMP)  ; LAB_004df67c
    MOV EDX,dword ptr [ESP + 0x14]      ; 004df674
    CMP EBX,dword ptr [EDX]             ; 004df678
    JL 0x004df69e                       ; 004df67a
        ;   XREF to: 004df69e (CONDITIONAL_JUMP)  ; LAB_004df69e
    MOV ESI,0x58ab5a                    ; 004df67c | = "..\\core\\morph.cpp"
        ;   Label: LAB_004df67c
    MOV EAX,0x112                       ; 004df681
    PUSH 0x58ab6c                       ; 004df686 | = "CMorphModel::animate - invalid part i..."
    MOV dword ptr [0x01cc4800],ESI      ; 004df68b | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 004df691 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004df696
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004df69b
    MOV ECX,EBX                         ; 004df69e
        ;   Label: LAB_004df69e
    MOV EDX,dword ptr [ESP + 0x14]      ; 004df6a0
    SHL ECX,0x4                         ; 004df6a4
    ADD ECX,EDX                         ; 004df6a7
    MOV EBX,dword ptr [ECX + 0xc]       ; 004df6a9
    MOV ESI,dword ptr [ECX + 0x4]       ; 004df6ac
    ADD EDI,EBX                         ; 004df6af
    LEA EDX,[EBX + ESI*0x1]             ; 004df6b1
    LEA ECX,[EDI + EBP*0x1]             ; 004df6b4
    CMP ECX,EDX                         ; 004df6b7
    JLE 0x004df6dd                      ; 004df6b9
        ;   XREF to: 004df6dd (CONDITIONAL_JUMP)  ; LAB_004df6dd
    MOV EAX,0x58ab96                    ; 004df6bb | = "..\\core\\morph.cpp"
    MOV EDX,0x119                       ; 004df6c0
    PUSH 0x58aba8                       ; 004df6c5 | = "CMorphModel::animate - invalid vertex..."
    MOV [0x01cc4800],EAX                ; 004df6ca | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004df6cf | DAT_01cc4804
    CALL FUN_004c8440                   ; 004df6d5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004df6da
    XOR ECX,ECX                         ; 004df6dd
        ;   Label: LAB_004df6dd
    TEST EBP,EBP                        ; 004df6df
    JLE 0x004df730                      ; 004df6e1
        ;   XREF to: 004df730 (CONDITIONAL_JUMP)  ; LAB_004df730
    MOV ESI,EDI                         ; 004df6e3
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004df6e5
    SHL ESI,0x4                         ; 004df6e9
    MOV EBX,dword ptr [ESP + 0x14]      ; 004df6ec
        ;   Label: LAB_004df6ec
    MOV EAX,EDX                         ; 004df6f0
    MOV EBX,dword ptr [EBX + 0x58]      ; 004df6f2
    INC EDI                             ; 004df6f5
    ADD EBX,ESI                         ; 004df6f6
    INC ECX                             ; 004df6f8
    ADD EBX,0x4                         ; 004df6f9
    ADD EDX,0xc                         ; 004df6fc
    FILD dword ptr [EAX]                ; 004df6ff
    FMUL float ptr [0x005a0cc8]         ; 004df701 | DAT_005a0cc8
    FSTP float ptr [EBX]                ; 004df707
    FILD dword ptr [EAX + 0x4]          ; 004df709
    FMUL float ptr [0x005a0cc8]         ; 004df70c | DAT_005a0cc8
    FSTP float ptr [EBX + 0x4]          ; 004df712
    FILD dword ptr [EAX + 0x8]          ; 004df715
    FMUL float ptr [0x005a0cc8]         ; 004df718 | DAT_005a0cc8
    FSTP float ptr [EBX + 0x8]          ; 004df71e
    ADD ESI,0x10                        ; 004df721
    CMP ECX,EBP                         ; 004df724
    JL 0x004df6ec                       ; 004df726
        ;   XREF to: 004df6ec (CONDITIONAL_JUMP)  ; LAB_004df6ec
    LEA EAX,[EAX]                       ; 004df728
    MOV EDX,EDX                         ; 004df72e
    POP EBP                             ; 004df730
        ;   Label: LAB_004df730
    POP EDI                             ; 004df731
    POP ESI                             ; 004df732
    POP EBX                             ; 004df733
    RET                                 ; 004df734

