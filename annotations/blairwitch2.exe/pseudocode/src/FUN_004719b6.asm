; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004719b6(ushort *param_1,undefined4 *param_2,byte *param_3,byte *param_4)
;
;
; XREF[1]:
;   FUN_00443360 at 004433eb
;
; Referenced Globals:
;   undefined4 DAT_00612880
;   undefined4 DAT_00613078
;   undefined4 DAT_0061c8e8
;   undefined4 DAT_0061c908
;   undefined4 DAT_0061c928
;   undefined4 DAT_0061c930
;   undefined4 DAT_0061c950
;   undefined4 DAT_0061c970
;   undefined4 DAT_00b6639c
;   undefined4 DAT_01c38b5c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004719b6
        ;   Label: FUN_004719b6
    MOV EBP,ESP                         ; 004719b7
    PUSH ESI                            ; 004719b9
    PUSH EDI                            ; 004719ba
    PUSH EBP                            ; 004719bb
    MOV EDI,dword ptr [EBP + 0x8]       ; 004719bc
    MOV ESI,dword ptr [EBP + 0xc]       ; 004719bf
    MOV EBX,dword ptr [EBP + 0x10]      ; 004719c2
    MOV EBP,dword ptr [EBP + 0x14]      ; 004719c5
    PXOR MM7,MM7                        ; 004719c8
    MOVD MM5,dword ptr [0x01c38b5c]     ; 004719cb | DAT_01c38b5c
    PUNPCKLBW MM5,MM7                   ; 004719d2
    PSLLW MM5,0x6                       ; 004719d5
    MOVZX EDX,byte ptr [EBX]            ; 004719d9
    MOVD MM0,dword ptr [ESI]            ; 004719dc
    MOVD MM2,dword ptr [EDX*0x4 + 0xb6639c] ; 004719df | DAT_00b6639c
    MOVZX EAX,byte ptr [EBP]            ; 004719e7
    PUNPCKLBW MM0,MM7                   ; 004719eb
    SHR EDX,0x1                         ; 004719ee
    PUNPCKLBW MM2,MM7                   ; 004719f0
    ADD EAX,EDX                         ; 004719f3
    PMULLW MM0,MM2                      ; 004719f5
    MOVQ MM3,qword ptr [EAX*0x8 + 0x612880] ; 004719f8 | DAT_00612880
    MOVQ MM2,MM3                        ; 00471a00
    MOVQ MM4,MM5                        ; 00471a03
    PXOR MM2,qword ptr [0x00613078]     ; 00471a06 | DAT_00613078
    PMULHW MM0,MM2                      ; 00471a0d
    PMULHW MM4,MM3                      ; 00471a10
    PADDW MM0,MM4                       ; 00471a13
    PSRLW MM0,0x4                       ; 00471a16
    PACKUSWB MM0,MM7                    ; 00471a1a
    MOVQ MM2,MM0                        ; 00471a1d
    MOVQ MM3,MM0                        ; 00471a20
    PAND MM0,qword ptr [0x0061c928]     ; 00471a23 | DAT_0061c928
    PAND MM2,qword ptr [0x0061c908]     ; 00471a2a | DAT_0061c908
    PAND MM3,qword ptr [0x0061c8e8]     ; 00471a31 | DAT_0061c8e8
    PSRLQ MM0,qword ptr [0x0061c970]    ; 00471a38 | DAT_0061c970
    PSRLQ MM2,qword ptr [0x0061c950]    ; 00471a3f | DAT_0061c950
    PSRLQ MM3,qword ptr [0x0061c930]    ; 00471a46 | DAT_0061c930
    POR MM0,MM2                         ; 00471a4d
    POR MM0,MM3                         ; 00471a50
    MOVD EAX,MM0                        ; 00471a53
    MOV word ptr [EDI],AX               ; 00471a56
    POP EBP                             ; 00471a59
    EMMS                                ; 00471a5a
    POP EDI                             ; 00471a5c
    POP ESI                             ; 00471a5d
    LEAVE                               ; 00471a5e
    RET                                 ; 00471a5f

