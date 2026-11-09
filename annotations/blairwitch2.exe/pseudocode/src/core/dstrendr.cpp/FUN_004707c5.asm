; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dstrendr_cpp_FUN_004707c5(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; Referenced Globals:
;   undefined8 DAT_00611318
;   undefined8 DAT_00611320
;   undefined4 DAT_00613078
;   undefined4 DAT_01c38b5c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004707c5
        ;   Label: core_dstrendr.cpp_FUN_004707c5
    MOV EBP,ESP                         ; 004707c6
    PUSH ESI                            ; 004707c8
    PUSH EDI                            ; 004707c9
    PUSH EBP                            ; 004707ca
    MOV ECX,dword ptr [EBP + 0x18]      ; 004707cb
    MOV EDI,dword ptr [EBP + 0x8]       ; 004707ce
    MOV ESI,dword ptr [EBP + 0xc]       ; 004707d1
    MOV EBX,dword ptr [EBP + 0x10]      ; 004707d4
    MOV EBP,dword ptr [EBP + 0x14]      ; 004707d7
    PXOR MM7,MM7                        ; 004707da
    MOVD MM5,dword ptr [0x01c38b5c]     ; 004707dd | DAT_01c38b5c
    PUNPCKLBW MM5,MM7                   ; 004707e4
    PSLLW MM5,0x6                       ; 004707e7
    MOVZX EDX,byte ptr [EBX]            ; 004707eb
        ;   Label: LAB_004707eb
    MOVQ MM0,qword ptr [ESI]            ; 004707ee
    MOVD MM2,dword ptr [EDX*0x4 + 0xb6639c] ; 004707f1
    MOVZX EAX,byte ptr [EBP]            ; 004707f9
    MOVQ MM1,MM0                        ; 004707fd
    PUNPCKLBW MM0,MM7                   ; 00470800
    SHR EDX,0x1                         ; 00470803
    PSRLQ MM1,0x20                      ; 00470805
    PUNPCKLBW MM2,MM7                   ; 00470809
    ADD EAX,EDX                         ; 0047080c
    PUNPCKLBW MM1,MM7                   ; 0047080e
    PMULLW MM0,MM2                      ; 00470811
    MOVQ MM3,qword ptr [EAX*0x8 + 0x612880] ; 00470814
    PMULLW MM1,MM2                      ; 0047081c
    MOVQ MM2,MM3                        ; 0047081f
    MOVQ MM4,MM5                        ; 00470822
    PXOR MM2,qword ptr [0x00613078]     ; 00470825 | DAT_00613078
    PMULHW MM0,MM2                      ; 0047082c
    PMULHW MM1,MM2                      ; 0047082f
    PMULHW MM4,MM3                      ; 00470832
    PADDW MM0,MM4                       ; 00470835
    PADDW MM1,MM4                       ; 00470838
    PADDW MM0,qword ptr [0x00611318]    ; 0047083b | DAT_00611318
    PADDW MM1,qword ptr [0x00611320]    ; 00470842 | DAT_00611320
    PSRLW MM0,0x4                       ; 00470849
    PSRLW MM1,0x4                       ; 0047084d
    PACKUSWB MM0,MM1                    ; 00470851
    ADD ESI,0x8                         ; 00470854
    MOVQ qword ptr [EDI],MM0            ; 00470857
    ADD EDI,0x8                         ; 0047085a
    MOVZX EDX,byte ptr [EBX]            ; 0047085d
    MOVQ MM0,qword ptr [ESI]            ; 00470860
    MOVD MM2,dword ptr [EDX*0x4 + 0xb6639c] ; 00470863
    MOVZX EAX,byte ptr [EBP]            ; 0047086b
    MOVQ MM1,MM0                        ; 0047086f
    PUNPCKLBW MM0,MM7                   ; 00470872
    SHR EDX,0x1                         ; 00470875
    PSRLQ MM1,0x20                      ; 00470877
    PUNPCKLBW MM2,MM7                   ; 0047087b
    ADD EAX,EDX                         ; 0047087e
    PUNPCKLBW MM1,MM7                   ; 00470880
    PMULLW MM0,MM2                      ; 00470883
    MOVQ MM3,qword ptr [EAX*0x8 + 0x612880] ; 00470886
    PMULLW MM1,MM2                      ; 0047088e
    MOVQ MM2,MM3                        ; 00470891
    MOVQ MM4,MM5                        ; 00470894
    PXOR MM2,qword ptr [0x00613078]     ; 00470897 | DAT_00613078
    PMULHW MM0,MM2                      ; 0047089e
    PMULHW MM1,MM2                      ; 004708a1
    PMULHW MM4,MM3                      ; 004708a4
    PADDW MM0,MM4                       ; 004708a7
    PADDW MM1,MM4                       ; 004708aa
    PADDW MM0,qword ptr [0x00611318]    ; 004708ad | DAT_00611318
    PADDW MM1,qword ptr [0x00611320]    ; 004708b4 | DAT_00611320
    PSRLW MM0,0x4                       ; 004708bb
    PSRLW MM1,0x4                       ; 004708bf
    PACKUSWB MM0,MM1                    ; 004708c3
    ADD ESI,0x8                         ; 004708c6
    MOVQ qword ptr [EDI],MM0            ; 004708c9
    ADD EDI,0x8                         ; 004708cc
    INC EBX                             ; 004708cf
    INC EBP                             ; 004708d0
    SUB ECX,0x4                         ; 004708d1
    JG 0x004707eb                       ; 004708d4
        ;   XREF to: 004707eb (CONDITIONAL_JUMP)  ; LAB_004707eb
    POP EBP                             ; 004708da
    EMMS                                ; 004708db
    POP EDI                             ; 004708dd
    POP ESI                             ; 004708de
    LEAVE                               ; 004708df
    RET                                 ; 004708e0

