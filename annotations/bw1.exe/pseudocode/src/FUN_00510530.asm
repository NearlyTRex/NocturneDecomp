; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00510530(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_0050f630 at 0050f78b
;
; Referenced Globals:
;   undefined4 s_s_attacking_hero_005e89fe+2
;   void* PTR_DAT_00611100 = 007db5f0
;   undefined4 DAT_007db5f0
;   undefined4 DAT_01cc9190
;   undefined4 DAT_01d06ab4
;
; Called Functions:
;   FUN_0040c600
;   FUN_0043eea0
;   FUN_00445430
;   FUN_00524770
;   FUN_005247c0
;   FUN_00524ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510530
        ;   Label: FUN_00510530
    PUSH ESI                            ; 00510531
    MOV EBX,dword ptr [ESP + 0xc]       ; 00510532
    LEA EAX,[EBX + 0x158]               ; 00510536
    PUSH EAX                            ; 0051053c
    LEA EAX,[EBX + 0x30]                ; 0051053d
    PUSH EAX                            ; 00510540
    LEA EAX,[EBX + 0x20]                ; 00510541
    PUSH EAX                            ; 00510544
    LEA ESI,[EBX + 0xc330]              ; 00510545
    PUSH ESI                            ; 0051054b
    MOV dword ptr [EBX + 0x46e60],0x2   ; 0051054c
    CALL FUN_0043eea0                   ; 00510556
        ;   XREF to: 0043eea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043eea0()
    ADD ESP,0x10                        ; 0051055b
    MOV EDX,dword ptr [0x01cc9190]      ; 0051055e | DAT_01cc9190
    MOV EAX,[0x01d06ab4]                ; 00510564 | DAT_01d06ab4
    PUSH EDX                            ; 00510569
    MOV ECX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0051056a
    PUSH ECX                            ; 00510571
    CALL FUN_0040c600                   ; 00510572
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    MOV EDX,EAX                         ; 00510577
    ADD ESP,0x8                         ; 00510579
    TEST EAX,EAX                        ; 0051057c
    JNZ 0x005105db                      ; 0051057e
        ;   XREF to: 005105db (CONDITIONAL_JUMP)  ; LAB_005105db
    MOV EAX,[0x01d06ab4]                ; 00510580 | DAT_01d06ab4
        ;   Label: LAB_00510580
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00510585
    SUB ESP,0x4                         ; 0051058c
    FLD float ptr [EAX + 0x160]         ; 0051058f
    ADD EAX,0x158                       ; 00510595
    FSTP float ptr [ESP]                ; 0051059a
    PUSH EAX                            ; 0051059d
    CALL FUN_00524770                   ; 0051059e
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    ADD ESP,0x4                         ; 005105a3
    PUSH EAX                            ; 005105a6
    LEA ESI,[EBX + 0x158]               ; 005105a7
    PUSH ESI                            ; 005105ad
    CALL FUN_00524ae0                   ; 005105ae
        ;   XREF to: 00524ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00524ae0()
    ADD ESP,0xc                         ; 005105b3
    PUSH 0x1                            ; 005105b6
    PUSH 0x1                            ; 005105b8
    PUSH ESI                            ; 005105ba
    CALL FUN_005247c0                   ; 005105bb
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 005105c0
    PUSH EBX                            ; 005105c3
    PUSH 0x5e8a00                       ; 005105c4 | s_s_attacking_hero_005e89fe+2
    MOV EBX,dword ptr [0x00611100]      ; 005105c9 | PTR_DAT_00611100
    PUSH EBX                            ; 005105cf | DAT_007db5f0
    CALL FUN_00445430                   ; 005105d0
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0xc                         ; 005105d5
    POP ESI                             ; 005105d8
    POP EBX                             ; 005105d9
    RET                                 ; 005105da
    PUSH EDI                            ; 005105db
        ;   Label: LAB_005105db
    MOV ECX,dword ptr [ESI + 0x104]     ; 005105dc
    LEA EAX,[ECX*0x8 + 0x0]             ; 005105e2
    ADD EAX,ECX                         ; 005105e9
    SHL EAX,0x3                         ; 005105eb
    LEA EDI,[EBX + 0xc6c8]              ; 005105ee
    SUB EAX,ECX                         ; 005105f4
    LEA ESI,[EDX + 0x20384]             ; 005105f6
    LEA ECX,[EAX*0x4 + 0x0]             ; 005105fc
    PUSH EDI                            ; 00510603
    MOV EAX,ECX                         ; 00510604
    SHR ECX,0x2                         ; 00510606
    MOVSD.REP ES:EDI,ESI                ; 00510609
    MOV CL,AL                           ; 0051060b
    AND CL,0x3                          ; 0051060d
    MOVSB.REP ES:EDI,ESI                ; 00510610
    POP EDI                             ; 00510612
    POP EDI                             ; 00510613
    JMP 0x00510580                      ; 00510614
        ;   XREF to: 00510580 (UNCONDITIONAL_JUMP)  ; LAB_00510580

