; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_0055d5be(ushort *param_1,byte *param_2,byte *param_3,uint param_4,int param_5)
;
;
; XREF[2]:
;   FUN_0040d900 at 0040da6b
;   FUN_0040dab0 at 0040db9b
;
; Referenced Globals:
;   undefined4 DAT_0061c8d0
;   undefined4 DAT_0061c8d8
;   undefined4 DAT_0061c8e0
;   undefined4 DAT_0061c8e8
;   undefined4 DAT_0061c908
;   undefined4 DAT_0061c928
;   undefined4 DAT_0061c930
;   undefined4 DAT_0061c950
;   undefined4 DAT_0061c970
;   undefined8 DAT_0061d180
;   undefined8 DAT_0061d978
;   undefined4 DAT_01c35214
;   undefined4 DAT_01c38b4c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0055d5be
        ;   Label: FUN_0055d5be
    MOV EBP,ESP                         ; 0055d5bf
    PUSHAD                              ; 0055d5c1
    MOV EDI,dword ptr [EBP + 0x8]       ; 0055d5c2
    MOV ESI,dword ptr [EBP + 0xc]       ; 0055d5c5
    MOV EBX,dword ptr [EBP + 0x10]      ; 0055d5c8
    MOV ECX,dword ptr [EBP + 0x18]      ; 0055d5cb
    MOV EBP,dword ptr [EBP + 0x14]      ; 0055d5ce
    PXOR MM7,MM7                        ; 0055d5d1
    SHR EBP,0x8                         ; 0055d5d4
    MOVZX EAX,byte ptr [ESI]            ; 0055d5d7
        ;   Label: LAB_0055d5d7
    MOVD MM0,dword ptr [EAX*0x4 + 0x1c35214] ; 0055d5da | DAT_01c35214
    MOVZX EAX,byte ptr [EBX]            ; 0055d5e2
    IMUL EAX,EBP                        ; 0055d5e5
    CMP dword ptr [0x01c38b4c],0x1      ; 0055d5e8 | DAT_01c38b4c
    JZ 0x0055d607                       ; 0055d5ef
        ;   XREF to: 0055d607 (CONDITIONAL_JUMP)  ; LAB_0055d607
    CMP EAX,0xfde8                      ; 0055d5f1
    JGE 0x0055d68a                      ; 0055d5f6
        ;   XREF to: 0055d68a (CONDITIONAL_JUMP)  ; LAB_0055d68a
    CMP EAX,0xff                        ; 0055d5fc
    JLE 0x0055d6c6                      ; 0055d601
        ;   XREF to: 0055d6c6 (CONDITIONAL_JUMP)  ; LAB_0055d6c6
    SHR EAX,0x8                         ; 0055d607
        ;   Label: LAB_0055d607
    PUNPCKLBW MM0,MM7                   ; 0055d60a
    MOVQ MM1,qword ptr [EAX*0x8 + 0x61d180] ; 0055d60d | DAT_0061d180
    MOVQ MM2,MM1                        ; 0055d615
    PXOR MM2,qword ptr [0x0061d978]     ; 0055d618 | DAT_0061d978
    MOVZX EAX,word ptr [EDI]            ; 0055d61f
    MOVD MM3,EAX                        ; 0055d622
    PAND MM3,qword ptr [0x0061c8e0]     ; 0055d625 | DAT_0061c8e0
    PSLLQ MM3,qword ptr [0x0061c970]    ; 0055d62c | DAT_0061c970
    MOVD MM4,EAX                        ; 0055d633
    PAND MM4,qword ptr [0x0061c8d8]     ; 0055d636 | DAT_0061c8d8
    PSLLQ MM4,qword ptr [0x0061c950]    ; 0055d63d | DAT_0061c950
    POR MM3,MM4                         ; 0055d644
    MOVD MM5,EAX                        ; 0055d647
    PAND MM5,qword ptr [0x0061c8d0]     ; 0055d64a | DAT_0061c8d0
    PSLLQ MM5,qword ptr [0x0061c930]    ; 0055d651 | DAT_0061c930
    POR MM3,MM5                         ; 0055d658
    PUNPCKLBW MM3,MM7                   ; 0055d65b
    CMP dword ptr [0x01c38b4c],0x1      ; 0055d65e | DAT_01c38b4c
    JZ 0x0055d679                       ; 0055d665
        ;   XREF to: 0055d679 (CONDITIONAL_JUMP)  ; LAB_0055d679
    PMULLW MM0,MM1                      ; 0055d667
    PMULLW MM3,MM2                      ; 0055d66a
    PADDW MM0,MM3                       ; 0055d66d
    PSRLW MM0,0x8                       ; 0055d670
    PACKUSWB MM0,MM7                    ; 0055d674
    JMP 0x0055d68a                      ; 0055d677
        ;   XREF to: 0055d68a (UNCONDITIONAL_JUMP)  ; LAB_0055d68a
    PSLLW MM3,0x8                       ; 0055d679
        ;   Label: LAB_0055d679
    PMULLW MM0,MM1                      ; 0055d67d
    PADDUSW MM0,MM3                     ; 0055d680
    PSRLW MM0,0x8                       ; 0055d683
    PACKUSWB MM0,MM7                    ; 0055d687
    MOVQ MM2,MM0                        ; 0055d68a
        ;   Label: LAB_0055d68a
    MOVQ MM4,MM0                        ; 0055d68d
    PAND MM0,qword ptr [0x0061c928]     ; 0055d690 | DAT_0061c928
    PAND MM2,qword ptr [0x0061c908]     ; 0055d697 | DAT_0061c908
    PAND MM4,qword ptr [0x0061c8e8]     ; 0055d69e | DAT_0061c8e8
    PSRLQ MM0,qword ptr [0x0061c970]    ; 0055d6a5 | DAT_0061c970
    PSRLQ MM2,qword ptr [0x0061c950]    ; 0055d6ac | DAT_0061c950
    PSRLQ MM4,qword ptr [0x0061c930]    ; 0055d6b3 | DAT_0061c930
    POR MM0,MM2                         ; 0055d6ba
    POR MM0,MM4                         ; 0055d6bd
    MOVD EAX,MM0                        ; 0055d6c0
    MOV word ptr [EDI],AX               ; 0055d6c3
    INC ESI                             ; 0055d6c6
        ;   Label: LAB_0055d6c6
    INC EBX                             ; 0055d6c7
    ADD EDI,0x2                         ; 0055d6c8
    DEC ECX                             ; 0055d6cb
    JG 0x0055d5d7                       ; 0055d6cc
        ;   XREF to: 0055d5d7 (CONDITIONAL_JUMP)  ; LAB_0055d5d7
    POPAD                               ; 0055d6d2
    EMMS                                ; 0055d6d3
    LEAVE                               ; 0055d6d5
    RET                                 ; 0055d6d6

