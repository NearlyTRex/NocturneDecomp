; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_clipper_c_FUN_004322de(void)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004322c8 = 00432341
;   undefined1* PTR_caseD_3_004322d4 = 0043236b
;   undefined4 DAT_007bfcfc
;   undefined4 DAT_007bfd00
;   undefined4 DAT_007bfd0c
;   undefined1 DAT_007bfd10
;   undefined4 DAT_007c030c
;   undefined4 DAT_007c0314
;
; Called Functions:
;   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00431e10
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 004322de
        ;   Label: engine_clipper.c_FUN_004322de
    PUSH EBX                            ; 004322e0
    PUSH ESI                            ; 004322e1
    PUSH EDI                            ; 004322e2
    PUSH EBP                            ; 004322e3
    SUB ESP,0x4                         ; 004322e4
    XOR EDX,EDX                         ; 004322e7
    MOV ECX,dword ptr [0x007bfcfc]      ; 004322e9 | DAT_007bfcfc
    MOV dword ptr [ESP],EDX             ; 004322ef
    TEST ECX,ECX                        ; 004322f2
    JLE 0x0043237f                      ; 004322f4
        ;   XREF to: 0043237f (CONDITIONAL_JUMP)  ; LAB_0043237f
    MOV EBX,0x7c030c                    ; 004322fa
    MOV EAX,dword ptr [ESP]             ; 004322ff
        ;   Label: LAB_004322ff
    MOV EBP,dword ptr [0x007bfcfc]      ; 00432302 | DAT_007bfcfc
    INC EAX                             ; 00432308
    CMP EAX,EBP                         ; 00432309
    JNZ 0x0043230f                      ; 0043230b
        ;   XREF to: 0043230f (CONDITIONAL_JUMP)  ; LAB_0043230f
    XOR EAX,EBP                         ; 0043230d
    IMUL EAX,EAX,0x30                   ; 0043230f
        ;   Label: LAB_0043230f
    MOV EBP,0x7c030c                    ; 00432312 | DAT_007c030c
    MOV EDX,EBX                         ; 00432317
    MOV EDI,dword ptr [EBX]             ; 00432319
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043231b
    ADD EBP,EAX                         ; 0043231e
    XOR EAX,EAX                         ; 00432320
    CMP EDI,ECX                         ; 00432322
    JL 0x0043232b                       ; 00432324
        ;   XREF to: 0043232b (CONDITIONAL_JUMP)  ; LAB_0043232b
    MOV EAX,0x1                         ; 00432326
    MOV ESI,dword ptr [EBP + 0x8]       ; 0043232b | DAT_007c0314
        ;   Label: LAB_0043232b
    CMP ESI,dword ptr [EBP]             ; 0043232e | DAT_007c030c
    JG 0x00432335                       ; 00432331
        ;   XREF to: 00432335 (CONDITIONAL_JUMP)  ; LAB_00432335
    OR AL,0x2                           ; 00432333
    CMP EAX,0x3                         ; 00432335
        ;   Label: LAB_00432335
    JA 0x0043236b                       ; 00432338
        ;   XREF to: 0043236b (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4322c8]  ; 0043233a | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007bfd00],0x30 ; 00432341 | DAT_007bfd00
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00432348
    MOV ESI,EDX                         ; 0043234d
    ADD EDI,0x7bfd0c                    ; 0043234f | DAT_007bfd0c
    PUSH EDI                            ; 00432355
    MOV EAX,ECX                         ; 00432356
    SHR ECX,0x2                         ; 00432358
    MOVSD.REP ES:EDI,ESI                ; 0043235b | DAT_007bfd0c | DAT_007bfd10
    MOV CL,AL                           ; 0043235d
    AND CL,0x3                          ; 0043235f
    MOVSB.REP ES:EDI,ESI                ; 00432362 | DAT_007bfd10
    POP EDI                             ; 00432364
    INC dword ptr [0x007bfd00]          ; 00432365 | DAT_007bfd00
    MOV ESI,dword ptr [ESP]             ; 0043236b
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x007bfcfc]      ; 0043236e | DAT_007bfcfc
    INC ESI                             ; 00432374
    ADD EBX,0x30                        ; 00432375
    MOV dword ptr [ESP],ESI             ; 00432378
    CMP ESI,EDI                         ; 0043237b
    JL 0x004322ff                       ; 0043237d
        ;   XREF to: 004322ff (CONDITIONAL_JUMP)  ; LAB_004322ff
    ADD ESP,0x4                         ; 0043237f
        ;   Label: LAB_0043237f
    POP EBP                             ; 00432382
    POP EDI                             ; 00432383
    POP ESI                             ; 00432384
    POP EBX                             ; 00432385
    RET                                 ; 00432386
    IMUL EAX,dword ptr [0x007bfd00],0x30 ; 00432387 | DAT_007bfd00
        ;   Label: caseD_1
    ADD EAX,0x7bfd0c                    ; 0043238e | DAT_007bfd0c
    PUSH EAX                            ; 00432393
    PUSH EDX                            ; 00432394
    PUSH EBP                            ; 00432395
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00431e10 ; 00432396
        ;   XREF to: 00431e10 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00431e10()
    MOV ESI,dword ptr [0x007bfd00]      ; 0043239b | DAT_007bfd00
    INC ESI                             ; 004323a1
    ADD ESP,0xc                         ; 004323a2
    MOV dword ptr [0x007bfd00],ESI      ; 004323a5 | DAT_007bfd00
    JMP 0x0043236b                      ; 004323ab
        ;   XREF to: 0043236b (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007bfd00],0x30 ; 004323ad | DAT_007bfd00
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 004323b4
    MOV ESI,EDX                         ; 004323b9
    ADD EDI,0x7bfd0c                    ; 004323bb | DAT_007bfd0c
    PUSH EDI                            ; 004323c1
    MOV EAX,ECX                         ; 004323c2
    SHR ECX,0x2                         ; 004323c4
    MOVSD.REP ES:EDI,ESI                ; 004323c7 | DAT_007bfd0c | DAT_007bfd10
    MOV CL,AL                           ; 004323c9
    AND CL,0x3                          ; 004323cb
    MOVSB.REP ES:EDI,ESI                ; 004323ce | DAT_007bfd10
    POP EDI                             ; 004323d0
    MOV ECX,dword ptr [0x007bfd00]      ; 004323d1 | DAT_007bfd00
    INC ECX                             ; 004323d7
    MOV dword ptr [0x007bfd00],ECX      ; 004323d8 | DAT_007bfd00
    IMUL EAX,ECX,0x30                   ; 004323de
    ADD EAX,0x7bfd0c                    ; 004323e1 | DAT_007bfd0c
    PUSH EAX                            ; 004323e6
    PUSH EBP                            ; 004323e7
    PUSH EDX                            ; 004323e8
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00431e10 ; 004323e9
        ;   XREF to: 00431e10 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_00431e10()
    MOV EDI,dword ptr [0x007bfd00]      ; 004323ee | DAT_007bfd00
    INC EDI                             ; 004323f4
    ADD ESP,0xc                         ; 004323f5
    MOV dword ptr [0x007bfd00],EDI      ; 004323f8 | DAT_007bfd00
    JMP 0x0043236b                      ; 004323fe
        ;   XREF to: 0043236b (UNCONDITIONAL_JUMP)  ; caseD_3

