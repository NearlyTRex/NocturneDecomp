; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_0057e270(undefined4 param_1,undefined4 *param_2,uint param_3)
;
;
; Called Functions:
;   FUN_0058ffc0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0057e270
        ;   Label: FUN_0057e270
    PUSH EBP                            ; 0057e271
    SUB ESP,0x104                       ; 0057e272
    MOV EDX,dword ptr [ESP + 0x118]     ; 0057e278
    CMP EDX,0x1                         ; 0057e27f
    JL 0x0057e323                       ; 0057e282
        ;   XREF to: 0057e323 (CONDITIONAL_JUMP)  ; LAB_0057e323
    PUSH ESI                            ; 0057e288
    PUSH EBX                            ; 0057e289
    MOV EBX,dword ptr [ESP + 0x11c]     ; 0057e28a
    MOV EBP,EDX                         ; 0057e291
    CMP EDX,0x100                       ; 0057e293
    JLE 0x0057e2e0                      ; 0057e299
        ;   XREF to: 0057e2e0 (CONDITIONAL_JUMP)  ; LAB_0057e2e0
    MOV ECX,0x100                       ; 0057e29b
        ;   Label: LAB_0057e29b
    LEA EDI,[ESP + 0x8]                 ; 0057e2a0
    MOV ESI,EBX                         ; 0057e2a4
    PUSH EDI                            ; 0057e2a6
    MOV EAX,ECX                         ; 0057e2a7
    SHR ECX,0x2                         ; 0057e2a9
    MOVSD.REP ES:EDI,ESI                ; 0057e2ac
    MOV CL,AL                           ; 0057e2ae
    AND CL,0x3                          ; 0057e2b0
    MOVSB.REP ES:EDI,ESI                ; 0057e2b3
    POP EDI                             ; 0057e2b5
    SUB EBP,0x100                       ; 0057e2b6
    LEA EDI,[ESP + 0x8]                 ; 0057e2bc
    XOR AH,AH                           ; 0057e2c0
    PUSH EDI                            ; 0057e2c2
    ADD EBX,0x100                       ; 0057e2c3
    MOV byte ptr [ESP + 0x10c],AH       ; 0057e2c9
    CALL FUN_0058ffc0                   ; 0057e2d0
        ;   XREF to: 0058ffc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058ffc0()
    ADD ESP,0x4                         ; 0057e2d5
    CMP EBP,0x100                       ; 0057e2d8
    JG 0x0057e29b                       ; 0057e2de
        ;   XREF to: 0057e29b (CONDITIONAL_JUMP)  ; LAB_0057e29b
    TEST EBP,EBP                        ; 0057e2e0
        ;   Label: LAB_0057e2e0
    JLE 0x0057e30f                      ; 0057e2e2
        ;   XREF to: 0057e30f (CONDITIONAL_JUMP)  ; LAB_0057e30f
    LEA EDI,[ESP + 0x8]                 ; 0057e2e4
    MOV ECX,EBP                         ; 0057e2e8
    MOV ESI,EBX                         ; 0057e2ea
    PUSH EDI                            ; 0057e2ec
    MOV EAX,ECX                         ; 0057e2ed
    SHR ECX,0x2                         ; 0057e2ef
    MOVSD.REP ES:EDI,ESI                ; 0057e2f2
    MOV CL,AL                           ; 0057e2f4
    AND CL,0x3                          ; 0057e2f6
    MOVSB.REP ES:EDI,ESI                ; 0057e2f9
    POP EDI                             ; 0057e2fb
    LEA EBX,[ESP + 0x8]                 ; 0057e2fc
    XOR DL,DL                           ; 0057e300
    PUSH EBX                            ; 0057e302
    MOV byte ptr [ESP + EBP*0x1 + 0xc],DL ; 0057e303
    CALL FUN_0058ffc0                   ; 0057e307
        ;   XREF to: 0058ffc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058ffc0()
    ADD ESP,0x4                         ; 0057e30c
    MOV EDI,dword ptr [ESP + 0x120]     ; 0057e30f
        ;   Label: LAB_0057e30f
    POP EBX                             ; 0057e316
    POP ESI                             ; 0057e317
    MOV EAX,EDI                         ; 0057e318
    ADD ESP,0x104                       ; 0057e31a
    POP EBP                             ; 0057e320
    POP EDI                             ; 0057e321
    RET                                 ; 0057e322
    MOV EDI,EDX                         ; 0057e323
        ;   Label: LAB_0057e323
    MOV EAX,EDI                         ; 0057e325
    ADD ESP,0x104                       ; 0057e327
    POP EBP                             ; 0057e32d
    POP EDI                             ; 0057e32e
    RET                                 ; 0057e32f

