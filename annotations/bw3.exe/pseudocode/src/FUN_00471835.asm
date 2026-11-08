; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00471835(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; Referenced Globals:
;   undefined8 DAT_005f8b78
;   undefined8 DAT_005f8b80
;   undefined4 DAT_005fa8d8
;   undefined4 DAT_01c6e2bc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00471835
        ;   Label: FUN_00471835
    MOV EBP,ESP                         ; 00471836
    PUSH ESI                            ; 00471838
    PUSH EDI                            ; 00471839
    PUSH EBP                            ; 0047183a
    MOV ECX,dword ptr [EBP + 0x18]      ; 0047183b
    MOV EDI,dword ptr [EBP + 0x8]       ; 0047183e
    MOV ESI,dword ptr [EBP + 0xc]       ; 00471841
    MOV EBX,dword ptr [EBP + 0x10]      ; 00471844
    MOV EBP,dword ptr [EBP + 0x14]      ; 00471847
    PXOR MM7,MM7                        ; 0047184a
    MOVD MM5,dword ptr [0x01c6e2bc]     ; 0047184d | DAT_01c6e2bc
    PUNPCKLBW MM5,MM7                   ; 00471854
    PSLLW MM5,0x6                       ; 00471857
    MOVZX EDX,byte ptr [EBX]            ; 0047185b
        ;   Label: LAB_0047185b
    MOVQ MM0,qword ptr [ESI]            ; 0047185e
    MOVD MM2,dword ptr [EDX*0x4 + 0xb9e14c] ; 00471861
    MOVZX EAX,byte ptr [EBP]            ; 00471869
    MOVQ MM1,MM0                        ; 0047186d
    PUNPCKLBW MM0,MM7                   ; 00471870
    SHR EDX,0x1                         ; 00471873
    PSRLQ MM1,0x20                      ; 00471875
    PUNPCKLBW MM2,MM7                   ; 00471879
    ADD EAX,EDX                         ; 0047187c
    PUNPCKLBW MM1,MM7                   ; 0047187e
    PMULLW MM0,MM2                      ; 00471881
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5fa0e0] ; 00471884
    PMULLW MM1,MM2                      ; 0047188c
    MOVQ MM2,MM3                        ; 0047188f
    MOVQ MM4,MM5                        ; 00471892
    PXOR MM2,qword ptr [0x005fa8d8]     ; 00471895 | DAT_005fa8d8
    PMULHW MM0,MM2                      ; 0047189c
    PMULHW MM1,MM2                      ; 0047189f
    PMULHW MM4,MM3                      ; 004718a2
    PADDW MM0,MM4                       ; 004718a5
    PADDW MM1,MM4                       ; 004718a8
    PADDW MM0,qword ptr [0x005f8b78]    ; 004718ab | DAT_005f8b78
    PADDW MM1,qword ptr [0x005f8b80]    ; 004718b2 | DAT_005f8b80
    PSRLW MM0,0x4                       ; 004718b9
    PSRLW MM1,0x4                       ; 004718bd
    PACKUSWB MM0,MM1                    ; 004718c1
    ADD ESI,0x8                         ; 004718c4
    MOVQ qword ptr [EDI],MM0            ; 004718c7
    ADD EDI,0x8                         ; 004718ca
    MOVZX EDX,byte ptr [EBX]            ; 004718cd
    MOVQ MM0,qword ptr [ESI]            ; 004718d0
    MOVD MM2,dword ptr [EDX*0x4 + 0xb9e14c] ; 004718d3
    MOVZX EAX,byte ptr [EBP]            ; 004718db
    MOVQ MM1,MM0                        ; 004718df
    PUNPCKLBW MM0,MM7                   ; 004718e2
    SHR EDX,0x1                         ; 004718e5
    PSRLQ MM1,0x20                      ; 004718e7
    PUNPCKLBW MM2,MM7                   ; 004718eb
    ADD EAX,EDX                         ; 004718ee
    PUNPCKLBW MM1,MM7                   ; 004718f0
    PMULLW MM0,MM2                      ; 004718f3
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5fa0e0] ; 004718f6
    PMULLW MM1,MM2                      ; 004718fe
    MOVQ MM2,MM3                        ; 00471901
    MOVQ MM4,MM5                        ; 00471904
    PXOR MM2,qword ptr [0x005fa8d8]     ; 00471907 | DAT_005fa8d8
    PMULHW MM0,MM2                      ; 0047190e
    PMULHW MM1,MM2                      ; 00471911
    PMULHW MM4,MM3                      ; 00471914
    PADDW MM0,MM4                       ; 00471917
    PADDW MM1,MM4                       ; 0047191a
    PADDW MM0,qword ptr [0x005f8b78]    ; 0047191d | DAT_005f8b78
    PADDW MM1,qword ptr [0x005f8b80]    ; 00471924 | DAT_005f8b80
    PSRLW MM0,0x4                       ; 0047192b
    PSRLW MM1,0x4                       ; 0047192f
    PACKUSWB MM0,MM1                    ; 00471933
    ADD ESI,0x8                         ; 00471936
    MOVQ qword ptr [EDI],MM0            ; 00471939
    ADD EDI,0x8                         ; 0047193c
    INC EBX                             ; 0047193f
    INC EBP                             ; 00471940
    SUB ECX,0x4                         ; 00471941
    JG 0x0047185b                       ; 00471944
        ;   XREF to: 0047185b (CONDITIONAL_JUMP)  ; LAB_0047185b
    POP EBP                             ; 0047194a
    EMMS                                ; 0047194b
    POP EDI                             ; 0047194d
    POP ESI                             ; 0047194e
    LEAVE                               ; 0047194f
    RET                                 ; 00471950

