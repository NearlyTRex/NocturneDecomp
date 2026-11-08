; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b44b0(float *param_1,undefined4 param_2,undefined4 param_3)
;
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
;
; XREF[1]:
;   FUN_0040bee0 at 0040bf9c
;
; Referenced Globals:
;   TerminatedCString s_sboxVersion_005f1386
;   TerminatedCString s_s_d_005f1394
;   TerminatedCString s_sboxStateInfo_005f139a
;   TerminatedCString s_s_f_f_f_005f13aa
;   TerminatedCString s_s_f_f_f_005f13b6
;   TerminatedCString s_s_f_f_f_005f13c2
;   TerminatedCString s_s_f_005f13ce
;   TerminatedCString s_s_f_f_f_005f13d4
;   TerminatedCString s_s_f_f_f_005f13e0
;   TerminatedCString s_s_d_005f13ec
;   undefined4 DAT_005f13f8
;
; Called Functions:
;   FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b44b0
        ;   Label: FUN_005b44b0
    PUSH ESI                            ; 005b44b1
    PUSH EDI                            ; 005b44b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005b44b3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005b44b7
    MOV EDI,dword ptr [ESP + 0x18]      ; 005b44bb
    PUSH EDI                            ; 005b44bf
    PUSH 0x5f1386                       ; 005b44c0 | = "%sboxVersion\n"
    PUSH ESI                            ; 005b44c5
    CALL FUN_005b8010                   ; 005b44c6
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0xc                         ; 005b44cb
    PUSH 0x1                            ; 005b44ce
    PUSH EDI                            ; 005b44d0
    PUSH 0x5f1394                       ; 005b44d1 | = "%s%d\n"
    PUSH ESI                            ; 005b44d6
    CALL FUN_005b8010                   ; 005b44d7
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x10                        ; 005b44dc
    PUSH EDI                            ; 005b44df
    PUSH 0x5f139a                       ; 005b44e0 | = "%sboxStateInfo\n"
    PUSH ESI                            ; 005b44e5
    CALL FUN_005b8010                   ; 005b44e6
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0xc                         ; 005b44eb
    SUB ESP,0x8                         ; 005b44ee
    FLD float ptr [EBX + 0x8]           ; 005b44f1
    FSTP double ptr [ESP]               ; 005b44f4
    SUB ESP,0x8                         ; 005b44f7
    FLD float ptr [EBX + 0x4]           ; 005b44fa
    FSTP double ptr [ESP]               ; 005b44fd
    SUB ESP,0x8                         ; 005b4500
    FLD float ptr [EBX]                 ; 005b4503
    FSTP double ptr [ESP]               ; 005b4505
    PUSH EDI                            ; 005b4508
    PUSH 0x5f13aa                       ; 005b4509 | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 005b450e
    CALL FUN_005b8010                   ; 005b450f
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x24                        ; 005b4514
    SUB ESP,0x8                         ; 005b4517
    FLD float ptr [EBX + 0x10]          ; 005b451a
    FSTP double ptr [ESP]               ; 005b451d
    SUB ESP,0x8                         ; 005b4520
    FLD float ptr [EBX + 0x14]          ; 005b4523
    FSTP double ptr [ESP]               ; 005b4526
    SUB ESP,0x8                         ; 005b4529
    FLD float ptr [EBX + 0xc]           ; 005b452c
    FSTP double ptr [ESP]               ; 005b452f
    PUSH EDI                            ; 005b4532
    PUSH 0x5f13b6                       ; 005b4533 | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 005b4538
    CALL FUN_005b8010                   ; 005b4539
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x24                        ; 005b453e
    SUB ESP,0x8                         ; 005b4541
    FLD float ptr [EBX + 0xac]          ; 005b4544
    FSTP double ptr [ESP]               ; 005b454a
    SUB ESP,0x8                         ; 005b454d
    FLD float ptr [EBX + 0xa8]          ; 005b4550
    FSTP double ptr [ESP]               ; 005b4556
    SUB ESP,0x8                         ; 005b4559
    FLD float ptr [EBX + 0xa4]          ; 005b455c
    FSTP double ptr [ESP]               ; 005b4562
    PUSH EDI                            ; 005b4565
    PUSH 0x5f13c2                       ; 005b4566 | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 005b456b
    CALL FUN_005b8010                   ; 005b456c
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    FLD float ptr [EBX + 0x94]          ; 005b4571
    ADD ESP,0x24                        ; 005b4577
    FMUL double ptr [0x005f13f8]        ; 005b457a | DAT_005f13f8
    SUB ESP,0x8                         ; 005b4580
    FSTP double ptr [ESP]               ; 005b4583
    PUSH EDI                            ; 005b4586
    PUSH 0x5f13ce                       ; 005b4587 | = "%s%f\n"
    PUSH ESI                            ; 005b458c
    CALL FUN_005b8010                   ; 005b458d
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x14                        ; 005b4592
    SUB ESP,0x8                         ; 005b4595
    FLD float ptr [EBX + 0x54]          ; 005b4598
    FSTP double ptr [ESP]               ; 005b459b
    SUB ESP,0x8                         ; 005b459e
    FLD float ptr [EBX + 0x50]          ; 005b45a1
    FSTP double ptr [ESP]               ; 005b45a4
    SUB ESP,0x8                         ; 005b45a7
    FLD float ptr [EBX + 0x4c]          ; 005b45aa
    FSTP double ptr [ESP]               ; 005b45ad
    PUSH EDI                            ; 005b45b0
    PUSH 0x5f13d4                       ; 005b45b1 | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 005b45b6
    CALL FUN_005b8010                   ; 005b45b7
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x24                        ; 005b45bc
    SUB ESP,0x8                         ; 005b45bf
    FLD float ptr [EBX + 0x78]          ; 005b45c2
    FSTP double ptr [ESP]               ; 005b45c5
    SUB ESP,0x8                         ; 005b45c8
    FLD float ptr [EBX + 0x74]          ; 005b45cb
    FSTP double ptr [ESP]               ; 005b45ce
    SUB ESP,0x8                         ; 005b45d1
    FLD float ptr [EBX + 0x70]          ; 005b45d4
    FSTP double ptr [ESP]               ; 005b45d7
    PUSH EDI                            ; 005b45da
    PUSH 0x5f13e0                       ; 005b45db | = "%s%f,%f,%f\n"
    PUSH ESI                            ; 005b45e0
    CALL FUN_005b8010                   ; 005b45e1
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x24                        ; 005b45e6
    MOV EDX,dword ptr [EBX + 0x254]     ; 005b45e9
    PUSH EDX                            ; 005b45ef
    PUSH EDI                            ; 005b45f0
    PUSH 0x5f13ec                       ; 005b45f1 | = "%s%d\n"
    PUSH ESI                            ; 005b45f6
    CALL FUN_005b8010                   ; 005b45f7
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x10                        ; 005b45fc
    POP EDI                             ; 005b45ff
    POP ESI                             ; 005b4600
    POP EBX                             ; 005b4601
    RET                                 ; 005b4602

