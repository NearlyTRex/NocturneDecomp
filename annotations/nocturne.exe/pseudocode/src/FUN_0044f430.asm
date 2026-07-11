; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044f430(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xd8]:4  local_d8
; undefined        Stack[-0xd4]:1  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00509a80 at 0050a17a
;
; Referenced Globals:
;   undefined4 DAT_0057c7de
;   undefined4 DAT_0057c7e6
;   undefined4 DAT_0059c030
;   undefined4 DAT_005ae470
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c038f4
;
; Called Functions:
;   FUN_00450520
;   FUN_00460080
;   FUN_00460a00
;   FUN_00460aa0
;   FUN_00460d10
;   FUN_00460db0
;   FUN_00461000
;   FUN_00461eb0
;   FUN_0053075c
;   FUN_00563a30
;   thunk_FUN_004cdbc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044f430
        ;   Label: FUN_0044f430
    PUSH ESI                            ; 0044f431
    PUSH EDI                            ; 0044f432
    PUSH EBP                            ; 0044f433
    MOV EBP,ESP                         ; 0044f434
    SUB ESP,0xc8                        ; 0044f436
    AND ESP,0xfffffff8                  ; 0044f43c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f43f
    CMP dword ptr [EAX + 0x1cbc],0x0    ; 0044f442
    JNZ 0x0044f452                      ; 0044f449
        ;   XREF to: 0044f452 (CONDITIONAL_JUMP)  ; LAB_0044f452
    MOV ESP,EBP                         ; 0044f44b
    POP EBP                             ; 0044f44d
    POP EDI                             ; 0044f44e
    POP ESI                             ; 0044f44f
    POP EBX                             ; 0044f450
    RET                                 ; 0044f451
    LEA EBX,[EAX + 0x104]               ; 0044f452
        ;   Label: LAB_0044f452
    PUSH EBX                            ; 0044f458
    MOV ECX,dword ptr [0x005ae704]      ; 0044f459 | DAT_005ae704
    PUSH ECX                            ; 0044f45f | DAT_01b4d738
    CALL FUN_00460a00                   ; 0044f460
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00460a00()
    ADD ESP,0x8                         ; 0044f465
    LEA EAX,[ESP + 0xa4]                ; 0044f468
    PUSH EAX                            ; 0044f46f
    MOV ESI,dword ptr [0x005ae704]      ; 0044f470 | DAT_005ae704
    PUSH ESI                            ; 0044f476 | DAT_01b4d738
    CALL FUN_00460db0                   ; 0044f477
        ;   XREF to: 00460db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00460db0()
    ADD ESP,0x8                         ; 0044f47c
    PUSH 0x0                            ; 0044f47f
    LEA EAX,[ESP + 0xa8]                ; 0044f481
    PUSH EAX                            ; 0044f488
    MOV EDI,dword ptr [0x005ae704]      ; 0044f489 | DAT_005ae704
    PUSH EDI                            ; 0044f48f | DAT_01b4d738
    CALL FUN_00460aa0                   ; 0044f490
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00460aa0()
    ADD ESP,0xc                         ; 0044f495
    MOV EAX,[0x005ae704]                ; 0044f498 | DAT_005ae704
    PUSH EAX                            ; 0044f49d | DAT_01b4d738
    LEA ESI,[ESP + 0x60]                ; 0044f49e
    LEA EDI,[ESP + 0x78]                ; 0044f4a2
    CALL FUN_00460d10                   ; 0044f4a6
        ;   XREF to: 00460d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00460d10()
    LEA ESI,[ESP + 0x60]                ; 0044f4ab
    ADD ESP,0x4                         ; 0044f4af
    MOVSD ES:EDI,ESI                    ; 0044f4b2
    MOVSD ES:EDI,ESI                    ; 0044f4b3
    MOVSD ES:EDI,ESI                    ; 0044f4b4
    MOV EAX,dword ptr [ESP + 0x74]      ; 0044f4b5
    MOV dword ptr [ESP + 0xc4],EAX      ; 0044f4b9
    FILD dword ptr [ESP + 0xc4]         ; 0044f4c0
    MOV EAX,dword ptr [ESP + 0x78]      ; 0044f4c7
    FLD double ptr [0x0057c7de]         ; 0044f4cb | DAT_0057c7de
    FXCH                                ; 0044f4d1
    FMUL ST1                            ; 0044f4d3
    MOV dword ptr [ESP + 0xc4],EAX      ; 0044f4d5
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0044f4dc
    FILD dword ptr [ESP + 0xc4]         ; 0044f4e0
    MOV dword ptr [ESP + 0xc4],EAX      ; 0044f4e7
    FMUL ST2                            ; 0044f4ee
    FILD dword ptr [ESP + 0xc4]         ; 0044f4f0
    FMULP ST3                           ; 0044f4f7
    FXCH                                ; 0044f4f9
    FSTP float ptr [ESP + 0x68]         ; 0044f4fb
    FSTP float ptr [ESP + 0x6c]         ; 0044f4ff
    FSTP float ptr [ESP + 0x70]         ; 0044f503
    FLD float ptr [EBX]                 ; 0044f507
    FSUB float ptr [ESP + 0x68]         ; 0044f509
    FSTP float ptr [ESP + 0x38]         ; 0044f50d
    FLD float ptr [EBX + 0x4]           ; 0044f511
    FSUB float ptr [ESP + 0x6c]         ; 0044f514
    LEA EDX,[ESP + 0x80]                ; 0044f518
    FSTP float ptr [ESP + 0x3c]         ; 0044f51f
    FLD float ptr [EBX + 0x8]           ; 0044f523
    FSUB float ptr [ESP + 0x70]         ; 0044f526
    LEA EAX,[ESP + 0x38]                ; 0044f52a
    FSTP float ptr [ESP + 0x40]         ; 0044f52e
    CMP EDX,EAX                         ; 0044f532
    JZ 0x0044f557                       ; 0044f534
        ;   XREF to: 0044f557 (CONDITIONAL_JUMP)  ; LAB_0044f557
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044f536
    MOV dword ptr [ESP + 0x80],EAX      ; 0044f53a
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0044f541
    MOV dword ptr [ESP + 0x84],EAX      ; 0044f545
    MOV EAX,dword ptr [ESP + 0x40]      ; 0044f54c
    MOV dword ptr [ESP + 0x88],EAX      ; 0044f550
    FLD float ptr [ESP + 0x84]          ; 0044f557
        ;   Label: LAB_0044f557
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f55e
    FMUL float ptr [ESP + 0x84]         ; 0044f561
    MOV EAX,dword ptr [EAX + 0x118]     ; 0044f568
    FLD float ptr [ESP + 0x80]          ; 0044f56e
    FMUL ST0                            ; 0044f575
    MOV dword ptr [ESP + 0x8c],EAX      ; 0044f577
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f57e
    FADDP                               ; 0044f581
    MOV EAX,dword ptr [EAX + 0x124]     ; 0044f583
    FLD float ptr [ESP + 0x88]          ; 0044f589
    MOV dword ptr [ESP + 0x90],EAX      ; 0044f590
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044f597
    FMUL float ptr [ESP + 0x88]         ; 0044f59a
    MOV EAX,dword ptr [EAX + 0x130]     ; 0044f5a1
    FADDP                               ; 0044f5a7
    MOV dword ptr [ESP + 0x94],EAX      ; 0044f5a9
    FSQRT                               ; 0044f5b0
    FST float ptr [ESP]                 ; 0044f5b2
    FLDZ                                ; 0044f5b5
    FCOMPP                              ; 0044f5b7
    FNSTSW AX                           ; 0044f5b9
    SAHF                                ; 0044f5bb
    JNC 0x0044f988                      ; 0044f5bc
        ;   XREF to: 0044f988 (CONDITIONAL_JUMP)  ; LAB_0044f988
    FLD1                                ; 0044f5c2
    FLD float ptr [ESP + 0x80]          ; 0044f5c4
    FXCH                                ; 0044f5cb
    FDIV float ptr [ESP]                ; 0044f5cd
    FXCH                                ; 0044f5d0
    FMUL ST1                            ; 0044f5d2
    FLD float ptr [ESP + 0x84]          ; 0044f5d4
    FMUL ST2                            ; 0044f5db
    FLD float ptr [ESP + 0x88]          ; 0044f5dd
    FMULP ST3                           ; 0044f5e4
    FXCH                                ; 0044f5e6
    FSTP float ptr [ESP + 0x80]         ; 0044f5e8
    FSTP float ptr [ESP + 0x84]         ; 0044f5ef
    FSTP float ptr [ESP + 0x88]         ; 0044f5f6
    MOV EAX,[0x01c038f4]                ; 0044f5fd | DAT_01c038f4
        ;   Label: LAB_0044f5fd
    MOV EDX,EAX                         ; 0044f602
    SAR EDX,0x1f                        ; 0044f604
    SUB EAX,EDX                         ; 0044f607
    SAR EAX,0x1                         ; 0044f609
    FLD float ptr [ESP + 0x84]          ; 0044f60b
    FMUL float ptr [ESP + 0x90]         ; 0044f612
    FLD float ptr [ESP + 0x80]          ; 0044f619
    FMUL float ptr [ESP + 0x8c]         ; 0044f620
    FADDP                               ; 0044f627
    FLD float ptr [ESP + 0x88]          ; 0044f629
    FMUL float ptr [ESP + 0x94]         ; 0044f630
    FADDP                               ; 0044f637
    FCHS                                ; 0044f639
    FST float ptr [ESP + 0xbc]          ; 0044f63b
    FMUL float ptr [ESP + 0xbc]         ; 0044f642
    FMUL float ptr [ESP + 0xbc]         ; 0044f649
    FMUL float ptr [ESP + 0xbc]         ; 0044f650
    FMUL double ptr [0x0057c7e6]        ; 0044f657 | DAT_0057c7e6
    MOV EDX,0xffff                      ; 0044f65d
    CALL FUN_00563a30                   ; 0044f662
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    SUB EDX,EAX                         ; 0044f667
    FISTP dword ptr [ESP + 0xc0]        ; 0044f669
    MOV EAX,EDX                         ; 0044f670
    MOV EDX,dword ptr [ESP + 0xc0]      ; 0044f672
    IMUL EDX                            ; 0044f679
    SHRD EAX,EDX,0x10                   ; 0044f67b
    FLDZ                                ; 0044f67f
    MOV ESI,EAX                         ; 0044f681
    FCOMP float ptr [ESP + 0xbc]        ; 0044f683
    FNSTSW AX                           ; 0044f68a
    SAHF                                ; 0044f68c
    JNC 0x0044f956                      ; 0044f68d
        ;   XREF to: 0044f956 (CONDITIONAL_JUMP)  ; LAB_0044f956
    MOV EDI,0x3f000000                  ; 0044f693
    MOV EDX,0xbf000000                  ; 0044f698
    LEA EBX,[ESP + 0x98]                ; 0044f69d
    LEA EAX,[ESP + 0x2c]                ; 0044f6a4
    MOV dword ptr [ESP + 0x2c],EDI      ; 0044f6a8
    MOV dword ptr [ESP + 0x30],EDI      ; 0044f6ac
    MOV dword ptr [ESP + 0x34],EDX      ; 0044f6b0
    MOV EDX,dword ptr [0x005ae704]      ; 0044f6b4 | DAT_005ae704
    FLD float ptr [EAX]                 ; 0044f6ba
    FMUL float ptr [0x0059c030]         ; 0044f6bc | DAT_0059c030
    FISTP dword ptr [EBX]               ; 0044f6c2
    FLD float ptr [EAX + 0x4]           ; 0044f6c4
    FMUL float ptr [0x0059c030]         ; 0044f6c7 | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 0044f6cd
    FLD float ptr [EAX + 0x8]           ; 0044f6d0
    FMUL float ptr [0x0059c030]         ; 0044f6d3 | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 0044f6d9
    LEA EAX,[ESP + 0x98]                ; 0044f6dc
    PUSH EAX                            ; 0044f6e3
    MOV EAX,dword ptr [EDX]             ; 0044f6e4 | DAT_01b4d738
    PUSH EAX                            ; 0044f6e6
    CALL FUN_0053075c                   ; 0044f6e7
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    MOV ECX,0xbf000000                  ; 0044f6ec
    LEA EBX,[ESP + 0xb8]                ; 0044f6f1
    LEA EAX,[ESP + 0x34]                ; 0044f6f8
    ADD ESP,0x8                         ; 0044f6fc
    MOV EDX,dword ptr [0x005ae704]      ; 0044f6ff | DAT_005ae704
    MOV dword ptr [ESP + 0x2c],ECX      ; 0044f705
    MOV dword ptr [ESP + 0x30],EDI      ; 0044f709
    MOV dword ptr [ESP + 0x34],ECX      ; 0044f70d
    FLD float ptr [EAX]                 ; 0044f711
    FMUL float ptr [0x0059c030]         ; 0044f713 | DAT_0059c030
    FISTP dword ptr [EBX]               ; 0044f719
    FLD float ptr [EAX + 0x4]           ; 0044f71b
    FMUL float ptr [0x0059c030]         ; 0044f71e | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 0044f724
    FLD float ptr [EAX + 0x8]           ; 0044f727
    FMUL float ptr [0x0059c030]         ; 0044f72a | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 0044f730
    LEA EAX,[ESP + 0xb0]                ; 0044f733
    PUSH EAX                            ; 0044f73a
    MOV EAX,dword ptr [EDX]             ; 0044f73b | DAT_01b4d738
    ADD EAX,0x30                        ; 0044f73d
    PUSH EAX                            ; 0044f740
    MOV EDI,ECX                         ; 0044f741
    CALL FUN_0053075c                   ; 0044f743
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 0044f748
    MOV EAX,EDI                         ; 0044f74b
    LEA EBX,[ESP + 0x50]                ; 0044f74d
    MOV dword ptr [ESP + 0x2c],EAX      ; 0044f751
    MOV dword ptr [ESP + 0x30],EAX      ; 0044f755
    MOV dword ptr [ESP + 0x34],EAX      ; 0044f759
    LEA EAX,[ESP + 0x2c]                ; 0044f75d
    MOV EDX,dword ptr [0x005ae704]      ; 0044f761 | DAT_005ae704
    FLD float ptr [EAX]                 ; 0044f767
    FMUL float ptr [0x0059c030]         ; 0044f769 | DAT_0059c030
    FISTP dword ptr [EBX]               ; 0044f76f
    FLD float ptr [EAX + 0x4]           ; 0044f771
    FMUL float ptr [0x0059c030]         ; 0044f774 | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 0044f77a
    FLD float ptr [EAX + 0x8]           ; 0044f77d
    FMUL float ptr [0x0059c030]         ; 0044f780 | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 0044f786
    LEA EAX,[ESP + 0x50]                ; 0044f789
    PUSH EAX                            ; 0044f78d
    MOV EAX,dword ptr [EDX]             ; 0044f78e | DAT_01b4d738
    ADD EAX,0x60                        ; 0044f790
    PUSH EAX                            ; 0044f793
    CALL FUN_0053075c                   ; 0044f794
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    MOV EBX,0x3f000000                  ; 0044f799
    MOV EDX,dword ptr [0x005ae704]      ; 0044f79e | DAT_005ae704
    ADD ESP,0x8                         ; 0044f7a4
    MOV EAX,EDI                         ; 0044f7a7
    MOV dword ptr [ESP + 0x2c],EBX      ; 0044f7a9
    MOV dword ptr [ESP + 0x34],EAX      ; 0044f7ad
    LEA EBX,[ESP + 0x44]                ; 0044f7b1
    LEA EAX,[ESP + 0x2c]                ; 0044f7b5
    MOV dword ptr [ESP + 0x30],EDI      ; 0044f7b9
    FLD float ptr [EAX]                 ; 0044f7bd
    FMUL float ptr [0x0059c030]         ; 0044f7bf | DAT_0059c030
    FISTP dword ptr [EBX]               ; 0044f7c5
    FLD float ptr [EAX + 0x4]           ; 0044f7c7
    FMUL float ptr [0x0059c030]         ; 0044f7ca | DAT_0059c030
    FISTP dword ptr [EBX + 0x4]         ; 0044f7d0
    FLD float ptr [EAX + 0x8]           ; 0044f7d3
    FMUL float ptr [0x0059c030]         ; 0044f7d6 | DAT_0059c030
    FISTP dword ptr [EBX + 0x8]         ; 0044f7dc
    LEA EAX,[ESP + 0x44]                ; 0044f7df
    PUSH EAX                            ; 0044f7e3
    MOV EAX,dword ptr [EDX]             ; 0044f7e4 | DAT_01b4d738
    ADD EAX,0x90                        ; 0044f7e6
    PUSH EAX                            ; 0044f7eb
    CALL FUN_0053075c                   ; 0044f7ec
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined FUN_0053075c()
    ADD ESP,0x8                         ; 0044f7f1
    MOV EAX,[0x005ae704]                ; 0044f7f4 | DAT_005ae704
    MOV EBX,dword ptr [EAX]             ; 0044f7f9 | DAT_01b4d738
    MOV dword ptr [EBX + 0x18],0xf80000 ; 0044f7fb
    MOV EBX,dword ptr [EAX]             ; 0044f802 | DAT_01b4d738
    MOV dword ptr [EBX + 0x1c],0xf80000 ; 0044f804
    MOV EBX,dword ptr [EAX]             ; 0044f80b | DAT_01b4d738
    MOV dword ptr [EBX + 0x2c],ESI      ; 0044f80d
    MOV EBX,dword ptr [EAX]             ; 0044f810 | DAT_01b4d738
    MOV dword ptr [EBX + 0x48],0x80000  ; 0044f812
    MOV EBX,dword ptr [EAX]             ; 0044f819 | DAT_01b4d738
    MOV dword ptr [EBX + 0x4c],0xf80000 ; 0044f81b
    MOV EDX,dword ptr [EAX]             ; 0044f822 | DAT_01b4d738
    MOV dword ptr [EDX + 0x5c],ESI      ; 0044f824
    MOV EDX,dword ptr [EAX]             ; 0044f827 | DAT_01b4d738
    MOV dword ptr [EDX + 0x78],0x80000  ; 0044f829
    MOV EBX,dword ptr [EAX]             ; 0044f830 | DAT_01b4d738
    MOV dword ptr [EBX + 0x7c],0x80000  ; 0044f832
    MOV EBX,dword ptr [EAX]             ; 0044f839 | DAT_01b4d738
    MOV dword ptr [EBX + 0x8c],ESI      ; 0044f83b
    MOV EBX,dword ptr [EAX]             ; 0044f841 | DAT_01b4d738
    MOV dword ptr [EBX + 0xa8],0xf80000 ; 0044f843
    MOV EBX,dword ptr [EAX]             ; 0044f84d | DAT_01b4d738
    MOV dword ptr [EBX + 0xac],0x80000  ; 0044f84f
    MOV EDX,dword ptr [EAX]             ; 0044f859 | DAT_01b4d738
    MOV dword ptr [EDX + 0xbc],ESI      ; 0044f85b
    MOV EDX,dword ptr [EAX]             ; 0044f861 | DAT_01b4d738
    MOV dword ptr [EDX + 0x20],0xffff   ; 0044f863
    MOV EDX,dword ptr [EAX]             ; 0044f86a | DAT_01b4d738
    MOV dword ptr [EDX + 0x24],0xffff   ; 0044f86c
    MOV EBX,dword ptr [EAX]             ; 0044f873 | DAT_01b4d738
    MOV dword ptr [EBX + 0x28],0xffff   ; 0044f875
    MOV EBX,dword ptr [EAX]             ; 0044f87c | DAT_01b4d738
    MOV dword ptr [EBX + 0x50],0xffff   ; 0044f87e
    MOV EBX,dword ptr [EAX]             ; 0044f885 | DAT_01b4d738
    MOV dword ptr [EBX + 0x54],0xffff   ; 0044f887
    MOV EDX,dword ptr [EAX]             ; 0044f88e | DAT_01b4d738
    MOV dword ptr [EDX + 0x58],0xffff   ; 0044f890
    MOV EDX,dword ptr [EAX]             ; 0044f897 | DAT_01b4d738
    MOV dword ptr [EDX + 0x80],0xffff   ; 0044f899
    MOV EDX,dword ptr [EAX]             ; 0044f8a3 | DAT_01b4d738
    MOV dword ptr [EDX + 0x84],0xffff   ; 0044f8a5
    MOV EDX,dword ptr [EAX]             ; 0044f8af | DAT_01b4d738
    MOV dword ptr [EDX + 0x88],0xffff   ; 0044f8b1
    MOV EBX,dword ptr [EAX]             ; 0044f8bb | DAT_01b4d738
    MOV dword ptr [EBX + 0xb0],0xffff   ; 0044f8bd
    MOV EDX,dword ptr [EAX]             ; 0044f8c7 | DAT_01b4d738
    MOV dword ptr [EDX + 0xb4],0xffff   ; 0044f8c9
    PUSH 0x5ae470                       ; 0044f8d3 | DAT_005ae470
    MOV EDX,dword ptr [EAX]             ; 0044f8d8 | DAT_01b4d738
    PUSH EAX                            ; 0044f8da | DAT_01b4d738
    MOV dword ptr [EDX + 0xb8],0xffff   ; 0044f8db
    CALL FUN_00461eb0                   ; 0044f8e5
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00461eb0()
    ADD ESP,0x8                         ; 0044f8ea
    PUSH 0x1                            ; 0044f8ed
    MOV EDX,dword ptr [0x005ae704]      ; 0044f8ef | DAT_005ae704
    MOV EDI,0xffff0001                  ; 0044f8f5
    PUSH EDX                            ; 0044f8fa | DAT_01b4d738
    MOV ESI,0x3                         ; 0044f8fb
    XOR EBX,EBX                         ; 0044f900
    CALL FUN_00461000                   ; 0044f902
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; undefined FUN_00461000()
    MOV ECX,0x4                         ; 0044f907
    ADD ESP,0x8                         ; 0044f90c
    MOV EAX,0xffff8001                  ; 0044f90f
    MOV dword ptr [ESP + 0x8],ECX       ; 0044f914
    MOV dword ptr [ESP + 0xc],EBX       ; 0044f918
    MOV dword ptr [ESP + 0x10],EBX      ; 0044f91c
    MOV dword ptr [ESP + 0x14],EDI      ; 0044f920
    MOV dword ptr [ESP + 0x18],EAX      ; 0044f924
    MOV dword ptr [ESP + 0x1c],EBX      ; 0044f928
    MOV dword ptr [ESP + 0x28],ESI      ; 0044f92c
    LEA EAX,[ESP + 0x4]                 ; 0044f930
    MOV ECX,0x1                         ; 0044f934
    PUSH EAX                            ; 0044f939
    MOV EDI,dword ptr [0x005ae704]      ; 0044f93a | DAT_005ae704
    MOV EBX,0x2                         ; 0044f940
    PUSH EDI                            ; 0044f945 | DAT_01b4d738
    MOV dword ptr [ESP + 0x28],ECX      ; 0044f946
    MOV dword ptr [ESP + 0x2c],EBX      ; 0044f94a
    CALL FUN_00460080                   ; 0044f94e
        ;   XREF to: 00460080 (UNCONDITIONAL_CALL)  ; undefined FUN_00460080()
    ADD ESP,0x8                         ; 0044f953
    PUSH 0x0                            ; 0044f956
        ;   Label: LAB_0044f956
    MOV EAX,[0x005ae704]                ; 0044f958 | DAT_005ae704
    PUSH EAX                            ; 0044f95d | DAT_01b4d738
    CALL FUN_00461000                   ; 0044f95e
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; undefined FUN_00461000()
    ADD ESP,0x8                         ; 0044f963
    MOV EDX,dword ptr [0x005ae704]      ; 0044f966 | DAT_005ae704
    PUSH EDX                            ; 0044f96c | DAT_01b4d738
    CALL thunk_FUN_004cdbc0             ; 0044f96d
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004cdbc0()
    ADD ESP,0x4                         ; 0044f972
    MOV ECX,dword ptr [EBP + 0x14]      ; 0044f975
    PUSH ECX                            ; 0044f978
    CALL FUN_00450520                   ; 0044f979
        ;   XREF to: 00450520 (UNCONDITIONAL_CALL)  ; undefined FUN_00450520()
    ADD ESP,0x4                         ; 0044f97e
    MOV ESP,EBP                         ; 0044f981
    POP EBP                             ; 0044f983
    POP EDI                             ; 0044f984
    POP ESI                             ; 0044f985
    POP EBX                             ; 0044f986
    RET                                 ; 0044f987
    XOR EDX,EDX                         ; 0044f988
        ;   Label: LAB_0044f988
    MOV dword ptr [ESP + 0x84],EDX      ; 0044f98a
    MOV dword ptr [ESP + 0x80],EDX      ; 0044f991
    MOV dword ptr [ESP + 0x88],EDX      ; 0044f998
    JMP 0x0044f5fd                      ; 0044f99f
        ;   XREF to: 0044f5fd (UNCONDITIONAL_JUMP)  ; LAB_0044f5fd

