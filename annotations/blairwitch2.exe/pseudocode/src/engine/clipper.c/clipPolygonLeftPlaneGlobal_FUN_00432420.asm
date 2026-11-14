; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_clipPolygonLeftPlaneGlobal_FUN_00432420(void)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_00432408 = 004324d1
;   undefined1* PTR_caseD_3_00432410 = 004324b1
;   undefined4 DAT_007bfd00
;   undefined4 DAT_007bfd04
;   undefined4 DAT_007bfd0c
;   undefined4 DAT_007bfd14
;   undefined4 DAT_007c090c
;   undefined4 DAT_007c0910
;
; Called Functions:
;   engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00431f40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432420
        ;   Label: engine_clipper.c_clipPolygonLeftPlaneGlobal_FUN_00432420
    PUSH ESI                            ; 00432421
    PUSH EDI                            ; 00432422
    PUSH EBP                            ; 00432423
    SUB ESP,0x4                         ; 00432424
    XOR EDX,EDX                         ; 00432427
    MOV ECX,dword ptr [0x007bfd00]      ; 00432429 | DAT_007bfd00
    MOV dword ptr [ESP],EDX             ; 0043242f
    TEST ECX,ECX                        ; 00432432
    JLE 0x004324c9                      ; 00432434
        ;   XREF to: 004324c9 (CONDITIONAL_JUMP)  ; LAB_004324c9
    MOV EBX,0x7bfd0c                    ; 0043243a
    MOV EAX,dword ptr [ESP]             ; 0043243f
        ;   Label: LAB_0043243f
    MOV EBP,dword ptr [0x007bfd00]      ; 00432442 | DAT_007bfd00
    INC EAX                             ; 00432448
    CMP EAX,EBP                         ; 00432449
    JNZ 0x0043244f                      ; 0043244b
        ;   XREF to: 0043244f (CONDITIONAL_JUMP)  ; LAB_0043244f
    XOR EAX,EBP                         ; 0043244d
    IMUL EAX,EAX,0x30                   ; 0043244f
        ;   Label: LAB_0043244f
    MOV EBP,0x7bfd0c                    ; 00432452 | DAT_007bfd0c
    MOV EDX,EBX                         ; 00432457
    MOV EDI,dword ptr [EBX + 0x8]       ; 00432459
    MOV ECX,dword ptr [EBX]             ; 0043245c
    NEG EDI                             ; 0043245e
    ADD EBP,EAX                         ; 00432460
    XOR EAX,EAX                         ; 00432462
    CMP EDI,ECX                         ; 00432464
    JL 0x0043246d                       ; 00432466
        ;   XREF to: 0043246d (CONDITIONAL_JUMP)  ; LAB_0043246d
    MOV EAX,0x1                         ; 00432468
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043246d | DAT_007bfd14
        ;   Label: LAB_0043246d
    MOV ESI,dword ptr [EBP]             ; 00432470 | DAT_007bfd0c
    NEG EDI                             ; 00432473
    CMP EDI,ESI                         ; 00432475
    JL 0x0043247b                       ; 00432477
        ;   XREF to: 0043247b (CONDITIONAL_JUMP)  ; LAB_0043247b
    OR AL,0x2                           ; 00432479
    CMP EAX,0x3                         ; 0043247b
        ;   Label: LAB_0043247b
    JA 0x004324b1                       ; 0043247e
        ;   XREF to: 004324b1 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x432404]  ; 00432480 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007bfd04],0x30 ; 00432487 | DAT_007bfd04
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043248e
    MOV ESI,EDX                         ; 00432493
    ADD EDI,0x7c090c                    ; 00432495 | DAT_007c090c
    PUSH EDI                            ; 0043249b
    MOV EAX,ECX                         ; 0043249c
    SHR ECX,0x2                         ; 0043249e
    MOVSD.REP ES:EDI,ESI                ; 004324a1 | DAT_007c090c | DAT_007c0910
    MOV CL,AL                           ; 004324a3
    AND CL,0x3                          ; 004324a5
    MOVSB.REP ES:EDI,ESI                ; 004324a8 | DAT_007c0910
    POP EDI                             ; 004324aa
    INC dword ptr [0x007bfd04]          ; 004324ab | DAT_007bfd04
    MOV ESI,dword ptr [ESP]             ; 004324b1
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x007bfd00]      ; 004324b4 | DAT_007bfd00
    INC ESI                             ; 004324ba
    ADD EBX,0x30                        ; 004324bb
    MOV dword ptr [ESP],ESI             ; 004324be
    CMP ESI,EDI                         ; 004324c1
    JL 0x0043243f                       ; 004324c3
        ;   XREF to: 0043243f (CONDITIONAL_JUMP)  ; LAB_0043243f
    ADD ESP,0x4                         ; 004324c9
        ;   Label: LAB_004324c9
    POP EBP                             ; 004324cc
    POP EDI                             ; 004324cd
    POP ESI                             ; 004324ce
    POP EBX                             ; 004324cf
    RET                                 ; 004324d0
    IMUL EAX,dword ptr [0x007bfd04],0x30 ; 004324d1 | DAT_007bfd04
        ;   Label: caseD_1
    ADD EAX,0x7c090c                    ; 004324d8 | DAT_007c090c
    PUSH EAX                            ; 004324dd
    PUSH EDX                            ; 004324de
    PUSH EBP                            ; 004324df
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00431f40 ; 004324e0
        ;   XREF to: 00431f40 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00431f40(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007bfd04]      ; 004324e5 | DAT_007bfd04
    INC ESI                             ; 004324eb
    ADD ESP,0xc                         ; 004324ec
    MOV dword ptr [0x007bfd04],ESI      ; 004324ef | DAT_007bfd04
    JMP 0x004324b1                      ; 004324f5
        ;   XREF to: 004324b1 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007bfd04],0x30 ; 004324f7 | DAT_007bfd04
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 004324fe
    MOV ESI,EDX                         ; 00432503
    ADD EDI,0x7c090c                    ; 00432505 | DAT_007c090c
    PUSH EDI                            ; 0043250b
    MOV EAX,ECX                         ; 0043250c
    SHR ECX,0x2                         ; 0043250e
    MOVSD.REP ES:EDI,ESI                ; 00432511 | DAT_007c090c | DAT_007c0910
    MOV CL,AL                           ; 00432513
    AND CL,0x3                          ; 00432515
    MOVSB.REP ES:EDI,ESI                ; 00432518 | DAT_007c0910
    POP EDI                             ; 0043251a
    MOV ECX,dword ptr [0x007bfd04]      ; 0043251b | DAT_007bfd04
    INC ECX                             ; 00432521
    MOV dword ptr [0x007bfd04],ECX      ; 00432522 | DAT_007bfd04
    IMUL EAX,ECX,0x30                   ; 00432528
    ADD EAX,0x7c090c                    ; 0043252b | DAT_007c090c
    PUSH EAX                            ; 00432530
    PUSH EBP                            ; 00432531
    PUSH EDX                            ; 00432532
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00431f40 ; 00432533
        ;   XREF to: 00431f40 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00431f40(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007bfd04]      ; 00432538 | DAT_007bfd04
    INC EDI                             ; 0043253e
    ADD ESP,0xc                         ; 0043253f
    MOV dword ptr [0x007bfd04],EDI      ; 00432542 | DAT_007bfd04
    JMP 0x004324b1                      ; 00432548
        ;   XREF to: 004324b1 (UNCONDITIONAL_JUMP)  ; caseD_3

