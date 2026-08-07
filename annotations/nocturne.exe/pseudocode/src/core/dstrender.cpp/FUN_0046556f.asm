; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dstrender_cpp_FUN_0046556f(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; Referenced Globals:
;   undefined8 DAT_005b4788
;   undefined8 DAT_005b4790
;   undefined4 DAT_005b64f8
;   ulong g_SolidColorMode
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0046556f
        ;   Label: core_dstrender.cpp_FUN_0046556f
    MOV EBP,ESP                         ; 00465570
    PUSH ESI                            ; 00465572
    PUSH EDI                            ; 00465573
    PUSH EBP                            ; 00465574
    MOV ECX,dword ptr [EBP + 0x18]      ; 00465575
    MOV EDI,dword ptr [EBP + 0x8]       ; 00465578
    MOV ESI,dword ptr [EBP + 0xc]       ; 0046557b
    MOV EBX,dword ptr [EBP + 0x10]      ; 0046557e
    MOV EBP,dword ptr [EBP + 0x14]      ; 00465581
    PXOR MM7,MM7                        ; 00465584
    MOVD MM5,dword ptr [0x01c039a8]     ; 00465587 | g_SolidColorMode
    PUNPCKLBW MM5,MM7                   ; 0046558e
    PSLLW MM5,0x6                       ; 00465591
    MOVZX EDX,byte ptr [EBX]            ; 00465595
        ;   Label: LAB_00465595
    MOVQ MM0,qword ptr [ESI]            ; 00465598
    MOVD MM2,dword ptr [EDX*0x4 + 0xb0e1fc] ; 0046559b
    MOVZX EAX,byte ptr [EBP]            ; 004655a3
    MOVQ MM1,MM0                        ; 004655a7
    PUNPCKLBW MM0,MM7                   ; 004655aa
    SHR EDX,0x1                         ; 004655ad
    PSRLQ MM1,0x20                      ; 004655af
    PUNPCKLBW MM2,MM7                   ; 004655b3
    ADD EAX,EDX                         ; 004655b6
    PUNPCKLBW MM1,MM7                   ; 004655b8
    PMULLW MM0,MM2                      ; 004655bb
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5b5d00] ; 004655be
    PMULLW MM1,MM2                      ; 004655c6
    MOVQ MM2,MM3                        ; 004655c9
    MOVQ MM4,MM5                        ; 004655cc
    PXOR MM2,qword ptr [0x005b64f8]     ; 004655cf | DAT_005b64f8
    PMULHW MM0,MM2                      ; 004655d6
    PMULHW MM1,MM2                      ; 004655d9
    PMULHW MM4,MM3                      ; 004655dc
    PADDW MM0,MM4                       ; 004655df
    PADDW MM1,MM4                       ; 004655e2
    PADDW MM0,qword ptr [0x005b4788]    ; 004655e5 | DAT_005b4788
    PADDW MM1,qword ptr [0x005b4790]    ; 004655ec | DAT_005b4790
    PSRLW MM0,0x4                       ; 004655f3
    PSRLW MM1,0x4                       ; 004655f7
    PACKUSWB MM0,MM1                    ; 004655fb
    ADD ESI,0x8                         ; 004655fe
    MOVQ qword ptr [EDI],MM0            ; 00465601
    ADD EDI,0x8                         ; 00465604
    MOVZX EDX,byte ptr [EBX]            ; 00465607
    MOVQ MM0,qword ptr [ESI]            ; 0046560a
    MOVD MM2,dword ptr [EDX*0x4 + 0xb0e1fc] ; 0046560d
    MOVZX EAX,byte ptr [EBP]            ; 00465615
    MOVQ MM1,MM0                        ; 00465619
    PUNPCKLBW MM0,MM7                   ; 0046561c
    SHR EDX,0x1                         ; 0046561f
    PSRLQ MM1,0x20                      ; 00465621
    PUNPCKLBW MM2,MM7                   ; 00465625
    ADD EAX,EDX                         ; 00465628
    PUNPCKLBW MM1,MM7                   ; 0046562a
    PMULLW MM0,MM2                      ; 0046562d
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5b5d00] ; 00465630
    PMULLW MM1,MM2                      ; 00465638
    MOVQ MM2,MM3                        ; 0046563b
    MOVQ MM4,MM5                        ; 0046563e
    PXOR MM2,qword ptr [0x005b64f8]     ; 00465641 | DAT_005b64f8
    PMULHW MM0,MM2                      ; 00465648
    PMULHW MM1,MM2                      ; 0046564b
    PMULHW MM4,MM3                      ; 0046564e
    PADDW MM0,MM4                       ; 00465651
    PADDW MM1,MM4                       ; 00465654
    PADDW MM0,qword ptr [0x005b4788]    ; 00465657 | DAT_005b4788
    PADDW MM1,qword ptr [0x005b4790]    ; 0046565e | DAT_005b4790
    PSRLW MM0,0x4                       ; 00465665
    PSRLW MM1,0x4                       ; 00465669
    PACKUSWB MM0,MM1                    ; 0046566d
    ADD ESI,0x8                         ; 00465670
    MOVQ qword ptr [EDI],MM0            ; 00465673
    ADD EDI,0x8                         ; 00465676
    INC EBX                             ; 00465679
    INC EBP                             ; 0046567a
    SUB ECX,0x4                         ; 0046567b
    JG 0x00465595                       ; 0046567e
        ;   XREF to: 00465595 (CONDITIONAL_JUMP)  ; LAB_00465595
    POP EBP                             ; 00465684
    EMMS                                ; 00465685
    POP EDI                             ; 00465687
    POP ESI                             ; 00465688
    LEAVE                               ; 00465689
    RET                                 ; 0046568a

