; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0059d220(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0044fd70
;   FUN_004ea8b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d220
        ;   Label: FUN_0059d220
    PUSH ESI                            ; 0059d221
    PUSH EDI                            ; 0059d222
    MOV EDX,dword ptr [ESP + 0x10]      ; 0059d223
    PUSH EDX                            ; 0059d227
    CALL FUN_004ea8b0                   ; 0059d228
        ;   XREF to: 004ea8b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea8b0()
    ADD ESP,0x4                         ; 0059d22d
    PUSH 0x5ef7fb                       ; 0059d230
    MOV EBX,EAX                         ; 0059d235
    LEA EDI,[EAX + 0x2b4]               ; 0059d237
    PUSH EDI                            ; 0059d23d
    MOV dword ptr [EAX + 0x2b0],0x5fea34 ; 0059d23e
    CALL FUN_0044fd70                   ; 0059d248
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    MOV dword ptr [EBX + 0x43c],0x8     ; 0059d24d
    MOV dword ptr [EBX + 0x6d8],0x41c80000 ; 0059d257
    MOV ESI,0x5ef803                    ; 0059d261
    MOV dword ptr [EBX + 0x6dc],0x42480000 ; 0059d266
    ADD ESP,0x8                         ; 0059d270
    MOV dword ptr [EBX + 0x6e0],0x0     ; 0059d273
    LEA EDI,[EBX + 0x6fc]               ; 0059d27d
    MOV dword ptr [EBX + 0x6e4],0x1     ; 0059d283
    PUSH EDI                            ; 0059d28d
    MOV AL,byte ptr [ESI]               ; 0059d28e
        ;   Label: LAB_0059d28e
    MOV byte ptr [EDI],AL               ; 0059d290
    CMP AL,0x0                          ; 0059d292
    JZ 0x0059d2a6                       ; 0059d294
        ;   XREF to: 0059d2a6 (CONDITIONAL_JUMP)  ; LAB_0059d2a6
    MOV AL,byte ptr [ESI + 0x1]         ; 0059d296
    ADD ESI,0x2                         ; 0059d299
    MOV byte ptr [EDI + 0x1],AL         ; 0059d29c
    ADD EDI,0x2                         ; 0059d29f
    CMP AL,0x0                          ; 0059d2a2
    JNZ 0x0059d28e                      ; 0059d2a4
        ;   XREF to: 0059d28e (CONDITIONAL_JUMP)  ; LAB_0059d28e
    POP EDI                             ; 0059d2a6
        ;   Label: LAB_0059d2a6
    MOV ESI,0x5ef818                    ; 0059d2a7
    LEA EDI,[EBX + 0x760]               ; 0059d2ac
    PUSH EDI                            ; 0059d2b2
    MOV AL,byte ptr [ESI]               ; 0059d2b3
        ;   Label: LAB_0059d2b3
    MOV byte ptr [EDI],AL               ; 0059d2b5
    CMP AL,0x0                          ; 0059d2b7
    JZ 0x0059d2cb                       ; 0059d2b9
        ;   XREF to: 0059d2cb (CONDITIONAL_JUMP)  ; LAB_0059d2cb
    MOV AL,byte ptr [ESI + 0x1]         ; 0059d2bb
    ADD ESI,0x2                         ; 0059d2be
    MOV byte ptr [EDI + 0x1],AL         ; 0059d2c1
    ADD EDI,0x2                         ; 0059d2c4
    CMP AL,0x0                          ; 0059d2c7
    JNZ 0x0059d2b3                      ; 0059d2c9
        ;   XREF to: 0059d2b3 (CONDITIONAL_JUMP)  ; LAB_0059d2b3
    POP EDI                             ; 0059d2cb
        ;   Label: LAB_0059d2cb
    MOV ESI,0x5ef82d                    ; 0059d2cc
    LEA EDI,[EBX + 0x7c4]               ; 0059d2d1
    PUSH EDI                            ; 0059d2d7
    MOV AL,byte ptr [ESI]               ; 0059d2d8
        ;   Label: LAB_0059d2d8
    MOV byte ptr [EDI],AL               ; 0059d2da
    CMP AL,0x0                          ; 0059d2dc
    JZ 0x0059d2f0                       ; 0059d2de
        ;   XREF to: 0059d2f0 (CONDITIONAL_JUMP)  ; LAB_0059d2f0
    MOV AL,byte ptr [ESI + 0x1]         ; 0059d2e0
    ADD ESI,0x2                         ; 0059d2e3
    MOV byte ptr [EDI + 0x1],AL         ; 0059d2e6
    ADD EDI,0x2                         ; 0059d2e9
    CMP AL,0x0                          ; 0059d2ec
    JNZ 0x0059d2d8                      ; 0059d2ee
        ;   XREF to: 0059d2d8 (CONDITIONAL_JUMP)  ; LAB_0059d2d8
    POP EDI                             ; 0059d2f0
        ;   Label: LAB_0059d2f0
    MOV EAX,EBX                         ; 0059d2f1
    POP EDI                             ; 0059d2f3
    POP ESI                             ; 0059d2f4
    POP EBX                             ; 0059d2f5
    RET                                 ; 0059d2f6

