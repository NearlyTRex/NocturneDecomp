; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_spotview_cpp_CSpotView_handleInput_FUN_005342b0(void)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
;
; Referenced Globals:
;   undefined4 DAT_0059511a
;   undefined4 DAT_00595122
;   undefined4 DAT_0059512a
;   undefined4 DAT_005b9354
;   int INT_005bac64 = 0x1cc30e4
;   undefined4 DAT_01c77850
;   undefined4 DAT_01cc30e4
;
; Called Functions:
;   shape_spotview.cpp_CSpotView_clampValues_FUN_00534590
;   shape_spotview.cpp_CSpotView_reset_FUN_00534260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005342b0
        ;   Label: shape_spotview.cpp_CSpotView_handleInput_FUN_005342b0
    PUSH EBP                            ; 005342b1
    MOV EBP,ESP                         ; 005342b2
    SUB ESP,0x18                        ; 005342b4
    AND ESP,0xfffffff8                  ; 005342b7
    MOV EBX,dword ptr [EBP + 0xc]       ; 005342ba
    PUSH 0x38                           ; 005342bd
    MOV EAX,[0x005bac64]                ; 005342bf | INT_005bac64
    MOV EDX,0x3f800000                  ; 005342c4
    PUSH EAX                            ; 005342c9 | DAT_01cc30e4
    MOV dword ptr [ESP + 0x8],EDX       ; 005342ca
    MOV EDX,dword ptr [EAX]             ; 005342ce | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 005342d0
    ADD ESP,0x8                         ; 005342d2
    TEST EAX,EAX                        ; 005342d5
    JZ 0x0053454f                       ; 005342d7
        ;   XREF to: 0053454f (CONDITIONAL_JUMP)  ; LAB_0053454f
    MOV dword ptr [ESP],0x3d4ccccd      ; 005342dd
    MOV EAX,[0x005b9354]                ; 005342e4 | DAT_005b9354
        ;   Label: LAB_005342e4
    FLD float ptr [ESP]                 ; 005342e9
    FLD ST0                             ; 005342ec
    FMUL double ptr [0x00595122]        ; 005342ee | DAT_00595122
    FLD float ptr [EAX + 0x264]         ; 005342f4 | DAT_01c77850
    FMULP ST2                           ; 005342fa
    FLD float ptr [EBX + 0x2c]          ; 005342fc
    FMUL double ptr [0x0059512a]        ; 005342ff | DAT_0059512a
    FXCH ST2                            ; 00534305
    FST float ptr [ESP + 0x8]           ; 00534307
    FMUL double ptr [0x0059511a]        ; 0053430b | DAT_0059511a
    FXCH                                ; 00534311
    FSTP float ptr [ESP + 0xc]          ; 00534313
    FXCH                                ; 00534317
    FST float ptr [ESP + 0x4]           ; 00534319
    FLD1                                ; 0053431d
    FXCH ST2                            ; 0053431f
    FSTP float ptr [ESP + 0x10]         ; 00534321
    FXCH                                ; 00534325
    FCOMPP                              ; 00534327
    FNSTSW AX                           ; 00534329
    SAHF                                ; 0053432b
    JBE 0x00534336                      ; 0053432c
        ;   XREF to: 00534336 (CONDITIONAL_JUMP)  ; LAB_00534336
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 0053432e
    FLD float ptr [ESP + 0x4]           ; 00534336
        ;   Label: LAB_00534336
    FMUL float ptr [ESP + 0x8]          ; 0053433a
    FLD float ptr [EBX + 0x2c]          ; 0053433e
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00534341
    FLD1                                ; 00534344
    MOV dword ptr [ESP + 0x14],EAX      ; 00534346
    FXCH ST2                            ; 0053434a
    FSTP float ptr [ESP + 0x4]          ; 0053434c
    FXCH                                ; 00534350
    FCOMPP                              ; 00534352
    FNSTSW AX                           ; 00534354
    SAHF                                ; 00534356
    JBE 0x00534361                      ; 00534357
        ;   XREF to: 00534361 (CONDITIONAL_JUMP)  ; LAB_00534361
    MOV dword ptr [ESP + 0x14],0x3f800000 ; 00534359
    FLD float ptr [ESP + 0x14]          ; 00534361
        ;   Label: LAB_00534361
    FMUL float ptr [ESP + 0x8]          ; 00534365
    MOV AH,byte ptr [EBP + 0x10]        ; 00534369
    FSTP float ptr [ESP + 0x14]         ; 0053436c
    TEST AH,0x2                         ; 00534370
    JZ 0x005343ed                       ; 00534373
        ;   XREF to: 005343ed (CONDITIONAL_JUMP)  ; LAB_005343ed
    PUSH 0x52                           ; 00534379
    MOV EAX,[0x005bac64]                ; 0053437b | INT_005bac64
    PUSH EAX                            ; 00534380 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 00534381 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 00534383
    ADD ESP,0x8                         ; 00534385
    TEST EAX,EAX                        ; 00534388
    JZ 0x00534396                       ; 0053438a
        ;   XREF to: 00534396 (CONDITIONAL_JUMP)  ; LAB_00534396
    FLD float ptr [EBX + 0x28]          ; 0053438c
    FADD float ptr [ESP + 0x10]         ; 0053438f
    FSTP float ptr [EBX + 0x28]         ; 00534393
    PUSH 0x53                           ; 00534396
        ;   Label: LAB_00534396
    MOV EAX,[0x005bac64]                ; 00534398 | INT_005bac64
    PUSH EAX                            ; 0053439d | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0053439e | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 005343a0
    ADD ESP,0x8                         ; 005343a2
    TEST EAX,EAX                        ; 005343a5
    JZ 0x005343b3                       ; 005343a7
        ;   XREF to: 005343b3 (CONDITIONAL_JUMP)  ; LAB_005343b3
    FLD float ptr [EBX + 0x28]          ; 005343a9
    FSUB float ptr [ESP + 0x10]         ; 005343ac
    FSTP float ptr [EBX + 0x28]         ; 005343b0
    PUSH 0x35                           ; 005343b3
        ;   Label: LAB_005343b3
    MOV EAX,[0x005bac64]                ; 005343b5 | INT_005bac64
    PUSH EAX                            ; 005343ba | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 005343bb | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 005343bd
    ADD ESP,0x8                         ; 005343bf
    TEST EAX,EAX                        ; 005343c2
    JZ 0x005343d0                       ; 005343c4
        ;   XREF to: 005343d0 (CONDITIONAL_JUMP)  ; LAB_005343d0
    FLD float ptr [EBX + 0x28]          ; 005343c6
    FADD float ptr [ESP + 0x10]         ; 005343c9
    FSTP float ptr [EBX + 0x28]         ; 005343cd
    PUSH 0x37                           ; 005343d0
        ;   Label: LAB_005343d0
    MOV EAX,[0x005bac64]                ; 005343d2 | INT_005bac64
    PUSH EAX                            ; 005343d7 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 005343d8 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 005343da
    ADD ESP,0x8                         ; 005343dc
    TEST EAX,EAX                        ; 005343df
    JZ 0x005343ed                       ; 005343e1
        ;   XREF to: 005343ed (CONDITIONAL_JUMP)  ; LAB_005343ed
    FLD float ptr [EBX + 0x28]          ; 005343e3
    FSUB float ptr [ESP + 0x10]         ; 005343e6
    FSTP float ptr [EBX + 0x28]         ; 005343ea
    TEST byte ptr [EBP + 0x10],0x1      ; 005343ed
        ;   Label: LAB_005343ed
    JZ 0x0053442d                       ; 005343f1
        ;   XREF to: 0053442d (CONDITIONAL_JUMP)  ; LAB_0053442d
    PUSH 0x4a                           ; 005343f3
    MOV EAX,[0x005bac64]                ; 005343f5 | INT_005bac64
    PUSH EAX                            ; 005343fa | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 005343fb | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 005343fd
    ADD ESP,0x8                         ; 005343ff
    TEST EAX,EAX                        ; 00534402
    JZ 0x00534410                       ; 00534404
        ;   XREF to: 00534410 (CONDITIONAL_JUMP)  ; LAB_00534410
    FLD float ptr [EBX + 0x24]          ; 00534406
    FADD float ptr [ESP + 0x10]         ; 00534409
    FSTP float ptr [EBX + 0x24]         ; 0053440d
    PUSH 0x4e                           ; 00534410
        ;   Label: LAB_00534410
    MOV EAX,[0x005bac64]                ; 00534412 | INT_005bac64
    PUSH EAX                            ; 00534417 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 00534418 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0053441a
    ADD ESP,0x8                         ; 0053441c
    TEST EAX,EAX                        ; 0053441f
    JZ 0x0053442d                       ; 00534421
        ;   XREF to: 0053442d (CONDITIONAL_JUMP)  ; LAB_0053442d
    FLD float ptr [EBX + 0x24]          ; 00534423
    FSUB float ptr [ESP + 0x10]         ; 00534426
    FSTP float ptr [EBX + 0x24]         ; 0053442a
    TEST byte ptr [EBP + 0x10],0x8      ; 0053442d
        ;   Label: LAB_0053442d
    JZ 0x005344ab                       ; 00534431
        ;   XREF to: 005344ab (CONDITIONAL_JUMP)  ; LAB_005344ab
    PUSH 0x4b                           ; 00534437
    MOV EAX,[0x005bac64]                ; 00534439 | INT_005bac64
    PUSH EAX                            ; 0053443e | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0053443f | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 00534441
    ADD ESP,0x8                         ; 00534443
    TEST EAX,EAX                        ; 00534446
    JZ 0x00534454                       ; 00534448
        ;   XREF to: 00534454 (CONDITIONAL_JUMP)  ; LAB_00534454
    FLD float ptr [EBX + 0x30]          ; 0053444a
    FSUB float ptr [ESP + 0x14]         ; 0053444d
    FSTP float ptr [EBX + 0x30]         ; 00534451
    PUSH 0x4d                           ; 00534454
        ;   Label: LAB_00534454
    MOV EAX,[0x005bac64]                ; 00534456 | INT_005bac64
    PUSH EAX                            ; 0053445b | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 0053445c | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0053445e
    ADD ESP,0x8                         ; 00534460
    TEST EAX,EAX                        ; 00534463
    JZ 0x00534471                       ; 00534465
        ;   XREF to: 00534471 (CONDITIONAL_JUMP)  ; LAB_00534471
    FLD float ptr [EBX + 0x30]          ; 00534467
    FADD float ptr [ESP + 0x14]         ; 0053446a
    FSTP float ptr [EBX + 0x30]         ; 0053446e
    PUSH 0x10                           ; 00534471
        ;   Label: LAB_00534471
    MOV EAX,[0x005bac64]                ; 00534473 | INT_005bac64
    PUSH EAX                            ; 00534478 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 00534479 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 0053447b
    ADD ESP,0x8                         ; 0053447d
    TEST EAX,EAX                        ; 00534480
    JZ 0x0053448e                       ; 00534482
        ;   XREF to: 0053448e (CONDITIONAL_JUMP)  ; LAB_0053448e
    FLD float ptr [EBX + 0x34]          ; 00534484
    FADD float ptr [ESP + 0x14]         ; 00534487
    FSTP float ptr [EBX + 0x34]         ; 0053448b
    PUSH 0x1e                           ; 0053448e
        ;   Label: LAB_0053448e
    MOV EAX,[0x005bac64]                ; 00534490 | INT_005bac64
    PUSH EAX                            ; 00534495 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 00534496 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 00534498
    ADD ESP,0x8                         ; 0053449a
    TEST EAX,EAX                        ; 0053449d
    JZ 0x005344ab                       ; 0053449f
        ;   XREF to: 005344ab (CONDITIONAL_JUMP)  ; LAB_005344ab
    FLD float ptr [EBX + 0x34]          ; 005344a1
    FSUB float ptr [ESP + 0x14]         ; 005344a4
    FSTP float ptr [EBX + 0x34]         ; 005344a8
    TEST byte ptr [EBP + 0x10],0x4      ; 005344ab
        ;   Label: LAB_005344ab
    JZ 0x005344eb                       ; 005344af
        ;   XREF to: 005344eb (CONDITIONAL_JUMP)  ; LAB_005344eb
    PUSH 0x48                           ; 005344b1
    MOV EAX,[0x005bac64]                ; 005344b3 | INT_005bac64
    PUSH EAX                            ; 005344b8 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 005344b9 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 005344bb
    ADD ESP,0x8                         ; 005344bd
    TEST EAX,EAX                        ; 005344c0
    JZ 0x005344ce                       ; 005344c2
        ;   XREF to: 005344ce (CONDITIONAL_JUMP)  ; LAB_005344ce
    FLD float ptr [EBX + 0x2c]          ; 005344c4
    FSUB float ptr [ESP + 0x4]          ; 005344c7
    FSTP float ptr [EBX + 0x2c]         ; 005344cb
    PUSH 0x50                           ; 005344ce
        ;   Label: LAB_005344ce
    MOV EAX,[0x005bac64]                ; 005344d0 | INT_005bac64
    PUSH EAX                            ; 005344d5 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 005344d6 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 005344d8
    ADD ESP,0x8                         ; 005344da
    TEST EAX,EAX                        ; 005344dd
    JZ 0x005344eb                       ; 005344df
        ;   XREF to: 005344eb (CONDITIONAL_JUMP)  ; LAB_005344eb
    FLD float ptr [EBX + 0x2c]          ; 005344e1
    FADD float ptr [ESP + 0x4]          ; 005344e4
    FSTP float ptr [EBX + 0x2c]         ; 005344e8
    TEST byte ptr [EBP + 0x10],0x10     ; 005344eb
        ;   Label: LAB_005344eb
    JZ 0x0053452d                       ; 005344ef
        ;   XREF to: 0053452d (CONDITIONAL_JUMP)  ; LAB_0053452d
    PUSH 0xd                            ; 005344f1
    MOV EAX,[0x005bac64]                ; 005344f3 | INT_005bac64
    PUSH EAX                            ; 005344f8 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 005344f9 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 005344fb
    ADD ESP,0x8                         ; 005344fe
    TEST EAX,EAX                        ; 00534501
    JZ 0x0053450f                       ; 00534503
        ;   XREF to: 0053450f (CONDITIONAL_JUMP)  ; LAB_0053450f
    FLD float ptr [EBX + 0x38]          ; 00534505
    FDIV float ptr [ESP + 0xc]          ; 00534508
    FSTP float ptr [EBX + 0x38]         ; 0053450c
    PUSH 0xc                            ; 0053450f
        ;   Label: LAB_0053450f
    MOV EAX,[0x005bac64]                ; 00534511 | INT_005bac64
    PUSH EAX                            ; 00534516 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 00534517 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 00534519
    ADD ESP,0x8                         ; 0053451c
    TEST EAX,EAX                        ; 0053451f
    JZ 0x0053452d                       ; 00534521
        ;   XREF to: 0053452d (CONDITIONAL_JUMP)  ; LAB_0053452d
    FLD float ptr [EBX + 0x38]          ; 00534523
    FMUL float ptr [ESP + 0xc]          ; 00534526
    FSTP float ptr [EBX + 0x38]         ; 0053452a
    PUSH 0x4c                           ; 0053452d
        ;   Label: LAB_0053452d
    MOV EAX,[0x005bac64]                ; 0053452f | INT_005bac64
    PUSH EAX                            ; 00534534 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 00534535 | DAT_01cc30e4
    CALL dword ptr [EDX + 0x4]          ; 00534537
    ADD ESP,0x8                         ; 0053453a
    TEST EAX,EAX                        ; 0053453d
    JNZ 0x00534572                      ; 0053453f
        ;   XREF to: 00534572 (CONDITIONAL_JUMP)  ; LAB_00534572
    PUSH EBX                            ; 00534541
    CALL shape_spotview.cpp_CSpotView_clampValues_FUN_00534590 ; 00534542
        ;   XREF to: 00534590 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_clampValues_FUN_00534590(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 00534547
    MOV ESP,EBP                         ; 0053454a
    POP EBP                             ; 0053454c
    POP EBX                             ; 0053454d
    RET                                 ; 0053454e
    PUSH 0x2a                           ; 0053454f
        ;   Label: LAB_0053454f
    MOV EAX,[0x005bac64]                ; 00534551 | INT_005bac64
    PUSH EAX                            ; 00534556 | DAT_01cc30e4
    MOV EDX,dword ptr [EAX]             ; 00534557 | DAT_01cc30e4
    CALL dword ptr [EDX]                ; 00534559
    ADD ESP,0x8                         ; 0053455b
    TEST EAX,EAX                        ; 0053455e
    JZ 0x005342e4                       ; 00534560
        ;   XREF to: 005342e4 (CONDITIONAL_JUMP)  ; LAB_005342e4
    MOV dword ptr [ESP],0x40800000      ; 00534566
    JMP 0x005342e4                      ; 0053456d
        ;   XREF to: 005342e4 (UNCONDITIONAL_JUMP)  ; LAB_005342e4
    MOV EDX,dword ptr [EBP + 0x10]      ; 00534572
        ;   Label: LAB_00534572
    PUSH EDX                            ; 00534575
    PUSH EBX                            ; 00534576
    CALL shape_spotview.cpp_CSpotView_reset_FUN_00534260 ; 00534577
        ;   XREF to: 00534260 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_reset_FUN_00534260(CSpotView * this_ptr, uint control_flags)
    ADD ESP,0x8                         ; 0053457c
    PUSH EBX                            ; 0053457f
    CALL shape_spotview.cpp_CSpotView_clampValues_FUN_00534590 ; 00534580
        ;   XREF to: 00534590 (UNCONDITIONAL_CALL)  ; void shape_spotview.cpp_CSpotView_clampValues_FUN_00534590(CSpotView * this_ptr)
    ADD ESP,0x4                         ; 00534585
    MOV ESP,EBP                         ; 00534588
    POP EBP                             ; 0053458a
    POP EBX                             ; 0053458b
    RET                                 ; 0053458c

