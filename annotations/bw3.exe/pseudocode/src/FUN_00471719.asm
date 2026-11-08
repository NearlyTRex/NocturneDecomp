; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00471719(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; Referenced Globals:
;   undefined8 DAT_005f8b68
;   undefined8 DAT_005f8b70
;   undefined4 DAT_005fa8d8
;   undefined4 DAT_01c6e2bc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00471719
        ;   Label: FUN_00471719
    MOV EBP,ESP                         ; 0047171a
    PUSH ESI                            ; 0047171c
    PUSH EDI                            ; 0047171d
    PUSH EBP                            ; 0047171e
    MOV ECX,dword ptr [EBP + 0x18]      ; 0047171f
    MOV EDI,dword ptr [EBP + 0x8]       ; 00471722
    MOV ESI,dword ptr [EBP + 0xc]       ; 00471725
    MOV EBX,dword ptr [EBP + 0x10]      ; 00471728
    MOV EBP,dword ptr [EBP + 0x14]      ; 0047172b
    PXOR MM7,MM7                        ; 0047172e
    MOVD MM5,dword ptr [0x01c6e2bc]     ; 00471731 | DAT_01c6e2bc
    PUNPCKLBW MM5,MM7                   ; 00471738
    PSLLW MM5,0x6                       ; 0047173b
    MOVZX EDX,byte ptr [EBX]            ; 0047173f
        ;   Label: LAB_0047173f
    MOVQ MM0,qword ptr [ESI]            ; 00471742
    MOVD MM2,dword ptr [EDX*0x4 + 0xb9e14c] ; 00471745
    MOVZX EAX,byte ptr [EBP]            ; 0047174d
    MOVQ MM1,MM0                        ; 00471751
    PUNPCKLBW MM0,MM7                   ; 00471754
    SHR EDX,0x1                         ; 00471757
    PSRLQ MM1,0x20                      ; 00471759
    PUNPCKLBW MM2,MM7                   ; 0047175d
    ADD EAX,EDX                         ; 00471760
    PUNPCKLBW MM1,MM7                   ; 00471762
    PMULLW MM0,MM2                      ; 00471765
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5fa0e0] ; 00471768
    PMULLW MM1,MM2                      ; 00471770
    MOVQ MM2,MM3                        ; 00471773
    MOVQ MM4,MM5                        ; 00471776
    PXOR MM2,qword ptr [0x005fa8d8]     ; 00471779 | DAT_005fa8d8
    PMULHW MM0,MM2                      ; 00471780
    PMULHW MM1,MM2                      ; 00471783
    PMULHW MM4,MM3                      ; 00471786
    PADDW MM0,MM4                       ; 00471789
    PADDW MM1,MM4                       ; 0047178c
    PADDW MM0,qword ptr [0x005f8b68]    ; 0047178f | DAT_005f8b68
    PADDW MM1,qword ptr [0x005f8b70]    ; 00471796 | DAT_005f8b70
    PSRLW MM0,0x4                       ; 0047179d
    PSRLW MM1,0x4                       ; 004717a1
    PACKUSWB MM0,MM1                    ; 004717a5
    ADD ESI,0x8                         ; 004717a8
    MOVQ qword ptr [EDI],MM0            ; 004717ab
    ADD EDI,0x8                         ; 004717ae
    MOVZX EDX,byte ptr [EBX]            ; 004717b1
    MOVQ MM0,qword ptr [ESI]            ; 004717b4
    MOVD MM2,dword ptr [EDX*0x4 + 0xb9e14c] ; 004717b7
    MOVZX EAX,byte ptr [EBP]            ; 004717bf
    MOVQ MM1,MM0                        ; 004717c3
    PUNPCKLBW MM0,MM7                   ; 004717c6
    SHR EDX,0x1                         ; 004717c9
    PSRLQ MM1,0x20                      ; 004717cb
    PUNPCKLBW MM2,MM7                   ; 004717cf
    ADD EAX,EDX                         ; 004717d2
    PUNPCKLBW MM1,MM7                   ; 004717d4
    PMULLW MM0,MM2                      ; 004717d7
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5fa0e0] ; 004717da
    PMULLW MM1,MM2                      ; 004717e2
    MOVQ MM2,MM3                        ; 004717e5
    MOVQ MM4,MM5                        ; 004717e8
    PXOR MM2,qword ptr [0x005fa8d8]     ; 004717eb | DAT_005fa8d8
    PMULHW MM0,MM2                      ; 004717f2
    PMULHW MM1,MM2                      ; 004717f5
    PMULHW MM4,MM3                      ; 004717f8
    PADDW MM0,MM4                       ; 004717fb
    PADDW MM1,MM4                       ; 004717fe
    PADDW MM0,qword ptr [0x005f8b68]    ; 00471801 | DAT_005f8b68
    PADDW MM1,qword ptr [0x005f8b70]    ; 00471808 | DAT_005f8b70
    PSRLW MM0,0x4                       ; 0047180f
    PSRLW MM1,0x4                       ; 00471813
    PACKUSWB MM0,MM1                    ; 00471817
    ADD ESI,0x8                         ; 0047181a
    MOVQ qword ptr [EDI],MM0            ; 0047181d
    ADD EDI,0x8                         ; 00471820
    INC EBX                             ; 00471823
    INC EBP                             ; 00471824
    SUB ECX,0x4                         ; 00471825
    JG 0x0047173f                       ; 00471828
        ;   XREF to: 0047173f (CONDITIONAL_JUMP)  ; LAB_0047173f
    POP EBP                             ; 0047182e
    EMMS                                ; 0047182f
    POP EDI                             ; 00471831
    POP ESI                             ; 00471832
    LEAVE                               ; 00471833
    RET                                 ; 00471834

