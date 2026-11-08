; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00499350(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;   undefined4 DAT_00603b28
;   undefined4 DAT_01c5fad0
;   undefined4 DAT_01ed78c8
;   undefined4 DAT_02026970
;   undefined4 DAT_02026974
;
; Called Functions:
;   FUN_0042abb0
;   FUN_0045aae0
;   FUN_0045ab30
;   FUN_004a23c0
;   FUN_004a2560
;   FUN_00509f30
;   FUN_005372f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499350
        ;   Label: FUN_00499350
    PUSH ESI                            ; 00499351
    PUSH EDI                            ; 00499352
    PUSH EBP                            ; 00499353
    SUB ESP,0x44                        ; 00499354
    MOV EBP,dword ptr [ESP + 0x58]      ; 00499357
    MOV EDX,dword ptr [EBP + 0x48]      ; 0049935b
    TEST EDX,EDX                        ; 0049935e
    JNZ 0x00499505                      ; 00499360
        ;   XREF to: 00499505 (CONDITIONAL_JUMP)  ; LAB_00499505
    MOV dword ptr [EBP + 0x48],0x1      ; 00499366
    MOV dword ptr [EBP + 0x50],EDX      ; 0049936d
    PUSH EBP                            ; 00499370
        ;   Label: LAB_00499370
    CALL FUN_00509f30                   ; 00499371
        ;   XREF to: 00509f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00509f30()
    MOV EAX,[0x01c5fad0]                ; 00499376 | DAT_01c5fad0
    MOV EDX,EAX                         ; 0049937b
    SAR EDX,0x1f                        ; 0049937d
    SHL EDX,0x2                         ; 00499380
    SBB EAX,EDX                         ; 00499383
    SAR EAX,0x2                         ; 00499385
    MOV ESI,dword ptr [EBP + 0x54]      ; 00499388
    ADD ESI,EAX                         ; 0049938b
    MOV EAX,[0x01c5fad0]                ; 0049938d | DAT_01c5fad0
    MOV EDX,EAX                         ; 00499392
    SAR EDX,0x1f                        ; 00499394
    SUB EAX,EDX                         ; 00499397
    SAR EAX,0x1                         ; 00499399
    ADD ESP,0x4                         ; 0049939b
    MOV EDI,dword ptr [EBP + 0x58]      ; 0049939e
    MOV dword ptr [EBP + 0x54],ESI      ; 004993a1
    ADD EDI,EAX                         ; 004993a4
    MOV EAX,dword ptr [EBP + 0x4c]      ; 004993a6
    MOV dword ptr [EBP + 0x58],EDI      ; 004993a9
    TEST EAX,EAX                        ; 004993ac
    JNZ 0x004994d2                      ; 004993ae
        ;   XREF to: 004994d2 (CONDITIONAL_JUMP)  ; LAB_004994d2
    PUSH EBP                            ; 004993b4
    LEA EBX,[EBP + 0x64]                ; 004993b5
    PUSH EBX                            ; 004993b8
    CALL FUN_0045aae0                   ; 004993b9
        ;   XREF to: 0045aae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045aae0()
    MOV EDX,dword ptr [EBP + 0x40]      ; 004993be
    MOV EAX,EDX                         ; 004993c1
    MOV dword ptr [EBX + 0x3c],EDX      ; 004993c3
    SAR EDX,0x1f                        ; 004993c6
    SHL EDX,0x8                         ; 004993c9
    SBB EAX,EDX                         ; 004993cc
    SAR EAX,0x8                         ; 004993ce
    MOV EDX,EAX                         ; 004993d1
    SAR EDX,0x1f                        ; 004993d3
    SHL EDX,0x2                         ; 004993d6
    SBB EAX,EDX                         ; 004993d9
    SAR EAX,0x2                         ; 004993db
    ADD ESP,0x8                         ; 004993de
    PUSH 0x41000000                     ; 004993e1
    PUSH EBX                            ; 004993e6
    MOV byte ptr [EBX + 0x1c],AL        ; 004993e7
    CALL FUN_0045ab30                   ; 004993ea
        ;   XREF to: 0045ab30 (UNCONDITIONAL_CALL)  ; undefined FUN_0045ab30()
    ADD ESP,0x8                         ; 004993ef
    PUSH EBX                            ; 004993f2
    MOV EDX,dword ptr [0x00603b28]      ; 004993f3 | DAT_00603b28
    PUSH EDX                            ; 004993f9 | DAT_01ed78c8
    MOV dword ptr [EBX + 0x20],0x0      ; 004993fa
    CALL FUN_005372f0                   ; 00499401
        ;   XREF to: 005372f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005372f0()
    MOV EAX,[0x01c5fad0]                ; 00499406 | DAT_01c5fad0
    MOV ECX,dword ptr [EBP + 0x50]      ; 0049940b
    ADD ECX,EAX                         ; 0049940e
    ADD ESP,0x8                         ; 00499410
    MOV dword ptr [EBP + 0x50],ECX      ; 00499413
    CMP ECX,0x1000                      ; 00499416
    JLE 0x004994d2                      ; 0049941c
        ;   XREF to: 004994d2 (CONDITIONAL_JUMP)  ; LAB_004994d2
    PUSH 0x4000                         ; 00499422
    PUSH 0x0                            ; 00499427
    PUSH 0x40000000                     ; 00499429
    PUSH EBP                            ; 0049942e
    MOV ESI,dword ptr [0x005fc5a0]      ; 0049942f | DAT_005fc5a0
    LEA EDI,[ECX + 0xfffff000]          ; 00499435
    PUSH ESI                            ; 0049943b
    MOV dword ptr [EBP + 0x50],EDI      ; 0049943c
    CALL FUN_004a2560                   ; 0049943f
        ;   XREF to: 004a2560 (UNCONDITIONAL_CALL)  ; undefined FUN_004a2560()
    ADD ESP,0x14                        ; 00499444
    PUSH 0xffff                         ; 00499447
    PUSH 0x0                            ; 0049944c
    PUSH 0x10000                        ; 0049944e
    PUSH 0x20000                        ; 00499453
    PUSH 0x0                            ; 00499458
    PUSH EBP                            ; 0049945a
    MOV EAX,[0x005fc5a0]                ; 0049945b | DAT_005fc5a0
    PUSH EAX                            ; 00499460
    CALL FUN_004a23c0                   ; 00499461
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a23c0()
    ADD ESP,0x1c                        ; 00499466
    PUSH 0xffff                         ; 00499469
    PUSH 0x0                            ; 0049946e
    PUSH 0x10000                        ; 00499470
    PUSH 0x20000                        ; 00499475
    PUSH 0x0                            ; 0049947a
    PUSH EBP                            ; 0049947c
    MOV EDX,dword ptr [0x005fc5a0]      ; 0049947d | DAT_005fc5a0
    PUSH EDX                            ; 00499483
    CALL FUN_004a23c0                   ; 00499484
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a23c0()
    ADD ESP,0x1c                        ; 00499489
    PUSH 0xffff                         ; 0049948c
    PUSH 0x0                            ; 00499491
    PUSH 0x10000                        ; 00499493
    PUSH 0x20000                        ; 00499498
    PUSH 0x0                            ; 0049949d
    PUSH EBP                            ; 0049949f
    MOV ECX,dword ptr [0x005fc5a0]      ; 004994a0 | DAT_005fc5a0
    PUSH ECX                            ; 004994a6
    CALL FUN_004a23c0                   ; 004994a7
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a23c0()
    ADD ESP,0x1c                        ; 004994ac
    PUSH 0xffff                         ; 004994af
    PUSH 0x0                            ; 004994b4
    PUSH 0x10000                        ; 004994b6
    PUSH 0x20000                        ; 004994bb
    PUSH 0x0                            ; 004994c0
    PUSH EBP                            ; 004994c2
    MOV EBX,dword ptr [0x005fc5a0]      ; 004994c3 | DAT_005fc5a0
    PUSH EBX                            ; 004994c9
    CALL FUN_004a23c0                   ; 004994ca
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a23c0()
    ADD ESP,0x1c                        ; 004994cf
    MOV ESI,dword ptr [EBP + 0x4c]      ; 004994d2
        ;   Label: LAB_004994d2
    TEST ESI,ESI                        ; 004994d5
    JNZ 0x00499537                      ; 004994d7
        ;   XREF to: 00499537 (CONDITIONAL_JUMP)  ; LAB_00499537
    MOV EDI,0x41a00000                  ; 004994d9
    MOV ESI,0x40800000                  ; 004994de
    MOV dword ptr [ESP + 0x3c],EDI      ; 004994e3
    MOV dword ptr [ESP + 0x40],ESI      ; 004994e7
    XOR ESI,ESI                         ; 004994eb
        ;   Label: LAB_004994eb
    XOR EBX,EBX                         ; 004994ed
    MOV EDI,dword ptr [0x00603b28]      ; 004994ef | DAT_00603b28
        ;   Label: LAB_004994ef
    CMP EBX,dword ptr [EDI + 0x14f0a8]  ; 004994f5 | DAT_02026970
    JL 0x00499564                       ; 004994fb
        ;   XREF to: 00499564 (CONDITIONAL_JUMP)  ; LAB_00499564
    ADD ESP,0x44                        ; 004994fd
    POP EBP                             ; 00499500
    POP EDI                             ; 00499501
    POP ESI                             ; 00499502
    POP EBX                             ; 00499503
    RET                                 ; 00499504
    MOV EDX,dword ptr [0x01c5fad0]      ; 00499505 | DAT_01c5fad0
        ;   Label: LAB_00499505
    MOV EAX,dword ptr [EBP + 0x44]      ; 0049950b
    IMUL EDX                            ; 0049950e
    SHRD EAX,EDX,0x10                   ; 00499510
    MOV ECX,dword ptr [EBP + 0x40]      ; 00499514
    SUB ECX,EAX                         ; 00499517
    MOV dword ptr [EBP + 0x40],ECX      ; 00499519
    TEST ECX,ECX                        ; 0049951c
    JGE 0x00499370                      ; 0049951e
        ;   XREF to: 00499370 (CONDITIONAL_JUMP)  ; LAB_00499370
    MOV dword ptr [EBP + 0x24],0x0      ; 00499524
    MOV dword ptr [EBP + 0x40],0x0      ; 0049952b
    JMP 0x00499370                      ; 00499532
        ;   XREF to: 00499370 (UNCONDITIONAL_JUMP)  ; LAB_00499370
    CMP ESI,0x2                         ; 00499537
        ;   Label: LAB_00499537
    JNZ 0x00499550                      ; 0049953a
        ;   XREF to: 00499550 (CONDITIONAL_JUMP)  ; LAB_00499550
    MOV EBX,0x40a00000                  ; 0049953c
    MOV ECX,0x3f800000                  ; 00499541
    MOV dword ptr [ESP + 0x3c],EBX      ; 00499546
    MOV dword ptr [ESP + 0x40],ECX      ; 0049954a
    JMP 0x004994eb                      ; 0049954e
        ;   XREF to: 004994eb (UNCONDITIONAL_JUMP)  ; LAB_004994eb
    MOV EDX,0x40a00000                  ; 00499550
        ;   Label: LAB_00499550
    MOV EAX,0x3f800000                  ; 00499555
    MOV dword ptr [ESP + 0x3c],EDX      ; 0049955a
    MOV dword ptr [ESP + 0x40],EAX      ; 0049955e
    JMP 0x004994eb                      ; 00499562
        ;   XREF to: 004994eb (UNCONDITIONAL_JUMP)  ; LAB_004994eb
    MOV EAX,ESP                         ; 00499564
        ;   Label: LAB_00499564
    PUSH EAX                            ; 00499566
    MOV EDI,dword ptr [EDI + ESI*0x1 + 0x14f0ac] ; 00499567 | DAT_02026974
    CALL FUN_0042abb0                   ; 0049956e
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042abb0()
    ADD ESP,0x4                         ; 00499573
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00499576
    MOV dword ptr [ESP + 0x4],EAX       ; 0049957a
    MOV EAX,ESP                         ; 0049957e
    PUSH EAX                            ; 00499580
    PUSH dword ptr [ESP + 0x44]         ; 00499581
    PUSH EBP                            ; 00499585
    MOV EDX,dword ptr [EDI + 0x154]     ; 00499586
    PUSH EDI                            ; 0049958c
    ADD ESI,0x4                         ; 0049958d
    INC EBX                             ; 00499590
    CALL dword ptr [EDX + 0x100]        ; 00499591
    ADD ESP,0x10                        ; 00499597
    JMP 0x004994ef                      ; 0049959a
        ;   XREF to: 004994ef (UNCONDITIONAL_JUMP)  ; LAB_004994ef

