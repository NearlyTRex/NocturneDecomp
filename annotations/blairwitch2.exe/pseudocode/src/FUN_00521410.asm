; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00521410(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00522350 at 005265d3
;
; Referenced Globals:
;   undefined4 DAT_005e2dce
;   TerminatedCString s_backup_005e2dd3
;   undefined4 DAT_005e2dda
;   undefined4 DAT_005e2dde
;   TerminatedCString s_useItem_005e2de3
;   TerminatedCString s_light_005e2deb
;   undefined4 DAT_005e2df1
;   undefined4 DAT_005e2df6
;   undefined4 DAT_005e2dfb
;
; Called Functions:
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00521410
        ;   Label: FUN_00521410
    PUSH ESI                            ; 00521411
    MOV ESI,dword ptr [ESP + 0xc]       ; 00521412
    MOV EBX,dword ptr [ESP + 0x10]      ; 00521416
    PUSH 0x5e2dce                       ; 0052141a | DAT_005e2dce
    PUSH EBX                            ; 0052141f
    CALL FUN_005b8130                   ; 00521420
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00521425
    TEST EAX,EAX                        ; 00521428
    JNZ 0x00521431                      ; 0052142a
        ;   XREF to: 00521431 (CONDITIONAL_JUMP)  ; LAB_00521431
    MOV EAX,ESI                         ; 0052142c
    POP ESI                             ; 0052142e
    POP EBX                             ; 0052142f
    RET                                 ; 00521430
    PUSH 0x5e2dd3                       ; 00521431 | = "backup"
        ;   Label: LAB_00521431
    PUSH EBX                            ; 00521436
    CALL FUN_005b8130                   ; 00521437
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 0052143c
    TEST EAX,EAX                        ; 0052143f
    JNZ 0x00521449                      ; 00521441
        ;   XREF to: 00521449 (CONDITIONAL_JUMP)  ; LAB_00521449
    LEA EAX,[ESI + 0x4]                 ; 00521443
    POP ESI                             ; 00521446
    POP EBX                             ; 00521447
    RET                                 ; 00521448
    PUSH 0x5e2dda                       ; 00521449 | DAT_005e2dda
        ;   Label: LAB_00521449
    PUSH EBX                            ; 0052144e
    CALL FUN_005b8130                   ; 0052144f
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00521454
    TEST EAX,EAX                        ; 00521457
    JNZ 0x00521461                      ; 00521459
        ;   XREF to: 00521461 (CONDITIONAL_JUMP)  ; LAB_00521461
    LEA EAX,[ESI + 0x8]                 ; 0052145b
    POP ESI                             ; 0052145e
    POP EBX                             ; 0052145f
    RET                                 ; 00521460
    PUSH 0x5e2dde                       ; 00521461 | DAT_005e2dde
        ;   Label: LAB_00521461
    PUSH EBX                            ; 00521466
    CALL FUN_005b8130                   ; 00521467
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 0052146c
    TEST EAX,EAX                        ; 0052146f
    JNZ 0x00521479                      ; 00521471
        ;   XREF to: 00521479 (CONDITIONAL_JUMP)  ; LAB_00521479
    LEA EAX,[ESI + 0xc]                 ; 00521473
    POP ESI                             ; 00521476
    POP EBX                             ; 00521477
    RET                                 ; 00521478
    PUSH 0x5e2de3                       ; 00521479 | = "useItem"
        ;   Label: LAB_00521479
    PUSH EBX                            ; 0052147e
    CALL FUN_005b8130                   ; 0052147f
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00521484
    TEST EAX,EAX                        ; 00521487
    JNZ 0x00521491                      ; 00521489
        ;   XREF to: 00521491 (CONDITIONAL_JUMP)  ; LAB_00521491
    LEA EAX,[ESI + 0x10]                ; 0052148b
    POP ESI                             ; 0052148e
    POP EBX                             ; 0052148f
    RET                                 ; 00521490
    PUSH 0x5e2deb                       ; 00521491 | = "light"
        ;   Label: LAB_00521491
    PUSH EBX                            ; 00521496
    CALL FUN_005b8130                   ; 00521497
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 0052149c
    TEST EAX,EAX                        ; 0052149f
    JNZ 0x005214a9                      ; 005214a1
        ;   XREF to: 005214a9 (CONDITIONAL_JUMP)  ; LAB_005214a9
    LEA EAX,[ESI + 0x14]                ; 005214a3
    POP ESI                             ; 005214a6
    POP EBX                             ; 005214a7
    RET                                 ; 005214a8
    PUSH 0x5e2df1                       ; 005214a9 | DAT_005e2df1
        ;   Label: LAB_005214a9
    PUSH EBX                            ; 005214ae
    CALL FUN_005b8130                   ; 005214af
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 005214b4
    TEST EAX,EAX                        ; 005214b7
    JNZ 0x005214c1                      ; 005214b9
        ;   XREF to: 005214c1 (CONDITIONAL_JUMP)  ; LAB_005214c1
    LEA EAX,[ESI + 0x18]                ; 005214bb
    POP ESI                             ; 005214be
    POP EBX                             ; 005214bf
    RET                                 ; 005214c0
    PUSH 0x5e2df6                       ; 005214c1 | DAT_005e2df6
        ;   Label: LAB_005214c1
    PUSH EBX                            ; 005214c6
    CALL FUN_005b8130                   ; 005214c7
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 005214cc
    TEST EAX,EAX                        ; 005214cf
    JNZ 0x005214d9                      ; 005214d1
        ;   XREF to: 005214d9 (CONDITIONAL_JUMP)  ; LAB_005214d9
    LEA EAX,[ESI + 0x1c]                ; 005214d3
    POP ESI                             ; 005214d6
    POP EBX                             ; 005214d7
    RET                                 ; 005214d8
    PUSH 0x5e2dfb                       ; 005214d9 | DAT_005e2dfb
        ;   Label: LAB_005214d9
    PUSH EBX                            ; 005214de
    CALL FUN_005b8130                   ; 005214df
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 005214e4
    TEST EAX,EAX                        ; 005214e7
    JNZ 0x005214f1                      ; 005214e9
        ;   XREF to: 005214f1 (CONDITIONAL_JUMP)  ; LAB_005214f1
    LEA EAX,[ESI + 0x30]                ; 005214eb
    POP ESI                             ; 005214ee
    POP EBX                             ; 005214ef
    RET                                 ; 005214f0
    XOR EAX,EAX                         ; 005214f1
        ;   Label: LAB_005214f1
    POP ESI                             ; 005214f3
    POP EBX                             ; 005214f4
    RET                                 ; 005214f5

