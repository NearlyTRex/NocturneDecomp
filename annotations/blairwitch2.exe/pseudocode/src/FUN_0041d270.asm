; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041d270(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_lightType_005cc67f
;   TerminatedCString s_bLightPos_005cc689
;   TerminatedCString s_lightOrient_005cc693
;   TerminatedCString s_lightFov_005cc69f
;   TerminatedCString s_lightFov_005cc6a8
;   TerminatedCString s_light_status_005cc6b1
;   TerminatedCString s_light_falloff_005cc6be
;   undefined4 DAT_007bc038
;
; Called Functions:
;   FUN_0040b4b0
;   FUN_0040b550
;   FUN_0040b8e0
;   FUN_0040b960
;   FUN_0041c7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d270
        ;   Label: FUN_0041d270
    PUSH ESI                            ; 0041d271
    SUB ESP,0x4                         ; 0041d272
    MOV EBX,dword ptr [ESP + 0x10]      ; 0041d275
    PUSH EBX                            ; 0041d279
    CALL FUN_0041c7f0                   ; 0041d27a
        ;   XREF to: 0041c7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041c7f0()
    ADD ESP,0x4                         ; 0041d27f
    PUSH 0x5cc67f                       ; 0041d282 | = "lightType"
    LEA EAX,[EBX + 0x7d4]               ; 0041d287
    PUSH EAX                            ; 0041d28d
    CALL FUN_0040b960                   ; 0041d28e
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    MOV EDX,dword ptr [EBX + 0x7d4]     ; 0041d293
    ADD ESP,0x8                         ; 0041d299
    TEST EDX,EDX                        ; 0041d29c
    JNZ 0x0041d2f1                      ; 0041d29e
        ;   XREF to: 0041d2f1 (CONDITIONAL_JUMP)  ; LAB_0041d2f1
    PUSH 0x5cc689                       ; 0041d2a0 | = "bLightPos"
    LEA EAX,[EBX + 0x3788]              ; 0041d2a5
    PUSH EAX                            ; 0041d2ab
    CALL FUN_0040b4b0                   ; 0041d2ac
        ;   XREF to: 0040b4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b4b0()
    ADD ESP,0x8                         ; 0041d2b1
    PUSH 0x5cc693                       ; 0041d2b4 | = "lightOrient"
    LEA EAX,[EBX + 0x3794]              ; 0041d2b9
    PUSH EAX                            ; 0041d2bf
    LEA ESI,[EBX + 0x7d8]               ; 0041d2c0
    CALL FUN_0040b550                   ; 0041d2c6
        ;   XREF to: 0040b550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b550()
    MOV ECX,dword ptr [0x007bc038]      ; 0041d2cb | DAT_007bc038
    ADD ESP,0x8                         ; 0041d2d1
    CMP ECX,0x1                         ; 0041d2d4
    JNZ 0x0041d315                      ; 0041d2d7
        ;   XREF to: 0041d315 (CONDITIONAL_JUMP)  ; LAB_0041d315
    PUSH 0x5cc69f                       ; 0041d2d9 | = "lightFov"
    LEA EAX,[ESP + 0x4]                 ; 0041d2de
    PUSH EAX                            ; 0041d2e2
    CALL FUN_0040b8e0                   ; 0041d2e3
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0041d2e8
    MOV EAX,dword ptr [ESP]             ; 0041d2eb
    MOV dword ptr [ESI + 0x38],EAX      ; 0041d2ee
    PUSH 0x5cc6b1                       ; 0041d2f1 | = "light status"
        ;   Label: LAB_0041d2f1
    LEA EAX,[EBX + 0x248c]              ; 0041d2f6
    PUSH EAX                            ; 0041d2fc
    CALL FUN_0040b960                   ; 0041d2fd
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    MOV ESI,dword ptr [EBX + 0x7d4]     ; 0041d302
    ADD ESP,0x8                         ; 0041d308
    TEST ESI,ESI                        ; 0041d30b
    JZ 0x0041d330                       ; 0041d30d
        ;   XREF to: 0041d330 (CONDITIONAL_JUMP)  ; LAB_0041d330
    ADD ESP,0x4                         ; 0041d30f
    POP ESI                             ; 0041d312
    POP EBX                             ; 0041d313
    RET                                 ; 0041d314
    PUSH 0x5cc6a8                       ; 0041d315 | = "lightFov"
        ;   Label: LAB_0041d315
    LEA EAX,[ESP + 0x4]                 ; 0041d31a
    FLD float ptr [ESI + 0x38]          ; 0041d31e
    PUSH EAX                            ; 0041d321
    FSTP float ptr [ESP + 0x8]          ; 0041d322
    CALL FUN_0040b8e0                   ; 0041d326
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0041d32b
    JMP 0x0041d2f1                      ; 0041d32e
        ;   XREF to: 0041d2f1 (UNCONDITIONAL_JUMP)  ; LAB_0041d2f1
    PUSH 0x5cc6be                       ; 0041d330 | = "light falloff"
        ;   Label: LAB_0041d330
    ADD EBX,0x918                       ; 0041d335
    PUSH EBX                            ; 0041d33b
    CALL FUN_0040b8e0                   ; 0041d33c
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0041d341
    ADD ESP,0x4                         ; 0041d344
    POP ESI                             ; 0041d347
    POP EBX                             ; 0041d348
    RET                                 ; 0041d349

