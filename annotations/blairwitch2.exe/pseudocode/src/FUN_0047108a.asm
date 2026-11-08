; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047108a(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,int param_6)
;
;
; XREF[1]:
;   FUN_00442710 at 004427cb
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0047108a
        ;   Label: FUN_0047108a
    MOV EBP,ESP                         ; 0047108b
    PUSH ESI                            ; 0047108d
    PUSH EDI                            ; 0047108e
    PUSH EBX                            ; 0047108f
    PUSH ECX                            ; 00471090
    MOV EDI,dword ptr [EBP + 0x8]       ; 00471091
    MOV ESI,dword ptr [EBP + 0xc]       ; 00471094
    MOV EBX,dword ptr [EBP + 0x10]      ; 00471097
    MOV ECX,dword ptr [EBP + 0x1c]      ; 0047109a
    PXOR MM7,MM7                        ; 0047109d
    MOVD MM3,dword ptr [EBP + 0x18]     ; 004710a0
    MOVD MM4,dword ptr [EBP + 0x14]     ; 004710a4
    MOVD MM5,dword ptr [EBP + 0x18]     ; 004710a8
    MOVD MM6,dword ptr [EBP + 0x14]     ; 004710ac
    PSLLQ MM3,0x20                      ; 004710b0
    PSLLQ MM4,0x20                      ; 004710b4
    POR MM3,MM5                         ; 004710b8
    POR MM4,MM6                         ; 004710bb
    PSRLW MM3,0x1                       ; 004710be
    PSRLW MM4,0x1                       ; 004710c2
    MOVD MM0,dword ptr [ESI]            ; 004710c6
        ;   Label: LAB_004710c6
    MOVD MM1,dword ptr [EBX]            ; 004710c9
    PUNPCKLBW MM0,MM7                   ; 004710cc
    PUNPCKLBW MM1,MM7                   ; 004710cf
    PSLLW MM0,0x7                       ; 004710d2
    PSLLW MM1,0x7                       ; 004710d6
    PMULHW MM0,MM3                      ; 004710da
    PMULHW MM1,MM4                      ; 004710dd
    PADDW MM0,MM1                       ; 004710e0
    PSRLW MM0,0x6                       ; 004710e3
    PACKUSWB MM0,MM7                    ; 004710e7
    MOVD dword ptr [EDI],MM0            ; 004710ea
    ADD ESI,0x4                         ; 004710ed
    ADD EBX,0x4                         ; 004710f0
    ADD EDI,0x4                         ; 004710f3
    SUB ECX,0x4                         ; 004710f6
    JG 0x004710c6                       ; 004710f9
        ;   XREF to: 004710c6 (CONDITIONAL_JUMP)  ; LAB_004710c6
    POP ECX                             ; 004710fb
    POP EBX                             ; 004710fc
    EMMS                                ; 004710fd
    POP EDI                             ; 004710ff
    POP ESI                             ; 00471100
    LEAVE                               ; 00471101
    RET                                 ; 00471102

