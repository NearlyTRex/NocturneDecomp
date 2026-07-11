; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004652d0(undefined4 *param_1,undefined4 *param_2,byte *param_3,byte *param_4)
;
;
; XREF[1]:
;   FUN_00447bb0 at 00447c48
;
; Referenced Globals:
;   undefined4 DAT_005b5d00
;   undefined4 DAT_005b64f8
;   undefined4 DAT_00b0e1fc
;   undefined4 DAT_01c039a8
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004652d0
        ;   Label: FUN_004652d0
    MOV EBP,ESP                         ; 004652d1
    PUSH ESI                            ; 004652d3
    PUSH EDI                            ; 004652d4
    PUSH EBP                            ; 004652d5
    MOV EDI,dword ptr [EBP + 0x8]       ; 004652d6
    MOV ESI,dword ptr [EBP + 0xc]       ; 004652d9
    MOV EBX,dword ptr [EBP + 0x10]      ; 004652dc
    MOV EBP,dword ptr [EBP + 0x14]      ; 004652df
    PXOR MM7,MM7                        ; 004652e2
    MOVD MM5,dword ptr [0x01c039a8]     ; 004652e5 | DAT_01c039a8
    PUNPCKLBW MM5,MM7                   ; 004652ec
    PSLLW MM5,0x6                       ; 004652ef
    MOVZX EDX,byte ptr [EBX]            ; 004652f3
    MOVD MM0,dword ptr [ESI]            ; 004652f6
    MOVD MM2,dword ptr [EDX*0x4 + 0xb0e1fc] ; 004652f9 | DAT_00b0e1fc
    MOVZX EAX,byte ptr [EBP]            ; 00465301
    PUNPCKLBW MM0,MM7                   ; 00465305
    SHR EDX,0x1                         ; 00465308
    PUNPCKLBW MM2,MM7                   ; 0046530a
    ADD EAX,EDX                         ; 0046530d
    PMULLW MM0,MM2                      ; 0046530f
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5b5d00] ; 00465312 | DAT_005b5d00
    MOVQ MM2,MM3                        ; 0046531a
    MOVQ MM4,MM5                        ; 0046531d
    PXOR MM2,qword ptr [0x005b64f8]     ; 00465320 | DAT_005b64f8
    PMULHW MM0,MM2                      ; 00465327
    PMULHW MM4,MM3                      ; 0046532a
    PADDW MM0,MM4                       ; 0046532d
    PSRLW MM0,0x4                       ; 00465330
    PACKUSWB MM0,MM7                    ; 00465334
    MOVD dword ptr [EDI],MM0            ; 00465337
    POP EBP                             ; 0046533a
    EMMS                                ; 0046533b
    POP EDI                             ; 0046533d
    POP ESI                             ; 0046533e
    LEAVE                               ; 0046533f
    RET                                 ; 00465340

