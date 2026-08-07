; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dstrender_cpp_FUN_0046568b(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; Referenced Globals:
;   undefined8 DAT_005b4798
;   undefined8 DAT_005b47a0
;   undefined4 DAT_005b64f8
;   ulong g_SolidColorMode
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0046568b
        ;   Label: core_dstrender.cpp_FUN_0046568b
    MOV EBP,ESP                         ; 0046568c
    PUSH ESI                            ; 0046568e
    PUSH EDI                            ; 0046568f
    PUSH EBP                            ; 00465690
    MOV ECX,dword ptr [EBP + 0x18]      ; 00465691
    MOV EDI,dword ptr [EBP + 0x8]       ; 00465694
    MOV ESI,dword ptr [EBP + 0xc]       ; 00465697
    MOV EBX,dword ptr [EBP + 0x10]      ; 0046569a
    MOV EBP,dword ptr [EBP + 0x14]      ; 0046569d
    PXOR MM7,MM7                        ; 004656a0
    MOVD MM5,dword ptr [0x01c039a8]     ; 004656a3 | g_SolidColorMode
    PUNPCKLBW MM5,MM7                   ; 004656aa
    PSLLW MM5,0x6                       ; 004656ad
    MOVZX EDX,byte ptr [EBX]            ; 004656b1
        ;   Label: LAB_004656b1
    MOVQ MM0,qword ptr [ESI]            ; 004656b4
    MOVD MM2,dword ptr [EDX*0x4 + 0xb0e1fc] ; 004656b7
    MOVZX EAX,byte ptr [EBP]            ; 004656bf
    MOVQ MM1,MM0                        ; 004656c3
    PUNPCKLBW MM0,MM7                   ; 004656c6
    SHR EDX,0x1                         ; 004656c9
    PSRLQ MM1,0x20                      ; 004656cb
    PUNPCKLBW MM2,MM7                   ; 004656cf
    ADD EAX,EDX                         ; 004656d2
    PUNPCKLBW MM1,MM7                   ; 004656d4
    PMULLW MM0,MM2                      ; 004656d7
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5b5d00] ; 004656da
    PMULLW MM1,MM2                      ; 004656e2
    MOVQ MM2,MM3                        ; 004656e5
    MOVQ MM4,MM5                        ; 004656e8
    PXOR MM2,qword ptr [0x005b64f8]     ; 004656eb | DAT_005b64f8
    PMULHW MM0,MM2                      ; 004656f2
    PMULHW MM1,MM2                      ; 004656f5
    PMULHW MM4,MM3                      ; 004656f8
    PADDW MM0,MM4                       ; 004656fb
    PADDW MM1,MM4                       ; 004656fe
    PADDW MM0,qword ptr [0x005b4798]    ; 00465701 | DAT_005b4798
    PADDW MM1,qword ptr [0x005b47a0]    ; 00465708 | DAT_005b47a0
    PSRLW MM0,0x4                       ; 0046570f
    PSRLW MM1,0x4                       ; 00465713
    PACKUSWB MM0,MM1                    ; 00465717
    ADD ESI,0x8                         ; 0046571a
    MOVQ qword ptr [EDI],MM0            ; 0046571d
    ADD EDI,0x8                         ; 00465720
    MOVZX EDX,byte ptr [EBX]            ; 00465723
    MOVQ MM0,qword ptr [ESI]            ; 00465726
    MOVD MM2,dword ptr [EDX*0x4 + 0xb0e1fc] ; 00465729
    MOVZX EAX,byte ptr [EBP]            ; 00465731
    MOVQ MM1,MM0                        ; 00465735
    PUNPCKLBW MM0,MM7                   ; 00465738
    SHR EDX,0x1                         ; 0046573b
    PSRLQ MM1,0x20                      ; 0046573d
    PUNPCKLBW MM2,MM7                   ; 00465741
    ADD EAX,EDX                         ; 00465744
    PUNPCKLBW MM1,MM7                   ; 00465746
    PMULLW MM0,MM2                      ; 00465749
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5b5d00] ; 0046574c
    PMULLW MM1,MM2                      ; 00465754
    MOVQ MM2,MM3                        ; 00465757
    MOVQ MM4,MM5                        ; 0046575a
    PXOR MM2,qword ptr [0x005b64f8]     ; 0046575d | DAT_005b64f8
    PMULHW MM0,MM2                      ; 00465764
    PMULHW MM1,MM2                      ; 00465767
    PMULHW MM4,MM3                      ; 0046576a
    PADDW MM0,MM4                       ; 0046576d
    PADDW MM1,MM4                       ; 00465770
    PADDW MM0,qword ptr [0x005b4798]    ; 00465773 | DAT_005b4798
    PADDW MM1,qword ptr [0x005b47a0]    ; 0046577a | DAT_005b47a0
    PSRLW MM0,0x4                       ; 00465781
    PSRLW MM1,0x4                       ; 00465785
    PACKUSWB MM0,MM1                    ; 00465789
    ADD ESI,0x8                         ; 0046578c
    MOVQ qword ptr [EDI],MM0            ; 0046578f
    ADD EDI,0x8                         ; 00465792
    INC EBX                             ; 00465795
    INC EBP                             ; 00465796
    SUB ECX,0x4                         ; 00465797
    JG 0x004656b1                       ; 0046579a
        ;   XREF to: 004656b1 (CONDITIONAL_JUMP)  ; LAB_004656b1
    POP EBP                             ; 004657a0
    EMMS                                ; 004657a1
    POP EDI                             ; 004657a3
    POP ESI                             ; 004657a4
    LEAVE                               ; 004657a5
    RET                                 ; 004657a6

