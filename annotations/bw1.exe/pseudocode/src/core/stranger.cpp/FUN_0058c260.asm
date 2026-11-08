; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0058c260(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x240]:1  local_240
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00591120 at 005912c8
;
; Referenced Globals:
;   void* switchdataD_0058c23c = 0058c6c2
;   void* switchdataD_0058c24c = 0058c9d2
;   undefined4 s_Picking_up_heavy_s_shelf_005f6be4+1
;   TerminatedCString s_Picking_up_heavy_s_crate_005f6c00
;   TerminatedCString s_s_out_of_reach_canceling_005f6c1b
;   TerminatedCString s_Picking_up_s_waist_level_005f6c3f
;   TerminatedCString s_Picking_up_s_off_ground_005f6c5a
;   TerminatedCString s_Rummaging_s_005f6c74
;   TerminatedCString s_core_stranger_cpp_005f6c82
;   TerminatedCString s_Hell_froze_invalid_pickU_005f6c97
;   undefined4 DAT_005f6cc1
;   undefined4 DAT_005f6cc9
;   undefined4 DAT_005f6cd1
;   undefined4 DAT_005f6cd9
;   undefined4 DAT_005f6ce1
;   ... and 10 more
;
; Called Functions:
;   FUN_00408b40
;   FUN_00408bb0
;   FUN_0040c550
;   FUN_00434590
;   FUN_00445430
;   FUN_005030e0
;   FUN_005247c0
;   FUN_00524a40
;   FUN_00569040
;   FUN_005a7520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058c260
        ;   Label: FUN_0058c260
    PUSH ESI                            ; 0058c261
    PUSH EDI                            ; 0058c262
    PUSH EBP                            ; 0058c263
    MOV EBP,ESP                         ; 0058c264
    SUB ESP,0x274                       ; 0058c266
    AND ESP,0xfffffff8                  ; 0058c26c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058c26f
    FLD float ptr [EAX + 0x20014]       ; 0058c272
    FLDZ                                ; 0058c278
    FCOMPP                              ; 0058c27a
    FNSTSW AX                           ; 0058c27c
    SAHF                                ; 0058c27e
    JC 0x0058c28e                       ; 0058c27f
        ;   XREF to: 0058c28e (CONDITIONAL_JUMP)  ; LAB_0058c28e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058c281
    MOV EDX,dword ptr [EAX + 0x1ff78]   ; 0058c284
    TEST EDX,EDX                        ; 0058c28a
    JZ 0x0058c297                       ; 0058c28c
        ;   XREF to: 0058c297 (CONDITIONAL_JUMP)  ; LAB_0058c297
    XOR EAX,EAX                         ; 0058c28e
        ;   Label: LAB_0058c28e
    MOV ESP,EBP                         ; 0058c290
    POP EBP                             ; 0058c292
    POP EDI                             ; 0058c293
    POP ESI                             ; 0058c294
    POP EBX                             ; 0058c295
    RET                                 ; 0058c296
    PUSH EDX                            ; 0058c297
        ;   Label: LAB_0058c297
    PUSH EAX                            ; 0058c298
    CALL FUN_00434590                   ; 0058c299
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; undefined FUN_00434590()
    MOV dword ptr [ESP + 0x278],EAX     ; 0058c29e
    FLD float ptr [ESP + 0x278]         ; 0058c2a5
    ADD ESP,0x8                         ; 0058c2ac
    FCOMP double ptr [0x005f6cc1]       ; 0058c2af | DAT_005f6cc1
    FNSTSW AX                           ; 0058c2b5
    SAHF                                ; 0058c2b7
    JC 0x0058c28e                       ; 0058c2b8
        ;   XREF to: 0058c28e (CONDITIONAL_JUMP)  ; LAB_0058c28e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058c2ba
    PUSH 0x0                            ; 0058c2bd
    ADD EAX,0x158                       ; 0058c2bf
    PUSH EAX                            ; 0058c2c4
    CALL FUN_00524a40                   ; 0058c2c5
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00524a40()
    MOV dword ptr [ESP + 0x278],EAX     ; 0058c2ca
    FLD float ptr [ESP + 0x278]         ; 0058c2d1
    FLD1                                ; 0058c2d8
    ADD ESP,0x8                         ; 0058c2da
    FCOMPP                              ; 0058c2dd
    FNSTSW AX                           ; 0058c2df
    SAHF                                ; 0058c2e1
    JA 0x0058c28e                       ; 0058c2e2
        ;   XREF to: 0058c28e (CONDITIONAL_JUMP)  ; LAB_0058c28e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058c2e4
    MOV EBX,dword ptr [EAX + 0x25b0]    ; 0058c2e7
    TEST EBX,EBX                        ; 0058c2ed
    JNZ 0x0058c28e                      ; 0058c2ef
        ;   XREF to: 0058c28e (CONDITIONAL_JUMP)  ; LAB_0058c28e
    CMP dword ptr [EAX + 0x2628],0x0    ; 0058c2f1
    JNZ 0x0058c28e                      ; 0058c2f8
        ;   XREF to: 0058c28e (CONDITIONAL_JUMP)  ; LAB_0058c28e
    LEA EAX,[ESP + 0x48]                ; 0058c2fa
    MOV EDI,0x40800000                  ; 0058c2fe
    ADD EAX,0xc                         ; 0058c303
    MOV dword ptr [ESP + 0x26c],EBX     ; 0058c306
    MOV dword ptr [ESP + 0x268],EAX     ; 0058c30d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058c314
    MOV dword ptr [ESP + 0x264],EBX     ; 0058c317
    ADD EAX,0x20                        ; 0058c31e
    MOV dword ptr [ESP + 0x254],EDI     ; 0058c321
    MOV dword ptr [ESP + 0x258],EAX     ; 0058c328
    MOV EAX,[0x00622c18]                ; 0058c32f | DAT_00622c18
        ;   Label: LAB_0058c32f
    MOV EDX,dword ptr [ESP + 0x26c]     ; 0058c334
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 0058c33b | DAT_01fcf2cc
    JGE 0x0058c825                      ; 0058c341
        ;   XREF to: 0058c825 (CONDITIONAL_JUMP)  ; LAB_0058c825
    ADD EAX,dword ptr [ESP + 0x264]     ; 0058c347
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 0058c34e | DAT_01fcf2d0
    PUSH EBX                            ; 0058c354
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058c355
    CALL dword ptr [EAX + 0x94]         ; 0058c35b
    ADD ESP,0x4                         ; 0058c361
    TEST EAX,EAX                        ; 0058c364
    JZ 0x0058c7f9                       ; 0058c366
        ;   XREF to: 0058c7f9 (CONDITIONAL_JUMP)  ; LAB_0058c7f9
    MOV EAX,dword ptr [ESP + 0x26c]     ; 0058c36c
        ;   Label: default
    MOV EDI,dword ptr [ESP + 0x264]     ; 0058c373
    INC EAX                             ; 0058c37a
    ADD EDI,0x4                         ; 0058c37b
    MOV dword ptr [ESP + 0x26c],EAX     ; 0058c37e
    MOV dword ptr [ESP + 0x264],EDI     ; 0058c385
    JMP 0x0058c32f                      ; 0058c38c
        ;   XREF to: 0058c32f (UNCONDITIONAL_JUMP)  ; LAB_0058c32f
    MOV EDI,dword ptr [ESI + 0x2628]    ; 0058c38e
        ;   Label: caseD_2
    TEST EDI,EDI                        ; 0058c394
    JNZ 0x0058c36c                      ; 0058c396
        ;   XREF to: 0058c36c (CONDITIONAL_JUMP)  ; default
    MOV EDX,0x40400000                  ; 0058c398
    MOV ECX,0x40000000                  ; 0058c39d
    LEA ESI,[ESP + 0x1b0]               ; 0058c3a2
    LEA EAX,[ESP + 0xfc]                ; 0058c3a9
    MOV dword ptr [ESP + 0x1b0],EDI     ; 0058c3b0
    MOV dword ptr [ESP + 0x1b4],EDX     ; 0058c3b7
    MOV dword ptr [ESP + 0x1b8],ECX     ; 0058c3be
    CMP EAX,ESI                         ; 0058c3c5
    JZ 0x0058c3de                       ; 0058c3c7
        ;   XREF to: 0058c3de (CONDITIONAL_JUMP)  ; LAB_0058c3de
    MOV dword ptr [ESP + 0x100],EDX     ; 0058c3c9
    MOV dword ptr [ESP + 0x104],ECX     ; 0058c3d0
    MOV dword ptr [ESP + 0xfc],EDI      ; 0058c3d7
    LEA EAX,[ESP + 0xfc]                ; 0058c3de
        ;   Label: LAB_0058c3de
    PUSH EAX                            ; 0058c3e5
    MOV ECX,dword ptr [EBP + 0x14]      ; 0058c3e6
    PUSH ECX                            ; 0058c3e9
    LEA ESI,[ESP + 0x14c]               ; 0058c3ea
    LEA EDI,[ESP + 0xd4]                ; 0058c3f1
    CALL FUN_00408b40                   ; 0058c3f8
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x14c]               ; 0058c3fd
    ADD ESP,0x8                         ; 0058c404
    MOVSD ES:EDI,ESI                    ; 0058c407
    MOVSD ES:EDI,ESI                    ; 0058c408
    MOVSD ES:EDI,ESI                    ; 0058c409
    PUSH EBX                            ; 0058c40a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058c40b
    LEA ESI,[ESP + 0x4]                 ; 0058c411
    LEA EDI,[ESP + 0x4c]                ; 0058c415
    CALL dword ptr [EAX + 0x1c]         ; 0058c419
    MOV ECX,0x6                         ; 0058c41c
    LEA ESI,[ESP + 0x4]                 ; 0058c421
    ADD ESP,0x4                         ; 0058c425
    MOVSD.REP ES:EDI,ESI                ; 0058c428
    MOV EAX,dword ptr [ESP + 0x268]     ; 0058c42a
    FLD float ptr [ESP + 0x48]          ; 0058c431
    FLD float ptr [ESP + 0x4c]          ; 0058c435
    FLD float ptr [ESP + 0x50]          ; 0058c439
    LEA EDI,[ESP + 0x1ec]               ; 0058c43d
    LEA ESI,[ESP + 0x198]               ; 0058c444
    FXCH ST2                            ; 0058c44b
    FADD float ptr [EAX]                ; 0058c44d
    FXCH                                ; 0058c44f
    FADD float ptr [EAX + 0x4]          ; 0058c451
    FXCH ST2                            ; 0058c454
    FADD float ptr [EAX + 0x8]          ; 0058c456
    FXCH                                ; 0058c459
    FSTP float ptr [ESP + 0x198]        ; 0058c45b
    FXCH                                ; 0058c462
    FSTP float ptr [ESP + 0x19c]        ; 0058c464
    FSTP float ptr [ESP + 0x1a0]        ; 0058c46b
    MOVSD ES:EDI,ESI                    ; 0058c472
    MOVSD ES:EDI,ESI                    ; 0058c473
    MOVSD ES:EDI,ESI                    ; 0058c474
    FLD float ptr [0x005f6cc9]          ; 0058c475 | DAT_005f6cc9
    FLD float ptr [ESP + 0x1ec]         ; 0058c47b
    FMUL ST1                            ; 0058c482
    FLD float ptr [ESP + 0x1f0]         ; 0058c484
    FMUL ST2                            ; 0058c48b
    LEA EAX,[ESP + 0x234]               ; 0058c48d
    FLD float ptr [ESP + 0x1f4]         ; 0058c494
    FMULP ST3                           ; 0058c49b
    PUSH EAX                            ; 0058c49d
    LEA EDI,[ESP + 0x238]               ; 0058c49e
    LEA ESI,[ESP + 0x1e4]               ; 0058c4a5
    FXCH                                ; 0058c4ac
    FSTP float ptr [ESP + 0x1e4]        ; 0058c4ae
    FSTP float ptr [ESP + 0x1e8]        ; 0058c4b5
    FSTP float ptr [ESP + 0x1ec]        ; 0058c4bc
    MOVSD ES:EDI,ESI                    ; 0058c4c3
    MOVSD ES:EDI,ESI                    ; 0058c4c4
    MOVSD ES:EDI,ESI                    ; 0058c4c5
    PUSH EBX                            ; 0058c4c6
    LEA ESI,[ESP + 0x1dc]               ; 0058c4c7
    LEA EDI,[ESP + 0x110]               ; 0058c4ce
    CALL FUN_00408b40                   ; 0058c4d5
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x1dc]               ; 0058c4da
    ADD ESP,0x8                         ; 0058c4e1
    MOVSD ES:EDI,ESI                    ; 0058c4e4
    MOVSD ES:EDI,ESI                    ; 0058c4e5
    MOVSD ES:EDI,ESI                    ; 0058c4e6
    FLD float ptr [ESP + 0x108]         ; 0058c4e7
    FLD float ptr [ESP + 0x10c]         ; 0058c4ee
    FLD float ptr [ESP + 0x110]         ; 0058c4f5
    LEA EDI,[ESP + 0x15c]               ; 0058c4fc
    LEA ESI,[ESP + 0x138]               ; 0058c503
    FXCH ST2                            ; 0058c50a
    FSUB float ptr [ESP + 0xcc]         ; 0058c50c
    FXCH                                ; 0058c513
    FSUB float ptr [ESP + 0xd0]         ; 0058c515
    FXCH ST2                            ; 0058c51c
    FSUB float ptr [ESP + 0xd4]         ; 0058c51e
    FXCH                                ; 0058c525
    FSTP float ptr [ESP + 0x138]        ; 0058c527
    FXCH                                ; 0058c52e
    FSTP float ptr [ESP + 0x13c]        ; 0058c530
    FSTP float ptr [ESP + 0x140]        ; 0058c537
    MOVSD ES:EDI,ESI                    ; 0058c53e
    MOVSD ES:EDI,ESI                    ; 0058c53f
    MOVSD ES:EDI,ESI                    ; 0058c540
    FLD float ptr [ESP + 0x160]         ; 0058c541
    FABS                                ; 0058c548
    FCOMP double ptr [0x005f6ce9]       ; 0058c54a | DAT_005f6ce9
    FNSTSW AX                           ; 0058c550
    SAHF                                ; 0058c552
    JA 0x0058c36c                       ; 0058c553
        ;   XREF to: 0058c36c (CONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x164]         ; 0058c559
    FMUL ST0                            ; 0058c560
    FLD float ptr [ESP + 0x15c]         ; 0058c562
    FMUL ST0                            ; 0058c569
    FADDP                               ; 0058c56b
    FST float ptr [ESP + 0x260]         ; 0058c56d
    FCOMP float ptr [ESP + 0x254]       ; 0058c574
    FNSTSW AX                           ; 0058c57b
    SAHF                                ; 0058c57d
    JA 0x0058c36c                       ; 0058c57e
        ;   XREF to: 0058c36c (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [EBP + 0x18]      ; 0058c584
    PUSH ESI                            ; 0058c587
    PUSH EBX                            ; 0058c588
    CALL FUN_0040c550                   ; 0058c589
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 0058c58e
    TEST EAX,EAX                        ; 0058c591
    JZ 0x0058c36c                       ; 0058c593
        ;   XREF to: 0058c36c (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058c599
    MOV dword ptr [EAX + 0x1ff78],EBX   ; 0058c59c
    MOV EAX,dword ptr [ESP + 0x260]     ; 0058c5a2
    MOV dword ptr [ESP + 0x254],EAX     ; 0058c5a9
    MOV EAX,dword ptr [ESP + 0x250]     ; 0058c5b0
    MOV dword ptr [ESP + 0x24c],EAX     ; 0058c5b7
    JMP 0x0058c36c                      ; 0058c5be
        ;   XREF to: 0058c36c (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058c5c3
        ;   Label: caseD_3
    CMP dword ptr [EAX + 0x2628],0x0    ; 0058c5c6
    JNZ 0x0058c36c                      ; 0058c5cd
        ;   XREF to: 0058c36c (CONDITIONAL_JUMP)  ; default
    MOV EDX,dword ptr [EBP + 0x14]      ; 0058c5d3
    PUSH EDX                            ; 0058c5d6
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058c5d7
    PUSH EBX                            ; 0058c5dd
    CALL dword ptr [EAX + 0x84]         ; 0058c5de
    ADD ESP,0x8                         ; 0058c5e4
    CMP EAX,0x4                         ; 0058c5e7
    SETZ AL                             ; 0058c5ea
    AND EAX,0xff                        ; 0058c5ed
    JZ 0x0058c66a                       ; 0058c5f2
        ;   XREF to: 0058c66a (CONDITIONAL_JUMP)  ; LAB_0058c66a
    MOV ECX,dword ptr [ESP + 0x258]     ; 0058c5f4
    PUSH ECX                            ; 0058c5fb
    PUSH EBX                            ; 0058c5fc
    LEA ESI,[ESP + 0x1c4]               ; 0058c5fd
    LEA EDI,[ESP + 0x74]                ; 0058c604
    CALL FUN_00408bb0                   ; 0058c608
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    LEA ESI,[ESP + 0x1c4]               ; 0058c60d
    ADD ESP,0x8                         ; 0058c614
    MOVSD ES:EDI,ESI                    ; 0058c617
    MOVSD ES:EDI,ESI                    ; 0058c618
    MOVSD ES:EDI,ESI                    ; 0058c619
    FLD float ptr [ESP + 0x6c]          ; 0058c61a
    FABS                                ; 0058c61e
    FLD1                                ; 0058c620
    FCOMPP                              ; 0058c622
    FNSTSW AX                           ; 0058c624
    SAHF                                ; 0058c626
    JC 0x0058c36c                       ; 0058c627
        ;   XREF to: 0058c36c (CONDITIONAL_JUMP)  ; default
    LEA EAX,[ESP + 0x6c]                ; 0058c62d
    PUSH EAX                            ; 0058c631
    LEA ESI,[ESP + 0x1a8]               ; 0058c632
    LEA EDI,[ESP + 0x88]                ; 0058c639
    CALL FUN_005a7520                   ; 0058c640
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[ESP + 0x1a8]               ; 0058c645
    ADD ESP,0x4                         ; 0058c64c
    MOVSD ES:EDI,ESI                    ; 0058c64f
    MOVSD ES:EDI,ESI                    ; 0058c650
    MOVSD ES:EDI,ESI                    ; 0058c651
    FLD float ptr [ESP + 0x88]          ; 0058c652
    FABS                                ; 0058c659
    FCOMP double ptr [0x005f6ce1]       ; 0058c65b | DAT_005f6ce1
    FNSTSW AX                           ; 0058c661
    SAHF                                ; 0058c663
    JA 0x0058c36c                       ; 0058c664
        ;   XREF to: 0058c36c (CONDITIONAL_JUMP)  ; default
    MOV EDI,0x40400000                  ; 0058c66a
        ;   Label: LAB_0058c66a
    MOV EAX,0x40000000                  ; 0058c66f
    XOR ESI,ESI                         ; 0058c674
    MOV dword ptr [ESP + 0xe0],EAX      ; 0058c676
    MOV dword ptr [ESP + 0xd8],ESI      ; 0058c67d
    LEA EAX,[ESP + 0xd8]                ; 0058c684
    LEA ESI,[ESP + 0xfc]                ; 0058c68b
    MOV dword ptr [ESP + 0xdc],EDI      ; 0058c692
    CMP ESI,EAX                         ; 0058c699
    JZ 0x0058c3de                       ; 0058c69b
        ;   XREF to: 0058c3de (CONDITIONAL_JUMP)  ; LAB_0058c3de
    MOV ESI,0x40000000                  ; 0058c6a1
    MOV dword ptr [ESP + 0x100],EDI     ; 0058c6a6
    XOR EDX,EDX                         ; 0058c6ad
    MOV dword ptr [ESP + 0x104],ESI     ; 0058c6af
    MOV dword ptr [ESP + 0xfc],EDX      ; 0058c6b6
    JMP 0x0058c3de                      ; 0058c6bd
        ;   XREF to: 0058c3de (UNCONDITIONAL_JUMP)  ; LAB_0058c3de
    CMP dword ptr [ESI + 0x25b0],0x0    ; 0058c6c2
        ;   Label: caseD_1
    JNZ 0x0058c36c                      ; 0058c6c9
        ;   XREF to: 0058c36c (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [ESP + 0x258]     ; 0058c6cf
    PUSH ECX                            ; 0058c6d6
    PUSH EBX                            ; 0058c6d7
    LEA ESI,[ESP + 0xb0]                ; 0058c6d8
    LEA EDI,[ESP + 0x1d0]               ; 0058c6df
    CALL FUN_00408bb0                   ; 0058c6e6
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    LEA ESI,[ESP + 0xb0]                ; 0058c6eb
    ADD ESP,0x8                         ; 0058c6f2
    MOVSD ES:EDI,ESI                    ; 0058c6f5
    MOVSD ES:EDI,ESI                    ; 0058c6f6
    MOVSD ES:EDI,ESI                    ; 0058c6f7
    FLD float ptr [ESP + 0x1cc]         ; 0058c6f8
    FMUL ST0                            ; 0058c6ff
    FLD float ptr [ESP + 0x1c8]         ; 0058c701
    FMUL ST0                            ; 0058c708
    FADDP                               ; 0058c70a
    FLD float ptr [ESP + 0x1d0]         ; 0058c70c
    FMUL ST0                            ; 0058c713
    FADDP                               ; 0058c715
    FSQRT                               ; 0058c717
    FLDZ                                ; 0058c719
    FXCH                                ; 0058c71b
    FSTP float ptr [ESP + 0x25c]        ; 0058c71d
    FCOMP float ptr [ESP + 0x25c]       ; 0058c724
    FNSTSW AX                           ; 0058c72b
    SAHF                                ; 0058c72d
    JNC 0x0058c7dd                      ; 0058c72e
        ;   XREF to: 0058c7dd (CONDITIONAL_JUMP)  ; LAB_0058c7dd
    FLD1                                ; 0058c734
    FLD float ptr [ESP + 0x1c8]         ; 0058c736
    FXCH                                ; 0058c73d
    FDIV float ptr [ESP + 0x25c]        ; 0058c73f
    FXCH                                ; 0058c746
    FMUL ST1                            ; 0058c748
    FLD float ptr [ESP + 0x1cc]         ; 0058c74a
    FMUL ST2                            ; 0058c751
    FLD float ptr [ESP + 0x1d0]         ; 0058c753
    FMULP ST3                           ; 0058c75a
    FXCH                                ; 0058c75c
    FSTP float ptr [ESP + 0x1c8]        ; 0058c75e
    FSTP float ptr [ESP + 0x1cc]        ; 0058c765
    FSTP float ptr [ESP + 0x1d0]        ; 0058c76c
    FLD float ptr [ESP + 0x1d0]         ; 0058c773
        ;   Label: LAB_0058c773
    FLDZ                                ; 0058c77a
    FCOMPP                              ; 0058c77c
    FNSTSW AX                           ; 0058c77e
    SAHF                                ; 0058c780
    JC 0x0058c36c                       ; 0058c781
        ;   XREF to: 0058c36c (CONDITIONAL_JUMP)  ; default
    MOV ECX,0x40400000                  ; 0058c787
    MOV ESI,0x40000000                  ; 0058c78c
    LEA EAX,[ESP + 0xfc]                ; 0058c791
    XOR EDX,EDX                         ; 0058c798
    MOV dword ptr [ESP + 0x220],ECX     ; 0058c79a
    MOV dword ptr [ESP + 0x224],ESI     ; 0058c7a1
    LEA ESI,[ESP + 0x21c]               ; 0058c7a8
    MOV dword ptr [ESP + 0x21c],EDX     ; 0058c7af
    CMP EAX,ESI                         ; 0058c7b6
    JZ 0x0058c3de                       ; 0058c7b8
        ;   XREF to: 0058c3de (CONDITIONAL_JUMP)  ; LAB_0058c3de
    MOV dword ptr [ESP + 0xfc],EDX      ; 0058c7be
    MOV EDX,0x40000000                  ; 0058c7c5
    MOV dword ptr [ESP + 0x100],ECX     ; 0058c7ca
    MOV dword ptr [ESP + 0x104],EDX     ; 0058c7d1
    JMP 0x0058c3de                      ; 0058c7d8
        ;   XREF to: 0058c3de (UNCONDITIONAL_JUMP)  ; LAB_0058c3de
    XOR ESI,ESI                         ; 0058c7dd
        ;   Label: LAB_0058c7dd
    MOV dword ptr [ESP + 0x1cc],ESI     ; 0058c7df
    MOV dword ptr [ESP + 0x1c8],ESI     ; 0058c7e6
    MOV dword ptr [ESP + 0x1d0],ESI     ; 0058c7ed
    JMP 0x0058c773                      ; 0058c7f4
        ;   XREF to: 0058c773 (UNCONDITIONAL_JUMP)  ; LAB_0058c773
    MOV ESI,dword ptr [EBP + 0x14]      ; 0058c7f9
        ;   Label: LAB_0058c7f9
    PUSH ESI                            ; 0058c7fc
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058c7fd
    PUSH EBX                            ; 0058c803
    CALL dword ptr [EAX + 0x84]         ; 0058c804
    ADD ESP,0x8                         ; 0058c80a
    MOV dword ptr [ESP + 0x250],EAX     ; 0058c80d
    DEC EAX                             ; 0058c814
    CMP EAX,0x3                         ; 0058c815
    JA 0x0058c36c                       ; 0058c818
        ;   XREF to: 0058c36c (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x58c23c]  ; 0058c81e | caseD_1 | caseD_2 | caseD_4
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058c825
        ;   Label: LAB_0058c825
    MOV EBX,dword ptr [EAX + 0x1ff78]   ; 0058c828
    TEST EBX,EBX                        ; 0058c82e
    JZ 0x0058c28e                       ; 0058c830
        ;   XREF to: 0058c28e (CONDITIONAL_JUMP)  ; LAB_0058c28e
    PUSH EBX                            ; 0058c836
    MOV EDX,dword ptr [EBX + 0x154]     ; 0058c837
    LEA ESI,[ESP + 0x34]                ; 0058c83d
    LEA EDI,[ESP + 0x1c]                ; 0058c841
    CALL dword ptr [EDX + 0x1c]         ; 0058c845
    MOV ECX,0x6                         ; 0058c848
    ADD ESP,0x4                         ; 0058c84d
    LEA ESI,[ESP + 0x30]                ; 0058c850
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058c854
    MOVSD.REP ES:EDI,ESI                ; 0058c857
    ADD EBX,0x20078                     ; 0058c859
    LEA EDX,[ESP + 0x18]                ; 0058c85f
    MOV ESI,EBX                         ; 0058c863
    CMP EBX,EDX                         ; 0058c865
    JZ 0x0058c87d                       ; 0058c867
        ;   XREF to: 0058c87d (CONDITIONAL_JUMP)  ; LAB_0058c87d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0058c869
    MOV dword ptr [EBX],EAX             ; 0058c86d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0058c86f
    MOV dword ptr [EBX + 0x4],EAX       ; 0058c873
    MOV EAX,dword ptr [ESP + 0x20]      ; 0058c876
    MOV dword ptr [EBX + 0x8],EAX       ; 0058c87a
    LEA EAX,[EDX + 0xc]                 ; 0058c87d
        ;   Label: LAB_0058c87d
    LEA EBX,[ESI + 0xc]                 ; 0058c880
    CMP EBX,EAX                         ; 0058c883
    JZ 0x0058c897                       ; 0058c885
        ;   XREF to: 0058c897 (CONDITIONAL_JUMP)  ; LAB_0058c897
    MOV EDX,dword ptr [EAX]             ; 0058c887
    MOV dword ptr [EBX],EDX             ; 0058c889
    MOV EDX,dword ptr [EAX + 0x4]       ; 0058c88b
    MOV dword ptr [EBX + 0x4],EDX       ; 0058c88e
    MOV EDX,dword ptr [EAX + 0x8]       ; 0058c891
    MOV dword ptr [EBX + 0x8],EDX       ; 0058c894
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058c897
        ;   Label: LAB_0058c897
    LEA EDI,[ESP + 0x114]               ; 0058c89a
    LEA ESI,[ESP + 0x168]               ; 0058c8a1
    FLD float ptr [EBX + 0x20078]       ; 0058c8a8
    FLD float ptr [EBX + 0x2007c]       ; 0058c8ae
    FLD float ptr [EBX + 0x20080]       ; 0058c8b4
    FXCH ST2                            ; 0058c8ba
    FADD float ptr [EBX + 0x20084]      ; 0058c8bc
    FXCH                                ; 0058c8c2
    FADD float ptr [EBX + 0x20088]      ; 0058c8c4
    FXCH ST2                            ; 0058c8ca
    FADD float ptr [EBX + 0x2008c]      ; 0058c8cc
    FXCH                                ; 0058c8d2
    FSTP float ptr [ESP + 0x168]        ; 0058c8d4
    FXCH                                ; 0058c8db
    FSTP float ptr [ESP + 0x16c]        ; 0058c8dd
    FSTP float ptr [ESP + 0x170]        ; 0058c8e4
    MOVSD ES:EDI,ESI                    ; 0058c8eb
    MOVSD ES:EDI,ESI                    ; 0058c8ec
    MOVSD ES:EDI,ESI                    ; 0058c8ed
    FLD float ptr [0x005f6cc9]          ; 0058c8ee | DAT_005f6cc9
    FLD float ptr [ESP + 0x114]         ; 0058c8f4
    FMUL ST1                            ; 0058c8fb
    FLD float ptr [ESP + 0x118]         ; 0058c8fd
    FMUL ST2                            ; 0058c904
    FLD float ptr [ESP + 0x11c]         ; 0058c906
    FMULP ST3                           ; 0058c90d
    LEA EAX,[ESP + 0xb4]                ; 0058c90f
    LEA EDI,[ESP + 0xb4]                ; 0058c916
    LEA ESI,[ESP + 0x18c]               ; 0058c91d
    FXCH                                ; 0058c924
    FSTP float ptr [ESP + 0x18c]        ; 0058c926
    FSTP float ptr [ESP + 0x190]        ; 0058c92d
    FSTP float ptr [ESP + 0x194]        ; 0058c934
    MOVSD ES:EDI,ESI                    ; 0058c93b
    MOVSD ES:EDI,ESI                    ; 0058c93c
    MOVSD ES:EDI,ESI                    ; 0058c93d
    PUSH EAX                            ; 0058c93e
    MOV ESI,dword ptr [EBX + 0x1ff78]   ; 0058c93f
    PUSH ESI                            ; 0058c945
    LEA ESI,[ESP + 0x230]               ; 0058c946
    LEA EDI,[ESP + 0x80]                ; 0058c94d
    CALL FUN_00408b40                   ; 0058c954
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    ADD ESP,0x8                         ; 0058c959
    LEA EAX,[ESP + 0x78]                ; 0058c95c
    LEA ESI,[ESP + 0x228]               ; 0058c960
    PUSH EAX                            ; 0058c967
    MOVSD ES:EDI,ESI                    ; 0058c968
    MOVSD ES:EDI,ESI                    ; 0058c969
    MOVSD ES:EDI,ESI                    ; 0058c96a
    PUSH EBX                            ; 0058c96b
    LEA ESI,[ESP + 0xec]                ; 0058c96c
    LEA EDI,[ESP + 0xf8]                ; 0058c973
    CALL FUN_00408bb0                   ; 0058c97a
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    LEA ESI,[ESP + 0xec]                ; 0058c97f
    LEA EAX,[ESP + 0xf8]                ; 0058c986
    ADD ESP,0x8                         ; 0058c98d
    ADD EBX,0x2006c                     ; 0058c990
    MOVSD ES:EDI,ESI                    ; 0058c996
    MOVSD ES:EDI,ESI                    ; 0058c997
    MOVSD ES:EDI,ESI                    ; 0058c998
    CMP EBX,EAX                         ; 0058c999
    JZ 0x0058c9ba                       ; 0058c99b
        ;   XREF to: 0058c9ba (CONDITIONAL_JUMP)  ; LAB_0058c9ba
    MOV EAX,dword ptr [ESP + 0xf0]      ; 0058c99d
    MOV dword ptr [EBX],EAX             ; 0058c9a4
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0058c9a6
    MOV dword ptr [EBX + 0x4],EAX       ; 0058c9ad
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0058c9b0
    MOV dword ptr [EBX + 0x8],EAX       ; 0058c9b7
    MOV EAX,dword ptr [ESP + 0x24c]     ; 0058c9ba
        ;   Label: LAB_0058c9ba
    DEC EAX                             ; 0058c9c1
    CMP EAX,0x3                         ; 0058c9c2
    JA 0x0058cd6c                       ; 0058c9c5
        ;   XREF to: 0058cd6c (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x58c24c]  ; 0058c9cb | caseD_1 | caseD_4 | switchdataD_0058c24c
        ;   Label: switchD
    PUSH 0x1                            ; 0058c9d2
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058c9d4
    PUSH 0x26                           ; 0058c9d7
    ADD EAX,0x158                       ; 0058c9d9
    PUSH EAX                            ; 0058c9de
    CALL FUN_005247c0                   ; 0058c9df
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0058c9e4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058c9e7
    MOV EDX,dword ptr [EAX + 0x1ff78]   ; 0058c9ea
    PUSH EDX                            ; 0058c9f0
    PUSH 0x5f6c74                       ; 0058c9f1 | = "Rummaging %s\n"
    MOV ECX,dword ptr [0x00611100]      ; 0058c9f6 | PTR_DAT_00611100
    PUSH ECX                            ; 0058c9fc | DAT_007db5f0
    CALL FUN_00445430                   ; 0058c9fd
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
        ;   Label: LAB_0058c9fd
    ADD ESP,0xc                         ; 0058ca02
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058ca05
        ;   Label: LAB_0058ca05
    MOV dword ptr [EAX + 0x20014],0x40800000 ; 0058ca08
    MOV dword ptr [EAX + 0x1ff5c],0x4   ; 0058ca12
    MOV EAX,0x1                         ; 0058ca1c
    MOV ESP,EBP                         ; 0058ca21
    POP EBP                             ; 0058ca23
    POP EDI                             ; 0058ca24
    POP ESI                             ; 0058ca25
    POP EBX                             ; 0058ca26
    RET                                 ; 0058ca27
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058ca28
        ;   Label: caseD_2
    MOV EAX,dword ptr [EAX + 0x1ff78]   ; 0058ca2b
    TEST EAX,EAX                        ; 0058ca31
    JNZ 0x0058cbcb                      ; 0058ca33
        ;   XREF to: 0058cbcb (CONDITIONAL_JUMP)  ; LAB_0058cbcb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058ca39
        ;   Label: LAB_0058ca39
    FLD float ptr [EAX + 0x20070]       ; 0058ca3c
    LEA EBX,[EAX + 0x158]               ; 0058ca42
    FCOMP double ptr [0x005f6cd9]       ; 0058ca48 | DAT_005f6cd9
    FNSTSW AX                           ; 0058ca4e
    SAHF                                ; 0058ca50
    JBE 0x0058cd44                      ; 0058ca51
        ;   XREF to: 0058cd44 (CONDITIONAL_JUMP)  ; LAB_0058cd44
    MOV EAX,[0x02c83638]                ; 0058ca57 | DAT_02c83638
    PUSH EAX                            ; 0058ca5c
    PUSH EBX                            ; 0058ca5d
    LEA ESI,[ESP + 0x17c]               ; 0058ca5e
    LEA EDI,[ESP + 0x20c]               ; 0058ca65
    CALL FUN_00569040                   ; 0058ca6c
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined FUN_00569040()
    ADD ESP,0x8                         ; 0058ca71
    MOV EDX,dword ptr [0x02c83610]      ; 0058ca74 | DAT_02c83610
    LEA ESI,[ESP + 0x174]               ; 0058ca7a
    PUSH EDX                            ; 0058ca81
    MOVSD ES:EDI,ESI                    ; 0058ca82
    MOVSD ES:EDI,ESI                    ; 0058ca83
    MOVSD ES:EDI,ESI                    ; 0058ca84
    PUSH EBX                            ; 0058ca85
    LEA ESI,[ESP + 0xc8]                ; 0058ca86
    LEA EDI,[ESP + 0x98]                ; 0058ca8d
    CALL FUN_00569040                   ; 0058ca94
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined FUN_00569040()
    ADD ESP,0x8                         ; 0058ca99
    LEA ESI,[ESP + 0xc0]                ; 0058ca9c
    FLD float ptr [ESP + 0x204]         ; 0058caa3
    FLD float ptr [ESP + 0x208]         ; 0058caaa
    MOVSD ES:EDI,ESI                    ; 0058cab1
    MOVSD ES:EDI,ESI                    ; 0058cab2
    MOVSD ES:EDI,ESI                    ; 0058cab3
    FLD float ptr [ESP + 0x20c]         ; 0058cab4
    LEA EDI,[ESP + 0x1f8]               ; 0058cabb
    LEA ESI,[ESP + 0x60]                ; 0058cac2
    FXCH ST2                            ; 0058cac6
    FSUB float ptr [ESP + 0x90]         ; 0058cac8
    FXCH                                ; 0058cacf
    FSUB float ptr [ESP + 0x94]         ; 0058cad1
    FXCH ST2                            ; 0058cad8
    FSUB float ptr [ESP + 0x98]         ; 0058cada
    FXCH                                ; 0058cae1
    FSTP float ptr [ESP + 0x60]         ; 0058cae3
    FXCH                                ; 0058cae7
    FSTP float ptr [ESP + 0x64]         ; 0058cae9
    FSTP float ptr [ESP + 0x68]         ; 0058caed
    MOVSD ES:EDI,ESI                    ; 0058caf1
    MOVSD ES:EDI,ESI                    ; 0058caf2
    MOVSD ES:EDI,ESI                    ; 0058caf3
    FLD float ptr [ESP + 0x1fc]         ; 0058caf4
    FMUL ST0                            ; 0058cafb
    FLD float ptr [ESP + 0x1f8]         ; 0058cafd
    FMUL ST0                            ; 0058cb04
    FADDP                               ; 0058cb06
    FLD float ptr [ESP + 0x200]         ; 0058cb08
    FMUL ST0                            ; 0058cb0f
    FADDP                               ; 0058cb11
    FSQRT                               ; 0058cb13
    FLD float ptr [ESP + 0x90]          ; 0058cb15
    FLD float ptr [ESP + 0x94]          ; 0058cb1c
    FLD float ptr [ESP + 0x98]          ; 0058cb23
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058cb2a
    LEA EDI,[ESP + 0x180]               ; 0058cb2d
    LEA ESI,[ESP + 0x9c]                ; 0058cb34
    FXCH ST2                            ; 0058cb3b
    FSUB float ptr [EAX + 0x2006c]      ; 0058cb3d
    FXCH                                ; 0058cb43
    FSUB float ptr [EAX + 0x20070]      ; 0058cb45
    FXCH ST2                            ; 0058cb4b
    FSUB float ptr [EAX + 0x20074]      ; 0058cb4d
    FXCH                                ; 0058cb53
    FSTP float ptr [ESP + 0x9c]         ; 0058cb55
    FXCH                                ; 0058cb5c
    FSTP float ptr [ESP + 0xa0]         ; 0058cb5e
    FSTP float ptr [ESP + 0xa4]         ; 0058cb65
    MOVSD ES:EDI,ESI                    ; 0058cb6c
    MOVSD ES:EDI,ESI                    ; 0058cb6d
    MOVSD ES:EDI,ESI                    ; 0058cb6e
    FLD float ptr [ESP + 0x184]         ; 0058cb6f
    FMUL ST0                            ; 0058cb76
    FLD float ptr [ESP + 0x180]         ; 0058cb78
    FMUL ST0                            ; 0058cb7f
    FADDP                               ; 0058cb81
    FLD float ptr [ESP + 0x188]         ; 0058cb83
    FMUL ST0                            ; 0058cb8a
    FADDP                               ; 0058cb8c
    FSQRT                               ; 0058cb8e
    FSUBP                               ; 0058cb90
    FABS                                ; 0058cb92
    FCOMP double ptr [0x005f6cd9]       ; 0058cb94 | DAT_005f6cd9
    FNSTSW AX                           ; 0058cb9a
    SAHF                                ; 0058cb9c
    JA 0x0058cd10                       ; 0058cb9d
        ;   XREF to: 0058cd10 (CONDITIONAL_JUMP)  ; LAB_0058cd10
    PUSH 0x1                            ; 0058cba3
    PUSH 0x20                           ; 0058cba5
    PUSH EBX                            ; 0058cba7
    CALL FUN_005247c0                   ; 0058cba8
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0058cbad
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058cbb0
    MOV ECX,dword ptr [EAX + 0x1ff78]   ; 0058cbb3
    PUSH ECX                            ; 0058cbb9
    PUSH 0x5f6c3f                       ; 0058cbba | = "Picking up %s waist level\n"
    MOV EBX,dword ptr [0x00611100]      ; 0058cbbf | PTR_DAT_00611100
    PUSH EBX                            ; 0058cbc5 | DAT_007db5f0
    JMP 0x0058c9fd                      ; 0058cbc6
        ;   XREF to: 0058c9fd (UNCONDITIONAL_JUMP)  ; LAB_0058c9fd
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058cbcb
        ;   Label: LAB_0058cbcb
    PUSH EBX                            ; 0058cbce
    MOV EDX,dword ptr [EAX + 0x154]     ; 0058cbcf
    PUSH EAX                            ; 0058cbd5
    CALL dword ptr [EDX + 0x84]         ; 0058cbd6
    ADD ESP,0x8                         ; 0058cbdc
    CMP EAX,0x4                         ; 0058cbdf
    SETZ AL                             ; 0058cbe2
    AND EAX,0xff                        ; 0058cbe5
    JZ 0x0058ca39                       ; 0058cbea
        ;   XREF to: 0058ca39 (CONDITIONAL_JUMP)  ; LAB_0058ca39
    LEA EAX,[EBX + 0x20]                ; 0058cbf0
    PUSH EAX                            ; 0058cbf3
    MOV ESI,dword ptr [EBX + 0x1ff78]   ; 0058cbf4
    PUSH ESI                            ; 0058cbfa
    LEA ESI,[ESP + 0x134]               ; 0058cbfb
    LEA EDI,[ESP + 0x128]               ; 0058cc02
    CALL FUN_00408bb0                   ; 0058cc09
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    LEA ESI,[ESP + 0x134]               ; 0058cc0e
    ADD ESP,0x8                         ; 0058cc15
    MOVSD ES:EDI,ESI                    ; 0058cc18
    MOVSD ES:EDI,ESI                    ; 0058cc19
    MOVSD ES:EDI,ESI                    ; 0058cc1a
    FLD float ptr [ESP + 0x128]         ; 0058cc1b
    FLDZ                                ; 0058cc22
    FCOMPP                              ; 0058cc24
    FNSTSW AX                           ; 0058cc26
    SAHF                                ; 0058cc28
    JNC 0x0058cce2                      ; 0058cc29
        ;   XREF to: 0058cce2 (CONDITIONAL_JUMP)  ; LAB_0058cce2
    MOV EAX,0x1                         ; 0058cc2f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0058cc34
        ;   Label: LAB_0058cc34
    FLD float ptr [EDX + 0x20070]       ; 0058cc37
    LEA EBX,[EDX + 0x158]               ; 0058cc3d
    MOV dword ptr [EDX + 0x2005c],EAX   ; 0058cc43
    FCOMP double ptr [0x005f6cd1]       ; 0058cc49 | DAT_005f6cd1
    FNSTSW AX                           ; 0058cc4f
    SAHF                                ; 0058cc51
    JBE 0x0058cce9                      ; 0058cc52
        ;   XREF to: 0058cce9 (CONDITIONAL_JUMP)  ; LAB_0058cce9
    PUSH 0x1                            ; 0058cc58
    PUSH 0x23                           ; 0058cc5a
    PUSH EBX                            ; 0058cc5c
    CALL FUN_005247c0                   ; 0058cc5d
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0058cc62
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058cc65
    MOV EAX,dword ptr [EAX + 0x1ff78]   ; 0058cc68
    ADD EAX,0x20                        ; 0058cc6e
    PUSH EAX                            ; 0058cc71
    MOV EDX,dword ptr [EBP + 0x14]      ; 0058cc72
    PUSH EDX                            ; 0058cc75
    LEA ESI,[ESP + 0x158]               ; 0058cc76
    LEA EDI,[ESP + 0x218]               ; 0058cc7d
    CALL FUN_00408bb0                   ; 0058cc84
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    ADD ESP,0x8                         ; 0058cc89
    LEA ESI,[ESP + 0x150]               ; 0058cc8c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058cc93
    LEA EAX,[ESP + 0x210]               ; 0058cc96
    ADD EBX,0x2006c                     ; 0058cc9d
    MOVSD ES:EDI,ESI                    ; 0058cca3
    MOVSD ES:EDI,ESI                    ; 0058cca4
    MOVSD ES:EDI,ESI                    ; 0058cca5
    CMP EBX,EAX                         ; 0058cca6
    JZ 0x0058ccc7                       ; 0058cca8
        ;   XREF to: 0058ccc7 (CONDITIONAL_JUMP)  ; LAB_0058ccc7
    MOV EAX,dword ptr [ESP + 0x210]     ; 0058ccaa
    MOV dword ptr [EBX],EAX             ; 0058ccb1
    MOV EAX,dword ptr [ESP + 0x214]     ; 0058ccb3
    MOV dword ptr [EBX + 0x4],EAX       ; 0058ccba
    MOV EAX,dword ptr [ESP + 0x218]     ; 0058ccbd
    MOV dword ptr [EBX + 0x8],EAX       ; 0058ccc4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058ccc7
        ;   Label: LAB_0058ccc7
    MOV ECX,dword ptr [EAX + 0x1ff78]   ; 0058ccca
    PUSH ECX                            ; 0058ccd0
    PUSH 0x5f6be5                       ; 0058ccd1 | s_Picking_up_heavy_s_shelf_005f6be4+1
    MOV EBX,dword ptr [0x00611100]      ; 0058ccd6 | PTR_DAT_00611100
    PUSH EBX                            ; 0058ccdc | DAT_007db5f0
    JMP 0x0058c9fd                      ; 0058ccdd
        ;   XREF to: 0058c9fd (UNCONDITIONAL_JUMP)  ; LAB_0058c9fd
    XOR EAX,EAX                         ; 0058cce2
        ;   Label: LAB_0058cce2
    JMP 0x0058cc34                      ; 0058cce4
        ;   XREF to: 0058cc34 (UNCONDITIONAL_JUMP)  ; LAB_0058cc34
    PUSH 0x1                            ; 0058cce9
        ;   Label: LAB_0058cce9
    PUSH 0x22                           ; 0058cceb
    PUSH EBX                            ; 0058cced
    CALL FUN_005247c0                   ; 0058ccee
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0058ccf3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058ccf6
    MOV EDI,dword ptr [EAX + 0x1ff78]   ; 0058ccf9
    PUSH EDI                            ; 0058ccff
    PUSH 0x5f6c00                       ; 0058cd00 | = "Picking up heavy %s crate\n"
    MOV EAX,[0x00611100]                ; 0058cd05 | PTR_DAT_00611100
    PUSH EAX                            ; 0058cd0a | DAT_007db5f0
    JMP 0x0058c9fd                      ; 0058cd0b
        ;   XREF to: 0058c9fd (UNCONDITIONAL_JUMP)  ; LAB_0058c9fd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058cd10
        ;   Label: LAB_0058cd10
    MOV ESI,dword ptr [EAX + 0x1ff78]   ; 0058cd13
    PUSH ESI                            ; 0058cd19
    PUSH 0x5f6c1b                       ; 0058cd1a | = "%s out of reach - canceling pickup\n"
    MOV EDI,dword ptr [0x00611100]      ; 0058cd1f | PTR_DAT_00611100
    PUSH EDI                            ; 0058cd25 | DAT_007db5f0
    CALL FUN_00445430                   ; 0058cd26
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0xc                         ; 0058cd2b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058cd2e
    MOV dword ptr [EAX + 0x1ff78],0x0   ; 0058cd31
    XOR EAX,EAX                         ; 0058cd3b
    MOV ESP,EBP                         ; 0058cd3d
    POP EBP                             ; 0058cd3f
    POP EDI                             ; 0058cd40
    POP ESI                             ; 0058cd41
    POP EBX                             ; 0058cd42
    RET                                 ; 0058cd43
    PUSH 0x1                            ; 0058cd44
        ;   Label: LAB_0058cd44
    PUSH 0x1e                           ; 0058cd46
    PUSH EBX                            ; 0058cd48
    CALL FUN_005247c0                   ; 0058cd49
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0058cd4e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058cd51
    MOV ESI,dword ptr [EAX + 0x1ff78]   ; 0058cd54
    PUSH ESI                            ; 0058cd5a
    PUSH 0x5f6c5a                       ; 0058cd5b | = "Picking up %s off ground\n"
    MOV EDI,dword ptr [0x00611100]      ; 0058cd60 | PTR_DAT_00611100
    PUSH EDI                            ; 0058cd66 | DAT_007db5f0
    JMP 0x0058c9fd                      ; 0058cd67
        ;   XREF to: 0058c9fd (UNCONDITIONAL_JUMP)  ; LAB_0058c9fd
    MOV ECX,dword ptr [ESP + 0x24c]     ; 0058cd6c
        ;   Label: default
    PUSH ECX                            ; 0058cd73
    MOV EAX,0x5f6c82                    ; 0058cd74 | = "..\\core\\stranger.cpp"
    MOV EDX,0xda2                       ; 0058cd79
    PUSH 0x5f6c97                       ; 0058cd7e | = "Hell froze - invalid pickUpType: %d"
    MOV [0x01d1d400],EAX                ; 0058cd83 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0058cd88 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0058cd8e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 0058cd93
    JMP 0x0058ca05                      ; 0058cd96
        ;   XREF to: 0058ca05 (UNCONDITIONAL_JUMP)  ; LAB_0058ca05

