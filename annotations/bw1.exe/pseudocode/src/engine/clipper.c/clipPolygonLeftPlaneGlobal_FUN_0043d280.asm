; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipPolygonLeftPlaneGlobal_FUN_0043d280(void)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_0043d268 = 0043d331
;   undefined1* PTR_caseD_3_0043d270 = 0043d311
;   undefined4 DAT_007c8424
;   undefined4 DAT_007c8428
;   undefined4 DAT_007c8430
;   undefined4 DAT_007c8438
;   undefined4 DAT_007c9030
;   undefined4 DAT_007c9034
;
; Called Functions:
;   engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043cda0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043d280
        ;   Label: engine_clipper.c_clipPolygonLeftPlaneGlobal_FUN_0043d280
    PUSH ESI                            ; 0043d281
    PUSH EDI                            ; 0043d282
    PUSH EBP                            ; 0043d283
    SUB ESP,0x4                         ; 0043d284
    XOR EDX,EDX                         ; 0043d287
    MOV ECX,dword ptr [0x007c8424]      ; 0043d289 | DAT_007c8424
    MOV dword ptr [ESP],EDX             ; 0043d28f
    TEST ECX,ECX                        ; 0043d292
    JLE 0x0043d329                      ; 0043d294
        ;   XREF to: 0043d329 (CONDITIONAL_JUMP)  ; LAB_0043d329
    MOV EBX,0x7c8430                    ; 0043d29a
    MOV EAX,dword ptr [ESP]             ; 0043d29f
        ;   Label: LAB_0043d29f
    MOV EBP,dword ptr [0x007c8424]      ; 0043d2a2 | DAT_007c8424
    INC EAX                             ; 0043d2a8
    CMP EAX,EBP                         ; 0043d2a9
    JNZ 0x0043d2af                      ; 0043d2ab
        ;   XREF to: 0043d2af (CONDITIONAL_JUMP)  ; LAB_0043d2af
    XOR EAX,EBP                         ; 0043d2ad
    IMUL EAX,EAX,0x30                   ; 0043d2af
        ;   Label: LAB_0043d2af
    MOV EBP,0x7c8430                    ; 0043d2b2 | DAT_007c8430
    MOV EDX,EBX                         ; 0043d2b7
    MOV EDI,dword ptr [EBX + 0x8]       ; 0043d2b9
    MOV ECX,dword ptr [EBX]             ; 0043d2bc
    NEG EDI                             ; 0043d2be
    ADD EBP,EAX                         ; 0043d2c0
    XOR EAX,EAX                         ; 0043d2c2
    CMP EDI,ECX                         ; 0043d2c4
    JL 0x0043d2cd                       ; 0043d2c6
        ;   XREF to: 0043d2cd (CONDITIONAL_JUMP)  ; LAB_0043d2cd
    MOV EAX,0x1                         ; 0043d2c8
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043d2cd | DAT_007c8438
        ;   Label: LAB_0043d2cd
    MOV ESI,dword ptr [EBP]             ; 0043d2d0 | DAT_007c8430
    NEG EDI                             ; 0043d2d3
    CMP EDI,ESI                         ; 0043d2d5
    JL 0x0043d2db                       ; 0043d2d7
        ;   XREF to: 0043d2db (CONDITIONAL_JUMP)  ; LAB_0043d2db
    OR AL,0x2                           ; 0043d2d9
    CMP EAX,0x3                         ; 0043d2db
        ;   Label: LAB_0043d2db
    JA 0x0043d311                       ; 0043d2de
        ;   XREF to: 0043d311 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43d264]  ; 0043d2e0 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007c8428],0x30 ; 0043d2e7 | DAT_007c8428
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043d2ee
    MOV ESI,EDX                         ; 0043d2f3
    ADD EDI,0x7c9030                    ; 0043d2f5 | DAT_007c9030
    PUSH EDI                            ; 0043d2fb
    MOV EAX,ECX                         ; 0043d2fc
    SHR ECX,0x2                         ; 0043d2fe
    MOVSD.REP ES:EDI,ESI                ; 0043d301 | DAT_007c9030 | DAT_007c9034
    MOV CL,AL                           ; 0043d303
    AND CL,0x3                          ; 0043d305
    MOVSB.REP ES:EDI,ESI                ; 0043d308 | DAT_007c9034
    POP EDI                             ; 0043d30a
    INC dword ptr [0x007c8428]          ; 0043d30b | DAT_007c8428
    MOV ESI,dword ptr [ESP]             ; 0043d311
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x007c8424]      ; 0043d314 | DAT_007c8424
    INC ESI                             ; 0043d31a
    ADD EBX,0x30                        ; 0043d31b
    MOV dword ptr [ESP],ESI             ; 0043d31e
    CMP ESI,EDI                         ; 0043d321
    JL 0x0043d29f                       ; 0043d323
        ;   XREF to: 0043d29f (CONDITIONAL_JUMP)  ; LAB_0043d29f
    ADD ESP,0x4                         ; 0043d329
        ;   Label: LAB_0043d329
    POP EBP                             ; 0043d32c
    POP EDI                             ; 0043d32d
    POP ESI                             ; 0043d32e
    POP EBX                             ; 0043d32f
    RET                                 ; 0043d330
    IMUL EAX,dword ptr [0x007c8428],0x30 ; 0043d331 | DAT_007c8428
        ;   Label: caseD_1
    ADD EAX,0x7c9030                    ; 0043d338 | DAT_007c9030
    PUSH EAX                            ; 0043d33d
    PUSH EDX                            ; 0043d33e
    PUSH EBP                            ; 0043d33f
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043cda0 ; 0043d340
        ;   XREF to: 0043cda0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043cda0()
    MOV ESI,dword ptr [0x007c8428]      ; 0043d345 | DAT_007c8428
    INC ESI                             ; 0043d34b
    ADD ESP,0xc                         ; 0043d34c
    MOV dword ptr [0x007c8428],ESI      ; 0043d34f | DAT_007c8428
    JMP 0x0043d311                      ; 0043d355
        ;   XREF to: 0043d311 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007c8428],0x30 ; 0043d357 | DAT_007c8428
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043d35e
    MOV ESI,EDX                         ; 0043d363
    ADD EDI,0x7c9030                    ; 0043d365 | DAT_007c9030
    PUSH EDI                            ; 0043d36b
    MOV EAX,ECX                         ; 0043d36c
    SHR ECX,0x2                         ; 0043d36e
    MOVSD.REP ES:EDI,ESI                ; 0043d371 | DAT_007c9030 | DAT_007c9034
    MOV CL,AL                           ; 0043d373
    AND CL,0x3                          ; 0043d375
    MOVSB.REP ES:EDI,ESI                ; 0043d378 | DAT_007c9034
    POP EDI                             ; 0043d37a
    MOV ECX,dword ptr [0x007c8428]      ; 0043d37b | DAT_007c8428
    INC ECX                             ; 0043d381
    MOV dword ptr [0x007c8428],ECX      ; 0043d382 | DAT_007c8428
    IMUL EAX,ECX,0x30                   ; 0043d388
    ADD EAX,0x7c9030                    ; 0043d38b | DAT_007c9030
    PUSH EAX                            ; 0043d390
    PUSH EBP                            ; 0043d391
    PUSH EDX                            ; 0043d392
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043cda0 ; 0043d393
        ;   XREF to: 0043cda0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043cda0()
    MOV EDI,dword ptr [0x007c8428]      ; 0043d398 | DAT_007c8428
    INC EDI                             ; 0043d39e
    ADD ESP,0xc                         ; 0043d39f
    MOV dword ptr [0x007c8428],EDI      ; 0043d3a2 | DAT_007c8428
    JMP 0x0043d311                      ; 0043d3a8
        ;   XREF to: 0043d311 (UNCONDITIONAL_JUMP)  ; caseD_3

