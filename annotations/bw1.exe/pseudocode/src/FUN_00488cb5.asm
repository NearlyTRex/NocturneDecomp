; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00488cb5(undefined8 *param_1,undefined8 *param_2,byte *param_3,byte *param_4,int param_5)
;
;
; Referenced Globals:
;   undefined8 DAT_006185f8
;   undefined8 DAT_00618600
;   undefined4 DAT_0061a358
;   undefined4 DAT_01c51d1c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00488cb5
        ;   Label: FUN_00488cb5
    MOV EBP,ESP                         ; 00488cb6
    PUSH ESI                            ; 00488cb8
    PUSH EDI                            ; 00488cb9
    PUSH EBP                            ; 00488cba
    MOV ECX,dword ptr [EBP + 0x18]      ; 00488cbb
    MOV EDI,dword ptr [EBP + 0x8]       ; 00488cbe
    MOV ESI,dword ptr [EBP + 0xc]       ; 00488cc1
    MOV EBX,dword ptr [EBP + 0x10]      ; 00488cc4
    MOV EBP,dword ptr [EBP + 0x14]      ; 00488cc7
    PXOR MM7,MM7                        ; 00488cca
    MOVD MM5,dword ptr [0x01c51d1c]     ; 00488ccd | DAT_01c51d1c
    PUNPCKLBW MM5,MM7                   ; 00488cd4
    PSLLW MM5,0x6                       ; 00488cd7
    MOVZX EDX,byte ptr [EBX]            ; 00488cdb
        ;   Label: LAB_00488cdb
    MOVQ MM0,qword ptr [ESI]            ; 00488cde
    MOVD MM2,dword ptr [EDX*0x4 + 0xb8189c] ; 00488ce1
    MOVZX EAX,byte ptr [EBP]            ; 00488ce9
    MOVQ MM1,MM0                        ; 00488ced
    PUNPCKLBW MM0,MM7                   ; 00488cf0
    SHR EDX,0x1                         ; 00488cf3
    PSRLQ MM1,0x20                      ; 00488cf5
    PUNPCKLBW MM2,MM7                   ; 00488cf9
    ADD EAX,EDX                         ; 00488cfc
    PUNPCKLBW MM1,MM7                   ; 00488cfe
    PMULLW MM0,MM2                      ; 00488d01
    MOVQ MM3,qword ptr [EAX*0x8 + 0x619b60] ; 00488d04
    PMULLW MM1,MM2                      ; 00488d0c
    MOVQ MM2,MM3                        ; 00488d0f
    MOVQ MM4,MM5                        ; 00488d12
    PXOR MM2,qword ptr [0x0061a358]     ; 00488d15 | DAT_0061a358
    PMULHW MM0,MM2                      ; 00488d1c
    PMULHW MM1,MM2                      ; 00488d1f
    PMULHW MM4,MM3                      ; 00488d22
    PADDW MM0,MM4                       ; 00488d25
    PADDW MM1,MM4                       ; 00488d28
    PADDW MM0,qword ptr [0x006185f8]    ; 00488d2b | DAT_006185f8
    PADDW MM1,qword ptr [0x00618600]    ; 00488d32 | DAT_00618600
    PSRLW MM0,0x4                       ; 00488d39
    PSRLW MM1,0x4                       ; 00488d3d
    PACKUSWB MM0,MM1                    ; 00488d41
    ADD ESI,0x8                         ; 00488d44
    MOVQ qword ptr [EDI],MM0            ; 00488d47
    ADD EDI,0x8                         ; 00488d4a
    MOVZX EDX,byte ptr [EBX]            ; 00488d4d
    MOVQ MM0,qword ptr [ESI]            ; 00488d50
    MOVD MM2,dword ptr [EDX*0x4 + 0xb8189c] ; 00488d53
    MOVZX EAX,byte ptr [EBP]            ; 00488d5b
    MOVQ MM1,MM0                        ; 00488d5f
    PUNPCKLBW MM0,MM7                   ; 00488d62
    SHR EDX,0x1                         ; 00488d65
    PSRLQ MM1,0x20                      ; 00488d67
    PUNPCKLBW MM2,MM7                   ; 00488d6b
    ADD EAX,EDX                         ; 00488d6e
    PUNPCKLBW MM1,MM7                   ; 00488d70
    PMULLW MM0,MM2                      ; 00488d73
    MOVQ MM3,qword ptr [EAX*0x8 + 0x619b60] ; 00488d76
    PMULLW MM1,MM2                      ; 00488d7e
    MOVQ MM2,MM3                        ; 00488d81
    MOVQ MM4,MM5                        ; 00488d84
    PXOR MM2,qword ptr [0x0061a358]     ; 00488d87 | DAT_0061a358
    PMULHW MM0,MM2                      ; 00488d8e
    PMULHW MM1,MM2                      ; 00488d91
    PMULHW MM4,MM3                      ; 00488d94
    PADDW MM0,MM4                       ; 00488d97
    PADDW MM1,MM4                       ; 00488d9a
    PADDW MM0,qword ptr [0x006185f8]    ; 00488d9d | DAT_006185f8
    PADDW MM1,qword ptr [0x00618600]    ; 00488da4 | DAT_00618600
    PSRLW MM0,0x4                       ; 00488dab
    PSRLW MM1,0x4                       ; 00488daf
    PACKUSWB MM0,MM1                    ; 00488db3
    ADD ESI,0x8                         ; 00488db6
    MOVQ qword ptr [EDI],MM0            ; 00488db9
    ADD EDI,0x8                         ; 00488dbc
    INC EBX                             ; 00488dbf
    INC EBP                             ; 00488dc0
    SUB ECX,0x4                         ; 00488dc1
    JG 0x00488cdb                       ; 00488dc4
        ;   XREF to: 00488cdb (CONDITIONAL_JUMP)  ; LAB_00488cdb
    POP EBP                             ; 00488dca
    EMMS                                ; 00488dcb
    POP EDI                             ; 00488dcd
    POP ESI                             ; 00488dce
    LEAVE                               ; 00488dcf
    RET                                 ; 00488dd0

