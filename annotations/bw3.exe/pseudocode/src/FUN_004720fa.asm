; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004720fa(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,int param_6)
;
;
; XREF[1]:
;   FUN_0044ff10 at 0044ffcb
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004720fa
        ;   Label: FUN_004720fa
    MOV EBP,ESP                         ; 004720fb
    PUSH ESI                            ; 004720fd
    PUSH EDI                            ; 004720fe
    PUSH EBX                            ; 004720ff
    PUSH ECX                            ; 00472100
    MOV EDI,dword ptr [EBP + 0x8]       ; 00472101
    MOV ESI,dword ptr [EBP + 0xc]       ; 00472104
    MOV EBX,dword ptr [EBP + 0x10]      ; 00472107
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0047210a
    PXOR MM7,MM7                        ; 0047210d
    MOVD MM3,dword ptr [EBP + 0x18]     ; 00472110
    MOVD MM4,dword ptr [EBP + 0x14]     ; 00472114
    MOVD MM5,dword ptr [EBP + 0x18]     ; 00472118
    MOVD MM6,dword ptr [EBP + 0x14]     ; 0047211c
    PSLLQ MM3,0x20                      ; 00472120
    PSLLQ MM4,0x20                      ; 00472124
    POR MM3,MM5                         ; 00472128
    POR MM4,MM6                         ; 0047212b
    PSRLW MM3,0x1                       ; 0047212e
    PSRLW MM4,0x1                       ; 00472132
    MOVD MM0,dword ptr [ESI]            ; 00472136
        ;   Label: LAB_00472136
    MOVD MM1,dword ptr [EBX]            ; 00472139
    PUNPCKLBW MM0,MM7                   ; 0047213c
    PUNPCKLBW MM1,MM7                   ; 0047213f
    PSLLW MM0,0x7                       ; 00472142
    PSLLW MM1,0x7                       ; 00472146
    PMULHW MM0,MM3                      ; 0047214a
    PMULHW MM1,MM4                      ; 0047214d
    PADDW MM0,MM1                       ; 00472150
    PSRLW MM0,0x6                       ; 00472153
    PACKUSWB MM0,MM7                    ; 00472157
    MOVD dword ptr [EDI],MM0            ; 0047215a
    ADD ESI,0x4                         ; 0047215d
    ADD EBX,0x4                         ; 00472160
    ADD EDI,0x4                         ; 00472163
    SUB ECX,0x4                         ; 00472166
    JG 0x00472136                       ; 00472169
        ;   XREF to: 00472136 (CONDITIONAL_JUMP)  ; LAB_00472136
    POP ECX                             ; 0047216b
    POP EBX                             ; 0047216c
    EMMS                                ; 0047216d
    POP EDI                             ; 0047216f
    POP ESI                             ; 00472170
    LEAVE                               ; 00472171
    RET                                 ; 00472172

