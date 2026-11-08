; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00471200(undefined4 *param_1,undefined4 *param_2,byte *param_3,byte *param_4)
;
;
; XREF[1]:
;   FUN_00450ac0 at 00450b45
;
; Referenced Globals:
;   undefined4 DAT_005fa0e0
;   undefined4 DAT_005fa8d8
;   undefined4 DAT_00b9e14c
;   undefined4 DAT_01c6e2bc
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00471200
        ;   Label: FUN_00471200
    MOV EBP,ESP                         ; 00471201
    PUSH ESI                            ; 00471203
    PUSH EDI                            ; 00471204
    PUSH EBP                            ; 00471205
    MOV EDI,dword ptr [EBP + 0x8]       ; 00471206
    MOV ESI,dword ptr [EBP + 0xc]       ; 00471209
    MOV EBX,dword ptr [EBP + 0x10]      ; 0047120c
    MOV EBP,dword ptr [EBP + 0x14]      ; 0047120f
    PXOR MM7,MM7                        ; 00471212
    MOVD MM5,dword ptr [0x01c6e2bc]     ; 00471215 | DAT_01c6e2bc
    PUNPCKLBW MM5,MM7                   ; 0047121c
    PSLLW MM5,0x6                       ; 0047121f
    MOVZX EDX,byte ptr [EBX]            ; 00471223
    MOVD MM0,dword ptr [ESI]            ; 00471226
    MOVD MM2,dword ptr [EDX*0x4 + 0xb9e14c] ; 00471229 | DAT_00b9e14c
    MOVZX EAX,byte ptr [EBP]            ; 00471231
    PUNPCKLBW MM0,MM7                   ; 00471235
    SHR EDX,0x1                         ; 00471238
    PUNPCKLBW MM2,MM7                   ; 0047123a
    ADD EAX,EDX                         ; 0047123d
    PMULLW MM0,MM2                      ; 0047123f
    MOVQ MM3,qword ptr [EAX*0x8 + 0x5fa0e0] ; 00471242 | DAT_005fa0e0
    MOVQ MM2,MM3                        ; 0047124a
    MOVQ MM4,MM5                        ; 0047124d
    PXOR MM2,qword ptr [0x005fa8d8]     ; 00471250 | DAT_005fa8d8
    PMULHW MM0,MM2                      ; 00471257
    PMULHW MM4,MM3                      ; 0047125a
    PADDW MM0,MM4                       ; 0047125d
    PSRLW MM0,0x4                       ; 00471260
    PACKUSWB MM0,MM7                    ; 00471264
    MOVD dword ptr [EDI],MM0            ; 00471267
    POP EBP                             ; 0047126a
    EMMS                                ; 0047126b
    POP EDI                             ; 0047126d
    POP ESI                             ; 0047126e
    LEAVE                               ; 0047126f
    RET                                 ; 00471270

