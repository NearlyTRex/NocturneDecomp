; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx engine_special_cpp_renderMMXPerspectiveScanline16_FUN_0055bb93(SSoftwareEdge *left_vertex,SSoftwareEdge *right_vertex,int scanline_y)
;
;
; XREF[58]:
;   engine_3d.c_renderPolygonAdaptiveDepthOp25_FUN_00404b00 at 00404bc5
;   engine_3d.c_renderPolygonAdaptiveFogTexturedOp52_FUN_00406450 at 00406535
;   engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00404860 at 00404919
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePerspOp59_FUN_00406f40 at 00406fe0
;   engine_3d.c_renderPolygonAlphaBlendedDepthWritePlaneMaskedOp58_FUN_00406e00 at 00406ea0
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedOp36_FUN_004056b0 at 00405745
;   engine_3d.c_renderPolygonAlphaBlendedPlaneMaskedPerspOp37_FUN_004057d0 at 00405865
;   engine_3d.c_renderPolygonBlendedLitOp63_FUN_00406ca0 at 00406d48
;   engine_3d.c_renderPolygonDepthWritePass_FUN_00405980 at 00405a0b
;   engine_3d.c_renderPolygonDestReadBlendDepthLitOp55_FUN_004067c0 at 00406870
;   ... and 48 more
;
; Referenced Globals:
;   undefined4 DAT_006141d8
;   undefined4 DAT_0061c314
;   undefined4 DAT_0061c350
;   undefined4 DAT_0061c354
;   undefined4 DAT_0061c35c
;   undefined4 DAT_0061c378
;   undefined4 DAT_0061c37c
;   undefined4 DAT_0061c780
;   undefined4 DAT_0061c784
;   undefined4 DAT_0061c788
;   undefined8 DAT_0061c78c
;   undefined8 DAT_0061c800
;   undefined4 DAT_0061c808
;   undefined4 DAT_0061c810
;   undefined8 DAT_0061c820
;   ... and 32 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0055bb93
        ;   Label: engine_special.cpp_renderMMXPerspectiveScanline16_FUN_0055bb93
    PUSH EDI                            ; 0055bb94
    PUSH EBP                            ; 0055bb95
    MOV EAX,dword ptr [ESI + 0x8]       ; 0055bb96
    MOV ECX,dword ptr [EDI + 0x8]       ; 0055bb99
    CMP EAX,ECX                         ; 0055bb9c
    JBE 0x0055bba3                      ; 0055bb9e
        ;   XREF to: 0055bba3 (CONDITIONAL_JUMP)  ; LAB_0055bba3
    XCHG EAX,ECX                        ; 0055bba0
    XCHG EDI,ESI                        ; 0055bba1
    SHR ECX,0x10                        ; 0055bba3
        ;   Label: LAB_0055bba3
    SHR EAX,0x10                        ; 0055bba6
    MOV EBP,dword ptr [EBX*0x4 + 0x1c2b64c] ; 0055bba9 | DAT_01c2b64c
    MOV EBX,dword ptr [EBX*0x4 + 0x1c2a38c] ; 0055bbb0 | DAT_01c2a38c
    SUB ECX,EAX                         ; 0055bbb7
    JLE 0x0055c08c                      ; 0055bbb9
        ;   XREF to: 0055c08c (CONDITIONAL_JUMP)  ; LAB_0055c08c
    LEA EBX,[EBX + EAX*0x2]             ; 0055bbbf
    SHL ECX,0x2                         ; 0055bbc2
    LEA EBP,[EBP + EAX*0x4]             ; 0055bbc5
    MOV dword ptr [0x0061c314],ECX      ; 0055bbc9 | DAT_0061c314
    MOV dword ptr [0x0061c378],EBX      ; 0055bbcf | DAT_0061c378
    MOV dword ptr [0x0061c37c],EBP      ; 0055bbd5 | DAT_0061c37c
    CMP dword ptr [0x01c38b54],0x80     ; 0055bbdb | DAT_01c38b54
    JZ 0x0055c419                       ; 0055bbe5
        ;   XREF to: 0055c419 (CONDITIONAL_JUMP)  ; LAB_0055c419
    CMP dword ptr [0x01c38b58],0x5      ; 0055bbeb | DAT_01c38b58
    JNZ 0x0055bc64                      ; 0055bbf2
        ;   XREF to: 0055bc64 (CONDITIONAL_JUMP)  ; LAB_0055bc64
    MOV EAX,dword ptr [ESI + 0x18]      ; 0055bbf4
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055bbf7
    CDQ                                 ; 0055bbfa
    SHLD EDX,EAX,0x18                   ; 0055bbfb
    SHL EAX,0x18                        ; 0055bbff
    IDIV EBX                            ; 0055bc02
    MOV [0x0061c350],EAX                ; 0055bc04 | DAT_0061c350
    MOV EAX,dword ptr [EDI + 0x18]      ; 0055bc09
    MOV EBX,dword ptr [EDI + 0x28]      ; 0055bc0c
    CDQ                                 ; 0055bc0f
    SHLD EDX,EAX,0x18                   ; 0055bc10
    SHL EAX,0x18                        ; 0055bc14
    IDIV EBX                            ; 0055bc17
    SUB EAX,dword ptr [0x0061c350]      ; 0055bc19 | DAT_0061c350
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055bc1f | DAT_01c35e74
    MOV dword ptr [0x0061c780],EDX      ; 0055bc25 | DAT_0061c780
    MOV EAX,dword ptr [ESI + 0x20]      ; 0055bc2b
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055bc2e
    CDQ                                 ; 0055bc31
    SHLD EDX,EAX,0x18                   ; 0055bc32
    SHL EAX,0x18                        ; 0055bc36
    IDIV EBX                            ; 0055bc39
    MOV [0x0061c354],EAX                ; 0055bc3b | DAT_0061c354
    MOV EAX,dword ptr [EDI + 0x20]      ; 0055bc40
    MOV EBX,dword ptr [EDI + 0x28]      ; 0055bc43
    CDQ                                 ; 0055bc46
    SHLD EDX,EAX,0x18                   ; 0055bc47
    SHL EAX,0x18                        ; 0055bc4b
    IDIV EBX                            ; 0055bc4e
    SUB EAX,dword ptr [0x0061c354]      ; 0055bc50 | DAT_0061c354
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055bc56 | DAT_01c35e74
    MOV dword ptr [0x0061c784],EDX      ; 0055bc5c | DAT_0061c784
    JMP 0x0055bc98                      ; 0055bc62
        ;   XREF to: 0055bc98 (UNCONDITIONAL_JUMP)  ; LAB_0055bc98
    MOV EAX,dword ptr [EDI + 0x18]      ; 0055bc64
        ;   Label: LAB_0055bc64
    MOV EBX,dword ptr [ESI + 0x18]      ; 0055bc67
    SUB EAX,EBX                         ; 0055bc6a
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055bc6c | DAT_01c35e74
    MOV dword ptr [0x0061c350],EBX      ; 0055bc72 | DAT_0061c350
    MOV dword ptr [0x0061c780],EDX      ; 0055bc78 | DAT_0061c780
    MOV EAX,dword ptr [EDI + 0x20]      ; 0055bc7e
    MOV EBX,dword ptr [ESI + 0x20]      ; 0055bc81
    SUB EAX,EBX                         ; 0055bc84
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055bc86 | DAT_01c35e74
    MOV dword ptr [0x0061c354],EBX      ; 0055bc8c | DAT_0061c354
    MOV dword ptr [0x0061c784],EDX      ; 0055bc92 | DAT_0061c784
    MOV EAX,dword ptr [EDI + 0x28]      ; 0055bc98
        ;   Label: LAB_0055bc98
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055bc9b
    SUB EAX,EBX                         ; 0055bc9e
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055bca0 | DAT_01c35e74
    MOV dword ptr [0x0061c35c],EBX      ; 0055bca6 | DAT_0061c35c
    MOV dword ptr [0x0061c788],EDX      ; 0055bcac | DAT_0061c788
    MOV EAX,dword ptr [EDI + 0x30]      ; 0055bcb2
    MOV EBX,dword ptr [ESI + 0x30]      ; 0055bcb5
    SUB EAX,EBX                         ; 0055bcb8
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055bcba | DAT_01c35e74
    MOV dword ptr [0x0061c840],EBX      ; 0055bcc0 | DAT_0061c840
    MOV dword ptr [0x0061c848],EDX      ; 0055bcc6 | DAT_0061c848
    MOV EBP,dword ptr [0x0061c840]      ; 0055bccc | DAT_0061c840
    PXOR MM7,MM7                        ; 0055bcd2
    TEST dword ptr [0x01c38b54],0x200   ; 0055bcd5 | DAT_01c38b54
    JNZ 0x0055bd14                      ; 0055bcdf
        ;   XREF to: 0055bd14 (CONDITIONAL_JUMP)  ; LAB_0055bd14
    TEST dword ptr [0x01c38b54],0x4     ; 0055bce1 | DAT_01c38b54
    JNZ 0x0055bdd1                      ; 0055bceb
        ;   XREF to: 0055bdd1 (CONDITIONAL_JUMP)  ; LAB_0055bdd1
    TEST dword ptr [0x01c38b54],0x10    ; 0055bcf1 | DAT_01c38b54
    JNZ 0x0055be5d                      ; 0055bcfb
        ;   XREF to: 0055be5d (CONDITIONAL_JUMP)  ; LAB_0055be5d
    MOVQ MM5,qword ptr [0x0061d978]     ; 0055bd01 | DAT_0061d978
    PSLLW MM5,0x7                       ; 0055bd08
    PXOR MM6,MM6                        ; 0055bd0c
    JMP 0x0055be87                      ; 0055bd0f
        ;   XREF to: 0055be87 (UNCONDITIONAL_JUMP)  ; LAB_0055be87
    MOV EAX,dword ptr [EDI + 0x10]      ; 0055bd14
        ;   Label: LAB_0055bd14
    MOV EBX,dword ptr [ESI + 0x10]      ; 0055bd17
    SHR EAX,0x1                         ; 0055bd1a
    SHR EBX,0x1                         ; 0055bd1c
    SUB EAX,EBX                         ; 0055bd1e
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055bd20 | DAT_01c35e74
    AND EBX,0xffff                      ; 0055bd26
    AND EDX,0xffff                      ; 0055bd2c
    MOV dword ptr [0x0061c800],EBX      ; 0055bd32 | DAT_0061c800
    MOV dword ptr [0x0061c820],EDX      ; 0055bd38 | DAT_0061c820
    MOV EAX,dword ptr [EDI + 0x38]      ; 0055bd3e
    MOV EBX,dword ptr [ESI + 0x38]      ; 0055bd41
    SHR EAX,0x1                         ; 0055bd44
    SHR EBX,0x1                         ; 0055bd46
    SUB EAX,EBX                         ; 0055bd48
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055bd4a | DAT_01c35e74
    AND EBX,0xffff                      ; 0055bd50
    AND EDX,0xffff                      ; 0055bd56
    MOV dword ptr [0x0061c808],EBX      ; 0055bd5c | DAT_0061c808
    MOV dword ptr [0x0061c828],EDX      ; 0055bd62 | DAT_0061c828
    MOV EAX,dword ptr [EDI + 0x40]      ; 0055bd68
    MOV EBX,dword ptr [ESI + 0x40]      ; 0055bd6b
    SHR EAX,0x1                         ; 0055bd6e
    SHR EBX,0x1                         ; 0055bd70
    SUB EAX,EBX                         ; 0055bd72
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055bd74 | DAT_01c35e74
    AND EBX,0xffff                      ; 0055bd7a
    AND EDX,0xffff                      ; 0055bd80
    MOV dword ptr [0x0061c810],EBX      ; 0055bd86 | DAT_0061c810
    MOV dword ptr [0x0061c830],EDX      ; 0055bd8c | DAT_0061c830
    MOVQ MM5,qword ptr [0x0061c800]     ; 0055bd92 | DAT_0061c800
    MOVQ MM6,qword ptr [0x0061c820]     ; 0055bd99 | DAT_0061c820
    PSLLQ MM5,0x10                      ; 0055bda0
    PSLLQ MM6,0x10                      ; 0055bda4
    POR MM5,qword ptr [0x0061c808]      ; 0055bda8 | DAT_0061c808
    POR MM6,qword ptr [0x0061c828]      ; 0055bdaf | DAT_0061c828
    PSLLQ MM5,0x10                      ; 0055bdb6
    PSLLQ MM6,0x10                      ; 0055bdba
    POR MM5,qword ptr [0x0061c810]      ; 0055bdbe | DAT_0061c810
    POR MM6,qword ptr [0x0061c830]      ; 0055bdc5 | DAT_0061c830
    JMP 0x0055be87                      ; 0055bdcc
        ;   XREF to: 0055be87 (UNCONDITIONAL_JUMP)  ; LAB_0055be87
    MOV EAX,dword ptr [EDI + 0x10]      ; 0055bdd1
        ;   Label: LAB_0055bdd1
    MOV EBX,dword ptr [ESI + 0x10]      ; 0055bdd4
    SUB EAX,0x100                       ; 0055bdd7
    SUB EBX,0x100                       ; 0055bddc
    CMP EAX,0xfff                       ; 0055bde2
    JBE 0x0055bdee                      ; 0055bde7
        ;   XREF to: 0055bdee (CONDITIONAL_JUMP)  ; LAB_0055bdee
    MOV EAX,0xfff                       ; 0055bde9
    CMP EBX,0xfff                       ; 0055bdee
        ;   Label: LAB_0055bdee
    JBE 0x0055bdfb                      ; 0055bdf4
        ;   XREF to: 0055bdfb (CONDITIONAL_JUMP)  ; LAB_0055bdfb
    MOV EBX,0xfff                       ; 0055bdf6
    SHL EAX,0x3                         ; 0055bdfb
        ;   Label: LAB_0055bdfb
    SHL EBX,0x3                         ; 0055bdfe
    SUB EAX,EBX                         ; 0055be01
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055be03 | DAT_01c35e74
    AND EBX,0xffff                      ; 0055be09
    AND EDX,0xffff                      ; 0055be0f
    MOV dword ptr [0x0061c800],EBX      ; 0055be15 | DAT_0061c800
    MOV dword ptr [0x0061c820],EDX      ; 0055be1b | DAT_0061c820
    MOVQ MM5,qword ptr [0x0061c800]     ; 0055be21 | DAT_0061c800
    MOVQ MM6,qword ptr [0x0061c820]     ; 0055be28 | DAT_0061c820
    PSLLQ MM5,0x10                      ; 0055be2f
    PSLLQ MM6,0x10                      ; 0055be33
    POR MM5,qword ptr [0x0061c800]      ; 0055be37 | DAT_0061c800
    POR MM6,qword ptr [0x0061c820]      ; 0055be3e | DAT_0061c820
    PSLLQ MM5,0x10                      ; 0055be45
    PSLLQ MM6,0x10                      ; 0055be49
    POR MM5,qword ptr [0x0061c800]      ; 0055be4d | DAT_0061c800
    POR MM6,qword ptr [0x0061c820]      ; 0055be54 | DAT_0061c820
    JMP 0x0055be87                      ; 0055be5b
        ;   XREF to: 0055be87 (UNCONDITIONAL_JUMP)  ; LAB_0055be87
    MOV EAX,[0x01c35e64]                ; 0055be5d | DAT_01c35e64
        ;   Label: LAB_0055be5d
    SUB EAX,0x100                       ; 0055be62
    SHR EAX,0x4                         ; 0055be67
    CMP EAX,0xff                        ; 0055be6a
    JC 0x0055be76                       ; 0055be6f
        ;   XREF to: 0055be76 (CONDITIONAL_JUMP)  ; LAB_0055be76
    MOV EAX,0xff                        ; 0055be71
    MOVQ MM5,qword ptr [EAX*0x8 + 0x61d180] ; 0055be76 | DAT_0061d978 | DAT_0061d180
        ;   Label: LAB_0055be76
    PSLLW MM5,0x7                       ; 0055be7e
    PXOR MM6,MM6                        ; 0055be82
    JMP 0x0055be87                      ; 0055be85
        ;   XREF to: 0055be87 (UNCONDITIONAL_JUMP)  ; LAB_0055be87
    MOV ECX,dword ptr [0x0061c350]      ; 0055be87 | DAT_0061c350
        ;   Label: LAB_0055be87
    MOV EDX,dword ptr [0x0061c354]      ; 0055be8d | DAT_0061c354
    MOV ESI,dword ptr [0x0061c35c]      ; 0055be93 | DAT_0061c35c
    MOV EDI,0x0                         ; 0055be99
    CMP dword ptr [0x01c37774],0x0      ; 0055be9e | DAT_01c37774
    JNZ 0x0055beb7                      ; 0055bea5
        ;   XREF to: 0055beb7 (CONDITIONAL_JUMP)  ; LAB_0055beb7
    TEST dword ptr [0x01c38b54],0x2     ; 0055bea7 | DAT_01c38b54
    JZ 0x0055c281                       ; 0055beb1
        ;   XREF to: 0055c281 (CONDITIONAL_JUMP)  ; LAB_0055c281
    TEST dword ptr [0x01c38b54],0x100   ; 0055beb7 | DAT_01c38b54
        ;   Label: LAB_0055beb7
    JNZ 0x0055bed6                      ; 0055bec1
        ;   XREF to: 0055bed6 (CONDITIONAL_JUMP)  ; LAB_0055bed6
    MOV EBP,dword ptr [0x006141d8]      ; 0055bec3 | DAT_006141d8
    SHL EBP,0x8                         ; 0055bec9
    MOV dword ptr [0x0061c848],0x0      ; 0055becc | DAT_0061c848
    CMP dword ptr [0x01c37774],0x0      ; 0055bed6 | DAT_01c37774
        ;   Label: LAB_0055bed6
    JNZ 0x0055c092                      ; 0055bedd
        ;   XREF to: 0055c092 (CONDITIONAL_JUMP)  ; LAB_0055c092
    TEST dword ptr [0x01c38b54],0x40    ; 0055bee3 | DAT_01c38b54
        ;   Label: LAB_0055bee3
    JZ 0x0055beff                       ; 0055beed
        ;   XREF to: 0055beff (CONDITIONAL_JUMP)  ; LAB_0055beff
    LEA EAX,[EDI]                       ; 0055beef
    ADD EAX,dword ptr [0x0061c37c]      ; 0055bef1 | DAT_0061c37c
    CMP ESI,dword ptr [EAX]             ; 0055bef7
    JL 0x0055c054                       ; 0055bef9
        ;   XREF to: 0055c054 (CONDITIONAL_JUMP)  ; LAB_0055c054
    MOVD MM0,ECX                        ; 0055beff
        ;   Label: LAB_0055beff
    MOVD MM2,EDX                        ; 0055bf02
    PSRLQ MM0,qword ptr [0x0061c868]    ; 0055bf05 | DAT_0061c868
    PSRLQ MM2,qword ptr [0x0061c888]    ; 0055bf0c | DAT_0061c888
    PAND MM0,qword ptr [0x0061c8a8]     ; 0055bf13 | DAT_0061c8a8
    PAND MM2,qword ptr [0x0061c8c8]     ; 0055bf1a | DAT_0061c8c8
    PADDD MM0,MM2                       ; 0055bf21
    MOVD EBX,MM0                        ; 0055bf24
    ADD EBX,dword ptr [0x01c37770]      ; 0055bf27 | DAT_01c37770
    MOVZX EAX,byte ptr [EBX]            ; 0055bf2d
    MOV EAX,dword ptr [EAX*0x4 + 0x1c35214] ; 0055bf30 | DAT_01c35214
    CMP EAX,0x0                         ; 0055bf37
    JZ 0x0055c054                       ; 0055bf3a
        ;   XREF to: 0055c054 (CONDITIONAL_JUMP)  ; LAB_0055c054
    MOVD MM0,EAX                        ; 0055bf40
    PUNPCKLBW MM0,MM7                   ; 0055bf43
    PXOR MM4,MM4                        ; 0055bf46
    TEST dword ptr [0x01c38b54],0x20    ; 0055bf49 | DAT_01c38b54
    JZ 0x0055bf9e                       ; 0055bf53
        ;   XREF to: 0055bf9e (CONDITIONAL_JUMP)  ; LAB_0055bf9e
    MOV EBX,EDI                         ; 0055bf55
    SHR EBX,0x1                         ; 0055bf57
    ADD EBX,dword ptr [0x0061c378]      ; 0055bf59 | DAT_0061c378
    MOVZX EBX,word ptr [EBX]            ; 0055bf5f
    MOVD MM4,EBX                        ; 0055bf62
    PAND MM4,qword ptr [0x0061c8e0]     ; 0055bf65 | DAT_0061c8e0
    PSLLQ MM4,qword ptr [0x0061c970]    ; 0055bf6c | DAT_0061c970
    MOVD MM2,EBX                        ; 0055bf73
    PAND MM2,qword ptr [0x0061c8d8]     ; 0055bf76 | DAT_0061c8d8
    PSLLQ MM2,qword ptr [0x0061c950]    ; 0055bf7d | DAT_0061c950
    POR MM4,MM2                         ; 0055bf84
    MOVD MM2,EBX                        ; 0055bf87
    PAND MM2,qword ptr [0x0061c8d0]     ; 0055bf8a | DAT_0061c8d0
    PSLLQ MM2,qword ptr [0x0061c930]    ; 0055bf91 | DAT_0061c930
    POR MM4,MM2                         ; 0055bf98
    PUNPCKLBW MM4,MM7                   ; 0055bf9b
    PSLLW MM0,0x4                       ; 0055bf9e
        ;   Label: LAB_0055bf9e
    MOVQ MM7,MM5                        ; 0055bfa2
    MOV EAX,EBP                         ; 0055bfa5
    PSRLW MM7,0x3                       ; 0055bfa7
    SAR EAX,0x8                         ; 0055bfab
    PMULHW MM0,MM7                      ; 0055bfae
    MOVQ MM2,qword ptr [EAX*0x8 + 0x61d180] ; 0055bfb1 | DAT_0061d978
    PXOR MM7,MM7                        ; 0055bfb9
    MOVQ MM3,MM2                        ; 0055bfbc
    PACKUSWB MM0,MM7                    ; 0055bfbf
    PXOR MM3,qword ptr [0x0061d978]     ; 0055bfc2 | DAT_0061d978
    PUNPCKLBW MM0,MM7                   ; 0055bfc9
    CMP dword ptr [0x01c38b4c],0x0      ; 0055bfcc | DAT_01c38b4c
    JNZ 0x0055bfe7                      ; 0055bfd3
        ;   XREF to: 0055bfe7 (CONDITIONAL_JUMP)  ; LAB_0055bfe7
    PMULLW MM4,MM3                      ; 0055bfd5
    PMULLW MM0,MM2                      ; 0055bfd8
    PADDUSW MM0,MM4                     ; 0055bfdb
    PSRLW MM0,0x8                       ; 0055bfde
    PACKUSWB MM0,MM7                    ; 0055bfe2
    JMP 0x0055bff8                      ; 0055bfe5
        ;   XREF to: 0055bff8 (UNCONDITIONAL_JUMP)  ; LAB_0055bff8
    PSLLW MM4,0x8                       ; 0055bfe7
        ;   Label: LAB_0055bfe7
    PMULLW MM0,MM2                      ; 0055bfeb
    PADDUSW MM0,MM4                     ; 0055bfee
    PSRLW MM0,0x8                       ; 0055bff1
    PACKUSWB MM0,MM7                    ; 0055bff5
    MOV EBX,EDI                         ; 0055bff8
        ;   Label: LAB_0055bff8
    SHR EBX,0x1                         ; 0055bffa
    ADD EBX,dword ptr [0x0061c378]      ; 0055bffc | DAT_0061c378
    MOVQ MM2,MM0                        ; 0055c002
    MOVQ MM4,MM0                        ; 0055c005
    PAND MM0,qword ptr [0x0061c928]     ; 0055c008 | DAT_0061c928
    PAND MM2,qword ptr [0x0061c908]     ; 0055c00f | DAT_0061c908
    PAND MM4,qword ptr [0x0061c8e8]     ; 0055c016 | DAT_0061c8e8
    PSRLQ MM0,qword ptr [0x0061c970]    ; 0055c01d | DAT_0061c970
    PSRLQ MM2,qword ptr [0x0061c950]    ; 0055c024 | DAT_0061c950
    PSRLQ MM4,qword ptr [0x0061c930]    ; 0055c02b | DAT_0061c930
    POR MM0,MM2                         ; 0055c032
    POR MM0,MM4                         ; 0055c035
    MOVD EAX,MM0                        ; 0055c038
    MOV word ptr [EBX],AX               ; 0055c03b
    TEST dword ptr [0x01c38b54],0x80    ; 0055c03e | DAT_01c38b54
    JZ 0x0055c054                       ; 0055c048
        ;   XREF to: 0055c054 (CONDITIONAL_JUMP)  ; LAB_0055c054
    MOV EAX,EDI                         ; 0055c04a
    ADD EAX,dword ptr [0x0061c37c]      ; 0055c04c | DAT_0061c37c
    MOV dword ptr [EAX],ESI             ; 0055c052
    ADD EDI,0x4                         ; 0055c054
        ;   Label: LAB_0055c054
    CMP EDI,dword ptr [0x0061c314]      ; 0055c057 | DAT_0061c314
    JNC 0x0055c08c                      ; 0055c05d
        ;   XREF to: 0055c08c (CONDITIONAL_JUMP)  ; LAB_0055c08c
    ADD ECX,dword ptr [0x0061c780]      ; 0055c05f | DAT_0061c780
    PADDW MM5,MM6                       ; 0055c065
    ADD EDX,dword ptr [0x0061c784]      ; 0055c068 | DAT_0061c784
    MOVQ MM0,MM5                        ; 0055c06e
    ADD ESI,dword ptr [0x0061c788]      ; 0055c071 | DAT_0061c788
    PCMPGTW MM5,qword ptr [0x0061c78c]  ; 0055c077 | DAT_0061c78c
    ADD EBP,dword ptr [0x0061c848]      ; 0055c07e | DAT_0061c848
    PAND MM5,MM0                        ; 0055c084
    JMP 0x0055bee3                      ; 0055c087
        ;   XREF to: 0055bee3 (UNCONDITIONAL_JUMP)  ; LAB_0055bee3
    POP EBP                             ; 0055c08c
        ;   Label: LAB_0055c08c
    EMMS                                ; 0055c08d
    POP EDI                             ; 0055c08f
    POP ESI                             ; 0055c090
    RET                                 ; 0055c091
    TEST dword ptr [0x01c38b54],0x40    ; 0055c092 | DAT_01c38b54
        ;   Label: LAB_0055c092
    JZ 0x0055c0ae                       ; 0055c09c
        ;   XREF to: 0055c0ae (CONDITIONAL_JUMP)  ; LAB_0055c0ae
    LEA EAX,[EDI]                       ; 0055c09e
    ADD EAX,dword ptr [0x0061c37c]      ; 0055c0a0 | DAT_0061c37c
    CMP ESI,dword ptr [EAX]             ; 0055c0a6
    JL 0x0055c243                       ; 0055c0a8
        ;   XREF to: 0055c243 (CONDITIONAL_JUMP)  ; LAB_0055c243
    MOVD MM0,ECX                        ; 0055c0ae
        ;   Label: LAB_0055c0ae
    MOVD MM2,EDX                        ; 0055c0b1
    PSRLQ MM0,qword ptr [0x0061c868]    ; 0055c0b4 | DAT_0061c868
    PSRLQ MM2,qword ptr [0x0061c888]    ; 0055c0bb | DAT_0061c888
    PAND MM0,qword ptr [0x0061c8a8]     ; 0055c0c2 | DAT_0061c8a8
    PAND MM2,qword ptr [0x0061c8c8]     ; 0055c0c9 | DAT_0061c8c8
    PADDD MM0,MM2                       ; 0055c0d0
    MOVD EBX,MM0                        ; 0055c0d3
    ADD EBX,dword ptr [0x01c37770]      ; 0055c0d6 | DAT_01c37770
    MOVZX EAX,byte ptr [EBX]            ; 0055c0dc
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c35214] ; 0055c0df | DAT_01c35214
    PUNPCKLBW MM0,MM7                   ; 0055c0e7
    SUB EBX,dword ptr [0x01c37770]      ; 0055c0ea | DAT_01c37770
    ADD EBX,dword ptr [0x01c37774]      ; 0055c0f0 | DAT_01c37774
    MOVZX EAX,byte ptr [EBX]            ; 0055c0f6
    TEST EAX,0xffffffff                 ; 0055c0f9
    JZ 0x0055c243                       ; 0055c0fe
        ;   XREF to: 0055c243 (CONDITIONAL_JUMP)  ; LAB_0055c243
    CMP EBP,0xff00                      ; 0055c104
    JLE 0x0055c117                      ; 0055c10a
        ;   XREF to: 0055c117 (CONDITIONAL_JUMP)  ; LAB_0055c117
    CMP EAX,0xff                        ; 0055c10c
    JGE 0x0055c1aa                      ; 0055c111
        ;   XREF to: 0055c1aa (CONDITIONAL_JUMP)  ; LAB_0055c1aa
    MOV EBX,EDI                         ; 0055c117
        ;   Label: LAB_0055c117
    SHR EBX,0x1                         ; 0055c119
    ADD EBX,dword ptr [0x0061c378]      ; 0055c11b | DAT_0061c378
    MOVZX EBX,word ptr [EBX]            ; 0055c121
    MOVD MM4,EBX                        ; 0055c124
    PAND MM4,qword ptr [0x0061c8e0]     ; 0055c127 | DAT_0061c8e0
    PSLLQ MM4,qword ptr [0x0061c970]    ; 0055c12e | DAT_0061c970
    MOVD MM2,EBX                        ; 0055c135
    PAND MM2,qword ptr [0x0061c8d8]     ; 0055c138 | DAT_0061c8d8
    PSLLQ MM2,qword ptr [0x0061c950]    ; 0055c13f | DAT_0061c950
    POR MM4,MM2                         ; 0055c146
    MOVD MM2,EBX                        ; 0055c149
    PAND MM2,qword ptr [0x0061c8d0]     ; 0055c14c | DAT_0061c8d0
    PSLLQ MM2,qword ptr [0x0061c930]    ; 0055c153 | DAT_0061c930
    POR MM4,MM2                         ; 0055c15a
    PUNPCKLBW MM4,MM7                   ; 0055c15d
    PSLLW MM0,0x4                       ; 0055c160
    MOVQ MM7,MM5                        ; 0055c164
    IMUL EAX,EBP                        ; 0055c167
    PSRLW MM7,0x3                       ; 0055c16a
    SHR EAX,0x10                        ; 0055c16e
    PMULHW MM0,MM7                      ; 0055c171
    MOVQ MM2,qword ptr [EAX*0x8 + 0x61d180] ; 0055c174 | DAT_0061d180
    PXOR MM7,MM7                        ; 0055c17c
    MOVQ MM3,MM2                        ; 0055c17f
    PACKUSWB MM0,MM7                    ; 0055c182
    PXOR MM3,qword ptr [0x0061d978]     ; 0055c185 | DAT_0061d978
    PUNPCKLBW MM0,MM7                   ; 0055c18c
    CMP dword ptr [0x01c38b4c],0x0      ; 0055c18f | DAT_01c38b4c
    JNZ 0x0055c1d6                      ; 0055c196
        ;   XREF to: 0055c1d6 (CONDITIONAL_JUMP)  ; LAB_0055c1d6
    PMULLW MM4,MM3                      ; 0055c198
    PMULLW MM0,MM2                      ; 0055c19b
    PADDUSW MM0,MM4                     ; 0055c19e
    PSRLW MM0,0x8                       ; 0055c1a1
    PACKUSWB MM0,MM7                    ; 0055c1a5
    JMP 0x0055c1e7                      ; 0055c1a8
        ;   XREF to: 0055c1e7 (UNCONDITIONAL_JUMP)  ; LAB_0055c1e7
    CMP EBP,0xff                        ; 0055c1aa
        ;   Label: LAB_0055c1aa
    JL 0x0055c117                       ; 0055c1b0
        ;   XREF to: 0055c117 (CONDITIONAL_JUMP)  ; LAB_0055c117
    CMP dword ptr [0x01c38b4c],0x0      ; 0055c1b6 | DAT_01c38b4c
    JNZ 0x0055c117                      ; 0055c1bd
        ;   XREF to: 0055c117 (CONDITIONAL_JUMP)  ; LAB_0055c117
    MOVQ MM3,MM5                        ; 0055c1c3
    PSRLW MM3,0x3                       ; 0055c1c6
    PSLLW MM0,0x4                       ; 0055c1ca
    PMULHW MM0,MM3                      ; 0055c1ce
    PACKUSWB MM0,MM7                    ; 0055c1d1
    JMP 0x0055c1e7                      ; 0055c1d4
        ;   XREF to: 0055c1e7 (UNCONDITIONAL_JUMP)  ; LAB_0055c1e7
    PSLLW MM4,0x8                       ; 0055c1d6
        ;   Label: LAB_0055c1d6
    PMULLW MM0,MM2                      ; 0055c1da
    PADDUSW MM0,MM4                     ; 0055c1dd
    PSRLW MM0,0x8                       ; 0055c1e0
    PACKUSWB MM0,MM7                    ; 0055c1e4
    MOV EBX,EDI                         ; 0055c1e7
        ;   Label: LAB_0055c1e7
    SHR EBX,0x1                         ; 0055c1e9
    ADD EBX,dword ptr [0x0061c378]      ; 0055c1eb | DAT_0061c378
    MOVQ MM2,MM0                        ; 0055c1f1
    MOVQ MM4,MM0                        ; 0055c1f4
    PAND MM0,qword ptr [0x0061c928]     ; 0055c1f7 | DAT_0061c928
    PAND MM2,qword ptr [0x0061c908]     ; 0055c1fe | DAT_0061c908
    PAND MM4,qword ptr [0x0061c8e8]     ; 0055c205 | DAT_0061c8e8
    PSRLQ MM0,qword ptr [0x0061c970]    ; 0055c20c | DAT_0061c970
    PSRLQ MM2,qword ptr [0x0061c950]    ; 0055c213 | DAT_0061c950
    PSRLQ MM4,qword ptr [0x0061c930]    ; 0055c21a | DAT_0061c930
    POR MM0,MM2                         ; 0055c221
    POR MM0,MM4                         ; 0055c224
    MOVD EAX,MM0                        ; 0055c227
    MOV word ptr [EBX],AX               ; 0055c22a
    TEST dword ptr [0x01c38b54],0x80    ; 0055c22d | DAT_01c38b54
    JZ 0x0055c243                       ; 0055c237
        ;   XREF to: 0055c243 (CONDITIONAL_JUMP)  ; LAB_0055c243
    MOV EAX,EDI                         ; 0055c239
    ADD EAX,dword ptr [0x0061c37c]      ; 0055c23b | DAT_0061c37c
    MOV dword ptr [EAX],ESI             ; 0055c241
    ADD EDI,0x4                         ; 0055c243
        ;   Label: LAB_0055c243
    CMP EDI,dword ptr [0x0061c314]      ; 0055c246 | DAT_0061c314
    JNC 0x0055c27b                      ; 0055c24c
        ;   XREF to: 0055c27b (CONDITIONAL_JUMP)  ; LAB_0055c27b
    ADD ECX,dword ptr [0x0061c780]      ; 0055c24e | DAT_0061c780
    PADDW MM5,MM6                       ; 0055c254
    ADD EDX,dword ptr [0x0061c784]      ; 0055c257 | DAT_0061c784
    MOVQ MM0,MM5                        ; 0055c25d
    ADD ESI,dword ptr [0x0061c788]      ; 0055c260 | DAT_0061c788
    PCMPGTW MM5,qword ptr [0x0061c78c]  ; 0055c266 | DAT_0061c78c
    ADD EBP,dword ptr [0x0061c848]      ; 0055c26d | DAT_0061c848
    PAND MM5,MM0                        ; 0055c273
    JMP 0x0055c092                      ; 0055c276
        ;   XREF to: 0055c092 (UNCONDITIONAL_JUMP)  ; LAB_0055c092
    POP EBP                             ; 0055c27b
        ;   Label: LAB_0055c27b
    EMMS                                ; 0055c27c
    POP EDI                             ; 0055c27e
    POP ESI                             ; 0055c27f
    RET                                 ; 0055c280
    MOVQ MM1,qword ptr [0x01c38b5c]     ; 0055c281 | DAT_01c38b5c
        ;   Label: LAB_0055c281
    PUNPCKLBW MM1,MM7                   ; 0055c288
    TEST dword ptr [0x01c38b54],0x8     ; 0055c28b | DAT_01c38b54
    JNZ 0x0055c2a6                      ; 0055c295
        ;   XREF to: 0055c2a6 (CONDITIONAL_JUMP)  ; LAB_0055c2a6
    MOV EBP,0x0                         ; 0055c297
    MOV dword ptr [0x0061c848],0x0      ; 0055c29c | DAT_0061c848
    TEST dword ptr [0x01c38b54],0x40    ; 0055c2a6 | DAT_01c38b54
        ;   Label: LAB_0055c2a6
    JZ 0x0055c2c2                       ; 0055c2b0
        ;   XREF to: 0055c2c2 (CONDITIONAL_JUMP)  ; LAB_0055c2c2
    LEA EAX,[EDI]                       ; 0055c2b2
    ADD EAX,dword ptr [0x0061c37c]      ; 0055c2b4 | DAT_0061c37c
    CMP ESI,dword ptr [EAX]             ; 0055c2ba
    JL 0x0055c3b3                       ; 0055c2bc
        ;   XREF to: 0055c3b3 (CONDITIONAL_JUMP)  ; LAB_0055c3b3
    TEST dword ptr [0x01c38b54],0x1     ; 0055c2c2 | DAT_01c38b54
        ;   Label: LAB_0055c2c2
    JZ 0x0055c3f5                       ; 0055c2cc
        ;   XREF to: 0055c3f5 (CONDITIONAL_JUMP)  ; LAB_0055c3f5
    MOVD MM0,ECX                        ; 0055c2d2
    MOVD MM2,EDX                        ; 0055c2d5
    PSRLQ MM0,qword ptr [0x0061c868]    ; 0055c2d8 | DAT_0061c868
    PSRLQ MM2,qword ptr [0x0061c888]    ; 0055c2df | DAT_0061c888
    PAND MM0,qword ptr [0x0061c8a8]     ; 0055c2e6 | DAT_0061c8a8
    PAND MM2,qword ptr [0x0061c8c8]     ; 0055c2ed | DAT_0061c8c8
    PADDD MM0,MM2                       ; 0055c2f4
    MOVD EBX,MM0                        ; 0055c2f7
    ADD EBX,dword ptr [0x01c37770]      ; 0055c2fa | DAT_01c37770
    MOVZX EAX,byte ptr [EBX]            ; 0055c300
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c35214] ; 0055c303 | DAT_01c35214
    MOVQ MM3,MM5                        ; 0055c30b
        ;   Label: LAB_0055c30b
    PUNPCKLBW MM0,MM7                   ; 0055c30e
    PSRLW MM3,0x3                       ; 0055c311
    PSLLW MM0,0x4                       ; 0055c315
    PMULHW MM0,MM3                      ; 0055c319
    PACKUSWB MM0,MM7                    ; 0055c31c
    TEST dword ptr [0x01c38b54],0x8     ; 0055c31f | DAT_01c38b54
    JZ 0x0055c358                       ; 0055c329
        ;   XREF to: 0055c358 (CONDITIONAL_JUMP)  ; LAB_0055c358
    MOV EAX,EBP                         ; 0055c32b
    SAR EAX,0x8                         ; 0055c32d
    MOVQ MM3,qword ptr [EAX*0x8 + 0x61d180] ; 0055c330 | DAT_0061d180
    MOVQ MM4,MM1                        ; 0055c338
    MOVQ MM2,MM3                        ; 0055c33b
    PMULLW MM4,MM3                      ; 0055c33e
    PXOR MM2,qword ptr [0x0061d978]     ; 0055c341 | DAT_0061d978
    PUNPCKLBW MM0,MM7                   ; 0055c348
    PMULLW MM0,MM2                      ; 0055c34b
    PADDW MM0,MM4                       ; 0055c34e
    PSRLW MM0,0x8                       ; 0055c351
    PACKUSWB MM0,MM7                    ; 0055c355
    MOV EBX,EDI                         ; 0055c358
        ;   Label: LAB_0055c358
    SHR EBX,0x1                         ; 0055c35a
    ADD EBX,dword ptr [0x0061c378]      ; 0055c35c | DAT_0061c378
    MOVQ MM2,MM0                        ; 0055c362
    MOVQ MM4,MM0                        ; 0055c365
    PAND MM0,qword ptr [0x0061c928]     ; 0055c368 | DAT_0061c928
    PAND MM2,qword ptr [0x0061c908]     ; 0055c36f | DAT_0061c908
    PAND MM4,qword ptr [0x0061c8e8]     ; 0055c376 | DAT_0061c8e8
    PSRLQ MM0,qword ptr [0x0061c970]    ; 0055c37d | DAT_0061c970
    PSRLQ MM2,qword ptr [0x0061c950]    ; 0055c384 | DAT_0061c950
    PSRLQ MM4,qword ptr [0x0061c930]    ; 0055c38b | DAT_0061c930
    POR MM0,MM2                         ; 0055c392
    POR MM0,MM4                         ; 0055c395
    MOVD EAX,MM0                        ; 0055c398
    MOV word ptr [EBX],AX               ; 0055c39b
    TEST dword ptr [0x01c38b54],0x80    ; 0055c39e | DAT_01c38b54
    JZ 0x0055c3b3                       ; 0055c3a8
        ;   XREF to: 0055c3b3 (CONDITIONAL_JUMP)  ; LAB_0055c3b3
    MOV EAX,[0x0061c37c]                ; 0055c3aa | DAT_0061c37c
    ADD EAX,EDI                         ; 0055c3af
    MOV dword ptr [EAX],ESI             ; 0055c3b1
    ADD EDI,0x4                         ; 0055c3b3
        ;   Label: LAB_0055c3b3
    CMP EDI,dword ptr [0x0061c314]      ; 0055c3b6 | DAT_0061c314
    JNC 0x0055c08c                      ; 0055c3bc
        ;   XREF to: 0055c08c (CONDITIONAL_JUMP)  ; LAB_0055c08c
    ADD ECX,dword ptr [0x0061c780]      ; 0055c3c2 | DAT_0061c780
    PADDW MM5,MM6                       ; 0055c3c8
    ADD EDX,dword ptr [0x0061c784]      ; 0055c3cb | DAT_0061c784
    MOVQ MM0,MM5                        ; 0055c3d1
    ADD ESI,dword ptr [0x0061c788]      ; 0055c3d4 | DAT_0061c788
    PCMPGTW MM5,qword ptr [0x0061c78c]  ; 0055c3da | DAT_0061c78c
    ADD EBP,dword ptr [0x0061c848]      ; 0055c3e1 | DAT_0061c848
    PAND MM5,MM0                        ; 0055c3e7
    JMP 0x0055c2a6                      ; 0055c3ea
        ;   XREF to: 0055c2a6 (UNCONDITIONAL_JUMP)  ; LAB_0055c2a6
    TEST dword ptr [0x01c38b54],0x200   ; 0055c3f5 | DAT_01c38b54
        ;   Label: LAB_0055c3f5
    JNZ 0x0055c40d                      ; 0055c3ff
        ;   XREF to: 0055c40d (CONDITIONAL_JUMP)  ; LAB_0055c40d
    MOVD MM0,dword ptr [0x01c35e60]     ; 0055c401 | DAT_01c35e60
    JMP 0x0055c30b                      ; 0055c408
        ;   XREF to: 0055c30b (UNCONDITIONAL_JUMP)  ; LAB_0055c30b
    MOVD MM0,dword ptr [0x0061c978]     ; 0055c40d | DAT_0061c978
        ;   Label: LAB_0055c40d
    JMP 0x0055c30b                      ; 0055c414
        ;   XREF to: 0055c30b (UNCONDITIONAL_JUMP)  ; LAB_0055c30b
    MOV EAX,dword ptr [EDI + 0x28]      ; 0055c419
        ;   Label: LAB_0055c419
    MOV EBX,dword ptr [ESI + 0x28]      ; 0055c41c
    SUB EAX,EBX                         ; 0055c41f
    IMUL dword ptr [ECX + 0x1c35e74]    ; 0055c421 | DAT_01c35e74
    MOV dword ptr [0x0061c35c],EBX      ; 0055c427 | DAT_0061c35c
    MOV dword ptr [0x0061c788],EDX      ; 0055c42d | DAT_0061c788
    MOV EAX,[0x0061c35c]                ; 0055c433 | DAT_0061c35c
    MOV EBX,dword ptr [0x0061c788]      ; 0055c438 | DAT_0061c788
    MOV ESI,dword ptr [0x0061c37c]      ; 0055c43e | DAT_0061c37c
    MOV ECX,dword ptr [0x0061c314]      ; 0055c444 | DAT_0061c314
    MOV dword ptr [ESI],EAX             ; 0055c44a
        ;   Label: LAB_0055c44a
    ADD EAX,EBX                         ; 0055c44c
    ADD ESI,0x4                         ; 0055c44e
    SUB ECX,0x4                         ; 0055c451
    JG 0x0055c44a                       ; 0055c454
        ;   XREF to: 0055c44a (CONDITIONAL_JUMP)  ; LAB_0055c44a
    POP EBP                             ; 0055c456
    EMMS                                ; 0055c457
    POP EDI                             ; 0055c459
    POP ESI                             ; 0055c45a
    RET                                 ; 0055c45b

