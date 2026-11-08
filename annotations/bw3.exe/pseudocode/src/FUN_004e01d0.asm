; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e01d0(int param_1)
;
;
; Called Functions:
;   FUN_00408890
;   FUN_00462580
;   FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e01d0
        ;   Label: FUN_004e01d0
    PUSH ESI                            ; 004e01d1
    PUSH EDI                            ; 004e01d2
    PUSH EBP                            ; 004e01d3
    MOV EBP,ESP                         ; 004e01d4
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e01d6
    LEA EAX,[EBX + 0x158]               ; 004e01d9
    PUSH EAX                            ; 004e01df
    CALL FUN_00462580                   ; 004e01e0
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; undefined FUN_00462580()
    ADD ESP,0x4                         ; 004e01e5
    PUSH EBX                            ; 004e01e8
    CALL FUN_00408890                   ; 004e01e9
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; undefined FUN_00408890()
    MOV AH,byte ptr [EBX + 0x3a8]       ; 004e01ee
    ADD ESP,0x4                         ; 004e01f4
    TEST AH,AH                          ; 004e01f7
    JZ 0x004e0200                       ; 004e01f9
        ;   XREF to: 004e0200 (CONDITIONAL_JUMP)  ; LAB_004e0200
    POP EBP                             ; 004e01fb
        ;   Label: LAB_004e01fb
    POP EDI                             ; 004e01fc
    POP ESI                             ; 004e01fd
    POP EBX                             ; 004e01fe
    RET                                 ; 004e01ff
    PUSH 0x5c68e1                       ; 004e0200
        ;   Label: LAB_004e0200
    LEA EAX,[EBX + 0x1d0]               ; 004e0205
    PUSH EAX                            ; 004e020b
    CALL FUN_005a3260                   ; 004e020c
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004e0211
    TEST EAX,EAX                        ; 004e0214
    JZ 0x004e01fb                       ; 004e0216
        ;   XREF to: 004e01fb (CONDITIONAL_JUMP)  ; LAB_004e01fb
    MOV ESI,0x5c68f0                    ; 004e0218
    LEA EDI,[EBX + 0x3a8]               ; 004e021d
    PUSH EDI                            ; 004e0223
    MOV AL,byte ptr [ESI]               ; 004e0224
        ;   Label: LAB_004e0224
    MOV byte ptr [EDI],AL               ; 004e0226
    CMP AL,0x0                          ; 004e0228
    JZ 0x004e023c                       ; 004e022a
        ;   XREF to: 004e023c (CONDITIONAL_JUMP)  ; LAB_004e023c
    MOV AL,byte ptr [ESI + 0x1]         ; 004e022c
    ADD ESI,0x2                         ; 004e022f
    MOV byte ptr [EDI + 0x1],AL         ; 004e0232
    ADD EDI,0x2                         ; 004e0235
    CMP AL,0x0                          ; 004e0238
    JNZ 0x004e0224                      ; 004e023a
        ;   XREF to: 004e0224 (CONDITIONAL_JUMP)  ; LAB_004e0224
    POP EDI                             ; 004e023c
        ;   Label: LAB_004e023c
    POP EBP                             ; 004e023d
    POP EDI                             ; 004e023e
    POP ESI                             ; 004e023f
    POP EBX                             ; 004e0240
    RET                                 ; 004e0241

