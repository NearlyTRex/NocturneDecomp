; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004993f0(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_0049c430 at 0049c667
;
; Referenced Globals:
;   undefined4 DAT_00614d30
;   undefined4 DAT_00616494
;   undefined4 DAT_01cb6b84
;   undefined4 DAT_0265370c
;   undefined4 DAT_02653710
;   undefined4 DAT_02653714
;
; Called Functions:
;   FUN_00449530
;   FUN_0044fd20
;   FUN_0049d090
;   FUN_0049e360
;   FUN_00551050
;   FUN_005b2290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004993f0
        ;   Label: FUN_004993f0
    PUSH ESI                            ; 004993f1
    PUSH EBP                            ; 004993f2
    SUB ESP,0x40                        ; 004993f3
    MOV EBX,dword ptr [ESP + 0x50]      ; 004993f6
    FLD float ptr [EBX + 0x3dc]         ; 004993fa
    FLDZ                                ; 00499400
    FCOMPP                              ; 00499402
    FNSTSW AX                           ; 00499404
    SAHF                                ; 00499406
    JNC 0x00499441                      ; 00499407
        ;   XREF to: 00499441 (CONDITIONAL_JUMP)  ; LAB_00499441
    MOV EAX,[0x00616494]                ; 00499409 | DAT_00616494
    MOV EAX,dword ptr [EAX + 0x284]     ; 0049940e | DAT_01cb6b84
    MOV dword ptr [ESP + 0x3c],EAX      ; 00499414
    FLD float ptr [EBX + 0x3dc]         ; 00499418
    FSUB float ptr [ESP + 0x3c]         ; 0049941e
    LEA EBP,[EBX + 0x180]               ; 00499422
    FST float ptr [EBX + 0x3dc]         ; 00499428
    FLDZ                                ; 0049942e
    FCOMPP                              ; 00499430
    FNSTSW AX                           ; 00499432
    SAHF                                ; 00499434
    JC 0x00499550                       ; 00499435
        ;   XREF to: 00499550 (CONDITIONAL_JUMP)  ; LAB_00499550
    MOV EAX,dword ptr [EBX]             ; 0049943b
    TEST EAX,EAX                        ; 0049943d
    JZ 0x00499448                       ; 0049943f
        ;   XREF to: 00499448 (CONDITIONAL_JUMP)  ; LAB_00499448
    ADD ESP,0x40                        ; 00499441
        ;   Label: LAB_00499441
    POP EBP                             ; 00499444
    POP ESI                             ; 00499445
    POP EBX                             ; 00499446
    RET                                 ; 00499447
    PUSH 0x40800000                     ; 00499448
        ;   Label: LAB_00499448
    PUSH 0x42c80000                     ; 0049944d
    PUSH 0x41800000                     ; 00499452
    PUSH EBP                            ; 00499457
    MOV ECX,dword ptr [0x00614d30]      ; 00499458 | DAT_00614d30
    PUSH ECX                            ; 0049945e
    CALL FUN_0049e360                   ; 0049945f
        ;   XREF to: 0049e360 (UNCONDITIONAL_CALL)  ; undefined FUN_0049e360()
    ADD ESP,0x14                        ; 00499464
    MOV ESI,dword ptr [EBX + 0x3e0]     ; 00499467
    PUSH ESI                            ; 0049946d
    CALL FUN_00551050                   ; 0049946e
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 00499473
    ADD ESP,0x40                        ; 00499476
    POP EBP                             ; 00499479
    POP ESI                             ; 0049947a
    POP EBX                             ; 0049947b
    RET                                 ; 0049947c
    PUSH EDI                            ; 0049947d
        ;   Label: LAB_0049947d
    LEA EDI,[ESP + 0x10]                ; 0049947e
    LEA EAX,[EBX + 0x4]                 ; 00499482
    MOV ESI,0x265370c                   ; 00499485
    PUSH EAX                            ; 0049948a
    MOVSD ES:EDI,ESI                    ; 0049948b | DAT_0265370c
    MOVSD ES:EDI,ESI                    ; 0049948c | DAT_02653710
    MOVSD ES:EDI,ESI                    ; 0049948d | DAT_02653714
    CALL FUN_0044fd20                   ; 0049948e
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    ADD ESP,0x4                         ; 00499493
    FLD float ptr [ESP + 0x18]          ; 00499496
    FADD float ptr [EAX + 0x34c]        ; 0049949a
    LEA EAX,[ESP + 0x10]                ; 004994a0
    ADD EBX,0x198                       ; 004994a4
    PUSH EAX                            ; 004994aa
    LEA ESI,[ESP + 0x2c]                ; 004994ab
    LEA EDI,[ESP + 0x38]                ; 004994af
    PUSH EBX                            ; 004994b3
    FSTP float ptr [ESP + 0x20]         ; 004994b4
    CALL FUN_00449530                   ; 004994b8
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined FUN_00449530()
    LEA ESI,[ESP + 0x30]                ; 004994bd
    ADD ESP,0x8                         ; 004994c1
    LEA EBX,[ESP + 0x1c]                ; 004994c4
    MOVSD ES:EDI,ESI                    ; 004994c8
    MOVSD ES:EDI,ESI                    ; 004994c9
    MOVSD ES:EDI,ESI                    ; 004994ca
    LEA EAX,[ESP + 0x10]                ; 004994cb
    FLD float ptr [EBP]                 ; 004994cf
    FLD float ptr [EBP + 0x4]           ; 004994d2
    FLD float ptr [EBP + 0x8]           ; 004994d5
    LEA EDI,[ESP + 0x1c]                ; 004994d8
    LEA ESI,[ESP + 0x4]                 ; 004994dc
    FXCH ST2                            ; 004994e0
    FADD float ptr [ESP + 0x34]         ; 004994e2
    FXCH                                ; 004994e6
    FADD float ptr [ESP + 0x38]         ; 004994e8
    FXCH ST2                            ; 004994ec
    FADD float ptr [ESP + 0x3c]         ; 004994ee
    FXCH                                ; 004994f2
    FSTP float ptr [ESP + 0x4]          ; 004994f4
    FXCH                                ; 004994f8
    FSTP float ptr [ESP + 0x8]          ; 004994fa
    FSTP float ptr [ESP + 0xc]          ; 004994fe
    MOVSD ES:EDI,ESI                    ; 00499502
    MOVSD ES:EDI,ESI                    ; 00499503
    MOVSD ES:EDI,ESI                    ; 00499504
    CMP EAX,EBX                         ; 00499505
    JZ 0x00499521                       ; 00499507
        ;   XREF to: 00499521 (CONDITIONAL_JUMP)  ; LAB_00499521
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00499509
    MOV dword ptr [ESP + 0x10],EAX      ; 0049950d
    MOV EAX,dword ptr [ESP + 0x20]      ; 00499511
    MOV dword ptr [ESP + 0x14],EAX      ; 00499515
    MOV EAX,dword ptr [ESP + 0x24]      ; 00499519
    MOV dword ptr [ESP + 0x18],EAX      ; 0049951d
    PUSH 0xffff                         ; 00499521
        ;   Label: LAB_00499521
    PUSH 0x0                            ; 00499526
    PUSH 0x10000                        ; 00499528
    PUSH 0x20000                        ; 0049952d
    PUSH 0x0                            ; 00499532
    LEA EAX,[ESP + 0x24]                ; 00499534
    PUSH EAX                            ; 00499538
    MOV EDX,dword ptr [0x00614d30]      ; 00499539 | DAT_00614d30
    PUSH EDX                            ; 0049953f
    CALL FUN_0049d090                   ; 00499540
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d090()
    ADD ESP,0x1c                        ; 00499545
    POP EDI                             ; 00499548
    ADD ESP,0x40                        ; 00499549
    POP EBP                             ; 0049954c
    POP ESI                             ; 0049954d
    POP EBX                             ; 0049954e
    RET                                 ; 0049954f
    PUSH dword ptr [ESP + 0x3c]         ; 00499550
        ;   Label: LAB_00499550
    PUSH EBP                            ; 00499554
    CALL FUN_005b2290                   ; 00499555
        ;   XREF to: 005b2290 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2290()
    MOV EAX,dword ptr [EBX]             ; 0049955a
    ADD ESP,0x8                         ; 0049955c
    TEST EAX,EAX                        ; 0049955f
    JZ 0x0049947d                       ; 00499561
        ;   XREF to: 0049947d (CONDITIONAL_JUMP)  ; LAB_0049947d
    ADD ESP,0x40                        ; 00499567
    POP EBP                             ; 0049956a
    POP ESI                             ; 0049956b
    POP EBX                             ; 0049956c
    RET                                 ; 0049956d

